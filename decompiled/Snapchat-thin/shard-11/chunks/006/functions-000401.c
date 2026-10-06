/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108747e58; end: 108747fa3;  */

void FUN_108747e58(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar7 = *(ulong *)(param_2 + 0x78);
  lVar8 = *(long *)(param_2 + 0x20);
  if ((*(uint *)(param_2 + 0x80) & 1) == 0) {
    uVar9 = 0;
LAB_108747f0c:
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    uVar10 = *(undefined8 *)(param_2 + 0x88);
    uVar2 = *(undefined1 *)(param_2 + 0x90);
    FUN_10867b87c(auStack_78,*(undefined8 *)(param_2 + 0xf0),param_2 + 0xf8);
    FUN_10867b87c(auStack_90,*(undefined8 *)(param_2 + 0x108),param_2 + 0x110);
    func_0x00010529465c(param_1,lVar8,uVar1,uVar7,uVar9,uVar10,uVar2,auStack_78,auStack_90);
    func_0x000107c27ae4(auStack_90);
    func_0x000107c27ae4(auStack_78);
    return;
  }
  uVar4 = uVar7;
  if ((lVar8 != 0) &&
     (uVar4 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x20), (long)uVar7 <= (long)uVar4)) {
    uVar4 = uVar7;
  }
  bVar3 = false;
  uVar7 = 0;
  uVar6 = 0;
  plVar5 = (long *)(param_2 + 0x60);
  do {
    uVar7 = uVar7 | uVar6 << 8;
    do {
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        if ((long)uVar4 <= (long)uVar7) {
          uVar7 = uVar4;
        }
        if (!bVar3) {
          uVar7 = uVar4;
        }
        uVar9 = 1;
        goto LAB_108747f0c;
      }
      uVar6 = plVar5[2] | 0x4000000000000000;
    } while ((bVar3) && (bVar3 = true, (long)uVar7 <= (long)uVar6));
    uVar7 = plVar5[2] & 0xff;
    uVar6 = uVar6 >> 8;
    bVar3 = true;
  } while( true );
}



/* Entry: 108747fa4; end: 10874802b;  */

void FUN_108747fa4(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 **)(param_1 + 0x10) = param_1 + 0x18;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  param_1[0x78] = 0;
  param_1[0x80] = 0;
  param_1[0x88] = 0;
  param_1[0x90] = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 **)(param_1 + 0x98) = param_1 + 0xa0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 **)(param_1 + 0xb0) = param_1 + 0xb8;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined1 **)(param_1 + 0xf0) = param_1 + 0xf8;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined1 **)(param_1 + 0x108) = param_1 + 0x110;
  return;
}



/* Entry: 10874802c; end: 10874806f;  */

void FUN_10874802c(long param_1)

{
  undefined8 *extraout_x8;
  long extraout_x9;
  long extraout_x10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  func_0x000108749e38();
  FUN_108748070();
  func_0x000108749e8c();
  if (extraout_x10 == 0) {
    *unaff_x20 = param_1 + 8;
  }
  else {
    *(long *)(extraout_x9 + 0x10) = param_1 + 8;
    *unaff_x19 = extraout_x8;
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
  }
  return;
}



/* Entry: 108748070; end: 10874813b;  */

void FUN_108748070(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000108749e38();
    FUN_108748070();
    FUN_108748070();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10874813c; end: 108748153;  */

void FUN_10874813c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108748154; end: 10874820f;  */

void FUN_108748154(undefined8 param_1,long *param_2)

{
  while (param_2 != (long *)0x0) {
    param_2 = (long *)*param_2;
    __ZdlPv();
  }
  return;
}



/* Entry: 108748210; end: 108748253;  */

void FUN_108748210(long param_1)

{
  undefined8 *extraout_x8;
  long extraout_x9;
  long extraout_x10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  func_0x000108749e38();
  func_0x00010867bb4c();
  func_0x000108749e8c();
  if (extraout_x10 == 0) {
    *unaff_x20 = param_1 + 8;
  }
  else {
    *(long *)(extraout_x9 + 0x10) = param_1 + 8;
    *unaff_x19 = extraout_x8;
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
  }
  return;
}



/* Entry: 108748254; end: 1087482e3;  */

void FUN_108748254(void)

{
  long extraout_x10;
  
  func_0x000108749e38();
  func_0x0001087482a4();
  func_0x000108749f10();
  FUN_1087482e4();
  func_0x000108749da4();
  if (extraout_x10 != 0) {
    func_0x000108749e4c();
    func_0x000108749f00();
  }
  return;
}



/* Entry: 1087482e4; end: 1087482fb;  */

void FUN_1087482e4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087482fc; end: 1087483c7;  */

void FUN_1087482fc(undefined8 param_1,long *param_2)

{
  while (param_2 != (long *)0x0) {
    param_2 = (long *)*param_2;
    __ZdlPv();
  }
  return;
}



/* Entry: 1087483c8; end: 1087483df;  */

void FUN_1087483c8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087483e0; end: 108748423;  */

undefined8 FUN_1087483e0(void)

{
  undefined8 unaff_x19;
  
  func_0x000108749f8c();
  FUN_108748154();
  func_0x000108749f80();
  FUN_108748424();
  return unaff_x19;
}



/* Entry: 108748424; end: 10874843b;  */

void FUN_108748424(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10874843c; end: 108748493;  */

long FUN_10874843c(long param_1)

{
  FUN_108748070(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 108748494; end: 10874854f;  */

void FUN_108748494(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10874866c(auStack_48,param_1);
    while (lStack_38 != 0 && param_2 != param_3) {
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(lStack_38 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(lStack_38 + 0x20) = uVar1;
      FUN_108748550(param_1);
      func_0x000108748598(auStack_48);
      func_0x000107c27be0();
    }
    FUN_10874879c(auStack_48);
  }
  while (param_2 != param_3) {
    FUN_1087485c4(param_1,param_1 + 8,param_2 + 0x20);
    func_0x000107c27be0();
  }
  return;
}



/* Entry: 108748550; end: 1087485c3;  */

void FUN_108748550(void)

{
  func_0x000108749e38();
  func_0x0001087486cc();
  FUN_108748718();
  return;
}



/* Entry: 1087485c4; end: 10874866b;  */

long FUN_1087485c4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = 0x30;
  __Znwm();
  uStack_48 = 1;
  uVar3 = *param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_3[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  lVar2 = param_1;
  lStack_58 = lVar1;
  lStack_50 = param_1 + 8;
  FUN_1087487e4(param_1,param_2,&uStack_60,lVar1 + 0x20);
  FUN_108748718(param_1,uStack_60,lVar2,lVar1);
  lVar2 = lStack_58;
  lStack_58 = 0;
  FUN_1087488b8(&lStack_58);
  return lVar2;
}



/* Entry: 10874866c; end: 10874869f;  */

undefined8 * FUN_10874866c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_1087486a0();
  param_1[1] = param_2;
  func_0x000108748598(param_1);
  return param_1;
}



/* Entry: 1087486a0; end: 108748717;  */

long FUN_1087486a0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *param_1;
  plVar2 = param_1 + 1;
  *param_1 = (long)plVar2;
  *(undefined8 *)(*plVar2 + 0x10) = 0;
  param_1[2] = 0;
  *plVar2 = 0;
  lVar3 = *(long *)(lVar1 + 8);
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  return lVar1;
}



/* Entry: 108748718; end: 108748763;  */

void FUN_108748718(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 108748764; end: 10874879b;  */

void FUN_108748764(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    plVar3 = (long *)*puVar1;
    if (param_1 == plVar3) {
      *puVar1 = 0;
      plVar3 = (long *)puVar1[1];
    }
    else {
      puVar1[1] = 0;
    }
    if (plVar3 != (long *)0x0) {
      do {
        do {
          plVar2 = plVar3;
          plVar3 = (long *)*plVar2;
        } while (plVar3 != (long *)0x0);
        plVar3 = (long *)plVar2[1];
      } while (plVar3 != (long *)0x0);
      return;
    }
  }
  return;
}



/* Entry: 10874879c; end: 1087487e3;  */

void FUN_10874879c(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  func_0x00010874a024();
  FUN_108748070();
  lVar1 = unaff_x19[1];
  if (lVar1 != 0) {
    while (lVar1 = *(long *)(lVar1 + 0x10), lVar1 != 0) {
      unaff_x19[1] = lVar1;
    }
    FUN_108748070(*unaff_x19);
  }
  return;
}



/* Entry: 1087487e4; end: 1087488b7;  */

long * FUN_1087487e4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = param_1 + 1;
  if ((param_2 == plVar2) || (*param_4 <= param_2[4])) {
    plVar2 = param_2;
    if ((param_2 != (long *)*param_1) && (func_0x000107c27bdc(), *param_4 < plVar2[4])) {
      param_1 = param_1 + 1;
      plVar2 = param_1;
      if ((long *)*param_1 != (long *)0x0) {
        plVar1 = (long *)*param_1;
        do {
          while (param_1 = plVar1, param_1[4] <= *param_4) {
            plVar1 = (long *)param_1[1];
            if ((long *)param_1[1] == (long *)0x0) {
              plVar2 = param_1 + 1;
              goto LAB_10874870c;
            }
          }
          plVar2 = param_1;
          plVar1 = (long *)*param_1;
        } while ((long *)*param_1 != (long *)0x0);
      }
LAB_10874870c:
      *param_3 = (long)param_1;
      return plVar2;
    }
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar2;
      param_2 = plVar2 + 1;
    }
  }
  else {
    while (plVar1 = (long *)*plVar2, param_2 = plVar2, (long *)*plVar2 != (long *)0x0) {
      while (plVar2 = plVar1, plVar2[4] < *param_4) {
        plVar1 = (long *)plVar2[1];
        if ((long *)plVar2[1] == (long *)0x0) {
          param_2 = plVar2 + 1;
          goto LAB_108748848;
        }
      }
    }
LAB_108748848:
    *param_3 = (long)plVar2;
  }
  return param_2;
}



/* Entry: 1087488b8; end: 1087488d7;  */

void FUN_1087488b8(void)

{
  func_0x000108749f80();
  FUN_1087488d8();
  return;
}



/* Entry: 1087488d8; end: 1087488ef;  */

void FUN_1087488d8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087488f0; end: 10874891b;  */

undefined8 FUN_1087488f0(undefined8 param_1,long param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10874891c(&uStack_18,-param_2);
  return uStack_18;
}



/* Entry: 10874891c; end: 1087489cf;  */

void FUN_10874891c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000108749e38();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      func_0x000108748960();
    }
  }
  else {
    while (0 < unaff_x19) {
      FUN_1087490bc();
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 1087489d0; end: 108748a7b;  */

long FUN_1087489d0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  plVar1 = param_1;
  FUN_10869cc70(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  FUN_10869ca94(auStack_58,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  uVar4 = param_2[1];
  uVar3 = *param_2;
  puStack_48[2] = param_2[2];
  puStack_48[1] = uVar4;
  *puStack_48 = uVar3;
  puStack_48 = puStack_48 + 3;
  FUN_10869ca20(param_1,auStack_58);
  lVar2 = param_1[1];
  FUN_10869cb30(auStack_58);
  return lVar2;
}



/* Entry: 108748a7c; end: 108748b6b;  */

long FUN_108748a7c(long param_1)

{
  long lStack_28;
  
  FUN_10869ccc0(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x00010867ba30(&lStack_28);
  return param_1;
}



/* Entry: 108748b6c; end: 108748c23;  */

void FUN_108748b6c(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)param_1;
    FUN_108748c24();
    for (; (plVar1 != (long *)0x0 && (param_2 != param_3)); param_2 = (long *)*param_2) {
      plVar1[2] = param_2[2];
      lVar2 = *plVar1;
      FUN_108748c54(param_1,plVar1);
      plVar1 = (long *)lVar2;
    }
    func_0x000108749ff0();
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_108748c90(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 108748c24; end: 108748c53;  */

long FUN_108748c24(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  return lVar1;
}



/* Entry: 108748c54; end: 108748c8f;  */

void FUN_108748c54(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000108749e38();
  *(undefined8 *)(unaff_x19 + 8) = *(undefined8 *)(param_2 + 0x10);
  FUN_108748ce0();
  FUN_108748fa4();
  return;
}



/* Entry: 108748c90; end: 108748cdf;  */

undefined8 FUN_108748c90(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_108749078(auStack_38);
  FUN_108748c54(param_1,auStack_38[0]);
  auStack_38[0] = 0;
  func_0x000107c28a88(auStack_38);
  return param_1;
}



/* Entry: 108748ce0; end: 108748fa3;  */

long * FUN_108748ce0(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong *puVar6;
  long *plVar7;
  ulong extraout_x8;
  long lVar8;
  ulong extraout_x9;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar6 = (ulong *)(param_1 + 1);
  uVar16 = *puVar6;
  if ((uVar16 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar16))
  goto LAB_108748ea0;
  func_0x000108749f50();
  bVar3 = 2 < uVar16;
  bVar4 = uVar16 == 3;
  func_0x000108749e60();
  uVar15 = extraout_x8;
  if (!bVar3 || bVar4) {
    uVar15 = extraout_x9;
  }
  if (uVar15 - 1 == 0) {
    uVar15 = 2;
  }
  else if ((uVar15 & uVar15 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar16 = *puVar6;
  }
  if (uVar16 > uVar15 || uVar15 == uVar16) {
    if (uVar16 <= uVar15) goto LAB_108748ea0;
    uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x000108749ddc();
    }
    if (uVar15 <= uVar11) {
      uVar15 = uVar11;
    }
    if (uVar16 <= uVar15) {
      uVar16 = *puVar6;
      goto LAB_108748ea0;
    }
    if (uVar15 == 0) {
      func_0x000107c28a80(param_1,0);
      param_1[1] = 0;
      uVar16 = 0;
      goto LAB_108748ea0;
    }
  }
  func_0x000107c28a84(puVar6,uVar15);
  func_0x000107c28a80(param_1,puVar6);
  param_1[1] = uVar15;
  lVar8 = *param_1;
  for (uVar16 = 0; uVar15 != uVar16; uVar16 = uVar16 + 1) {
    *(undefined8 *)(lVar8 + uVar16 * 8) = 0;
  }
  plVar10 = (long *)param_1[2];
  uVar16 = uVar15;
  if (plVar10 != (long *)0x0) {
    uVar11 = plVar10[1];
    uVar9 = uVar15 - 1;
    if ((uVar15 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar15 <= uVar11) {
      uVar12 = 0;
      if (uVar15 != 0) {
        uVar12 = uVar11 / uVar15;
      }
      uVar11 = uVar11 - uVar12 * uVar15;
    }
    *(long **)(lVar8 + uVar11 * 8) = param_1 + 2;
    while (plVar7 = plVar10, plVar10 = (long *)*plVar7, plVar10 != (long *)0x0) {
      uVar12 = plVar10[1];
      if ((uVar15 & uVar9) == 0) {
        uVar12 = uVar12 & uVar9;
      }
      else if (uVar15 <= uVar12) {
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = uVar12 / uVar15;
        }
        uVar12 = uVar12 - uVar1 * uVar15;
      }
      if (uVar12 != uVar11) {
        plVar14 = plVar10;
        if (*(long *)(lVar8 + uVar12 * 8) == 0) {
          *(long **)(lVar8 + uVar12 * 8) = plVar7;
          uVar11 = uVar12;
        }
        else {
          do {
            plVar13 = plVar14;
            plVar14 = (long *)*plVar13;
            if (plVar14 == (long *)0x0) break;
          } while (plVar10[2] == plVar14[2]);
          *plVar7 = (long)plVar14;
          *plVar13 = **(long **)(lVar8 + uVar12 * 8);
          **(long **)(lVar8 + uVar12 * 8) = (long)plVar10;
          plVar10 = plVar7;
        }
      }
    }
  }
LAB_108748ea0:
  uVar15 = uVar16 - 1;
  if ((uVar16 & uVar15) == 0) {
    uVar11 = uVar15 & param_2;
  }
  else {
    uVar11 = param_2;
    if (uVar16 <= param_2) {
      uVar11 = 0;
      if (uVar16 != 0) {
        uVar11 = param_2 / uVar16;
      }
      uVar11 = param_2 - uVar11 * uVar16;
    }
  }
  plVar10 = *(long **)(*param_1 + uVar11 * 8);
  if (plVar10 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    bVar4 = false;
    bVar2 = 0;
    do {
      plVar7 = plVar10;
      plVar10 = (long *)*plVar7;
      if (plVar10 == (long *)0x0) {
        return plVar7;
      }
      uVar9 = plVar10[1];
      if ((uVar16 & uVar15) == 0) {
        uVar12 = uVar9 & uVar15;
      }
      else {
        uVar12 = uVar9;
        if (uVar16 <= uVar9) {
          uVar12 = 0;
          if (uVar16 != 0) {
            uVar12 = uVar9 / uVar16;
          }
          uVar12 = uVar9 - uVar12 * uVar16;
        }
      }
      if (uVar12 != uVar11) {
        return plVar7;
      }
      if (uVar9 == param_2) {
        bVar3 = plVar10[2] == *param_3;
      }
      else {
        bVar3 = false;
      }
      bVar5 = bVar3 != bVar4;
      bVar3 = (bool)(bVar2 & bVar5);
      bVar4 = (bool)(bVar4 | bVar5);
      bVar2 = bVar2 | bVar5;
    } while (!bVar3);
  }
  return plVar7;
}



/* Entry: 108748fa4; end: 108749077;  */

void FUN_108748fa4(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
  }
  else if (uVar1 <= uVar2) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar2 / uVar1;
    }
    uVar2 = uVar2 - uVar4 * uVar1;
  }
  if (param_3 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    lVar5 = *param_1;
    *(long **)(lVar5 + uVar2 * 8) = plVar6;
    if (*param_2 != 0) {
      uVar2 = *(ulong *)(*param_2 + 8);
      if ((uVar1 & uVar3) == 0) {
        uVar2 = uVar2 & uVar3;
      }
      else if (uVar1 <= uVar2) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        uVar2 = uVar2 - uVar3 * uVar1;
      }
      *(long **)(lVar5 + uVar2 * 8) = param_2;
    }
  }
  else {
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 != 0) {
      uVar4 = *(ulong *)(*param_2 + 8);
      if ((uVar1 & uVar3) == 0) {
        uVar4 = uVar4 & uVar3;
      }
      else if (uVar1 <= uVar4) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar4 / uVar1;
        }
        uVar4 = uVar4 - uVar3 * uVar1;
      }
      if (uVar4 != uVar2) {
        *(long **)(*param_1 + uVar4 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 108749078; end: 1087490bb;  */

void FUN_108749078(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  uVar2 = *param_3;
  puVar1[1] = uVar2;
  puVar1[2] = uVar2;
  *puVar1 = 0;
  return;
}



/* Entry: 1087490bc; end: 1087490df;  */

void FUN_1087490bc(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010874a024();
  func_0x000107c27be0();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1087490e0; end: 108749407;  */

undefined1  [16]
FUN_1087490e0(float param_1,float param_2,long *param_3,undefined8 *param_4,undefined8 param_5,
             undefined8 *param_6)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar8;
  long *extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long *extraout_x10;
  long *plVar9;
  long *extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long extraout_x12;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x24;
  undefined1 auVar17 [16];
  
  plVar15 = (long *)*param_4;
  plVar16 = (long *)param_3[1];
  if (plVar16 != (long *)0x0) {
    uVar7 = (long)plVar16 - 1;
    if (((ulong)plVar16 & uVar7) == 0) {
      unaff_x24 = (long *)(uVar7 & (ulong)plVar15);
    }
    else {
      unaff_x24 = plVar15;
      if (plVar16 <= plVar15) {
        uVar1 = 0;
        if (plVar16 != (long *)0x0) {
          uVar1 = (ulong)plVar15 / (ulong)plVar16;
        }
        unaff_x24 = (long *)((long)plVar15 - uVar1 * (long)plVar16);
      }
    }
    plVar12 = *(long **)(*param_3 + (long)unaff_x24 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10874918c;
          plVar8 = (long *)plVar12[1];
          if (plVar8 != plVar15) break;
          if ((long *)plVar12[2] == plVar15) {
            uVar6 = 0;
            goto LAB_1087493d8;
          }
        }
        if (((ulong)plVar16 & uVar7) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar7);
        }
        else if (plVar16 <= plVar8) {
          uVar1 = 0;
          if (plVar16 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)plVar16;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar16);
        }
      } while (plVar8 == unaff_x24);
    }
  }
LAB_10874918c:
  plVar13 = (long *)*param_6;
  plVar8 = param_3 + 2;
  plVar12 = (long *)0x20;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = (long)plVar15;
  plVar12[2] = *plVar13;
  plVar12[3] = 0;
  plVar13 = plVar12;
  func_0x00010874a010();
  if ((plVar16 != (long *)0x0) && (param_1 <= param_2 * (float)plVar16)) goto LAB_108749368;
  bVar3 = (long *)0x2 < plVar16;
  bVar4 = plVar16 == (long *)0x3;
  func_0x000108749e60((long)plVar16 << 1);
  plVar14 = extraout_x8;
  if (!bVar3 || bVar4) {
    plVar14 = extraout_x9;
  }
  if ((long)plVar14 - 1U == 0) {
    plVar14 = (long *)0x2;
  }
  else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar16 = (long *)param_3[1];
    plVar13 = plVar14;
  }
  if (plVar16 < plVar14) {
LAB_108749220:
    if ((ulong)plVar14 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087493fc);
      (*pcVar2)();
    }
    lVar5 = (long)plVar14 << 3;
    __Znwm(lVar5);
    FUN_10874813c(param_3,lVar5);
    param_3[1] = (long)plVar14;
    lVar5 = *param_3;
    for (plVar16 = (long *)0x0; bVar4 = plVar16 <= plVar14, plVar14 != plVar16;
        plVar16 = (long *)((long)plVar16 + 1)) {
      *(undefined8 *)(lVar5 + (long)plVar16 * 8) = 0;
    }
    plVar16 = plVar14;
    if (*plVar8 != 0) {
      func_0x000108749ffc();
      plVar13 = extraout_x11;
      if (bVar4) {
        plVar13 = (long *)((long)extraout_x11 - extraout_x12 * (long)plVar14);
      }
      if (((ulong)plVar14 & extraout_x9_00) == 0) {
        plVar13 = (long *)((ulong)extraout_x11 & extraout_x9_00);
      }
      *(long **)(extraout_x8_00 + (long)plVar13 * 8) = plVar8;
      lVar5 = extraout_x8_00;
      uVar7 = extraout_x9_00;
      plVar10 = extraout_x10;
      while (plVar9 = plVar10, plVar10 = (long *)*plVar9, plVar10 != (long *)0x0) {
        plVar11 = (long *)plVar10[1];
        if (((ulong)plVar14 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (plVar14 <= plVar11) {
          uVar1 = 0;
          if (plVar14 != (long *)0x0) {
            uVar1 = (ulong)plVar11 / (ulong)plVar14;
          }
          plVar11 = (long *)((long)plVar11 - uVar1 * (long)plVar14);
        }
        if (plVar11 != plVar13) {
          if (*(long *)(lVar5 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar11 * 8) = plVar9;
            plVar13 = plVar11;
          }
          else {
            func_0x000108749eac();
            lVar5 = extraout_x8_01;
            uVar7 = extraout_x9_01;
            plVar10 = extraout_x10_00;
            plVar13 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (plVar14 < plVar16) {
    func_0x000108749f68();
    if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x000108749ddc();
    }
    if (plVar14 <= plVar13) {
      plVar14 = plVar13;
    }
    if (plVar14 < plVar16) {
      if (plVar14 != (long *)0x0) goto LAB_108749220;
      FUN_10874813c(param_3,0);
      param_3[1] = 0;
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = (long *)param_3[1];
    }
  }
  if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
    unaff_x24 = (long *)((long)plVar16 - 1U & (ulong)plVar15);
  }
  else {
    unaff_x24 = plVar15;
    if (plVar16 <= plVar15) {
      uVar7 = 0;
      if (plVar16 != (long *)0x0) {
        uVar7 = (ulong)plVar15 / (ulong)plVar16;
      }
      unaff_x24 = (long *)((long)plVar15 - uVar7 * (long)plVar16);
    }
  }
LAB_108749368:
  lVar5 = *param_3;
  plVar15 = *(long **)(lVar5 + (long)unaff_x24 * 8);
  if (plVar15 == (long *)0x0) {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
    *(long **)(lVar5 + (long)unaff_x24 * 8) = plVar8;
    if (*plVar12 != 0) {
      plVar15 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        plVar15 = (long *)((ulong)plVar15 & (long)plVar16 - 1U);
      }
      else if (plVar16 <= plVar15) {
        uVar7 = 0;
        if (plVar16 != (long *)0x0) {
          uVar7 = (ulong)plVar15 / (ulong)plVar16;
        }
        plVar15 = (long *)((long)plVar15 - uVar7 * (long)plVar16);
      }
      *(long **)(lVar5 + (long)plVar15 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar15;
    *plVar15 = (long)plVar12;
  }
  func_0x000108749f20();
  FUN_108749408();
  uVar6 = 1;
LAB_1087493d8:
  auVar17._8_8_ = uVar6;
  auVar17._0_8_ = plVar12;
  return auVar17;
}



/* Entry: 108749408; end: 108749427;  */

void FUN_108749408(void)

{
  func_0x000108749f80();
  FUN_108749428();
  return;
}



/* Entry: 108749428; end: 1087494af;  */

void FUN_108749428(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087494b0; end: 1087494df;  */

void FUN_1087494b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1087494e0();
  if (lVar1 != 0) {
    FUN_10874957c(param_1,lVar1);
  }
  return;
}



/* Entry: 1087494e0; end: 10874957b;  */

long FUN_1087494e0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10874957c; end: 1087495ab;  */

undefined8 FUN_10874957c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_1087495ac(auStack_38);
  FUN_108749408(auStack_38);
  return uVar1;
}



/* Entry: 1087495ac; end: 10874969f;  */

void FUN_1087495ac(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_108749660;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_108749660;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_108749660:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 1087496a0; end: 1087496cb;  */

undefined8 FUN_1087496a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1087496cc();
  __ZdlPv(param_2);
  return param_1;
}



/* Entry: 1087496cc; end: 10874971b;  */

long FUN_1087496cc(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x000108749fe8();
  if (*param_1 == param_2) {
    *param_1 = (long)plVar1;
  }
  param_1[2] = param_1[2] + -1;
  func_0x00010530d618(param_1[1],param_2);
  return (long)plVar1;
}



/* Entry: 10874971c; end: 10874976b;  */

long * FUN_10874971c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, plVar3[4] <= *param_3) {
        if (*param_3 <= plVar3[4]) goto LAB_108749764;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_108749764;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_108749764:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 10874976c; end: 10874981f;  */

bool FUN_10874976c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x0001087497ac();
  bVar1 = param_1 + 8 != lVar2;
  if (bVar1) {
    FUN_1087496a0(param_1,lVar2);
  }
  return bVar1;
}



/* Entry: 108749820; end: 1087498bb;  */

long FUN_108749820(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 1087498bc; end: 1087498eb;  */

undefined8 FUN_1087498bc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_1087498ec(auStack_38);
  FUN_1087499e0(auStack_38);
  return uVar1;
}



/* Entry: 1087498ec; end: 1087499df;  */

void FUN_1087498ec(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_1087499a0;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_1087499a0;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_1087499a0:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 1087499e0; end: 1087499ff;  */

void FUN_1087499e0(void)

{
  func_0x000108749f80();
  FUN_108749a00();
  return;
}



/* Entry: 108749a00; end: 108749a17;  */

void FUN_108749a00(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108749a18; end: 108749a4b;  */

void FUN_108749a18(void)

{
  func_0x000108749a30();
  return;
}



/* Entry: 108749a4c; end: 108749d73;  */

undefined1  [16]
FUN_108749a4c(undefined8 param_1,float param_2,long *param_3,undefined8 *param_4,long *param_5)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar9;
  long *extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long *extraout_x10;
  long *plVar10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long extraout_x12;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x25;
  undefined1 auVar17 [16];
  
  plVar15 = (long *)*param_4;
  plVar16 = (long *)param_3[1];
  if (plVar16 != (long *)0x0) {
    uVar8 = (long)plVar16 - 1;
    if (((ulong)plVar16 & uVar8) == 0) {
      unaff_x25 = (long *)(uVar8 & (ulong)plVar15);
    }
    else {
      unaff_x25 = plVar15;
      if (plVar16 <= plVar15) {
        uVar1 = 0;
        if (plVar16 != (long *)0x0) {
          uVar1 = (ulong)plVar15 / (ulong)plVar16;
        }
        unaff_x25 = (long *)((long)plVar15 - uVar1 * (long)plVar16);
      }
    }
    plVar13 = *(long **)(*param_3 + (long)unaff_x25 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_108749b00;
          plVar9 = (long *)plVar13[1];
          if (plVar9 != plVar15) break;
          if ((long *)plVar13[2] == plVar15) {
            uVar7 = 0;
            goto LAB_108749d40;
          }
        }
        if (((ulong)plVar16 & uVar8) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar8);
        }
        else if (plVar16 <= plVar9) {
          uVar1 = 0;
          if (plVar16 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)plVar16;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar16);
        }
      } while (plVar9 == unaff_x25);
    }
  }
LAB_108749b00:
  plVar9 = param_3 + 2;
  plVar13 = (long *)0x28;
  __Znwm();
  *plVar13 = 0;
  plVar13[1] = (long)plVar15;
  lVar6 = *param_5;
  plVar13[3] = param_5[1];
  plVar13[2] = lVar6;
  plVar13[4] = param_5[2];
  plVar5 = plVar13;
  func_0x00010874a010();
  if ((plVar16 != (long *)0x0) && ((float)lVar6 <= param_2 * (float)plVar16)) goto LAB_108749cd0;
  func_0x000108749f50();
  bVar3 = (long *)0x2 < plVar16;
  bVar4 = plVar16 == (long *)0x3;
  func_0x000108749e60();
  plVar14 = extraout_x8;
  if (!bVar3 || bVar4) {
    plVar14 = extraout_x9;
  }
  if ((long)plVar14 - 1U == 0) {
    plVar14 = (long *)0x2;
  }
  else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar16 = (long *)param_3[1];
    plVar5 = plVar14;
  }
  if (plVar16 < plVar14) {
LAB_108749b88:
    if ((ulong)plVar14 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108749d68);
      (*pcVar2)();
    }
    lVar6 = (long)plVar14 << 3;
    __Znwm(lVar6);
    FUN_1087482e4(param_3,lVar6);
    param_3[1] = (long)plVar14;
    lVar6 = *param_3;
    for (plVar16 = (long *)0x0; bVar4 = plVar16 <= plVar14, plVar14 != plVar16;
        plVar16 = (long *)((long)plVar16 + 1)) {
      *(undefined8 *)(lVar6 + (long)plVar16 * 8) = 0;
    }
    plVar16 = plVar14;
    if (*plVar9 != 0) {
      func_0x000108749ffc();
      plVar5 = extraout_x11;
      if (bVar4) {
        plVar5 = (long *)((long)extraout_x11 - extraout_x12 * (long)plVar14);
      }
      if (((ulong)plVar14 & extraout_x9_00) == 0) {
        plVar5 = (long *)((ulong)extraout_x11 & extraout_x9_00);
      }
      *(long **)(extraout_x8_00 + (long)plVar5 * 8) = plVar9;
      lVar6 = extraout_x8_00;
      uVar8 = extraout_x9_00;
      plVar11 = extraout_x10;
      while (plVar10 = plVar11, plVar11 = (long *)*plVar10, plVar11 != (long *)0x0) {
        plVar12 = (long *)plVar11[1];
        if (((ulong)plVar14 & uVar8) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar8);
        }
        else if (plVar14 <= plVar12) {
          uVar1 = 0;
          if (plVar14 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar14;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar14);
        }
        if (plVar12 != plVar5) {
          if (*(long *)(lVar6 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar6 + (long)plVar12 * 8) = plVar10;
            plVar5 = plVar12;
          }
          else {
            func_0x000108749eac();
            lVar6 = extraout_x8_01;
            uVar8 = extraout_x9_01;
            plVar11 = extraout_x10_00;
            plVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (plVar14 < plVar16) {
    func_0x000108749f68();
    if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x000108749ddc();
    }
    if (plVar14 <= plVar5) {
      plVar14 = plVar5;
    }
    if (plVar14 < plVar16) {
      if (plVar14 != (long *)0x0) goto LAB_108749b88;
      FUN_1087482e4(param_3,0);
      param_3[1] = 0;
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = (long *)param_3[1];
    }
  }
  if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar16 - 1U & (ulong)plVar15);
  }
  else {
    unaff_x25 = plVar15;
    if (plVar16 <= plVar15) {
      uVar8 = 0;
      if (plVar16 != (long *)0x0) {
        uVar8 = (ulong)plVar15 / (ulong)plVar16;
      }
      unaff_x25 = (long *)((long)plVar15 - uVar8 * (long)plVar16);
    }
  }
LAB_108749cd0:
  lVar6 = *param_3;
  plVar15 = *(long **)(lVar6 + (long)unaff_x25 * 8);
  if (plVar15 == (long *)0x0) {
    *plVar13 = *plVar9;
    *plVar9 = (long)plVar13;
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar9;
    if (*plVar13 != 0) {
      plVar15 = *(long **)(*plVar13 + 8);
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        plVar15 = (long *)((ulong)plVar15 & (long)plVar16 - 1U);
      }
      else if (plVar16 <= plVar15) {
        uVar8 = 0;
        if (plVar16 != (long *)0x0) {
          uVar8 = (ulong)plVar15 / (ulong)plVar16;
        }
        plVar15 = (long *)((long)plVar15 - uVar8 * (long)plVar16);
      }
      *(long **)(lVar6 + (long)plVar15 * 8) = plVar13;
    }
  }
  else {
    *plVar13 = *plVar15;
    *plVar15 = (long)plVar13;
  }
  func_0x000108749f20();
  FUN_1087499e0();
  uVar7 = 1;
LAB_108749d40:
  auVar17._8_8_ = uVar7;
  auVar17._0_8_ = plVar13;
  return auVar17;
}



/* Entry: 108749d74; end: 108749da3;  */

void FUN_108749d74(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  func_0x00010867bb4c(param_1,*puVar1);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 108749da4; end: 10874a033;  */

void FUN_108749da4(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x20 + 8) = uVar1;
  *(undefined8 *)(unaff_x19 + 8) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 10874a034; end: 10874a0bf;  */

void FUN_10874a034(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  long *plVar4;
  
  plVar4 = (long *)(param_2 + 0x290);
  while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
    if (*(char *)(plVar4 + 0x2c) == '\x01') {
      func_0x000107c28850(plVar4 + 0x2a);
    }
  }
  if (*(long *)(param_2 + 0x298) != 0) {
    func_0x000108750c08(*(undefined8 *)(param_2 + 0x290));
    *(undefined8 *)(param_2 + 0x290) = 0;
    lVar3 = *(long *)(param_2 + 0x288);
    for (lVar2 = 0; lVar3 != lVar2; lVar2 = lVar2 + 1) {
      *(undefined8 *)(*(long *)(param_2 + 0x280) + lVar2 * 8) = 0;
    }
    *(undefined8 *)(param_2 + 0x298) = 0;
  }
  iVar1 = (int)param_2 + 0x68;
  func_0x000107c28850();
  if (iVar1 != 0) {
    func_0x000107c28854(param_2 + 0x28);
  }
  lVar2 = *(long *)(param_2 + 0x70);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10874a0c0; end: 10874a0c7;  */

void FUN_10874a0c0(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  long *plVar4;
  
  plVar4 = (long *)(param_2 + 0x288);
  while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
    if (*(char *)(plVar4 + 0x2c) == '\x01') {
      func_0x000107c28850(plVar4 + 0x2a);
    }
  }
  if (*(long *)(param_2 + 0x290) != 0) {
    func_0x000108750c08(*(undefined8 *)(param_2 + 0x288));
    *(undefined8 *)(param_2 + 0x288) = 0;
    lVar3 = *(long *)(param_2 + 0x280);
    for (lVar2 = 0; lVar3 != lVar2; lVar2 = lVar2 + 1) {
      *(undefined8 *)(*(long *)(param_2 + 0x278) + lVar2 * 8) = 0;
    }
    *(undefined8 *)(param_2 + 0x290) = 0;
  }
  iVar1 = (int)param_2 + 0x60;
  func_0x000107c28850();
  if (iVar1 != 0) {
    func_0x000107c28854(param_2 + 0x20);
  }
  lVar2 = *(long *)(param_2 + 0x68);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10874a0c8; end: 10874a3fb;  */

void FUN_10874a0c8(long param_1)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x8;
  long lVar8;
  undefined8 extraout_x8_00;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x19;
  long unaff_x20;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  ulong unaff_x26;
  ulong uVar14;
  undefined1 auStack_1f8 [288];
  long lStack_d8;
  ulong uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  char cStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  long lStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  
  func_0x000108755eb0();
  plVar9 = (long *)(param_1 + 0x280);
  plVar11 = plVar9;
  FUN_108750c68();
  if (plVar11 == (long *)0x0) {
    _bzero(auStack_1f8,0x120);
    FUN_108747fa4(auStack_1f8);
    lStack_d8 = 0x41019f;
    uStack_d0 = uStack_d0 & 0xffffffffffffff00;
    cStack_c0 = '\0';
    uStack_b8 = 0;
    uStack_90 = 0;
    uVar10 = unaff_x19;
    FUN_108848654();
    uVar13 = *(ulong *)(unaff_x20 + 0x288);
    if (uVar13 != 0) {
      uVar14 = uVar13 - 1;
      uVar12 = (uint)uVar13;
      if ((uVar13 & uVar14) == 0) {
        unaff_x26 = uVar12 - 1 & uVar10;
      }
      else {
        unaff_x26 = uVar10;
        if (uVar13 <= uVar10) {
          uVar3 = 0;
          if (uVar12 != 0) {
            uVar3 = (uint)uVar10 / uVar12;
          }
          unaff_x26 = (ulong)((uint)uVar10 - uVar3 * uVar12);
        }
      }
      plVar11 = *(long **)(*plVar9 + unaff_x26 * 8);
      uVar6 = uVar10;
      if (plVar11 != (long *)0x0) {
        do {
          while( true ) {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_10874a1cc;
            uVar7 = plVar11[1];
            if (uVar7 != uVar10) break;
            func_0x0001087564bc();
            if ((uVar6 & 1) != 0) goto LAB_10874a310;
          }
          if ((uVar13 & uVar14) == 0) {
            uVar7 = uVar7 & uVar14;
          }
          else if (uVar13 <= uVar7) {
            uVar4 = 0;
            if (uVar13 != 0) {
              uVar4 = uVar7 / uVar13;
            }
            uVar7 = uVar7 - uVar4 * uVar13;
          }
        } while (uVar7 == unaff_x26);
      }
    }
LAB_10874a1cc:
    plVar11 = (long *)0x198;
    __Znwm();
    plVar1 = (long *)(unaff_x20 + 0x290);
    uStack_78 = 0;
    *plVar11 = 0;
    plVar11[1] = uVar10;
    plStack_88 = plVar11;
    plStack_80 = plVar1;
    func_0x000107c27994(plVar11 + 2);
    _bzero(plVar11 + 5,0x170);
    FUN_108747fa4(plVar11 + 5);
    plVar11[0x29] = 0x41019f;
    *(undefined1 *)(plVar11 + 0x2a) = 0;
    *(undefined1 *)(plVar11 + 0x2c) = 0;
    *(undefined1 *)(plVar11 + 0x2d) = 0;
    *(undefined1 *)(plVar11 + 0x32) = 0;
    uStack_78 = CONCAT71(uStack_78._1_7_,1);
    func_0x0001087566dc();
    if ((uVar13 == 0) || (*(float *)(unaff_x20 + 0x2a0) * (float)uVar13 < (float)extraout_x8)) {
      func_0x0001087563c4(uVar13 << 1);
      FUN_108750d3c(plVar9);
      uVar13 = *(ulong *)(unaff_x20 + 0x288);
      if ((uVar13 & uVar13 - 1) == 0) {
        unaff_x26 = (int)uVar13 - 1 & uVar10;
      }
      else {
        unaff_x26 = uVar10;
        if (uVar13 <= uVar10) {
          uVar14 = 0;
          if (uVar13 != 0) {
            uVar14 = uVar10 / uVar13;
          }
          unaff_x26 = uVar10 - uVar14 * uVar13;
        }
      }
    }
    lVar8 = *plVar9;
    plVar9 = *(long **)(lVar8 + unaff_x26 * 8);
    if (plVar9 == (long *)0x0) {
      *plVar11 = *plVar1;
      *plVar1 = (long)plVar11;
      *(long **)(lVar8 + unaff_x26 * 8) = plVar1;
      if (*plVar11 != 0) {
        uVar10 = *(ulong *)(*plVar11 + 8);
        if ((uVar13 & uVar13 - 1) == 0) {
          uVar10 = uVar10 & uVar13 - 1;
        }
        else if (uVar13 <= uVar10) {
          uVar14 = 0;
          if (uVar13 != 0) {
            uVar14 = uVar10 / uVar13;
          }
          uVar10 = uVar10 - uVar14 * uVar13;
        }
        *(long **)(lVar8 + uVar10 * 8) = plVar11;
      }
    }
    else {
      *plVar11 = *plVar9;
      *plVar9 = (long)plVar11;
    }
    plStack_88 = (long *)0x0;
    func_0x0001087566dc();
    *(undefined8 *)(unaff_x20 + 0x298) = extraout_x8_00;
    FUN_108750ef4(&plStack_88);
LAB_10874a310:
    FUN_108746f70(plVar11 + 5,auStack_1f8);
    plVar11[0x29] = lStack_d8;
    cVar2 = (char)plVar11[0x2c];
    if (cVar2 == cStack_c0) {
      if (cVar2 != '\0') {
        FUN_1087509bc(plVar11 + 0x2a,&uStack_d0);
      }
    }
    else if (cVar2 == '\0') {
      plVar11[0x2a] = uStack_d0;
      uStack_d0 = 0;
      *(undefined4 *)(plVar11 + 0x2b) = uStack_c8;
      *(undefined1 *)((long)plVar11 + 0x15c) = uStack_c4;
      *(undefined1 *)(plVar11 + 0x2c) = 1;
    }
    else {
      FUN_10874ef68(plVar11 + 0x2a);
    }
    plVar11[0x2e] = lStack_b0;
    plVar11[0x2d] = CONCAT71(uStack_b7,uStack_b8);
    plVar11[0x30] = CONCAT71(uStack_9f,uStack_a0);
    plVar11[0x2f] = lStack_a8;
    *(ulong *)((long)plVar11 + 0x189) = CONCAT17(uStack_90,uStack_97);
    *(ulong *)((long)plVar11 + 0x181) = CONCAT17(uStack_98,uStack_9f);
    func_0x0001087509ec(auStack_1f8);
    iVar5 = (int)unaff_x19 + 0x18;
    func_0x000107c29e74();
    *(int *)(plVar11 + 0x29) = iVar5 + 0x41019f;
  }
  return;
}



/* Entry: 10874a3fc; end: 10874a403;  */

void FUN_10874a3fc(long param_1)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x8;
  long lVar8;
  undefined8 extraout_x8_00;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x19;
  long unaff_x20;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  ulong unaff_x26;
  ulong uVar14;
  undefined1 auStack_1f8 [288];
  long lStack_d8;
  ulong uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  char cStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  long lStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  
  param_1 = param_1 + -0x10;
  func_0x000108755eb0();
  plVar9 = (long *)(param_1 + 0x280);
  plVar11 = plVar9;
  FUN_108750c68();
  if (plVar11 == (long *)0x0) {
    _bzero(auStack_1f8,0x120);
    FUN_108747fa4(auStack_1f8);
    lStack_d8 = 0x41019f;
    uStack_d0 = uStack_d0 & 0xffffffffffffff00;
    cStack_c0 = '\0';
    uStack_b8 = 0;
    uStack_90 = 0;
    uVar10 = unaff_x19;
    FUN_108848654();
    uVar13 = *(ulong *)(unaff_x20 + 0x288);
    if (uVar13 != 0) {
      uVar14 = uVar13 - 1;
      uVar12 = (uint)uVar13;
      if ((uVar13 & uVar14) == 0) {
        unaff_x26 = uVar12 - 1 & uVar10;
      }
      else {
        unaff_x26 = uVar10;
        if (uVar13 <= uVar10) {
          uVar3 = 0;
          if (uVar12 != 0) {
            uVar3 = (uint)uVar10 / uVar12;
          }
          unaff_x26 = (ulong)((uint)uVar10 - uVar3 * uVar12);
        }
      }
      plVar11 = *(long **)(*plVar9 + unaff_x26 * 8);
      uVar6 = uVar10;
      if (plVar11 != (long *)0x0) {
        do {
          while( true ) {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_10874a1cc;
            uVar7 = plVar11[1];
            if (uVar7 != uVar10) break;
            func_0x0001087564bc();
            if ((uVar6 & 1) != 0) goto LAB_10874a310;
          }
          if ((uVar13 & uVar14) == 0) {
            uVar7 = uVar7 & uVar14;
          }
          else if (uVar13 <= uVar7) {
            uVar4 = 0;
            if (uVar13 != 0) {
              uVar4 = uVar7 / uVar13;
            }
            uVar7 = uVar7 - uVar4 * uVar13;
          }
        } while (uVar7 == unaff_x26);
      }
    }
LAB_10874a1cc:
    plVar11 = (long *)0x198;
    __Znwm();
    plVar1 = (long *)(unaff_x20 + 0x290);
    uStack_78 = 0;
    *plVar11 = 0;
    plVar11[1] = uVar10;
    plStack_88 = plVar11;
    plStack_80 = plVar1;
    func_0x000107c27994(plVar11 + 2);
    _bzero(plVar11 + 5,0x170);
    FUN_108747fa4(plVar11 + 5);
    plVar11[0x29] = 0x41019f;
    *(undefined1 *)(plVar11 + 0x2a) = 0;
    *(undefined1 *)(plVar11 + 0x2c) = 0;
    *(undefined1 *)(plVar11 + 0x2d) = 0;
    *(undefined1 *)(plVar11 + 0x32) = 0;
    uStack_78 = CONCAT71(uStack_78._1_7_,1);
    func_0x0001087566dc();
    if ((uVar13 == 0) || (*(float *)(unaff_x20 + 0x2a0) * (float)uVar13 < (float)extraout_x8)) {
      func_0x0001087563c4(uVar13 << 1);
      FUN_108750d3c(plVar9);
      uVar13 = *(ulong *)(unaff_x20 + 0x288);
      if ((uVar13 & uVar13 - 1) == 0) {
        unaff_x26 = (int)uVar13 - 1 & uVar10;
      }
      else {
        unaff_x26 = uVar10;
        if (uVar13 <= uVar10) {
          uVar14 = 0;
          if (uVar13 != 0) {
            uVar14 = uVar10 / uVar13;
          }
          unaff_x26 = uVar10 - uVar14 * uVar13;
        }
      }
    }
    lVar8 = *plVar9;
    plVar9 = *(long **)(lVar8 + unaff_x26 * 8);
    if (plVar9 == (long *)0x0) {
      *plVar11 = *plVar1;
      *plVar1 = (long)plVar11;
      *(long **)(lVar8 + unaff_x26 * 8) = plVar1;
      if (*plVar11 != 0) {
        uVar10 = *(ulong *)(*plVar11 + 8);
        if ((uVar13 & uVar13 - 1) == 0) {
          uVar10 = uVar10 & uVar13 - 1;
        }
        else if (uVar13 <= uVar10) {
          uVar14 = 0;
          if (uVar13 != 0) {
            uVar14 = uVar10 / uVar13;
          }
          uVar10 = uVar10 - uVar14 * uVar13;
        }
        *(long **)(lVar8 + uVar10 * 8) = plVar11;
      }
    }
    else {
      *plVar11 = *plVar9;
      *plVar9 = (long)plVar11;
    }
    plStack_88 = (long *)0x0;
    func_0x0001087566dc();
    *(undefined8 *)(unaff_x20 + 0x298) = extraout_x8_00;
    FUN_108750ef4(&plStack_88);
LAB_10874a310:
    FUN_108746f70(plVar11 + 5,auStack_1f8);
    plVar11[0x29] = lStack_d8;
    cVar2 = (char)plVar11[0x2c];
    if (cVar2 == cStack_c0) {
      if (cVar2 != '\0') {
        FUN_1087509bc(plVar11 + 0x2a,&uStack_d0);
      }
    }
    else if (cVar2 == '\0') {
      plVar11[0x2a] = uStack_d0;
      uStack_d0 = 0;
      *(undefined4 *)(plVar11 + 0x2b) = uStack_c8;
      *(undefined1 *)((long)plVar11 + 0x15c) = uStack_c4;
      *(undefined1 *)(plVar11 + 0x2c) = 1;
    }
    else {
      FUN_10874ef68(plVar11 + 0x2a);
    }
    plVar11[0x2e] = lStack_b0;
    plVar11[0x2d] = CONCAT71(uStack_b7,uStack_b8);
    plVar11[0x30] = CONCAT71(uStack_9f,uStack_a0);
    plVar11[0x2f] = lStack_a8;
    *(ulong *)((long)plVar11 + 0x189) = CONCAT17(uStack_90,uStack_97);
    *(ulong *)((long)plVar11 + 0x181) = CONCAT17(uStack_98,uStack_9f);
    func_0x0001087509ec(auStack_1f8);
    iVar5 = (int)unaff_x19 + 0x18;
    func_0x000107c29e74();
    *(int *)(plVar11 + 0x29) = iVar5 + 0x41019f;
  }
  return;
}



/* Entry: 10874a404; end: 10874a65b;  */

void FUN_10874a404(long param_1,undefined8 param_2)

{
  long *plVar1;
  long **pplVar2;
  byte *pbVar3;
  long extraout_x8;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  long *plVar13;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_78 [40];
  
  pplVar2 = &plStack_a0;
  plVar1 = (long *)(param_1 + 0x280);
  FUN_108750c68();
  if (plVar1 == (long *)0x0) {
    return;
  }
  pbVar12 = (byte *)(plVar1 + 5);
  if (*pbVar12 == 1) {
    plVar13 = *(long **)(param_1 + 0xe8);
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000108755cec();
    plStack_a0 = (long *)(extraout_x8 + 0x10);
    plStack_98 = (long *)0x0;
    uStack_80 = 0x2be;
    func_0x000107c29054(&plStack_a0,(int)plVar1[0x29]);
    FUN_10874a65c();
    pbVar3 = pbVar12;
    FUN_10874a6e4(pbVar12);
    FUN_10874a6a0(pplVar2,pbVar3);
    func_0x000107c2884c(auStack_78,pplVar2);
    func_0x000108756544(*(undefined8 *)(*plVar13 + 0x50));
    func_0x000107c2882c(auStack_78);
    func_0x000107c2882c(&plStack_a0);
  }
  func_0x000108755ea8(param_1,param_2,pbVar12);
  if (((*pbVar12 & 1) != 0) || ((char)plVar1[0x32] != '\0')) {
    (**(code **)(**(long **)(param_1 + 0x88) + 0x20))(*(long **)(param_1 + 0x88),param_2);
  }
  uVar6 = *(ulong *)(param_1 + 0x288);
  lVar4 = *plVar1;
  uVar5 = plVar1[1];
  uVar8 = uVar6 - 1;
  if ((uVar6 & uVar8) == 0) {
    uVar5 = uVar8 & uVar5;
  }
  else if (uVar6 <= uVar5) {
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar10 * uVar6;
  }
  lVar9 = *(long *)(param_1 + 0x280);
  plVar13 = *(long **)(lVar9 + uVar5 * 8);
  do {
    plVar7 = plVar13;
    plVar13 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar1);
  plStack_98 = (long *)(param_1 + 0x290);
  if (plVar7 == plStack_98) {
LAB_10874a580:
    if (lVar4 == 0) {
LAB_10874a5b4:
      *(undefined8 *)(lVar9 + uVar5 * 8) = 0;
      lVar4 = *plVar1;
      goto LAB_10874a5bc;
    }
    uVar10 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar6 <= uVar10) {
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = uVar10 / uVar6;
        }
        uVar11 = uVar10 - uVar11 * uVar6;
      }
    }
    if (uVar11 != uVar5) goto LAB_10874a5b4;
  }
  else {
    uVar10 = plVar7[1];
    if ((uVar6 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar6 <= uVar10) {
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar11 * uVar6;
    }
    if (uVar10 != uVar5) goto LAB_10874a580;
LAB_10874a5bc:
    if (lVar4 == 0) goto LAB_10874a5f4;
    uVar10 = *(ulong *)(lVar4 + 8);
  }
  if ((uVar6 & uVar8) == 0) {
    uVar10 = uVar10 & uVar8;
  }
  else if (uVar6 <= uVar10) {
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = uVar10 / uVar6;
    }
    uVar10 = uVar10 - uVar8 * uVar6;
  }
  if (uVar10 != uVar5) {
    *(long **)(lVar9 + uVar10 * 8) = plVar7;
    lVar4 = *plVar1;
  }
LAB_10874a5f4:
  *plVar7 = lVar4;
  *plVar1 = 0;
  *(long *)(param_1 + 0x298) = *(long *)(param_1 + 0x298) + -1;
  uStack_90 = 1;
  plStack_a0 = plVar1;
  FUN_108750ef4(&plStack_a0);
  return;
}



/* Entry: 10874a65c; end: 10874a69f;  */

void FUN_10874a65c(void)

{
  func_0x000108756130();
  func_0x000108755c38();
  func_0x000108755928(0x24b);
  func_0x0001087559dc();
  func_0x0001087558b0();
  return;
}



/* Entry: 10874a6a0; end: 10874a6e3;  */

void FUN_10874a6a0(void)

{
  func_0x000108756130();
  func_0x000108755c38();
  func_0x000108755928(0x24f);
  func_0x0001087559dc();
  func_0x0001087558b0();
  return;
}



/* Entry: 10874a6e4; end: 10874a793;  */

undefined4 FUN_10874a6e4(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar4 = 0x71024c;
  if (*(long *)(param_1 + 0x118) != 0) {
    if (*(char *)(param_1 + 0x90) == '\x01') {
      lVar3 = param_1 + 0x110;
      func_0x000107c27bdc();
      bVar1 = *(long *)(param_1 + 0x88) < *(long *)(lVar3 + 0x20);
    }
    else {
      bVar1 = false;
    }
    uVar4 = 0x71024c;
    if (*(char *)(param_1 + 0x80) == '\x01') {
      lVar3 = *(long *)(*(long *)(param_1 + 0x108) + 0x20);
      bVar2 = false;
      if (lVar3 < *(long *)(param_1 + 0x78)) {
        bVar2 = bVar1;
      }
      if (bVar2) {
        return 0x71024f;
      }
      uVar4 = 0x71024e;
      if (*(long *)(param_1 + 0x78) <= lVar3) {
        uVar4 = 0x71024c;
      }
    }
    if (bVar1) {
      uVar4 = 0x71024d;
    }
  }
  return uVar4;
}



/* Entry: 10874a794; end: 10874a86b;  */

void FUN_10874a794(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  
  if (*(char *)(param_3 + 0x138) == '\x01') {
    if (param_4 == 0) {
      func_0x000107c28850(param_3 + 0x128);
    }
    else {
      iVar1 = *(int *)(param_3 + 0x130);
      bVar2 = *(byte *)(param_3 + 0x134);
      func_0x000107c28850(param_3 + 0x128);
      if ((bVar2 & 1) == 0) {
        if (iVar1 - 1U < 2) {
          func_0x000108756174();
          FUN_10874f6e4();
        }
        else if ((iVar1 == 0) || (iVar1 == 3)) {
          func_0x000108756764();
          func_0x000108756174();
          FUN_10874bb4c();
        }
      }
    }
    lVar3 = param_3 + 0x128;
    if (*(char *)(param_3 + 0x138) == '\x01') {
      func_0x000107c27f98();
      *(undefined1 *)(lVar3 + 0x10) = 0;
    }
    return;
  }
  return;
}



/* Entry: 10874a86c; end: 10874a873;  */

void FUN_10874a86c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long **pplVar2;
  byte *pbVar3;
  long extraout_x8;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  long *plVar13;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_78 [40];
  
  pplVar2 = &plStack_a0;
  plVar1 = (long *)(param_1 + 0x270);
  FUN_108750c68();
  if (plVar1 == (long *)0x0) {
    return;
  }
  pbVar12 = (byte *)(plVar1 + 5);
  if (*pbVar12 == 1) {
    plVar13 = *(long **)(param_1 + 0xd8);
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000108755cec();
    plStack_a0 = (long *)(extraout_x8 + 0x10);
    plStack_98 = (long *)0x0;
    uStack_80 = 0x2be;
    func_0x000107c29054(&plStack_a0,(int)plVar1[0x29]);
    FUN_10874a65c();
    pbVar3 = pbVar12;
    FUN_10874a6e4(pbVar12);
    FUN_10874a6a0(pplVar2,pbVar3);
    func_0x000107c2884c(auStack_78,pplVar2);
    func_0x000108756544(*(undefined8 *)(*plVar13 + 0x50));
    func_0x000107c2882c(auStack_78);
    func_0x000107c2882c(&plStack_a0);
  }
  func_0x000108755ea8(param_1 + -0x10,param_2,pbVar12);
  if (((*pbVar12 & 1) != 0) || ((char)plVar1[0x32] != '\0')) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x20))(*(long **)(param_1 + 0x78),param_2);
  }
  uVar6 = *(ulong *)(param_1 + 0x278);
  lVar4 = *plVar1;
  uVar5 = plVar1[1];
  uVar8 = uVar6 - 1;
  if ((uVar6 & uVar8) == 0) {
    uVar5 = uVar8 & uVar5;
  }
  else if (uVar6 <= uVar5) {
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar10 * uVar6;
  }
  lVar9 = *(long *)(param_1 + 0x270);
  plVar13 = *(long **)(lVar9 + uVar5 * 8);
  do {
    plVar7 = plVar13;
    plVar13 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar1);
  plStack_98 = (long *)(param_1 + 0x280);
  if (plVar7 == plStack_98) {
LAB_10874a580:
    if (lVar4 == 0) {
LAB_10874a5b4:
      *(undefined8 *)(lVar9 + uVar5 * 8) = 0;
      lVar4 = *plVar1;
      goto LAB_10874a5bc;
    }
    uVar10 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar6 <= uVar10) {
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = uVar10 / uVar6;
        }
        uVar11 = uVar10 - uVar11 * uVar6;
      }
    }
    if (uVar11 != uVar5) goto LAB_10874a5b4;
  }
  else {
    uVar10 = plVar7[1];
    if ((uVar6 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar6 <= uVar10) {
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar11 * uVar6;
    }
    if (uVar10 != uVar5) goto LAB_10874a580;
LAB_10874a5bc:
    if (lVar4 == 0) goto LAB_10874a5f4;
    uVar10 = *(ulong *)(lVar4 + 8);
  }
  if ((uVar6 & uVar8) == 0) {
    uVar10 = uVar10 & uVar8;
  }
  else if (uVar6 <= uVar10) {
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = uVar10 / uVar6;
    }
    uVar10 = uVar10 - uVar8 * uVar6;
  }
  if (uVar10 != uVar5) {
    *(long **)(lVar9 + uVar10 * 8) = plVar7;
    lVar4 = *plVar1;
  }
LAB_10874a5f4:
  *plVar7 = lVar4;
  *plVar1 = 0;
  *(long *)(param_1 + 0x288) = *(long *)(param_1 + 0x288) + -1;
  uStack_90 = 1;
  plStack_a0 = plVar1;
  FUN_108750ef4(&plStack_a0);
  return;
}



/* Entry: 10874a874; end: 10874a97b;  */

void FUN_10874a874(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uStack_148;
  undefined1 auStack_140 [24];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined2 uStack_108;
  undefined1 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [80];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [88];
  
  uStack_148 = param_1;
  func_0x000107c27994(auStack_140);
  uStack_120 = param_3[1];
  uStack_128 = *param_3;
  uStack_110 = param_3[3];
  uStack_118 = param_3[2];
  uStack_108 = *(undefined2 *)(param_3 + 4);
  uStack_100 = param_4;
  func_0x000108750f38(auStack_f0,&uStack_148);
  func_0x000108756290(auStack_a0);
  FUN_10875100c(auStack_98,auStack_f0);
  FUN_108750f8c(auStack_f8);
  func_0x000108750f64(auStack_98);
  func_0x000108750f64(auStack_f0);
  func_0x000107c27914(auStack_140);
  func_0x000107c27f9c(auStack_f8);
  return;
}



/* Entry: 10874a97c; end: 10874aa37;  */

void FUN_10874a97c(void)

{
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  func_0x000108756728();
  func_0x00010875658c();
  FUN_1087512f8(auStack_90,auStack_c0);
  func_0x000108756290(auStack_68);
  FUN_1087513bc(auStack_60,auStack_90);
  FUN_10875133c(auStack_98);
  func_0x00010875131c(auStack_60);
  func_0x00010875131c(auStack_90);
  func_0x000108755f90();
  func_0x000108756314();
  return;
}



/* Entry: 10874aa38; end: 10874aaf3;  */

void FUN_10874aa38(void)

{
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  func_0x000108756728();
  func_0x00010875658c();
  FUN_108751684(auStack_90,auStack_c0);
  func_0x000108756290(auStack_68);
  FUN_108751748(auStack_60,auStack_90);
  FUN_1087516c8(auStack_98);
  func_0x0001087516a8(auStack_60);
  func_0x0001087516a8(auStack_90);
  func_0x000108755f90();
  func_0x000108756314();
  return;
}



/* Entry: 10874aaf4; end: 10874abb7;  */

void FUN_10874aaf4(undefined8 param_1)

{
  undefined8 auStack_a8 [4];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  auStack_a8[0] = param_1;
  func_0x00010875658c();
  FUN_108751a10(auStack_80,auStack_a8);
  func_0x000108756290(auStack_60);
  FUN_108751ae0(auStack_58,auStack_80);
  FUN_108751a60(auStack_88);
  func_0x000108751a38(auStack_58);
  func_0x000108751a38(auStack_80);
  func_0x000108755f90();
  func_0x000108756314();
  return;
}



/* Entry: 10874abb8; end: 10874ad2b;  */

void FUN_10874abb8(void)

{
  long lVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  undefined1 auStack_260 [24];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [464];
  byte bStack_48;
  
  func_0x000108755c04();
  func_0x000107c27f94(auStack_260);
  func_0x000107c287c4(extraout_x8,auStack_260);
  func_0x0001087566e8(*(undefined8 *)(unaff_x19 + 0x98));
  func_0x000108755be0();
  if ((bStack_48 & 1) == 0) {
    func_0x000108755df8(*(undefined8 *)(unaff_x19 + 0x88));
    func_0x0001087562a0();
  }
  else {
    lVar1 = unaff_x19 + 0x280;
    func_0x000108756298();
    if (lVar1 == 0) {
      func_0x000108755df8(*(undefined8 *)(unaff_x19 + 0x88));
      func_0x0001087562a0();
    }
    else if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
      func_0x000108755df8(*(undefined8 *)(unaff_x19 + 0x88));
      (*extraout_x8_00)();
    }
    else if (*(int *)(lVar1 + 0x2c) < 1) {
      FUN_108747470((byte *)(lVar1 + 0x28));
      uStack_230 = 0;
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_248 = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      func_0x000108755e38();
      FUN_10869ccc0(&uStack_248);
      func_0x000108755f88();
    }
  }
  func_0x000107c287c8(auStack_260);
  func_0x000107c288c8(auStack_218);
  func_0x000107c27fb8(auStack_260);
  return;
}



/* Entry: 10874ad2c; end: 10874b0cb;  */

undefined8 *
FUN_10874ad2c(undefined8 param_1,undefined8 param_2,uint param_3,undefined1 *param_4,
             undefined8 param_5,long *param_6,long *param_7,long *param_8)

{
  undefined1 *puVar1;
  ulong *puVar2;
  byte bVar3;
  undefined1 uVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  code **ppcVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  undefined8 *puVar13;
  code **unaff_x20;
  byte *pbVar14;
  ulong *puVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long alStack_10a8 [4];
  undefined4 uStack_1088;
  undefined1 uStack_1080;
  undefined7 uStack_107f;
  undefined1 uStack_1078;
  undefined7 uStack_1077;
  long lStack_1068;
  long lStack_1060;
  byte bStack_1050;
  char cStack_104f;
  undefined8 uStack_1048;
  byte *pbStack_1040;
  undefined1 uStack_1038;
  undefined1 auStack_1030 [384];
  byte bStack_eb0;
  char cStack_e60;
  long *plStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  ulong uStack_e28;
  undefined8 *puStack_e00;
  code *pcStack_df8;
  long alStack_a18 [133];
  undefined1 uStack_5f0;
  undefined1 auStack_5e8 [88];
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  code *pcStack_530;
  char cStack_521;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  code *pcStack_500;
  undefined **ppuStack_4f8;
  long *plStack_4f0;
  code *pcStack_4e0;
  undefined **ppuStack_4d8;
  long *plStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  code *pcStack_330;
  undefined8 uStack_10;
  
  func_0x00010875615c();
  plStack_e50 = param_8;
  uStack_e48 = param_5;
  func_0x000108755c04();
  uStack_10 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_510 = 0;
  func_0x000104be6ea0(&uStack_520,(param_6[1] - *param_6) / 0x1a8);
  cStack_521 = (char)((ulong)param_4 >> 0x20);
  pcVar17 = unaff_x20[0x36];
  uVar16 = *(undefined8 *)(unaff_x19 + 0x98);
  pcStack_4e0 = FUN_108752e54;
  ppuStack_4d8 = &PTR_FUN_110a6a968;
  plVar6 = (long *)0x28;
  pcStack_530 = pcVar17;
  __Znwm();
  *plVar6 = (long)&uStack_520;
  plVar6[1] = unaff_x19;
  plVar6[2] = (long)&cStack_521;
  plVar6[3] = (long)&pcStack_530;
  plVar6[4] = (long)unaff_x20;
  plStack_4d0 = plVar6;
  FUN_1086a1530(uVar16);
  func_0x0001087561e4();
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_540 = 0;
  func_0x000105294d1c(&uStack_550,(param_7[1] - *param_7) / 0x18);
  param_3 = param_3 | (uint)((ulong)param_4 >> 0x20);
  puVar2 = (ulong *)param_7[1];
  for (puVar15 = (ulong *)*param_7; puVar15 != puVar2; puVar15 = puVar15 + 3) {
    func_0x000107c27994(&pcStack_500);
    plStack_4d0 = plStack_4f0;
    ppuStack_4d8 = ppuStack_4f8;
    pcStack_4e0 = pcStack_500;
    uStack_e28 = *puVar15;
    ppuStack_4f8 = (undefined **)0x0;
    pcStack_500 = (code *)0x0;
    plStack_4f0 = (long *)0x0;
    uStack_4c0 = puVar15[1];
    if ((puVar15[2] & 1) == 0) {
      uStack_4c0 = uStack_e28 | 0x4000000000000000;
    }
    uStack_e38 = 0;
    uStack_e30 = 0;
    uStack_e40 = 0;
    uStack_4c8 = uStack_e28;
    func_0x000107c27914(&uStack_e40);
    func_0x000107c27914(&pcStack_500);
    func_0x0001052950c4(&uStack_550,&pcStack_4e0);
    func_0x000107c27914(&pcStack_4e0);
  }
  plVar6 = *(long **)(unaff_x19 + 0x88);
  uStack_568 = uStack_518;
  uStack_570 = uStack_520;
  uStack_560 = uStack_510;
  uStack_520 = 0;
  uStack_518 = 0;
  uStack_510 = 0;
  uStack_588 = uStack_548;
  uStack_590 = uStack_550;
  uStack_580 = uStack_540;
  uStack_550 = 0;
  uStack_548 = 0;
  uStack_540 = 0;
  FUN_108747e58(auStack_5e8,uStack_e48);
  if ((param_3 & 1) == 0) {
    alStack_a18[0]._0_1_ = 0;
    uStack_5f0 = 0;
  }
  else {
    func_0x000107c291f8(&uStack_e40,*(undefined8 *)(unaff_x19 + 0xa8));
    func_0x000104bfae94(alStack_a18,&uStack_e40);
  }
  plVar11 = alStack_a18;
  plVar12 = plStack_e50;
  func_0x000105294bc8(&pcStack_4e0,&uStack_570,&uStack_590,auStack_5e8,plVar11,plStack_e50,
                      in_stack_00000060,in_stack_00000068);
  uVar10 = 0;
  ppcVar9 = unaff_x20;
  (**(code **)(*plVar6 + 0x10))(plVar6);
  func_0x000104bf5850(&pcStack_4e0);
  func_0x000104be16c8(alStack_a18);
  if ((param_3 & 1) != 0) {
    func_0x000107c27a60(&uStack_e40);
  }
  func_0x000104bf5888(auStack_5e8);
  func_0x000104bf58b8(&uStack_590);
  func_0x000107c27a08(&uStack_570);
  uVar4 = cStack_521 != '\x01' || pcStack_530 == pcVar17;
  if (cStack_521 == '\x01' && (long)pcVar17 < (long)pcStack_530) {
    param_4 = (undefined1 *)0x2;
    func_0x000107c29f64(&pcStack_4e0,*(undefined8 *)(unaff_x19 + 0x98));
    pcStack_330 = pcStack_530;
    ppcVar9 = &pcStack_4e0;
    FUN_10885ff98(*(undefined8 *)(unaff_x19 + 0x98),ppcVar9);
    func_0x000107c288c8(&pcStack_4e0);
  }
  while( true ) {
    func_0x000104bf58b8(&uStack_550);
    puVar13 = &uStack_520;
    func_0x000107c27a08(puVar13);
    func_0x000108756650(uStack_10);
    if ((bool)uVar4) {
      return puVar13;
    }
    ___stack_chk_fail();
    func_0x000108755c04();
    func_0x000107c288c8(&pcStack_4e0);
    uVar4 = (int)unaff_x20 == 1;
    if (!(bool)uVar4) break;
    ___cxa_begin_catch();
    ___cxa_end_catch();
  }
  func_0x000104bf58b8(&uStack_550);
  puVar13 = &uStack_520;
  func_0x000107c27a08();
  func_0x000108755b58();
  pcVar17 = FUN_10874b0cc;
  func_0x00010875615c();
  puVar7 = puVar13 + 0x50;
  puStack_e00 = &stack0x00000050;
  pcStack_df8 = pcVar17;
  FUN_108750c68();
  if (puVar7 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  pbVar14 = (byte *)(puVar7 + 5);
  if ((*pbVar14 & 1) == 0) {
    return (undefined8 *)(ulong)*(byte *)(puVar7 + 0x32);
  }
  if (0 < *(int *)((long)puVar7 + 0x2c)) {
    FUN_10874789c(pbVar14,plVar11,plVar12);
    return (undefined8 *)0x1;
  }
  func_0x000108755be0(auStack_1030,puVar13[0x13],ppcVar9);
  if (cStack_e60 != '\x01') {
    puVar13 = (undefined8 *)0x0;
    goto LAB_10874b320;
  }
  pbVar8 = (byte *)(puVar13 + 0x40);
  func_0x000107c289e8();
  bVar3 = *pbVar8;
  puVar1 = param_4;
  if ((param_4 != (undefined1 *)0x0 & bVar3) == 0) {
    puVar1 = auStack_1030;
  }
  uStack_1048 = 0;
  func_0x000107c28258();
  bVar5 = true;
  uStack_1038 = 1;
  if ((uVar10 & 1) == 0) {
    if (*plVar11 == plVar11[1]) {
      bVar5 = *plVar12 != plVar12[1];
    }
    else {
      bVar5 = true;
    }
  }
  pbStack_1040 = pbVar8;
  if ((*(char *)(puVar7 + 0x2c) == '\x01') && (*(char *)((long)puVar7 + 0x15c) == '\x01')) {
    if ((bool)(*(int *)(puVar7 + 0x2b) != 0 & bVar5)) {
LAB_10874b1fc:
      bVar5 = *(char *)(puVar7 + 0x15) == '\x01';
      if (((bVar5) && (func_0x0001087563b8(puVar7[0x14]), bVar5)) && ((bStack_eb0 & 1) != 0)) {
        uStack_1080 = 0;
        uStack_1078 = 0;
        if (bVar3 == 0) {
          param_4 = (undefined1 *)0x0;
        }
        FUN_10874b388(puVar13,ppcVar9,pbVar14,0x730254,&uStack_1080,param_4);
        goto LAB_10874b320;
      }
    }
  }
  else if (bVar5) goto LAB_10874b1fc;
  FUN_108747820(&uStack_1080,pbVar14,puVar1,puVar13 + 0x1f,plVar11,plVar12);
  if (cStack_104f == '\x01') {
    func_0x0001087566a4();
    FUN_10874b684();
  }
  if (((CONCAT71(uStack_107f,uStack_1080) != CONCAT71(uStack_1077,uStack_1078)) ||
      ((uVar10 & 1) != 0)) || ((lStack_1068 != lStack_1060 || ((bStack_1050 & 1) != 0)))) {
    func_0x0001087566a4();
    func_0x000108755e38();
  }
  plVar6 = (long *)puVar13[0x1d];
  alStack_10a8[2] = 0;
  alStack_10a8[3] = 0;
  func_0x000108755cec();
  alStack_10a8[0] = extraout_x8 + 0x10;
  alStack_10a8[1] = 0;
  uStack_1088 = 0x2ba;
  func_0x000107c29054(alStack_10a8,*(undefined4 *)(puVar7 + 0x29));
  FUN_10874b9f8();
  func_0x000107c2825c();
  func_0x0001087566b0(*(undefined8 *)(*plVar6 + 0x18));
  (*extraout_x8_00)();
  func_0x000108756304();
  func_0x0001087562e8();
  puVar13 = (undefined8 *)0x1;
LAB_10874b320:
  func_0x000107c288c8(auStack_1030);
  return puVar13;
}



/* Entry: 10874b0cc; end: 10874b387;  */

ulong FUN_10874b0cc(ulong param_1,undefined8 param_2,undefined1 *param_3,ulong param_4,long *param_5
                   ,long *param_6)

{
  undefined1 *puVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  byte *pbVar5;
  long extraout_x8;
  code *extraout_x8_00;
  long *plVar6;
  byte *pbVar7;
  long alStack_258 [4];
  undefined4 uStack_238;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  long lStack_218;
  long lStack_210;
  byte bStack_200;
  char cStack_1ff;
  undefined8 uStack_1f8;
  byte *pbStack_1f0;
  undefined1 uStack_1e8;
  undefined1 auStack_1e0 [384];
  byte bStack_60;
  char cStack_10;
  
  func_0x00010875615c();
  lVar4 = param_1 + 0x280;
  FUN_108750c68();
  if (lVar4 == 0) {
    return 0;
  }
  pbVar7 = (byte *)(lVar4 + 0x28);
  if ((*pbVar7 & 1) == 0) {
    return (ulong)*(byte *)(lVar4 + 400);
  }
  if (0 < *(int *)(lVar4 + 0x2c)) {
    FUN_10874789c(pbVar7,param_5,param_6);
    return 1;
  }
  func_0x000108755be0(auStack_1e0,*(undefined8 *)(param_1 + 0x98),param_2);
  if (cStack_10 != '\x01') {
    param_1 = 0;
    goto LAB_10874b320;
  }
  pbVar5 = (byte *)(param_1 + 0x200);
  func_0x000107c289e8();
  bVar2 = *pbVar5;
  puVar1 = param_3;
  if ((param_3 != (undefined1 *)0x0 & bVar2) == 0) {
    puVar1 = auStack_1e0;
  }
  uStack_1f8 = 0;
  func_0x000107c28258();
  bVar3 = true;
  uStack_1e8 = 1;
  if ((param_4 & 1) == 0) {
    if (*param_5 == param_5[1]) {
      bVar3 = *param_6 != param_6[1];
    }
    else {
      bVar3 = true;
    }
  }
  pbStack_1f0 = pbVar5;
  if ((*(char *)(lVar4 + 0x160) == '\x01') && (*(char *)(lVar4 + 0x15c) == '\x01')) {
    if ((bool)(*(int *)(lVar4 + 0x158) != 0 & bVar3)) {
LAB_10874b1fc:
      bVar3 = *(char *)(lVar4 + 0xa8) == '\x01';
      if (((bVar3) && (func_0x0001087563b8(*(undefined8 *)(lVar4 + 0xa0)), bVar3)) &&
         ((bStack_60 & 1) != 0)) {
        uStack_230 = 0;
        uStack_228 = 0;
        if (bVar2 == 0) {
          param_3 = (undefined1 *)0x0;
        }
        FUN_10874b388(param_1,param_2,pbVar7,0x730254,&uStack_230,param_3);
        goto LAB_10874b320;
      }
    }
  }
  else if (bVar3) goto LAB_10874b1fc;
  FUN_108747820(&uStack_230,pbVar7,puVar1,param_1 + 0xf8,param_5,param_6);
  if (cStack_1ff == '\x01') {
    func_0x0001087566a4();
    FUN_10874b684();
  }
  if (((CONCAT71(uStack_22f,uStack_230) != CONCAT71(uStack_227,uStack_228)) || ((param_4 & 1) != 0))
     || ((lStack_218 != lStack_210 || ((bStack_200 & 1) != 0)))) {
    func_0x0001087566a4();
    func_0x000108755e38();
  }
  plVar6 = *(long **)(param_1 + 0xe8);
  alStack_258[2] = 0;
  alStack_258[3] = 0;
  func_0x000108755cec();
  alStack_258[0] = extraout_x8 + 0x10;
  alStack_258[1] = 0;
  uStack_238 = 0x2ba;
  func_0x000107c29054(alStack_258,*(undefined4 *)(lVar4 + 0x148));
  FUN_10874b9f8();
  func_0x000107c2825c();
  func_0x0001087566b0(*(undefined8 *)(*plVar6 + 0x18));
  (*extraout_x8_00)();
  func_0x000108756304();
  func_0x0001087562e8();
  param_1 = 1;
LAB_10874b320:
  func_0x000107c288c8(auStack_1e0);
  return param_1;
}



/* Entry: 10874b388; end: 10874b683;  */

byte FUN_10874b388(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  long unaff_x20;
  long *plVar3;
  long alStack_218 [4];
  undefined4 uStack_1f8;
  byte bStack_48;
  undefined1 auStack_40 [40];
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined1 uStack_8;
  
  func_0x00010875615c();
  func_0x000108755eb0();
  FUN_10874a794();
  plVar3 = *(long **)(unaff_x20 + 0xe8);
  alStack_218[2] = 0;
  alStack_218[3] = 0;
  func_0x000108755cec();
  alStack_218[0] = extraout_x8 + 0x10;
  alStack_218[1] = 0;
  uStack_1f8 = 700;
  func_0x000107c29054(alStack_218,*(undefined4 *)(param_3 + 0x120));
  puVar1 = &uStack_18;
  func_0x000107c278b8(puVar1,PTR_DAT_113268f30);
  func_0x0001087565b8();
  func_0x0001087565c4();
  func_0x000107c278b8();
  func_0x0001087565b8();
  func_0x0001087565c4();
  func_0x000107c2884c(auStack_40,puVar1);
  func_0x000108756544(*(undefined8 *)(*plVar3 + 0x50));
  func_0x000107c2882c(auStack_40);
  func_0x000108756288();
  if ((*param_3 & 1) == 0) {
    if (((param_3[0x168] & 1) != 0) && (0 < *(int *)(param_3 + 0x140))) goto LAB_10874b4f0;
LAB_10874b4c0:
    if (*param_3 == 0) goto LAB_10874b4f0;
  }
  else if (*(int *)(param_3 + 0xc) < 1) goto LAB_10874b4c0;
  FUN_108746f10(param_3);
LAB_10874b4f0:
  if (param_3[0x168] == 1) {
    param_3[0x168] = 0;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x98);
  func_0x000108755be0(alStack_218);
  if ((bStack_48 & 1) == 0) {
    func_0x000108756274();
    func_0x000108756764();
    func_0x000108755c78();
  }
  else {
    uStack_18 = 0;
    func_0x000107c28258();
    uStack_8 = 1;
    uStack_10 = uVar2;
    FUN_10874bc54();
  }
  func_0x000107c288c8(alStack_218);
  return bStack_48;
}



/* Entry: 10874b684; end: 10874b9f7;  */

/* WARNING: Removing unreachable block (ram,0x00010874b950) */

void FUN_10874b684(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong auStack_108 [9];
  byte bStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  
  if (*(char *)((long)param_5 + 0x31) != '\x01') {
    return;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lVar1 = *(long *)(param_3 + 0x78);
  uVar9 = *(ulong *)(param_3 + 0x80);
  lVar2 = *(long *)(param_3 + 0x88);
  uVar3 = *(ulong *)(param_3 + 0x90);
  FUN_10874737c(param_3,param_4);
  lVar7 = *param_5;
  lVar11 = param_5[1];
  lVar16 = lVar11 - lVar7;
  auStack_108[0] = param_3;
  for (; lVar12 = lVar11, lVar7 != lVar11; lVar7 = lVar7 + 0x1a8) {
    uVar6 = auStack_108[0];
    FUN_108752af8(auStack_108[0],lVar7);
    if ((uVar6 & 1) == 0) goto LAB_10874b728;
    lVar16 = lVar16 + -0x1a8;
  }
  goto LAB_10874b7f0;
LAB_10874b900:
  while (puVar13 = puVar8, puVar8 = puVar13 + 3, puVar8 != puVar4) {
    uVar9 = param_3;
    FUN_108750ae4(param_3,puVar8);
    if ((uVar9 & 1) == 0) {
      uVar19 = puVar13[4];
      uVar18 = *puVar8;
      puVar10[2] = puVar13[5];
      puVar10[1] = uVar19;
      *puVar10 = uVar18;
      puVar10 = puVar10 + 3;
    }
  }
  goto LAB_10874b934;
  while( true ) {
    uVar6 = auStack_108[0];
    FUN_108752af8(auStack_108[0],lVar11);
    puVar5 = PTR___ZSt7nothrow_1103469d8;
    lVar16 = lVar16 + -0x1a8;
    if ((int)uVar6 != 0) break;
LAB_10874b728:
    lVar11 = lVar11 + -0x1a8;
    lVar12 = lVar7;
    if (lVar7 == lVar11) goto LAB_10874b7f0;
  }
  uVar15 = 0;
  uVar6 = lVar16 / 0x1a8 + 1;
  auStack_108[3] = 0;
  auStack_108[4] = 0;
  if (0x350 < lVar16) {
    uVar15 = uVar6;
    if (0x4d4873ecade303 < (long)uVar6) {
      uVar15 = 0x4d4873ecade304;
    }
    for (; 0 < (long)uVar15; uVar15 = uVar15 >> 1) {
      lVar16 = uVar15 * 0x1a8;
      __ZnwmRKSt9nothrow_t(lVar16,puVar5);
      if (lVar16 != 0) goto LAB_10874b7b0;
    }
    lVar16 = 0;
LAB_10874b7b0:
    uStack_b8 = 0;
    uStack_b0 = uVar15;
    FUN_108752dc0(auStack_108 + 3,lVar16);
    auStack_108[4] = uVar15;
    FUN_108752dd8(&uStack_b8);
  }
  FUN_108752b18(lVar7,lVar11,auStack_108,uVar6,auStack_108[3],uVar15);
  FUN_108752dd8(auStack_108 + 3);
  lVar12 = lVar7;
LAB_10874b7f0:
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puVar8 = &uStack_b8;
  FUN_10867d03c(puVar8,(param_5[1] - lVar12) / 0x1a8);
  plVar17 = (long *)param_5[1];
  for (plVar14 = (long *)(lVar12 + 0x20); plVar14 + -4 != plVar17; plVar14 = plVar14 + 0x35) {
    func_0x000108756708();
    FUN_1087470cc();
    if ((int)puVar8 == 1) {
      if (((uVar9 & 1) == 0) || (((char)plVar14[1] == '\x01' && (lVar1 <= *plVar14))))
      goto LAB_10874b878;
    }
    else if (((int)puVar8 == 0) &&
            (((uVar3 & 1) == 0 || (((char)plVar14[1] == '\x01' && (*plVar14 <= lVar2)))))) {
LAB_10874b878:
      puVar8 = &uStack_b8;
      FUN_10867b444(puVar8,plVar14 + -4);
    }
  }
  auStack_108[0] = 0;
  auStack_108[1] = 0;
  auStack_108[2] = 0;
  FUN_108747820(auStack_108 + 3,param_3,param_2,param_1 + 0xf8,&uStack_b8,auStack_108);
  FUN_10869ccc0(auStack_108);
  *(byte *)(param_5 + 6) = *(byte *)(param_5 + 6) | bStack_c0;
  func_0x0001087566a4();
  FUN_1086a4174();
  puVar4 = (undefined8 *)param_5[4];
  for (puVar8 = (undefined8 *)param_5[3]; puVar10 = puVar4, puVar8 != puVar4; puVar8 = puVar8 + 3) {
    uVar9 = param_3;
    FUN_108750ae4(param_3,puVar8);
    puVar10 = puVar8;
    if ((int)uVar9 != 0) goto LAB_10874b900;
  }
LAB_10874b934:
  if (puVar10 != (undefined8 *)param_5[4]) {
    param_5[4] = (long)puVar10;
  }
  func_0x0001087562e8();
  func_0x00010867b9fc(&uStack_b8);
  FUN_108748a7c(&uStack_a0);
  return;
}



/* Entry: 10874b9f8; end: 10874ba3b;  */

void FUN_10874b9f8(void)

{
  func_0x000108756130();
  func_0x000108755c38();
  func_0x000108755928(0x247);
  func_0x0001087559dc();
  func_0x0001087558b0();
  return;
}



/* Entry: 10874ba3c; end: 10874ba97;  */

void FUN_10874ba3c(long param_1)

{
  func_0x000108755eb0();
  param_1 = param_1 + 0x280;
  FUN_108750c68();
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    func_0x000108756274();
    func_0x000108755ca4();
  }
  return;
}



/* Entry: 10874ba98; end: 10874bb4b;  */

void FUN_10874ba98(long param_1,long *param_2)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  
  pcVar2 = (char *)(param_1 + 0x140);
  func_0x000107c289e8();
  if (*pcVar2 == '\x01') {
    lVar1 = param_2[1];
    for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
      lVar3 = param_1 + 0x280;
      func_0x000108756298();
      if (lVar3 != 0) {
        if ((((*(byte *)(lVar3 + 0x28) & 1) != 0) || (*(char *)(lVar3 + 400) != '\0')) &&
           ((((*(char *)(lVar3 + 0x160) == '\x01' &&
              ((*(int *)(lVar3 + 0x158) != 0 || ((*(byte *)(lVar3 + 0x15c) & 1) == 0)))) ||
             (((*(byte *)(lVar3 + 0x28) & 1) == 0 && (*(char *)(lVar3 + 400) != '\0')))) ||
            ((*(uint *)(lVar3 + 0xb8) & 1) != 0)))) {
          func_0x0001087566b0();
          func_0x000108755ca4();
        }
      }
    }
  }
  return;
}



/* Entry: 10874bb4c; end: 10874bc53;  */

void FUN_10874bb4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long *plVar1;
  long extraout_x8;
  undefined1 auStack_b8 [24];
  long alStack_a0 [4];
  undefined4 uStack_80;
  undefined1 auStack_78 [40];
  
  func_0x000108755cec();
  alStack_a0[2] = 0;
  alStack_a0[3] = 0;
  alStack_a0[0] = extraout_x8 + 0x10;
  alStack_a0[1] = 0;
  uStack_80 = 0x2b3;
  plVar1 = alStack_a0;
  FUN_108750870(plVar1,param_4);
  func_0x000107c29054();
  func_0x00010875640c();
  func_0x000108755c38();
  func_0x000107c28824(plVar1,auStack_b8,(&PTR_DAT_110a6a840)[param_6]);
  FUN_1087508fc();
  func_0x000107c2884c(auStack_78,plVar1);
  func_0x000108756770();
  func_0x00010875621c();
  func_0x000108756214();
  func_0x000108755b68();
  func_0x000108755dd8();
  func_0x000108755df8(*(undefined8 *)(param_1 + 0x88));
  func_0x0001087561fc();
  return;
}



/* Entry: 10874bc54; end: 10874c237;  */

void FUN_10874bc54(undefined8 param_1,undefined8 param_2,byte *param_3,int param_4,int param_5,
                  ulong param_6)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 **ppuVar5;
  char *pcVar6;
  ulong *puVar7;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  ulong uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  int aiStack_138 [2];
  undefined1 uStack_130;
  char cStack_128;
  ulong uStack_120;
  byte bStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  undefined8 uStack_a8;
  ulong *puStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [72];
  undefined1 auStack_10 [16];
  
  func_0x00010875615c();
  func_0x000108755c04();
  aiStack_138[0] = 0;
  uStack_130 = 0;
  cStack_128 = '\0';
  uStack_120 = uStack_120 & 0xffffffffffffff00;
  bStack_118 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0x3f800000;
  puStack_e8 = &uStack_e0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_150 = 0;
  func_0x000107c28258();
  uStack_140 = 1;
  uStack_148 = param_1;
  func_0x0001087566e8(*(undefined8 *)(unaff_x19 + 0x98));
  FUN_108864744();
  FUN_10867b070(&lStack_168,&uStack_328);
  func_0x000107c28948(&uStack_328);
  func_0x0001086a9b00(lStack_168,lStack_160);
  lVar2 = lStack_160;
  for (; lStack_168 != lVar2; lStack_168 = lStack_168 + 0x1a8) {
    FUN_10867b1ac(&uStack_110,lStack_168 + 0x18);
  }
  bVar1 = *(byte *)(unaff_x20 + 0x188);
  lStack_340 = 0;
  lStack_338 = 0;
  uStack_330 = 0;
  if ((param_6 & 1) != 0) {
    uStack_328 = uStack_328 & 0xffffffff00000000;
    FUN_1086a3d00(unaff_x20 + 0x18,&uStack_328,unaff_x19 + 0xf8);
    pbVar4 = (byte *)(unaff_x19 + 0x170);
    func_0x000107c289e8();
    if (((*pbVar4 & 1) == 0) && (1 < *(int *)(unaff_x20 + 0x38))) {
      FUN_1086a3c30(unaff_x20 + 0x18,unaff_x19 + 0xf8);
    }
    func_0x0001087566e8(*(undefined8 *)(unaff_x19 + 0x98));
    func_0x000108756368();
    func_0x000108755ef0();
    func_0x0001086a9b44(&lStack_340,&uStack_328);
    func_0x000108756530();
  }
  if (0 < param_5 + (int)((lStack_338 - lStack_340) / -0x1a8)) {
    func_0x0001087566e8(*(undefined8 *)(unaff_x19 + 0x98));
    func_0x000108755ef0();
    func_0x000108755f18(lStack_338);
    func_0x000108756678();
    func_0x00010875648c(&lStack_340);
    func_0x0001086c0798(&lStack_340,lStack_338,uStack_328,uStack_320);
    func_0x000108756530();
  }
  lVar2 = lStack_338;
  if (lStack_340 == lStack_338) {
    uVar11 = (ulong)-(uint)bVar1;
    uVar9 = 0x7fffffffffffff00;
    bStack_118 = bVar1;
  }
  else {
    uVar11 = *(ulong *)(lStack_338 + -0x188);
    uVar9 = uVar11 & 0xffffffffffffff00;
    for (lVar10 = lStack_340 + 0x20; lVar10 + -0x20 != lVar2; lVar10 = lVar10 + 0x1a8) {
      if (*(char *)(lVar10 + 8) == '\x01') {
        puVar12 = *(undefined8 **)(lVar10 + -8);
        ppuVar5 = &puStack_e8;
        FUN_10874cff8(ppuVar5,lVar10);
        *ppuVar5 = puVar12;
      }
    }
    func_0x000108755f18(lStack_160);
    func_0x000108756678();
    func_0x00010875648c(&lStack_168);
    func_0x0001086c0798(&lStack_168,lStack_160,lStack_340,lStack_338);
    bStack_118 = 1;
  }
  if (cStack_128 == '\x01') {
    cStack_128 = '\0';
  }
  uStack_120 = uVar9 | uVar11 & 0xff;
  aiStack_138[0] = param_4;
  FUN_108746ffc(param_3,aiStack_138);
  func_0x000108756400();
  FUN_10874d02c();
  func_0x000107c2825c();
  func_0x000107c28258();
  uStack_328 = 0;
  uStack_320 = 0;
  uStack_318 = 0;
  func_0x000108756400();
  FUN_10874ad2c();
  FUN_10869ccc0(&uStack_328);
  func_0x000107c2825c();
  func_0x0001087566b0();
  func_0x000108756764();
  FUN_10874d22c();
  pcVar6 = (char *)(unaff_x19 + 0x110);
  func_0x000107c289e8();
  bVar3 = *pcVar6 == '\x01';
  if ((((((bVar3) && ((param_3[0x138] & 1) == 0)) && ((*(byte *)(unaff_x20 + 0x180) & 1) == 0)) &&
       (((*(byte *)(unaff_x20 + 0x188) & 1) != 0 && ((*(byte *)(unaff_x20 + 0x1cc) & 1) == 0)))) &&
      (((*param_3 & 1) != 0 &&
       (((*(uint *)(param_3 + 0x90) & 1) == 0 && ((param_3[0x80] & 1) != 0)))))) &&
     (func_0x0001087563b8(*(undefined8 *)(param_3 + 0x78)), bVar3)) {
    func_0x000107c27994(auStack_70);
    func_0x000107c289cc(&lStack_80);
    uStack_328 = uStack_78;
    uStack_78 = 0;
    uStack_320 = CONCAT35((int3)((ulong)uStack_320 >> 0x28),0x100000000);
    FUN_10874d5d0(param_3 + 0x128,&uStack_328);
    puVar7 = &uStack_328;
    func_0x000107c27f98();
    func_0x000107c28258();
    func_0x000107c28da8();
    func_0x000107c27994(auStack_c8,auStack_70);
    lStack_b0 = lStack_80;
    if (lStack_80 != 0) {
      do {
        func_0x00010875583c();
      } while (extraout_w10 != 0);
    }
    uStack_a8 = 0;
    uStack_98 = 1;
    uStack_90 = (undefined1)unaff_x20;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
    puStack_a0 = puVar7;
    FUN_108751e7c(auStack_58,&stack0xffffffffffffff30);
    func_0x000107c288a8(auStack_10,unaff_x19 + 0x28);
    FUN_108751f5c(&uStack_328,auStack_58);
    FUN_108751edc(auStack_88,&uStack_328,uVar8);
    func_0x000108751eb4(&uStack_328);
    func_0x000108751eb4(auStack_58);
    FUN_10874d618(&stack0xffffffffffffff30);
    func_0x000107c27f9c(auStack_88);
    func_0x000107c289dc(&lStack_80);
    func_0x000107c27914(auStack_70);
  }
  func_0x000108755f88();
  func_0x00010867b9fc(&lStack_168);
  func_0x000108750a20(aiStack_138);
  return;
}



/* Entry: 10874c238; end: 10874c27b;  */

void FUN_10874c238(void)

{
  func_0x000108756130();
  func_0x000108755c38();
  func_0x000108755928(0x253);
  func_0x0001087559dc();
  func_0x0001087558b0();
  return;
}



/* Entry: 10874c27c; end: 10874cbd3;  */

void FUN_10874c27c(long *param_1,ulong param_2,int *param_3,uint param_4)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  byte bVar13;
  undefined1 uVar14;
  int iVar15;
  long lVar16;
  byte *pbVar17;
  long *plVar18;
  byte *pbVar19;
  undefined4 uVar20;
  uint extraout_w8;
  ulong uVar21;
  long *plVar22;
  ulong extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long lVar23;
  long *plVar24;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  uint extraout_w10_00;
  long lVar25;
  ulong extraout_x11;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  long *plVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong uStack_88;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  
  lVar16 = 0x3b0;
  __Znwm();
  lVar23 = lVar16;
  func_0x000108755e5c(FUN_1087553b8);
  func_0x0001087558f4();
  uVar20 = 3;
  if (param_4 == 0) {
    uVar20 = 0;
  }
  *(undefined4 *)(lVar16 + 0x3a0) = uVar20;
  *(undefined8 *)(lVar16 + 0x388) = 0;
  *(undefined8 *)(lVar16 + 0x380) = 0;
  *(undefined1 *)(lVar16 + 0x390) = 0;
  func_0x000107c28258();
  *(long *)(lVar16 + 0x388) = lVar23;
  *(undefined1 *)(lVar16 + 0x390) = 1;
  uVar20 = 0x6a023d;
  if (param_3[1] == 1) {
    uVar20 = 0x6a023e;
  }
  uVar4 = 0x6a023f;
  if (param_3[1] != 2) {
    uVar4 = uVar20;
  }
  *(undefined4 *)(lVar16 + 0x3a4) = uVar4;
  func_0x000108755be0(lVar16 + 0x20,param_1[0x13],param_2);
  puVar1 = (undefined4 *)(lVar16 + 0x3a0);
  if ((*(byte *)(lVar16 + 0x1f0) & 1) == 0) {
    func_0x000108756708();
    func_0x000108755c78();
    goto LAB_10874c9b8;
  }
  plVar24 = param_1 + 0x50;
  plVar30 = plVar24;
  FUN_108750c68(plVar24,param_2);
  plVar2 = (long *)(lVar16 + 0x1f8);
  puVar3 = (undefined8 *)(lVar16 + 0x368);
  if (plVar30 == (long *)0x0) {
    plVar30 = param_1 + 0x3a;
    func_0x000107c289e8();
    uVar20 = 0x7c0278;
    if ((char)*plVar30 == '\0') {
      uVar20 = 0x7c0279;
    }
    iVar15 = (int)lVar16 + 0x38;
    func_0x000107c29e74();
    FUN_10874cbd4(param_1[0x1d],iVar15 + 0x41019f,0x7b0276,uVar20);
    pbVar17 = (byte *)(param_1 + 0x3a);
    func_0x000107c289e8();
    if ((*pbVar17 & 1) == 0) {
      func_0x000108756708();
      func_0x000108755c78();
      goto LAB_10874c9b8;
    }
    _bzero(plVar2,0x120);
    FUN_108747fa4(plVar2);
    *(undefined8 *)(lVar16 + 0x318) = 0x41019f;
    *(undefined1 *)(lVar16 + 800) = 0;
    *(undefined1 *)(lVar16 + 0x330) = 0;
    *(undefined1 *)(lVar16 + 0x338) = 0;
    *(undefined1 *)(lVar16 + 0x360) = 0;
    uVar26 = param_2;
    FUN_108848654();
    uVar29 = param_1[0x51];
    if (uVar29 != 0) {
      uVar31 = uVar29 - 1;
      uVar28 = (uint)uVar29;
      if ((uVar29 & uVar31) == 0) {
        uStack_88 = uVar28 - 1 & uVar26;
      }
      else {
        uStack_88 = uVar26;
        if (uVar29 <= uVar26) {
          uVar11 = 0;
          if (uVar28 != 0) {
            uVar11 = (uint)uVar26 / uVar28;
          }
          uStack_88 = (ulong)((uint)uVar26 - uVar11 * uVar28);
        }
      }
      plVar30 = *(long **)(*plVar24 + uStack_88 * 8);
      if (plVar30 != (long *)0x0) {
        do {
          while( true ) {
            plVar30 = (long *)*plVar30;
            if (plVar30 == (long *)0x0) goto LAB_10874c4ec;
            uVar21 = plVar30[1];
            if (uVar21 != uVar26) break;
            plVar18 = plVar30 + 2;
            func_0x000107c28078(plVar18,param_2);
            if (((ulong)plVar18 & 1) != 0) goto LAB_10874c890;
          }
          if ((uVar29 & uVar31) == 0) {
            uVar21 = uVar21 & uVar31;
          }
          else if (uVar29 <= uVar21) {
            uVar12 = 0;
            if (uVar29 != 0) {
              uVar12 = uVar21 / uVar29;
            }
            uVar21 = uVar21 - uVar12 * uVar29;
          }
        } while (uVar21 == uStack_88);
      }
    }
LAB_10874c4ec:
    plVar30 = (long *)0x198;
    __Znwm();
    plVar18 = param_1 + 0x52;
    *(long **)(lVar16 + 0x368) = plVar30;
    *(long **)(lVar16 + 0x370) = plVar18;
    *(undefined8 *)(lVar16 + 0x378) = 0;
    *plVar30 = 0;
    plVar30[1] = uVar26;
    func_0x000107c27994(plVar30 + 2,param_2);
    lVar23 = *(long *)(lVar16 + 0x210);
    plVar22 = plVar30 + 8;
    *plVar22 = lVar23;
    lVar25 = *plVar2;
    plVar30[6] = *(long *)(lVar16 + 0x200);
    plVar30[5] = lVar25;
    plVar30[7] = *(long *)(lVar16 + 0x208);
    lVar25 = *(long *)(lVar16 + 0x218);
    plVar30[9] = lVar25;
    if (lVar25 == 0) {
      plVar30[7] = (long)plVar22;
    }
    else {
      *(long **)(lVar23 + 0x10) = plVar22;
      *(undefined8 **)(lVar16 + 0x208) = (undefined8 *)(lVar16 + 0x210);
      *(undefined8 *)(lVar16 + 0x210) = 0;
      *(undefined8 *)(lVar16 + 0x218) = 0;
    }
    lVar23 = *(long *)(lVar16 + 0x220);
    uVar31 = *(ulong *)(lVar16 + 0x228);
    *(undefined8 *)(lVar16 + 0x228) = 0;
    *(undefined8 *)(lVar16 + 0x220) = 0;
    lVar27 = *(long *)(lVar16 + 0x230);
    plVar30[0xc] = lVar27;
    plVar30[10] = lVar23;
    plVar30[0xb] = uVar31;
    lVar25 = *(long *)(lVar16 + 0x238);
    plVar30[0xd] = lVar25;
    *(undefined4 *)(plVar30 + 0xe) = *(undefined4 *)(lVar16 + 0x240);
    if (lVar25 != 0) {
      uVar21 = *(ulong *)(lVar27 + 8);
      if ((uVar31 & uVar31 - 1) == 0) {
        uVar21 = uVar21 & uVar31 - 1;
      }
      else if (uVar31 <= uVar21) {
        uVar12 = 0;
        if (uVar31 != 0) {
          uVar12 = uVar21 / uVar31;
        }
        uVar21 = uVar21 - uVar12 * uVar31;
      }
      *(long **)(lVar23 + uVar21 * 8) = plVar30 + 0xc;
      *(undefined8 *)(lVar16 + 0x230) = 0;
      *(undefined8 *)(lVar16 + 0x238) = 0;
    }
    FUN_1086af1f8(plVar30 + 0xf,lVar16 + 0x248);
    lVar27 = *(long *)(lVar16 + 0x278);
    lVar25 = *(long *)(lVar16 + 0x270);
    lVar23 = *(long *)(lVar16 + 0x298);
    plVar22 = plVar30 + 0x19;
    *plVar22 = lVar23;
    plVar30[0x15] = lVar27;
    plVar30[0x14] = lVar25;
    uVar32 = *(undefined8 *)(lVar16 + 0x279);
    *(undefined8 *)((long)plVar30 + 0xb1) = *(undefined8 *)(lVar16 + 0x281);
    *(undefined8 *)((long)plVar30 + 0xa9) = uVar32;
    plVar30[0x18] = *(long *)(lVar16 + 0x290);
    lVar25 = *(long *)(lVar16 + 0x2a0);
    plVar30[0x1a] = lVar25;
    if (lVar25 == 0) {
      plVar30[0x18] = (long)plVar22;
    }
    else {
      *(long **)(lVar23 + 0x10) = plVar22;
      *(undefined8 **)(lVar16 + 0x290) = (undefined8 *)(lVar16 + 0x298);
      *(undefined8 *)(lVar16 + 0x298) = 0;
      *(undefined8 *)(lVar16 + 0x2a0) = 0;
    }
    lVar25 = *(long *)(lVar16 + 0x2a8);
    lVar23 = *(long *)(lVar16 + 0x2b0);
    plVar22 = plVar30 + 0x1c;
    *plVar22 = lVar23;
    plVar30[0x1b] = lVar25;
    lVar25 = *(long *)(lVar16 + 0x2b8);
    plVar30[0x1d] = lVar25;
    if (lVar25 == 0) {
      plVar30[0x1b] = (long)plVar22;
    }
    else {
      *(long **)(lVar23 + 0x10) = plVar22;
      *(undefined8 **)(lVar16 + 0x2a8) = (undefined8 *)(lVar16 + 0x2b0);
      *(undefined8 *)(lVar16 + 0x2b0) = 0;
      *(undefined8 *)(lVar16 + 0x2b8) = 0;
    }
    lVar23 = *(long *)(lVar16 + 0x2c0);
    uVar31 = *(ulong *)(lVar16 + 0x2c8);
    *(undefined8 *)(lVar16 + 0x2c8) = 0;
    *(undefined8 *)(lVar16 + 0x2c0) = 0;
    plVar30[0x1e] = lVar23;
    plVar30[0x1f] = uVar31;
    lVar27 = *(long *)(lVar16 + 0x2d0);
    lVar25 = *(long *)(lVar16 + 0x2d8);
    plVar30[0x20] = lVar27;
    plVar30[0x21] = lVar25;
    *(undefined4 *)(plVar30 + 0x22) = *(undefined4 *)(lVar16 + 0x2e0);
    if (lVar25 != 0) {
      uVar21 = *(ulong *)(lVar27 + 8);
      if ((uVar31 & uVar31 - 1) == 0) {
        uVar21 = uVar21 & uVar31 - 1;
      }
      else if (uVar31 <= uVar21) {
        uVar12 = 0;
        if (uVar31 != 0) {
          uVar12 = uVar21 / uVar31;
        }
        uVar21 = uVar21 - uVar12 * uVar31;
      }
      *(long **)(lVar23 + uVar21 * 8) = plVar30 + 0x20;
      *(undefined8 *)(lVar16 + 0x2d0) = 0;
      *(undefined8 *)(lVar16 + 0x2d8) = 0;
    }
    lVar23 = *(long *)(lVar16 + 0x2f0);
    plVar30[0x23] = *(long *)(lVar16 + 0x2e8);
    plVar30[0x24] = lVar23;
    lVar25 = *(long *)(lVar16 + 0x2f8);
    plVar30[0x25] = lVar25;
    if (lVar25 == 0) {
      plVar30[0x23] = (long)(plVar30 + 0x24);
    }
    else {
      *(long **)(lVar23 + 0x10) = plVar30 + 0x24;
      *(undefined8 **)(lVar16 + 0x2e8) = (undefined8 *)(lVar16 + 0x2f0);
      *(undefined8 *)(lVar16 + 0x2f0) = 0;
      *(undefined8 *)(lVar16 + 0x2f8) = 0;
    }
    lVar23 = *(long *)(lVar16 + 0x308);
    plVar30[0x26] = *(long *)(lVar16 + 0x300);
    plVar30[0x27] = lVar23;
    lVar25 = *(long *)(lVar16 + 0x310);
    plVar30[0x28] = lVar25;
    if (lVar25 == 0) {
      plVar30[0x26] = (long)(plVar30 + 0x27);
    }
    else {
      *(long **)(lVar23 + 0x10) = plVar30 + 0x27;
      *(undefined8 **)(lVar16 + 0x300) = (undefined8 *)(lVar16 + 0x308);
      *(undefined8 *)(lVar16 + 0x308) = 0;
      *(undefined8 *)(lVar16 + 0x310) = 0;
    }
    plVar30[0x29] = *(long *)(lVar16 + 0x318);
    *(undefined1 *)(plVar30 + 0x2a) = 0;
    *(undefined1 *)(plVar30 + 0x2c) = 0;
    if (*(char *)(lVar16 + 0x330) == '\x01') {
      plVar30[0x2a] = *(long *)(lVar16 + 800);
      *(undefined8 *)(lVar16 + 800) = 0;
      *(undefined4 *)(plVar30 + 0x2b) = *(undefined4 *)(lVar16 + 0x328);
      *(undefined1 *)((long)plVar30 + 0x15c) = *(undefined1 *)(lVar16 + 0x32c);
      *(undefined1 *)(plVar30 + 0x2c) = 1;
    }
    lVar23 = *(long *)(lVar16 + 0x338);
    lVar27 = *(long *)(lVar16 + 0x350);
    lVar25 = *(long *)(lVar16 + 0x348);
    plVar30[0x2e] = *(long *)(lVar16 + 0x340);
    plVar30[0x2d] = lVar23;
    plVar30[0x30] = lVar27;
    plVar30[0x2f] = lVar25;
    lVar23 = *(long *)(lVar16 + 0x358);
    plVar30[0x32] = *(long *)(lVar16 + 0x360);
    plVar30[0x31] = lVar23;
    *(undefined1 *)(lVar16 + 0x378) = 1;
    func_0x0001087566dc();
    if ((uVar29 == 0) || (*(float *)(param_1 + 0x54) * (float)uVar29 < (float)extraout_x8)) {
      func_0x0001087563c4(uVar29 << 1);
      FUN_108750d3c(plVar24);
      uVar29 = param_1[0x51];
      if ((uVar29 & uVar29 - 1) == 0) {
        uStack_88 = (int)uVar29 - 1 & uVar26;
      }
      else {
        uStack_88 = uVar26;
        if (uVar29 <= uVar26) {
          uVar31 = 0;
          if (uVar29 != 0) {
            uVar31 = uVar26 / uVar29;
          }
          uStack_88 = uVar26 - uVar31 * uVar29;
        }
      }
    }
    lVar23 = *plVar24;
    plVar24 = *(long **)(lVar23 + uStack_88 * 8);
    if (plVar24 == (long *)0x0) {
      *plVar30 = *plVar18;
      *plVar18 = (long)plVar30;
      *(long **)(lVar23 + uStack_88 * 8) = plVar18;
      if (*plVar30 != 0) {
        uVar26 = *(ulong *)(*plVar30 + 8);
        if ((uVar29 & uVar29 - 1) == 0) {
          uVar26 = uVar26 & uVar29 - 1;
        }
        else if (uVar29 <= uVar26) {
          uVar31 = 0;
          if (uVar29 != 0) {
            uVar31 = uVar26 / uVar29;
          }
          uVar26 = uVar26 - uVar31 * uVar29;
        }
        *(long **)(lVar23 + uVar26 * 8) = plVar30;
      }
    }
    else {
      *plVar30 = *plVar24;
      *plVar24 = (long)plVar30;
    }
    *puVar3 = 0;
    func_0x0001087566dc();
    param_1[0x53] = extraout_x8_00;
    FUN_108750ef4(puVar3);
LAB_10874c890:
    func_0x0001087509ec(plVar2);
    *(int *)(plVar30 + 0x29) = iVar15 + 0x41019f;
  }
  pbVar17 = (byte *)(plVar30 + 5);
  *(long **)(lVar16 + 0x1f8) = param_1;
  *(ulong *)(lVar16 + 0x200) = param_2;
  *(byte **)(lVar16 + 0x208) = pbVar17;
  *(long *)(lVar16 + 0x210) = lVar16 + 0x3a4;
  *(undefined4 **)(lVar16 + 0x218) = puVar1;
  if ((param_4 & 1) == 0) {
    if (((*pbVar17 & 1) != 0) || ((char)plVar30[0x32] != '\0')) {
      plVar24 = param_1 + 0x34;
      func_0x000107c289e8();
      uVar20 = 0x7c0278;
      if ((char)*plVar24 == '\0') {
        uVar20 = 0x7c0279;
      }
      FUN_10874cbd4(param_1[0x1d],(int)plVar30[0x29],0x7b0277,uVar20);
      pbVar19 = (byte *)(param_1 + 0x34);
      func_0x000107c289e8();
      if ((*pbVar19 & 1) == 0) {
        FUN_10874ccdc(plVar2,6);
        goto LAB_10874c9b8;
      }
      *puVar1 = 3;
      goto LAB_10874c914;
    }
  }
  else {
LAB_10874c914:
    func_0x000108756708();
    FUN_10874a794();
    if (*pbVar17 == 1) {
      FUN_108746f10(pbVar17);
    }
    if ((char)plVar30[0x32] == '\x01') {
      *(undefined1 *)(plVar30 + 0x32) = 0;
    }
  }
  iVar5 = param_3[6];
  iVar7 = param_3[7];
  iVar15 = iVar5 + iVar7;
  iVar6 = *param_3;
  iVar8 = param_3[1];
  if (iVar8 == 2) {
    iVar15 = iVar15 + 1;
  }
  if (iVar6 < 1 || iVar15 <= iVar6) {
    if (iVar7 < 1 && iVar5 < 1) {
      func_0x000108755a00();
    }
    else if (iVar8 == 1) {
      func_0x000108755a00();
    }
    else {
      bVar13 = *(byte *)((long)param_3 + 0x21) & *(byte *)(param_3 + 8);
      if ((bVar13 & 1) == 0) {
        if (iVar8 == 2) {
          uVar14 = (char)param_3[4] == '\x01';
          if ((bool)uVar14) {
            *(int *)((long)plVar30 + 0x14c) = iVar15;
            FUN_10874cd00((undefined8 *)(lVar16 + 0x398),param_1,lVar16 + 0x20,pbVar17,param_3,
                          *puVar1,lVar16 + 0x380);
            *puVar3 = *(undefined8 *)(lVar16 + 0x398);
            do {
              func_0x00010875583c();
            } while (extraout_w10 != 0);
            func_0x000108755af0(*puVar3);
            if ((extraout_w8 >> 1 & 1) == 0) {
              *(undefined1 *)(lVar16 + 0x3a8) = 0;
              func_0x000108755790();
              if (*param_1 == 0) {
                func_0x000107c3a5c0();
              }
              func_0x000108755c18();
              plVar24 = extraout_x8_01;
              lVar23 = extraout_x9;
              do {
                if (*plVar24 == 0) {
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar10) {
                    *plVar24 = lVar23;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                  uVar14 = cVar9 == '\0';
                  uVar26 = (ulong)-(uint)(byte)uVar14;
                  uVar28 = 0;
                }
                else {
                  func_0x000108755b70();
                  plVar24 = extraout_x8_02;
                  lVar23 = extraout_x9_00;
                  uVar26 = extraout_x11;
                  uVar28 = extraout_w10_00;
                }
                if ((uVar26 & 1) != 0) {
                  func_0x0001087557ec();
                  if ((bool)uVar14) {
                    func_0x000108755860();
                    func_0x0001087557a0();
                    func_0x000108755748();
                  }
                  func_0x00010875571c();
                  return;
                }
              } while ((uVar28 >> 1 & 1) == 0);
            }
            func_0x000107c28834(puVar3);
            func_0x000107c27f9c(puVar3);
            func_0x000108755f38();
          }
          else {
            func_0x000108755a00();
          }
          goto LAB_10874c9b8;
        }
        if (iVar8 != 0) {
          *(int *)((long)plVar30 + 0x14c) = iVar15;
          func_0x000108755a00();
          goto LAB_10874c9b8;
        }
      }
      else if (iVar8 != 0) {
        func_0x000108755a00();
        goto LAB_10874c9b8;
      }
      if ((char)param_3[4] == '\x01') {
        func_0x000108755a00();
      }
      else if (iVar5 < 1) {
        *(int *)((long)plVar30 + 0x14c) = iVar15;
        auStack_70[0] = 0;
        uStack_68 = 0;
        FUN_10874bc54(param_1,lVar16 + 0x20,pbVar17,iVar6,iVar7,bVar13 & 1,*puVar1,lVar16 + 0x380,
                      auStack_70,0);
      }
      else {
        func_0x000108755a00();
      }
    }
  }
  else {
    func_0x000108755a00();
  }
LAB_10874c9b8:
  func_0x000108755ad0();
  func_0x000108755c10();
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 10874cbd4; end: 10874ccdb;  */

void FUN_10874cbd4(long *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long *plVar1;
  long extraout_x8;
  long alStack_a8 [4];
  undefined4 uStack_88;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  
  func_0x000108755cec();
  alStack_a8[2] = 0;
  alStack_a8[3] = 0;
  alStack_a8[0] = extraout_x8 + 0x10;
  alStack_a8[1] = 0;
  uStack_88 = 0x2d3;
  plVar1 = alStack_a8;
  func_0x000107c29054(plVar1);
  func_0x000107c278b8(auStack_58,PTR_DAT_113268f90);
  func_0x000107c28824(plVar1,auStack_58,(&PTR_s_success_113269028)[param_3 & 0x277]);
  func_0x00010875656c();
  func_0x000107c278b8();
  func_0x000107c28824(plVar1,auStack_58,(&PTR_s_success_113269028)[param_4 & 0x279]);
  func_0x00010875656c();
  func_0x000107c2884c(auStack_80,plVar1);
  func_0x0001087564c8(*(undefined8 *)(*param_1 + 0x50));
  func_0x000107c2882c(auStack_80);
  func_0x000108755b94();
  return;
}



/* Entry: 10874ccdc; end: 10874ccff;  */

void FUN_10874ccdc(long *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long extraout_x8;
  undefined1 auStack_b8 [24];
  long alStack_a0 [4];
  undefined4 uStack_80;
  undefined1 auStack_78 [40];
  
  lVar1 = *param_1;
  uVar3 = (ulong)*(uint *)param_1[3];
  func_0x000108755cec(lVar1,param_1[1],*(undefined4 *)(param_1[2] + 0x120),uVar3);
  alStack_a0[2] = 0;
  alStack_a0[3] = 0;
  alStack_a0[0] = extraout_x8 + 0x10;
  alStack_a0[1] = 0;
  uStack_80 = 0x2b3;
  plVar2 = alStack_a0;
  FUN_108750870(plVar2,uVar3);
  func_0x000107c29054();
  func_0x00010875640c();
  func_0x000108755c38();
  func_0x000107c28824(plVar2,auStack_b8,(&PTR_DAT_110a6a840)[param_2]);
  FUN_1087508fc();
  func_0x000107c2884c(auStack_78,plVar2);
  func_0x000108756770();
  func_0x00010875621c();
  func_0x000108756214();
  func_0x000108755b68();
  func_0x000108755dd8();
  func_0x000108755df8(*(undefined8 *)(lVar1 + 0x88));
  func_0x0001087561fc();
  return;
}



/* Entry: 10874cd00; end: 10874cff7;  */

void FUN_10874cd00(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  
  lVar3 = 0x90;
  __Znwm();
  func_0x000108755e5c(FUN_1087552ec);
  func_0x000108755fb4();
  uVar8 = *(undefined8 *)(param_4 + 8);
  func_0x000107c27994(lVar3 + 0x50,param_2);
  auStack_70[0] = 0;
  uStack_68 = 0;
  plVar4 = param_1;
  FUN_10874dcc0(param_1,param_2,param_4,param_5,param_6,auStack_70);
  if (((ulong)plVar4 & 1) != 0) goto LAB_10874cf24;
  lVar5 = param_1[0x4e];
  lVar6 = param_2;
  FUN_108705bfc();
  uVar2 = ((uint)lVar6 & (uint)(*(long *)(param_2 + 0x158) < lVar5)) == 0;
  if ((bool)uVar2) {
    lVar5 = 0;
  }
  FUN_10874e168(lVar3 + 0x20,param_1,param_2,uVar8);
  if (*(int *)(lVar3 + 0x20) == 0) {
LAB_10874ce04:
    FUN_10874eb0c(lVar3 + 0x80,param_1,lVar3 + 0x50,lVar5);
    func_0x000108755fe8();
    FUN_10874e780();
    *(undefined8 *)(lVar3 + 0x68) = *(undefined8 *)(lVar3 + 0x70);
    do {
      func_0x00010875583c();
    } while (extraout_w10 != 0);
    func_0x000108755af0(*(undefined8 *)(lVar3 + 0x68));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(lVar3 + 0x88) = 1;
      lVar3 = *(long *)(lVar3 + 0x68);
      func_0x000108755790();
      lVar5 = *param_1;
      if (lVar5 == 0) {
        func_0x000107c3a5c0();
        lVar5 = *param_1;
      }
      func_0x000108756644();
      plVar4 = extraout_x8;
      do {
        if (*plVar4 == 0) {
          func_0x000108755890();
          plVar4 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar7 = extraout_w11_00;
        }
        else {
          func_0x000108755b70();
          plVar4 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar7 = extraout_w11;
        }
        if ((uVar7 & 1) != 0) goto LAB_10874cf54;
      } while ((uVar1 >> 1 & 1) == 0);
    }
    func_0x0001087561a4();
  }
  else {
    if ((*(byte *)(param_2 + 0x1cc) & 1) != 0) {
      uVar2 = 0;
      if (*(char *)(param_2 + 0x180) == '\x01') {
        func_0x000108755c6c(param_1,lVar3 + 0x50,*(undefined4 *)(param_3 + 0x120));
        func_0x000108755c78();
        goto LAB_10874cf24;
      }
      goto LAB_10874ce04;
    }
    FUN_10874e5c4(lVar3 + 0x78,param_1,lVar3 + 0x50,param_4,param_2);
    func_0x000108755fe8();
    FUN_10874e238();
    *(undefined8 *)(lVar3 + 0x68) = *(undefined8 *)(lVar3 + 0x70);
    do {
      func_0x00010875583c();
    } while (extraout_w10_02 != 0);
    func_0x000108755af0(*(undefined8 *)(lVar3 + 0x68));
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(lVar3 + 0x88) = 0;
      lVar3 = *(long *)(lVar3 + 0x68);
      func_0x000108755790();
      lVar5 = *param_1;
      if (lVar5 == 0) {
        func_0x000107c3a5c0();
        lVar5 = *param_1;
      }
      func_0x000108756644();
      plVar4 = extraout_x8_02;
      do {
        if (*plVar4 == 0) {
          func_0x000108755890();
          plVar4 = extraout_x8_04;
          uVar1 = extraout_w10_04;
          uVar7 = extraout_w11_02;
        }
        else {
          func_0x000108755b70();
          plVar4 = extraout_x8_03;
          uVar1 = extraout_w10_03;
          uVar7 = extraout_w11_01;
        }
        if ((uVar7 & 1) != 0) {
LAB_10874cf54:
          func_0x0001087559ac();
          if ((bool)uVar2) {
            func_0x000108755860();
            func_0x0001087557a0();
            func_0x0001087557b0();
            func_0x000108756348();
          }
          func_0x0001087559bc();
          *(long *)(extraout_x8_05 + 0x20) = lVar5;
          func_0x0001087558a0(*(undefined8 *)(lVar3 + 0x90));
          *(undefined8 *)(lVar3 + 0x10) = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
    func_0x0001087561a4();
  }
  func_0x0001087561ac();
  func_0x000108755cf8();
  func_0x000108755be8();
LAB_10874cf24:
  func_0x000108755ad0();
  func_0x00010875602c();
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 10874cff8; end: 10874d02b;  */

long FUN_10874cff8(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108751de0(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 10874d02c; end: 10874d22b;  */

void FUN_10874d02c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  undefined4 *puVar7;
  long extraout_x8;
  long lVar8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 auStack_d8 [14];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  auStack_d8[0] = 0;
  lVar6 = param_2 + 0x18;
  puVar7 = auStack_d8;
  FUN_1086a3d00(lVar6,puVar7,param_1 + 0xf8);
  lStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0x3f800000;
  uVar5 = *(char *)(param_2 + 0x180) == '\x01';
  if ((bool)uVar5) {
    lVar8 = *(long *)(param_2 + 0x178);
    lVar3 = *(long *)(param_2 + 0x1a8);
    lVar4 = *(long *)(param_2 + 0x1b0);
    FUN_108679cf0();
    if ((*(uint *)(param_3 + 0x90) & 1) != 0) {
      lVar1 = lVar8 + -1;
      if (lVar8 + -1 <= *(long *)(param_3 + 0x88)) {
        lVar1 = *(long *)(param_3 + 0x88);
      }
      lVar2 = lVar1;
      if (lVar1 <= lVar6) {
        lVar2 = lVar6;
      }
      if (((ulong)puVar7 & 1) == 0) {
        lVar2 = lVar1;
      }
      func_0x000108756368(auStack_d8,*(undefined8 *)(param_1 + 0x98),param_2,lVar2 + 1);
      func_0x0001087560f4();
      func_0x000108755c80();
      func_0x0001087560ec();
      uVar5 = lVar4 == lVar3;
      if (lVar3 < lVar4) {
        func_0x000108756368(auStack_d8,*(undefined8 *)(param_1 + 0x98),param_2,lVar1 + 1);
        FUN_108862ac0();
        func_0x000108755c80();
        func_0x0001087560ec();
      }
    }
    if (((*(uint *)(param_3 + 0x80) & 1) != 0) &&
       (func_0x0001087563b8(*(undefined8 *)(param_3 + 0x78)),
       (!(bool)uVar5 && lVar3 < lVar4) && lVar8 < extraout_x8)) {
      FUN_108862ac0(auStack_d8,*(undefined8 *)(param_1 + 0x98),param_2,lVar8,1,extraout_x8 + -1,1,
                    *(undefined8 *)(param_2 + 0x1a8),param_1 + 0xf8);
      func_0x000108755c80();
      func_0x0001087560ec();
    }
  }
  if (lStack_78 != lStack_70) {
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    func_0x000108756274(auStack_d8);
    FUN_108747820();
    FUN_10869ccc0(&uStack_f0);
    func_0x000108756608();
  }
  func_0x00010867bb84(&uStack_a0);
  func_0x00010867b9fc(&lStack_78);
  return;
}



/* Entry: 10874d22c; end: 10874d5cf;  */

void FUN_10874d22c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined ***pppuVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auStack_100 [40];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [40];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  plVar7 = *(long **)(param_1 + 0xe8);
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_FUN_110a609a8;
  uStack_88 = 0;
  uStack_70 = 0x2ad;
  pppuVar1 = &ppuStack_90;
  FUN_108750870(pppuVar1,param_4);
  func_0x000107c29054();
  func_0x000108755e98();
  FUN_108750940();
  func_0x000107c2825c();
  uStack_98 = param_6;
  (**(code **)(*plVar7 + 0x18))(plVar7,pppuVar1,&uStack_98);
  func_0x000108755df0();
  plVar8 = *(long **)(param_1 + 0xe8);
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_FUN_110a609a8;
  uStack_88 = 0;
  uStack_70 = 0x2ae;
  func_0x000108755aac();
  func_0x000107c29054();
  func_0x000108755e98();
  (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,param_7);
  func_0x000108755df0();
  plVar6 = *(long **)(param_1 + 0xe8);
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_FUN_110a609a8;
  uStack_88 = 0;
  uStack_70 = 0x2b0;
  func_0x000108755aac();
  func_0x000107c29054();
  func_0x000108755e98();
  (**(code **)(*plVar6 + 0x18))(plVar6,plVar8,param_8);
  func_0x000108755df0();
  plVar7 = plVar6;
  if (*(char *)(param_9 + 8) == '\x01') {
    plVar7 = *(long **)(param_1 + 0xe8);
    func_0x000108755d58();
    uStack_70 = 0x2af;
    func_0x000108755aac();
    func_0x000107c29054();
    func_0x000108755e98();
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar6,param_9);
    func_0x000108755df0();
  }
  plVar8 = *(long **)(param_1 + 0xe8);
  func_0x000108755d58();
  uStack_70 = 0x2b3;
  func_0x000108755aac();
  func_0x000107c29054();
  func_0x00010875640c();
  func_0x000107c278b8(auStack_d8);
  func_0x000107c28824(plVar7,auStack_d8,"Success");
  func_0x000108755e98();
  func_0x000107c2884c(auStack_c0,plVar7);
  func_0x000108756544(*(undefined8 *)(*plVar8 + 0x50));
  puVar2 = auStack_c0;
  func_0x000107c2882c(puVar2);
  func_0x000107c332b8();
  func_0x000108755df0();
  plVar7 = *(long **)(param_1 + 0xe8);
  func_0x000108755d58();
  uStack_70 = 0x2b1;
  func_0x000108755aac();
  func_0x000107c29054();
  func_0x000108755e98();
  (**(code **)(*plVar7 + 0x78))(plVar7,puVar2,(long)*(int *)(param_3 + 0x20));
  func_0x000108755df0();
  if ((*(uint *)(param_3 + 0x80) & 1) != 0) {
    ppuStack_90 = (undefined **)((ulong)ppuStack_90 & 0xffffffff00000000);
    lVar3 = param_2 + 0x18;
    pppuVar1 = &ppuStack_90;
    FUN_1086a3d00(lVar3,pppuVar1,param_1 + 0xf8);
    if (((ulong)pppuVar1 & 1) == 0) {
      lVar3 = 0;
    }
    if (lVar3 < *(long *)(param_3 + 0x78)) {
      uVar4 = *(undefined8 *)(param_1 + 0x98);
      FUN_108863418(uVar4,param_2,lVar3,*(long *)(param_3 + 0x78),param_1 + 0xf8);
      plVar7 = *(long **)(param_1 + 0xe8);
      uVar5 = uVar4;
      func_0x000108755d58();
      uStack_70 = 0x2b2;
      func_0x000108755aac();
      func_0x000107c29054();
      func_0x000108755e98();
      (**(code **)(*plVar7 + 0x78))(plVar7,uVar5,(long)(int)uVar4);
      func_0x000108755df0();
    }
  }
  plVar7 = *(long **)(param_1 + 0xe8);
  func_0x000108755d58();
  uStack_70 = 0x2bd;
  pppuVar1 = &ppuStack_90;
  func_0x000107c29054(pppuVar1,*(undefined4 *)(param_3 + 0x120));
  FUN_10874a65c();
  FUN_10874a6e4(param_3);
  FUN_10874a6a0(pppuVar1,param_3);
  func_0x000107c2884c(auStack_100,pppuVar1);
  (**(code **)(*plVar7 + 0x50))(plVar7,auStack_100);
  func_0x0001087561bc();
  func_0x000108755df0();
  return;
}



/* Entry: 10874d5d0; end: 10874d617;  */

void FUN_10874d5d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    FUN_1087509bc();
    return;
  }
  *param_1 = *param_2;
  *param_2 = 0;
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 0xc) = *(undefined1 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10874d618; end: 10874d637;  */

void FUN_10874d618(void)

{
  func_0x000108755a24();
  func_0x0001087560d4();
  return;
}



/* Entry: 10874d638; end: 10874da1f;  */

void FUN_10874d638(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  undefined8 extraout_x8;
  long lVar8;
  long *plVar9;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puStack_1e8;
  undefined1 uStack_1e0;
  undefined1 auStack_1d8 [384];
  byte bStack_58;
  byte bStack_8;
  
  func_0x00010875615c();
  puVar4 = (undefined8 *)0x98;
  __Znwm();
  *puVar4 = FUN_108753570;
  puVar4[1] = FUN_108753784;
  puVar4[10] = *param_3;
  *param_3 = 0;
  plVar11 = puVar4 + 0xb;
  *plVar11 = *param_4;
  puVar4[0x10] = param_1;
  puVar4[0x11] = param_2;
  *param_4 = 0;
  uVar13 = *param_5;
  puVar4[5] = param_5[1];
  puVar4[4] = uVar13;
  puVar4[6] = param_5[2];
  func_0x000108755de0();
  func_0x000107c287c4(extraout_x8,puVar4 + 2);
  lVar8 = puVar4[10];
  puVar4[0xd] = lVar8;
  if (lVar8 != 0) {
    do {
      func_0x00010875583c();
    } while (extraout_w10 != 0);
  }
  puVar4[0xe] = *plVar11;
  if (*plVar11 != 0) {
    do {
      func_0x00010875583c();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c278b8(puVar4 + 7,&UNK_10f4b320a);
  FUN_10874da20(puVar4 + 0xc,puVar4 + 0xd,puVar4 + 0xe,puVar4 + 7);
  plVar5 = puVar4 + 7;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000108755cf8();
  func_0x000108755f40();
  puVar4[0xf] = puVar4[0xc];
  do {
    func_0x00010875583c();
  } while (extraout_w10_01 != 0);
  func_0x000108755af0(puVar4[0xf]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0x12) = 0;
    lVar8 = puVar4[0xf];
    func_0x000108755790();
    lVar12 = *plVar5;
    if (lVar12 == 0) {
      func_0x000107c3a5c0();
      lVar12 = *plVar5;
    }
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      if (*plVar9 == 0) {
        func_0x000108755890();
        plVar9 = extraout_x8_01;
        uVar2 = extraout_w10_03;
        uVar10 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar9 = extraout_x8_00;
        uVar2 = extraout_w10_02;
        uVar10 = extraout_w11;
      }
      if ((uVar10 & 1) != 0) {
        func_0x0001087559ac();
        if ((bool)in_ZR) {
          func_0x000108755860();
          uVar1 = extraout_w8;
          if ((bool)in_CY) {
            uVar1 = extraout_w9;
          }
          func_0x000108755964();
          *(undefined1 *)plVar5 = uVar1;
          func_0x00010875584c(0);
          *(long **)(lVar8 + 0x90) = plVar5;
        }
        func_0x0001087559bc();
        *(long *)(extraout_x8_02 + 0x20) = lVar12;
        func_0x0001087558a0(*(undefined8 *)(lVar8 + 0x90));
        *(undefined8 *)(lVar8 + 0x10) = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  FUN_1086cc64c(puVar4 + 0xf);
  func_0x000108755d40();
  func_0x000108755af0(*plVar11);
  if (((extraout_w8_01 >> 1 & 1) == 0) &&
     (func_0x000108755af0(*plVar11), (extraout_w8_02 >> 5 & 1) == 0)) {
    puVar6 = puVar4 + 4;
    func_0x000107c2825c();
    puVar7 = puVar6;
    func_0x000108755f98(puVar4[0x10]);
    if ((puVar7 == (undefined8 *)0x0) ||
       (((*(char *)(puVar7 + 0x2c) != '\x01' || (*(char *)((long)puVar7 + 0x15c) != '\x01')) ||
        (*(int *)(puVar7 + 0x2b) != 0)))) goto LAB_10874d7fc;
    func_0x000108755be0(auStack_1d8,*(undefined8 *)(puVar4[0x10] + 0x98),puVar4[0x11]);
    if ((bStack_8 & 1) == 0) {
      func_0x000108755ea8(puVar4[0x10],puVar4[0x11],puVar7 + 5);
    }
    else {
      if (((*(char *)(puVar7 + 5) == '\x01') && ((*(uint *)(puVar7 + 0x17) & 1) == 0)) &&
         ((bVar3 = *(char *)(puVar7 + 0x15) == '\x01', bVar3 &&
          ((func_0x0001087563b8(puVar7[0x14]), bVar3 && ((bStack_58 & 1) != 0)))))) {
        uStack_1e0 = 1;
        puStack_1e8 = puVar6;
        func_0x000108755ca4(puVar4[0x10],puVar4[0x11],puVar7 + 5,0x254,&puStack_1e8);
        func_0x00010875630c();
        func_0x0001087561f4();
        func_0x000108755ad0();
        goto LAB_10874d804;
      }
      func_0x000108755ea8(puVar4[0x10],puVar4[0x11],puVar7 + 5);
    }
    func_0x000108755ad0();
    func_0x00010875630c();
  }
  else {
LAB_10874d7fc:
    func_0x000108755ad0();
  }
  func_0x0001087561f4();
LAB_10874d804:
  func_0x000108755ac8();
  func_0x000107c27f9c(plVar11);
  func_0x000108755be8();
  func_0x000108755ae8();
  return;
}



/* Entry: 10874da20; end: 10874dcbf;  */

void FUN_10874da20(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  long *plVar4;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  long lVar5;
  long *extraout_x8_00;
  long *plVar6;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  
  func_0x0001087567dc();
  func_0x000108755fd0();
  func_0x0001087563a8(FUN_108753288);
  *(long *)(unaff_x20 + 0x38) = extraout_x8;
  if (extraout_x8 != 0) {
    do {
      func_0x00010875583c();
    } while (extraout_w10 != 0);
  }
  lVar5 = *unaff_x23;
  *(long *)(param_1 + 0x40) = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x00010875583c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010875613c();
  func_0x0001087522f0();
  plVar4 = (long *)(param_1 + 0x10);
  FUN_108752270();
  func_0x000108756574();
  func_0x000108756580();
  func_0x000108755b24();
  func_0x000108756628();
  func_0x000108756074();
  func_0x000108756060();
  func_0x0001087560a4();
  func_0x0001087564d8();
  *(undefined8 *)(param_1 + 0x48) = unaff_x21;
  do {
    func_0x00010875583c();
  } while (extraout_w10_01 != 0);
  func_0x0001087559cc();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x60) = 0;
    func_0x000108755a90();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x000108756268();
    plVar6 = extraout_x8_00;
    do {
      if (*plVar6 == 0) {
        func_0x000108755890();
        plVar6 = extraout_x8_02;
        uVar1 = extraout_w10_03;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087559ac();
        if ((bool)in_ZR) {
          func_0x000108755860();
          uVar3 = extraout_w8;
          if ((bool)in_CY) {
            uVar3 = extraout_w9;
          }
          func_0x000108755964();
          *(undefined1 *)plVar4 = uVar3;
          func_0x00010875584c(0);
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087559bc();
        *(long *)(extraout_x8_06 + 0x20) = lVar5;
        goto LAB_10874dc04;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108756260();
  unaff_x22 = *plVar4;
  func_0x000108755b1c();
  func_0x000108755b04();
  uVar3 = unaff_x22 == 1;
  if ((bool)uVar3) {
    func_0x000108755af0(*(undefined8 *)(param_1 + 0x40));
    if ((extraout_w8_02 >> 5 & 1) == 0) {
      func_0x000108755bd8();
      func_0x00010875620c();
      func_0x000108755828();
      func_0x000108755ef8();
    }
    else {
      func_0x000108755a80();
      func_0x000108756234();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10874dc4c);
    (*pcVar2)();
  }
  func_0x000108755f7c(*(long *)(unaff_x20 + 0x38));
  do {
    func_0x00010875583c();
  } while (extraout_w10_04 != 0);
  func_0x0001087559cc();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    func_0x00010875600c();
    func_0x000108755a90();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x000108756268();
    plVar4 = extraout_x8_03;
    do {
      if (*plVar4 == 0) {
        func_0x000108755890();
        plVar4 = extraout_x8_05;
        uVar1 = extraout_w10_06;
        uVar7 = extraout_w11_02;
      }
      else {
        func_0x000108755b70();
        plVar4 = extraout_x8_04;
        uVar1 = extraout_w10_05;
        uVar7 = extraout_w11_01;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087559ac();
        if ((bool)uVar3) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x0001087557b0();
          func_0x000108755b84();
        }
        func_0x0001087559bc();
        *(long *)(extraout_x8_07 + 0x20) = lVar5;
LAB_10874dc04:
        func_0x0001087558a0(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  lVar5 = param_1 + 0x48;
  FUN_1086cc64c(lVar5);
  func_0x0001087522bc(param_1 + 0x10,lVar5);
  func_0x000108755b1c();
  func_0x000108755ac8();
  func_0x000108755e30();
  func_0x000108755c40();
  func_0x000108755be8();
  func_0x000108755ae8();
  return;
}



/* Entry: 10874dcc0; end: 10874e167;  */

char FUN_10874dcc0(long param_1,undefined8 param_2,int *param_3,uint param_4)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 **ppuVar5;
  ulong *puVar6;
  int iVar7;
  undefined1 uVar8;
  ulong uVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  int aiStack_440 [2];
  ulong uStack_438;
  undefined1 uStack_430;
  ulong uStack_428;
  undefined1 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 auStack_280 [32];
  undefined8 uStack_260;
  byte bStack_258;
  char cStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  byte bStack_10;
  
  func_0x00010875615c();
  puVar2 = (ulong *)(param_3 + 2);
  uVar9 = *puVar2;
  FUN_10874e168(aiStack_440,param_1,param_2,uVar9);
  if (aiStack_440[0] == 2) {
    cStack_d8 = '\0';
  }
  else {
    FUN_108862de8(aiStack_440,*(undefined8 *)(param_1 + 0x98),param_2,uVar9);
    func_0x000107c28998(auStack_280,aiStack_440);
    func_0x000107c28948(aiStack_440);
    if ((cStack_d8 == '\x01') && ((bStack_258 & 1) != 0)) {
      func_0x0001072833b8();
      lVar3 = param_1 + 0x280;
      func_0x000108756610();
      puVar4 = auStack_38;
      FUN_10874e168(puVar4,param_1,param_2,uStack_260);
      uStack_50 = 0;
      func_0x000107c28258();
      uStack_40 = 1;
      lStack_68 = 0;
      lStack_60 = 0;
      uStack_58 = 0;
      puStack_48 = puVar4;
      if (0 < param_3[6]) {
        func_0x0001087560f4(aiStack_440,*(undefined8 *)(param_1 + 0x98),param_2,*puVar2 + 1,1,
                            uStack_20,uStack_18);
        func_0x0001086a9b44(&lStack_68,aiStack_440);
        func_0x000108755f88();
      }
      lStack_80 = 0;
      lStack_78 = 0;
      uStack_70 = 0;
      iVar14 = param_3[7];
      if (iVar14 < 1) {
        iVar7 = 0;
      }
      else {
        func_0x000108755ef0(aiStack_440,*(undefined8 *)(param_1 + 0x98),param_2,uStack_30,uStack_28,
                            *puVar2 - 1,1,iVar14);
        func_0x0001086a9b44(&lStack_80,aiStack_440);
        func_0x000108755f88();
        iVar14 = param_3[7];
        iVar7 = (int)((lStack_78 - lStack_80) / 0x1a8);
      }
      func_0x0001086a9b00(lStack_68,lStack_60);
      if (lStack_68 == lStack_60) {
        uVar10 = 1;
        puVar6 = puVar2;
      }
      else {
        uVar10 = *(undefined1 *)(lStack_68 + 0x28);
        puVar6 = (ulong *)(lStack_68 + 0x20);
      }
      if ((param_3[7] < 1 || iVar14 == iVar7) || ((bStack_10 & 1) != 0)) {
        if (lStack_80 == lStack_78) {
          uVar12 = *puVar2;
          uVar9 = uVar12 & 0xffffffffffffff00;
          uVar8 = 1;
        }
        else {
          uVar12 = *(ulong *)(lStack_78 + -0x188);
          uVar9 = uVar12 & 0xffffffffffffff00;
          uVar8 = *(undefined1 *)(lStack_78 + -0x180);
        }
      }
      else {
        uVar8 = 0;
        uVar12 = 0;
        uVar9 = 0;
      }
      uVar15 = *puVar6;
      lStack_98 = 0;
      lStack_90 = 0;
      uStack_88 = 0;
      FUN_10867d03c(&lStack_98,(lStack_60 - lStack_68) / 0x1a8 + (lStack_78 - lStack_80) / 0x1a8 + 1
                   );
      func_0x0001086c0798(&lStack_98,lStack_90,lStack_68,lStack_60);
      FUN_10867b444(&lStack_98,auStack_280);
      func_0x0001086c0798(&lStack_98,lStack_90,lStack_80,lStack_78);
      lVar1 = lStack_90;
      aiStack_440[0] = 0;
      uStack_438 = uStack_438 & 0xffffffffffffff00;
      uStack_430 = 0;
      uStack_428 = uStack_428 & 0xffffffffffffff00;
      uStack_420 = 0;
      uStack_410 = 0;
      uStack_418 = 0;
      uStack_400 = 0;
      uStack_408 = 0;
      uStack_3f8 = 0x3f800000;
      puStack_3f0 = &uStack_3e8;
      uStack_3e8 = 0;
      uStack_3e0 = 0;
      for (lVar13 = lStack_98 + 0x20; lVar13 + -0x20 != lVar1; lVar13 = lVar13 + 0x1a8) {
        if (*(char *)(lVar13 + 8) == '\x01') {
          puVar11 = *(undefined8 **)(lVar13 + -8);
          ppuVar5 = &puStack_3f0;
          FUN_10874cff8(ppuVar5,lVar13);
          *ppuVar5 = puVar11;
        }
      }
      aiStack_440[0] = *param_3;
      uStack_428 = uVar9 | uVar12 & 0xff;
      uStack_438 = uVar15;
      uStack_430 = uVar10;
      uStack_420 = uVar8;
      FUN_108746ffc(lVar3 + 0x28,aiStack_440);
      FUN_10874d02c(param_1,param_2,lVar3 + 0x28);
      puVar11 = &uStack_50;
      func_0x000107c2825c();
      uStack_b8 = 0;
      puStack_a0 = puVar11;
      func_0x000107c28258();
      uStack_a8 = 1;
      uStack_c8 = 0;
      puStack_d0 = (undefined8 *)0x0;
      uStack_c0 = 0;
      puStack_b0 = puVar11;
      FUN_10874ad2c(param_1,param_2,0,(ulong)param_4 | 0x100000000,lVar3 + 0x28,&lStack_98,
                    &puStack_d0,(ulong)(uint)param_3[1] | 0x100000000,*(undefined8 *)(param_3 + 2),
                    *(undefined8 *)(param_3 + 4));
      FUN_10869ccc0(&puStack_d0);
      puVar11 = &uStack_b8;
      func_0x000107c2825c();
      puStack_d0 = puVar11;
      func_0x000108755c6c(param_1,param_2,lVar3 + 0x28);
      FUN_10874d22c();
      func_0x000108750a20(aiStack_440);
      func_0x00010867b9fc(&lStack_98);
      func_0x00010867b9fc(&lStack_80);
      func_0x00010867b9fc(&lStack_68);
    }
    func_0x000107c288dc(auStack_280);
  }
  return cStack_d8;
}



/* Entry: 10874e168; end: 10874e237;  */

void FUN_10874e168(undefined4 *param_1,long param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  char cStack_28;
  
  if (*(char *)(param_3 + 0x180) == '\x01' && *(long *)(param_3 + 0x178) <= param_4) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 0x178);
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 0x180);
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    uVar1 = *(undefined1 *)(param_3 + 0x188);
  }
  else {
    FUN_108865c34(auStack_60,*(undefined8 *)(param_2 + 0x98),param_3,param_4);
    if (cStack_28 == '\x01') {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 2) = uStack_48;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined8 *)(param_1 + 6) = uStack_40;
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_1 + 10) = uStack_38;
      func_0x0001087466e8(auStack_60);
      return;
    }
    func_0x0001087466e8(auStack_60);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 10) = uVar1;
  return;
}



/* Entry: 10874e238; end: 10874e5c3;  */

void FUN_10874e238(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x23;
  undefined1 auStack_1e0 [464];
  byte bStack_10;
  
  func_0x00010875615c();
  func_0x000108755da0();
  lVar8 = param_1;
  func_0x000108755d68(FUN_108754c78);
  func_0x0001087565cc();
  uVar3 = *(char *)(unaff_x23 + 0x168) == '\x01';
  if ((bool)uVar3) {
    func_0x000108756630();
  }
  else {
    func_0x000108756188();
  }
  func_0x00010875604c();
  func_0x00010875643c();
  *(long *)(param_1 + 0x58) = lVar8;
  func_0x00010875600c();
  func_0x0001087567c8();
  func_0x000108756338();
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x40) != 0) {
    do {
      func_0x00010875583c();
    } while (extraout_w10 != 0);
  }
  func_0x00010875632c();
  plVar4 = (long *)(param_1 + 0x68);
  func_0x000107c278b8();
  func_0x0001087560fc();
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x90);
  do {
    func_0x00010875583c();
  } while (extraout_w10_00 != 0);
  func_0x000108755af0(*(undefined8 *)(param_1 + 0x88));
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd4) = 0;
    lVar8 = *(long *)(param_1 + 0x88);
    func_0x000108755790();
    lVar10 = *plVar4;
    if (lVar10 == 0) {
      func_0x000107c3a5c0();
      lVar10 = *plVar4;
    }
    func_0x000108756644();
    plVar4 = extraout_x8;
    do {
      if (*plVar4 == 0) {
        func_0x000108755890();
        plVar4 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar4 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087559ac();
        if ((bool)uVar3) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x0001087557b0();
          func_0x000108756348();
        }
        func_0x0001087559bc();
        *(long *)(extraout_x8_02 + 0x20) = lVar10;
        func_0x0001087558a0(*(undefined8 *)(lVar8 + 0x90));
        *(undefined8 *)(lVar8 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  puVar5 = (ulong *)(param_1 + 0x88);
  func_0x000107c28a1c();
  uVar9 = *puVar5;
  func_0x000108755e64();
  func_0x000108755d98();
  func_0x000108755d00();
  func_0x000108755c9c();
  func_0x000108755dc8();
  func_0x000108755d90();
  func_0x0001087561b4();
  func_0x00010875590c();
  if (((extraout_w8_00 >> 1 & 1) != 0) || (func_0x00010875590c(), (extraout_w8_01 >> 5 & 1) != 0)) {
    func_0x000108755bd8();
    func_0x00010875632c();
    func_0x0001087564ac();
    func_0x000108756494();
    func_0x000108755828();
    ___cxa_throw(puVar5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10874e480);
    (*pcVar2)();
  }
  func_0x000108755f98(*(undefined8 *)(param_1 + 0xb0));
  if (((puVar5 != (ulong *)0x0) && (puVar6 = puVar5, func_0x000108755e20(), (puVar5[5] & 1) == 0))
     && ((char)puVar5[0x32] != '\0')) {
    *(undefined1 *)(puVar5 + 0x32) = 0;
    if ((uVar9 >> 0x20 & 1) == 0) {
      func_0x00010875677c();
      func_0x000108755be0(auStack_1e0);
      if ((bStack_10 & 1) == 0) {
        func_0x000108755e50();
        func_0x000108755870();
      }
      else {
        func_0x000108755fc0();
        func_0x0001087564a0();
        if (((ulong)puVar6 & 1) == 0) {
          func_0x000108755e50();
          func_0x000108755870();
          func_0x000108755e74();
          goto LAB_10874e424;
        }
      }
      func_0x000108755ad0();
      func_0x000108755e74();
      goto LAB_10874e428;
    }
    func_0x000108755e50();
    func_0x000108755c6c();
    FUN_10874bb4c();
  }
LAB_10874e424:
  func_0x000108755ad0();
LAB_10874e428:
  func_0x000108755d38();
  func_0x000108755ac8();
  func_0x000108755be8();
  func_0x000108755ae8();
  return;
}



/* Entry: 10874e5c4; end: 10874e77f;  */

/* WARNING: Removing unreachable block (ram,0x00010874e6f8) */

void FUN_10874e5c4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong *puVar5;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar3 = (undefined8 *)0x40;
  __Znwm();
  *puVar3 = FUN_108754814;
  puVar3[1] = FUN_1087548c0;
  func_0x000107c295fc(puVar3 + 2);
  func_0x000107c295e8(param_1,puVar3 + 2);
  func_0x000107c28da8(param_5);
  plVar4 = *(long **)(param_2 + 200);
  (**(code **)(*plVar4 + 0x20))
            (puVar3 + 5,plVar4,param_3,*(undefined8 *)(param_4 + 8),*(undefined4 *)(param_4 + 0x1c),
             *(undefined4 *)(param_4 + 0x18),1,1,param_5);
  func_0x000108755bb8();
  do {
    func_0x00010875583c();
  } while (extraout_w10 != 0);
  func_0x000108755af0(puVar3[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar3 + 7) = 0;
    func_0x000108755790();
    if (*plVar4 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108755c18();
    plVar4 = extraout_x8;
    do {
      if (*plVar4 == 0) {
        func_0x000108755890();
        plVar4 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar4 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x0001087557ec();
        if ((bool)in_ZR) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x000108755748();
        }
        func_0x00010875571c();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  puVar5 = puVar3 + 4;
  FUN_1086cc64c();
  uVar7 = *puVar5;
  puVar3[6] = uVar7;
  func_0x000108755b14();
  func_0x000108755afc();
  if (uVar7 >> 0x20 == 0) {
    FUN_1086cc694(puVar3 + 6);
    uVar8 = puVar3[3];
    do {
      iVar2 = (int)uVar8 + 0x10;
      func_0x000108755c5c();
    } while (iVar2 == 0);
    func_0x000108755cb0();
    func_0x000108756560();
  }
  else {
    func_0x0001087562b0();
  }
  func_0x000108755ac8();
  func_0x000108755ae8();
  return;
}



/* Entry: 10874e780; end: 10874eb0b;  */

void FUN_10874e780(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x23;
  undefined1 auStack_1e0 [464];
  byte bStack_10;
  
  func_0x00010875615c();
  func_0x000108755da0();
  lVar8 = param_1;
  func_0x000108755d68(FUN_108755064);
  func_0x0001087565cc();
  uVar3 = *(char *)(unaff_x23 + 0x168) == '\x01';
  if ((bool)uVar3) {
    func_0x000108756630();
  }
  else {
    func_0x000108756188();
  }
  func_0x00010875604c();
  func_0x00010875643c();
  *(long *)(param_1 + 0x58) = lVar8;
  func_0x00010875600c();
  func_0x0001087567c8();
  func_0x000108756338();
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x40) != 0) {
    do {
      func_0x00010875583c();
    } while (extraout_w10 != 0);
  }
  func_0x00010875632c();
  plVar4 = (long *)(param_1 + 0x68);
  func_0x000107c278b8();
  func_0x0001087560fc();
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x90);
  do {
    func_0x00010875583c();
  } while (extraout_w10_00 != 0);
  func_0x000108755af0(*(undefined8 *)(param_1 + 0x88));
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd4) = 0;
    lVar8 = *(long *)(param_1 + 0x88);
    func_0x000108755790();
    lVar10 = *plVar4;
    if (lVar10 == 0) {
      func_0x000107c3a5c0();
      lVar10 = *plVar4;
    }
    func_0x000108756644();
    plVar4 = extraout_x8;
    do {
      if (*plVar4 == 0) {
        func_0x000108755890();
        plVar4 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar4 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087559ac();
        if ((bool)uVar3) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x0001087557b0();
          func_0x000108756348();
        }
        func_0x0001087559bc();
        *(long *)(extraout_x8_02 + 0x20) = lVar10;
        func_0x0001087558a0(*(undefined8 *)(lVar8 + 0x90));
        *(undefined8 *)(lVar8 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  puVar5 = (ulong *)(param_1 + 0x88);
  func_0x000107c28a1c();
  uVar9 = *puVar5;
  func_0x000108755e64();
  func_0x000108755d98();
  func_0x000108755d00();
  func_0x000108755c9c();
  func_0x000108755dc8();
  func_0x000108755d90();
  func_0x0001087561b4();
  func_0x00010875590c();
  if (((extraout_w8_00 >> 1 & 1) != 0) || (func_0x00010875590c(), (extraout_w8_01 >> 5 & 1) != 0)) {
    func_0x000108755bd8();
    func_0x00010875632c();
    func_0x0001087564ac();
    func_0x000108756494();
    func_0x000108755828();
    ___cxa_throw(puVar5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10874e9c8);
    (*pcVar2)();
  }
  func_0x000108755f98(*(undefined8 *)(param_1 + 0xb0));
  if (((puVar5 != (ulong *)0x0) && (puVar6 = puVar5, func_0x000108755e20(), (puVar5[5] & 1) == 0))
     && ((char)puVar5[0x32] != '\0')) {
    *(undefined1 *)(puVar5 + 0x32) = 0;
    if ((uVar9 >> 0x20 & 1) == 0) {
      func_0x00010875677c();
      func_0x000108755be0(auStack_1e0);
      if ((bStack_10 & 1) == 0) {
        func_0x000108755e50();
        func_0x000108755870();
      }
      else {
        func_0x000108755fc0();
        func_0x0001087564a0();
        if (((ulong)puVar6 & 1) == 0) {
          func_0x000108755e50();
          func_0x000108755870();
          func_0x000108755e74();
          goto LAB_10874e96c;
        }
      }
      func_0x000108755ad0();
      func_0x000108755e74();
      goto LAB_10874e970;
    }
    func_0x000108755e50();
    func_0x000108755c6c();
    FUN_10874bb4c();
  }
LAB_10874e96c:
  func_0x000108755ad0();
LAB_10874e970:
  func_0x000108755d38();
  func_0x000108755ac8();
  func_0x000108755be8();
  func_0x000108755ae8();
  return;
}



/* Entry: 10874eb0c; end: 10874ee33;  */

void FUN_10874eb0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar5 = (undefined8 *)0xc0;
  __Znwm();
  *puVar5 = FUN_108754f00;
  puVar5[1] = FUN_108755030;
  func_0x000107c295fc(puVar5 + 2);
  func_0x0001087565d8();
  puVar6 = (undefined8 *)0x28;
  __Znwm();
  plVar10 = puVar6 + 1;
  *plVar10 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110a6a990;
  puVar12 = puVar6 + 3;
  *puVar12 = 0;
  uStack_70 = 0;
  func_0x000107c27f9c(&uStack_70);
  puVar6[4] = 0;
  uStack_70 = 0;
  func_0x000107c27f98(&uStack_70);
  puVar7 = (undefined8 *)0xd8;
  __Znwm();
  puVar8 = puVar7;
  func_0x000107c31510();
  *puVar8 = &PTR_DAT_110a6a9e0;
  *(undefined1 *)(puVar8 + 0x13) = 0;
  *(undefined1 *)(puVar8 + 0x1a) = 0;
  uStack_70 = 0;
  puStack_90 = (undefined8 *)0x0;
  func_0x000107c27f98(&puStack_90);
  func_0x000107c27f9c(&uStack_70);
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_90 = puVar7;
  puStack_88 = puVar7;
  func_0x000107c27f98(&uStack_80);
  func_0x000108756314();
  func_0x000107c27fec(&uStack_70);
  func_0x000107c288b0(puVar12,&puStack_90);
  func_0x000107c2887c(puVar6 + 4,&puStack_88);
  func_0x000107c27f98(&puStack_88);
  func_0x000107c27f9c(&puStack_90);
  puVar5[0xf] = puVar12;
  puVar5[0x10] = puVar6;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = *plVar10 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar9 = *(undefined8 *)(param_1 + 0xd8);
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0xb] = &PTR_SUB_110a6aa20;
  puVar5[0xc] = puVar12;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0xd] = puVar6;
  puVar5[0xe] = puVar5 + 0xb;
  FUN_10874f8e8(uVar9,param_2,param_3,puVar5 + 0xb);
  func_0x00010875623c();
  plVar10 = puVar5 + 0x13;
  FUN_108753068();
  puVar5[0x16] = *puVar12;
  do {
    func_0x00010875583c();
  } while (extraout_w10 != 0);
  puVar5[0x15] = puVar5[0x16];
  do {
    func_0x00010875583c();
  } while (extraout_w10_00 != 0);
  func_0x000108755af0(puVar5[0x15]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x17) = 0;
    func_0x000108755790();
    if (*plVar10 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108755c18();
    plVar10 = extraout_x8;
    do {
      if (*plVar10 == 0) {
        func_0x000108755890();
        plVar10 = extraout_x8_01;
        uVar3 = extraout_w10_02;
        uVar11 = extraout_w11_00;
      }
      else {
        func_0x000108755b70();
        plVar10 = extraout_x8_00;
        uVar3 = extraout_w10_01;
        uVar11 = extraout_w11;
      }
      if ((uVar11 & 1) != 0) {
        func_0x0001087557ec();
        if ((bool)in_ZR) {
          func_0x000108755860();
          func_0x0001087557a0();
          func_0x000108755748();
        }
        func_0x00010875571c();
        return;
      }
    } while ((uVar3 >> 1 & 1) == 0);
  }
  if (((uint)*(undefined8 *)(puVar5[0x15] + 0x10) >> 5 & 1) == 0) {
    FUN_1086d48a8(puVar5 + 4,puVar5[0x15] + 0x98);
    func_0x000108755c9c();
    func_0x000108756594();
    puVar8 = puVar5 + 7;
    FUN_1086d5eb4();
    uStack_70._0_5_ = SUB85(puVar8,0);
    func_0x000107c295f0(puVar5 + 2,&uStack_70);
    func_0x000107c27914(puVar5 + 4);
    func_0x000108756618();
    func_0x00010875659c();
    func_0x000108755ac8();
    func_0x000108755ae8();
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(&uStack_70,puVar5[0x15] + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(&uStack_70);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10874edc0);
  (*pcVar4)();
}



/* Entry: 10874ee34; end: 10874eefb;  */

void FUN_10874ee34(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000018;
  
  func_0x0001087567dc();
  func_0x000108755c04();
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  func_0x000107c289d0(param_1 + 4);
  *(undefined1 *)(unaff_x19 + 0x28) = 0;
  if (param_4 != 0) {
    uVar1 = *(undefined4 *)(unaff_x20 + 8);
    *(int *)(unaff_x20 + 4) = *(int *)(unaff_x20 + 4) + 1;
    func_0x00010874ef8c(param_1 + 1);
    *(long *)(unaff_x19 + 8) = unaff_x20;
    *(undefined4 *)(unaff_x19 + 0x10) = uVar1;
    *(undefined1 *)(unaff_x19 + 0x14) = 0;
    *(undefined1 *)(unaff_x19 + 0x18) = 1;
  }
  func_0x000107c289cc(&stack0x00000010);
  func_0x000107c288b0(unaff_x19 + 0x20,&stack0x00000010);
  in_stack_00000018 = 0;
  FUN_10874d5d0(unaff_x20 + 0x128);
  func_0x000107c27f98();
  func_0x000107c289dc(&stack0x00000010);
  return;
}



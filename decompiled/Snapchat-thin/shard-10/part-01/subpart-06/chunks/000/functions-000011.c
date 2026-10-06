/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107872cb4; end: 107872cfb;  */

undefined8 * FUN_107872cb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x0001078732dc();
  if ((bool)in_CY && !(bool)in_ZR) {
    if ((ulong)param_2 >> 0x3c != 0) {
      func_0x000107872f04();
      func_0x0001078732a8();
      func_0x000107873268();
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) {
        uVar2 = *param_2;
        puVar1[1] = param_2[1];
        *puVar1 = uVar2;
        puVar1 = puVar1 + 2;
      }
      else {
        puVar1 = param_1;
        func_0x000107872ff8();
      }
      param_1[1] = puVar1;
      return puVar1 + -2;
    }
    func_0x00010787330c();
    func_0x000107872f30();
    func_0x000107873354();
    func_0x0001078732a8();
  }
  return param_1;
}



/* Entry: 107872e44; end: 107872e6f;  */

long * FUN_107872e44(long *param_1)

{
  func_0x000107872e70();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107872fd4; end: 107872ff7;  */

void FUN_107872fd4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107873154; end: 10787316b;  */

void FUN_107873154(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078739e4; end: 107873a17;  */

void FUN_1078739e4(undefined1 *param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  param_1[7] = param_2[7];
  uVar1 = *(undefined2 *)(param_2 + 9);
  param_1[0xb] = param_2[0xb];
  *(undefined2 *)(param_1 + 9) = uVar1;
  return;
}



/* Entry: 107873d60; end: 107873d87;  */

void FUN_107873d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  func_0x0001078746fc(param_1,param_2,&uStack_18,&uStack_19);
  return;
}



/* Entry: 107874628; end: 1078746a7;  */

bool FUN_107874628(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char in_NG;
  char in_OV;
  ulong uVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined8 extraout_x10;
  undefined8 extraout_x11;
  ushort ****ppppuVar6;
  ushort ***pppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  func_0x000107874880();
  uVar1 = extraout_x11;
  uVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    uVar2 = param_1;
  }
  func_0x0001078a95c8(&pppuStack_38,uVar2,uVar1);
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuStack_38 = (ushort ***)&pppuStack_38;
  }
  lVar3 = uStack_30 << 1;
  ppppuVar6 = (ushort ****)pppuStack_38;
  do {
    lVar5 = lVar3;
    if (lVar5 == 0) break;
    uVar4 = (ulong)*(ushort *)ppppuVar6;
    func_0x0001078745fc();
    lVar3 = lVar5 + -2;
    ppppuVar6 = (ushort ****)((long)ppppuVar6 + 2);
  } while ((uVar4 & 1) != 0);
  func_0x00010089ccb4(&pppuStack_38);
  return lVar5 == 0;
}



/* Entry: 107874b20; end: 107874b53;  */

long FUN_107874b20(long param_1)

{
  func_0x000107874b54(param_1 + 0x40);
  func_0x000107874c00(param_1 + 0x30);
  func_0x000107874cac(param_1 + 0x20);
  return param_1;
}



/* Entry: 107874cf4; end: 107874d2f;  */

long FUN_107874cf4(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 107874f24; end: 107874ff3;  */

undefined8
FUN_107874f24(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             float *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = (float)*param_1;
  fVar5 = (float)((ulong)*param_1 >> 0x20);
  fVar6 = (float)*param_2;
  fVar8 = ((float)*param_3 - fVar4) / fVar6;
  fVar7 = (float)((ulong)*param_2 >> 0x20);
  fVar9 = ((float)((ulong)*param_3 >> 0x20) - fVar5) / fVar7;
  fVar6 = ((float)*param_4 - fVar4) / fVar6;
  fVar7 = ((float)((ulong)*param_4 >> 0x20) - fVar5) / fVar7;
  fVar4 = fVar8;
  if (fVar8 <= fVar6) {
    fVar4 = fVar6;
    fVar6 = fVar8;
  }
  fVar5 = fVar9;
  if (fVar9 <= fVar7) {
    fVar5 = fVar7;
    fVar7 = fVar9;
  }
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (fVar6 <= fVar5) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar7) && !NAN(fVar4)) {
      bVar1 = fVar7 < fVar4;
      bVar2 = fVar7 == fVar4;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    if (fVar7 <= fVar6) {
      fVar7 = fVar6;
    }
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
    fVar8 = (*(float *)(param_3 + 1) - *(float *)(param_1 + 1)) / *(float *)(param_2 + 1);
    fVar6 = (*(float *)(param_4 + 1) - *(float *)(param_1 + 1)) / *(float *)(param_2 + 1);
    fVar4 = fVar8;
    if (fVar8 <= fVar6) {
      fVar4 = fVar6;
      fVar6 = fVar8;
    }
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (fVar7 <= fVar4) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar6) && !NAN(fVar5)) {
        bVar1 = fVar6 < fVar5;
        bVar2 = fVar6 == fVar5;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      if (fVar6 <= fVar7) {
        fVar6 = fVar7;
      }
      *param_5 = fVar6;
      if (fVar6 < 0.0) {
        if (fVar5 <= fVar4) {
          fVar4 = fVar5;
        }
        *param_5 = fVar4;
        if (fVar4 < 0.0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 107875690; end: 1078756d7;  */

bool FUN_107875690(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_2[1];
  lVar2 = *param_2;
  do {
    lVar4 = lVar2;
    if (lVar4 == lVar1) break;
    uVar3 = param_1;
    func_0x00010787554c(param_1,lVar4);
    lVar2 = lVar4 + 0x18;
  } while ((int)uVar3 == 0);
  return lVar4 != lVar1;
}



/* Entry: 107875d2c; end: 107875e4b;  */

/* WARNING: Possible PIC construction at 0x000107875d88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107875d8c) */

void FUN_107875d2c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined *puVar6;
  undefined1 uStack_d1;
  ulong *puStack_d0;
  ulong *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  ulong auStack_b0 [3];
  ulong auStack_98 [3];
  ulong uStack_80;
  ulong auStack_78 [8];
  long lStack_38;
  
  puVar3 = auStack_b0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  if (cRam0000000113823e38 == '\x01') {
    puVar1 = auStack_78;
    _backtrace(puVar1,8);
    uStack_80 = 0;
    param_2 = auStack_78;
    unaff_x20 = param_2;
    if ((int)puVar1 != 0) {
      puVar3 = &uStack_80;
      puVar6 = (undefined *)0x107875d8c;
      goto code_r0x000107875e4c;
    }
    puVar2 = (ulong *)0x1131adb00;
    param_2 = &uStack_80;
    func_0x0001072a1b80();
    if (((ulong)param_2 & 1) != 0) {
      func_0x00010002b838(auStack_b0,&UNK_10f4307cf);
      func_0x00010048a6c8(auStack_98,auStack_b0,param_1);
      param_2 = auStack_98;
      func_0x00010786df04(0x12,param_2,1,0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      puVar2 = puVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  puVar6 = &SUB_107875e4c;
  puVar3 = puVar2;
  __Unwind_Resume();
code_r0x000107875e4c:
  puVar4 = &uStack_d1;
  puStack_d0 = unaff_x20;
  puStack_c8 = puVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  puStack_b8 = puVar6;
  func_0x0001000df39c(puVar4,*param_2);
  uVar5 = *puVar3;
  *puVar3 = (ulong)(puVar4 + (uVar5 >> 4) + uVar5 * 0x1000 + -0x61c8864680b583eb) ^ uVar5;
  return;
}



/* Entry: 1078761d8; end: 10787625f;  */

void FUN_1078761d8(ulong param_1)

{
  ulong uStack_50;
  undefined8 uStack_48;
  
  func_0x0001078765b0();
  if ((param_1 & 1) != 0) {
    func_0x0001078765fc();
    func_0x00010787666c(uStack_50,uStack_48);
    if ((uStack_50 & 1) != 0) {
      func_0x000107876648();
      func_0x0001078765e8();
      func_0x00010787665c();
      func_0x00010787660c();
      func_0x00010787663c();
      func_0x000107876664();
      return;
    }
  }
  func_0x000107876630();
  return;
}



/* Entry: 1078769cc; end: 107876be7;  */

bool FUN_1078769cc(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  
  dVar25 = *param_2;
  dVar29 = param_2[1];
  dVar21 = param_2[2];
  dVar22 = param_2[3];
  dVar27 = param_2[4];
  dVar28 = param_2[5];
  dVar23 = param_2[6];
  dVar26 = param_2[7];
  dVar7 = param_2[8];
  dVar18 = param_2[9];
  dVar2 = param_2[10];
  dVar3 = param_2[0xb];
  dVar9 = param_2[0xc];
  dVar17 = param_2[0xd];
  dVar4 = param_2[0xe];
  dVar8 = param_2[0xf];
  dVar5 = -(dVar27 * dVar29) + dVar28 * dVar25;
  dVar19 = -(dVar27 * dVar21) + dVar23 * dVar25;
  dVar24 = -(dVar27 * dVar22) + dVar26 * dVar25;
  dVar20 = -(dVar28 * dVar21) + dVar23 * dVar29;
  dVar31 = -(dVar28 * dVar22) + dVar26 * dVar29;
  dVar30 = -(dVar23 * dVar22) + dVar26 * dVar21;
  dVar32 = -(dVar9 * dVar18) + dVar17 * dVar7;
  dVar10 = -(dVar9 * dVar2) + dVar4 * dVar7;
  dVar13 = -(dVar9 * dVar3) + dVar8 * dVar7;
  dVar11 = -(dVar17 * dVar2) + dVar4 * dVar18;
  dVar15 = -(dVar17 * dVar3) + dVar8 * dVar18;
  dVar14 = -(dVar4 * dVar3) + dVar8 * dVar2;
  dVar1 = ((-(dVar15 * dVar19) + dVar14 * dVar5 + dVar11 * dVar24 + dVar13 * dVar20) -
          dVar10 * dVar31) + dVar32 * dVar30;
  if (dVar1 != 0.0) {
    dVar16 = -(dVar18 * dVar8) - -(dVar17 * dVar3);
    dVar12 = -(dVar29 * dVar26) - -(dVar28 * dVar22);
    dVar6 = 1.0 / dVar1;
    *param_1 = (dVar23 * dVar16 + dVar14 * dVar28 + dVar11 * dVar26) * dVar6;
    param_1[1] = ((-(dVar14 * dVar29) + dVar15 * dVar21) - dVar11 * dVar22) * dVar6;
    param_1[2] = (dVar4 * dVar12 + dVar30 * dVar17 + dVar20 * dVar8) * dVar6;
    param_1[3] = ((-(dVar30 * dVar18) + dVar31 * dVar2) - dVar20 * dVar3) * dVar6;
    param_1[4] = ((-(dVar14 * dVar27) + dVar13 * dVar23) - dVar10 * dVar26) * dVar6;
    param_1[5] = (-(dVar13 * dVar21) + dVar14 * dVar25 + dVar10 * dVar22) * dVar6;
    param_1[6] = ((-(dVar30 * dVar9) + dVar24 * dVar4) - dVar19 * dVar8) * dVar6;
    param_1[7] = (-(dVar24 * dVar2) + dVar30 * dVar7 + dVar19 * dVar3) * dVar6;
    param_1[8] = (-(dVar13 * dVar28) + dVar15 * dVar27 + dVar32 * dVar26) * dVar6;
    param_1[9] = ((dVar25 * dVar16 + dVar13 * dVar29) - dVar32 * dVar22) * dVar6;
    param_1[10] = (-(dVar24 * dVar17) + dVar31 * dVar9 + dVar5 * dVar8) * dVar6;
    param_1[0xb] = ((dVar7 * dVar12 + dVar24 * dVar18) - dVar5 * dVar3) * dVar6;
    param_1[0xc] = (-(dVar11 * dVar27) + dVar10 * dVar28 + dVar32 * -dVar23) * dVar6;
    param_1[0xd] = (-(dVar10 * dVar29) + dVar11 * dVar25 + dVar32 * dVar21) * dVar6;
    param_1[0xe] = (-(dVar20 * dVar9) + dVar19 * dVar17 + dVar5 * -dVar4) * dVar6;
    param_1[0xf] = (-(dVar19 * dVar18) + dVar20 * dVar7 + dVar5 * dVar2) * dVar6;
  }
  return dVar1 == 0.0;
}



/* Entry: 1078772cc; end: 10787759b;  */

undefined8 FUN_1078772cc(long param_1,int param_2)

{
  return *(undefined8 *)(param_1 + (ulong)(uint)(param_2 << 2) * 8);
}



/* Entry: 1078778fc; end: 10787792b;  */

undefined8 * FUN_1078778fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e3cb0;
  func_0x0001001148fc(param_1 + 1);
  return param_1;
}



/* Entry: 1078782c4; end: 1078782e3;  */

void FUN_1078782c4(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iStack_34;
  
  if (*param_1 == 0xdd) {
    return;
  }
  iStack_34 = 0;
  piVar3 = param_1;
  func_0x000107878390(param_1,&iStack_34,0x65c2937b,0);
  if ((((ulong)piVar3 & 1) != 0) ||
     (piVar3 = param_1, func_0x00010ae87864(param_1,3,&UNK_10deafc74,1), (int)piVar3 == 0)) {
    (*(code *)*param_2)(*param_3);
    do {
      iStack_34 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = 0xdd;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iStack_34 == 0x5a308d2) {
      func_0x00010ae87860(param_1,1);
    }
  }
  return;
}



/* Entry: 107878938; end: 107878957;  */

double FUN_107878938(double *param_1)

{
  return SQRT(param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2] +
              param_1[3] * param_1[3]);
}



/* Entry: 107878dfc; end: 107878e0f;  */

undefined8 FUN_107878dfc(undefined8 param_1,long param_2)

{
  undefined8 uStack_38;
  
  func_0x000107878e68();
  func_0x0001073ca0ec(&uStack_38,param_2 + 4);
  func_0x0001073ca0ec(&uStack_38,param_2 + 8);
  func_0x000107878e78();
  return uStack_38;
}



/* Entry: 107879190; end: 107879197;  */

void FUN_107879190(long param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined2 *)(param_1 + 0x15);
  for (; puVar2 = puVar1 + -1, 99 < param_2; param_2 = param_2 / 100) {
    *puVar2 = *(undefined2 *)(&UNK_10e60d9f4 + (ulong)(param_2 % 100) * 2);
    puVar1 = puVar2;
  }
  if (9 < param_2) {
    *puVar2 = *(undefined2 *)(&UNK_10e60d9f4 + (ulong)param_2 * 2);
    return;
  }
  *(byte *)((long)puVar1 + -1) = (byte)param_2 | 0x30;
  return;
}



/* Entry: 107879464; end: 1078794c7;  */

undefined1  [16]
FUN_107879464(long *param_1,char *param_2,char *param_3,undefined8 param_4,long param_5,long param_6
             )

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  long extraout_x8;
  char *pcVar5;
  char *pcVar6;
  long extraout_x9;
  char *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  pcVar4 = (char *)&uStack_30;
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 != param_6) {
    uStack_28 = *(undefined8 *)(param_2 + 8);
    uStack_30 = *(undefined8 *)param_2;
    uStack_20 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107879528();
    param_2 = pcVar4;
  }
  func_0x000107879a18(uStack_18);
  if (extraout_x9 == extraout_x8) {
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = param_1;
    return auVar8;
  }
  ___stack_chk_fail();
  for (; pcVar4 = param_3, pcVar6 = param_3, param_2 != param_3; param_2 = param_2 + 1) {
    pcVar1 = (char *)param_1[1];
    pcVar5 = param_2;
    pcVar7 = (char *)*param_1;
    if ((char *)*param_1 == pcVar1) break;
    do {
      if (pcVar5 == param_3 || pcVar7 == pcVar1) {
        pcVar4 = param_2;
        pcVar6 = pcVar5;
        if (pcVar7 == pcVar1) goto code_r0x000107879514;
        break;
      }
      cVar2 = *pcVar5;
      cVar3 = *pcVar7;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 == cVar3);
  }
code_r0x000107879514:
  auVar9._8_8_ = pcVar6;
  auVar9._0_8_ = pcVar4;
  return auVar9;
}



/* Entry: 107879bec; end: 107879c37;  */

undefined1 * FUN_107879bec(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  bool bVar1;
  
  if (((param_2[0x10] & 1) != 0) &&
     (func_0x0001074d2700(), bVar1 = param_2 != (undefined1 *)0x0, param_2 = (undefined1 *)0x0,
     bVar1)) {
    func_0x0001072786d8(param_1 + 8,param_3 + 0x40);
    param_1[0x70] = 1;
    return param_1;
  }
  *param_1 = 0;
  param_1[0x70] = 0;
  return param_2;
}



/* Entry: 107879eb8; end: 107879f87;  */

void FUN_107879eb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_78 [8];
  long lStack_70;
  
  func_0x00010787be84();
  if (lStack_70 != 0) {
    func_0x00010787b8d0(auStack_78,*param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    func_0x0001073ae140(lStack_70,auStack_78);
    func_0x00010787bea4();
    if (lStack_70 != 0) {
      func_0x00010787bdc0();
    }
  }
  func_0x00010787be1c();
  return;
}



/* Entry: 10787a8d0; end: 10787a8e3;  */

void FUN_10787a8d0(void)

{
  func_0x00010787a8f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10787ab8c; end: 10787abc3;  */

long FUN_10787ab8c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e3da8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10787ad34; end: 10787ad37;  */

void FUN_10787ad34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e3dc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10787aef4; end: 10787af17;  */

void FUN_10787aef4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1109e3e18;
  return;
}



/* Entry: 10787b384; end: 10787b41f;  */

long * FUN_10787b384(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010787b3c0(lVar1 + 8);
    func_0x0001004895c8(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10787b894; end: 10787b8b7;  */

undefined8 FUN_10787b894(undefined8 param_1)

{
  func_0x00010787b8b8(param_1,0);
  return param_1;
}



/* Entry: 10787ba48; end: 10787babb;  */

void FUN_10787ba48(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  (*pcVar2)(plVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),&uStack_40,
            *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
  return;
}



/* Entry: 10787becc; end: 10787beef;  */

void FUN_10787becc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1109e3f18;
  return;
}



/* Entry: 10787c258; end: 10787c2e7;  */

long FUN_10787c258(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined1 auStack_108 [208];
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x00010787c668();
  uStack_38 = extraout_x8;
  func_0x0001072ab574(lVar1 + 8);
  func_0x0001077b3538(auStack_108,param_2);
  func_0x0001077b192c(param_1 + 0x80,auStack_108);
  func_0x000107273efc(auStack_108);
  lVar1 = param_1 + 0x48;
  __ZNSt3__118condition_variable10notify_oneEv();
  func_0x00010787c644();
  func_0x00010787c64c(uStack_38);
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x000107273efc(auStack_108);
  func_0x00010787c644();
  func_0x00010787c660();
  func_0x00010787c638();
  param_1 = param_1 + 0x80;
  func_0x0001077b2e0c(param_1);
  func_0x00010787c644();
  return param_1;
}



/* Entry: 10787c638; end: 10787c68f;  */

void FUN_10787c638(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 + 8U;
  __ZNSt3__15mutex8try_lockEv();
  if ((uVar1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 8U);
  }
  return;
}



/* Entry: 10787d76c; end: 10787da4b;  */

undefined8 * FUN_10787d76c(undefined8 *param_1,double *param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 uStack_191;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined1 uStack_130;
  undefined8 *puStack_120;
  undefined1 uStack_118;
  undefined8 *puStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined1 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  dVar8 = -85.0511287798066;
  if (-85.0511287798066 <= *param_2) {
    dVar8 = *param_2;
  }
  func_0x000107881564(dVar8,param_2[1],&dStack_e0);
  dVar8 = 85.0511287798066;
  if (param_2[2] <= 85.0511287798066) {
    dVar8 = param_2[2];
  }
  func_0x000107881564(dVar8,param_2[3],&puStack_110);
  func_0x00010725ac68(&dStack_150,&dStack_e0,&puStack_110);
  uVar3 = dStack_150 == dStack_140;
  if ((dStack_150 <= dStack_140) &&
     (uVar3 = dStack_140 == -85.0511287798066, -85.0511287798066 <= dStack_140)) {
    bVar2 = false;
    uVar3 = false;
    bVar4 = false;
    if (dStack_150 <= 85.0511287798066) {
      bVar2 = false;
      uVar3 = false;
      bVar4 = true;
      if (!NAN(dStack_148) && !NAN(dStack_138)) {
        bVar2 = dStack_148 < dStack_138;
        uVar3 = dStack_148 == dStack_138;
        bVar4 = false;
      }
    }
    if ((bool)uVar3 || bVar2 != bVar4) goto LAB_10787d854;
  }
  dStack_148 = -180.0;
  dStack_150 = -90.0;
  dStack_138 = 180.0;
  dStack_140 = 90.0;
  uStack_130 = 1;
LAB_10787d854:
  dVar8 = dStack_150;
  dVar12 = dStack_148;
  dStack_e0 = dStack_150;
  dStack_d8 = dStack_148;
  func_0x000107881188();
  dStack_d8 = dStack_138;
  dStack_e0 = dStack_140;
  dVar9 = dStack_140;
  dVar13 = dVar12;
  func_0x000107881188();
  dVar10 = dVar9;
  dVar14 = dVar13;
  func_0x0001072594e0(&dStack_150);
  dStack_e0 = dVar10;
  dStack_d8 = dVar14;
  func_0x000107881188();
  dVar11 = dVar10;
  dVar15 = dVar14;
  func_0x0001072594c0(&dStack_150);
  dStack_e0 = dVar11;
  dStack_d8 = dVar15;
  func_0x000107881188();
  dStack_e0 = dVar8;
  dStack_d8 = dVar12;
  dStack_d0 = dVar11;
  dStack_c8 = dVar15;
  dStack_c0 = dVar9;
  dStack_b8 = dVar13;
  dStack_b0 = dVar10;
  dStack_a8 = dVar14;
  dStack_a0 = dVar8;
  dStack_98 = dVar12;
  func_0x000107503dac(auStack_90,&dStack_e0,5);
  uStack_168 = 0;
  lStack_160 = 0;
  uStack_158 = 0;
  puStack_120 = &uStack_168;
  uStack_118 = 0;
  func_0x0001072695a4(&uStack_168,1);
  puStack_110 = &uStack_158;
  lStack_f0 = lStack_160;
  lStack_e8 = lStack_160;
  plStack_108 = &lStack_f0;
  plStack_100 = &lStack_e8;
  uStack_f8 = 0;
  func_0x000107269434(lStack_160,auStack_90);
  lVar1 = lStack_e8 + 0x18;
  uStack_f8 = 1;
  lStack_e8 = lVar1;
  func_0x000104c32408(&puStack_110);
  uStack_118 = 1;
  lStack_160 = lVar1;
  func_0x00010726966c(&puStack_120);
  func_0x000104c31c5c(auStack_90);
  uVar5 = 0x78;
  __Znwm(0x78);
  func_0x000107834980(&dStack_e0,&uStack_168);
  uStack_191 = SUB81(&dStack_e0,0);
  func_0x000107881b2c(uVar5,param_3);
  func_0x000104c3365c(&dStack_e0);
  puStack_110 = (undefined8 *)0x0;
  FUN_107880de8(param_1,uVar5);
  func_0x000107880dc4(&puStack_110);
  puVar6 = &uStack_168;
  func_0x000104c31ca8();
  func_0x000107881990(uStack_78);
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000104c3365c(&dStack_e0);
  __ZdlPv(uVar5);
  func_0x000104c31ca8(&uStack_168);
  puVar7 = param_1;
  func_0x000107880dc4(param_1);
  func_0x0001078813c8();
  puStack_178 = &UNK_10787da4c;
  puStack_190 = puVar6;
  puStack_188 = param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  func_0x00010787da84(puVar7,&uStack_191);
  return puVar7;
}



/* Entry: 10787e9c8; end: 10787eafb;  */

void FUN_10787e9c8(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  ulong uStack_30;
  ulong uStack_28;
  double dStack_20;
  
  dVar1 = param_1[2];
  if (param_1[2] <= param_2[2]) {
    dVar1 = param_2[2];
  }
  dStack_20 = param_1[5];
  if (dVar1 <= param_1[5]) {
    dStack_20 = dVar1;
  }
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar1 = (double)((ulong)dVar1 ^ ((ulong)dVar1 ^ (ulong)*param_1) & -(ulong)(dVar1 < *param_1));
  dVar2 = (double)((ulong)dVar2 ^ ((ulong)dVar2 ^ (ulong)param_1[1]) & -(ulong)(dVar2 < param_1[1]))
  ;
  uStack_30 = (ulong)dVar1 ^ ((ulong)dVar1 ^ (ulong)param_1[3]) & -(ulong)(param_1[3] < dVar1);
  uStack_28 = (ulong)dVar2 ^ ((ulong)dVar2 ^ (ulong)param_1[4]) & -(ulong)(param_1[4] < dVar2);
  func_0x000107429e44(&uStack_30);
  return;
}



/* Entry: 10787ecf8; end: 10787ed53;  */

void FUN_10787ecf8(long param_1)

{
  undefined1 in_CY;
  
  func_0x00010788195c();
  if (!(bool)in_CY) {
    __Znwm(param_1 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107881704();
  if (param_1 != 0) {
    func_0x0001078817c0();
  }
  return;
}



/* Entry: 10787eec0; end: 10787ef03;  */

long * FUN_10787eec0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10787faec; end: 10787fb97;  */

void FUN_10787faec(double *param_1,long param_2,double *param_3)

{
  double dVar1;
  double extraout_x8;
  double extraout_x8_00;
  double dVar2;
  undefined8 unaff_x30;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = *(double *)(param_2 + 0x10);
  dVar4 = 0.0;
  if (param_1[2] <= dVar3) {
    if (param_3[2] < dVar3) {
      func_0x0001078816b8();
      param_3[1] = dVar4;
      *param_3 = dVar3;
      param_3[2] = extraout_x8;
      if (*(double *)(param_2 + 0x10) < param_1[2]) {
        func_0x00010788132c();
      }
    }
  }
  else {
    if (dVar3 <= param_3[2]) {
      func_0x00010788132c();
      dVar3 = param_3[2];
      dVar4 = 0.0;
      if (*(double *)(param_2 + 0x10) <= dVar3) {
        return;
      }
      func_0x0001078816b8(unaff_x30);
      dVar1 = extraout_x8_00;
    }
    else {
      dVar1 = param_1[2];
      dVar4 = param_1[1];
      dVar3 = *param_1;
      dVar2 = param_3[2];
      dVar5 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = dVar5;
      param_1[2] = dVar2;
    }
    param_3[1] = dVar4;
    *param_3 = dVar3;
    param_3[2] = dVar1;
  }
  return;
}



/* Entry: 107880174; end: 1078801ab;  */

void FUN_107880174(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001078817b8();
  *puVar1 = &PTR_DAT_1109e3ff8;
  uVar2 = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[1] = uVar2;
  puVar1[3] = param_1[3];
  return;
}



/* Entry: 1078809d8; end: 107880a1b;  */

bool FUN_1078809d8(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = *(double *)(param_1 + 2) < *(double *)(param_2 + 2);
  if ((*(double *)(param_1 + 2) == *(double *)(param_2 + 2)) &&
     (bVar1 = *param_1 < *param_2, *param_1 == *param_2)) {
    return param_1[1] < param_2[1];
  }
  return bVar1;
}



/* Entry: 107880de8; end: 107880dff;  */

void FUN_107880de8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107880e1c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107880fa8; end: 10788100b;  */

undefined8 FUN_107880fa8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000107880fd4(&uStack_28);
  return param_1;
}



/* Entry: 107882368; end: 1078823ab;  */

bool FUN_107882368(uint *param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if ((*(long *)(param_1 + 0x1a) != 0) &&
     (func_0x000107884554(param_1[0x1d]), (bool)in_ZR || in_NG != in_OV)) {
    return param_1[0x1c] >> (ulong)(*param_1 & 0x1f) == 0;
  }
  return false;
}



/* Entry: 107882768; end: 1078827c3;  */

long FUN_107882768(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong unaff_x20;
  long lVar2;
  
  func_0x00010788440c();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x666666666666666 < unaff_x20) {
      func_0x000104bd35f4();
      if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
        lVar2 = **(long **)(param_1 + 8);
        lVar1 = **(long **)(param_1 + 0x10);
        while (lVar1 != lVar2) {
          lVar1 = lVar1 + -0x28;
          func_0x000104c31c5c();
        }
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x28;
    __Znwm(lVar1);
  }
  func_0x000107884474(0x28);
  return lVar1;
}



/* Entry: 107883330; end: 1078833ff;  */

void FUN_107883330(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *in_x3;
  int *in_x4;
  int extraout_w8;
  uint uVar4;
  int extraout_w8_00;
  int extraout_w8_01;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  undefined8 uVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  
  func_0x000107884430();
  func_0x0001078832bc();
  bVar1 = in_x4[1] < in_x3[1];
  if (*in_x4 != *in_x3) {
    bVar1 = *in_x4 < *in_x3;
  }
  if (bVar1) {
    iVar2 = in_x3[2];
    uVar5 = *(undefined8 *)in_x3;
    iVar3 = in_x4[2];
    *(undefined8 *)in_x3 = *(undefined8 *)in_x4;
    in_x3[2] = iVar3;
    *(undefined8 *)in_x4 = uVar5;
    in_x4[2] = iVar2;
    func_0x000107884518();
    uVar4 = extraout_w9;
    if (extraout_w8 != extraout_w10) {
      uVar4 = (uint)(extraout_w8 < extraout_w10);
    }
    if (uVar4 == 1) {
      func_0x00010788433c();
      uVar4 = extraout_w9_00;
      if (extraout_w8_00 != extraout_w10_00) {
        uVar4 = (uint)(extraout_w8_00 < extraout_w10_00);
      }
      if (uVar4 == 1) {
        func_0x000107884370();
        uVar4 = extraout_w9_01;
        if (extraout_w8_01 != extraout_w10_01) {
          uVar4 = (uint)(extraout_w8_01 < extraout_w10_01);
        }
        if (uVar4 == 1) {
          func_0x0001078843c4();
        }
      }
    }
  }
  return;
}



/* Entry: 107883c3c; end: 107883c7b;  */

void FUN_107883c3c(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar3 = puVar1;
  for (puVar2 = (undefined8 *)(param_2 + ((long)puVar1 - (long)param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 2) {
    uVar4 = *puVar2;
    puVar3[1] = puVar2[1];
    *puVar3 = uVar4;
    puVar3 = puVar3 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar3;
  if (puVar1 != param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)((long)puVar1 - ((long)puVar1 - (long)param_4));
    return;
  }
  return;
}



/* Entry: 1078847ec; end: 107884a9b;  */

void FUN_1078847ec(long param_1,double param_2,double param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  double *pdVar4;
  double *pdVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  double dVar13;
  double dVar14;
  undefined2 *puStack_100;
  undefined2 *puStack_f8;
  undefined2 *puStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  double *apdStack_a0 [3];
  double *apdStack_88 [3];
  undefined1 *puStack_70;
  undefined1 uStack_68;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar10 = (ulong)(uVar2 * uVar1);
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  puVar11 = (undefined2 *)(ulong)uVar1;
  func_0x0001073c802c(param_1,*(undefined8 *)param_4);
  func_0x000107884a9c(apdStack_88,uVar10);
  func_0x000107884a9c(apdStack_a0,uVar10);
  func_0x000107884a9c(auStack_b8,puVar11);
  func_0x000107884a9c(auStack_d0,puVar11);
  func_0x000107884a9c(auStack_e8,uVar1 + 1);
  puStack_100 = (undefined2 *)0x0;
  puStack_f8 = (undefined2 *)0x0;
  puStack_f0 = (undefined2 *)0x0;
  uStack_68 = 0;
  puStack_70 = (undefined1 *)&puStack_100;
  if (uVar1 != 0) {
    puVar12 = (undefined2 *)((long)puVar11 << 1);
    puVar6 = puVar12;
    puStack_70 = (undefined1 *)&puStack_100;
    __Znwm();
    puStack_f0 = puVar6 + (long)puVar11;
    puVar3 = puVar6;
    while (puStack_100 = puVar6, puVar11 != (undefined2 *)0x0) {
      *puVar3 = 0;
      puVar12 = puVar12 + -1;
      puVar3 = puVar3 + 1;
      puVar11 = puVar12;
    }
  }
  uStack_68 = 1;
  puStack_f8 = puStack_f0;
  func_0x000107884b8c(&puStack_70);
  pbVar7 = *(byte **)(param_4 + 2);
  pdVar4 = apdStack_a0[0];
  pdVar5 = apdStack_88[0];
  for (uVar9 = uVar10; uVar9 != 0; uVar9 = uVar9 - 1) {
    dVar13 = (double)NEON_ucvtf((ulong)*pbVar7);
    dVar13 = dVar13 / 255.0;
    if (dVar13 == 1.0) {
      *pdVar5 = 0.0;
      dVar13 = 1e+20;
    }
    else if (dVar13 == 0.0) {
      *pdVar5 = 1e+20;
      dVar13 = 0.0;
    }
    else {
      dVar14 = 0.5 - dVar13;
      if (dVar14 <= 0.0) {
        dVar14 = 0.0;
      }
      *pdVar5 = dVar14 * dVar14;
      dVar13 = dVar13 + -0.5;
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      dVar13 = dVar13 * dVar13;
    }
    *pdVar4 = dVar13;
    pbVar7 = pbVar7 + 1;
    pdVar5 = pdVar5 + 1;
    pdVar4 = pdVar4 + 1;
  }
  func_0x000107884bd4(apdStack_88,*param_4,param_4[1]);
  func_0x000107884bd4(apdStack_a0,*param_4,param_4[1]);
  for (uVar9 = 0; uVar10 != uVar9; uVar9 = uVar9 + 1) {
    uVar8 = (ulong)((param_3 + (apdStack_88[0][uVar9] - apdStack_a0[0][uVar9]) / param_2) * -255.0 +
                   255.0);
    uVar8 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
    if (0xfe < (long)uVar8) {
      uVar8 = 0xff;
    }
    *(char *)(*(long *)(param_1 + 8) + uVar9) = (char)uVar8;
  }
  func_0x000107884bbc(&puStack_100);
  func_0x000107466e2c(auStack_e8);
  func_0x000107466e2c(auStack_d0);
  func_0x000107466e2c(auStack_b8);
  func_0x000107466e2c(apdStack_a0);
  func_0x000107466e2c(apdStack_88);
  return;
}



/* Entry: 107884cd0; end: 107884daf;  */

void FUN_107884cd0(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 uStack_55;
  undefined2 uStack_54;
  undefined1 uStack_52;
  long lStack_50;
  long lStack_48;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar1 = param_2 + param_3;
  uStack_52 = 0;
  uStack_54 = 0x3030;
  lStack_50 = param_2;
  lStack_48 = param_3;
  while (param_2 != lVar1) {
    uStack_55 = 0x25;
    lVar2 = param_2;
    func_0x00010061f9f8(param_2,lVar1,&uStack_55);
    func_0x0001000da738(param_1,param_2,lVar2);
    param_2 = lVar2;
    if (lVar2 != lVar1) {
      plVar3 = &lStack_50;
      func_0x000107884db0(plVar3,&uStack_54,2,(lVar2 - lStack_50) + 1);
      param_2 = (long)plVar3 + lVar2 + 1;
      _strtoul(&uStack_54,0,0x10);
      func_0x000107885478();
    }
  }
  return;
}



/* Entry: 107886280; end: 10788641f;  */

void FUN_107886280(void)

{
  long unaff_x29;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0x00000200;
  func_0x000107783584(&stack0x00000080,&puStack_18,unaff_x29 + -0xe0);
  return;
}



/* Entry: 1078868a8; end: 1078868d3;  */

undefined8 FUN_1078868a8(byte *param_1)

{
  if (*param_1 - 1 < 5) {
    return *(undefined8 *)(&UNK_10deb0400 + ((ulong)(*param_1 - 1) & 0xff) * 8);
  }
  return 0;
}



/* Entry: 10788701c; end: 1078870f7;  */

void FUN_10788701c(long param_1,undefined8 *param_2,uint *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  uint uStack_48;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x6f0);
  if (lVar2 != 0) {
    if (param_2[1] != 0) {
      puVar1 = *(undefined1 **)(lVar2 + 0x1a8);
      for (puVar3 = *(undefined1 **)(lVar2 + 0x1a0); puVar3 != puVar1; puVar3 = puVar3 + 3) {
        if ((*param_3 >> (ulong)((byte)puVar3[1] & 0x1f) & 1) == 0) {
          func_0x0001078869ac(param_1,*(undefined8 *)(*(long *)(param_2[1] + 0x28) + 8),
                              *(undefined8 *)(param_2[2] + (ulong)(byte)puVar3[2] * 8),*puVar3);
        }
      }
      lVar2 = *(long *)(param_1 + 0x30);
      uVar5 = param_2[1];
      uVar4 = *param_2;
      *(undefined8 *)(lVar2 + 0x708) = param_2[2];
      *(undefined8 *)(lVar2 + 0x700) = uVar5;
      *(undefined8 *)(lVar2 + 0x6f8) = uVar4;
      lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x6f0);
    }
    if (*(char *)(lVar2 + 0x1b8) != -1) {
      uStack_50 = *(undefined8 *)param_3;
      uStack_48 = param_3[2];
      if (uStack_48 == 0) {
        uStack_48 = 1;
      }
      func_0x000107886950(param_1,&uStack_50,0xc);
    }
  }
  return;
}



/* Entry: 1078873b8; end: 1078874a3;  */

void FUN_1078873b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x6f0);
  if (lVar3 != 0) {
    func_0x0001078948b8();
    uVar2 = (uint)lVar3;
    if ((uVar2 >> 0x10 & 1) != 0) {
      lVar5 = *(long *)(param_3 + 8) + (ulong)*(uint *)(*(long *)(param_3 + 8) + 0x70) * 0x20;
      if ((*(byte *)(lVar5 + 0x28) & 1) == 0) {
        func_0x000104bdc2c8();
        if (*(long *)(*(long *)(lVar3 + 0x30) + 0x6f0) != 0) {
          func_0x000107887d9c();
          func_0x000107887e40();
        }
        return;
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if (((uVar2 ^ 0xffffffff) & 0xff) != 0) {
        lVar3 = param_1;
        func_0x0001078869ac(param_1,lVar5,0,uVar2 & 0xff);
      }
      if (((uVar2 >> 8 ^ 0xffffffff) & 0xff) != 0) {
        uVar6 = (ulong)(uVar2 >> 8 & 0xff);
        lVar1 = *(long *)(param_1 + 0x30) + uVar6 * 0x10;
        if ((*(long *)(lVar1 + 1000) == 0) || (*(long *)(lVar1 + 1000) != lVar5)) {
          uVar4 = *(undefined8 *)(param_1 + 0x38);
          func_0x000107889b70();
          _objc_msgSend(uVar4,lVar3,lVar5,0,uVar6);
          *(long *)(lVar1 + 1000) = lVar5;
        }
        else {
          if (*(int *)(lVar1 + 0x3f0) == 0) {
            return;
          }
          uVar4 = *(undefined8 *)(param_1 + 0x38);
          func_0x000107889be0();
          _objc_msgSend(uVar4,lVar3,0,uVar6);
        }
        *(undefined4 *)(lVar1 + 0x3f0) = 0;
      }
    }
  }
  return;
}



/* Entry: 1078876f0; end: 10788771f;  */

void FUN_1078876f0(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x6f0) != 0) {
    func_0x000107887d9c();
    uVar2 = (uint)param_2;
    if (((uVar2 >> 0x18 == 1) && ((param_2 >> 0x20 & 1) != 0)) &&
       (((uint)(param_2 >> 0x10) & 0xff) == 7)) {
      if ((~uVar2 & 0xff) != 0) {
        func_0x000107886950(param_1,param_3,0x40,uVar2 & 0xff);
      }
      if ((~uVar2 & 0xff00) != 0) {
        func_0x000107889c50();
        func_0x000107887ed4();
        _objc_msgSend();
        lVar1 = *(long *)(param_1 + 0x30) + (param_2 >> 8 & 0xff) * 0x10;
        *(undefined8 *)(lVar1 + 1000) = 0;
        *(undefined4 *)(lVar1 + 0x3f0) = 0;
      }
    }
    return;
  }
  return;
}



/* Entry: 107887aac; end: 107887ae3;  */

void FUN_107887aac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x6f0);
  if (lVar1 != 0) {
    func_0x000107887dcc(*(undefined8 *)(lVar1 + 0x1d8));
    func_0x000107887e40();
  }
  return;
}



/* Entry: 107887d2c; end: 107887d43;  */

void FUN_107887d2c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 107887fa4; end: 107887fa7;  */

void FUN_107887fa4(void)

{
  return;
}



/* Entry: 1078882ac; end: 10788831b;  */

undefined * FUN_1078882ac(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823ec0 & 1) == 0) {
    iVar1 = 0x13823ec0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430ad8;
      _objc_lookUpClass();
      puRam0000000113823eb8 = puVar2;
      ___cxa_guard_release(0x113823ec0);
    }
  }
  return puRam0000000113823eb8;
}



/* Entry: 10788862c; end: 10788869b;  */

undefined * FUN_10788862c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823f40 & 1) == 0) {
    iVar1 = 0x13823f40;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430b6b;
      _sel_registerName();
      puRam0000000113823f38 = puVar2;
      ___cxa_guard_release(0x113823f40);
    }
  }
  return puRam0000000113823f38;
}



/* Entry: 1078889ac; end: 107888a17;  */

undefined8 FUN_1078889ac(void)

{
  int iVar1;
  
  if ((bRam0000000113726408 & 1) == 0) {
    iVar1 = 0x13726408;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName("error");
      func_0x0001078902dc(0x113726400);
    }
  }
  return uRam0000000113726400;
}



/* Entry: 107888d28; end: 107888d93;  */

undefined8 FUN_107888d28(void)

{
  int iVar1;
  
  if ((bRam0000000113726428 & 1) == 0) {
    iVar1 = 0x13726428;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f430d67);
      func_0x0001078902dc(0x113726420);
    }
  }
  return uRam0000000113726420;
}



/* Entry: 107889094; end: 107889103;  */

undefined * FUN_107889094(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824060 & 1) == 0) {
    iVar1 = 0x13824060;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430e6d;
      _sel_registerName();
      puRam0000000113824058 = puVar2;
      ___cxa_guard_release(0x113824060);
    }
  }
  return puRam0000000113824058;
}



/* Entry: 107889410; end: 10788947f;  */

undefined * FUN_107889410(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138240d0 & 1) == 0) {
    iVar1 = 0x138240d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430f6a;
      _sel_registerName();
      puRam00000001138240c8 = puVar2;
      ___cxa_guard_release(0x1138240d0);
    }
  }
  return puRam00000001138240c8;
}



/* Entry: 107889790; end: 1078897ff;  */

undefined * FUN_107889790(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824150 & 1) == 0) {
    iVar1 = 0x13824150;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431021;
      _sel_registerName();
      puRam0000000113824148 = puVar2;
      ___cxa_guard_release(0x113824150);
    }
  }
  return puRam0000000113824148;
}



/* Entry: 107889b00; end: 107889b6f;  */

undefined * FUN_107889b00(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824190 & 1) == 0) {
    iVar1 = 0x13824190;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4310fb;
      _sel_registerName();
      puRam0000000113824188 = puVar2;
      ___cxa_guard_release(0x113824190);
    }
  }
  return puRam0000000113824188;
}



/* Entry: 107889e7c; end: 107889eeb;  */

undefined * FUN_107889e7c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824200 & 1) == 0) {
    iVar1 = 0x13824200;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4311d1;
      _sel_registerName();
      puRam00000001138241f8 = puVar2;
      ___cxa_guard_release(0x113824200);
    }
  }
  return puRam00000001138241f8;
}



/* Entry: 10788a1f0; end: 10788a25f;  */

undefined * FUN_10788a1f0(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824250 & 1) == 0) {
    iVar1 = 0x13824250;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f43124b;
      _sel_registerName();
      puRam0000000113824248 = puVar2;
      ___cxa_guard_release(0x113824250);
    }
  }
  return puRam0000000113824248;
}



/* Entry: 10788a568; end: 10788a5d7;  */

undefined * FUN_10788a568(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138242b0 & 1) == 0) {
    iVar1 = 0x138242b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4312e6;
      _sel_registerName();
      puRam00000001138242a8 = puVar2;
      ___cxa_guard_release(0x1138242b0);
    }
  }
  return puRam00000001138242a8;
}



/* Entry: 10788a8e0; end: 10788a94f;  */

undefined * FUN_10788a8e0(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824310 & 1) == 0) {
    iVar1 = 0x13824310;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431396;
      _sel_registerName();
      puRam0000000113824308 = puVar2;
      ___cxa_guard_release(0x113824310);
    }
  }
  return puRam0000000113824308;
}



/* Entry: 10788ac5c; end: 10788accb;  */

undefined * FUN_10788ac5c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824380 & 1) == 0) {
    iVar1 = 0x13824380;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431436;
      _sel_registerName();
      puRam0000000113824378 = puVar2;
      ___cxa_guard_release(0x113824380);
    }
  }
  return puRam0000000113824378;
}



/* Entry: 10788afdc; end: 10788b047;  */

undefined8 FUN_10788afdc(void)

{
  int iVar1;
  
  if ((bRam0000000113726588 & 1) == 0) {
    iVar1 = 0x13726588;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f4314a8);
      func_0x0001078902dc(0x113726580);
    }
  }
  return uRam0000000113726580;
}



/* Entry: 10788b354; end: 10788b3c3;  */

undefined * FUN_10788b354(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824460 & 1) == 0) {
    iVar1 = 0x13824460;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431506;
      _sel_registerName();
      puRam0000000113824458 = puVar2;
      ___cxa_guard_release(0x113824460);
    }
  }
  return puRam0000000113824458;
}



/* Entry: 10788c38c; end: 10788c453;  */

long FUN_10788c38c(long param_1)

{
  func_0x00010788f804(param_1 + 0x27b8);
  func_0x00010789085c();
  func_0x00010788f0f4(param_1 + 0x2790);
  func_0x00010788f184(param_1 + 0x298);
  func_0x00010788f1bc(param_1 + 0xd8);
  func_0x00010724b8b8(param_1 + 200);
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_10788b354();
    func_0x000107890438();
  }
  func_0x00010788f204(param_1 + 0xa8);
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_10788b354();
    func_0x000107890438();
  }
  func_0x00010788f294(param_1 + 0x88);
  func_0x00010788f710(param_1 + 0x80);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10788b354();
    func_0x000107890438();
  }
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10788b354();
    func_0x000107890438();
  }
  return param_1;
}



/* Entry: 10788cd4c; end: 10788d103;  */

long FUN_10788cd4c(long param_1,char *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  long lVar17;
  undefined4 uStack_70;
  char cStack_6c;
  long lStack_68;
  
  for (pcVar9 = *(char **)(param_1 + 0xa8); pcVar9 != *(char **)(param_1 + 0xb0);
      pcVar9 = pcVar9 + 0x10) {
    if ((((*pcVar9 == *param_2) && (pcVar9[1] == param_2[1])) && (pcVar9[2] == param_2[2])) &&
       ((pcVar9[3] == param_2[3] && (pcVar9[4] == param_2[4])))) {
      return *(long *)(pcVar9 + 8);
    }
  }
  lVar6 = param_1;
  func_0x000107888164();
  func_0x00010788b198();
  func_0x000107890530();
  _objc_msgSend();
  func_0x00010788b208();
  func_0x000107890530();
  _objc_msgSend();
  lVar14 = lVar6;
  func_0x00010788a0a8();
  func_0x000107890740();
  func_0x00010788a03c();
  func_0x000107890740();
  func_0x00010788a114();
  func_0x0001078905a8(lVar6,lVar14);
  func_0x00010788a41c();
  func_0x000107890740();
  func_0x00010788a950();
  func_0x000107890740();
  if ((bRam0000000113726488 & 1) == 0) {
    iVar5 = 0x13726488;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      _sel_registerName(&UNK_10f430fe0);
      func_0x0001078902dc(0x113726480);
    }
  }
  lVar17 = lVar6;
  func_0x0001078905a8(lVar6,uRam0000000113726480);
  lVar14 = *(long *)(param_1 + 8);
  func_0x000107888fb8();
  _objc_msgSend(lVar14,lVar17,lVar6);
  if (lVar14 == 0) {
    lVar14 = *(long *)(param_1 + 0xc0);
  }
  else {
    uStack_70 = *(undefined4 *)param_2;
    cStack_6c = param_2[4];
    puVar16 = *(undefined4 **)(param_1 + 0xb0);
    if (puVar16 < *(undefined4 **)(param_1 + 0xb8)) {
      uVar3 = *(undefined4 *)param_2;
      *(char *)(puVar16 + 1) = param_2[4];
      *puVar16 = uVar3;
      *(long *)(puVar16 + 2) = lVar14;
      lStack_68 = 0;
      puVar16 = puVar16 + 4;
    }
    else {
      puVar15 = *(undefined4 **)(param_1 + 0xa8);
      lVar17 = (long)puVar16 - (long)puVar15 >> 4;
      uVar1 = lVar17 + 1;
      lStack_68 = lVar14;
      if (uVar1 >> 0x3c != 0) {
        func_0x00010788f468();
LAB_10788d0b4:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10788d0b8);
        (*pcVar4)();
      }
      uVar10 = (long)*(undefined4 **)(param_1 + 0xb8) - (long)puVar15;
      uVar13 = (long)uVar10 >> 3;
      if (uVar13 <= uVar1) {
        uVar13 = uVar1;
      }
      if (0x7fffffffffffffef < uVar10) {
        uVar13 = 0xfffffffffffffff;
      }
      if (uVar13 >> 0x3c != 0) {
        func_0x000104bd35f4();
        goto LAB_10788d0b4;
      }
      lVar7 = uVar13 << 4;
      __Znwm();
      puVar2 = (undefined4 *)(lVar7 + ((long)puVar16 - (long)puVar15));
      *puVar2 = *(undefined4 *)param_2;
      *(char *)(puVar2 + 1) = param_2[4];
      *(long *)(puVar2 + 2) = lVar14;
      lStack_68 = 0;
      puVar11 = puVar2 + lVar17 * -4;
      for (puVar12 = puVar15; puVar12 != puVar16; puVar12 = puVar12 + 4) {
        uVar3 = *puVar12;
        *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar12 + 1);
        *puVar11 = uVar3;
        *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(puVar12 + 2);
        *(undefined8 *)(puVar12 + 2) = 0;
        puVar11 = puVar11 + 4;
      }
      for (; puVar15 != puVar16; puVar15 = puVar15 + 4) {
        FUN_10788f474(puVar15);
      }
      puVar16 = puVar2 + 4;
      lVar8 = *(long *)(param_1 + 0xa8);
      *(undefined4 **)(param_1 + 0xa8) = puVar2 + lVar17 * -4;
      *(undefined4 **)(param_1 + 0xb0) = puVar16;
      *(ulong *)(param_1 + 0xb8) = lVar7 + uVar13 * 0x10;
      if (lVar8 != 0) {
        __ZdlPv();
      }
    }
    *(undefined4 **)(param_1 + 0xb0) = puVar16;
    FUN_10788f474(&uStack_70);
  }
  if (lVar6 != 0) {
    FUN_10788b354();
    func_0x0001078904e8();
  }
  return lVar14;
}



/* Entry: 10788d568; end: 10788d56f;  */

void FUN_10788d568(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10788dbb0; end: 10788dc2b;  */

void FUN_10788dbb0(ulong *param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  undefined8 uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  ulong unaff_x19;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x20;
  undefined8 *puVar8;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar9;
  ulong unaff_x23;
  long lVar10;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_684 [1028];
  long lStack_280;
  undefined1 uStack_278;
  uint uStack_26c;
  ulong auStack_268 [33];
  ulong uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_58;
  
  if ((((long *)*param_4 != (long *)0x0) && (plVar2 = *(long **)*param_4, plVar2 != (long *)0x0)) &&
     ((**(code **)(*plVar2 + 0x18))(), (int)plVar2 != 0)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    uVar6 = param_2;
    uVar7 = param_3;
    func_0x000107890480();
    uStack_26c = (uint)uVar7;
    unaff_x20 = *param_4;
    uStack_160 = uStack_160 & 0xffffffffffffff00;
    lVar3 = *(long *)(uVar6 + 0x28) + 0x9a0;
    uStack_58 = extraout_x8;
    func_0x00010724e2c8(lVar3,&uStack_160);
    auStack_268[0] = auStack_268[0] & 0xffffffffffffff00;
    lVar10 = *(long *)(uVar6 + 0x28) + 0x950;
    func_0x00010724e2c8(lVar10,auStack_268);
    func_0x00010788d5e0(unaff_x20,lVar3,lVar10);
    unaff_x24 = 0x2759;
    unaff_x23 = param_3 & 0xffffffff;
    if ((*(byte *)(unaff_x20 + 0x2759) & 1) == 0) {
code_r0x00010788dcf8:
      lStack_280 = unaff_x20 + unaff_x23 * 0xa8 + 0x1c8;
      uStack_278 = 1;
      __ZNSt3__119__shared_mutex_base4lockEv();
      unaff_x19 = (ulong)uStack_26c;
      if ((*(byte *)(unaff_x20 + 0x2759) & 1) == 0) {
        *param_1 = 0;
code_r0x00010788dd48:
        func_0x0001073cafc0(unaff_x19);
        func_0x0001078907f8();
        func_0x000107890490();
        func_0x00010789068c();
        func_0x00010789067c();
        func_0x000107288cd8(auStack_268);
        func_0x000107890760();
        func_0x0001078905c8();
        func_0x00010729d56c(unaff_x23 + 8);
        func_0x000107890650();
        func_0x0001078905b0();
        func_0x0001078907e0();
        uVar1 = extraout_x11;
        unaff_x22 = extraout_x10;
        if (in_NG == in_OV) {
          uVar1 = extraout_x8_00;
          unaff_x22 = extraout_x9;
        }
        func_0x00010789080c(unaff_x22,uVar1);
        auStack_268[0] = 0;
        param_2 = unaff_x22;
        func_0x000107888e70();
        func_0x000107890748();
        unaff_x23 = auStack_268[0];
        if ((param_2 == 0) || (auStack_268[0] != 0)) {
          unaff_x20 = param_2;
          func_0x00010788b278();
          func_0x0001078904d8();
          uVar6 = unaff_x20;
          func_0x00010788b580();
          unaff_x19 = unaff_x20;
          _objc_msgSend(unaff_x20,uVar6);
          *param_1 = 0;
          if (param_2 != 0) goto code_r0x00010788de40;
        }
        else {
          _dispatch_release();
          func_0x00010788b430();
          func_0x0001078903f4();
          *param_1 = unaff_x22;
          uVar5 = (uint)*(byte *)(unaff_x20 + 0x2759);
          in_OV = SBORROW4(uVar5,1);
          in_NG = (int)(uVar5 - 1) < 0;
          in_ZR = 0;
          unaff_x19 = unaff_x22;
          if (uVar5 == 1) {
            unaff_x23 = (ulong)uStack_26c;
            unaff_x20 = unaff_x20 + 8;
            uVar6 = *(ulong *)(unaff_x20 + unaff_x23 * 8);
            in_OV = SBORROW8(uVar6,unaff_x22);
            in_NG = (long)(uVar6 - unaff_x22) < 0;
            in_ZR = uVar6 == unaff_x22;
            if (!(bool)in_ZR) {
              if (uVar6 != 0) {
                FUN_10788b354();
                func_0x0001078904e8();
              }
              func_0x00010788b430();
              func_0x000107890428();
              *(ulong *)(unaff_x20 + unaff_x23 * 8) = unaff_x19;
            }
          }
code_r0x00010788de40:
          FUN_10788b354();
          func_0x00010789062c();
        }
        func_0x0001078906c0();
        func_0x000107890718();
      }
      else {
        unaff_x22 = *(ulong *)(unaff_x20 + unaff_x19 * 8 + 8);
        func_0x00010788b430();
        func_0x000107890428();
        *param_1 = unaff_x19;
        if (unaff_x19 == 0) {
          unaff_x19 = (ulong)uStack_26c;
          goto code_r0x00010788dd48;
        }
      }
      func_0x000107890728();
      unaff_x21 = param_2;
    }
    else {
      unaff_x22 = unaff_x20 + (param_3 & 0xffffffff) * 0xa8 + 0x1c8;
      uStack_158 = 1;
      uStack_160 = unaff_x22;
      __ZNSt3__119__shared_mutex_base11lock_sharedEv();
      func_0x00010788b430();
      func_0x000107890428();
      *param_1 = unaff_x22;
      unaff_x19 = unaff_x22;
      func_0x000107890804();
      unaff_x21 = param_2;
      if (unaff_x22 == 0) goto code_r0x00010788dcf8;
    }
    func_0x0001078903b4(uStack_58);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    param_2 = unaff_x19;
    if (unaff_x22 != 0) {
      FUN_10788b354();
      func_0x000107890420();
    }
    FUN_10788b354();
    param_3 = param_2;
    func_0x00010789062c();
    func_0x0001078906c0();
    func_0x000107890718();
    func_0x000107890728();
    unaff_x30 = &LAB_10788df0c;
    func_0x0001078903e0();
    register0x00000008 = (BADSPACEBASE *)(auStack_684 + 0x374);
    param_1 = extraout_x8_01;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar6 = param_2;
  uVar7 = param_3;
  func_0x000107890480();
  *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8_02;
  *(int *)((long)register0x00000008 + -0x26c) = (int)uVar7;
  uVar6 = uVar6 + (uVar7 & 0xffffffff) * 0xa8 + 0x298;
  *(ulong *)((long)register0x00000008 + -0x160) = uVar6;
  *(undefined1 *)((long)register0x00000008 + -0x158) = 1;
  uVar7 = uVar6;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  lVar3 = param_2 + 0xd8;
  lVar10 = *(long *)(lVar3 + (param_3 & 0xffffffff) * 8);
  if (lVar10 != 0) {
    func_0x00010788b430();
    uVar9 = uVar7;
    func_0x0001078904d8();
    iVar4 = (int)uVar9;
    *param_1 = uVar7;
    func_0x000107890804();
    uVar9 = uVar6;
    goto code_r0x00010788e0b4;
  }
  func_0x000107890804();
  *(ulong *)((long)register0x00000008 + -0x280) = uVar6;
  *(undefined1 *)((long)register0x00000008 + -0x278) = 1;
  __ZNSt3__119__shared_mutex_base4lockEv();
  uVar9 = *(ulong *)(lVar3 + (param_3 & 0xffffffff) * 8);
  if (uVar9 == 0) {
    func_0x0001073cafc0(*(undefined4 *)((long)register0x00000008 + -0x26c));
    func_0x0001078907f8();
    func_0x000107890490();
    func_0x00010789068c();
    func_0x00010789067c();
    func_0x000107288cd8((undefined1 *)((long)register0x00000008 + -0x268));
    func_0x000107890760();
    func_0x0001078905c8();
    func_0x00010729d56c(8);
    func_0x000107890650();
    func_0x0001078905b0();
    func_0x0001078907e0();
    uVar1 = extraout_x11_00;
    uVar9 = extraout_x10_00;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8_03;
      uVar9 = extraout_x9_00;
    }
    func_0x00010789080c(uVar9,uVar1);
    *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
    param_2 = uVar9;
    func_0x000107888e70();
    func_0x000107890748();
    lVar10 = *(long *)((long)register0x00000008 + -0x268);
    if ((param_2 == 0) || (lVar10 != 0)) {
      param_3 = param_2;
      func_0x00010788b278();
      func_0x0001078904d8();
      uVar6 = param_3;
      func_0x00010788b580();
      iVar4 = (int)uVar6;
      uVar6 = param_3;
      _objc_msgSend();
      *param_1 = 0;
      if (param_2 != 0) goto code_r0x00010788e09c;
    }
    else {
      _dispatch_release();
      func_0x00010788b430();
      func_0x0001078903f4();
      *param_1 = uVar9;
      uVar7 = *(ulong *)(lVar3 + (param_3 & 0xffffffff) * 8);
      in_ZR = uVar7 == uVar9;
      uVar6 = uVar9;
      if (!(bool)in_ZR) {
        if (uVar7 != 0) {
          FUN_10788b354();
          func_0x0001078904e8();
        }
        func_0x00010788b430();
        func_0x000107890428();
        *(ulong *)(lVar3 + (param_3 & 0xffffffff) * 8) = uVar6;
      }
code_r0x00010788e09c:
      FUN_10788b354();
      uVar7 = uVar6;
      func_0x00010789062c();
      iVar4 = (int)uVar7;
    }
    func_0x0001078906c0();
    func_0x000107890718();
  }
  else {
    func_0x00010788b430();
    uVar7 = uVar6;
    func_0x000107890428();
    iVar4 = (int)uVar7;
    *param_1 = uVar6;
  }
  func_0x000107890728();
  uVar7 = uVar6;
code_r0x00010788e0b4:
  func_0x0001078903b4(*(undefined8 *)((long)register0x00000008 + -0x58));
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    func_0x0001078903e0();
  }
  uVar6 = uVar7;
  func_0x000104bd46a0();
  *(long *)((long)register0x00000008 + -0x350) = lVar3;
  *(long *)((long)register0x00000008 + -0x348) = lVar10;
  *(ulong *)((long)register0x00000008 + -0x340) = uVar9;
  *(ulong *)((long)register0x00000008 + -0x338) = param_2;
  *(ulong *)((long)register0x00000008 + -0x330) = param_3;
  *(ulong *)((long)register0x00000008 + -0x328) = uVar7;
  *(undefined1 **)((long)register0x00000008 + -800) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x318) = &DAT_10788e16c;
  puVar8 = *(undefined8 **)(uVar6 + 0x20);
  *(undefined4 *)((long)register0x00000008 + -0x3c0) = 0x9d;
  *(undefined4 *)((long)register0x00000008 + -0x3a8) = 0;
  uVar7 = uVar6;
  func_0x000107890348();
  *(undefined1 *)((long)register0x00000008 + -0x374) = 1;
  func_0x00010789053c();
  func_0x0001078902fc(*(undefined4 *)(uVar7 + 0x6c));
  *(undefined4 *)((long)register0x00000008 + -0x3d8) = 3;
  func_0x00010743fa44(puVar8,(undefined1 *)((long)register0x00000008 + -0x3c0),
                      (undefined1 *)((long)register0x00000008 + -0x3d0),
                      (undefined1 *)((long)register0x00000008 + -0x3e0),7);
  func_0x000107890430();
  func_0x000107890378(0x9e);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(uVar6 + 0x70));
  *(undefined4 *)((long)register0x00000008 + -0x3d8) = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa1);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(uVar6 + 0x68));
  *(undefined4 *)((long)register0x00000008 + -0x3d8) = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xeb);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(uVar6 + 0x74));
  *(undefined4 *)((long)register0x00000008 + -0x3d8) = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xec);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(uVar6 + 0x78));
  *(undefined4 *)((long)register0x00000008 + -0x3d8) = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa2);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(uVar6 + 0x34));
  *(undefined4 *)((long)register0x00000008 + -0x3d8) = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa3);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(uVar6 + 0x3c));
  *(undefined4 *)((long)register0x00000008 + -0x3d8) = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa4);
  func_0x0001078902c0();
  *(undefined8 *)((long)register0x00000008 + -0x3d0) = *(undefined8 *)(uVar6 + 0x50);
  *(undefined4 *)((long)register0x00000008 + -0x3c8) = 3;
  *(undefined8 *)((long)register0x00000008 + -0x3e0) = *puVar8;
  *(undefined4 *)((long)register0x00000008 + -0x3d8) = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  *(undefined4 *)((long)register0x00000008 + -0x3c0) = 0xa5;
  *(undefined4 *)((long)register0x00000008 + -0x3a8) = 0;
  func_0x000107890348();
  *(undefined1 *)((long)register0x00000008 + -0x374) = 1;
  func_0x00010789053c();
  *(undefined8 *)((long)register0x00000008 + -0x3d0) = *(undefined8 *)(uVar6 + 0x48);
  func_0x0001078908cc();
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa7);
  *(undefined ***)((long)register0x00000008 + -0x3a0) = &PTR_DAT_110996720;
  *(undefined8 *)((long)register0x00000008 + -0x398) = 0;
  *(undefined4 *)((long)register0x00000008 + -0x380) = extraout_w8;
  *(undefined4 *)((long)register0x00000008 + -0x378) = 0;
  *(undefined1 *)((long)register0x00000008 + -0x374) = 1;
  func_0x00010789053c();
  *(undefined8 *)((long)register0x00000008 + -0x3d0) = *(undefined8 *)(uVar6 + 0x58);
  func_0x0001078908cc();
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa9);
  *(undefined ***)((long)register0x00000008 + -0x3a0) = &PTR_DAT_110996720;
  *(undefined8 *)((long)register0x00000008 + -0x398) = 0;
  *(undefined4 *)((long)register0x00000008 + -0x380) = extraout_w8_00;
  *(undefined4 *)((long)register0x00000008 + -0x378) = 0;
  *(undefined1 *)((long)register0x00000008 + -0x374) = 1;
  func_0x00010789053c();
  func_0x0001078902fc(*(undefined4 *)(uVar6 + 0x38));
  *(undefined4 *)((long)register0x00000008 + -0x3d8) = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xaa);
  *(undefined ***)((long)register0x00000008 + -0x3a0) = &PTR_DAT_110996720;
  *(undefined8 *)((long)register0x00000008 + -0x398) = 0;
  *(undefined4 *)((long)register0x00000008 + -0x380) = extraout_w8_01;
  *(undefined4 *)((long)register0x00000008 + -0x378) = 0;
  *(undefined1 *)((long)register0x00000008 + -0x374) = 1;
  func_0x00010789053c();
  func_0x0001078902fc(*(undefined4 *)(uVar6 + 0x30));
  *(undefined4 *)((long)register0x00000008 + -0x3d8) = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  *(undefined8 *)(uVar6 + 0x68) = 0;
  *(undefined8 *)(uVar6 + 0x70) = 0;
  *(undefined4 *)(uVar6 + 0x78) = 0;
  return;
}



/* Entry: 10788f074; end: 10788f08f;  */

long FUN_10788f074(long param_1)

{
  return param_1 + 0x2758;
}



/* Entry: 10788f264; end: 10788f2eb;  */

void FUN_10788f264(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078907a8();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x10;
    FUN_10788f474();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10788f474; end: 10788f4a7;  */

long FUN_10788f474(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10788b354();
    func_0x000107890438();
  }
  return param_1;
}



/* Entry: 10788f68c; end: 10788f6b7;  */

void FUN_10788f68c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
    func_0x000107890ee8(param_1 + 1,*param_1);
  }
  return;
}



/* Entry: 10788f7a4; end: 10788f7bf;  */

void FUN_10788f7a4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010788f7c0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10788f8e4; end: 10788f8f3;  */

undefined1 FUN_10788f8e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2758);
}



/* Entry: 10788fc90; end: 10788fcbb;  */

void FUN_10788fc90(undefined8 param_1,undefined8 param_2)

{
  func_0x000107890868(param_2,param_1,&PTR_DAT_1109e44e8);
  func_0x000107890778();
  return;
}



/* Entry: 10788fe94; end: 107890087;  */

void FUN_10788fe94(double param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  double dVar2;
  undefined1 auStack_1e0 [32];
  undefined1 uStack_1c0;
  undefined1 uStack_1a8;
  undefined1 uStack_1a0;
  undefined1 uStack_188;
  undefined1 uStack_180;
  undefined1 uStack_148;
  undefined1 uStack_140;
  undefined1 uStack_13c;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined ***pppuStack_120;
  undefined1 auStack_118 [208];
  undefined8 uStack_48;
  
  func_0x0001078907c8();
  func_0x000107890480();
  uStack_48 = extraout_x8;
  func_0x000107890820();
  iVar1 = (int)unaff_x19 + 8;
  func_0x00010788fdb8();
  if (iVar1 == 0) goto LAB_10788ffac;
  unaff_x20 = (long *)*unaff_x20;
  if ((bRam00000001137263f8 & 1) == 0) goto LAB_10788ffd8;
  while( true ) {
    _objc_msgSend(unaff_x20,uRam00000001137263f0);
    dVar2 = param_1;
    if ((bRam00000001137263e8 & 1) == 0) {
      iVar1 = 0x137263e8;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _sel_registerName(&UNK_10f430aec);
        func_0x0001078902dc(0x1137263e0);
      }
    }
    _objc_msgSend(unaff_x20,uRam00000001137263e0);
    param_1 = (dVar2 - param_1) * 1000000.0;
    lStack_130 = (long)param_1;
    unaff_x20 = *(long **)(unaff_x19 + 0x20);
    uStack_128 = *(undefined8 *)(unaff_x19 + 0x30);
    ppuStack_138 = &PTR_DAT_1109e4578;
    pppuStack_120 = &ppuStack_138;
    func_0x0001077b6764(auStack_1e0,&UNK_10f43181d);
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    func_0x000107273dcc(auStack_118,&ppuStack_138,auStack_1e0);
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,auStack_118);
    func_0x000107273efc(auStack_118);
    func_0x000107273f24(auStack_1e0);
    func_0x0001006393ec(&ppuStack_138);
LAB_10788ffac:
    func_0x0001078906f4();
    func_0x0001078903b4(uStack_48);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_10788ffd8:
    iVar1 = 0x137263f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f430af7);
      func_0x0001078902dc(0x1137263f0);
    }
  }
  return;
}



/* Entry: 107890220; end: 10789024b;  */

void FUN_107890220(undefined8 param_1,undefined8 param_2)

{
  func_0x000107890868(param_2,param_1,&PTR_DAT_1109e45d8);
  func_0x000107890778();
  return;
}



/* Entry: 107890994; end: 1078909db;  */

void FUN_107890994(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  __Znwm();
  FUN_1078919e8();
  *param_1 = uVar1;
  return;
}



/* Entry: 107890cc4; end: 107890cf7;  */

undefined8 FUN_107890cc4(long param_1,undefined8 param_2)

{
  func_0x000107890d70(param_2,param_1 + 8);
  func_0x00010724cbe8();
  return param_2;
}



/* Entry: 107890fd8; end: 107891063;  */

void FUN_107890fd8(ulong param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    return;
  }
  do {
    func_0x0001078910f4();
  } while (extraout_w10 != 0);
  func_0x00010788b4a0();
  func_0x0001078910cc();
  if (1 < param_1) {
    func_0x000107891120();
    func_0x000107890e0c();
  }
  FUN_10788b354();
  func_0x000107891104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 107891774; end: 1078917a3;  */

void FUN_107891774(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010788b430();
  func_0x00010789197c();
  *param_1 = param_2;
  return;
}



/* Entry: 1078919e8; end: 107891a5b;  */

undefined8 * FUN_1078919e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x000107891a5c(param_1,*(undefined8 *)(param_2[1] + 0x20),*(undefined8 *)(param_2[1] + 0x28))
  ;
  *puVar1 = &PTR_DAT_1109e47e0;
  puVar1[4] = param_2;
  uVar2 = param_3;
  _strlen(param_3);
  param_1[5] = param_2;
  (**(code **)*param_2)(param_2,param_3,uVar2);
  param_1[6] = 0;
  return param_1;
}



/* Entry: 107891bf0; end: 107891c4f;  */

void FUN_107891bf0(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    *param_1 = 0;
  }
  else {
    func_0x000107892230();
    func_0x00010788cbc8();
    func_0x00010788f01c(&uStack_28,auStack_40);
    FUN_10788f68c(auStack_40);
    *param_1 = uStack_28;
  }
  return;
}



/* Entry: 107892154; end: 1078921cf;  */

void FUN_107892154(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107893e30(param_6,*param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107889254();
  func_0x0001078922d0();
  _objc_msgSend(uVar1);
  return;
}



/* Entry: 107892b74; end: 107892be3;  */

undefined8 FUN_107892b74(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000107892ba8(&uStack_28);
  return param_1;
}



/* Entry: 107892e18; end: 107892e87;  */

long * FUN_107892e18(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107892e64();
  }
  lVar1 = param_4 + param_3 * 0x28;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x28;
  return param_1;
}



/* Entry: 107893044; end: 10789307b;  */

void FUN_107893044(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107893644();
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x28;
    func_0x00010725b6a4(lVar1 + -0x20);
  }
  return;
}



/* Entry: 1078931a4; end: 10789343b;  */

void FUN_1078931a4(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [72];
  long lStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_68;
  
  lVar10 = *param_2;
  lVar12 = param_1;
  func_0x00010788ae8c();
  _objc_msgSend(lVar10,lVar12);
  if (lVar10 == 4) {
    uVar1 = *(uint *)(param_1 + 0x20);
    uVar2 = *(uint *)(param_1 + 0x24);
    lVar12 = (ulong)uVar1 * 4;
    puVar11 = (undefined1 *)(lVar12 * (ulong)uVar2);
    puVar5 = puVar11;
    __Znam();
    puVar6 = puVar5;
    _bzero();
    uVar13 = *(undefined8 *)(param_1 + 8);
    puStack_c0 = puVar5;
    func_0x000107888a88();
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_90 = 1;
    uStack_a0 = (ulong)uVar1;
    uStack_98 = (ulong)uVar2;
    _objc_msgSend(uVar13,puVar6,puVar5,lVar12,&uStack_b8,0);
    uVar7 = *(ulong *)(param_1 + 0x20);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      puVar5 = puStack_c0;
      for (lVar12 = (uVar7 & 0xffffffff) * (uVar7 >> 0x20); lVar12 != 0; lVar12 = lVar12 + -1) {
        uVar4 = *puVar5;
        *puVar5 = puVar5[2];
        puVar5[2] = uVar4;
        puVar5 = puVar5 + 4;
      }
      uVar7 = *(ulong *)(param_1 + 0x20);
    }
    func_0x0001073c8f68(auStack_100,uVar7,1,0,&puStack_c0,puVar11,0);
    lVar12 = 0;
    lStack_110 = lStack_e0 + *(long *)(lStack_d8 + 8);
    uStack_108 = uStack_f0;
    lVar10 = 1;
    while( true ) {
      plVar8 = *(long **)(param_1 + 0x10);
      if ((ulong)((plVar8[1] - *plVar8) / 0x28) <= lVar10 - 1U) break;
      puVar9 = (undefined8 *)(*plVar8 + lVar12);
      if (puVar9[4] != 0) {
        uStack_a8 = uStack_a8 & 0xffffffffffffff00;
        uStack_68 = 0;
        uStack_b0 = *puVar9;
        uStack_b8 = uStack_b8 & 0xffffffffffffff00;
        if (lVar10 == (plVar8[1] - *plVar8) / 0x28) {
          func_0x000107893500(&uStack_a8,auStack_100);
        }
        else {
          func_0x00010789352c(&uStack_a8,auStack_100,auStack_f8,auStack_e8,&lStack_110);
        }
        func_0x0001072bb94c(auStack_168,&uStack_b8);
        func_0x00010725b570(puVar9 + 1,auStack_168);
        func_0x00010725b590(auStack_158);
        func_0x0001078935d8();
      }
      lVar12 = lVar12 + 0x28;
      lVar10 = lVar10 + 1;
    }
    func_0x00010725b5b0(auStack_100);
    func_0x00010724e5b8(&puStack_c0);
  }
  else {
    puVar3 = (undefined8 *)(*(undefined8 **)(param_1 + 0x10))[1];
    for (puVar9 = (undefined8 *)**(undefined8 **)(param_1 + 0x10); puVar9 != puVar3;
        puVar9 = puVar9 + 5) {
      if (puVar9[4] != 0) {
        uStack_b8 = CONCAT71(uStack_b8._1_7_,3);
        uStack_b0 = *puVar9;
        uStack_a8 = uStack_a8 & 0xffffffffffffff00;
        uStack_68 = 0;
        func_0x00010725b570(puVar9 + 1,&uStack_b8);
        func_0x0001078935d8();
      }
    }
  }
  return;
}



/* Entry: 10789365c; end: 1078936ef;  */

undefined8 * FUN_10789365c(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x0001073ad228(auStack_40,param_2);
  func_0x0001073ad7c8(auStack_30,auStack_40);
  func_0x0001074e3a1c(param_1,auStack_30);
  func_0x0001073ad37c(auStack_30);
  func_0x0001073ad3a0(auStack_40);
  *param_1 = &PTR_DAT_1109e4ae0;
  *(undefined2 *)((long)param_1 + 0x59) = 0;
  *(undefined1 *)((long)param_1 + 0x5b) = 0;
  lVar2 = *(long *)(param_1[3] + 0x170);
  param_1[0xc] = *(undefined8 *)(param_1[3] + 0x168);
  param_1[0xd] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return param_1;
}



/* Entry: 107893a7c; end: 107893ad7;  */

undefined8 * FUN_107893a7c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  func_0x0001073ad824(&uStack_30);
  return param_1;
}



/* Entry: 107893edc; end: 107893f03;  */

void FUN_107893edc(void)

{
  undefined1 *unaff_x19;
  
  func_0x000107893dac(*unaff_x19);
  func_0x000107893dac(unaff_x19[1]);
  return;
}



/* Entry: 107894840; end: 1078948b7;  */

undefined4 FUN_107894840(long param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [16];
  
  func_0x000107895e94(param_1 + 200);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  func_0x000100100f40(auStack_30);
  return uVar1;
}



/* Entry: 107894b74; end: 107894bb3;  */

long * FUN_107894b74(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -2;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



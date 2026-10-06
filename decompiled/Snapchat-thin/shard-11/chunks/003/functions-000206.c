/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083e24c0; end: 1083e24ff;  */

/* WARNING: Removing unreachable block (ram,0x0001083e27e0) */
/* WARNING: Removing unreachable block (ram,0x0001083e2800) */

double FUN_1083e24c0(double param_1,double param_2,double param_3,undefined8 *param_4,
                    undefined8 param_5,double param_6,long *param_7,code *param_8)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  double dVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar6;
  int iVar7;
  double dVar8;
  double adStack_110 [16];
  undefined8 uStack_90;
  
  plVar4 = param_7;
  func_0x0001083e2fb8();
  uStack_90 = extraout_x8;
  (**(code **)(*plVar4 + 0x50))(plVar4);
  func_0x0001083e3258();
  dVar8 = param_1;
  (**(code **)(*param_7 + 0x50))(param_7);
  func_0x0001083e3264();
  plVar4 = param_7;
  dVar5 = dVar8;
  (**(code **)(*param_7 + 0x80))();
  lVar6 = 0;
  iVar7 = 0;
  do {
    uVar2 = (ulong)((uint)plVar4 & ((int)(uint)plVar4 >> 0x1f ^ 0xffffffffU)) << 3 == lVar6;
    if ((bool)uVar2) {
      FUN_1083dcad4(param_4,param_5,*(undefined4 *)((long)param_6 + 8),param_7,adStack_110);
      goto LAB_1083e288c;
    }
    func_0x0001083e3034();
    dVar5 = param_6;
    (*extraout_x8_00)(param_6,iVar7);
    uVar3 = (uint)*(undefined8 *)((long)param_6 + 0x10);
    func_0x0001083e308c();
    param_2 = 0.0;
    param_3 = 0.0;
    iVar7 = iVar7 + (uVar3 ^ 1);
    (*param_8)(dVar5,0,0);
    *(double *)((long)adStack_110 + lVar6) = dVar5;
    lVar6 = lVar6 + 8;
    uVar2 = false;
    bVar1 = true;
    if (param_1 <= dVar5) {
      uVar2 = false;
      bVar1 = true;
      if (!NAN(dVar5) && !NAN(dVar8)) {
        uVar2 = dVar5 == dVar8;
        bVar1 = dVar8 <= dVar5;
      }
    }
  } while (!bVar1 || (bool)uVar2);
  *param_4 = 0;
LAB_1083e288c:
  func_0x0001083e2f88(uStack_90);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    return param_2 * param_3 + (1.0 - param_3) * dVar5;
  }
  return dVar5;
}



/* Entry: 1083e2500; end: 1083e2567;  */

/* WARNING: Removing unreachable block (ram,0x0001083e2800) */

double FUN_1083e2500(double param_1,double param_2,double param_3,undefined8 *param_4,
                    undefined8 param_5,undefined8 *param_6)

{
  double dVar1;
  double dVar2;
  undefined1 in_CY;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar7;
  double dVar8;
  double dVar9;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *unaff_x19;
  long lVar10;
  long *unaff_x20;
  double *unaff_x23;
  double dVar11;
  double adStack_110 [16];
  undefined8 uStack_90;
  undefined8 *puVar6;
  
  func_0x0001083e31b0();
  puVar6 = param_4;
  func_0x0001083e2f78(*param_6);
  iVar5 = (int)puVar6;
  func_0x0001083e3008();
  if (iVar5 != 0) {
    func_0x0001083e3024();
    func_0x0001083e31e0();
    if ((bool)in_CY) {
      *param_4 = 0;
      return param_1;
    }
  }
  dVar1 = *unaff_x23;
  dVar2 = unaff_x23[1];
  plVar7 = unaff_x20;
  func_0x0001083e2fb8();
  uStack_90 = extraout_x8;
  (**(code **)(*plVar7 + 0x50))(plVar7);
  func_0x0001083e3258();
  dVar11 = param_1;
  (**(code **)(*unaff_x20 + 0x50))();
  func_0x0001083e3264();
  plVar7 = unaff_x20;
  dVar8 = dVar11;
  (**(code **)(*unaff_x20 + 0x80))();
  lVar10 = 0;
  iVar5 = 0;
  do {
    uVar4 = (ulong)((uint)plVar7 & ((int)(uint)plVar7 >> 0x1f ^ 0xffffffffU)) << 3 == lVar10;
    if ((bool)uVar4) {
      FUN_1083dcad4(param_4,param_5,*(undefined4 *)((long)dVar1 + 8),unaff_x20,adStack_110);
      goto LAB_1083e288c;
    }
    func_0x0001083e3034();
    dVar8 = dVar1;
    (*extraout_x8_00)(dVar1,iVar5);
    dVar9 = *(double *)((long)dVar1 + 0x10);
    func_0x0001083e308c();
    param_3 = 0.0;
    if (dVar2 == 0.0) {
      param_2 = 0.0;
    }
    else {
      param_2 = dVar9;
      func_0x0001083e30c0();
      func_0x0001083e323c();
      func_0x0001083e308c(*(undefined8 *)((long)dVar2 + 0x10));
    }
    iVar5 = iVar5 + (SUB84(dVar9,0) ^ 1);
    (*unaff_x19)(dVar8,param_2,0);
    *(double *)((long)adStack_110 + lVar10) = dVar8;
    lVar10 = lVar10 + 8;
    uVar4 = false;
    bVar3 = true;
    if (param_1 <= dVar8) {
      uVar4 = false;
      bVar3 = true;
      if (!NAN(dVar8) && !NAN(dVar11)) {
        uVar4 = dVar8 == dVar11;
        bVar3 = dVar11 <= dVar8;
      }
    }
  } while (!bVar3 || (bool)uVar4);
  *param_4 = 0;
LAB_1083e288c:
  func_0x0001083e2f88(uStack_90);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    return param_2 * param_3 + (1.0 - param_3) * dVar8;
  }
  return dVar8;
}



/* Entry: 1083e2568; end: 1083e259f;  */

void FUN_1083e2568(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__atan2_11034bf20)();
  return;
}



/* Entry: 1083e25a0; end: 1083e261f;  */

/* WARNING: Removing unreachable block (ram,0x0001083e27e0) */
/* WARNING: Removing unreachable block (ram,0x0001083e2800) */

undefined8 *
FUN_1083e25a0(undefined8 *param_1,double param_2,double param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 *param_6,long *param_7,code *param_8)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 auStack_110 [16];
  undefined8 uStack_90;
  
  func_0x0001083e31b0();
  puVar4 = param_4;
  func_0x0001083e2f78(*param_6);
  func_0x0001083e3008();
  if ((int)puVar4 == 0) {
    func_0x0001083e31f0();
  }
  else {
    func_0x0001083e3024();
    if (1 < ((int)puVar4 - 1U & 0xff)) {
      *param_4 = 0;
      return param_1;
    }
    func_0x0001083e31f0();
  }
  plVar5 = param_7;
  func_0x0001083e2fb8();
  uStack_90 = extraout_x8;
  (**(code **)(*plVar5 + 0x50))(plVar5);
  func_0x0001083e3258();
  puVar9 = param_1;
  (**(code **)(*param_7 + 0x50))(param_7);
  func_0x0001083e3264();
  plVar5 = param_7;
  puVar6 = puVar9;
  (**(code **)(*param_7 + 0x80))();
  lVar7 = 0;
  iVar8 = 0;
  do {
    uVar2 = (ulong)((uint)plVar5 & ((int)(uint)plVar5 >> 0x1f ^ 0xffffffffU)) << 3 == lVar7;
    if ((bool)uVar2) {
      FUN_1083dcad4(puVar4,param_5,*(undefined4 *)(param_6 + 1),param_7,auStack_110);
      goto LAB_1083e288c;
    }
    func_0x0001083e3034();
    puVar6 = param_6;
    (*extraout_x8_00)(param_6,iVar8);
    uVar3 = (uint)param_6[2];
    func_0x0001083e308c();
    param_2 = 0.0;
    param_3 = 0.0;
    iVar8 = iVar8 + (uVar3 ^ 1);
    (*param_8)(puVar6,0,0);
    *(undefined8 **)((long)auStack_110 + lVar7) = puVar6;
    lVar7 = lVar7 + 8;
    uVar2 = false;
    bVar1 = true;
    if ((double)param_1 <= (double)puVar6) {
      uVar2 = false;
      bVar1 = true;
      if (!NAN((double)puVar6) && !NAN((double)puVar9)) {
        uVar2 = (double)puVar6 == (double)puVar9;
        bVar1 = (double)puVar9 <= (double)puVar6;
      }
    }
  } while (!bVar1 || (bool)uVar2);
  *puVar4 = 0;
LAB_1083e288c:
  func_0x0001083e2f88(uStack_90);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    return (undefined8 *)(param_2 * param_3 + (1.0 - param_3) * (double)puVar6);
  }
  return puVar6;
}



/* Entry: 1083e2620; end: 1083e266b;  */

double FUN_1083e2620(double param_1)

{
  return ABS(param_1);
}



/* Entry: 1083e266c; end: 1083e26d3;  */

double FUN_1083e266c(double param_1,double param_2,long *param_3,undefined8 *param_4,
                    undefined8 param_5,undefined8 *param_6)

{
  double dVar1;
  double dVar2;
  undefined1 in_CY;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  long *plVar8;
  double dVar9;
  double dVar10;
  long *plVar11;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *unaff_x19;
  long lVar12;
  long *unaff_x20;
  double *unaff_x23;
  int iVar13;
  double dVar14;
  double adStack_110 [16];
  undefined8 uStack_90;
  undefined8 *puVar7;
  
  func_0x0001083e31b0();
  puVar7 = param_4;
  func_0x0001083e2f78(*param_6);
  iVar5 = (int)puVar7;
  func_0x0001083e3008();
  if (iVar5 != 0) {
    func_0x0001083e3024();
    func_0x0001083e31e0();
    if ((bool)in_CY) {
      *param_4 = 0;
      return param_1;
    }
  }
  dVar1 = *unaff_x23;
  dVar2 = unaff_x23[1];
  plVar11 = (long *)unaff_x23[2];
  plVar8 = unaff_x20;
  func_0x0001083e2fb8();
  uStack_90 = extraout_x8;
  (**(code **)(*plVar8 + 0x50))(plVar8);
  func_0x0001083e3258();
  dVar14 = param_1;
  (**(code **)(*unaff_x20 + 0x50))();
  func_0x0001083e3264();
  plVar8 = unaff_x20;
  dVar9 = dVar14;
  (**(code **)(*unaff_x20 + 0x80))();
  lVar12 = 0;
  iVar5 = 0;
  iVar13 = 0;
  do {
    uVar4 = (ulong)((uint)plVar8 & ((int)(uint)plVar8 >> 0x1f ^ 0xffffffffU)) << 3 == lVar12;
    if ((bool)uVar4) {
      FUN_1083dcad4(param_4,param_5,*(undefined4 *)((long)dVar1 + 8),unaff_x20,adStack_110);
      goto LAB_1083e288c;
    }
    func_0x0001083e3034();
    dVar9 = dVar1;
    (*extraout_x8_00)(dVar1,iVar13);
    dVar10 = *(double *)((long)dVar1 + 0x10);
    func_0x0001083e308c();
    param_3 = (long *)0x0;
    if (dVar2 == 0.0) {
      param_2 = 0.0;
    }
    else {
      param_2 = dVar10;
      func_0x0001083e30c0();
      func_0x0001083e323c();
      func_0x0001083e308c(*(undefined8 *)((long)dVar2 + 0x10));
    }
    if (plVar11 != (long *)0x0) {
      param_3 = plVar11;
      (**(code **)(*plVar11 + 0x28))(plVar11,iVar5);
      uVar6 = (uint)plVar11[2];
      func_0x0001083e308c();
      iVar5 = iVar5 + (uVar6 ^ 1);
    }
    iVar13 = iVar13 + (SUB84(dVar10,0) ^ 1);
    (*unaff_x19)(dVar9,param_2,param_3);
    *(double *)((long)adStack_110 + lVar12) = dVar9;
    lVar12 = lVar12 + 8;
    uVar4 = false;
    bVar3 = true;
    if (param_1 <= dVar9) {
      uVar4 = false;
      bVar3 = true;
      if (!NAN(dVar9) && !NAN(dVar14)) {
        uVar4 = dVar9 == dVar14;
        bVar3 = dVar14 <= dVar9;
      }
    }
  } while (!bVar3 || (bool)uVar4);
  *param_4 = 0;
LAB_1083e288c:
  func_0x0001083e2f88(uStack_90);
  if ((bool)uVar4) {
    return dVar9;
  }
  ___stack_chk_fail();
  return param_2 * (double)param_3 + (1.0 - (double)param_3) * dVar9;
}



/* Entry: 1083e26d4; end: 1083e270b;  */

double FUN_1083e26d4(double param_1,double param_2,double param_3)

{
  if (param_1 <= param_3) {
    param_3 = param_1;
  }
  if (param_2 <= param_1) {
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 1083e270c; end: 1083e28c3;  */

double FUN_1083e270c(double param_1,double param_2,long *param_3,undefined8 *param_4,
                    undefined8 param_5,double param_6,long param_7,long *param_8,long *param_9,
                    code *param_10)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  double dVar5;
  double dVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double adStack_110 [16];
  undefined8 uStack_90;
  
  plVar4 = param_9;
  func_0x0001083e2fb8();
  uStack_90 = extraout_x8;
  (**(code **)(*plVar4 + 0x50))(plVar4);
  func_0x0001083e3258();
  dVar10 = param_1;
  (**(code **)(*param_9 + 0x50))(param_9);
  func_0x0001083e3264();
  plVar4 = param_9;
  dVar5 = dVar10;
  (**(code **)(*param_9 + 0x80))();
  lVar7 = 0;
  iVar8 = 0;
  iVar9 = 0;
  do {
    uVar2 = (ulong)((uint)plVar4 & ((int)(uint)plVar4 >> 0x1f ^ 0xffffffffU)) << 3 == lVar7;
    if ((bool)uVar2) {
      FUN_1083dcad4(param_4,param_5,*(undefined4 *)((long)param_6 + 8),param_9,adStack_110);
      goto LAB_1083e288c;
    }
    func_0x0001083e3034();
    dVar5 = param_6;
    (*extraout_x8_00)(param_6,iVar9);
    dVar6 = *(double *)((long)param_6 + 0x10);
    func_0x0001083e308c();
    param_3 = (long *)0x0;
    if (param_7 == 0) {
      param_2 = 0.0;
    }
    else {
      param_2 = dVar6;
      func_0x0001083e30c0();
      func_0x0001083e323c();
      func_0x0001083e308c(*(undefined8 *)(param_7 + 0x10));
    }
    if (param_8 != (long *)0x0) {
      param_3 = param_8;
      (**(code **)(*param_8 + 0x28))(param_8,iVar8);
      uVar3 = (uint)param_8[2];
      func_0x0001083e308c();
      iVar8 = iVar8 + (uVar3 ^ 1);
    }
    iVar9 = iVar9 + (SUB84(dVar6,0) ^ 1);
    (*param_10)(dVar5,param_2,param_3);
    *(double *)((long)adStack_110 + lVar7) = dVar5;
    lVar7 = lVar7 + 8;
    uVar2 = false;
    bVar1 = true;
    if (param_1 <= dVar5) {
      uVar2 = false;
      bVar1 = true;
      if (!NAN(dVar5) && !NAN(dVar10)) {
        uVar2 = dVar5 == dVar10;
        bVar1 = dVar10 <= dVar5;
      }
    }
  } while (!bVar1 || (bool)uVar2);
  *param_4 = 0;
LAB_1083e288c:
  func_0x0001083e2f88(uStack_90);
  if ((bool)uVar2) {
    return dVar5;
  }
  ___stack_chk_fail();
  return param_2 * (double)param_3 + (1.0 - (double)param_3) * dVar5;
}



/* Entry: 1083e28c4; end: 1083e292f;  */

double FUN_1083e28c4(double param_1,double param_2,double param_3)

{
  return param_2 * param_3 + (1.0 - param_3) * param_1;
}



/* Entry: 1083e2930; end: 1083e2957;  */

double FUN_1083e2930(double param_1)

{
  double dVar1;
  
  dVar1 = param_1;
  _remainder(param_1,0x3ff0000000000000);
  return param_1 - dVar1;
}



/* Entry: 1083e2958; end: 1083e2983;  */

double FUN_1083e2958(double param_1)

{
  return (double)(int)(float)param_1;
}



/* Entry: 1083e2984; end: 1083e2a0b;  */

int FUN_1083e2984(float param_1,double param_2)

{
  int iVar1;
  
  func_0x0001083e3080();
  func_0x0001083e316c();
  iVar1 = 0;
  if (0.0 <= param_1) {
    iVar1 = (int)(param_2 * 65535.0);
  }
  return iVar1;
}



/* Entry: 1083e2a0c; end: 1083e2a8f;  */

/* WARNING: Removing unreachable block (ram,0x0001083e2d50) */
/* WARNING: Removing unreachable block (ram,0x0001083e2d60) */
/* WARNING: Removing unreachable block (ram,0x0001083e2da4) */

void FUN_1083e2a0c(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long *unaff_x19;
  undefined8 *unaff_x20;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_88;
  
  func_0x0001083e32dc();
  func_0x0001083e2f78(*param_2);
  lVar6 = *unaff_x19;
  dVar8 = 0.0;
  dVar10 = 0.0;
  uVar1 = *(undefined4 *)(lVar6 + 8);
  (**(code **)(*param_1 + 0x50))(param_1);
  func_0x0001083e3258();
  dVar9 = dVar8;
  (**(code **)(*param_1 + 0x50))(param_1);
  func_0x0001083e3264();
  uVar4 = *(undefined8 *)(lVar6 + 0x10);
  func_0x0001083e3018();
  iVar7 = -1;
  do {
    func_0x0001083e32d0();
    func_0x0001083e3078();
    iVar7 = iVar7 + 1;
    if ((int)uVar4 <= iVar7) {
      (*(code *)0x1083e2cc0)(dVar10);
      FUN_1083c7aa0(&uStack_88,dVar10,uVar1,param_1);
      *unaff_x20 = uStack_88;
      return;
    }
    func_0x0001083e30c0();
    func_0x0001083e323c();
    uVar5 = *(undefined8 *)(lVar6 + 0x10);
    func_0x0001083e3018();
    (*(code *)0x1083e2cb8)(dVar10,uVar4,0);
    bVar2 = false;
    bVar3 = true;
    if (dVar8 <= dVar10) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar10) && !NAN(dVar9)) {
        bVar2 = dVar10 == dVar9;
        bVar3 = dVar9 <= dVar10;
      }
    }
    uVar4 = uVar5;
  } while (!bVar3 || bVar2);
  *unaff_x20 = 0;
  return;
}



/* Entry: 1083e2a90; end: 1083e2a93;  */

double FUN_1083e2a90(double param_1,double param_2)

{
  return param_1 * param_2;
}



/* Entry: 1083e2a94; end: 1083e2aff;  */

void FUN_1083e2a94(long param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x19;
  long *unaff_x20;
  long *plVar3;
  
  func_0x0001083e32dc();
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x80))();
  for (plVar3 = (long *)0x0; plVar1 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
    plVar2 = unaff_x20;
    (**(code **)(*unaff_x20 + 0x28))();
    *(float *)(unaff_x19 + (long)plVar3 * 4) = (float)(double)plVar2;
  }
  return;
}



/* Entry: 1083e2b00; end: 1083e2c0b;  */

long * FUN_1083e2b00(double param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5,
                    long *param_6,code *param_7)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined8 uVar4;
  long lVar5;
  double adStack_98 [4];
  undefined8 uStack_78;
  
  func_0x0001083e32dc();
  lVar5 = 0;
  func_0x0001083e2fb8();
  uStack_78 = extraout_x8;
  while( true ) {
    iVar2 = (int)param_3;
    func_0x0001083e3190();
    uVar1 = lVar5 == iVar2;
    if (iVar2 <= lVar5) break;
    plVar3 = param_5;
    func_0x0001083e32c8(*(undefined8 *)(*param_5 + 0x28),param_5);
    param_3 = param_6;
    func_0x0001083e32c8(*(undefined8 *)(*param_6 + 0x28));
    param_2 = param_3;
    (*param_7)(plVar3);
    param_1 = 1.0;
    if ((int)param_3 == 0) {
      param_1 = 0.0;
    }
    adStack_98[lVar5] = param_1;
    lVar5 = lVar5 + 1;
  }
  uVar4 = *(undefined8 *)(*unaff_x19 + 0xc0);
  func_0x0001083e3190();
  FUN_1083f0d08(uVar4);
  FUN_1083dcad4();
  func_0x0001083e2f88(uStack_78);
  if ((bool)uVar1) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  return (long *)(ulong)(param_1 < (double)param_2);
}



/* Entry: 1083e2c0c; end: 1083e2cc3;  */

bool FUN_1083e2c0c(double param_1,double param_2)

{
  return param_1 < param_2;
}



/* Entry: 1083e2cc4; end: 1083e2e53;  */

void FUN_1083e2cc4(double param_1,undefined8 *param_2,long param_3,long param_4,long *param_5,
                  code *param_6,code *param_7)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  code *extraout_x8;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  long lVar10;
  undefined8 uStack_88;
  
  uVar1 = *(undefined4 *)(param_3 + 8);
  dVar8 = param_1;
  (**(code **)(*param_5 + 0x50))(param_5);
  func_0x0001083e3258();
  dVar9 = dVar8;
  (**(code **)(*param_5 + 0x50))(param_5);
  func_0x0001083e3264();
  uVar4 = *(ulong *)(param_3 + 0x10);
  func_0x0001083e3018();
  if (((uVar4 & 1) == 0) && (param_4 != 0)) {
    uVar4 = *(ulong *)(param_4 + 0x10);
    func_0x0001083e3018();
  }
  iVar7 = 0;
  iVar6 = -1;
  do {
    func_0x0001083e32d0();
    func_0x0001083e3078();
    iVar6 = iVar6 + 1;
    if ((int)uVar4 <= iVar6) {
      if (param_7 != (code *)0x0) {
        (*param_7)(param_1);
      }
      FUN_1083c7aa0(&uStack_88,param_1,uVar1,param_5);
      *param_2 = uStack_88;
      return;
    }
    func_0x0001083e30c0();
    func_0x0001083e323c();
    uVar5 = *(ulong *)(param_3 + 0x10);
    func_0x0001083e3018();
    if (param_4 == 0) {
      lVar10 = 0;
    }
    else {
      func_0x0001083e3034();
      lVar10 = param_4;
      (*extraout_x8)(param_4,iVar7);
      uVar5 = *(ulong *)(param_4 + 0x10);
      func_0x0001083e3018();
      iVar7 = iVar7 + (int)uVar5;
    }
    (*param_6)(param_1,uVar4,lVar10);
    bVar2 = false;
    bVar3 = true;
    if (dVar8 <= param_1) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1) && !NAN(dVar9)) {
        bVar2 = param_1 == dVar9;
        bVar3 = dVar9 <= param_1;
      }
    }
    uVar4 = uVar5;
  } while (!bVar3 || bVar2);
  *param_2 = 0;
  return;
}



/* Entry: 1083e2e54; end: 1083e2ed3;  */

void FUN_1083e2e54(undefined8 *param_1,long param_2,long param_3,long *param_4,code *param_5,
                  code *param_6)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  code *extraout_x8;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lVar11;
  undefined8 uStack_88;
  
  dVar10 = 0.0;
  uVar1 = *(undefined4 *)(param_2 + 8);
  dVar8 = dVar10;
  (**(code **)(*param_4 + 0x50))(param_4);
  func_0x0001083e3258();
  dVar9 = dVar8;
  (**(code **)(*param_4 + 0x50))(param_4);
  func_0x0001083e3264();
  uVar4 = *(ulong *)(param_2 + 0x10);
  func_0x0001083e3018();
  if (((uVar4 & 1) == 0) && (param_3 != 0)) {
    uVar4 = *(ulong *)(param_3 + 0x10);
    func_0x0001083e3018();
  }
  iVar7 = 0;
  iVar6 = -1;
  do {
    func_0x0001083e32d0();
    func_0x0001083e3078();
    iVar6 = iVar6 + 1;
    if ((int)uVar4 <= iVar6) {
      if (param_6 != (code *)0x0) {
        (*param_6)(dVar10);
      }
      FUN_1083c7aa0(&uStack_88,dVar10,uVar1,param_4);
      *param_1 = uStack_88;
      return;
    }
    func_0x0001083e30c0();
    func_0x0001083e323c();
    uVar5 = *(ulong *)(param_2 + 0x10);
    func_0x0001083e3018();
    if (param_3 == 0) {
      lVar11 = 0;
    }
    else {
      func_0x0001083e3034();
      lVar11 = param_3;
      (*extraout_x8)(param_3,iVar7);
      uVar5 = *(ulong *)(param_3 + 0x10);
      func_0x0001083e3018();
      iVar7 = iVar7 + (int)uVar5;
    }
    (*param_5)(dVar10,uVar4,lVar11);
    bVar2 = false;
    bVar3 = true;
    if (dVar8 <= dVar10) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar10) && !NAN(dVar9)) {
        bVar2 = dVar10 == dVar9;
        bVar3 = dVar9 <= dVar10;
      }
    }
    uVar4 = uVar5;
  } while (!bVar3 || bVar2);
  *param_1 = 0;
  return;
}



/* Entry: 1083e2ed4; end: 1083e2f5b;  */

undefined8 *
FUN_1083e2ed4(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 0x27;
  *param_1 = &PTR_FUN_110a455c8;
  param_1[2] = param_3;
  param_1[3] = param_4;
  FUN_1083c8078(param_1 + 4,param_5);
  puVar1 = param_1;
  if (param_6 != (undefined8 *)0x0) {
    puVar1 = param_6;
  }
  param_1[8] = puVar1;
  return param_1;
}



/* Entry: 1083e2f5c; end: 1083e32e7;  */

void FUN_1083e2f5c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083e2f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083e32e8; end: 1083e338b;  */

void FUN_1083e32e8(int param_1)

{
  long *unaff_x19;
  
  func_0x0001083e4ed0();
  if (((param_1 != 0) && (func_0x0001083e4ea8(*(undefined8 *)(*unaff_x19 + 0x110)), 0x1f < param_1))
     && (func_0x0001083e4ea8(*(undefined8 *)(*unaff_x19 + 0x60)), param_1 == 2)) {
    func_0x0001083e4eb0();
    func_0x0001083e4f8c();
  }
  return;
}



/* Entry: 1083e338c; end: 1083e34f7;  */

void FUN_1083e338c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  int iVar6;
  long *plVar7;
  long lVar8;
  
  uVar4 = param_5;
  uVar5 = param_6;
  func_0x0001083e4de8();
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = 9;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *param_1 = &PTR_FUN_110a45630;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  FUN_1083e4b98(param_1 + 7,param_7);
  *(undefined8 *)(unaff_x19 + 0x48) = param_8;
  *(undefined4 *)(unaff_x19 + 0x50) = param_4;
  *(undefined1 *)(unaff_x19 + 0x54) = param_9;
  *(undefined1 *)(unaff_x19 + 0x55) = **(undefined1 **)(unaff_x20 + 8);
  func_0x000107c27944(param_5,param_6,"main",4);
  iVar6 = 0;
  *(char *)(unaff_x19 + 0x56) = (char)param_5;
  *(undefined2 *)(unaff_x19 + 0x57) = 0;
  *(undefined1 *)(unaff_x19 + 0x59) = 0;
  plVar7 = *(long **)(unaff_x19 + 0x38);
  for (lVar8 = (long)*(int *)(unaff_x19 + 0x40) << 3; lVar8 != 0; lVar8 = lVar8 + -8) {
    if ((*(char *)(unaff_x19 + 0x56) == '\x01') &&
       (bVar1 = *(byte *)(*(long *)(unaff_x20 + 8) + 1), bVar1 < 0xd)) {
      uVar2 = 1 << (ulong)(bVar1 & 0x1f);
      if ((uVar2 & 0x929) == 0) {
        if ((uVar2 & 0x1680) != 0) {
          iVar3 = (int)*(undefined8 *)(*plVar7 + 0x20);
          func_0x0001083e3344();
          if (iVar3 != 0) {
            if (iVar6 == 1) {
              *(undefined1 *)(unaff_x19 + 0x59) = 1;
              iVar6 = 2;
            }
            else if (iVar6 == 0) {
              iVar6 = 1;
              *(undefined1 *)(unaff_x19 + 0x58) = 1;
            }
            else {
              iVar6 = iVar6 + 1;
            }
          }
        }
      }
      else {
        iVar3 = (int)*(undefined8 *)(*plVar7 + 0x20);
        FUN_1083e32e8();
        if (iVar3 != 0) {
          *(undefined1 *)(unaff_x19 + 0x57) = 1;
        }
      }
    }
    plVar7 = plVar7 + 1;
  }
  return;
}



/* Entry: 1083e34f8; end: 1083e41a3;  */

long * FUN_1083e34f8(long *param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                    undefined8 param_5,long *param_6,undefined4 param_7,long *param_8)

{
  uint uVar1;
  undefined4 uVar2;
  long **pplVar3;
  long *plVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined *puVar17;
  undefined8 uVar18;
  int extraout_w8;
  uint uVar19;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long **extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long lVar20;
  long *plVar21;
  long *plVar22;
  ulong *puVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  uint uStack_16c;
  undefined8 uStack_168;
  long lStack_160;
  undefined1 auStack_158 [24];
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [3];
  undefined8 auStack_f8 [3];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_c8;
  long *plStack_c0;
  undefined4 *puStack_b8;
  uint *puStack_b0;
  undefined8 *puStack_a8;
  long **pplStack_a0;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  undefined4 auStack_6c [3];
  
  FUN_1083e84c8(param_3 + 1,param_1,param_2,0);
  uVar1 = param_3[0xe] & 0xfff9ffff | 0x40000;
  if (*(char *)(param_1[1] + 0x24) == '\0') {
    uVar1 = param_3[0xe];
  }
  uVar18 = param_4;
  func_0x000107c27944(param_4,param_5,"main",4);
  if (*(char *)param_1[1] == '\0') {
    uStack_16c = 0xff;
    uVar10 = 0x60000;
  }
  else {
    uVar10 = param_4;
    FUN_1083c95a8(param_4,param_5);
    uStack_16c = (uint)uVar10;
    uVar10 = 0x60000;
    if (*(char *)param_1[1] != '\0') {
      uVar10 = 0x7c000;
    }
  }
  uVar2 = *param_3;
  plStack_c8 = (long *)CONCAT44(plStack_c8._4_4_,uVar1);
  FUN_1083e8b90(&plStack_c8,param_1,uVar2,uVar10);
  if (((uVar1 ^ 0xffffffff) & 0x60000) == 0) {
    lVar11 = param_1[2];
    puVar17 = &UNK_10f492b7f;
    uVar18 = 0x30;
    param_2 = uVar2;
    goto LAB_1083e3608;
  }
  lVar11 = param_1[2];
  plVar13 = param_8;
  (**(code **)(*param_8 + 0xe0))();
  if ((int)plVar13 != 0) {
    func_0x0001083e4f1c();
    func_0x0001083e4ddc(&UNK_10f492bb0);
    func_0x0001083e4dd0();
    func_0x0001083e4da8();
    func_0x0001083e4f74();
LAB_1083e365c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_c8);
    func_0x0001083e4dbc();
    puVar12 = auStack_f8;
    goto LAB_1083e366c;
  }
  plVar13 = (long *)param_1[1];
  FUN_1083c5ae8();
  if (((int)plVar13 != 0) &&
     (plVar13 = param_8, (**(code **)(*param_8 + 0x118))(), (int)plVar13 != 0)) {
    puVar17 = &UNK_10f492bd0;
    uVar18 = 0x32;
    param_2 = param_7;
    goto LAB_1083e3608;
  }
  if ((*(char *)param_1[1] == '\0') &&
     (plVar13 = param_8, (**(code **)(*param_8 + 0x50))(),
     *(byte *)((long)plVar13 + 0x2c) < 0x10 &&
     (1 << (ulong)(*(byte *)((long)plVar13 + 0x2c) & 0x1f) & 0xe4c2U) != 0)) {
    func_0x0001083e4f1c();
    func_0x0001083e4ddc(&UNK_10f492c03);
    func_0x0001083e4dd0();
    func_0x0001083e4da8();
    func_0x0001083e4f74();
    goto LAB_1083e365c;
  }
  puVar23 = (ulong *)*param_6;
  for (lVar11 = (long)(int)param_6[1] << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
    lVar20 = *(long *)(*puVar23 + 0x20);
    uVar19 = *(byte *)(lVar20 + 0x2c) - 1;
    if (uVar19 < 0xf) {
      uVar19 = *(uint *)(&UNK_10df2591c + ((ulong)uVar19 & 0xff) * 4);
    }
    else {
      uVar19 = 0x34;
    }
    lVar25 = lVar20;
    func_0x0001083e245c();
    if (((int)lVar25 != 0) && (uVar19 = uVar19 | 0x600, ((uStack_16c ^ 0xffffffff) & 0xff) == 0)) {
      uVar14 = *puVar23;
      func_0x0001083e4d64();
      if ((*(byte *)(uVar14 + 2) & 0xe) == 0) {
        lVar11 = param_1[2];
        param_2 = *(undefined4 *)(*puVar23 + 8);
        puVar17 = &UNK_10f492c2a;
        uVar18 = 0x47;
        goto LAB_1083e3608;
      }
    }
    plStack_c8 = (long *)CONCAT44(plStack_c8._4_4_,*(undefined4 *)(*puVar23 + 0x30));
    FUN_1083e8b90(&plStack_c8,param_1,*(undefined4 *)(*puVar23 + 0x34),uVar19);
    plVar13 = (long *)*puVar23;
    func_0x0001083e4d64();
    FUN_1083e84c8();
    if (*(byte *)(param_1[1] + 1) < 0xf &&
        (1 << (ulong)(*(byte *)(param_1[1] + 1) & 0x1f) & 0x6380U) != 0) {
      uVar19 = *(byte *)(lVar20 + 0x2c) - 0xd;
      cVar6 = SBORROW4(uVar19,2);
      cVar7 = (int)(*(byte *)(lVar20 + 0x2c) - 0xf) < 0;
      if (uVar19 < 3) {
        lVar11 = param_1[2];
        uVar2 = *(undefined4 *)(*puVar23 + 8);
        FUN_10831d8f8(auStack_f8,lVar20);
        func_0x0001083e4ddc(&UNK_10f492c72);
        func_0x0001083e4dd0();
        func_0x0001083e4da8();
        uVar18 = extraout_x11;
        pplVar3 = extraout_x10;
        if (cVar7 == cVar6) {
          uVar18 = extraout_x8;
          pplVar3 = &plStack_c8;
        }
        FUN_1083c8a60(lVar11,uVar2,pplVar3,uVar18);
        goto LAB_1083e365c;
      }
    }
    if (((uVar1 >> 0x10 & 1) != 0) && ((*(byte *)(*puVar23 + 0x30) >> 5 & 1) != 0)) {
      lVar11 = param_1[2];
      param_2 = *(undefined4 *)(*puVar23 + 0x34);
      puVar17 = &UNK_10f492c95;
      uVar18 = 0x29;
      goto LAB_1083e3608;
    }
    puVar23 = puVar23 + 1;
  }
  iVar9 = (int)plVar13;
  lVar11 = param_1[2];
  if ((int)uVar18 == 0) goto LAB_1083e3ad0;
  uVar8 = *(char *)(param_1[1] + 1) == '\x0e';
  switch(*(char *)(param_1[1] + 1)) {
  case '\0':
  case '\x03':
  case '\x05':
    if (((int)param_6[1] == 0) ||
       (((int)param_6[1] == 1 &&
        (plVar13 = param_6, func_0x0001083e4898(), ((ulong)plVar13 & 1) != 0)))) break;
    puVar17 = &UNK_10f492e48;
    goto code_r0x0001083e3980;
  case '\x01':
  case '\x02':
  case '\x04':
  case '\x06':
    plVar13 = param_8;
    (**(code **)(*param_8 + 0x38))(param_8,*(undefined8 *)(*param_1 + 0xf0));
    if ((int)plVar13 == 0) {
      puVar17 = &UNK_10f492e75;
      uVar18 = 0x19;
      goto LAB_1083e3608;
    }
    if ((int)param_6[1] != 0) {
      puVar17 = &UNK_10f492e8f;
      uVar18 = 0x27;
      goto LAB_1083e3608;
    }
    break;
  case '\a':
  case '\n':
    func_0x0001083e4f28();
    if ((int)plVar13 == 0) {
code_r0x0001083e3a28:
      puVar17 = &UNK_10f492cbf;
      uVar18 = 0x30;
      goto LAB_1083e3608;
    }
    func_0x0001083e4ef8();
    if ((!(bool)uVar8) || (func_0x0001083e4f3c(), ((ulong)plVar13 & 1) == 0)) {
      puVar17 = &UNK_10f492cf0;
      uVar18 = 0x35;
      goto LAB_1083e3608;
    }
    break;
  case '\b':
  case '\v':
    func_0x0001083e4f28();
    if (iVar9 == 0) goto code_r0x0001083e3a28;
    func_0x0001083e4ef8();
    if ((!(bool)uVar8) || (plVar13 = param_6, func_0x0001083e4898(), ((ulong)plVar13 & 1) == 0)) {
      puVar17 = &UNK_10f492d26;
      uVar18 = 0x2b;
      goto LAB_1083e3608;
    }
    break;
  case '\t':
  case '\f':
    func_0x0001083e4f28();
    if (iVar9 == 0) goto code_r0x0001083e3a28;
    if ((((int)param_6[1] != 2) || (func_0x0001083e4f3c(), iVar9 == 0)) ||
       (plVar13 = param_6, func_0x0001083e4854(param_6,1), ((ulong)plVar13 & 1) == 0)) {
      puVar17 = &UNK_10f492d52;
      uVar18 = 0x40;
      goto LAB_1083e3608;
    }
    break;
  case '\r':
    plVar13 = param_8;
    func_0x0001083e48dc();
    iVar9 = (int)plVar13;
    if (iVar9 == 0) {
      puVar17 = &UNK_10f492d93;
      uVar18 = 0x1e;
      goto LAB_1083e3608;
    }
    func_0x0001083e4ef8();
    if ((bool)uVar8) {
      lVar20 = *(long *)*param_6;
      plVar13 = *(long **)(lVar20 + 0x20);
      func_0x0001083e4ea8(*(undefined8 *)(*plVar13 + 0xf0));
      if (iVar9 != 0) {
        lVar25 = plVar13[2];
        func_0x000107c27944(lVar25,plVar13[3],&DAT_10f488be5,10);
        if ((int)lVar25 != 0) {
          if (*(int *)(lVar20 + 0x30) == 4) break;
          goto code_r0x0001083e3aa0;
        }
      }
      puVar17 = &UNK_10f492db2;
      uVar18 = 0x2c;
      goto LAB_1083e3608;
    }
code_r0x0001083e3aa0:
    puVar17 = &UNK_10f492db2;
code_r0x0001083e3980:
    uVar18 = 0x2c;
    goto LAB_1083e3608;
  case '\x0e':
    plVar13 = param_8;
    FUN_1083e32e8();
    if ((int)plVar13 == 0) {
      puVar17 = &UNK_10f492ddf;
      uVar18 = 0x26;
      goto LAB_1083e3608;
    }
    func_0x0001083e4ef8();
    iVar9 = extraout_w8;
    if ((bool)uVar8) {
      plVar13 = param_6;
      func_0x0001083e4920();
      if (((ulong)plVar13 & 1) != 0) break;
      iVar9 = (int)param_6[1];
    }
    cVar6 = SBORROW4(iVar9,2);
    cVar7 = iVar9 + -2 < 0;
    uVar8 = iVar9 == 2;
    if (((bool)uVar8) && (plVar13 = param_6, func_0x0001083e4920(), (int)plVar13 != 0)) {
      func_0x0001083e4ef8();
      if ((bool)uVar8 || cVar7 != cVar6) {
LAB_1083e4038:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1083e403c);
        (*pcVar5)();
      }
      lVar20 = *(long *)(*param_6 + 8);
      iVar9 = (int)*(undefined8 *)(lVar20 + 0x20);
      func_0x0001083e3344();
      if ((iVar9 != 0) && (*(int *)(lVar20 + 0x30) == 0x20)) break;
    }
    puVar17 = &UNK_10f492e06;
    uVar18 = 0x41;
    goto LAB_1083e3608;
  }
  lVar11 = param_1[2];
LAB_1083e3ad0:
  puStack_b8 = auStack_6c;
  puStack_b0 = &uStack_70;
  puStack_a8 = &uStack_80;
  pplStack_a0 = &plStack_90;
  puStack_98 = &uStack_81;
  plVar13 = (long *)param_1[4];
  plStack_c8 = param_6;
  plStack_c0 = param_1;
  plStack_90 = param_8;
  uStack_81 = (char)uStack_16c;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = uVar1;
  auStack_6c[0] = param_2;
  func_0x0001083e4964(plVar13,param_4,param_5);
  if (plVar13 != (long *)0x0) {
    plVar22 = plVar13;
    plVar15 = plVar13;
    if (*(int *)((long)plVar13 + 0xc) != 9) {
      func_0x0001083e4e80();
      func_0x0001083e4d94(&UNK_10f491ece);
      func_0x0001083e4d48();
      func_0x0001083e4d34();
      func_0x0001083e4e60(lVar11);
LAB_1083e3f54:
      func_0x0001083e4dbc();
      func_0x0001083e4e90();
      puVar12 = auStack_110;
LAB_1083e366c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar12);
      return (long *)0x0;
    }
    for (; plVar22 != (long *)0x0; plVar22 = (long *)plVar22[6]) {
      lVar20 = (long)(int)param_6[1];
      if ((int)param_6[1] == (int)plVar22[8]) {
        plVar24 = (long *)*param_6;
        plVar26 = (long *)plVar22[7];
        plVar21 = (long *)0xffffffff;
        iVar9 = -1;
        plVar4 = plVar24;
        plVar16 = plVar26;
        for (lVar25 = lVar20; lVar25 != 0; lVar25 = lVar25 + -1) {
          if (*(char *)(*(long *)(*plVar16 + 0x20) + 0x2c) == '\x02') {
            plVar15 = *(long **)(*plVar4 + 0x20);
            FUN_1083e4764(plVar15,*(long *)(*plVar16 + 0x20),0);
            if (((int)plVar15 == -1) ||
               (iVar9 = (int)plVar21, plVar21 = plVar15, iVar9 != -1 && iVar9 != (int)plVar15))
            goto LAB_1083e3c04;
          }
          iVar9 = (int)plVar21;
          plVar16 = plVar16 + 1;
          plVar4 = plVar4 + 1;
        }
        plVar16 = plVar15;
        do {
          if (lVar20 == 0) {
            uVar19 = (uint)*(byte *)(plVar22[9] + 0x2c);
            cVar6 = SBORROW4(uVar19,2);
            cVar7 = (int)(uVar19 - 2) < 0;
            if (uVar19 == 2) {
              plVar13 = plStack_90;
              FUN_1083e4764(plStack_90,plVar22[9],0);
              iVar9 = (int)plVar13;
              cVar6 = SCARRY4(iVar9,1);
              cVar7 = iVar9 + 1 < 0;
              if (iVar9 == -1) {
LAB_1083e3e50:
                func_0x0001083e4f30();
                func_0x0001083e4e18();
                func_0x0001083e4e2c();
                func_0x0001083e4f98();
                func_0x0001083e4e40();
                func_0x00010048a6c8(&uStack_e0,auStack_f8,&UNK_10f492ed9);
                func_0x0001083e4d34();
                uVar18 = extraout_x11_00;
                puVar12 = extraout_x10_00;
                if (cVar7 == cVar6) {
                  uVar18 = extraout_x8_00;
                  puVar12 = &uStack_e0;
                }
                FUN_1083c8a60(lVar11,param_7,puVar12,uVar18);
                goto LAB_1083e3e98;
              }
            }
            else {
              plVar13 = plStack_90;
              (**(code **)(*plStack_90 + 0x38))();
              if (((ulong)plVar13 & 1) == 0) goto LAB_1083e3e50;
            }
            uVar14 = 0;
            goto LAB_1083e3dc4;
          }
          plVar15 = *(long **)(*plVar24 + 0x20);
          uVar14 = *(ulong *)(*plVar26 + 0x20);
          if (*(char *)(uVar14 + 0x2c) == '\x02') {
            func_0x0001083e4e98();
            if (uVar14 <= (ulong)(long)iVar9) goto LAB_1083e4038;
            uVar14 = plVar16[iVar9];
          }
          (**(code **)(*plVar15 + 0x38))(plVar15,uVar14);
          plVar24 = plVar24 + 1;
          plVar26 = plVar26 + 1;
          lVar20 = lVar20 + -1;
          plVar16 = plVar15;
        } while (((ulong)plVar15 & 1) != 0);
      }
LAB_1083e3c04:
    }
    if (*(char *)((long)plVar13 + 0x56) == '\x01') {
      puVar17 = &UNK_10f492f81;
      uVar18 = 0x1e;
      param_2 = auStack_6c[0];
LAB_1083e3608:
      FUN_1083c8a60(lVar11,param_2,puVar17,uVar18);
      return (long *)0x0;
    }
  }
  plVar22 = (long *)0x0;
LAB_1083e3c44:
  uStack_e0 = 0;
  uStack_d8 = 0x100000000;
  FUN_1083e41a4(&uStack_e0,(int)param_6[1]);
  plVar13 = (long *)*param_6;
  for (lVar11 = (long)(int)param_6[1] << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
    lVar20 = param_1[4];
    lStack_160 = *plVar13;
    *plVar13 = 0;
    FUN_1083cb078(lVar20,&lStack_160);
    func_0x0001083e41f4(&uStack_e0,lVar20);
    lVar20 = lStack_160;
    lStack_160 = 0;
    if (lVar20 != 0) {
      func_0x0001083e4d58();
    }
    plVar13 = plVar13 + 1;
  }
  if (plVar22 == (long *)0x0) {
    lVar11 = param_1[4];
    plVar22 = (long *)0x60;
    FUN_1083d3a60();
    FUN_1083e4b98(&plStack_c8,&uStack_e0);
    FUN_1083e338c(plVar22,param_1,param_2,uVar1,param_4,param_5,&plStack_c8,param_8,(char)uStack_16c
                 );
    FUN_1083e4aec(&plStack_c8);
    uStack_168 = 0;
    auStack_f8[0] = 0;
    plStack_c8 = plVar22;
    FUN_1083cae60(lVar11 + 8,&plStack_c8);
    plVar13 = plStack_c8;
    plStack_c8 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      func_0x0001083e4d58();
    }
    FUN_1083eddb8(lVar11,param_1,plVar22);
    FUN_1083e4c3c(auStack_f8);
    FUN_1083e4c3c(&uStack_168);
  }
  FUN_1083e4aec(&uStack_e0);
  return plVar22;
LAB_1083e3dc4:
  iVar9 = (int)param_6[1];
  if ((long)iVar9 <= (long)uVar14) goto LAB_1083e3ec0;
  if (*(uint *)(plVar22 + 8) <= uVar14) goto LAB_1083e4038;
  lVar20 = *(long *)(*param_6 + uVar14 * 8);
  if (*(int *)(lVar20 + 0x30) != *(int *)(*(long *)(plVar22[7] + uVar14 * 8) + 0x30)) {
LAB_1083e3f08:
    if (iVar9 <= (int)uVar14) goto LAB_1083e4038;
    __ZNSt3__19to_stringEi(auStack_110,(int)uVar14 + 1);
    func_0x0001083e4d94(&UNK_10f492ef6);
    func_0x0001083e4d48();
    func_0x0001083e4d34(lVar11);
    func_0x0001083e4e60();
    goto LAB_1083e3f54;
  }
  func_0x0001083e4d64();
  if (*(uint *)(plVar22 + 8) <= uVar14) goto LAB_1083e4038;
  uVar18 = *(undefined8 *)(plVar22[7] + uVar14 * 8);
  func_0x0001083e4d64(uVar18);
  FUN_1083e4ad4(lVar20,uVar18);
  if ((int)lVar20 != 0) {
    iVar9 = (int)param_6[1];
    goto LAB_1083e3f08;
  }
  uVar14 = uVar14 + 1;
  goto LAB_1083e3dc4;
LAB_1083e3ec0:
  if (*(char *)((long)plVar22 + 0x54) == -1) {
    if (uStack_70 != *(uint *)(plVar22 + 10)) {
      func_0x0001083e4f30();
      func_0x0001083e4e18();
      func_0x0001083e4e2c();
      func_0x0001083e4f98();
      func_0x0001083e4e40();
      func_0x0001083e4d48();
      func_0x0001083e4d34();
      func_0x0001083e4e60(lVar11);
LAB_1083e3e98:
      func_0x0001083e4dbc();
      func_0x0001083e4e90();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
      puVar12 = auStack_140;
      goto LAB_1083e366c;
    }
    goto LAB_1083e3c44;
  }
  func_0x0001083e4e80();
  func_0x0001083e4d94(&UNK_10f492f39);
  func_0x0001083e4d48();
  func_0x0001083e4d34();
  func_0x0001083e4e60(lVar11);
  goto LAB_1083e3f54;
}



/* Entry: 1083e41a4; end: 1083e425b;  */

void FUN_1083e41a4(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulong)uVar1;
  if ((param_2 - uVar1 != 0 && (int)uVar1 <= param_2) &&
     ((int)(*(uint *)(param_1 + 0xc) >> 1) < param_2)) {
    FUN_1083e4b50(0x3ff0000000000000,uVar2,param_2 - uVar1);
    func_0x0001083e4f04();
    func_0x0001083e4de8();
    if (*(int *)(uVar2 + 8) != 0) {
      func_0x0001083e4e70();
    }
    if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
      func_0x0001083e4f64();
    }
    func_0x0001083e4df4();
    return;
  }
  return;
}



/* Entry: 1083e425c; end: 1083e43a7;  */

void FUN_1083e425c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_40;
  long lStack_38;
  
  if (((*(char *)(param_2 + 0x55) == '\0') || (*(long *)(param_2 + 0x28) != 0)) &&
     (*(char *)(param_2 + 0x56) != '\x01')) {
    pcStack_40 = *(char **)(param_2 + 0x10);
    lStack_38 = *(long *)(param_2 + 0x18);
    if ((lStack_38 == 0) || (*pcStack_40 != '$')) {
      pcVar3 = "";
    }
    else {
      lStack_38 = lStack_38 + -1;
      pcVar3 = "Q";
      pcStack_40 = pcStack_40 + 1;
    }
    func_0x000107c27958(auStack_90,&pcStack_40);
    func_0x00010048a6c8(auStack_78,auStack_90,"_");
    func_0x00010048a6c8(&uStack_60,auStack_78,pcVar3);
    func_0x00010048a6c8(param_1,&uStack_60,*(long *)(param_2 + 0x48) + 0x28);
    func_0x0001083e4e50();
    func_0x0001083e4e58();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
    plVar1 = *(long **)(param_2 + 0x38);
    for (lVar2 = (long)*(int *)(param_2 + 0x40) << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (param_1,*(long *)(*plVar1 + 0x20) + 0x28);
      plVar1 = plVar1 + 1;
    }
  }
  else {
    uStack_58 = *(undefined8 *)(param_2 + 0x18);
    uStack_60 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c27958(param_1,&uStack_60);
  }
  return;
}



/* Entry: 1083e43a8; end: 1083e45a3;  */

void FUN_1083e43a8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  iVar2 = *(int *)(param_2 + 0x50);
  if (iVar2 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    FUN_1083e8b44(auStack_b8);
    func_0x00010048a6c8(&uStack_a0,auStack_b8," ");
  }
  FUN_10831d8f8(auStack_d0,*(undefined8 *)(param_2 + 0x48));
  func_0x00010533a9c0(auStack_88,&uStack_a0,auStack_d0);
  func_0x00010048a6c8(auStack_70,auStack_88," ");
  uStack_f8 = *(undefined8 *)(param_2 + 0x18);
  uStack_100 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c27958(auStack_e8,&uStack_100);
  func_0x00010533a9c0(auStack_58,auStack_70,auStack_e8);
  func_0x00010048a6c8(param_1,auStack_58,&DAT_10f68e8ec);
  func_0x0001083e4e68();
  func_0x0001083e4e58();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  func_0x0001083e4e50();
  uVar4 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (iVar2 != 0) {
    uVar4 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  FUN_10831cc90();
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  for (lVar6 = (long)*(int *)(param_2 + 0x40) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    plVar5 = (long *)*puVar3;
    uVar1 = 0x113254db0;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0x113254dc8;
    }
    func_0x0001004c3ca0(param_1,uVar1);
    (**(code **)(*plVar5 + 0x10))(auStack_58,plVar5);
    func_0x0001004c3ca0(param_1,auStack_58);
    func_0x0001083e4e68();
    uVar4 = 0;
    puVar3 = puVar3 + 1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
            (param_1,&DAT_10f684600);
  return;
}



/* Entry: 1083e45a4; end: 1083e45bb;  */

uint FUN_1083e45a4(uint param_1)

{
  FUN_10821b208();
  return param_1 ^ 1;
}



/* Entry: 1083e45bc; end: 1083e4703;  */

undefined8 FUN_1083e45bc(long param_1,long param_2,long param_3,long *param_4)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long ****pppplVar4;
  int iVar5;
  undefined8 uVar6;
  long ****pppplVar7;
  long lVar8;
  ulong uVar9;
  long ***ppplStack_68;
  
  lVar8 = *(long *)(param_1 + 0x38);
  uVar1 = *(uint *)(param_1 + 0x40);
  pppplVar4 = (long ****)(ulong)*(uint *)(param_2 + 0x18);
  FUN_1083e4704(param_3 + 0x40);
  uVar6 = 0xffffffff;
  for (uVar9 = 0; iVar5 = (int)uVar6, (long)uVar9 < (long)*(int *)(param_2 + 0x18);
      uVar9 = uVar9 + 1) {
    if (uVar1 == uVar9) goto LAB_1083e4700;
    pppplVar7 = *(long *****)(*(long *)(lVar8 + uVar9 * 8) + 0x20);
    if (*(char *)((long)pppplVar7 + 0x2c) == '\x02') {
      if (iVar5 == -1) {
        uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x10) + uVar9 * 8) + 0x10);
        pppplVar4 = pppplVar7;
        FUN_1083e4764(uVar6,pppplVar7,1);
        if ((int)uVar6 == -1) {
          return 0;
        }
      }
      (*(code *)(*pppplVar7)[0x13])();
      if (pppplVar4 <= (long ****)(long)(int)uVar6) goto LAB_1083e4700;
      pppplVar4 = pppplVar7 + (int)uVar6;
      FUN_1083e47d0(param_3 + 0x40);
    }
    else {
      pppplVar4 = &ppplStack_68;
      ppplStack_68 = (long ***)pppplVar7;
      FUN_1083e471c(param_3 + 0x40);
    }
  }
  plVar3 = *(long **)(param_1 + 0x48);
  if (*(char *)((long)plVar3 + 0x2c) == '\x02') {
    if (iVar5 == -1) {
      return 0;
    }
    (**(code **)(*plVar3 + 0x98))();
    if (pppplVar4 <= (long ****)(long)iVar5) {
LAB_1083e4700:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1083e4704);
      (*pcVar2)();
    }
    plVar3 = (long *)plVar3[iVar5];
  }
  *param_4 = (long)plVar3;
  return 1;
}



/* Entry: 1083e4704; end: 1083e471b;  */

void FUN_1083e4704(long param_1,int param_2)

{
  long unaff_x19;
  
  if (param_2 <= *(int *)(param_1 + 8)) {
    return;
  }
  if ((int)((*(uint *)(param_1 + 0xc) >> 1) - *(int *)(param_1 + 8)) <
      param_2 - *(int *)(param_1 + 8)) {
    FUN_1083e4ce8(0x3ff0000000000000);
    func_0x0001083e4f04();
    func_0x0001083e4de8();
    if (*(int *)(param_1 + 8) != 0) {
      func_0x0001083e4e70();
    }
    if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
      func_0x0001083e4f64();
    }
    func_0x0001083e4df4();
    return;
  }
  return;
}



/* Entry: 1083e471c; end: 1083e4763;  */

void FUN_1083e471c(long param_1)

{
  int extraout_w8;
  int iVar1;
  long unaff_x19;
  
  func_0x0001083e4de8();
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    func_0x0001083e4ee0();
    iVar1 = extraout_w8;
  }
  else {
    func_0x0001083e4ec0();
    func_0x0001083e4d70();
    iVar1 = *(int *)(unaff_x19 + 8);
  }
  *(int *)(unaff_x19 + 8) = iVar1 + 1;
  return;
}



/* Entry: 1083e4764; end: 1083e47cf;  */

long FUN_1083e4764(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x0001083e4e98();
  lVar3 = 0;
  while( true ) {
    if (param_2 == lVar3) {
      return 0xffffffff;
    }
    lVar2 = param_1;
    FUN_1083cb9c8(param_1,*(undefined8 *)(lVar1 + lVar3 * 8),param_3);
    if ((int)lVar2 != 0) break;
    lVar3 = lVar3 + 1;
  }
  return lVar3;
}



/* Entry: 1083e47d0; end: 1083e4817;  */

void FUN_1083e47d0(long param_1)

{
  int extraout_w8;
  int iVar1;
  long unaff_x19;
  
  func_0x0001083e4de8();
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    func_0x0001083e4ee0();
    iVar1 = extraout_w8;
  }
  else {
    func_0x0001083e4ec0();
    func_0x0001083e4d70();
    iVar1 = *(int *)(unaff_x19 + 8);
  }
  *(int *)(unaff_x19 + 8) = iVar1 + 1;
  return;
}



/* Entry: 1083e4818; end: 1083e49a3;  */

void FUN_1083e4818(void)

{
  func_0x0001083e4fa4();
  return;
}



/* Entry: 1083e49a4; end: 1083e4ad3;  */

void FUN_1083e49a4(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [96];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001083e4de8();
  uStack_60 = 0;
  uStack_58 = 0x100000000;
  FUN_1083e41a4(&uStack_60,*(undefined4 *)(*param_2 + 8));
  puVar6 = *(undefined8 **)*unaff_x20;
  for (lVar7 = (long)(int)((long *)*unaff_x20)[1] << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    func_0x0001083e41f4(&uStack_60,*puVar6);
    puVar6 = puVar6 + 1;
  }
  uVar1 = unaff_x20[1];
  uVar4 = *(undefined4 *)unaff_x20[2];
  uVar5 = *(undefined4 *)unaff_x20[3];
  uVar2 = *(undefined8 *)unaff_x20[4];
  uVar3 = ((undefined8 *)unaff_x20[4])[1];
  FUN_1083e4b98(auStack_d0,&uStack_60);
  FUN_1083e338c(auStack_c0,uVar1,uVar4,uVar5,uVar2,uVar3,auStack_d0,*(undefined8 *)unaff_x20[5],
                *(undefined1 *)unaff_x20[6]);
  FUN_1083e43a8(auStack_c0);
  func_0x0001083e4f6c();
  FUN_1083e4aec(auStack_d0);
  FUN_1083e4aec(&uStack_60);
  return;
}



/* Entry: 1083e4ad4; end: 1083e4aeb;  */

uint FUN_1083e4ad4(uint param_1)

{
  FUN_1083e86a0();
  return param_1 ^ 1;
}



/* Entry: 1083e4aec; end: 1083e4b13;  */

long FUN_1083e4aec(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001083e4f64();
  }
  return param_1;
}



/* Entry: 1083e4b14; end: 1083e4b4f;  */

void FUN_1083e4b14(long param_1)

{
  long unaff_x19;
  
  func_0x0001083e4de8();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x0001083e4e70();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083e4f64();
  }
  func_0x0001083e4df4();
  return;
}



/* Entry: 1083e4b50; end: 1083e4b97;  */

void FUN_1083e4b50(undefined8 param_1,uint param_2,int param_3)

{
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((int)(param_2 ^ 0x7fffffff) < param_3) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x1083e4b70;
    func_0x00010bdb1a68();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001083e4f50(param_1,8);
  return;
}



/* Entry: 1083e4b98; end: 1083e4c3b;  */

void FUN_1083e4b98(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong uVar2;
  
  func_0x0001083e4de8();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    uVar1 = unaff_x20[1];
    uVar2 = (ulong)(uint)uVar1;
    func_0x0001083e4b70(0x3ff0000000000000);
    param_2 = param_2 >> 3;
    if (0x7ffffffe < param_2) {
      param_2 = 0x7fffffff;
    }
    *unaff_x19 = uVar2;
    *(uint *)(unaff_x19 + 1) = (uint)uVar1;
    *(uint *)((long)unaff_x19 + 0xc) = (int)param_2 << 1 | 1;
    if ((int)unaff_x20[1] != 0) {
      _memcpy();
    }
  }
  else {
    uVar1 = unaff_x20[1];
    *unaff_x19 = *unaff_x20;
    *(uint *)((long)unaff_x19 + 0xc) = (int)uVar1 << 1 | 1;
    *unaff_x20 = 0;
    *(undefined4 *)((long)unaff_x20 + 0xc) = 1;
  }
  *(int *)(unaff_x19 + 1) = (int)unaff_x20[1];
  *(undefined4 *)(unaff_x20 + 1) = 0;
  return;
}



/* Entry: 1083e4c3c; end: 1083e4cab;  */

long * FUN_1083e4c3c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001083e4f6c();
    FUN_1083d3a98(lVar1);
  }
  return param_1;
}



/* Entry: 1083e4cac; end: 1083e4ce7;  */

void FUN_1083e4cac(long param_1)

{
  long unaff_x19;
  
  func_0x0001083e4de8();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x0001083e4e70();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083e4f64();
  }
  func_0x0001083e4df4();
  return;
}



/* Entry: 1083e4ce8; end: 1083e4d33;  */

void FUN_1083e4ce8(undefined8 param_1,long param_2,int param_3)

{
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((int)(*(uint *)(param_2 + 8) ^ 0x7fffffff) < param_3) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x1083e4d0c;
    func_0x00010bdb1a68();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001083e4f50(param_1,8);
  return;
}



/* Entry: 1083e4d34; end: 1083e4faf;  */

void FUN_1083e4d34(void)

{
  return;
}



/* Entry: 1083e4fb0; end: 1083e5823;  */

/* WARNING: Type propagation algorithm not settling */

long *******
FUN_1083e4fb0(undefined8 *param_1,long ******param_2,ulong param_3,long ******param_4,
             long *****param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  long *******ppppppplVar8;
  undefined8 *puVar9;
  long *****ppppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long ******pppppplVar13;
  uint uVar14;
  long ****pppplVar15;
  undefined8 extraout_x8;
  long ******pppppplVar16;
  long *****extraout_x10;
  undefined8 extraout_x11;
  long *****ppppplVar17;
  long ******pppppplVar18;
  long ******unaff_x24;
  long ****pppplVar19;
  long lVar20;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  long *******ppppppplStack_208;
  ulong uStack_200;
  byte bStack_1f1;
  long ****pppplStack_1f0;
  long ****pppplStack_1e8;
  long ******pppppplStack_1e0;
  long ******pppppplStack_1d8;
  long *****ppppplStack_1d0;
  long ******pppppplStack_1c8;
  ulong uStack_1c0;
  long *******ppppppplStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  long *****ppppplStack_1a0;
  long *****ppppplStack_198;
  undefined1 auStack_188 [8];
  long ******pppppplStack_180;
  long *****ppppplStack_178;
  long *****ppppplStack_170;
  undefined1 uStack_161;
  long lStack_160;
  long lStack_158;
  long *****ppppplStack_150;
  undefined2 uStack_142;
  long lStack_140;
  long lStack_138;
  undefined2 uStack_12a;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined2 uStack_10a;
  long lStack_108;
  long lStack_100;
  undefined2 uStack_f2;
  long lStack_f0;
  long lStack_e8;
  long *****ppppplStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *****ppppplStack_c8;
  long ******pppppplStack_c0;
  long ******pppppplStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long alStack_90 [2];
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_4 + 0x54) == -1) {
    pppplVar15 = *param_5;
    if (((pppplVar15 == (long ****)0x0) || (*(int *)((long)pppplVar15 + 0xc) != 0xc)) ||
       (*(int *)(pppplVar15 + 7) != 1)) {
      param_5 = param_2[2];
      func_0x0001083e64e8();
      func_0x0001083e6434(&UNK_10f492fd4);
      func_0x0001083e6428();
      func_0x0001083e6414();
      pppppplVar13 = (long ******)(param_3 & 0xffffffff);
      func_0x0001083e64b0();
      goto LAB_1083e50e4;
    }
    if (param_4[5] != (long *****)0x0) {
      param_5 = param_2[2];
      func_0x0001083e64e8();
      func_0x0001083e6434(&UNK_10f49219b);
      func_0x0001083e6428();
      func_0x0001083e6414();
      pppppplVar13 = (long ******)(param_3 & 0xffffffff);
      func_0x0001083e64b0();
      goto LAB_1083e50e4;
    }
    ppppplStack_c8 = (long *****)&PTR_FUN_110a45688;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    uStack_a8 = 0;
    puStack_a0 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x0;
    pppppplStack_c0 = param_2;
    pppppplStack_b8 = param_4;
    FUN_1083e5de4();
    unaff_x24 = (long ******)(param_3 & 0xffffffff);
    *puVar9 = puStack_a0;
    uStack_98 = 0;
    ppppplVar17 = param_4[7];
    puStack_a0 = puVar9;
    for (lVar20 = (long)*(int *)(param_4 + 8) << 3; lVar20 != 0; lVar20 = lVar20 + -8) {
      FUN_1083e5c60(&ppppplStack_c8,*ppppplVar17,unaff_x24);
      ppppplVar17 = ppppplVar17 + 1;
    }
    FUN_1083e5824(&ppppplStack_c8,param_5);
    FUN_1083e5c34(&ppppplStack_c8);
    uVar14 = (uint)*(byte *)((long)param_4 + 0x56);
    cVar5 = SBORROW4(uVar14,1);
    cVar6 = (int)(uVar14 - 1) < 0;
    if (uVar14 == 1) {
      cVar6 = '\0';
      cVar5 = '\0';
      if (*(byte *)((long)param_2[1] + 1) < 7 &&
          (1 << (ulong)(*(byte *)((long)param_2[1] + 1) & 0x1f) & 0x52U) != 0) {
        pppplVar15 = *param_5;
        ppppplVar17 = param_2[4];
        FUN_1083c9bd0(ppppplVar17,&UNK_10df16584,0xb);
        if (ppppplVar17 != (long *****)0x0) {
          ppppplVar10 = param_2[4];
          pppppplStack_180 = param_2;
          ppppplStack_170 = ppppplVar17;
          FUN_1083c9bd0(ppppplVar10,&UNK_10df25a1f,0xb);
          ppppplStack_178 = ppppplVar10;
          func_0x0001083e6480(&ppppplStack_1a0);
          func_0x0001083e6480(&lStack_f0);
          uStack_f2 = 0x100;
          FUN_1083e64c8(&ppppplStack_c8,&uStack_f2);
          func_0x0001083e6478(&lStack_e8);
          FUN_1083e6104(&lStack_108,pppppplStack_180,ppppplStack_170);
          uStack_10a = 0x200;
          FUN_1083e64c8(&ppppplStack_c8,&uStack_10a);
          func_0x0001083e6478(&lStack_100);
          FUN_1083e5ffc(&ppppplStack_e0,&pppppplStack_180,&lStack_e8,&lStack_100);
          func_0x0001083e6480(&lStack_128);
          uStack_12a = 0x303;
          FUN_1083e64c8(&ppppplStack_c8,&uStack_12a);
          func_0x0001083e6478(&lStack_120);
          FUN_1083e6104(&lStack_140,pppppplStack_180,ppppplStack_170);
          uStack_142 = 0x301;
          FUN_1083e64c8(&ppppplStack_c8,&uStack_142);
          func_0x0001083e6478(&lStack_138);
          FUN_1083e5ffc(&lStack_118,&pppppplStack_180,&lStack_120,&lStack_138);
          ppppplStack_c8 = ppppplStack_e0;
          alStack_90[0] = lStack_118;
          ppppplStack_e0 = (long *****)0x0;
          lStack_118 = 0;
          FUN_1083e6114(&lStack_d8,&pppppplStack_180,&ppppplStack_c8,0,alStack_90);
          lVar20 = alStack_90[0];
          alStack_90[0] = 0;
          if (lVar20 != 0) {
            func_0x0001083e6408();
          }
          ppppplVar17 = ppppplStack_c8;
          ppppplStack_c8 = (long *****)0x0;
          if (ppppplVar17 != (long *****)0x0) {
            func_0x0001083e6408();
          }
          FUN_1083c7b60(&ppppplStack_c8,0,0xffffff,**pppppplStack_180);
          ppppplStack_150 = ppppplStack_c8;
          func_0x0001083e6480(&lStack_160);
          uStack_161 = 3;
          func_0x0001083e6300(&ppppplStack_c8,&uStack_161,1);
          func_0x0001083e6478(&lStack_158,pppppplStack_180,&lStack_160);
          uStack_b0 = 0x400000000;
          pppppplStack_b8 = &ppppplStack_c8;
          FUN_1083c7ed8(&pppppplStack_b8,&lStack_d8);
          FUN_1083c7ed8(&pppppplStack_b8,&ppppplStack_150);
          FUN_1083c7ed8(&pppppplStack_b8,&lStack_158);
          unaff_x24 = pppppplStack_180;
          pppplVar19 = (*pppppplStack_180)[3];
          FUN_1083c8078(alStack_90,&ppppplStack_c8);
          FUN_1083dc648(&lStack_d0,unaff_x24,0xffffff,pppplVar19,alStack_90);
          FUN_1083c81d4(auStack_80);
          FUN_1083c81d4(&pppppplStack_b8);
          FUN_1083e5e94(auStack_188,&pppppplStack_180,&ppppplStack_1a0,&lStack_d0);
          lVar20 = lStack_d0;
          lStack_d0 = 0;
          if (lVar20 != 0) {
            func_0x0001083e6408();
          }
          lVar20 = lStack_158;
          lStack_158 = 0;
          if (lVar20 != 0) {
            func_0x0001083e6408();
          }
          lVar20 = lStack_160;
          lStack_160 = 0;
          if (lVar20 != 0) {
            func_0x0001083e6408();
          }
          ppppplVar17 = ppppplStack_150;
          ppppplStack_150 = (long *****)0x0;
          if (ppppplVar17 != (long *****)0x0) {
            func_0x0001083e6408();
          }
          lVar20 = lStack_d8;
          lStack_d8 = 0;
          if (lVar20 != 0) {
            func_0x0001083e6408();
          }
          lVar20 = lStack_118;
          lStack_118 = 0;
          if (lVar20 != 0) {
            func_0x0001083e6408();
          }
          lVar20 = lStack_138;
          lStack_138 = 0;
          if (lVar20 != 0) {
            func_0x0001083e6408();
          }
          lVar20 = lStack_140;
          lStack_140 = 0;
          if (lVar20 != 0) {
            func_0x0001083e6408();
          }
          lVar20 = lStack_120;
          lStack_120 = 0;
          if (lVar20 != 0) {
            func_0x0001083e6408();
          }
          lVar20 = lStack_128;
          lStack_128 = 0;
          if (lVar20 != 0) {
            func_0x0001083e6408();
          }
          ppppplVar17 = ppppplStack_e0;
          ppppplStack_e0 = (long *****)0x0;
          if (ppppplVar17 != (long *****)0x0) {
            func_0x0001083e6408();
          }
          lVar20 = lStack_100;
          lStack_100 = 0;
          if (lVar20 != 0) {
            func_0x0001083e6408();
          }
          lVar20 = lStack_108;
          lStack_108 = 0;
          if (lVar20 != 0) {
            func_0x0001083e6408();
          }
          lVar20 = lStack_e8;
          lStack_e8 = 0;
          if (lVar20 != 0) {
            func_0x0001083e6408();
          }
          lVar20 = lStack_f0;
          lStack_f0 = 0;
          if (lVar20 != 0) {
            func_0x0001083e6408();
          }
          func_0x0001083e650c();
          if (lVar20 != 0) {
            func_0x0001083e6408();
          }
          pppplVar15 = pppplVar15 + 5;
          FUN_1083d09d4(pppplVar15,auStack_188);
          func_0x0001083e6500();
          if (pppplVar15 != (long ****)0x0) {
            func_0x0001083e6408();
          }
        }
      }
    }
    pppppplVar13 = (long ******)*param_5;
    pppppplVar16 = param_4;
    FUN_1083d4640();
    if ((int)pppppplVar16 != 0) {
      ppppplVar10 = param_2[2];
      unaff_x24 = (long ******)(ulong)*(uint *)(*param_5 + 1);
      ppppplStack_198 = param_4[3];
      ppppplStack_1a0 = param_4[2];
      func_0x0001083e64c0(&pppppplStack_180);
      func_0x0001083e6434(&UNK_10f49219b);
      func_0x0001083e6428();
      func_0x0001083e6414();
      uVar1 = extraout_x11;
      ppppplVar17 = extraout_x10;
      if (cVar6 == cVar5) {
        uVar1 = extraout_x8;
        ppppplVar17 = (long *****)&ppppplStack_c8;
      }
      pppppplVar13 = unaff_x24;
      FUN_1083c8a60(ppppplVar10,unaff_x24,ppppplVar17,uVar1);
      FUN_1083e64e0();
      func_0x0001083e64b8();
      func_0x0001083e6448();
    }
    param_2 = (long ******)*param_5;
    *param_5 = (long ****)0x0;
    ppppppplVar8 = (long *******)0x20;
    FUN_1083d3a60();
    *(int *)(ppppppplVar8 + 1) = (int)param_3;
    *(undefined4 *)((long)ppppppplVar8 + 0xc) = 1;
    *ppppppplVar8 = (long ******)&PTR_FUN_110a45700;
    ppppppplVar8[2] = param_4;
    ppppppplVar8[3] = param_2;
  }
  else {
    param_5 = param_2[2];
    ppppplStack_198 = param_4[3];
    ppppplStack_1a0 = param_4[2];
    func_0x0001083e64c0(&pppppplStack_180);
    func_0x0001083e6434(&UNK_10f492fa0);
    func_0x0001083e6428();
    func_0x0001083e6414();
    pppppplVar13 = (long ******)(param_3 & 0xffffffff);
    func_0x0001083e64b0();
LAB_1083e50e4:
    param_4 = &ppppplStack_c8;
    FUN_1083e64e0();
    func_0x0001083e64b8();
    func_0x0001083e6448();
    ppppppplVar8 = (long *******)0x0;
  }
  *param_1 = ppppppplVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppppppplVar8;
  }
  ___stack_chk_fail();
  ppppppplVar11 = ppppppplVar8;
  func_0x0001083e6500();
  if (ppppppplVar11 != (long *******)0x0) {
    (*(code *)(*ppppppplVar11)[1])();
  }
  func_0x0001083e6440();
  pcStack_1a8 = FUN_1083e5824;
  ppppppplVar12 = ppppppplVar11;
  pppppplStack_1e0 = unaff_x24;
  pppppplStack_1d8 = param_2;
  ppppplStack_1d0 = param_5;
  pppppplStack_1c8 = param_4;
  uStack_1c0 = param_3;
  ppppppplStack_1b8 = ppppppplVar8;
  puStack_1b0 = &stack0xfffffffffffffff0;
  if (*(char *)((long)ppppppplVar11[1][1] + 0x1c) == '\x01') {
    pppppplVar16 = (long ******)*pppppplVar13;
    iVar2 = *(int *)((long)pppppplVar16 + 0xc);
    if (iVar2 != 0xc) {
      if (iVar2 == 0x11) {
        pppppplVar18 = ppppppplVar11[6];
        if (pppppplVar18 != (long ******)0x0) {
          ppppppplVar11[6] = (long ******)0x0;
          ppppplVar17 = pppppplVar16[2];
          if (((*(int *)((long)ppppplVar17 + 0xc) == 0x19) && (*(char *)(ppppplVar17 + 4) == '\x0f')
              ) && ((*(int *)((long)ppppplVar17[3] + 0xc) == 0x32 &&
                    ((long *****)ppppplVar17[3][3] == pppppplVar18[2])))) {
            ppppppplVar12 = (long *******)ppppplVar17[5];
            FUN_1083c2f80();
            if (((ulong)ppppppplVar12 & 1) == 0) {
              func_0x0001083e5e60(pppppplVar18 + 5,ppppplVar17 + 5);
              FUN_1083cfa70(&ppppppplStack_208);
              ppppppplVar8 = ppppppplStack_208;
              ppppppplStack_208 = (long *******)0x0;
              ppppplVar17 = *pppppplVar13;
              *pppppplVar13 = (long *****)ppppppplVar8;
              ppppppplVar12 = (long *******)0x0;
              if (ppppplVar17 != (long *****)0x0) {
                func_0x0001083e6408();
                ppppppplVar12 = ppppppplStack_208;
                ppppppplStack_208 = (long *******)0x0;
                if (ppppppplVar12 != (long *******)0x0) {
                  func_0x0001083e6408();
                }
              }
            }
          }
        }
      }
      else if (iVar2 != 0x14) {
        if ((iVar2 == 0x18) && (pppppplVar16[5] == (long *****)0x0)) {
          ppppppplVar11[6] = pppppplVar16;
        }
        else {
          ppppppplVar11[6] = (long ******)0x0;
        }
      }
    }
  }
  ppppplVar17 = *pppppplVar13;
  switch(*(undefined4 *)((long)ppppplVar17 + 0xc)) {
  case 0xd:
    if (*(int *)(ppppppplVar11 + 3) != 0) break;
    func_0x0001083e64a0();
    goto code_r0x0001083e5bbc;
  case 0xe:
    pppppplVar16 = ppppppplVar11[5];
    if (*(int *)(pppppplVar16 + 1) != 0) break;
    for (; pppppplVar16 != (long ******)0x0; pppppplVar16 = (long ******)*pppppplVar16) {
      if (0 < *(int *)(pppppplVar16 + 1)) {
        func_0x0001083e64a0();
        goto code_r0x0001083e5bbc;
      }
    }
    func_0x0001083e64a0();
code_r0x0001083e5bbc:
    FUN_1083c8a60();
    break;
  case 0x10:
  case 0x12:
    *(int *)(ppppppplVar11 + 3) = *(int *)(ppppppplVar11 + 3) + 1;
    *(int *)(ppppppplVar11[5] + 1) = *(int *)(ppppppplVar11[5] + 1) + 1;
    func_0x0001083e645c();
    *(int *)(ppppppplVar11[5] + 1) = *(int *)(ppppppplVar11[5] + 1) + -1;
    goto code_r0x0001083e592c;
  case 0x15:
    bVar4 = *(byte *)((long)ppppppplVar11[1][1] + 1);
    if ((bVar4 < 7 && (1 << (ulong)(bVar4 & 0x1f) & 0x52U) != 0) &&
       (*(char *)((long)ppppppplVar11[2] + 0x56) == '\x01')) {
      FUN_1083c8a60(ppppppplVar11[1][2],*(undefined4 *)(ppppplVar17 + 1),&UNK_10f49304c,0x34);
      ppppplVar17 = *pppppplVar13;
    }
    pppplVar15 = ppppplVar17[2];
    ppppplVar10 = ppppppplVar11[2][9];
    bVar7 = *(char *)((long)ppppplVar10 + 0x2c) != '\f';
    if (pppplVar15 == (long ****)0x0) {
      if (bVar7) {
        ppppplVar10 = ppppppplVar11[1][2];
        uVar3 = *(undefined4 *)(ppppplVar17 + 1);
        FUN_10831d8f8(auStack_238);
        func_0x0001004c3cd0(auStack_220,&UNK_10f4930ad,auStack_238);
        func_0x00010048a6c8(&ppppppplStack_208,auStack_220,&DAT_10f638984);
        ppppppplVar8 = ppppppplStack_208;
        if (-1 < (char)bStack_1f1) {
          uStack_200 = (ulong)bStack_1f1;
          ppppppplVar8 = (long *******)&ppppppplStack_208;
        }
        FUN_1083c8a60(ppppplVar10,uVar3,ppppppplVar8,uStack_200);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppplStack_208);
        func_0x0001083e6448();
        func_0x0001083e6498();
      }
    }
    else {
      if (bVar7) {
        ppppplVar17[2] = (long ****)0x0;
        pppplStack_1f0 = pppplVar15;
        FUN_1083f1310(&pppplStack_1e8,ppppplVar10,&pppplStack_1f0,ppppppplVar11[1]);
        pppplVar15 = pppplStack_1e8;
        pppplStack_1e8 = (long ****)0x0;
        pppplVar19 = ppppplVar17[2];
        ppppplVar17[2] = pppplVar15;
        if (pppplVar19 != (long ****)0x0) {
          func_0x0001083e6408();
          pppplVar15 = pppplStack_1e8;
          pppplStack_1e8 = (long ****)0x0;
          if (pppplVar15 != (long ****)0x0) {
            func_0x0001083e6408();
          }
        }
        pppplVar15 = pppplStack_1f0;
        pppplStack_1f0 = (long ****)0x0;
      }
      else {
        FUN_1083c8a60(ppppppplVar11[1][2],*(undefined4 *)(pppplVar15 + 1),&UNK_10f493081,0x2b);
        pppplVar15 = ppppplVar17[2];
        ppppplVar17[2] = (long ****)0x0;
      }
      if (pppplVar15 != (long ****)0x0) {
        func_0x0001083e6408();
      }
    }
    break;
  case 0x16:
    *(int *)(ppppppplVar11 + 3) = *(int *)(ppppppplVar11 + 3) + 1;
    pppppplVar13 = ppppppplVar11[5];
    ppppppplVar12 = (long *******)0x10;
    __Znwm();
    *ppppppplVar12 = pppppplVar13;
    *(undefined4 *)(ppppppplVar12 + 1) = 0;
    ppppppplVar11[5] = (long ******)ppppppplVar12;
    func_0x0001083e645c();
    ppppppplVar11[5] = (long ******)*ppppppplVar11[5];
    __ZdlPv();
code_r0x0001083e592c:
    *(int *)(ppppppplVar11 + 3) = *(int *)(ppppppplVar11 + 3) + -1;
    return ppppppplVar12;
  case 0x18:
    FUN_1083e5c60(ppppppplVar11,ppppplVar17[2],*(undefined4 *)(ppppplVar17 + 1));
  }
  (*(code *)(*ppppppplVar11)[3])(ppppppplVar11,*pppppplVar13);
  return ppppppplVar11;
}



/* Entry: 1083e5824; end: 1083e5c33;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_1083e5824(long *******param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  long *******ppppppplVar5;
  long lVar6;
  long ******pppppplVar7;
  long lVar8;
  long lVar9;
  long *****ppppplVar10;
  long ******pppppplVar11;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long *******ppppppplStack_68;
  ulong uStack_60;
  byte bStack_51;
  long lStack_50;
  long lStack_48;
  
  ppppppplVar5 = param_1;
  if (*(char *)((long)param_1[1][1] + 0x1c) == '\x01') {
    pppppplVar7 = (long ******)*param_2;
    iVar1 = *(int *)((long)pppppplVar7 + 0xc);
    if (iVar1 != 0xc) {
      if (iVar1 == 0x11) {
        pppppplVar11 = param_1[6];
        if (pppppplVar11 != (long ******)0x0) {
          param_1[6] = (long ******)0x0;
          ppppplVar10 = pppppplVar7[2];
          if ((((*(int *)((long)ppppplVar10 + 0xc) == 0x19) &&
               (*(char *)(ppppplVar10 + 4) == '\x0f')) &&
              (*(int *)((long)ppppplVar10[3] + 0xc) == 0x32)) &&
             ((long *****)ppppplVar10[3][3] == pppppplVar11[2])) {
            ppppppplVar5 = (long *******)ppppplVar10[5];
            FUN_1083c2f80();
            if (((ulong)ppppppplVar5 & 1) == 0) {
              func_0x0001083e5e60(pppppplVar11 + 5,ppppplVar10 + 5);
              FUN_1083cfa70(&ppppppplStack_68);
              ppppppplVar5 = ppppppplStack_68;
              ppppppplStack_68 = (long *******)0x0;
              lVar9 = *param_2;
              *param_2 = (long)ppppppplVar5;
              ppppppplVar5 = (long *******)0x0;
              if (lVar9 != 0) {
                FUN_1083e6408();
                ppppppplVar5 = ppppppplStack_68;
                ppppppplStack_68 = (long *******)0x0;
                if (ppppppplVar5 != (long *******)0x0) {
                  FUN_1083e6408();
                }
              }
            }
          }
        }
      }
      else if (iVar1 != 0x14) {
        if ((iVar1 == 0x18) && (pppppplVar7[5] == (long *****)0x0)) {
          param_1[6] = pppppplVar7;
        }
        else {
          param_1[6] = (long ******)0x0;
        }
      }
    }
  }
  lVar9 = *param_2;
  switch(*(undefined4 *)(lVar9 + 0xc)) {
  case 0xd:
    if (*(int *)(param_1 + 3) != 0) break;
    func_0x0001083e64a0();
    goto code_r0x0001083e5bbc;
  case 0xe:
    pppppplVar7 = param_1[5];
    if (*(int *)(pppppplVar7 + 1) != 0) break;
    for (; pppppplVar7 != (long ******)0x0; pppppplVar7 = (long ******)*pppppplVar7) {
      if (0 < *(int *)(pppppplVar7 + 1)) {
        func_0x0001083e64a0();
        goto code_r0x0001083e5bbc;
      }
    }
    func_0x0001083e64a0();
code_r0x0001083e5bbc:
    FUN_1083c8a60();
    break;
  case 0x10:
  case 0x12:
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
    *(int *)(param_1[5] + 1) = *(int *)(param_1[5] + 1) + 1;
    func_0x0001083e645c();
    *(int *)(param_1[5] + 1) = *(int *)(param_1[5] + 1) + -1;
    goto code_r0x0001083e592c;
  case 0x15:
    bVar3 = *(byte *)((long)param_1[1][1] + 1);
    if ((bVar3 < 7 && (1 << (ulong)(bVar3 & 0x1f) & 0x52U) != 0) &&
       (*(char *)((long)param_1[2] + 0x56) == '\x01')) {
      FUN_1083c8a60(param_1[1][2],*(undefined4 *)(lVar9 + 8),&UNK_10f49304c,0x34);
      lVar9 = *param_2;
    }
    lVar8 = *(long *)(lVar9 + 0x10);
    ppppplVar10 = param_1[2][9];
    bVar4 = *(char *)((long)ppppplVar10 + 0x2c) != '\f';
    if (lVar8 == 0) {
      if (bVar4) {
        ppppplVar10 = param_1[1][2];
        uVar2 = *(undefined4 *)(lVar9 + 8);
        FUN_10831d8f8(auStack_98);
        func_0x0001004c3cd0(auStack_80,&UNK_10f4930ad,auStack_98);
        func_0x00010048a6c8(&ppppppplStack_68,auStack_80,&DAT_10f638984);
        ppppppplVar5 = ppppppplStack_68;
        if (-1 < (char)bStack_51) {
          uStack_60 = (ulong)bStack_51;
          ppppppplVar5 = (long *******)&ppppppplStack_68;
        }
        FUN_1083c8a60(ppppplVar10,uVar2,ppppppplVar5,uStack_60);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppplStack_68);
        func_0x0001083e6448();
        func_0x0001083e6498();
      }
    }
    else {
      if (bVar4) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        lStack_50 = lVar8;
        FUN_1083f1310(&lStack_48,ppppplVar10,&lStack_50,param_1[1]);
        lVar8 = lStack_48;
        lStack_48 = 0;
        lVar6 = *(long *)(lVar9 + 0x10);
        *(long *)(lVar9 + 0x10) = lVar8;
        if (lVar6 != 0) {
          FUN_1083e6408();
          lVar9 = lStack_48;
          lStack_48 = 0;
          if (lVar9 != 0) {
            FUN_1083e6408();
          }
        }
        lVar8 = lStack_50;
        lStack_50 = 0;
      }
      else {
        FUN_1083c8a60(param_1[1][2],*(undefined4 *)(lVar8 + 8),&UNK_10f493081,0x2b);
        lVar8 = *(long *)(lVar9 + 0x10);
        *(undefined8 *)(lVar9 + 0x10) = 0;
      }
      if (lVar8 != 0) {
        FUN_1083e6408();
      }
    }
    break;
  case 0x16:
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
    pppppplVar7 = param_1[5];
    ppppppplVar5 = (long *******)0x10;
    __Znwm();
    *ppppppplVar5 = pppppplVar7;
    *(undefined4 *)(ppppppplVar5 + 1) = 0;
    param_1[5] = (long ******)ppppppplVar5;
    func_0x0001083e645c();
    param_1[5] = (long ******)*param_1[5];
    __ZdlPv();
code_r0x0001083e592c:
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + -1;
    return ppppppplVar5;
  case 0x18:
    FUN_1083e5c60(param_1,*(undefined8 *)(lVar9 + 0x10),*(undefined4 *)(lVar9 + 8));
  }
  (*(code *)(*param_1)[3])(param_1,*param_2);
  return param_1;
}



/* Entry: 1083e5c34; end: 1083e5c5f;  */

undefined8 * FUN_1083e5c34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a45688;
  FUN_1083e5e28(param_1 + 5);
  return param_1;
}



/* Entry: 1083e5c60; end: 1083e5dc7;  */

void FUN_1083e5c60(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined8 ****ppppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  plVar2 = *(long **)(param_2 + 0x20);
  (**(code **)(*plVar2 + 0x120))();
  if ((int)plVar2 == 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    plVar2 = *(long **)(param_2 + 0x20);
    (**(code **)(*plVar2 + 0x80))();
    uVar1 = uVar4 + (long)plVar2;
    if (CARRY8(uVar4,(ulong)plVar2)) {
      uVar1 = 0xffffffffffffffff;
    }
    *(ulong *)(param_1 + 0x20) = uVar1;
    if (uVar4 < 100000 && 99999 < uVar1) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
      func_0x0001083e64c0(auStack_78);
      func_0x0001004c3cd0(auStack_60,&UNK_10f493022,auStack_78);
      func_0x00010048a6c8(&ppppuStack_48,auStack_60,&UNK_10f49302d);
      if (-1 < (char)bStack_31) {
        uStack_40 = (ulong)bStack_31;
        ppppuStack_48 = &ppppuStack_48;
      }
      FUN_1083c8a60(uVar3,param_3,ppppuStack_48,uStack_40);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
    }
  }
  else if (*(char *)(param_2 + 0x38) != '\x03') {
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x10);
    uVar1 = 0;
    FUN_1083c8ae0(&UNK_10f491d06,0x25,&UNK_10df20bcd,8);
    if ((uVar1 & 1) == 0) {
      *(int *)(plVar2 + 3) = (int)plVar2[3] + 1;
                    /* WARNING: Could not recover jumptable at 0x0001083c8adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2,&UNK_10f491d06,0x25,param_3 & 0xffffffff);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1083e5dc8; end: 1083e5ddb;  */

void FUN_1083e5dc8(void)

{
  FUN_1083e5c34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083e5ddc; end: 1083e5de3;  */

undefined8 FUN_1083e5ddc(void)

{
  return 0;
}



/* Entry: 1083e5de4; end: 1083e5e1b;  */

undefined8 * FUN_1083e5de4(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = param_1;
  FUN_1083e5e1c(0);
  return puVar1;
}



/* Entry: 1083e5e1c; end: 1083e5e27;  */

void FUN_1083e5e1c(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083e5e28; end: 1083e5e93;  */

void FUN_1083e5e28(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  *param_1 = 0;
  return;
}



/* Entry: 1083e5e94; end: 1083e5f83;  */

void FUN_1083e5e94(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  FUN_1083c3394(*param_3,1,0);
  lVar1 = *param_2;
  lStack_50 = *param_3;
  *param_3 = 0;
  uStack_58 = *param_4;
  *param_4 = 0;
  FUN_1083e6114(auStack_48,param_2,&lStack_50,0xf,&uStack_58);
  FUN_1083dec3c(param_1,lVar1,auStack_48);
  func_0x0001083e6500();
  if (lVar1 != 0) {
    FUN_1083e6408();
  }
  func_0x0001083e6450();
  if (lVar1 != 0) {
    FUN_1083e6408();
  }
  lVar1 = lStack_50;
  lStack_50 = 0;
  if (lVar1 != 0) {
    FUN_1083e6408();
  }
  return;
}



/* Entry: 1083e5f84; end: 1083e5ffb;  */

void FUN_1083e5f84(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auStack_38 [8];
  
  lVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_2[1] + 0x30);
  FUN_1083e61f4(auStack_38,param_2,*(undefined8 *)(param_2[1] + 0x28));
  FUN_1083df484(param_1,lVar2,0xffffff,auStack_38,uVar1,1);
  func_0x0001083e6450();
  if (lVar2 != 0) {
    func_0x0001083e6408();
  }
  return;
}



/* Entry: 1083e5ffc; end: 1083e6083;  */

void FUN_1083e5ffc(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *param_3;
  *param_3 = 0;
  uStack_30 = *param_4;
  *param_4 = 0;
  FUN_1083e6114(param_1,param_2,&uStack_28,2,&uStack_30);
  func_0x0001083e650c();
  if (param_2 != 0) {
    FUN_1083e6408();
  }
  func_0x0001083e6450();
  if (param_2 != 0) {
    FUN_1083e6408();
  }
  return;
}



/* Entry: 1083e6084; end: 1083e6103;  */

void FUN_1083e6084(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined4 uVar1;
  undefined1 auStack_3d [4];
  undefined1 uStack_39;
  long lStack_38;
  
  lStack_38 = *param_3;
  uVar1 = *(undefined4 *)(lStack_38 + 8);
  *param_3 = 0;
  uStack_39 = *(undefined1 *)(param_4 + 4);
  _memcpy(auStack_3d,param_4);
  FUN_1083ecbe0(param_1,param_2,uVar1,&lStack_38,auStack_3d);
  func_0x0001083e6450();
  if (param_2 != 0) {
    func_0x0001083e6408();
  }
  return;
}



/* Entry: 1083e6104; end: 1083e6113;  */

void FUN_1083e6104(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  
  uStack_34 = 0xffffff;
  switch(*(undefined4 *)(param_3 + 0xc)) {
  case 8:
    FUN_1083e6200(&lStack_40,0xffffff,*(undefined8 *)(param_3 + 0x28),0);
    lStack_50 = lStack_40;
    lStack_40 = 0;
    FUN_1083df484(param_1,param_2,0xffffff,&lStack_50,*(undefined4 *)(param_3 + 0x30),1);
    lVar1 = lStack_50;
    lStack_50 = 0;
    if (lVar1 != 0) {
      func_0x0001083edc58();
    }
    lVar1 = lStack_40;
    lStack_40 = 0;
    if (lVar1 != 0) {
      func_0x0001083edc58();
    }
    break;
  case 9:
    lStack_48 = param_3;
    FUN_1083edb58(&lStack_40,param_2,&uStack_34,&lStack_48);
    func_0x0001083edc70();
    FUN_1083edc18();
    break;
  case 10:
    FUN_1083f2f08(&lStack_40,param_2,0xffffff,param_3);
    func_0x0001083edc70();
    func_0x0001083e74b4();
    break;
  case 0xb:
    uStack_34 = 0xffffff;
    FUN_1083e6258(&lStack_40,&stack0xffffffffffffffdc,&stack0xffffffffffffffd0,(long)&uStack_34 + 3)
    ;
    lVar1 = lStack_40;
    lStack_40 = 0;
    *param_1 = lVar1;
    FUN_1083e62c4(&lStack_40);
    return;
  default:
    *param_1 = 0;
  }
  return;
}



/* Entry: 1083e6114; end: 1083e61f3;  */

void FUN_1083e6114(undefined8 param_1,undefined8 *param_2,long *param_3,undefined1 param_4,
                  long *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lStack_50;
  long *plStack_48;
  
  uVar1 = *param_3 + 8;
  FUN_1083d0cc4(uVar1,*(undefined4 *)(*param_5 + 8));
  uVar2 = *param_2;
  plStack_48 = (long *)*param_3;
  *param_3 = 0;
  lStack_50 = *param_5;
  *param_5 = 0;
  FUN_1083d9b94(param_1,uVar2,uVar1 & 0xffffffff,&plStack_48,param_4,&lStack_50);
  if (lStack_50 != 0) {
    FUN_1083e6408();
  }
  if (plStack_48 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001083e61b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_48 + 8))();
    return;
  }
  return;
}



/* Entry: 1083e61f4; end: 1083e61ff;  */

void FUN_1083e61f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_24 = 0xffffff;
  uStack_31 = 0;
  uStack_30 = param_3;
  FUN_1083e6258(&uStack_40,&uStack_24,&uStack_30,&uStack_31);
  uVar1 = uStack_40;
  uStack_40 = 0;
  *param_1 = uVar1;
  FUN_1083e62c4(&uStack_40);
  return;
}



/* Entry: 1083e6200; end: 1083e6257;  */

void FUN_1083e6200(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_31 = param_4;
  uStack_30 = param_3;
  uStack_24 = param_2;
  FUN_1083e6258(&uStack_40,&uStack_24,&uStack_30,&uStack_31);
  uVar1 = uStack_40;
  uStack_40 = 0;
  *param_1 = uVar1;
  FUN_1083e62c4(&uStack_40);
  return;
}



/* Entry: 1083e6258; end: 1083e62c3;  */

void FUN_1083e6258(undefined8 *param_1,undefined4 *param_2,long *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)0x28;
  FUN_1083d3a60();
  lVar3 = *param_3;
  uVar1 = *param_4;
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined4 *)(puVar2 + 1) = *param_2;
  *(undefined4 *)((long)puVar2 + 0xc) = 0x32;
  *puVar2 = &PTR_FUN_110a471b8;
  puVar2[2] = uVar4;
  puVar2[3] = lVar3;
  *(undefined1 *)(puVar2 + 4) = uVar1;
  *param_1 = puVar2;
  return;
}



/* Entry: 1083e62c4; end: 1083e62e7;  */

undefined8 FUN_1083e62c4(undefined8 param_1)

{
  FUN_1083e62e8(param_1,0);
  return param_1;
}



/* Entry: 1083e62e8; end: 1083e6327;  */

void FUN_1083e62e8(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  FUN_1083d3bc4(plVar1);
  if (*plVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083e6328; end: 1083e6363;  */

void FUN_1083e6328(void)

{
  func_0x0001083e64f4();
  return;
}



/* Entry: 1083e6364; end: 1083e6407;  */

void FUN_1083e6364(undefined8 param_1,long param_2)

{
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  FUN_1083e43a8(auStack_50,*(undefined8 *)(param_2 + 0x10));
  func_0x00010048a6c8(auStack_38,auStack_50," ");
  (**(code **)(**(long **)(param_2 + 0x18) + 0x10))(auStack_68);
  func_0x00010533a9c0(param_1,auStack_38,auStack_68);
  func_0x0001083e6498();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  func_0x0001083e6448();
  return;
}



/* Entry: 1083e6408; end: 1083e64c7;  */

void FUN_1083e6408(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083e6410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083e64c8; end: 1083e64df;  */

void FUN_1083e64c8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001083e6300(param_1,param_2,2);
  return;
}



/* Entry: 1083e64e0; end: 1083e6517;  */

void FUN_1083e64e0(void)

{
  long unaff_x29;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x29 + -0xb8);
  return;
}



/* Entry: 1083e6518; end: 1083e667f;  */

void FUN_1083e6518(undefined8 *param_1,long param_2)

{
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  (**(code **)(**(long **)(param_2 + 0x10) + 0x38))(auStack_80,*(long **)(param_2 + 0x10),0x11);
  func_0x0001004c3cd0(auStack_68,&UNK_10f48d1a9,auStack_80);
  func_0x00010048a6c8(auStack_50,auStack_68,&UNK_10f48d1ae);
  (**(code **)(**(long **)(param_2 + 0x18) + 0x10))(auStack_98);
  func_0x00010533a9c0(auStack_38,auStack_50,auStack_98);
  func_0x0001083e6ad4();
  func_0x0001083e6ac0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  func_0x0001083e6ae0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  if (*(long **)(param_2 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x20) + 0x10))(auStack_50);
    func_0x0001004c3cd0(auStack_38,&UNK_10f48d1b1,auStack_50);
    func_0x0001083e6ad4();
    func_0x0001083e6ac0();
    func_0x0001083e6ae0();
  }
  return;
}



/* Entry: 1083e6680; end: 1083e67fb;  */

void FUN_1083e6680(undefined8 *param_1,long *param_2,undefined4 param_3,long *param_4,long *param_5,
                  long *param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(*param_2 + 0xc0);
  lStack_50 = *param_4;
  *param_4 = 0;
  FUN_1083f1310(&lStack_48,uVar1,&lStack_50,param_2);
  lVar3 = lStack_48;
  lStack_48 = 0;
  lVar2 = *param_4;
  *param_4 = lVar3;
  if (lVar2 != 0) {
    FUN_1083e6ab4();
    lVar3 = lStack_48;
    lStack_48 = 0;
    if (lVar3 != 0) {
      FUN_1083e6ab4();
    }
  }
  lVar3 = lStack_50;
  lStack_50 = 0;
  if (lVar3 != 0) {
    FUN_1083e6ab4();
  }
  if (*param_4 != 0) {
    lVar3 = *param_5;
    FUN_1083c3050(lVar3,param_2[2]);
    if (((int)lVar3 == 0) &&
       ((lVar3 = *param_6, lVar3 == 0 || (FUN_1083c3050(lVar3,param_2[2]), (int)lVar3 == 0)))) {
      lStack_58 = *param_4;
      *param_4 = 0;
      lStack_60 = *param_5;
      *param_5 = 0;
      lStack_68 = *param_6;
      *param_6 = 0;
      FUN_1083e67fc(param_1,param_2,param_3,&lStack_58,&lStack_60,&lStack_68);
      if (lStack_68 != 0) {
        FUN_1083e6ab4();
      }
      if (lStack_60 != 0) {
        FUN_1083e6ab4();
      }
      if (lStack_58 == 0) {
        return;
      }
      FUN_1083e6ab4();
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1083e67fc; end: 1083e6a37;  */

void FUN_1083e67fc(undefined8 *param_1,long param_2,undefined4 param_3,long *param_4,long *param_5,
                  long *param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  
  if (*(char *)(*(long *)(param_2 + 8) + 0x1c) == '\x01') {
    lVar2 = *param_5;
    func_0x0001083e6ac8();
    lVar3 = *param_6;
    if (lVar3 == 0) {
      lVar3 = 1;
    }
    else {
      func_0x0001083e6ac8();
    }
    lVar4 = *param_4;
    if (((uint)lVar2 & (uint)lVar3) == 1) {
      *param_4 = 0;
      lStack_58 = lVar4;
      FUN_1083dec3c(param_1,param_2,&lStack_58);
      lVar2 = lStack_58;
      lStack_58 = 0;
      if (lVar2 == 0) {
        return;
      }
      func_0x0001083e6ab4();
      return;
    }
    func_0x0001083c6674();
    lVar5 = lVar4;
    FUN_1083c74d4();
    if ((int)lVar5 != 0) {
      if (*(double *)(lVar4 + 0x18) == 0.0) {
        plStack_68 = (long *)*param_6;
        *param_6 = 0;
        FUN_1083e6a38(param_1,&plStack_68,lVar3);
        plVar1 = plStack_68;
      }
      else {
        plStack_60 = (long *)*param_5;
        *param_5 = 0;
        FUN_1083e6a38(param_1,&plStack_60,lVar2);
        plVar1 = plStack_60;
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001083e69e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))();
      return;
    }
    lStack_78 = *param_5;
    *param_5 = 0;
    FUN_1083e6a38(&lStack_70,&lStack_78,lVar2);
    lVar2 = lStack_70;
    lStack_70 = 0;
    lVar4 = *param_5;
    *param_5 = lVar2;
    if (lVar4 != 0) {
      func_0x0001083e6ab4();
      lVar2 = lStack_70;
      lStack_70 = 0;
      if (lVar2 != 0) {
        func_0x0001083e6ab4();
      }
    }
    if (lStack_78 != 0) {
      func_0x0001083e6ab4();
    }
    if (((uint)lVar3 != 0) && (lVar2 = *param_6, *param_6 = 0, lVar2 != 0)) {
      func_0x0001083e6ab4();
    }
  }
  puVar6 = (undefined8 *)0x28;
  FUN_1083d3a60();
  lVar2 = *param_4;
  *param_4 = 0;
  lVar3 = *param_5;
  *param_5 = 0;
  lVar4 = *param_6;
  *param_6 = 0;
  *(undefined4 *)(puVar6 + 1) = param_3;
  *(undefined4 *)((long)puVar6 + 0xc) = 0x13;
  *puVar6 = &PTR_DAT_110a45740;
  puVar6[2] = lVar2;
  puVar6[3] = lVar3;
  puVar6[4] = lVar4;
  *param_1 = puVar6;
  return;
}



/* Entry: 1083e6a38; end: 1083e6a67;  */

void FUN_1083e6a38(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && ((param_3 == 0 || (*(int *)(lVar1 + 0xc) == 0x14)))) {
    *param_2 = 0;
    *param_1 = lVar1;
    return;
  }
  FUN_1083d25b8(&lStack_28);
  lVar1 = lStack_28;
  lStack_28 = 0;
  *param_1 = lVar1;
  FUN_1083d2618(&lStack_28);
  return;
}



/* Entry: 1083e6a68; end: 1083e6a7b;  */

void FUN_1083e6a68(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083e6a7c();
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083e6a7c; end: 1083e6ab3;  */

long FUN_1083e6a7c(long param_1)

{
  func_0x0001082da4ec(param_1 + 0x20);
  func_0x0001082da4ec(param_1 + 0x18);
  FUN_1083c8734(param_1 + 0x10);
  return param_1;
}



/* Entry: 1083e6ab4; end: 1083e6ae7;  */

void FUN_1083e6ab4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083e6abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083e6ae8; end: 1083e6de7;  */

void FUN_1083e6ae8(long *param_1,long *param_2,undefined4 param_3,long *param_4,long *param_5)

{
  undefined4 uVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 ***pppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  long lStack_48;
  
  lVar5 = *param_4;
  if (*(int *)(lVar5 + 0xc) == 0x31) {
    lVar7 = *(long *)(lVar5 + 0x18);
    lStack_48 = *param_5;
    *param_5 = 0;
    lVar5 = lVar7;
    FUN_1083f1980(lVar7,param_2,param_3,&lStack_48);
    if (lStack_48 != 0) {
      func_0x0001083e74f4();
    }
    if (lVar5 != 0) {
      lVar3 = param_2[4];
      FUN_1083ee1f4(lVar3,param_2,lVar7,lVar5);
      FUN_1083f2f08(&pppuStack_60,param_2,param_3,lVar3);
      pppuVar2 = pppuStack_60;
      pppuStack_60 = (undefined8 ***)0x0;
      *param_1 = (long)pppuVar2;
      func_0x0001083e74b4(&pppuStack_60);
      return;
    }
  }
  else {
    plVar8 = *(long **)(lVar5 + 0x10);
    plVar4 = param_2;
    func_0x0001083e7500(*(undefined8 *)(*plVar8 + 0xe0));
    if (((((ulong)plVar4 & 1) == 0) &&
        (func_0x0001083e7500(*(undefined8 *)(*plVar8 + 0xd8)), ((ulong)plVar4 & 1) == 0)) &&
       (func_0x0001083e7500(*(undefined8 *)(*plVar8 + 0xd0)), ((ulong)plVar4 & 1) == 0)) {
      lVar5 = param_2[2];
      uVar1 = *(undefined4 *)(*param_4 + 8);
      FUN_10831d8f8(auStack_90,plVar8);
      func_0x0001004c3cd0(auStack_78,&UNK_10f493152,auStack_90);
      func_0x00010048a6c8(&pppuStack_60,auStack_78,&DAT_10f638984);
      if (-1 < (char)bStack_49) {
        uStack_58 = (ulong)bStack_49;
        pppuStack_60 = &pppuStack_60;
      }
      FUN_1083c8a60(lVar5,uVar1,pppuStack_60,uStack_58);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_60);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
    }
    else {
      plVar4 = *(long **)(*param_5 + 0x10);
      (**(code **)(*plVar4 + 0x40))();
      lVar5 = *param_5;
      if (1 < ((int)plVar4 - 1U & 0xff)) {
        uVar6 = *(undefined8 *)(*param_2 + 0x40);
        *param_5 = 0;
        lStack_98 = lVar5;
        FUN_1083f1310(&pppuStack_60,uVar6,&lStack_98,param_2);
        pppuVar2 = pppuStack_60;
        pppuStack_60 = (undefined8 ****)0x0;
        lVar5 = *param_5;
        *param_5 = (long)pppuVar2;
        if (lVar5 != 0) {
          func_0x0001083e74f4();
          pppuVar2 = pppuStack_60;
          pppuStack_60 = (undefined8 ****)0x0;
          if ((undefined8 ****)pppuVar2 != (undefined8 ****)0x0) {
            func_0x0001083e74f4();
          }
        }
        lVar5 = lStack_98;
        lStack_98 = 0;
        if (lVar5 != 0) {
          func_0x0001083e74f4();
        }
        lVar5 = *param_5;
        if (lVar5 == 0) goto LAB_1083e6d58;
      }
      func_0x0001083c6674();
      lVar7 = lVar5;
      FUN_1083c6698();
      if (((int)lVar7 == 0) ||
         (plVar4 = param_2,
         FUN_1083e6de8(param_2,*(undefined4 *)(*param_5 + 8),(long)*(double *)(lVar5 + 0x18),
                       *param_4), (int)plVar4 == 0)) {
        lStack_a0 = *param_4;
        *param_4 = 0;
        lStack_a8 = *param_5;
        *param_5 = 0;
        FUN_1083e6f50(param_1,param_2,param_3,&lStack_a0,&lStack_a8);
        if (lStack_a8 != 0) {
          func_0x0001083e74f4();
        }
        if (lStack_a0 == 0) {
          return;
        }
        func_0x0001083e74f4();
        return;
      }
    }
  }
LAB_1083e6d58:
  *param_1 = 0;
  return;
}



/* Entry: 1083e6de8; end: 1083e6f4f;  */

undefined8 FUN_1083e6de8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  if (-1 < param_3) {
    lVar2 = param_1;
    func_0x0001083e7518();
    iVar1 = (int)lVar2;
    if ((iVar1 == -1) || (func_0x0001083e7518(), param_3 < iVar1)) {
      return 0;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  __ZNSt3__19to_stringEx(auStack_a8,param_3);
  func_0x0001004c3cd0(auStack_90,&UNK_10f49316e,auStack_a8);
  func_0x00010048a6c8(auStack_78,auStack_90,&UNK_10f493175);
  FUN_10831d8f8(auStack_c0,*(undefined8 *)(param_4 + 0x10));
  func_0x00010533a9c0(auStack_60,auStack_78,auStack_c0);
  func_0x00010048a6c8(&ppuStack_48,auStack_60,&DAT_10f638984);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppuStack_48 = &ppuStack_48;
  }
  FUN_1083c8a60(uVar3,param_2,ppuStack_48,uStack_40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  func_0x0001083e7510();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  func_0x0001083e7530();
  func_0x0001083e7508();
  return 1;
}



/* Entry: 1083e6f50; end: 1083e72cb;  */

void FUN_1083e6f50(undefined8 *param_1,long *param_2,undefined4 param_3,ulong *param_4,long *param_5
                  )

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 in_ZR;
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  undefined1 uStack_91;
  ulong uStack_90;
  ulong auStack_88 [4];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = *(long **)(*param_4 + 0x10);
  lVar3 = *param_5;
  func_0x0001083c6674();
  lVar10 = lVar3;
  FUN_1083c6698();
  if ((int)lVar10 == 0) {
LAB_1083e6fd4:
    plVar4 = (long *)0x28;
    FUN_1083d3a60();
    uVar7 = *param_4;
    *param_4 = 0;
    lVar10 = *param_5;
    *param_5 = 0;
    plVar8 = *(long **)(uVar7 + 0x10);
    plVar9 = plVar4;
    func_0x0001083e7550(*(undefined8 *)(*plVar8 + 0xd8));
    if ((int)plVar9 == 0) {
LAB_1083e70f0:
      func_0x0001083e7558(*(undefined8 *)(*plVar8 + 0x50));
    }
    else {
      func_0x0001083e7558(*(undefined8 *)(*plVar8 + 0x50));
      (**(code **)(*plVar9 + 0x38))();
      if ((int)plVar9 == 0) {
        func_0x0001083e7558(*(undefined8 *)(*plVar8 + 0x50));
        (**(code **)(*plVar9 + 0x38))();
        if ((int)plVar9 != 0) {
          func_0x0001083e7550(*(undefined8 *)(*plVar8 + 0x68));
          uVar5 = (int)plVar9 - 2;
          in_ZR = uVar5 == 3;
          if (uVar5 < 3) {
            lVar3 = 0x28;
            goto LAB_1083e70e0;
          }
        }
        goto LAB_1083e70f0;
      }
      func_0x0001083e7550(*(undefined8 *)(*plVar8 + 0x68));
      uVar5 = (int)plVar9 - 2;
      in_ZR = uVar5 == 3;
      if (2 < uVar5) goto LAB_1083e70f0;
      lVar3 = 8;
LAB_1083e70e0:
      plVar9 = *(long **)(*param_2 + lVar3 + (ulong)uVar5 * 8);
    }
    *(undefined4 *)(plVar4 + 1) = param_3;
    *(undefined4 *)((long)plVar4 + 0xc) = 0x28;
    *plVar4 = (long)&PTR_FUN_110a45788;
    plVar4[2] = (long)plVar9;
    plVar4[3] = uVar7;
    plVar4[4] = lVar10;
    *param_1 = plVar4;
LAB_1083e711c:
    func_0x0001083e7538();
    if ((bool)in_ZR) {
      return;
    }
  }
  else {
    uVar7 = (ulong)*(double *)(lVar3 + 0x18);
    plVar4 = param_2;
    FUN_1083e6de8(param_2,*(undefined4 *)(*param_5 + 8),uVar7,*param_4);
    if (((ulong)plVar4 & 1) != 0) goto LAB_1083e6fd4;
    func_0x0001083e7500(*(undefined8 *)(*plVar9 + 0xd0));
    iVar6 = (int)uVar7;
    if ((int)plVar4 != 0) {
      uStack_90 = *param_4;
      *param_4 = 0;
      uStack_91 = (undefined1)uVar7;
      func_0x0001083e6300(auStack_88,&uStack_91,1);
      FUN_1083ecbe0(param_1,param_2,param_3,&uStack_90,auStack_88);
      uVar7 = uStack_90;
      uStack_90 = 0;
      if (uVar7 != 0) {
        func_0x0001083e74f4();
      }
      goto LAB_1083e711c;
    }
    func_0x0001083e7500(*(undefined8 *)(*plVar9 + 0xe0));
    if ((int)plVar4 == 0) {
LAB_1083e71c8:
      iVar2 = (int)plVar4;
      func_0x0001083e7500(*(undefined8 *)(*plVar9 + 0xd8));
      if (iVar2 != 0) {
        uVar7 = *param_4;
        FUN_1083d64e8();
        if ((uVar7 & 1) == 0) {
          plVar8 = (long *)*param_4;
          func_0x0001083c6674();
          plVar4 = plVar8;
          func_0x0001083e7500(*(undefined8 *)(*plVar9 + 0x68));
          FUN_108327620(plVar9,param_2);
          lVar10 = 0;
          uVar11 = (uint)plVar4;
          uVar5 = uVar11 * iVar6;
          while( true ) {
            uVar7 = (ulong)uVar5;
            in_ZR = (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) << 3 == lVar10;
            if ((bool)in_ZR) break;
            plVar4 = plVar8;
            (**(code **)(*plVar8 + 0x28))();
            if ((uVar7 & 1) == 0) goto LAB_1083e6fd4;
            *(long **)((long)auStack_88 + lVar10) = plVar4;
            uVar5 = uVar5 + 1;
            lVar10 = lVar10 + 8;
          }
          FUN_1083dcad4(param_1,param_2,param_3,plVar9,auStack_88);
          goto LAB_1083e711c;
        }
      }
      goto LAB_1083e6fd4;
    }
    plVar4 = (long *)*param_4;
    FUN_1083d64e8();
    if (((ulong)plVar4 & 1) != 0) goto LAB_1083e71c8;
    plVar4 = (long *)*param_4;
    func_0x0001083c6674();
    in_ZR = *(int *)((long)plVar4 + 0xc) == 0x1b;
    if (!(bool)in_ZR) goto LAB_1083e71c8;
    if ((iVar6 < 0) || (bVar1 = (int)plVar4[6] == iVar6, (int)plVar4[6] <= iVar6))
    goto LAB_1083e7274;
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(plVar4[5] + (uVar7 & 0x7fffffff) * 8) + 0x30);
    func_0x0001083e7538();
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001083e71c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return;
    }
  }
  ___stack_chk_fail();
LAB_1083e7274:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1083e7278);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 1083e72cc; end: 1083e73a3;  */

void FUN_1083e72cc(undefined8 param_1,long param_2)

{
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  (**(code **)(**(long **)(param_2 + 0x18) + 0x38))(auStack_68,*(long **)(param_2 + 0x18),2);
  func_0x00010048a6c8(auStack_50,auStack_68,&DAT_10f62a9e8);
  (**(code **)(**(long **)(param_2 + 0x20) + 0x38))(auStack_80,*(long **)(param_2 + 0x20),0x11);
  func_0x00010533a9c0(auStack_38,auStack_50,auStack_80);
  func_0x00010048a6c8(param_1,auStack_38,&DAT_10f62a9ea);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  func_0x0001083e7510();
  func_0x0001083e7530();
  func_0x0001083e7508();
  return;
}



/* Entry: 1083e73a4; end: 1083e73a7;  */

long FUN_1083e73a4(long param_1)

{
  FUN_1083c8734(param_1 + 0x20);
  FUN_1083c8734(param_1 + 0x18);
  return param_1;
}



/* Entry: 1083e73a8; end: 1083e73bb;  */

void FUN_1083e73a8(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083e7484();
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083e73bc; end: 1083e7483;  */

void FUN_1083e73bc(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0x28;
  FUN_1083d3a60();
  plVar2 = *(long **)(param_2 + 0x18);
  (**(code **)(*plVar2 + 0x30))(&uStack_38,plVar2,(int)plVar2[1]);
  plVar2 = *(long **)(param_2 + 0x20);
  (**(code **)(*plVar2 + 0x30))(&uStack_40,plVar2,(int)plVar2[1]);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(puVar1 + 1) = param_3;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x28;
  *puVar1 = &PTR_FUN_110a45788;
  puVar1[2] = uVar3;
  puVar1[3] = uStack_38;
  puVar1[4] = uStack_40;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083e7484; end: 1083e74db;  */

long FUN_1083e7484(long param_1)

{
  FUN_1083c8734(param_1 + 0x20);
  FUN_1083c8734(param_1 + 0x18);
  return param_1;
}



/* Entry: 1083e74dc; end: 1083e755f;  */

void FUN_1083e74dc(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 extraout_x8;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  FUN_1083d3bc4(plVar1);
  if (*plVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083e7560; end: 1083e7597;  */

long FUN_1083e7560(long param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  }
  return param_1;
}



/* Entry: 1083e7598; end: 1083e759b;  */

long FUN_1083e7598(long param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  }
  return param_1;
}



/* Entry: 1083e759c; end: 1083e75af;  */

void FUN_1083e759c(long *param_1)

{
  undefined8 extraout_x8;
  
  FUN_1083e7560();
  FUN_1083d3bc4(param_1);
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
  return;
}



/* Entry: 1083e75b0; end: 1083e7a3b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1083e75b0(undefined8 *param_1,long *param_2,undefined4 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7,undefined8 param_8,
                  undefined8 param_9,int param_10)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  int iVar19;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  long alStack_80 [3];
  undefined8 *puStack_68;
  
  if (*(byte *)(param_2[1] + 1) < 7) {
    lVar7 = param_7[1];
    puVar10 = (undefined8 *)(*param_7 + 0x48);
    for (uVar16 = 0; (long)(int)lVar7 != uVar16; uVar16 = uVar16 + 1) {
      uVar5 = puVar10[-1];
      func_0x000107c27944(uVar5,*puVar10,&UNK_10df16584,0xb);
      if ((uVar5 & 1) != 0) {
        if (((int)uVar16 < 0) || ((int)param_7[1] <= (int)uVar16)) goto LAB_1083e7998;
        puVar14 = (undefined4 *)(*param_7 + (uVar16 & 0x7fffffff) * 0x58);
        plVar6 = *(long **)(puVar14 + 0x14);
        (**(code **)(*plVar6 + 0x38))(plVar6,*(undefined8 *)(*param_2 + 0x18));
        if (((ulong)plVar6 & 1) == 0) {
          FUN_1083c8a60(param_2[2],*puVar14,&UNK_10f4931c2,0x23);
          *param_1 = 0;
          return;
        }
        break;
      }
      puVar10 = puVar10 + 0xb;
    }
    lVar15 = param_2[4];
    FUN_1083d2d60(auStack_90,param_7);
    FUN_1083efbdc(alStack_80,param_2,param_3,param_5,param_6,auStack_90,1);
    FUN_1083e7a3c(lVar15,param_2,alStack_80);
    lVar7 = alStack_80[0];
    alStack_80[0] = 0;
    if (lVar7 != 0) {
      FUN_1083e7e70();
    }
    func_0x0001083d2d14(auStack_90);
    lVar7 = lVar15;
    if (0 < param_10) {
      FUN_1083f1a78(lVar15,param_2,param_3,param_3,param_10);
      if ((int)lVar7 == 0) goto LAB_1083e765c;
      lVar7 = param_2[4];
      FUN_1083ee1f4(lVar7,param_2,lVar15);
    }
    FUN_1083f32b4(param_2,param_3,*param_4,param_4 + 1,param_4[0xe],lVar7,lVar15,0);
    FUN_1083f44d0(&lStack_98,param_2,param_3,*param_4,param_4 + 1,param_4[0xe],lVar7,param_3);
    plVar8 = (long *)param_2[4];
    lStack_a0 = lStack_98;
    lStack_98 = 0;
    plVar6 = &lStack_a0;
    FUN_1083cb078();
    plVar9 = (long *)plVar8[4];
    (**(code **)(*plVar9 + 0x50))();
    (**(code **)(*plVar9 + 0x90))();
    if (plVar8[3] == 0) {
      lVar7 = 0;
      plVar12 = plVar6;
      for (plVar18 = (long *)0x0; plVar6 != plVar18; plVar18 = (long *)((long)plVar18 + 1)) {
        lVar17 = param_2[4];
        puVar10 = (undefined8 *)0x38;
        FUN_1083d3a60();
        lVar15 = *plVar9;
        plVar11 = (long *)plVar8[4];
        (**(code **)(*plVar11 + 0x90))();
        if (plVar12 <= (long *)(lVar7 >> 0x20)) {
LAB_1083e7998:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1083e799c);
          (*pcVar4)();
        }
        iVar19 = (int)((ulong)lVar7 >> 0x20);
        lVar1 = plVar11[(long)iVar19 * 0xb + 8];
        lVar2 = plVar11[(long)iVar19 * 0xb + 9];
        plVar11 = (long *)plVar8[4];
        (**(code **)(*plVar11 + 0x90))();
        if (plVar12 <= (long *)(lVar7 >> 0x20)) goto LAB_1083e7998;
        lVar13 = plVar11[(long)iVar19 * 0xb + 10];
        *(int *)(puVar10 + 1) = (int)lVar15;
        *(undefined4 *)((long)puVar10 + 0xc) = 8;
        puVar10[2] = lVar1;
        puVar10[3] = lVar2;
        *puVar10 = &PTR_FUN_110a45830;
        puVar10[4] = lVar13;
        puVar10[5] = plVar8;
        *(int *)(puVar10 + 6) = (int)plVar18;
        alStack_80[1] = 0;
        alStack_80[2] = 0;
        puStack_68 = puVar10;
        FUN_1083cae60(lVar17 + 8,&puStack_68);
        puVar3 = puStack_68;
        puStack_68 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          FUN_1083e7e70();
        }
        plVar12 = param_2;
        FUN_1083eddb8(lVar17,param_2,puVar10);
        FUN_1083e7e40(alStack_80 + 2);
        FUN_1083e7e40(alStack_80 + 1);
        lVar7 = lVar7 + 0x100000000;
        plVar9 = plVar9 + 0xb;
      }
    }
    else {
      FUN_1083eddb8(param_2[4],param_2,plVar8);
    }
    puVar10 = (undefined8 *)0x18;
    FUN_1083d3a60();
    *(undefined4 *)(puVar10 + 1) = param_3;
    *(undefined4 *)((long)puVar10 + 0xc) = 4;
    *puVar10 = &PTR_FUN_110a457f0;
    puVar10[2] = plVar8;
    (**(code **)(*plVar8 + 0x28))(plVar8,puVar10);
    lVar7 = lStack_a0;
    *param_1 = puVar10;
    lStack_a0 = 0;
    if (lVar7 != 0) {
      FUN_1083e7e70();
    }
    lVar7 = lStack_98;
    lStack_98 = 0;
    if (lVar7 != 0) {
      FUN_1083e7e70();
    }
  }
  else {
    FUN_1083c8a60(param_2[2],param_3,&UNK_10f493189,0x38);
LAB_1083e765c:
    *param_1 = 0;
  }
  return;
}



/* Entry: 1083e7a3c; end: 1083e7abb;  */

long FUN_1083e7a3c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_38;
  
  lVar3 = *param_3;
  *param_3 = 0;
  uVar2 = param_1;
  lStack_38 = lVar3;
  FUN_1083cae14(param_1,&lStack_38);
  FUN_1083eddb8(param_1,param_2,uVar2);
  lVar1 = lStack_38;
  lStack_38 = 0;
  if (lVar1 != 0) {
    FUN_1083e7e70();
  }
  return lVar3;
}



/* Entry: 1083e7abc; end: 1083e7d5b;  */

void FUN_1083e7abc(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [28];
  undefined4 uStack_d4;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  (**(code **)(**(long **)(param_2 + 0x10) + 0x18))();
  FUN_1083e8484(auStack_b8);
  uStack_d4 = *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x30);
  FUN_1083e8b44(auStack_d0,&uStack_d4);
  func_0x00010533a9c0(&uStack_a0,auStack_b8,auStack_d0);
  uVar2 = 0x20;
  func_0x000107525ea8(auStack_88,&uStack_a0);
  lVar5 = param_2;
  FUN_108328d14();
  lStack_100 = lVar5;
  uStack_f8 = uVar2;
  func_0x000107c27958(auStack_f0,&lStack_100);
  func_0x00010533a9c0(auStack_70,auStack_88,auStack_f0);
  pcVar3 = " {\n";
  func_0x00010048a6c8(auStack_58,auStack_70);
  func_0x0001083e7e7c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  func_0x0001083e7e84();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  plVar4 = *(long **)(*(long *)(param_2 + 0x10) + 0x20);
  plVar1 = plVar4;
  (**(code **)(*plVar4 + 0xe0))();
  if ((int)plVar1 != 0) {
    (**(code **)(*plVar4 + 0x50))();
  }
  (**(code **)(*plVar4 + 0x90))(plVar4);
  for (lVar5 = (long)pcVar3 * 0x58; lVar5 != 0; lVar5 = lVar5 + -0x58) {
    FUN_1083f1b20(auStack_88,plVar4);
    func_0x00010048a6c8(auStack_70,auStack_88,&DAT_10f68f57e);
    func_0x0001083e7e94();
    func_0x0001083e7e7c();
    func_0x0001083e7e84();
    plVar4 = plVar4 + 0xb;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
            (auStack_58,&DAT_10f2da10d);
  lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0x18);
  if (lVar5 != 0) {
    uStack_a0 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
    lStack_98 = lVar5;
    func_0x000107c27958(auStack_88,&uStack_a0);
    func_0x0001004c3cd0(auStack_70," ",auStack_88);
    func_0x0001083e7e94();
    func_0x0001083e7e7c();
    func_0x0001083e7e84();
    FUN_10832929c();
    if (0 < (int)param_2) {
      FUN_10832929c();
      FUN_1083d416c(auStack_58,&UNK_10f4931e6);
    }
  }
  func_0x000100456794(param_1,auStack_58,";");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 1083e7d5c; end: 1083e7d63;  */

void FUN_1083e7d5c(void)

{
  return;
}



/* Entry: 1083e7d64; end: 1083e7e3f;  */

void FUN_1083e7d64(undefined8 param_1,long param_2)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(long **)(param_2 + 0x28))[3] == 0) {
    uStack_28 = *(undefined8 *)(param_2 + 0x18);
    uStack_30 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c27958(param_1,&uStack_30);
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x28) + 0x10))(auStack_60);
    func_0x00010048a6c8(auStack_48,auStack_60,&DAT_10f62a9de);
    uStack_88 = *(undefined8 *)(param_2 + 0x18);
    uStack_90 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c27958(auStack_78,&uStack_90);
    func_0x00010533a9c0(param_1,auStack_48,auStack_78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  }
  return;
}



/* Entry: 1083e7e40; end: 1083e7e6f;  */

long * FUN_1083e7e40(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1083d3a98();
  }
  return param_1;
}



/* Entry: 1083e7e70; end: 1083e7e9f;  */

void FUN_1083e7e70(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083e7e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083e7ea0; end: 1083e8483;  */

void FUN_1083e7ea0(undefined8 *param_1,uint *param_2)

{
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  uint uVar1;
  uint extraout_w8_05;
  uint extraout_w8_06;
  uint extraout_w8_07;
  long extraout_x8;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10831cc90();
  uVar1 = *param_2;
  if ((uVar1 >> 0xd & 1) != 0) {
    func_0x0001083e8798();
    func_0x0001083e87d0();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87d8();
    uVar1 = extraout_w8;
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    func_0x0001083e8798();
    func_0x0001083e87d0();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87d8();
    uVar1 = extraout_w8_00;
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    func_0x0001083e8798();
    func_0x0001083e87d0();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87d8();
    uVar1 = extraout_w8_01;
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    func_0x0001083e8798();
    func_0x0001083e87d0();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87d8();
    uVar1 = extraout_w8_02;
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    func_0x0001083e8798();
    func_0x0001083e87d0();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87d8();
    uVar1 = extraout_w8_03;
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    func_0x0001083e8798();
    func_0x0001083e87d0();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87d8();
    uVar1 = extraout_w8_04;
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    func_0x0001083e8798();
    func_0x0001083e87d0();
    func_0x0001083e878c();
    func_0x0001083e87a8();
  }
  if (-1 < (int)param_2[1]) {
    func_0x0001083e8798();
    func_0x0001083e87c8();
    func_0x0001083e87c0(param_2[1]);
    func_0x0001083e877c();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87b0();
    func_0x0001083e87b8();
  }
  if (-1 < (int)param_2[2]) {
    func_0x0001083e8798();
    func_0x0001083e87c8();
    func_0x0001083e87c0(param_2[2]);
    func_0x0001083e877c();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87b0();
    func_0x0001083e87b8();
  }
  if (-1 < (int)param_2[3]) {
    func_0x0001083e8798();
    func_0x0001083e87c8();
    func_0x0001083e87c0(param_2[3]);
    func_0x0001083e877c();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87b0();
    func_0x0001083e87b8();
  }
  if (-1 < (int)param_2[4]) {
    func_0x0001083e8798();
    func_0x0001083e87c8();
    func_0x0001083e87c0(param_2[4]);
    func_0x0001083e877c();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87b0();
    func_0x0001083e87b8();
  }
  if (-1 < (int)param_2[5]) {
    func_0x0001083e8798();
    func_0x0001083e87c8();
    func_0x0001083e87c0(param_2[5]);
    func_0x0001083e877c();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87b0();
    func_0x0001083e87b8();
  }
  if (-1 < (int)param_2[6]) {
    func_0x0001083e8798();
    func_0x0001083e87c8();
    func_0x0001083e87c0(param_2[6]);
    func_0x0001083e877c();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87b0();
    func_0x0001083e87b8();
  }
  if (-1 < (int)param_2[7]) {
    func_0x0001083e8798();
    func_0x0001083e87c8();
    func_0x0001083e87c0(param_2[7]);
    func_0x0001083e877c();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87b0();
    func_0x0001083e87b8();
  }
  if (-1 < (int)param_2[8]) {
    func_0x0001083e8798();
    func_0x0001083e87c8();
    func_0x0001083e87c0(param_2[8]);
    func_0x0001083e877c();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87b0();
    func_0x0001083e87b8();
  }
  if (-1 < (int)param_2[9]) {
    func_0x0001083e8798();
    func_0x0001083e87c8();
    func_0x0001083e87c0(param_2[9]);
    func_0x0001083e877c();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87b0();
    func_0x0001083e87b8();
  }
  uVar1 = *param_2;
  if ((uVar1 & 1) != 0) {
    func_0x0001083e8798();
    func_0x0001083e87d0();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87d8();
    uVar1 = extraout_w8_05;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    func_0x0001083e8798();
    func_0x0001083e87d0();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87d8();
    uVar1 = extraout_w8_06;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001083e8798();
    func_0x0001083e87d0();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87d8();
    uVar1 = extraout_w8_07;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    func_0x0001083e8798();
    func_0x0001083e87d0();
    func_0x0001083e878c();
    func_0x0001083e87a8();
  }
  if (-1 < (int)param_2[10]) {
    func_0x0001083e8798();
    func_0x0001083e87c8();
    func_0x0001083e87c0(param_2[10]);
    func_0x0001083e877c();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87b0();
    func_0x0001083e87b8();
  }
  if (-1 < (int)param_2[0xb]) {
    func_0x0001083e8798();
    func_0x0001083e87c8();
    func_0x0001083e87c0(param_2[0xb]);
    func_0x0001083e877c();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87b0();
    func_0x0001083e87b8();
  }
  if (-1 < (int)param_2[0xc]) {
    func_0x0001083e8798();
    func_0x0001083e87c8();
    func_0x0001083e87c0(param_2[0xc]);
    func_0x0001083e877c();
    func_0x0001083e878c();
    func_0x0001083e87a8();
    func_0x0001083e87b0();
    func_0x0001083e87b8();
  }
  func_0x0001083e87e4();
  if (extraout_x8 != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_60,&UNK_10f493287,param_1);
    func_0x00010048a6c8(auStack_48,auStack_60,&UNK_10f48d1ae);
    func_0x000107c27b9c(param_1,auStack_48);
    func_0x0001083e87a8();
    func_0x0001083e87b8();
  }
  return;
}



/* Entry: 1083e8484; end: 1083e84c7;  */

void FUN_1083e8484(undefined8 param_1)

{
  long extraout_x8;
  
  FUN_1083e7ea0();
  func_0x0001083e87e4();
  if (extraout_x8 != 0) {
    func_0x00010791316c(param_1);
  }
  return;
}



/* Entry: 1083e84c8; end: 1083e869f;  */

bool FUN_1083e84c8(uint *param_1,long param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 ****ppppuVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  
  uVar7 = *param_1;
  uVar1 = uVar7 & 0x1e000 & (uVar7 & 0x1e000) - 1;
  if (uVar1 != 0) {
    FUN_1083c8a60(*(undefined8 *)(param_2 + 0x10),param_3,&UNK_10f493290,0x26);
  }
  bVar5 = (uVar7 & 0xe0000 & (uVar7 & 0xe0000) - 1) != 0;
  if (bVar5) {
    FUN_1083c8a60(*(undefined8 *)(param_2 + 0x10),param_3,&UNK_10f4932b7,0x2b);
  }
  bVar5 = !bVar5 && uVar1 == 0;
  if (((uVar7 & 0x180) != 0) && ((uVar7 >> 6 & 1) != 0)) {
    FUN_1083c8a60(*(undefined8 *)(param_2 + 0x10),param_3,&UNK_10f4932e3,0x3a);
    bVar5 = false;
  }
  uVar1 = param_4 & 0xfffffe7f;
  if ((uVar7 & 0x1c000) != 0) {
    uVar1 = param_4;
  }
  uVar2 = uVar1 & 0xfffffffd;
  if ((uVar7 & 0xa000) != 0) {
    uVar2 = uVar1;
  }
  if ((uVar7 & 0x4000) != 0) {
    uVar2 = uVar2 & 0xfffffbff;
  }
  ppuVar8 = &PTR_DAT_110a45868;
  lVar9 = 0x170;
  do {
    uVar1 = *(uint *)(ppuVar8 + -1);
    if ((uVar1 & uVar7) != 0) {
      if ((uVar1 & uVar2) == 0) {
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        func_0x000107c278b8(auStack_a8,*ppuVar8);
        func_0x0001004c3cd0(auStack_90,&UNK_10f491e8c,auStack_a8);
        func_0x00010048a6c8(&pppuStack_78,auStack_90,&UNK_10f48e87b);
        uVar3 = uStack_70;
        ppppuVar4 = (undefined8 ****)pppuStack_78;
        if (-1 < (char)bStack_61) {
          uVar3 = (ulong)bStack_61;
          ppppuVar4 = &pppuStack_78;
        }
        FUN_1083c8a60(uVar6,param_3,ppppuVar4,uVar3);
        func_0x0001083e87a8();
        func_0x0001083e87b8();
        func_0x0001083e87b0();
        bVar5 = false;
      }
      uVar7 = uVar7 & (uVar1 ^ 0xffffffff);
    }
    lVar9 = lVar9 + -0x10;
    ppuVar8 = ppuVar8 + 2;
  } while (lVar9 != 0);
  return bVar5;
}



/* Entry: 1083e86a0; end: 1083e87fb;  */

bool FUN_1083e86a0(int *param_1,int *param_2)

{
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      ((((param_1[3] == param_2[3] && (param_1[4] == param_2[4])) &&
        ((param_1[5] == param_2[5] && ((param_1[6] == param_2[6] && (param_1[7] == param_2[7]))))))
       && (param_1[8] == param_2[8])))) &&
     (((param_1[9] == param_2[9] && (param_1[10] == param_2[10])) && (param_1[0xb] == param_2[0xb]))
     )) {
    return param_1[0xc] == param_2[0xc];
  }
  return false;
}



/* Entry: 1083e87fc; end: 1083e888f;  */

long * FUN_1083e87fc(long *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 unaff_x19;
  long *unaff_x20;
  long lVar5;
  float fVar6;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  double dStack_168;
  undefined1 auStack_160 [8];
  long alStack_158 [2];
  undefined8 uStack_148;
  undefined1 auStack_140 [256];
  
  iVar2 = (int)*(undefined8 *)(param_2 + 0x10);
  FUN_1083e897c();
  if (iVar2 == 3) {
    pcVar3 = "true";
    if (*(double *)(param_2 + 0x18) == 0.0) {
      pcVar3 = "false";
    }
    func_0x00010002b82c(param_1,pcVar3);
    func_0x000107c613d0(pcVar3);
    func_0x000107c60c50(unaff_x20,unaff_x19,pcVar3);
    return unaff_x20;
  }
  iVar2 = (int)*(undefined8 *)(param_2 + 0x10);
  FUN_1083e897c();
  if ((iVar2 - 1U & 0xff) < 2) {
    plVar4 = (long *)(long)*(double *)(param_2 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__19to_stringEx_110346958)(param_1,plVar4);
    return plVar4;
  }
  fVar6 = (float)*(double *)(param_2 + 0x18);
  plVar4 = alStack_158;
  func_0x000105680760(plVar4);
  lVar5 = *(long *)(alStack_158[0] + -0x18);
  __ZNSt3__16locale7classicEv();
  FUN_1083d3eac(auStack_160,(long)alStack_158 + lVar5,plVar4);
  __ZNSt3__16localeD1Ev(auStack_160);
  *(undefined8 *)((long)&uStack_148 + *(long *)(alStack_158[0] + -0x18)) = 7;
  func_0x0001083d423c();
  func_0x000107c28540(param_1,auStack_140);
  plVar4 = alStack_158;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd(plVar4,&dStack_168);
  bVar1 = true;
  if (((uint)ABS(fVar6) < 0x7f800000) && (bVar1 = false, !NAN(fVar6) && !NAN((float)dStack_168))) {
    bVar1 = fVar6 == (float)dStack_168;
  }
  if (!bVar1) {
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000100552dc8(auStack_140,&uStack_180);
    func_0x0001083d4234();
    __ZNSt3__18ios_base5clearEj((long)alStack_158 + *(long *)(alStack_158[0] + -0x18),0);
    *(undefined8 *)((long)&uStack_148 + *(long *)(alStack_158[0] + -0x18)) = 9;
    func_0x0001083d423c();
    func_0x000107c28540(&uStack_180,auStack_140);
    plVar4 = param_1;
    func_0x000107c27b9c(param_1,&uStack_180);
    func_0x0001083d4234();
  }
  func_0x0001083d4214();
  func_0x0001083d4194();
  if (((ulong)plVar4 & 1) == 0) {
    func_0x0001083d4214();
    func_0x0001083d4194();
    if (((ulong)plVar4 & 1) == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (param_1,&DAT_10f36c659);
    }
  }
  plVar4 = alStack_158;
  func_0x000105673d7c(plVar4);
  return plVar4;
}



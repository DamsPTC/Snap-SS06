/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003b47b8; end: 003b49b3;  */

undefined8 * FUN_003b47b8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  *param_1 = param_2;
  puVar5 = param_1;
  FUN_00338d88();
  uVar3 = (int)puVar5 << 1;
  uVar2 = uVar3;
  if (0x1f < uVar3) {
    uVar2 = 0x20;
  }
  if (uVar3 == 0) {
    uVar2 = 1;
  }
  param_1[1] = (ulong)uVar2;
  FUN_00339d50(param_1 + 2);
  puVar5 = (undefined8 *)*param_1;
  (**(code **)*puVar5)();
  param_1[10] = puVar5;
  FUN_00339d50(param_1 + 0xb);
  uVar7 = param_1[1];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7;
  puVar5 = (undefined8 *)(uVar7 * 0xe8 + 0x10);
  if (0xffffffffffffffef < uVar7 * 0xe8 || SUB168(auVar4 * ZEXT816(0xe8),8) != 0) {
    puVar5 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar5 = 0xe8;
  puVar5[1] = uVar7;
  if (uVar7 == 0) {
    lVar8 = 0;
    param_1[0x13] = puVar5 + 2;
    uVar7 = 0;
  }
  else {
    lVar8 = 0;
    do {
      FUN_003b4754((long)puVar5 + lVar8 + 0x10);
      lVar8 = lVar8 + 0xe8;
    } while (uVar7 * 0xe8 - lVar8 != 0);
    uVar7 = param_1[1];
    param_1[0x13] = puVar5 + 2;
    lVar8 = uVar7 << 3;
    if (uVar7 >> 0x3d != 0) {
      lVar8 = -1;
    }
  }
  __Znam();
  param_1[0x14] = lVar8;
  if (uVar7 != 0) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar1 = param_1[0x13] + lVar8;
      *(undefined8 *)(lVar1 + 0x78) = param_1[10];
      *(int *)(lVar1 + 0x88) = (int)uVar7;
      *(long *)(lVar1 + 200) = lVar1 + 0xa8;
      *(long *)(lVar1 + 0xc0) = lVar1 + 0xa8;
      lVar6 = lVar1;
      FUN_003b46f8();
      *(long *)(lVar1 + 0x80) = lVar6;
      *(long *)(param_1[0x14] + uVar7 * 8) = lVar1;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0xe8;
    } while (uVar7 < (ulong)param_1[1]);
  }
  return param_1;
}



/* Entry: 003b49b4; end: 003b49ef;  */

long FUN_003b49b4(long param_1)

{
  if (*(long *)(param_1 + 0x90) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
    __ZdlPv();
  }
  func_0x00339d70(param_1);
  return param_1;
}



/* Entry: 003b49f0; end: 003b4aab;  */

undefined8 * FUN_003b49f0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  *param_1 = param_2;
  puVar5 = param_1;
  FUN_00338d88();
  uVar3 = (int)puVar5 << 1;
  uVar2 = uVar3;
  if (0x1f < uVar3) {
    uVar2 = 0x20;
  }
  if (uVar3 == 0) {
    uVar2 = 1;
  }
  param_1[1] = (ulong)uVar2;
  FUN_00339d50(param_1 + 2);
  puVar5 = (undefined8 *)*param_1;
  (**(code **)*puVar5)();
  param_1[10] = puVar5;
  FUN_00339d50(param_1 + 0xb);
  uVar7 = param_1[1];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7;
  puVar5 = (undefined8 *)(uVar7 * 0xe8 + 0x10);
  if (0xffffffffffffffef < uVar7 * 0xe8 || SUB168(auVar4 * ZEXT816(0xe8),8) != 0) {
    puVar5 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar5 = 0xe8;
  puVar5[1] = uVar7;
  if (uVar7 == 0) {
    lVar8 = 0;
    param_1[0x13] = puVar5 + 2;
    uVar7 = 0;
  }
  else {
    lVar8 = 0;
    do {
      FUN_003b4754((long)puVar5 + lVar8 + 0x10);
      lVar8 = lVar8 + 0xe8;
    } while (uVar7 * 0xe8 - lVar8 != 0);
    uVar7 = param_1[1];
    param_1[0x13] = puVar5 + 2;
    lVar8 = uVar7 << 3;
    if (uVar7 >> 0x3d != 0) {
      lVar8 = -1;
    }
  }
  __Znam();
  param_1[0x14] = lVar8;
  if (uVar7 != 0) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar1 = param_1[0x13] + lVar8;
      *(undefined8 *)(lVar1 + 0x78) = param_1[10];
      *(int *)(lVar1 + 0x88) = (int)uVar7;
      *(long *)(lVar1 + 200) = lVar1 + 0xa8;
      *(long *)(lVar1 + 0xc0) = lVar1 + 0xa8;
      lVar6 = lVar1;
      FUN_003b46f8();
      *(long *)(lVar1 + 0x80) = lVar6;
      *(long *)(param_1[0x14] + uVar7 * 8) = lVar1;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0xe8;
    } while (uVar7 < (ulong)param_1[1]);
  }
  return param_1;
}



/* Entry: 003b4aac; end: 003b4cdb;  */

void FUN_003b4aac(ulong *param_1,ulong *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  double dVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  uVar3 = param_1[1];
  uVar6 = (ulong)param_2 >> 4 ^ (ulong)param_2 >> 9 ^ (ulong)param_2 >> 0xe;
  uVar9 = 0;
  if (uVar3 != 0) {
    uVar9 = uVar6 / uVar3;
  }
  lVar8 = uVar6 - uVar9 * uVar3;
  uVar9 = param_1[0x13];
  lVar7 = uVar9 + lVar8 * 0xe8;
  param_2[5] = param_4;
  *param_2 = (ulong)param_3;
  func_0x00339d8c(lVar7);
  *(undefined1 *)(param_2 + 2) = 1;
  puVar2 = (undefined8 *)*param_1;
  (**(code **)*puVar2)();
  puVar1 = puVar2;
  if ((long)puVar2 <= (long)param_3) {
    puVar1 = param_3;
  }
  if (puVar2 == (undefined8 *)0x8000000000000001 || puVar1 == (undefined8 *)0x7fffffffffffffff) {
LAB_003b4b38:
    dVar4 = 9.223372036854776e+18;
    goto LAB_003b4b58;
  }
  if (puVar2 == (undefined8 *)0x8000000000000000 || puVar1 == (undefined8 *)0x8000000000000000) {
LAB_003b4b50:
    dVar4 = -9.223372036854776e+18;
  }
  else {
    if ((long)puVar1 < 1) {
      if (-(long)puVar2 < -0x8000000000000000 - (long)puVar1) goto LAB_003b4b50;
    }
    else if ((long)((ulong)puVar1 ^ 0x7fffffffffffffff) < -(long)puVar2) goto LAB_003b4b38;
    dVar4 = (double)((long)puVar1 - (long)puVar2);
  }
LAB_003b4b58:
  func_0x003b4684(dVar4 / 1000.0,uVar9 + lVar8 * 0xe8 + 0x40);
  if ((long)puVar1 < *(long *)(uVar9 + lVar8 * 0xe8 + 0x78)) {
    lVar10 = uVar9 + lVar8 * 0xe8 + 0x90;
    FUN_003b54e8(lVar10,param_2);
    func_0x00339da8(lVar7);
    if ((int)lVar10 != 0) {
      func_0x00339d8c(param_1 + 2);
      puVar5 = (ulong *)(uVar9 + lVar8 * 0xe8 + 0x80);
      if ((long)puVar1 < (long)*puVar5) {
        lVar10 = *(long *)(*(long *)param_1[0x14] + 0x80);
        *puVar5 = (ulong)puVar1;
        FUN_003b49f0(param_1,lVar7);
        if (*(int *)(uVar9 + lVar8 * 0xe8 + 0x88) == 0 && (long)puVar1 < lVar10) {
          param_1[10] = (ulong)puVar1;
          (**(code **)(*(long *)*param_1 + 8))();
        }
      }
      func_0x00339da8(param_1 + 2);
    }
  }
  else {
    param_2[1] = 0xffffffffffffffff;
    lVar8 = uVar9 + lVar8 * 0xe8;
    uVar9 = *(ulong *)(lVar8 + 200);
    param_2[3] = lVar8 + 0xa8;
    param_2[4] = uVar9;
    *(ulong **)(uVar9 + 0x18) = param_2;
    *(ulong **)(param_2[3] + 0x20) = param_2;
    func_0x00339da8(lVar7);
  }
  return;
}



/* Entry: 003b4cdc; end: 003b4d9f;  */

bool FUN_003b4cdc(long param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = *(ulong *)(param_1 + 8);
  uVar4 = param_2 >> 4 ^ param_2 >> 9 ^ param_2 >> 0xe;
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar4 / uVar3;
  }
  lVar6 = uVar4 - uVar2 * uVar3;
  lVar7 = *(long *)(param_1 + 0x98);
  lVar5 = lVar7 + lVar6 * 0xe8;
  func_0x00339d8c(lVar5);
  cVar1 = *(char *)(param_2 + 0x10);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 0x10) = 0;
    if (*(long *)(param_2 + 8) == -1) {
      lVar6 = *(long *)(param_2 + 0x18);
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(long *)(*(long *)(param_2 + 0x20) + 0x18) = lVar6;
    }
    else {
      FUN_003b5620(lVar7 + lVar6 * 0xe8 + 0x90,param_2);
    }
  }
  func_0x00339da8(lVar5);
  return cVar1 != '\0';
}



/* Entry: 003b4da0; end: 003b4f6f;  */

uint FUN_003b4da0(double param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  double dVar6;
  double dVar7;
  
  func_0x003b469c(param_2 + 0x40);
  param_1 = param_1 * 0.33;
  dVar7 = 1000.0;
  if (param_1 <= 1.0) {
    dVar7 = param_1 * 1000.0;
  }
  uVar1 = *(ulong *)(param_2 + 0x78);
  if ((long)*(ulong *)(param_2 + 0x78) <= (long)param_3) {
    uVar1 = param_3;
  }
  dVar6 = 10.0;
  if (0.01 <= param_1) {
    dVar6 = dVar7;
  }
  lVar3 = 0x7fffffffffffffff;
  if (dVar6 < 9.223372036854776e+18) {
    dVar7 = -9.223372036854776e+18;
    if (-9.223372036854776e+18 < dVar6) {
      dVar7 = dVar6;
    }
    if ((((uVar1 != 0x7fffffffffffffff) && (lVar4 = (long)dVar7, lVar4 != 0x7fffffffffffffff)) &&
        (lVar3 = -0x8000000000000000, uVar1 != 0x8000000000000000)) &&
       (lVar4 != -0x8000000000000000)) {
      if ((long)uVar1 < 1) {
        if (lVar4 < (long)(-0x8000000000000000 - uVar1)) goto LAB_003b4e80;
      }
      else if ((long)(uVar1 ^ 0x7fffffffffffffff) < lVar4) {
        lVar3 = 0x7fffffffffffffff;
        goto LAB_003b4e80;
      }
      lVar3 = uVar1 + lVar4;
    }
  }
LAB_003b4e80:
  *(long *)(param_2 + 0x78) = lVar3;
  if (*(long **)(param_2 + 0xc0) != (long *)(param_2 + 0xa8)) {
    plVar2 = *(long **)(param_2 + 0xc0);
    do {
      plVar5 = (long *)plVar2[3];
      if (*plVar2 < *(long *)(param_2 + 0x78)) {
        plVar5[4] = plVar2[4];
        *(long **)(plVar2[4] + 0x18) = plVar5;
        FUN_003b54e8(param_2 + 0x90);
      }
      plVar2 = plVar5;
    } while (plVar5 != (long *)(param_2 + 0xa8));
  }
  param_2 = param_2 + 0x90;
  func_0x003b566c(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 003b4f70; end: 003b50cb;  */

void FUN_003b4f70(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  func_0x00339d8c();
  do {
    lVar4 = param_1;
    func_0x003b4eec(param_1,param_2);
    if (lVar4 == 0) {
      lVar4 = param_1;
      FUN_003b46f8();
      *param_3 = lVar4;
      func_0x00339da8(param_1);
      return;
    }
    puVar2 = (undefined8 *)param_4[1];
    if (puVar2 < (undefined8 *)param_4[2]) {
      plVar11 = puVar2 + 1;
      *puVar2 = *(undefined8 *)(lVar4 + 0x28);
    }
    else {
      lVar10 = (long)puVar2 - *param_4 >> 3;
      uVar1 = lVar10 + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_003b5374(param_4);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x3b50a8);
        (*pcVar3)();
      }
      uVar6 = param_4[2] - *param_4;
      uVar8 = (long)uVar6 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 == 0) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar5 = param_4 + 2;
        FUN_003b5388();
      }
      plVar9 = plVar5 + lVar10;
      plVar11 = plVar9 + 1;
      *plVar9 = *(undefined8 *)(lVar4 + 0x28);
      puVar2 = (undefined8 *)*param_4;
      puVar7 = (undefined8 *)param_4[1];
      if (puVar7 != puVar2) {
        do {
          puVar7 = puVar7 + -1;
          plVar9 = plVar9 + -1;
          *plVar9 = *puVar7;
        } while (puVar7 != puVar2);
        puVar7 = (undefined8 *)*param_4;
      }
      *param_4 = (long)plVar9;
      param_4[1] = (long)plVar11;
      param_4[2] = (long)(plVar5 + uVar8);
      if (puVar7 != (undefined8 *)0x0) {
        __ZdlPv(puVar7);
      }
    }
    param_4[1] = (long)plVar11;
  } while( true );
}



/* Entry: 003b50cc; end: 003b5213;  */

void FUN_003b50cc(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(param_2 + 0x50);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 < lVar2) {
    if (param_4 != (long *)0x0) {
      if (*param_4 <= lVar2) {
        lVar2 = *param_4;
      }
      *param_4 = lVar2;
    }
  }
  else {
    func_0x00339d8c(param_2 + 0x10);
    lVar1 = **(long **)(param_2 + 0xa0);
    plVar3 = (long *)(lVar1 + 0x80);
    lVar2 = *plVar3;
    if (lVar2 < param_3 || lVar2 == param_3 && param_3 != 0x7fffffffffffffff) {
      do {
        do {
          uStack_58 = 0;
          FUN_003b4f70(lVar1,param_3,&uStack_58,param_1);
          *(undefined8 *)(**(long **)(param_2 + 0xa0) + 0x80) = uStack_58;
          FUN_003b49f0(param_2);
          lVar1 = **(long **)(param_2 + 0xa0);
          lVar2 = *(long *)(lVar1 + 0x80);
        } while (lVar2 < param_3);
      } while (lVar2 == param_3 && param_3 != 0x7fffffffffffffff);
      plVar3 = (long *)(lVar1 + 0x80);
    }
    if (param_4 != (long *)0x0) {
      if (*param_4 <= lVar2) {
        lVar2 = *param_4;
      }
      *param_4 = lVar2;
      lVar2 = *plVar3;
    }
    *(long *)(param_2 + 0x50) = lVar2;
    func_0x00339da8(param_2 + 0x10);
  }
  return;
}



/* Entry: 003b5214; end: 003b52ff;  */

void FUN_003b5214(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = (undefined8 *)*param_2;
  (**(code **)*puVar1)();
  lVar3 = param_2[10];
  if ((long)puVar1 < lVar3) {
    if (param_3 != (long *)0x0) {
      if (*param_3 <= lVar3) {
        lVar3 = *param_3;
      }
      *param_3 = lVar3;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    plVar2 = param_2 + 0xb;
    func_0x00339dc4();
    if ((int)plVar2 == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      return;
    }
    FUN_003b50cc(&uStack_60,param_2,puVar1,param_3);
    func_0x00339da8(param_2 + 0xb);
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[2] = uStack_50;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 003b5300; end: 003b5373;  */

void FUN_003b5300(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if (*(long *)(param_2 + -8) != 0) {
      lVar2 = *(long *)(param_2 + -8) * 0xe8;
      do {
        lVar1 = param_2 + lVar2;
        if (*(long *)(lVar1 + -0x58) != 0) {
          *(long *)(lVar1 + -0x50) = *(long *)(lVar1 + -0x58);
          __ZdlPv();
        }
        func_0x00339d70(lVar1 + -0xe8);
        lVar2 = lVar2 + -0xe8;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_0099c618)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 003b5374; end: 003b5387;  */

void FUN_003b5374(undefined8 param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  pcVar2 = "vector";
  FUN_0033b32c();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  FUN_00349558();
  uVar5 = param_2 << 1 | 1;
  lVar3 = *(long *)pcVar2;
  uVar9 = *(long *)((long)pcVar2 + 8) - lVar3 >> 3;
  if (uVar5 < uVar9) {
    lVar4 = *param_3;
    do {
      uVar1 = param_2 * 2 + 2;
      plVar7 = *(long **)(lVar3 + uVar5 * 8);
      lVar10 = *plVar7;
      uVar6 = uVar5;
      if (uVar1 < uVar9) {
        plVar8 = *(long **)(lVar3 + uVar1 * 8);
        lVar11 = *plVar8;
        if (lVar11 < lVar10) {
          uVar6 = uVar1;
          plVar7 = plVar8;
          lVar10 = lVar11;
        }
      }
      if (lVar4 <= lVar10) break;
      *(long **)(lVar3 + param_2 * 8) = plVar7;
      lVar3 = *(long *)pcVar2;
      lVar10 = *(long *)((long)pcVar2 + 8);
      *(ulong *)(*(long *)(lVar3 + param_2 * 8) + 8) = param_2;
      uVar5 = uVar6 << 1 | 1;
      uVar9 = lVar10 - lVar3 >> 3;
      param_2 = uVar6;
    } while (uVar5 < uVar9);
  }
  *(long **)(lVar3 + param_2 * 8) = param_3;
  param_3[1] = param_2;
  return;
}



/* Entry: 003b5388; end: 003b53bb;  */

void FUN_003b5388(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  FUN_00349558();
  uVar4 = param_2 << 1 | 1;
  lVar2 = *param_1;
  uVar8 = param_1[1] - lVar2 >> 3;
  if (uVar4 < uVar8) {
    lVar3 = *param_3;
    do {
      uVar1 = param_2 * 2 + 2;
      plVar6 = *(long **)(lVar2 + uVar4 * 8);
      lVar9 = *plVar6;
      uVar5 = uVar4;
      if (uVar1 < uVar8) {
        plVar7 = *(long **)(lVar2 + uVar1 * 8);
        lVar10 = *plVar7;
        if (lVar10 < lVar9) {
          uVar5 = uVar1;
          plVar6 = plVar7;
          lVar9 = lVar10;
        }
      }
      if (lVar3 <= lVar9) break;
      *(long **)(lVar2 + param_2 * 8) = plVar6;
      lVar2 = *param_1;
      lVar9 = param_1[1];
      *(ulong *)(*(long *)(lVar2 + param_2 * 8) + 8) = param_2;
      uVar4 = uVar5 << 1 | 1;
      uVar8 = lVar9 - lVar2 >> 3;
      param_2 = uVar5;
    } while (uVar4 < uVar8);
  }
  *(long **)(lVar2 + param_2 * 8) = param_3;
  param_3[1] = param_2;
  return;
}



/* Entry: 003b53bc; end: 003b54e7;  */

void FUN_003b53bc(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  uVar4 = param_2 << 1 | 1;
  lVar2 = *param_1;
  uVar8 = param_1[1] - lVar2 >> 3;
  if (uVar4 < uVar8) {
    lVar3 = *param_3;
    do {
      uVar1 = param_2 * 2 + 2;
      plVar6 = *(long **)(lVar2 + uVar4 * 8);
      lVar9 = *plVar6;
      uVar5 = uVar4;
      if (uVar1 < uVar8) {
        plVar7 = *(long **)(lVar2 + uVar1 * 8);
        lVar10 = *plVar7;
        if (lVar10 < lVar9) {
          uVar5 = uVar1;
          plVar6 = plVar7;
          lVar9 = lVar10;
        }
      }
      if (lVar3 <= lVar9) break;
      *(long **)(lVar2 + param_2 * 8) = plVar6;
      lVar2 = *param_1;
      lVar9 = param_1[1];
      *(ulong *)(*(long *)(lVar2 + param_2 * 8) + 8) = param_2;
      uVar4 = uVar5 << 1 | 1;
      uVar8 = lVar9 - lVar2 >> 3;
      param_2 = uVar5;
    } while (uVar4 < uVar8);
  }
  *(long **)(lVar2 + param_2 * 8) = param_3;
  param_3[1] = param_2;
  return;
}



/* Entry: 003b54e8; end: 003b561f;  */

long * FUN_003b54e8(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar7 = *param_1;
  plVar13 = (long *)param_1[1];
  lVar16 = (long)plVar13 - lVar7 >> 3;
  param_2[1] = lVar16;
  plVar4 = param_1 + 2;
  if (plVar13 < (long *)*plVar4) {
    plVar12 = plVar13 + 1;
    *plVar13 = (long)param_2;
  }
  else {
    uVar8 = lVar16 + 1;
    if (uVar8 >> 0x3d != 0) {
      FUN_003b5694();
      uVar8 = (ulong)*(uint *)(param_2 + 1);
      lVar7 = *param_1;
      uVar9 = (param_1[1] - lVar7 >> 3) - 1;
      if (uVar8 == uVar9) {
        param_1[1] = param_1[1] + -8;
        return param_1;
      }
      *(undefined8 *)(lVar7 + uVar8 * 8) = *(undefined8 *)(lVar7 + uVar9 * 8);
      lVar7 = *param_1;
      lVar16 = param_1[1];
      *(ulong *)(*(long *)(lVar7 + uVar8 * 8) + 8) = uVar8;
      param_1[1] = lVar16 + -8;
      plVar13 = *(long **)(lVar7 + uVar8 * 8);
      lVar7 = *plVar13;
      uVar8 = plVar13[1] & 0xffffffff;
      iVar6 = (int)plVar13[1];
      iVar3 = iVar6 + -1;
      if (-1 < iVar3) {
        iVar6 = iVar3;
      }
      lVar16 = *param_1;
      if (**(long **)(lVar16 + (ulong)(uint)(iVar6 >> 1) * 8) <= lVar7) {
        uVar11 = uVar8 << 1 | 1;
        lVar7 = *param_1;
        uVar9 = param_1[1] - lVar7 >> 3;
        if (uVar11 < uVar9) {
          lVar16 = *plVar13;
          do {
            uVar1 = uVar8 * 2 + 2;
            plVar4 = *(long **)(lVar7 + uVar11 * 8);
            lVar14 = *plVar4;
            uVar10 = uVar11;
            if (uVar1 < uVar9) {
              plVar12 = *(long **)(lVar7 + uVar1 * 8);
              lVar15 = *plVar12;
              if (lVar15 < lVar14) {
                uVar10 = uVar1;
                plVar4 = plVar12;
                lVar14 = lVar15;
              }
            }
            if (lVar16 <= lVar14) break;
            *(long **)(lVar7 + uVar8 * 8) = plVar4;
            lVar7 = *param_1;
            lVar14 = param_1[1];
            *(ulong *)(*(long *)(lVar7 + uVar8 * 8) + 8) = uVar8;
            uVar11 = uVar10 << 1 | 1;
            uVar9 = lVar14 - lVar7 >> 3;
            uVar8 = uVar10;
          } while (uVar11 < uVar9);
        }
        *(long **)(lVar7 + uVar8 * 8) = plVar13;
        plVar13[1] = uVar8;
        return param_1;
      }
      if (uVar8 == 0) {
        uVar8 = 0;
      }
      else {
        do {
          uVar11 = uVar8 - 1;
          uVar9 = uVar11 >> 1;
          plVar4 = *(long **)(lVar16 + uVar9 * 8);
          if (*plVar4 <= lVar7) break;
          *(long **)(lVar16 + uVar8 * 8) = plVar4;
          lVar16 = *param_1;
          *(ulong *)(*(long *)(lVar16 + uVar8 * 8) + 8) = uVar8;
          uVar8 = uVar9;
        } while (1 < uVar11);
      }
      *(long **)(lVar16 + uVar8 * 8) = plVar13;
      plVar13[1] = uVar8;
      return param_1;
    }
    uVar11 = *plVar4 - lVar7;
    uVar9 = (long)uVar11 >> 2;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      FUN_003b56a8();
    }
    plVar13 = plVar4 + lVar16;
    plVar12 = plVar13 + 1;
    *plVar13 = (long)param_2;
    puVar2 = (undefined8 *)*param_1;
    puVar5 = (undefined8 *)param_1[1];
    if (puVar5 != puVar2) {
      do {
        puVar5 = puVar5 + -1;
        plVar13 = plVar13 + -1;
        *plVar13 = *puVar5;
      } while (puVar5 != puVar2);
      puVar5 = (undefined8 *)*param_1;
    }
    *param_1 = (long)plVar13;
    param_1[1] = (long)plVar12;
    param_1[2] = (long)(plVar4 + uVar9);
    if (puVar5 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar12;
  lVar7 = *param_1;
  if (param_2[1] == 0) {
    uVar8 = 0;
  }
  else {
    lVar16 = *param_2;
    uVar8 = param_2[1];
    do {
      uVar11 = uVar8 - 1;
      uVar9 = uVar11 >> 1;
      plVar13 = *(long **)(lVar7 + uVar9 * 8);
      if (*plVar13 <= lVar16) break;
      *(long **)(lVar7 + uVar8 * 8) = plVar13;
      lVar7 = *param_1;
      *(ulong *)(*(long *)(lVar7 + uVar8 * 8) + 8) = uVar8;
      uVar8 = uVar9;
    } while (1 < uVar11);
  }
  *(long **)(lVar7 + uVar8 * 8) = param_2;
  param_2[1] = uVar8;
  return (long *)(ulong)(uVar8 == 0);
}



/* Entry: 003b5620; end: 003b5693;  */

void FUN_003b5620(long *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  uVar7 = (ulong)*(uint *)(param_2 + 8);
  lVar5 = *param_1;
  uVar10 = (param_1[1] - lVar5 >> 3) - 1;
  if (uVar7 == uVar10) {
    param_1[1] = param_1[1] + -8;
    return;
  }
  *(undefined8 *)(lVar5 + uVar7 * 8) = *(undefined8 *)(lVar5 + uVar10 * 8);
  lVar5 = *param_1;
  lVar6 = param_1[1];
  *(ulong *)(*(long *)(lVar5 + uVar7 * 8) + 8) = uVar7;
  param_1[1] = lVar6 + -8;
  plVar3 = *(long **)(lVar5 + uVar7 * 8);
  lVar5 = *plVar3;
  uVar7 = plVar3[1] & 0xffffffff;
  iVar4 = (int)plVar3[1];
  iVar2 = iVar4 + -1;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  lVar6 = *param_1;
  if (**(long **)(lVar6 + (ulong)(uint)(iVar4 >> 1) * 8) <= lVar5) {
    uVar9 = uVar7 << 1 | 1;
    lVar5 = *param_1;
    uVar10 = param_1[1] - lVar5 >> 3;
    if (uVar9 < uVar10) {
      lVar6 = *plVar3;
      do {
        uVar1 = uVar7 * 2 + 2;
        plVar11 = *(long **)(lVar5 + uVar9 * 8);
        lVar13 = *plVar11;
        uVar8 = uVar9;
        if (uVar1 < uVar10) {
          plVar12 = *(long **)(lVar5 + uVar1 * 8);
          lVar14 = *plVar12;
          if (lVar14 < lVar13) {
            uVar8 = uVar1;
            plVar11 = plVar12;
            lVar13 = lVar14;
          }
        }
        if (lVar6 <= lVar13) break;
        *(long **)(lVar5 + uVar7 * 8) = plVar11;
        lVar5 = *param_1;
        lVar13 = param_1[1];
        *(ulong *)(*(long *)(lVar5 + uVar7 * 8) + 8) = uVar7;
        uVar9 = uVar8 << 1 | 1;
        uVar10 = lVar13 - lVar5 >> 3;
        uVar7 = uVar8;
      } while (uVar9 < uVar10);
    }
    *(long **)(lVar5 + uVar7 * 8) = plVar3;
    plVar3[1] = uVar7;
    return;
  }
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    do {
      uVar9 = uVar7 - 1;
      uVar10 = uVar9 >> 1;
      plVar11 = *(long **)(lVar6 + uVar10 * 8);
      if (*plVar11 <= lVar5) break;
      *(long **)(lVar6 + uVar7 * 8) = plVar11;
      lVar6 = *param_1;
      *(ulong *)(*(long *)(lVar6 + uVar7 * 8) + 8) = uVar7;
      uVar7 = uVar10;
    } while (1 < uVar9);
  }
  *(long **)(lVar6 + uVar7 * 8) = plVar3;
  plVar3[1] = uVar7;
  return;
}



/* Entry: 003b5694; end: 003b56a7;  */

void FUN_003b5694(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 auStack_90 [4];
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  qword qStack_78;
  undefined2 uStack_70;
  undefined6 uStack_6e;
  qword qStack_68;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  FUN_00349558();
  *(long *)(pcVar1 + 0x88) = *(long *)(pcVar1 + 0x88) + 1;
  *(long *)(pcVar1 + 0x80) = *(long *)(pcVar1 + 0x80) + 1;
  pcVar2 = segment_command_00000020.segname;
  __Znwm();
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  pcVar2[0xc] = '\0';
  pcVar2[0xd] = '\0';
  pcVar2[0xe] = '\0';
  pcVar2[0xf] = '\0';
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  pcVar2[3] = '\0';
  pcVar2[4] = '\0';
  pcVar2[5] = '\0';
  pcVar2[6] = '\0';
  pcVar2[7] = '\0';
  *(qword *)(pcVar2 + 0x18) = 0;
  *(qword *)(pcVar2 + 0x10) = 0;
  *(undefined2 *)(pcVar2 + 0x18) = 0x101;
  *(qword *)(pcVar2 + 0x20) = 0;
  *(char **)pcVar2 = pcVar1;
  auStack_90[0] = 0x101;
  uStack_88 = 0;
  FUN_0033b6e0(auStack_80,"timer_manager",FUN_003b57ac,pcVar2,0,auStack_90);
  *(undefined4 *)(pcVar2 + 8) = auStack_80[0];
  *(qword *)(pcVar2 + 0x10) = qStack_78;
  *(qword *)(pcVar2 + 0x20) = qStack_68;
  *(qword *)(pcVar2 + 0x18) = CONCAT62(uStack_6e,uStack_70);
  auStack_80[0] = 5;
  qStack_78 = 0;
  uStack_70 = 0x101;
  qStack_68 = 0;
  FUN_003b3a7c(auStack_80);
  FUN_003b3344(pcVar2 + 8);
  return;
}



/* Entry: 003b56a8; end: 003b56db;  */

void FUN_003b56a8(long param_1,ulong param_2)

{
  char *pcVar1;
  undefined2 auStack_80 [4];
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  qword qStack_68;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  qword qStack_58;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  FUN_00349558();
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  pcVar1 = segment_command_00000020.segname;
  __Znwm();
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  *(qword *)(pcVar1 + 0x18) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(undefined2 *)(pcVar1 + 0x18) = 0x101;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(long *)pcVar1 = param_1;
  auStack_80[0] = 0x101;
  uStack_78 = 0;
  FUN_0033b6e0(auStack_70,"timer_manager",FUN_003b57ac,pcVar1,0,auStack_80);
  *(undefined4 *)(pcVar1 + 8) = auStack_70[0];
  *(qword *)(pcVar1 + 0x10) = qStack_68;
  *(qword *)(pcVar1 + 0x20) = qStack_58;
  *(qword *)(pcVar1 + 0x18) = CONCAT62(uStack_5e,uStack_60);
  auStack_70[0] = 5;
  qStack_68 = 0;
  uStack_60 = 0x101;
  qStack_58 = 0;
  FUN_003b3a7c(auStack_70);
  FUN_003b3344(pcVar1 + 8);
  return;
}



/* Entry: 003b56dc; end: 003b57ab;  */

void FUN_003b56dc(long param_1)

{
  char *pcVar1;
  undefined2 auStack_60 [4];
  undefined8 uStack_58;
  undefined4 auStack_50 [2];
  qword qStack_48;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  qword qStack_38;
  
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  pcVar1 = segment_command_00000020.segname;
  __Znwm();
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  *(qword *)(pcVar1 + 0x18) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(undefined2 *)(pcVar1 + 0x18) = 0x101;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(long *)pcVar1 = param_1;
  auStack_60[0] = 0x101;
  uStack_58 = 0;
  FUN_0033b6e0(auStack_50,"timer_manager",FUN_003b57ac,pcVar1,0,auStack_60);
  *(undefined4 *)(pcVar1 + 8) = auStack_50[0];
  *(qword *)(pcVar1 + 0x10) = qStack_48;
  *(qword *)(pcVar1 + 0x20) = qStack_38;
  *(qword *)(pcVar1 + 0x18) = CONCAT62(uStack_3e,uStack_40);
  auStack_50[0] = 5;
  qStack_48 = 0;
  uStack_40 = 0x101;
  qStack_38 = 0;
  FUN_003b3a7c(auStack_50);
  FUN_003b3344(pcVar1 + 8);
  return;
}



/* Entry: 003b57ac; end: 003b58a3;  */

void FUN_003b57ac(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_003b5c44(*param_1);
  lVar2 = *param_1;
  func_0x00339d8c(lVar2);
  lVar3 = *param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar1 = *(undefined4 **)(lVar3 + 0x98);
  if (puVar1 < *(undefined4 **)(lVar3 + 0xa0)) {
    *puVar1 = (int)param_1[1];
    *(long *)(puVar1 + 2) = param_1[2];
    lVar4 = param_1[3];
    *(long *)(puVar1 + 6) = param_1[4];
    *(long *)(puVar1 + 4) = lVar4;
    *(undefined4 *)(param_1 + 1) = 5;
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 3) = 0x101;
    param_1[4] = 0;
    puVar1 = puVar1 + 8;
  }
  else {
    puVar1 = (undefined4 *)(lVar3 + 0x90);
    FUN_003b60f4(puVar1,param_1 + 1);
  }
  *(undefined4 **)(lVar3 + 0x98) = puVar1;
  func_0x00339da8(lVar2);
  FUN_00339f68(*param_1 + 0x40);
  FUN_003b3a7c(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 003b58a4; end: 003b59e7;  */

void FUN_003b58a4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00339d8c();
  lVar2 = *(long *)(param_1 + 0x88) + -1;
  *(long *)(param_1 + 0x88) = lVar2;
  if (lVar2 == 0) {
    FUN_003b56dc(param_1);
  }
  else if (*(char *)(param_1 + 0xa8) == '\0') {
    FUN_00339f68(param_1 + 0x40);
  }
  func_0x00339da8(param_1);
  puVar1 = (undefined8 *)param_2[1];
  for (param_2 = (undefined8 *)*param_2; param_2 != puVar1; param_2 = param_2 + 1) {
    (**(code **)(*(long *)*param_2 + 0x10))();
  }
  func_0x00339d8c(param_1);
  uStack_68 = *(undefined8 *)(param_1 + 0x98);
  uStack_70 = *(undefined8 *)(param_1 + 0x90);
  uStack_60 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_003b59e8(&uStack_50,&uStack_70);
  puStack_38 = (undefined1 *)&uStack_70;
  FUN_003b6084(&puStack_38);
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
  func_0x00339da8(param_1);
  FUN_003b5a34(&uStack_50);
  return;
}



/* Entry: 003b59e8; end: 003b5a33;  */

long * FUN_003b59e8(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  
  if (*param_1 == param_1[1]) {
    plVar2 = param_1;
    FUN_003b6028();
    lVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar3;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return plVar2;
  }
  FUN_00773c98();
  lVar1 = param_1[1];
  for (lVar3 = *param_1; lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
    FUN_003b33cc(lVar3);
  }
  plStack_58 = param_1;
  FUN_003b6084(&plStack_58);
  return param_1;
}



/* Entry: 003b5a34; end: 003b5a8f;  */

long * FUN_003b5a34(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plStack_38;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_003b33cc(lVar2);
  }
  plStack_38 = param_1;
  FUN_003b6084(&plStack_38);
  return param_1;
}



/* Entry: 003b5a90; end: 003b5c2b;  */

bool FUN_003b5a90(long param_1,ulong param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  func_0x00339d8c();
  cVar1 = *(char *)(param_1 + 0xa9);
  if (cVar1 != '\0') goto LAB_003b5bf0;
  if (*(char *)(param_1 + 0xaa) == '\0') {
    lVar6 = *(long *)(param_1 + 0xb8) + -1;
    if ((param_2 == 0x7fffffffffffffff) ||
       ((*(char *)(param_1 + 0xa8) != '\0' && (*(long *)(param_1 + 0xb0) <= (long)param_2)))) {
      param_2 = 0x7fffffffffffffff;
    }
    else {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar6 = *(long *)(param_1 + 0xb8) + 1;
      *(ulong *)(param_1 + 0xb0) = param_2;
      *(long *)(param_1 + 0xb8) = lVar6;
    }
    lVar2 = 0;
    FUN_0033a598();
    FUN_003b8c6c();
    lVar4 = 0x7fffffffffffffff;
    if ((((param_2 != 0x7fffffffffffffff) && (lVar2 != -0x7fffffffffffffff)) &&
        (lVar4 = -0x8000000000000000, param_2 != 0x8000000000000000)) &&
       (lVar2 != -0x8000000000000000)) {
      if ((long)param_2 < 1) {
        if ((long)(-0x8000000000000000 - param_2) <= -lVar2) goto LAB_003b5b60;
      }
      else if ((long)(param_2 ^ 0x7fffffffffffffff) < -lVar2) {
        lVar4 = 0x7fffffffffffffff;
      }
      else {
LAB_003b5b60:
        lVar4 = param_2 - lVar2;
      }
    }
    uVar5 = (lVar4 % 1000) * 4000000;
    lVar2 = lVar4 / 1000 + ((long)uVar5 >> 0x3f);
    uVar3 = (ulong)((int)uVar5 + 4000000000);
    if (-1 < lVar4 % 1000) {
      uVar3 = uVar5;
    }
    uVar3 = uVar3 & 0xffffff00;
    FUN_0033b82c(lVar2,uVar3);
    FUN_00339e80(param_1 + 0x40,param_1,lVar2,uVar3);
    if (lVar6 == *(long *)(param_1 + 0xb8)) {
      *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
      *(undefined1 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0x7fffffffffffffff;
    }
  }
  *(undefined1 *)(param_1 + 0xaa) = 0;
LAB_003b5bf0:
  func_0x00339da8(param_1);
  return cVar1 == '\0';
}



/* Entry: 003b5c2c; end: 003b5c43;  */

long FUN_003b5c2c(undefined8 param_1,undefined8 param_2,double param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  double dVar4;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  lVar2 = 0;
  FUN_0033a598();
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    FUN_0033a30c();
    lVar3 = lRam0000000000b5e890;
    if (lRam0000000000b5e890 == 0) {
      lVar3 = lVar2;
      FUN_003b8fe0();
    }
    func_0x0033a204(lVar2,param_3,lVar3,0);
    unaff_x20 = *(undefined8 *)(puVar1 + -0x20);
    unaff_x19 = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    if ((ulong)param_3 >> 0x20 == 3) {
      dVar4 = (double)SUB84(param_3,0) / 1000000.0 + (double)lVar2 * 1000.0;
      if (dVar4 <= -9.223372036854776e+18) {
        lVar2 = -0x8000000000000000;
      }
      else if (9.223372036854776e+18 <= dVar4) {
        lVar2 = 0x7fffffffffffffff;
      }
      else {
        lVar2 = (long)dVar4;
      }
      return lVar2;
    }
    func_0x00773d24();
    *(undefined8 *)(puVar1 + -0x30) = unaff_d9;
    *(undefined8 *)(puVar1 + -0x28) = unaff_d8;
    *(undefined1 **)(puVar1 + -0x20) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x18) = FUN_003b8d30;
    dVar4 = dRam0000000000b5e898;
    if (dRam0000000000b5e898 == 0.0) {
      FUN_003b8fe0();
      dVar4 = param_3;
    }
    FUN_0033a774(param_1,dVar4);
    unaff_d9 = *(undefined8 *)(puVar1 + -0x30);
    unaff_d8 = *(undefined8 *)(puVar1 + -0x28);
    unaff_x29 = puVar1 + -0x20;
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    if ((ulong)param_3 >> 0x20 == 3) break;
    unaff_x30 = FUN_003b8c6c;
    func_0x00773cec();
    puVar1 = puVar1 + -0x20;
  }
  dVar4 = (double)SUB84(param_3,0) / 1000000.0 + (double)lVar2 * 1000.0 + 0.999999999;
  if (dVar4 <= -9.223372036854776e+18) {
    lVar2 = -0x8000000000000000;
  }
  else if (9.223372036854776e+18 <= dVar4) {
    lVar2 = 0x7fffffffffffffff;
  }
  else {
    lVar2 = (long)dVar4;
  }
  return lVar2;
}



/* Entry: 003b5c44; end: 003b5d43;  */

void FUN_003b5c44(long param_1)

{
  long lVar1;
  uint uVar2;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  char cStack_40;
  undefined8 uStack_38;
  
  do {
    uStack_38 = 0x7fffffffffffffff;
    FUN_003b5214(&lStack_58,*(undefined8 *)(param_1 + 200),&uStack_38);
    lVar1 = lStack_58;
    if (cStack_40 == '\0') {
      uStack_38 = 0x7fffffffffffffff;
LAB_003b5ccc:
      lVar1 = param_1;
      FUN_003b5a90(param_1,uStack_38);
      uVar2 = (uint)lVar1 ^ 1;
    }
    else {
      if (lStack_58 == lStack_50) goto LAB_003b5ccc;
      lStack_70 = lStack_58;
      lStack_68 = lStack_50;
      uStack_60 = uStack_48;
      lStack_58 = 0;
      lStack_50 = 0;
      uStack_48 = 0;
      FUN_003b58a4(param_1,&lStack_70);
      if (lVar1 != 0) {
        lStack_68 = lVar1;
        __ZdlPv(lVar1);
      }
      uVar2 = 3;
    }
    if ((cStack_40 != '\0') && (lStack_58 != 0)) {
      lStack_50 = lStack_58;
      __ZdlPv();
    }
    if (uVar2 == 1) {
      return;
    }
  } while( true );
}



/* Entry: 003b5d44; end: 003b5e7b;  */

long FUN_003b5d44(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  FUN_00339d50();
  FUN_00339df0(param_1 + 0x40);
  *(undefined ***)(param_1 + 0x70) = &PTR_FUN_009dfd80;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(long *)(param_1 + 0x78) = param_1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  plVar1 = (long *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0xa3) = 0;
  *(undefined8 *)(param_1 + 0x9b) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  lVar2 = 0xa8;
  __Znwm();
  FUN_003b49f0();
  lVar3 = *plVar1;
  *plVar1 = lVar2;
  if (lVar3 != 0) {
    FUN_003b6328(plVar1);
  }
  func_0x00339d8c(param_1);
  FUN_003b56dc(param_1);
  func_0x00339da8(param_1);
  return param_1;
}



/* Entry: 003b5e7c; end: 003b5e8f;  */

long FUN_003b5e7c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  FUN_00339d50();
  FUN_00339df0(param_1 + 0x40);
  *(undefined ***)(param_1 + 0x70) = &PTR_FUN_009dfd80;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(long *)(param_1 + 0x78) = param_1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  plVar1 = (long *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0xa3) = 0;
  *(undefined8 *)(param_1 + 0x9b) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  lVar2 = 0xa8;
  __Znwm();
  FUN_003b49f0();
  lVar3 = *plVar1;
  *plVar1 = lVar2;
  if (lVar3 != 0) {
    FUN_003b6328(plVar1);
  }
  func_0x00339d8c(param_1);
  FUN_003b56dc(param_1);
  func_0x00339da8(param_1);
  return param_1;
}



/* Entry: 003b5e90; end: 003b5fb3;  */

long FUN_003b5e90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  func_0x00339d8c();
  *(undefined1 *)(param_1 + 0xa9) = 1;
  lVar1 = param_1 + 0x40;
  func_0x00339f84(lVar1);
  func_0x00339da8(param_1);
  do {
    puStack_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00339d8c(param_1);
    uStack_78 = *(undefined8 *)(param_1 + 0x98);
    uStack_80 = *(undefined8 *)(param_1 + 0x90);
    uStack_70 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    FUN_003b59e8(&puStack_60,&uStack_80);
    puStack_48 = (undefined1 *)&uStack_80;
    FUN_003b6084(&puStack_48);
    lVar4 = *(long *)(param_1 + 0x80);
    if (lVar4 != 0) {
      uVar2 = 0x7fffffffffffffff;
      uVar3 = 0xffffffff;
      FUN_0033b990(0x7fffffffffffffff,0xffffffff);
      FUN_00339e80(lVar1,param_1,uVar2,uVar3);
    }
    func_0x00339da8(param_1);
    FUN_003b5a34(&puStack_60);
  } while (lVar4 != 0);
  lVar4 = *(long *)(param_1 + 200);
  *(long *)(param_1 + 200) = 0;
  if (lVar4 != 0) {
    FUN_003b6328();
  }
  puStack_60 = (undefined8 *)(param_1 + 0x90);
  FUN_003b6084(&puStack_60);
  FUN_00339e64(lVar1);
  func_0x00339d70(param_1);
  return param_1;
}



/* Entry: 003b5fb4; end: 003b5fbf;  */

long FUN_003b5fb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  func_0x00339d8c();
  *(undefined1 *)(param_1 + 0xa9) = 1;
  lVar1 = param_1 + 0x40;
  func_0x00339f84(lVar1);
  func_0x00339da8(param_1);
  do {
    puStack_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00339d8c(param_1);
    uStack_78 = *(undefined8 *)(param_1 + 0x98);
    uStack_80 = *(undefined8 *)(param_1 + 0x90);
    uStack_70 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    FUN_003b59e8(&puStack_60,&uStack_80);
    puStack_48 = (undefined1 *)&uStack_80;
    FUN_003b6084(&puStack_48);
    lVar4 = *(long *)(param_1 + 0x80);
    if (lVar4 != 0) {
      uVar2 = 0x7fffffffffffffff;
      uVar3 = 0xffffffff;
      FUN_0033b990(0x7fffffffffffffff,0xffffffff);
      FUN_00339e80(lVar1,param_1,uVar2,uVar3);
    }
    func_0x00339da8(param_1);
    FUN_003b5a34(&puStack_60);
  } while (lVar4 != 0);
  lVar4 = *(long *)(param_1 + 200);
  *(long *)(param_1 + 200) = 0;
  if (lVar4 != 0) {
    FUN_003b6328();
  }
  puStack_60 = (undefined8 *)(param_1 + 0x90);
  FUN_003b6084(&puStack_60);
  FUN_00339e64(lVar1);
  func_0x00339d70(param_1);
  return param_1;
}



/* Entry: 003b5fc0; end: 003b6027;  */

void FUN_003b5fc0(long param_1)

{
  func_0x00339d8c();
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0x7fffffffffffffff;
  *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
  *(undefined1 *)(param_1 + 0xaa) = 1;
  FUN_00339f68(param_1 + 0x40);
  func_0x00339da8(param_1);
  return;
}



/* Entry: 003b6028; end: 003b6083;  */

void FUN_003b6028(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x20;
        FUN_003b3a7c();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 003b6084; end: 003b60f3;  */

void FUN_003b6084(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x20;
        FUN_003b3a7c();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar2);
    return;
  }
  return;
}



/* Entry: 003b60f4; end: 003b61f7;  */

long * FUN_003b60f4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3b == 0) {
    plVar9 = param_1 + 2;
    uVar5 = *plVar9 - *param_1;
    uVar7 = (long)uVar5 >> 4;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar7 = 0x7ffffffffffffff;
    }
    plStack_38 = plVar9;
    if (uVar7 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      FUN_003b62a8();
      plStack_58 = plVar9;
    }
    plStack_50 = plStack_58 + lVar10 * 4;
    plStack_40 = plStack_58 + uVar7 * 4;
    *(undefined4 *)plStack_50 = *(undefined4 *)param_2;
    plStack_50[1] = param_2[1];
    lVar10 = param_2[2];
    plStack_50[3] = param_2[3];
    plStack_50[2] = lVar10;
    *(undefined4 *)param_2 = 5;
    param_2[1] = 0;
    *(undefined2 *)(param_2 + 2) = 0x101;
    param_2[3] = 0;
    plStack_48 = plStack_50 + 4;
    FUN_003b61f8(param_1,&plStack_58);
    plVar9 = (long *)param_1[1];
    func_0x003b62dc(&plStack_58);
    return plVar9;
  }
  FUN_003b6294();
  func_0x003b62dc(&plStack_58);
  __Unwind_Resume();
  lVar6 = *param_1;
  lVar4 = param_1[1];
  lVar10 = param_2[1];
  if (lVar4 != lVar6) {
    lVar8 = 0;
    do {
      lVar2 = lVar10 + lVar8;
      lVar3 = lVar4 + lVar8;
      *(undefined4 *)(lVar2 + -0x20) = *(undefined4 *)(lVar3 + -0x20);
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar3 + -0x18);
      uVar11 = *(undefined8 *)(lVar3 + -0x10);
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(lVar3 + -8);
      *(undefined8 *)(lVar2 + -0x10) = uVar11;
      *(undefined4 *)(lVar3 + -0x20) = 5;
      *(undefined8 *)(lVar3 + -0x18) = 0;
      *(undefined2 *)(lVar3 + -0x10) = 0x101;
      *(undefined8 *)(lVar3 + -8) = 0;
      lVar8 = lVar8 + -0x20;
    } while (lVar4 + lVar8 != lVar6);
    lVar10 = lVar10 + lVar8;
  }
  param_2[1] = lVar10;
  lVar6 = *param_1;
  *param_1 = lVar10;
  param_2[1] = lVar6;
  lVar10 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar10;
  lVar10 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar10;
  *param_2 = param_2[1];
  return param_1;
}



/* Entry: 003b61f8; end: 003b6293;  */

void FUN_003b61f8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar5 = *param_1;
  lVar3 = param_1[1];
  lVar4 = param_2[1];
  if (lVar3 != lVar5) {
    lVar6 = 0;
    do {
      lVar1 = lVar4 + lVar6;
      lVar2 = lVar3 + lVar6;
      *(undefined4 *)(lVar1 + -0x20) = *(undefined4 *)(lVar2 + -0x20);
      *(undefined8 *)(lVar1 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
      uVar7 = *(undefined8 *)(lVar2 + -0x10);
      *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(lVar2 + -8);
      *(undefined8 *)(lVar1 + -0x10) = uVar7;
      *(undefined4 *)(lVar2 + -0x20) = 5;
      *(undefined8 *)(lVar2 + -0x18) = 0;
      *(undefined2 *)(lVar2 + -0x10) = 0x101;
      *(undefined8 *)(lVar2 + -8) = 0;
      lVar6 = lVar6 + -0x20;
    } while (lVar3 + lVar6 != lVar5);
    lVar4 = lVar4 + lVar6;
  }
  param_2[1] = lVar4;
  lVar5 = *param_1;
  *param_1 = lVar4;
  param_2[1] = lVar5;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 003b6294; end: 003b62a7;  */

undefined1  [16] FUN_003b6294(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 >> 0x3b == 0) {
    lVar2 = param_2 << 5;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  FUN_00349558();
  lVar2 = *(long *)((long)pcVar1 + 8);
  lVar3 = *(long *)((long)pcVar1 + 0x10);
  while (lVar3 != lVar2) {
    *(long *)((long)pcVar1 + 0x10) = lVar3 + -0x20;
    FUN_003b3a7c();
    lVar3 = *(long *)((long)pcVar1 + 0x10);
  }
  if (*(long *)pcVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = pcVar1;
  return auVar5;
}



/* Entry: 003b62a8; end: 003b6327;  */

undefined1  [16] FUN_003b62a8(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3b == 0) {
    lVar1 = param_2 << 5;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  FUN_00349558();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x20;
    FUN_003b3a7c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 003b6328; end: 003b6393;  */

void FUN_003b6328(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0xa0);
    *(undefined8 *)(param_2 + 0xa0) = 0;
    if (lVar1 != 0) {
      __ZdaPv();
    }
    lVar1 = *(long *)(param_2 + 0x98);
    *(long *)(param_2 + 0x98) = 0;
    if (lVar1 != 0) {
      FUN_003b5300();
    }
    func_0x00339d70(param_2 + 0x58);
    func_0x00339d70(param_2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 003b6394; end: 003b639b;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003b6394(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003b639c; end: 003b6427;  */

void FUN_003b639c(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_2;
  (**(code **)(*plVar6 + 0x10))(plVar6,param_3 + 0x28,param_4 + 0x28);
  plVar7 = plVar6;
  _malloc();
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar7 = 1;
  plVar7[1] = (long)FUN_003b6428;
  plVar7[2] = lVar2;
  plVar7[3] = lVar3;
  plVar7[4] = (long)plVar6;
  param_1[2] = plVar7 + 5;
  *param_1 = plVar7;
  param_1[1] = plVar6 + -5;
  return;
}



/* Entry: 003b6428; end: 003b646b;  */

void FUN_003b6428(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_1 + 0x20));
  FUN_00377768((undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 003b646c; end: 003b653f;  */

void FUN_003b646c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong *puVar6;
  ulong uStack_38;
  
  uVar4 = param_1;
  FUN_00552acc(param_1,param_2,param_3,param_4);
  FUN_0056f18c();
  FUN_003b6688(param_1,0,uVar4,param_2 & 0xffffffff);
  puVar1 = (ulong *)param_6[1];
  for (puVar6 = (ulong *)*param_6; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    uStack_38 = *puVar6;
    if (uStack_38 != 0) {
      if ((uStack_38 & 1) != 0) {
        piVar5 = (int *)(uStack_38 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = *piVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003b6784(param_1,&uStack_38);
      if ((uStack_38 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
  return;
}



/* Entry: 003b6540; end: 003b65d3;  */

void FUN_003b6540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  
  FUN_003b6ad8(param_2);
  uVar1 = param_2;
  _strlen();
  FUN_00557b34(auStack_50,param_3,param_4,9);
  FUN_005521b8(param_1,param_2,uVar1,auStack_50);
  FUN_00543968(auStack_50);
  return;
}



/* Entry: 003b65d4; end: 003b6687;  */

void FUN_003b65d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined1 auStack_40 [16];
  
  FUN_003b6918(param_2);
  uVar1 = param_2;
  _strlen();
  __ZNSt3__19to_stringEl(auStack_58,param_3);
  FUN_00557234(auStack_40,auStack_58);
  FUN_005521b8(param_1,param_2,uVar1,auStack_40);
  FUN_00543968(auStack_40);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 003b6688; end: 003b6783;  */

void FUN_003b6688(undefined8 param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_68 [16];
  undefined8 auStack_58 [2];
  char cStack_41;
  
  puVar2 = &UNK_00811404;
  _strlen(&UNK_00811404);
  puVar3 = puVar2;
  FUN_00583fe0();
  FUN_0056f9f0(auStack_58,&UNK_00811404,puVar2,param_3,param_4,puVar3);
  if (param_2 == 0) {
    FUN_00557234(auStack_68,auStack_58);
    FUN_005521b8(param_1,"type.googleapis.com/grpc.status.time.created_time",0x31,auStack_68);
    FUN_00543968(auStack_68);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    return;
  }
  func_0x00338df0("return \"unknown\"",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/status_helper.cc"
                  ,0x83);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3b6758);
  (*pcVar1)();
}



/* Entry: 003b6784; end: 003b6917;  */

void FUN_003b6784(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  byte bStack_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  char cStack_40;
  undefined8 uStack_38;
  
  lVar1 = 0;
  FUN_005d20a4(0,0,&PTR_FUN_00b1f0c8);
  FUN_003b6bcc(param_2,lVar1);
  uStack_38 = 0;
  FUN_005cf770();
  FUN_00552040(&bStack_50,param_1,"type.googleapis.com/grpc.status.children",0x28);
  uStack_60 = 0;
  uStack_58 = 0;
  if (cStack_40 != '\0') {
    if ((bStack_50 & 1) == 0) {
      uStack_60 = CONCAT71(uStack_4f,bStack_50);
      uStack_58 = uStack_48;
    }
    else {
      FUN_00557884(&uStack_60,&bStack_50);
    }
  }
  uStack_64 = (undefined4)uStack_38;
  FUN_0055805c(&uStack_60,&uStack_64,4,4);
  FUN_0055805c(&uStack_60,param_2,uStack_38,4);
  uStack_78 = uStack_58;
  uStack_80 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_005521b8(param_1,"type.googleapis.com/grpc.status.children",0x28,&uStack_80);
  FUN_00543968(&uStack_80);
  FUN_00543968(&uStack_60);
  if (cStack_40 != '\0') {
    FUN_00543968(&bStack_50);
  }
  if (lVar1 != 0) {
    FUN_005d2198(lVar1);
  }
  return;
}



/* Entry: 003b6918; end: 003b6953;  */

undefined1  [16] FUN_003b6918(uint param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 ***pppuVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 ***unaff_x21;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 **ppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  byte abStack_60 [8];
  long lStack_58;
  char cStack_50;
  ulong uStack_48;
  
  if (param_1 < 0xf) {
    auVar10._0_8_ = (&PTR_s_type_googleapis_com_grpc_status__009dfdb8)[(int)param_1];
    auVar10._8_8_ = param_2;
    return auVar10;
  }
  pcVar3 = "return \"unknown\"";
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/status_helper.cc";
  func_0x00338df0("return \"unknown\"",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/status_helper.cc"
                  ,0x5f);
  FUN_003b6918(pcVar4);
  pcVar5 = pcVar4;
  _strlen();
  FUN_00552040(abStack_60,pcVar3,pcVar4,pcVar5);
  if (cStack_50 == '\0') {
    uVar9 = 0;
    uVar8 = 0;
    goto LAB_003b6a14;
  }
  if ((abStack_60[0] & 1) == 0) {
    pppuVar6 = (undefined8 ***)((ulong)abStack_60 | 1);
LAB_003b69dc:
    iVar2 = (int)pppuVar6;
    func_0x005757a0();
    bVar1 = iVar2 == 0;
    uVar7 = 0;
    unaff_x21 = (undefined8 ***)ppuStack_78;
    if (!bVar1) {
      uVar7 = (uint)ppuStack_78;
      unaff_x21 = (undefined8 ***)((ulong)ppuStack_78 >> 8);
    }
  }
  else {
    pppuVar6 = (undefined8 ***)0x0;
    if (lStack_58 == 0) goto LAB_003b69dc;
    ppuStack_78 = (undefined8 ***)0x0;
    uStack_70 = 0;
    FUN_0055a308(lStack_58,&ppuStack_78);
    pppuVar6 = (undefined8 ***)ppuStack_78;
    if ((int)lStack_58 != 0) goto LAB_003b69dc;
    FUN_00559e74(&ppuStack_78,abStack_60);
    uVar8 = uStack_70;
    pppuVar6 = (undefined8 ***)ppuStack_78;
    if (-1 < (char)bStack_61) {
      uVar8 = (ulong)bStack_61;
      pppuVar6 = &ppuStack_78;
    }
    func_0x005757a0(pppuVar6,uVar8,&uStack_48,10);
    if ((char)bStack_61 < '\0') {
      __ZdlPv(ppuStack_78);
    }
    bVar1 = (int)pppuVar6 == 0;
    uVar7 = 0;
    unaff_x21 = (undefined8 ***)(uStack_48 >> 8);
    if (!bVar1) {
      uVar7 = (uint)uStack_48;
    }
  }
  uVar9 = (uint)!bVar1;
  uVar8 = (ulong)uVar7;
  if (cStack_50 != '\0') {
    FUN_00543968(abStack_60);
  }
LAB_003b6a14:
  auVar11._8_4_ = uVar9;
  auVar11._0_8_ = uVar8 & 0xff | (long)unaff_x21 << 8;
  auVar11._12_4_ = 0;
  return auVar11;
}



/* Entry: 003b6954; end: 003b6ad7;  */

undefined1  [16] FUN_003b6954(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 ***unaff_x21;
  undefined1 auVar8 [16];
  undefined8 **ppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  byte abStack_50 [8];
  long lStack_48;
  char cStack_40;
  ulong uStack_38;
  
  FUN_003b6918(param_2);
  uVar3 = param_2;
  _strlen();
  FUN_00552040(abStack_50,param_1,param_2,uVar3);
  if (cStack_40 == '\0') {
    uVar7 = 0;
    uVar6 = 0;
    goto LAB_003b6a14;
  }
  if ((abStack_50[0] & 1) == 0) {
    pppuVar4 = (undefined8 ***)((ulong)abStack_50 | 1);
LAB_003b69dc:
    iVar2 = (int)pppuVar4;
    func_0x005757a0();
    bVar1 = iVar2 == 0;
    uVar5 = 0;
    unaff_x21 = (undefined8 ***)ppuStack_68;
    if (!bVar1) {
      uVar5 = (uint)ppuStack_68;
      unaff_x21 = (undefined8 ***)((ulong)ppuStack_68 >> 8);
    }
  }
  else {
    pppuVar4 = (undefined8 ***)0x0;
    if (lStack_48 == 0) goto LAB_003b69dc;
    ppuStack_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    FUN_0055a308(lStack_48,&ppuStack_68);
    pppuVar4 = (undefined8 ***)ppuStack_68;
    if ((int)lStack_48 != 0) goto LAB_003b69dc;
    FUN_00559e74(&ppuStack_68,abStack_50);
    uVar6 = uStack_60;
    pppuVar4 = (undefined8 ***)ppuStack_68;
    if (-1 < (char)bStack_51) {
      uVar6 = (ulong)bStack_51;
      pppuVar4 = &ppuStack_68;
    }
    func_0x005757a0(pppuVar4,uVar6,&uStack_38,10);
    if ((char)bStack_51 < '\0') {
      __ZdlPv(ppuStack_68);
    }
    bVar1 = (int)pppuVar4 == 0;
    uVar5 = 0;
    unaff_x21 = (undefined8 ***)(uStack_38 >> 8);
    if (!bVar1) {
      uVar5 = (uint)uStack_38;
    }
  }
  uVar7 = (uint)!bVar1;
  uVar6 = (ulong)uVar5;
  if (cStack_40 != '\0') {
    FUN_00543968(abStack_50);
  }
LAB_003b6a14:
  auVar8._8_4_ = uVar7;
  auVar8._0_8_ = uVar6 & 0xff | (long)unaff_x21 << 8;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 003b6ad8; end: 003b6b13;  */

char * FUN_003b6ad8(uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 *extraout_x8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char acStack_58 [16];
  char cStack_48;
  
  if (param_1 < 0xb) {
    return (&PTR_s_type_googleapis_com_grpc_status__009dfe30)[(int)param_1];
  }
  pcVar1 = "return \"unknown\"";
  pcVar2 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/status_helper.cc";
  func_0x00338df0("return \"unknown\"",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/status_helper.cc"
                  ,0x7b);
  FUN_003b6ad8(pcVar2);
  pcVar3 = pcVar2;
  _strlen();
  FUN_00552040(acStack_58,pcVar1,pcVar2,pcVar3);
  if (cStack_48 == '\0') {
    *(undefined1 *)extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 3) = 0;
  }
  else {
    pcVar1 = acStack_58;
    FUN_00559e74(&uStack_70,pcVar1);
    extraout_x8[1] = uStack_68;
    *extraout_x8 = uStack_70;
    extraout_x8[2] = uStack_60;
    *(undefined1 *)(extraout_x8 + 3) = 1;
    if (cStack_48 != '\0') {
      pcVar1 = acStack_58;
      FUN_00543968(pcVar1);
    }
  }
  return pcVar1;
}



/* Entry: 003b6b14; end: 003b6bcb;  */

void FUN_003b6b14(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  char cStack_38;
  
  FUN_003b6ad8(param_3);
  uVar1 = param_3;
  _strlen();
  FUN_00552040(auStack_48,param_2,param_3,uVar1);
  if (cStack_38 == '\0') {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    FUN_00559e74(&uStack_60,auStack_48);
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[2] = uStack_50;
    *(undefined1 *)(param_1 + 3) = 1;
    if (cStack_38 != '\0') {
      FUN_00543968(auStack_48);
    }
  }
  return;
}



/* Entry: 003b6bcc; end: 003b6deb;  */

undefined ** FUN_003b6bcc(ulong *param_1,undefined *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *extraout_x8;
  undefined *puStack_e0;
  long lStack_d8;
  byte bStack_c8;
  undefined7 uStack_c7;
  long lStack_c0;
  char cStack_b8;
  undefined *puStack_b0;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined ***pppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long *plStack_68;
  ulong uStack_60;
  undefined *puStack_58;
  undefined **ppuStack_48;
  byte bStack_40;
  undefined7 uStack_3f;
  undefined7 *puStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar4 = &PTR_PTR_00a06a80;
  puStack_70 = param_2;
  FUN_005d0f6c();
  puVar5 = param_1;
  ppuStack_78 = ppuVar4;
  FUN_00552acc();
  *(int *)ppuVar4 = (int)puVar5;
  uVar8 = *param_1;
  if ((uVar8 & 1) == 0) {
    puStack_58 = &UNK_00810ff6;
    bVar3 = (uVar8 & 3) != 2;
    if (bVar3) {
      puStack_58 = (undefined *)0x0;
    }
    uStack_60 = 0x1b;
    if (bVar3) {
      uStack_60 = 0;
    }
  }
  else if ((char)*(byte *)(uVar8 + 0x1e) < '\0') {
    puStack_58 = *(undefined **)(uVar8 + 7);
    uStack_60 = *(ulong *)(uVar8 + 0xf);
  }
  else {
    puStack_58 = (undefined *)(uVar8 + 7);
    uStack_60 = (ulong)*(byte *)(uVar8 + 0x1e);
  }
  plStack_68 = (long *)((long)&MACH_HEADER.magic + 1);
  FUN_003eb9e4(&ppuStack_48,&plStack_68,1);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_68) {
    do {
      lVar9 = *plStack_68;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_68,0x10);
      if (bVar3) {
        *plStack_68 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)plStack_68[1])();
    }
  }
  uVar8 = (ulong)bStack_40;
  if (ppuStack_48 != (undefined **)0x0) {
    uVar8 = CONCAT71(uStack_3f,bStack_40);
  }
  uVar8 = uVar8 + 0xf & 0xfffffffffffffff0;
  puVar6 = *(undefined **)(puStack_70 + 8);
  if ((ulong)(*(long *)(puStack_70 + 0x10) - (long)puVar6) < uVar8) {
    puVar6 = puStack_70;
    FUN_005d1df0();
    if (ppuStack_48 != (undefined **)0x0) goto LAB_003b6cd4;
LAB_003b6d00:
    if (bStack_40 != 0) {
      puStack_38 = &uStack_3f;
      goto LAB_003b6d10;
    }
  }
  else {
    *(undefined **)(puStack_70 + 8) = puVar6 + uVar8;
    if (ppuStack_48 == (undefined **)0x0) goto LAB_003b6d00;
LAB_003b6cd4:
    if (CONCAT71(uStack_3f,bStack_40) == 0) {
      puVar10 = (undefined *)0x0;
      goto LAB_003b6d34;
    }
LAB_003b6d10:
    _memcpy(puVar6,puStack_38);
    if (ppuStack_48 != (undefined **)0x0) {
      puVar10 = (undefined *)CONCAT71(uStack_3f,bStack_40);
      goto LAB_003b6d34;
    }
  }
  puVar10 = (undefined *)(ulong)bStack_40;
LAB_003b6d34:
  ppuStack_78[1] = puVar6;
  ppuStack_78[2] = puVar10;
  pppuStack_88 = &ppuStack_78;
  ppuStack_80 = &puStack_70;
  FUN_005527f0(param_1,&pppuStack_88,FUN_003b8858);
  ppuVar7 = ppuStack_78;
  ppuVar4 = ppuStack_48;
  if ((undefined **)((long)&MACH_HEADER.magic + 1) < ppuStack_48) {
    do {
      puVar10 = *ppuStack_48;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuStack_48,0x10);
      if (bVar3) {
        *ppuStack_48 = puVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar10 + -1 == (undefined *)0x0) {
      (*(code *)ppuStack_48[1])();
      ppuVar4 = ppuStack_48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
    FUN_0034b418(&ppuStack_48);
    __Unwind_Resume(ppuVar4);
    ppuVar7 = &puStack_e0;
    pcStack_98 = FUN_003b6dec;
    puStack_b0 = puVar6;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_00552040(&bStack_c8);
    if (cStack_b8 == '\0') {
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
    }
    else {
      if (((bStack_c8 & 1) == 0) || (lStack_c0 == 0)) {
        puStack_e0 = (undefined *)CONCAT71(uStack_c7,bStack_c8);
        lStack_d8 = lStack_c0;
      }
      else {
        piVar1 = (int *)(lStack_c0 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puStack_e0 = (undefined *)0x1;
        lStack_d8 = lStack_c0;
        if (1 < CONCAT71(uStack_c7,bStack_c8)) {
          FUN_0055ae58(&puStack_e0,&bStack_c8,8);
        }
      }
      FUN_003b6edc(extraout_x8,&puStack_e0);
      FUN_00543968(&puStack_e0);
      ppuVar4 = ppuVar7;
      if (cStack_b8 != '\0') {
        ppuVar4 = (undefined **)&bStack_c8;
        FUN_00543968(ppuVar4);
      }
    }
    return ppuVar4;
  }
  return ppuVar7;
}



/* Entry: 003b6dec; end: 003b6edb;  */

void FUN_003b6dec(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_50;
  long lStack_48;
  byte bStack_38;
  undefined7 uStack_37;
  long lStack_30;
  char cStack_28;
  
  FUN_00552040(&bStack_38,param_2,"type.googleapis.com/grpc.status.children",0x28);
  if (cStack_28 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if (((bStack_38 & 1) == 0) || (lStack_30 == 0)) {
      uStack_50 = CONCAT71(uStack_37,bStack_38);
      lStack_48 = lStack_30;
    }
    else {
      piVar1 = (int *)(lStack_30 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uStack_50 = 1;
      lStack_48 = lStack_30;
      if (1 < CONCAT71(uStack_37,bStack_38)) {
        FUN_0055ae58(&uStack_50,&bStack_38,8);
      }
    }
    FUN_003b6edc(param_1,&uStack_50);
    FUN_00543968(&uStack_50);
    if (cStack_28 != '\0') {
      FUN_00543968(&bStack_38);
    }
  }
  return;
}



/* Entry: 003b6edc; end: 003b7177;  */

void FUN_003b6edc(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  char *pcVar6;
  undefined **ppuVar7;
  long *plVar8;
  long **pplVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long **pplVar14;
  ulong uVar15;
  long lVar16;
  long *plStack_90;
  long **pplStack_88;
  long **pplStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = 0;
  FUN_005d20a4(0,0,&PTR_FUN_00b1f0c8);
  if (((long)(char)*param_2 & 1U) == 0) {
    plVar13 = (long *)((long)param_2 + 1);
    pplVar14 = (long **)((ulong)(long)(char)*param_2 >> 1);
  }
  else {
    lVar10 = param_2[1];
    if (lVar10 == 0) goto LAB_003b70a8;
    plStack_90 = (long *)0x0;
    pplStack_88 = (long **)0x0;
    pplVar9 = &plStack_90;
    FUN_0055a308();
    plVar13 = plStack_90;
    pplVar14 = pplStack_88;
    if ((int)lVar10 == 0) {
      FUN_0055a46c();
      plVar13 = param_2;
      pplVar14 = pplVar9;
    }
  }
  if ((long **)((long)&MACH_HEADER.magic + 3) < pplVar14) {
    lVar10 = 0;
    plVar1 = param_1 + 2;
    do {
      uVar15 = (ulong)*(uint *)((long)plVar13 + lVar10);
      lVar10 = lVar10 + 4;
      if ((ulong)((long)pplVar14 - lVar10) < uVar15) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/status_helper.cc"
                     ,0x9d,2,"assertion failed: %s");
        _abort();
LAB_003b710c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x3b7110);
        (*pcVar4)();
      }
      ppuVar7 = &PTR_PTR_00a06a80;
      FUN_005d0f6c(&PTR_PTR_00a06a80,lVar5);
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar7 = (undefined **)0x0;
      }
      else {
        pcVar6 = (char *)((long)plVar13 + lVar10);
        FUN_005cef54(pcVar6,uVar15,ppuVar7,&PTR_PTR_00a06a80,0,0,lVar5);
        if ((int)pcVar6 != 0) {
          ppuVar7 = (undefined **)0x0;
        }
      }
      FUN_003b78c0(&plStack_68,ppuVar7);
      puVar3 = (undefined8 *)param_1[1];
      if (puVar3 < (undefined8 *)param_1[2]) {
        *puVar3 = plStack_68;
        param_1[1] = (long)(puVar3 + 1);
      }
      else {
        lVar16 = (long)puVar3 - *param_1 >> 3;
        uVar2 = lVar16 + 1;
        if (uVar2 >> 0x3d != 0) {
          FUN_0035d520(param_1);
          goto LAB_003b710c;
        }
        uVar11 = param_1[2] - *param_1;
        uVar12 = (long)uVar11 >> 2;
        if (uVar12 <= uVar2) {
          uVar12 = uVar2;
        }
        if (0x7ffffffffffffff7 < uVar11) {
          uVar12 = 0x1fffffffffffffff;
        }
        plStack_70 = plVar1;
        if (uVar12 == 0) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = plVar1;
          FUN_0035d534();
        }
        pplStack_88 = (long **)(plVar8 + lVar16);
        plStack_78 = plVar8 + uVar12;
        pplStack_80 = pplStack_88 + 1;
        *pplStack_88 = plStack_68;
        plStack_68 = (long *)0x36;
        plStack_90 = plVar8;
        FUN_0035d4ac(param_1,&plStack_90);
        lVar16 = param_1[1];
        FUN_0035d67c(&plStack_90);
        param_1[1] = lVar16;
        if (((ulong)plStack_68 & 1) != 0) {
          FUN_0055293c();
        }
      }
      lVar10 = lVar10 + uVar15;
    } while (3 < (ulong)((long)pplVar14 - lVar10));
  }
LAB_003b70a8:
  if (lVar5 != 0) {
    FUN_005d2198(lVar5);
  }
  return;
}



/* Entry: 003b7178; end: 003b78bf;  */

/* WARNING: Removing unreachable block (ram,0x003b7200) */
/* WARNING: Removing unreachable block (ram,0x003b74a0) */

ulong *** FUN_003b7178(ulong ***param_1,ulong *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 **ppuVar6;
  code *pcVar7;
  char *pcVar8;
  ulong ***pppuVar9;
  ulong ***pppuVar10;
  long lVar11;
  ulong uVar12;
  ulong **ppuVar13;
  long lVar14;
  ulong uVar15;
  undefined8 ***pppuVar16;
  char **ppcStack_1e8;
  ulong *puStack_1e0;
  byte bStack_1d1;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  ulong uStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  byte bStack_171;
  byte bStack_170;
  undefined7 uStack_16f;
  long lStack_168;
  char cStack_160;
  ulong *puStack_158;
  ulong *puStack_150;
  ulong *puStack_148;
  ulong **ppuStack_140;
  ulong **ppuStack_138;
  ulong *puStack_130;
  undefined8 **ppuStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  char **ppcStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong **ppuStack_98;
  ulong **ppuStack_90;
  ulong **ppuStack_88;
  ulong **ppuStack_80;
  ulong **ppuStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*param_2 == 0) {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      pcVar8 = "OK";
      _strlen();
      if ((ulong **)0x7ffffffffffffff7 < pcVar8) {
        func_0x0033b318();
        if (*param_1 != (ulong **)0x0) {
          func_0x003711f8();
        }
        return param_1;
      }
      if (pcVar8 < (ulong **)0x17) {
        *(char *)((long)param_1 + 0x17) = (char)pcVar8;
        pppuVar9 = param_1;
        if ((ulong **)pcVar8 == (ulong **)0x0) goto LAB_003532e0;
      }
      else {
        uVar12 = ((ulong)pcVar8 & 0xfffffffffffffff8) + 8;
        if (((ulong)pcVar8 | 7) != 0x17) {
          uVar12 = (ulong)pcVar8 | 7;
        }
        pppuVar9 = (ulong ***)(uVar12 + 1);
        __Znwm();
        param_1[1] = (ulong **)pcVar8;
        param_1[2] = (ulong **)(uVar12 + 1 | 0x8000000000000000);
        *param_1 = (ulong **)pppuVar9;
      }
      _memmove(pppuVar9,"OK",pcVar8);
LAB_003532e0:
      *(char *)((long)pppuVar9 + (long)pcVar8) = '\0';
      return param_1;
    }
  }
  else {
    ppuStack_140 = (ulong **)0x0;
    ppuStack_138 = (ulong **)0x0;
    puStack_130 = (ulong *)0x0;
    FUN_00552acc();
    FUN_00551ce4(&ppcStack_c8);
    ppuStack_90 = (ulong **)puStack_c0;
    ppuStack_98 = (ulong **)ppcStack_c8;
    if (-1 < (long)puStack_b8) {
      ppuStack_90 = (ulong **)((ulong)puStack_b8 >> 0x38);
      ppuStack_98 = (ulong **)&ppcStack_c8;
    }
    FUN_005760f0(&ppuStack_140,&ppuStack_98);
    uVar12 = *param_2;
    if ((uVar12 & 1) == 0) {
      if ((uVar12 & 3) == 2) {
        ppcStack_c8 = (char **)&UNK_00810ff6;
        ppuVar13 = (ulong **)0x1b;
        goto LAB_003b72c8;
      }
    }
    else {
      bVar2 = *(byte *)(uVar12 + 0x1e);
      if ((char)bVar2 < '\0') {
        if (*(long *)(uVar12 + 0xf) != 0) {
          ppcStack_c8 = *(char ***)(uVar12 + 7);
          ppuVar13 = *(ulong ***)(uVar12 + 0xf);
          goto LAB_003b72c8;
        }
      }
      else {
        ppuVar13 = (ulong **)(ulong)bVar2;
        if (bVar2 != 0) {
          ppcStack_c8 = (char **)(uVar12 + 7);
LAB_003b72c8:
          ppuStack_90 = (ulong **)0x1;
          ppuStack_98 = (ulong **)0x8b8f2c;
          puStack_c0 = (ulong *)ppuVar13;
          FUN_005761b0(&ppuStack_140,&ppuStack_98,&ppcStack_c8);
        }
      }
    }
    puStack_158 = (ulong *)0x0;
    puStack_150 = (ulong *)0x0;
    puStack_148 = (ulong *)0x0;
    bStack_170 = 0;
    cStack_160 = '\0';
    ppuStack_98 = (ulong **)&bStack_170;
    ppuStack_90 = &puStack_158;
    FUN_005527f0(param_2,&ppuStack_98,FUN_003b7ba0);
    if (cStack_160 != '\0') {
      if (((bStack_170 & 1) == 0) || (lStack_168 == 0)) {
        uStack_1a0 = CONCAT71(uStack_16f,bStack_170);
        lStack_198 = lStack_168;
      }
      else {
        piVar1 = (int *)(lStack_168 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uStack_1a0 = 1;
        lStack_198 = lStack_168;
        if (1 < CONCAT71(uStack_16f,bStack_170)) {
          FUN_0055ae58(&uStack_1a0,&bStack_170,8);
        }
      }
      FUN_003b6edc(&ppuStack_188,&uStack_1a0);
      FUN_00543968(&uStack_1a0);
      uStack_1b8 = 0;
      puStack_1b0 = (ulong *)0x0;
      puStack_1a8 = (ulong *)0x0;
      FUN_00426a0c(&uStack_1b8,(long)ppuStack_180 - (long)ppuStack_188 >> 3);
      ppuVar6 = ppuStack_180;
      if (ppuStack_188 != ppuStack_180) {
        pppuVar16 = (undefined8 ***)ppuStack_188;
        do {
          FUN_003b7178(&ppcStack_c8,pppuVar16);
          if (puStack_1b0 < puStack_1a8) {
            puStack_1b0[2] = (ulong)puStack_b8;
            puStack_1b0[1] = (ulong)puStack_c0;
            *puStack_1b0 = (ulong)ppcStack_c8;
            puStack_1b0 = puStack_1b0 + 3;
          }
          else {
            lVar14 = (long)((long)puStack_1b0 - uStack_1b8) >> 3;
            uVar12 = lVar14 * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar12) {
              FUN_0037b568(&uStack_1b8);
              goto LAB_003b7790;
            }
            lVar11 = (long)((long)puStack_1a8 - uStack_1b8) >> 3;
            uVar15 = lVar11 * 0x5555555555555556;
            if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
              uVar15 = uVar12;
            }
            if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
              uVar15 = 0xaaaaaaaaaaaaaaa;
            }
            ppuStack_78 = &puStack_1a8;
            if (uVar15 == 0) {
              pppuVar9 = (ulong ***)0x0;
            }
            else {
              pppuVar9 = (ulong ***)&puStack_1a8;
              FUN_0037b57c();
            }
            pppuVar10 = pppuVar9 + lVar14;
            ppuStack_80 = (ulong **)(pppuVar9 + uVar15 * 3);
            ppuStack_98 = (ulong **)pppuVar9;
            ppuStack_90 = (ulong **)pppuVar10;
            pppuVar10[2] = (ulong **)puStack_b8;
            pppuVar10[1] = (ulong **)puStack_c0;
            *pppuVar10 = (ulong **)ppcStack_c8;
            puStack_c0 = (ulong *)0x0;
            puStack_b8 = (ulong *)0x0;
            ppcStack_c8 = (char **)0x0;
            ppuStack_88 = (ulong **)(pppuVar10 + 3);
            FUN_0045a5fc(&uStack_1b8,&ppuStack_98);
            puVar5 = puStack_1b0;
            func_0x00427834(&ppuStack_98);
            puStack_1b0 = puVar5;
          }
          pppuVar16 = pppuVar16 + 1;
        } while (pppuVar16 != (undefined8 ***)ppuVar6);
      }
      ppuStack_98 = (ulong **)0x8c7e42;
      ppuStack_90 = (ulong **)((long)&MACH_HEADER.cpusubtype + 2);
      FUN_0037b5c0(&ppcStack_1e8,uStack_1b8,puStack_1b0,", ",2);
      puStack_c0 = puStack_1e0;
      ppcStack_c8 = ppcStack_1e8;
      if (-1 < (char)bStack_1d1) {
        puStack_c0 = (ulong *)(ulong)bStack_1d1;
        ppcStack_c8 = (char **)&ppcStack_1e8;
      }
      ppuStack_f8 = (undefined8 **)0x8dd325;
      ppuStack_f0 = (undefined8 **)((long)&MACH_HEADER.magic + 1);
      FUN_00575ddc(&puStack_1d0,&ppuStack_98,&ppcStack_c8,&ppuStack_f8);
      if (puStack_150 < puStack_148) {
        puStack_150[2] = (ulong)puStack_1c0;
        puStack_150[1] = (ulong)puStack_1c8;
        *puStack_150 = (ulong)puStack_1d0;
        puStack_1c8 = (ulong *)0x0;
        puStack_1c0 = (ulong *)0x0;
        puStack_1d0 = (ulong *)0x0;
        puStack_150 = puStack_150 + 3;
      }
      else {
        lVar14 = (long)puStack_150 - (long)puStack_158 >> 3;
        uVar12 = lVar14 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_003b7788;
        ppuVar13 = &puStack_148;
        lVar11 = (long)puStack_148 - (long)puStack_158 >> 3;
        uVar15 = lVar11 * 0x5555555555555556;
        if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
          uVar15 = uVar12;
        }
        if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
          uVar15 = 0xaaaaaaaaaaaaaaa;
        }
        ppuStack_108 = ppuVar13;
        if (uVar15 == 0) {
          ppuStack_128 = (ulong **)0x0;
        }
        else {
          FUN_0037b57c();
          ppuStack_128 = ppuVar13;
        }
        ppuVar13 = ppuStack_128 + lVar14;
        ppuStack_110 = ppuStack_128 + uVar15 * 3;
        ppuStack_120 = ppuVar13;
        ppuVar13[2] = puStack_1c0;
        ppuVar13[1] = puStack_1c8;
        *ppuVar13 = puStack_1d0;
        puStack_1c8 = (ulong *)0x0;
        puStack_1c0 = (ulong *)0x0;
        puStack_1d0 = (ulong *)0x0;
        ppuStack_118 = ppuVar13 + 3;
        FUN_0045a5fc(&puStack_158,&ppuStack_128);
        puVar5 = puStack_150;
        func_0x00427834(&ppuStack_128);
        puStack_150 = puVar5;
        if ((long)puStack_1c0 < 0) {
          __ZdlPv(puStack_1d0);
        }
      }
      if ((char)bStack_1d1 < '\0') {
        __ZdlPv(ppcStack_1e8);
      }
      ppuStack_98 = (ulong **)&uStack_1b8;
      FUN_0037b728(&ppuStack_98);
      ppuStack_98 = (ulong **)&ppuStack_188;
      FUN_0033d548(&ppuStack_98);
    }
    if (puStack_158 == puStack_150) {
      if ((long)puStack_130 < 0) {
        FUN_002971d4(param_1,ppuStack_140,ppuStack_138);
      }
      else {
        param_1[1] = ppuStack_138;
        *param_1 = ppuStack_140;
        param_1[2] = (ulong **)puStack_130;
      }
    }
    else {
      ppuStack_90 = ppuStack_138;
      ppuStack_98 = ppuStack_140;
      if (-1 < (long)puStack_130) {
        ppuStack_90 = (ulong **)((ulong)puStack_130 >> 0x38);
        ppuStack_98 = (ulong **)&ppuStack_140;
      }
      ppcStack_c8 = (char **)0x8c7e4d;
      puStack_c0 = (ulong *)0x2;
      FUN_0037b5c0(&ppuStack_188,puStack_158,puStack_150,", ",2);
      ppuStack_f0 = ppuStack_180;
      ppuStack_f8 = ppuStack_188;
      if (-1 < (char)bStack_171) {
        ppuStack_f0 = (undefined8 ***)(ulong)bStack_171;
        ppuStack_f8 = &ppuStack_188;
      }
      ppuStack_128 = (undefined8 **)0x8e50dc;
      ppuStack_120 = (undefined8 **)((long)&MACH_HEADER.magic + 1);
      FUN_00575ebc(param_1,&ppuStack_98,&ppcStack_c8,&ppuStack_f8,&ppuStack_128);
      if ((char)bStack_171 < '\0') {
        __ZdlPv(ppuStack_188);
      }
    }
    if (cStack_160 != '\0') {
      FUN_00543968(&bStack_170);
    }
    ppuStack_98 = &puStack_158;
    pppuVar9 = &ppuStack_98;
    FUN_0037b728(pppuVar9);
    if ((long)puStack_130 < 0) {
      pppuVar9 = (ulong ***)ppuStack_140;
      __ZdlPv(ppuStack_140);
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return pppuVar9;
    }
  }
  ___stack_chk_fail();
LAB_003b7788:
  FUN_0037b568(&puStack_158);
LAB_003b7790:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x3b7794);
  (*pcVar7)();
}



/* Entry: 003b78c0; end: 003b7aaf;  */

void FUN_003b78c0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_c0 [16];
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar5 = *param_2;
  uStack_a0 = *(undefined8 *)(param_2 + 2);
  uStack_a8 = *(undefined8 *)(param_2 + 4);
  plStack_b0 = (long *)((long)&MACH_HEADER.magic + 1);
  uStack_68 = 0;
  puStack_70 = (ulong *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_003ebc04(&plStack_90,&plStack_b0);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
    do {
      lVar7 = *plStack_b0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
      if (bVar3) {
        *plStack_b0 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_b0[1])();
    }
  }
  uVar11 = uStack_88 & 0xff;
  lVar7 = (long)&uStack_88 + 1;
  if (plStack_90 != (long *)0x0) {
    uVar11 = uStack_88;
    lVar7 = lStack_80;
  }
  FUN_00552acc(param_1,iVar5,lVar7,uVar11);
  puVar8 = *(ulong **)(param_2 + 6);
  if ((puVar8 != (ulong *)0x0) && (uVar11 = puVar8[1], uVar11 != 0)) {
    puVar12 = (undefined8 *)(*puVar8 & 0xfffffffffffffff8);
    do {
      puVar9 = (undefined8 *)*puVar12;
      uVar6 = *puVar9;
      uVar1 = puVar9[1];
      FUN_00557b34(auStack_c0,puVar9[2],puVar9[3],9);
      FUN_005521b8(param_1,uVar6,uVar1,auStack_c0);
      iVar5 = (int)uVar6;
      FUN_00543968(auStack_c0);
      puVar12 = puVar12 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
    do {
      lVar7 = *plStack_90;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar3) {
        *plStack_90 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  puVar8 = puStack_70;
  if ((ulong *)((long)&MACH_HEADER.magic + 1) < puStack_70) {
    do {
      uVar11 = *puStack_70;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puStack_70,0x10);
      if (bVar3) {
        *puStack_70 = uVar11 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar11 - 1 == 0) {
      (*(code *)puStack_70[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    func_0x0040cf10();
    FUN_0034b418(&plStack_90);
    FUN_0034b418(&puStack_70);
  }
  __Unwind_Resume();
  uVar11 = *puVar8;
  if (uVar11 != 0) {
    pdVar4 = &MACH_HEADER.cpusubtype;
    __Znwm();
    *(ulong *)pdVar4 = uVar11;
    if ((uVar11 & 1) != 0) {
      piVar10 = (int *)(uVar11 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}



/* Entry: 003b7ab0; end: 003b7afb;  */

void FUN_003b7ab0(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  dword *pdVar3;
  int *piVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  if (uVar5 != 0) {
    pdVar3 = &MACH_HEADER.cpusubtype;
    __Znwm();
    *(ulong *)pdVar3 = uVar5;
    if ((uVar5 & 1) != 0) {
      piVar4 = (int *)(uVar5 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 003b7afc; end: 003b7b3b;  */

void FUN_003b7afc(ulong *param_1)

{
  if (param_1 != (ulong *)0x0) {
    if ((*param_1 & 1) != 0) {
      FUN_0055293c();
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  return;
}



/* Entry: 003b7b3c; end: 003b7b6b;  */

void FUN_003b7b3c(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  
  if (param_2 != (ulong *)0x0) {
    uVar4 = *param_2;
    *param_1 = uVar4;
    if ((uVar4 & 1) != 0) {
      piVar3 = (int *)(uVar4 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 003b7b6c; end: 003b7b9f;  */

void FUN_003b7b6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
    __ZdlPv();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 003b7ba0; end: 003b877f;  */

undefined1  [8]
FUN_003b7ba0(long *param_1,segment_command *param_2,segment_command *param_3,
            segment_command *param_4)

{
  qword *pqVar1;
  dword dVar2;
  dword dVar3;
  code *pcVar4;
  segment_command *psVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auVar8 [8];
  undefined1 auVar9 [8];
  byte bVar10;
  ulong uVar11;
  qword *pqVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  bool bVar18;
  segment_command *unaff_x23;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined1 auStack_190 [8];
  segment_command *psStack_188;
  qword *pqStack_180;
  undefined1 auStack_178 [8];
  segment_command *psStack_170;
  ulong uStack_168;
  undefined1 auStack_160 [8];
  segment_command *psStack_158;
  ulong uStack_150;
  undefined1 auStack_140 [8];
  segment_command *psStack_138;
  qword *pqStack_130;
  char *pcStack_128;
  segment_command *psStack_120;
  undefined1 auStack_118 [16];
  qword *pqStack_108;
  char *pcStack_100;
  segment_command *psStack_f8;
  segment_command *psStack_e8;
  segment_command *psStack_e0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  segment_command *psStack_88;
  segment_command *psStack_80;
  ulong uStack_78;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar12 = &param_3[-1].fileoff;
  if ((param_3 < &segment_command_00000020) ||
     (lVar15._0_4_ = param_2->cmd, lVar15._4_4_ = param_2->cmdsize,
     ((lVar15 != 0x6f6f672e65707974 || *(long *)param_2->segname != 0x2e73697061656c67) ||
     *(long *)(param_2->segname + 8) != 0x637072672f6d6f63) || param_2->vmaddr != 0x2e7375746174732e
     )) {
    uVar11 = (ulong)(char)param_4->cmd;
    if ((uVar11 & 1) == 0) {
      auVar9 = (undefined1  [8])((long)&param_4->cmd + 1);
      psVar5 = (segment_command *)(uVar11 >> 1);
LAB_003b7cdc:
      bVar18 = true;
    }
    else {
      lVar15 = *(long *)param_4->segname;
      auVar9 = (undefined1  [8])(segment_command *)0x0;
      psVar5 = param_2;
      if (lVar15 == 0) goto LAB_003b7cdc;
      psStack_88 = (segment_command *)0x0;
      psStack_80 = (segment_command *)0x0;
      FUN_0055a308(lVar15,&psStack_88);
      auVar9 = (undefined1  [8])psStack_88;
      psVar5 = psStack_80;
      if ((int)lVar15 != 0) goto LAB_003b7cdc;
      FUN_00559e74(auStack_178,param_4);
      bVar18 = false;
      auVar9 = auStack_178;
      psVar5 = psStack_170;
      if (-1 < (long)uStack_168) {
        auVar9 = (undefined1  [8])auStack_178;
        psVar5 = (segment_command *)(uStack_168 >> 0x38);
      }
    }
    FUN_00572aa8(auStack_160,auVar9,psVar5);
    if ((!bVar18) && ((long)uStack_168 < 0)) {
      __ZdlPv(auStack_178);
    }
    param_1 = (long *)param_1[1];
    pcStack_b8 = ":\"";
    uStack_b0 = 2;
    psStack_e0 = psStack_158;
    psStack_e8 = (segment_command *)auStack_160;
    if (-1 < (long)uStack_150) {
      psStack_e0 = (segment_command *)(uStack_150 >> 0x38);
      psStack_e8 = (segment_command *)auStack_160;
    }
    auStack_118._0_8_ = "\"";
    auStack_118._8_8_ = (long)&MACH_HEADER.magic + 1;
    psStack_88 = param_2;
    psStack_80 = param_3;
    FUN_00575ebc(auStack_190,&psStack_88,&pcStack_b8,&psStack_e8,auStack_118);
    auVar9 = (undefined1  [8])(param_1 + 2);
    puVar14 = (undefined8 *)param_1[1];
    pqVar12 = pqStack_180;
    auVar8 = auStack_190;
    psVar5 = psStack_188;
    if (puVar14 < *(undefined8 **)auVar9) goto LAB_003b7d78;
    lVar15 = (long)puVar14 - *param_1 >> 3;
    uVar11 = lVar15 * -0x5555555555555555 + 1;
    if (uVar11 < 0xaaaaaaaaaaaaaab) {
      lVar13 = (long)*(undefined8 **)auVar9 - *param_1 >> 3;
      uVar17 = lVar13 * 0x5555555555555556;
      if (uVar17 < uVar11 || uVar17 - uVar11 == 0) {
        uVar17 = uVar11;
      }
      if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
        uVar17 = 0xaaaaaaaaaaaaaaa;
      }
      psStack_120 = (segment_command *)auVar9;
      if (uVar17 == 0) {
        auStack_140 = (undefined1  [8])0x0;
      }
      else {
        FUN_0037b57c();
        auStack_140 = auVar9;
      }
      psStack_138 = (segment_command *)(((segment_command *)auStack_140)->segname + lVar15 * 8 + -8)
      ;
      pcStack_128 = ((segment_command *)auStack_140)->segname + uVar17 * 0x18 + -8;
      *(qword **)(psStack_138->segname + 8) = pqStack_180;
      *(segment_command **)psStack_138->segname = psStack_188;
      psStack_138->cmd = auStack_190._0_4_;
      psStack_138->cmdsize = auStack_190._4_4_;
      psStack_188 = (segment_command *)0x0;
      pqStack_180 = (qword *)0x0;
      auStack_190 = (undefined1  [8])0x0;
      pqStack_130 = &psStack_138->vmaddr;
      FUN_0045a5fc(param_1,auStack_140);
      lVar15 = param_1[1];
      auVar9 = (undefined1  [8])auStack_140;
      func_0x00427834(auVar9);
      param_1[1] = lVar15;
      auVar8 = auStack_190;
      pqVar12 = pqStack_180;
joined_r0x003b8278:
      if ((long)pqVar12 < 0) {
        __ZdlPv(auVar8);
        auVar9 = auVar8;
      }
      goto LAB_003b8284;
    }
  }
  else {
    pqVar1 = &param_2->vmsize;
    if ((pqVar12 == (qword *)&MACH_HEADER.cpusubtype) && (*pqVar1 == 0x6e6572646c696863)) {
      psVar5 = (segment_command *)*param_1;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
        if (psVar5->segname[8] == '\0') {
          func_0x003b87e8(psVar5);
          psVar5->segname[8] = '\x01';
        }
        else if (psVar5 != param_4) {
          if (((psVar5->cmd & 1) == 0) && ((param_4->cmd & 1) == 0)) {
            dVar2 = param_4->cmd;
            dVar3 = param_4->cmdsize;
            *(undefined8 *)psVar5->segname = *(undefined8 *)param_4->segname;
            psVar5->cmd = dVar2;
            psVar5->cmdsize = dVar3;
          }
          else {
            FUN_00557884(psVar5);
          }
        }
        return (undefined1  [8])psVar5;
      }
    }
    else {
      auStack_160 = (undefined1  [8])0x0;
      psStack_158 = (segment_command *)0x0;
      uStack_150 = 0;
      bVar10 = (byte)param_4->cmd;
      if (((bVar10 & 1) == 0) || (lVar15 = *(long *)param_4->segname, lVar15 == 0)) {
LAB_003b7cc8:
        if ((bVar10 & 1) == 0) {
          psVar5 = (segment_command *)((long)&param_4->cmd + 1);
          unaff_x23 = (segment_command *)((ulong)(long)(char)bVar10 >> 1);
        }
        else {
          lVar15 = *(long *)param_4->segname;
          if (lVar15 == 0) {
            psVar5 = (segment_command *)0x0;
          }
          else {
            psStack_88 = (segment_command *)0x0;
            psStack_80 = (segment_command *)0x0;
            FUN_0055a308(lVar15,&psStack_88);
            psVar5 = psStack_88;
            unaff_x23 = psStack_80;
            if ((int)lVar15 == 0) {
              FUN_0034b1d8();
              goto LAB_003b8684;
            }
          }
        }
      }
      else {
        psStack_88 = (segment_command *)0x0;
        psStack_80 = (segment_command *)0x0;
        FUN_0055a308(lVar15,&psStack_88);
        if ((int)lVar15 != 0) {
          bVar10 = (byte)param_4->cmd;
          goto LAB_003b7cc8;
        }
        FUN_00559e74(&psStack_88,param_4);
        if ((long)uStack_150 < 0) {
          __ZdlPv(auStack_160);
        }
        uStack_150 = uStack_78;
        psStack_158 = psStack_80;
        auStack_160 = (undefined1  [8])psStack_88;
        psVar5 = psStack_88;
        unaff_x23 = psStack_80;
        if (-1 < (long)uStack_78) {
          psVar5 = (segment_command *)auStack_160;
          unaff_x23 = (segment_command *)(uStack_78 >> 0x38);
        }
      }
      if (pqVar12 < &MACH_HEADER.cputype) {
LAB_003b7f34:
        param_1 = (long *)param_1[1];
        pcStack_b8 = ":\"";
        uStack_b0 = 2;
        psStack_88 = (segment_command *)pqVar1;
        psStack_80 = (segment_command *)pqVar12;
        FUN_00572aa8(auStack_190,psVar5,unaff_x23);
        psStack_e0 = psStack_188;
        psStack_e8 = (segment_command *)auStack_190;
        if (-1 < (long)pqStack_180) {
          psStack_e0 = (segment_command *)((ulong)pqStack_180 >> 0x38);
          psStack_e8 = (segment_command *)auStack_190;
        }
        auStack_118._0_8_ = "\"";
        auStack_118._8_8_ = (long)&MACH_HEADER.magic + 1;
        FUN_00575ebc(auStack_178,&psStack_88,&pcStack_b8,&psStack_e8,auStack_118);
        auVar9 = (undefined1  [8])(param_1 + 2);
        plVar16 = (long *)param_1[1];
        if (plVar16 < *(long **)auVar9) goto LAB_003b7fb8;
        lVar15 = (long)plVar16 - *param_1 >> 3;
        uVar11 = lVar15 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar11) {
          FUN_0037b568(param_1);
          goto LAB_003b8684;
        }
        lVar13 = (long)*(long **)auVar9 - *param_1 >> 3;
        uVar17 = lVar13 * 0x5555555555555556;
        if (uVar17 < uVar11 || uVar17 - uVar11 == 0) {
          uVar17 = uVar11;
        }
        if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
          uVar17 = 0xaaaaaaaaaaaaaaa;
        }
        psStack_120 = (segment_command *)auVar9;
        if (uVar17 == 0) {
          auStack_140 = (undefined1  [8])0x0;
        }
        else {
          FUN_0037b57c();
          auStack_140 = auVar9;
        }
        psStack_138 = (segment_command *)
                      (((segment_command *)auStack_140)->segname + lVar15 * 8 + -8);
        pcStack_128 = ((segment_command *)auStack_140)->segname + uVar17 * 0x18 + -8;
        *(ulong *)(psStack_138->segname + 8) = uStack_168;
        *(segment_command **)psStack_138->segname = psStack_170;
        psStack_138->cmd = auStack_178._0_4_;
        psStack_138->cmdsize = auStack_178._4_4_;
        psStack_170 = (segment_command *)0x0;
        uStack_168 = 0;
        auStack_178 = (undefined1  [8])0x0;
        pqStack_130 = &psStack_138->vmaddr;
        FUN_0045a5fc(param_1,auStack_140);
        goto LAB_003b8254;
      }
      if ((int)*pqVar1 != 0x2e746e69) {
        if ((int)*pqVar1 == 0x2e727473) {
          psStack_88 = (segment_command *)((long)&param_2->vmsize + 4);
          psStack_80 = (segment_command *)((long)&param_3[-1].vmsize + 4);
          param_1 = (long *)param_1[1];
          pcStack_b8 = ":\"";
          uStack_b0 = 2;
          FUN_00572aa8(auStack_190,psVar5,unaff_x23);
          psStack_e0 = psStack_188;
          psStack_e8 = (segment_command *)auStack_190;
          if (-1 < (long)pqStack_180) {
            psStack_e0 = (segment_command *)((ulong)pqStack_180 >> 0x38);
            psStack_e8 = (segment_command *)auStack_190;
          }
          auStack_118._0_8_ = "\"";
          auStack_118._8_8_ = (long)&MACH_HEADER.magic + 1;
          FUN_00575ebc(auStack_178,&psStack_88,&pcStack_b8,&psStack_e8,auStack_118);
          auVar9 = (undefined1  [8])(param_1 + 2);
          plVar16 = (long *)param_1[1];
          if (plVar16 < *(long **)auVar9) goto LAB_003b7fb8;
          lVar15 = (long)plVar16 - *param_1 >> 3;
          uVar11 = lVar15 * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar11) {
            FUN_0037b568(param_1);
            goto LAB_003b8684;
          }
          lVar13 = (long)*(long **)auVar9 - *param_1 >> 3;
          uVar17 = lVar13 * 0x5555555555555556;
          if (uVar17 < uVar11 || uVar17 - uVar11 == 0) {
            uVar17 = uVar11;
          }
          if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
            uVar17 = 0xaaaaaaaaaaaaaaa;
          }
          psStack_120 = (segment_command *)auVar9;
          if (uVar17 == 0) {
            auStack_140 = (undefined1  [8])0x0;
          }
          else {
            FUN_0037b57c();
            auStack_140 = auVar9;
          }
          psStack_138 = (segment_command *)
                        (((segment_command *)auStack_140)->segname + lVar15 * 8 + -8);
          pcStack_128 = ((segment_command *)auStack_140)->segname + uVar17 * 0x18 + -8;
          *(ulong *)(psStack_138->segname + 8) = uStack_168;
          *(segment_command **)psStack_138->segname = psStack_170;
          psStack_138->cmd = auStack_178._0_4_;
          psStack_138->cmdsize = auStack_178._4_4_;
          psStack_170 = (segment_command *)0x0;
          uStack_168 = 0;
          auStack_178 = (undefined1  [8])0x0;
          pqStack_130 = &psStack_138->vmaddr;
          FUN_0045a5fc(param_1,auStack_140);
          goto LAB_003b8254;
        }
        if ((pqVar12 < (undefined1 *)((long)&MACH_HEADER.cputype + 1)) ||
           ((int)*pqVar1 != 0x656d6974 || *(char *)((long)&param_2->vmsize + 4) != '.'))
        goto LAB_003b7f34;
        uStack_1a0 = 0;
        uStack_198 = 0;
        puVar7 = &UNK_00811404;
        puVar6 = puVar7;
        _strlen(&UNK_00811404);
        FUN_0056fbf8(&UNK_00811404,puVar6,psVar5,unaff_x23,&uStack_1a0,0);
        psStack_80 = (segment_command *)((long)&param_3[-1].vmsize + 3);
        psStack_88 = (segment_command *)((long)&param_2->vmsize + 5);
        param_1 = (long *)param_1[1];
        if ((int)puVar7 == 0) {
          pcStack_b8 = ":\"";
          uStack_b0 = 2;
          FUN_00572aa8(auStack_190,psVar5,unaff_x23);
          psStack_e0 = psStack_188;
          psStack_e8 = (segment_command *)auStack_190;
          if (-1 < (long)pqStack_180) {
            psStack_e0 = (segment_command *)((ulong)pqStack_180 >> 0x38);
            psStack_e8 = (segment_command *)auStack_190;
          }
          auStack_118._0_8_ = "\"";
          auStack_118._8_8_ = (long)&MACH_HEADER.magic + 1;
          FUN_00575ebc(auStack_178,&psStack_88,&pcStack_b8,&psStack_e8,auStack_118);
          auVar9 = (undefined1  [8])(param_1 + 2);
          plVar16 = (long *)param_1[1];
          if (*(long **)auVar9 <= plVar16) {
            lVar15 = (long)plVar16 - *param_1 >> 3;
            uVar11 = lVar15 * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar11) {
              FUN_0037b568(param_1);
              goto LAB_003b8684;
            }
            lVar13 = (long)*(long **)auVar9 - *param_1 >> 3;
            uVar17 = lVar13 * 0x5555555555555556;
            if (uVar17 < uVar11 || uVar17 - uVar11 == 0) {
              uVar17 = uVar11;
            }
            if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
              uVar17 = 0xaaaaaaaaaaaaaaa;
            }
            psStack_120 = (segment_command *)auVar9;
            if (uVar17 == 0) {
              auStack_140 = (undefined1  [8])0x0;
            }
            else {
              FUN_0037b57c();
              auStack_140 = auVar9;
            }
            psStack_138 = (segment_command *)
                          (((segment_command *)auStack_140)->segname + lVar15 * 8 + -8);
            pcStack_128 = ((segment_command *)auStack_140)->segname + uVar17 * 0x18 + -8;
            *(ulong *)(psStack_138->segname + 8) = uStack_168;
            *(segment_command **)psStack_138->segname = psStack_170;
            psStack_138->cmd = auStack_178._0_4_;
            psStack_138->cmdsize = auStack_178._4_4_;
            psStack_170 = (segment_command *)0x0;
            uStack_168 = 0;
            auStack_178 = (undefined1  [8])0x0;
            pqStack_130 = &psStack_138->vmaddr;
            FUN_0045a5fc(param_1,auStack_140);
            goto LAB_003b8254;
          }
LAB_003b7fb8:
          plVar16[2] = uStack_168;
          plVar16[1] = (long)psStack_170;
          *plVar16 = (long)auStack_178;
          psStack_170 = (segment_command *)0x0;
          uStack_168 = 0;
          auStack_178 = (undefined1  [8])0x0;
          plVar16 = plVar16 + 3;
          param_1[1] = (long)plVar16;
        }
        else {
          pcStack_b8 = ":\"";
          uStack_b0 = 2;
          FUN_0056fbac(auStack_190,uStack_1a0,uStack_198);
          psStack_e0 = psStack_188;
          psStack_e8 = (segment_command *)auStack_190;
          if (-1 < (long)pqStack_180) {
            psStack_e0 = (segment_command *)((ulong)pqStack_180 >> 0x38);
            psStack_e8 = (segment_command *)auStack_190;
          }
          auStack_118._0_8_ = "\"";
          auStack_118._8_8_ = (long)&MACH_HEADER.magic + 1;
          FUN_00575ebc(auStack_178,&psStack_88,&pcStack_b8,&psStack_e8,auStack_118);
          auVar9 = (undefined1  [8])(param_1 + 2);
          plVar16 = (long *)param_1[1];
          if (plVar16 < *(long **)auVar9) goto LAB_003b7fb8;
          lVar15 = (long)plVar16 - *param_1 >> 3;
          uVar11 = lVar15 * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar11) {
            FUN_0037b568(param_1);
            goto LAB_003b8684;
          }
          lVar13 = (long)*(long **)auVar9 - *param_1 >> 3;
          uVar17 = lVar13 * 0x5555555555555556;
          if (uVar17 < uVar11 || uVar17 - uVar11 == 0) {
            uVar17 = uVar11;
          }
          if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
            uVar17 = 0xaaaaaaaaaaaaaaa;
          }
          psStack_120 = (segment_command *)auVar9;
          if (uVar17 == 0) {
            auStack_140 = (undefined1  [8])0x0;
          }
          else {
            FUN_0037b57c();
            auStack_140 = auVar9;
          }
          psStack_138 = (segment_command *)
                        (((segment_command *)auStack_140)->segname + lVar15 * 8 + -8);
          pcStack_128 = ((segment_command *)auStack_140)->segname + uVar17 * 0x18 + -8;
          *(ulong *)(psStack_138->segname + 8) = uStack_168;
          *(segment_command **)psStack_138->segname = psStack_170;
          psStack_138->cmd = auStack_178._0_4_;
          psStack_138->cmdsize = auStack_178._4_4_;
          psStack_170 = (segment_command *)0x0;
          uStack_168 = 0;
          auStack_178 = (undefined1  [8])0x0;
          pqStack_130 = &psStack_138->vmaddr;
          FUN_0045a5fc(param_1,auStack_140);
LAB_003b8254:
          plVar16 = (long *)param_1[1];
          auVar9 = (undefined1  [8])auStack_140;
          func_0x00427834(auVar9);
        }
        param_1[1] = (long)plVar16;
        auVar8 = auStack_190;
        pqVar12 = pqStack_180;
        if ((long)uStack_168 < 0) {
          auVar9 = auStack_178;
          __ZdlPv(auStack_178);
          auVar8 = auStack_190;
          pqVar12 = pqStack_180;
        }
        goto joined_r0x003b8278;
      }
      psStack_88 = (segment_command *)((long)&param_2->vmsize + 4);
      param_1 = (long *)param_1[1];
      psStack_80 = (segment_command *)((long)&param_3[-1].vmsize + 4);
      pcStack_b8 = ":";
      uStack_b0 = 1;
      psStack_e8 = psVar5;
      psStack_e0 = unaff_x23;
      FUN_00575ddc(auStack_140,&psStack_88,&pcStack_b8,&psStack_e8);
      auVar9 = (undefined1  [8])(param_1 + 2);
      puVar14 = (undefined8 *)param_1[1];
      pqVar12 = pqStack_130;
      auVar8 = auStack_140;
      psVar5 = psStack_138;
      if (*(undefined8 **)auVar9 <= puVar14) {
        lVar15 = (long)puVar14 - *param_1 >> 3;
        uVar11 = lVar15 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar11) {
          FUN_0037b568(param_1);
          goto LAB_003b8684;
        }
        lVar13 = (long)*(undefined8 **)auVar9 - *param_1 >> 3;
        uVar17 = lVar13 * 0x5555555555555556;
        if (uVar17 < uVar11 || uVar17 - uVar11 == 0) {
          uVar17 = uVar11;
        }
        if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
          uVar17 = 0xaaaaaaaaaaaaaaa;
        }
        psStack_f8 = (segment_command *)auVar9;
        if (uVar17 == 0) {
          auStack_118._0_8_ = (segment_command *)0x0;
        }
        else {
          FUN_0037b57c();
          auStack_118._0_8_ = auVar9;
        }
        auStack_118._8_8_ = ((segment_command *)auStack_118._0_8_)->segname + lVar15 * 8 + -8;
        pcStack_100 = ((segment_command *)auStack_118._0_8_)->segname + uVar17 * 0x18 + -8;
        *(qword **)(auStack_118._8_8_ + 0x10) = pqStack_130;
        *(segment_command **)(auStack_118._8_8_ + 8) = psStack_138;
        *(undefined1 (*) [8])auStack_118._8_8_ = auStack_140;
        psStack_138 = (segment_command *)0x0;
        pqStack_130 = (qword *)0x0;
        auStack_140 = (undefined1  [8])0x0;
        pqStack_108 = (qword *)(auStack_118._8_8_ + 0x18);
        FUN_0045a5fc(param_1,auStack_118);
        lVar15 = param_1[1];
        auVar9 = (undefined1  [8])auStack_118;
        func_0x00427834(auVar9);
        param_1[1] = lVar15;
        auVar8 = auStack_140;
        pqVar12 = pqStack_130;
        goto joined_r0x003b8278;
      }
LAB_003b7d78:
      puVar14[2] = pqVar12;
      puVar14[1] = psVar5;
      *puVar14 = auVar8;
      param_1[1] = (long)(puVar14 + 3);
LAB_003b8284:
      if ((long)uStack_150 < 0) {
        auVar9 = auStack_160;
        __ZdlPv(auStack_160);
      }
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
        return auVar9;
      }
    }
    ___stack_chk_fail();
  }
  FUN_0037b568(param_1);
LAB_003b8684:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3b8688);
  (*pcVar4)();
}



/* Entry: 003b8780; end: 003b8857;  */

byte * FUN_003b8780(byte *param_1,byte *param_2)

{
  undefined8 uVar1;
  
  if (param_1[0x10] == 0) {
    func_0x003b87e8(param_1);
    param_1[0x10] = 1;
  }
  else if (param_1 != param_2) {
    if (((*param_1 & 1) == 0) && ((*param_2 & 1) == 0)) {
      uVar1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar1;
    }
    else {
      FUN_00557884(param_1);
    }
  }
  return param_1;
}



/* Entry: 003b8858; end: 003b8b9b;  */

long * FUN_003b8858(undefined8 param_1,undefined8 *param_2,long *param_3,long param_4,long *param_5)

{
  bool bVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  ulong uVar10;
  long **pplVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  undefined1 *puVar21;
  double dVar22;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  long alStack_130 [7];
  code *pcStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  ulong uStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  byte bStack_c4;
  byte abStack_c3 [11];
  long alStack_b8 [12];
  long lStack_58;
  
  pplVar11 = &plStack_f0;
  pplVar6 = &plStack_f0;
  puVar21 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar18 = *(long *)*param_2;
  uVar16 = *(undefined8 *)param_2[1];
  plVar7 = (long *)&DAT_00a06a60;
  FUN_005d0f6c(&DAT_00a06a60,uVar16);
  plVar19 = (long *)(lVar18 + 0x18);
  puVar12 = (ulong *)*plVar19;
  plStack_f0 = plVar7;
  if ((puVar12 == (ulong *)0x0) || (puVar12[1] == puVar12[2])) {
    FUN_005d126c(plVar19,&plStack_f0,3,uVar16);
    plVar7 = plStack_f0;
    if ((int)plVar19 == 0) {
      plVar7 = (long *)0x0;
    }
  }
  else {
    *(long **)((*puVar12 & 0xfffffffffffffff8) + puVar12[1] * 8) = plVar7;
    puVar12[1] = puVar12[1] + 1;
  }
  plVar8 = *(long **)param_2[1];
  uVar10 = param_4 + 0xfU & 0xfffffffffffffff0;
  plVar19 = (long *)plVar8[1];
  if ((ulong)(plVar8[2] - (long)plVar19) < uVar10) {
    FUN_005d1df0();
  }
  else {
    plVar8[1] = (long)((long)plVar19 + uVar10);
    plVar8 = plVar19;
  }
  plVar19 = plVar8;
  _memcpy(plVar8,param_3,param_4);
  *plVar7 = (long)plVar8;
  plVar7[1] = param_4;
  uVar10 = (ulong)(char)*param_5;
  if ((uVar10 & 1) == 0) {
    plVar8 = (long *)((long)param_5 + 1);
  }
  else {
    plVar19 = (long *)param_5[1];
    if (plVar19 == (long *)0x0) {
      pplVar11 = (long **)param_3;
      plVar8 = (long *)0x0;
      goto LAB_003b8b48;
    }
    plStack_f0 = (long *)0x0;
    uStack_e8 = 0;
    FUN_0055a308();
    uVar10 = uStack_e8;
    plVar8 = plStack_f0;
    if ((int)plVar19 != 0) goto LAB_003b8b48;
    plVar8 = *(long **)param_2[1];
    if (((long)(char)*param_5 & 1U) == 0) {
      uVar10 = (ulong)(long)(char)*param_5 >> 1;
    }
    else {
      uVar10 = *(ulong *)param_5[1];
    }
    uVar10 = uVar10 + 0xf & 0xfffffffffffffff0;
    plVar19 = (long *)plVar8[1];
    if ((ulong)(plVar8[2] - (long)plVar19) < uVar10) {
      FUN_005d1df0();
    }
    else {
      plVar8[1] = (long)((long)plVar19 + uVar10);
      plVar8 = plVar19;
    }
    param_3 = param_5;
    FUN_0054f2b8();
    plVar19 = (long *)pplVar6;
    plVar2 = plVar8;
    plVar17 = plStack_f0;
    uVar10 = uStack_e8;
    uVar20 = uStack_d8;
    while (uVar20 != 0) {
      plVar19 = plVar2;
      param_3 = plVar17;
      uStack_d8 = uVar20;
      _memcpy(plVar2,plVar17,uVar10);
      uVar5 = uVar20 - uVar10;
      if (uVar5 != 0) {
        if (((int)uStack_c8 < 0) || (alStack_b8[uStack_c8] == 0)) {
          uVar20 = 0;
          plVar17 = (long *)0x0;
          plStack_f0 = (long *)0x0;
          uStack_e8 = 0;
        }
        else if (lStack_d0 == 0) {
          plVar17 = (long *)0x0;
          uVar20 = 0;
          plStack_f0 = plVar17;
          uStack_e8 = uVar20;
        }
        else {
          if ((ulong)*(byte *)(alStack_b8[0] + 0xf) - 1 == (ulong)bStack_c4) {
            uVar20 = 0;
            do {
              uVar14 = uVar20;
              if (uStack_c8 == uVar14) {
                puVar12 = (ulong *)0x0;
                goto LAB_003b8ae0;
              }
              lVar18 = alStack_b8[uVar14 + 1];
              uVar15 = (ulong)abStack_c3[uVar14] + 1;
              uVar20 = uVar14 + 1;
            } while (uVar15 == *(byte *)(lVar18 + 0xf));
            abStack_c3[uVar14] = (byte)uVar15;
            lVar13 = (long)(int)(uVar14 + 1);
            do {
              lVar18 = *(long *)(lVar18 + uVar15 * 8 + 0x10);
              lVar4 = lVar13 + -1;
              alStack_b8[lVar4] = lVar18;
              uVar15 = (ulong)*(byte *)(lVar18 + 0xe);
              *(byte *)((long)&uStack_c8 + lVar13 + 3) = *(byte *)(lVar18 + 0xe);
              bVar1 = 0 < lVar13;
              lVar13 = lVar4;
            } while (lVar4 != 0 && bVar1);
            lVar18 = lVar18 + uVar15 * 8;
          }
          else {
            bStack_c4 = bStack_c4 + 1;
            lVar18 = alStack_b8[0] + (ulong)bStack_c4 * 8;
          }
          puVar12 = *(ulong **)(lVar18 + 0x10);
LAB_003b8ae0:
          uVar20 = *puVar12;
          lStack_d0 = lStack_d0 - uVar20;
          bVar3 = *(byte *)((long)puVar12 + 0xc);
          if (bVar3 == 1) {
            uVar14 = puVar12[2];
            puVar12 = (ulong *)puVar12[3];
            bVar3 = *(byte *)((long)puVar12 + 0xc);
          }
          else {
            uVar14 = 0;
          }
          if (bVar3 < 6) {
            uVar15 = puVar12[2];
          }
          else {
            uVar15 = (long)puVar12 + 0xd;
          }
          plVar17 = (long *)(uVar15 + uVar14);
          plStack_f0 = plVar17;
          uStack_e8 = uVar20;
        }
      }
      plVar2 = (long *)((long)plVar2 + uVar10);
      uVar10 = uVar20;
      uVar20 = uVar5;
    }
    uVar10 = (ulong)(char)*param_5;
    uStack_d8 = 0;
    if ((uVar10 & 1) != 0) {
      pplVar11 = (long **)param_3;
      uVar10 = *(ulong *)param_5[1];
      goto LAB_003b8b48;
    }
  }
  pplVar11 = (long **)param_3;
  uVar10 = uVar10 >> 1;
LAB_003b8b48:
  plVar7[2] = (long)plVar8;
  plVar7[3] = uVar10;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return plVar19;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_003b8b9c;
  FUN_0033a30c();
  plVar8 = plRam0000000000b5e890;
  if (plRam0000000000b5e890 == (long *)0x0) {
    plVar8 = plVar19;
    FUN_003b8fe0();
  }
  func_0x0033a204(plVar19,pplVar11,plVar8,0);
  pplVar6 = &plStack_f0;
  while( true ) {
    *(undefined1 **)((long)pplVar6 + -0x10) = puVar21;
    *(code **)((long)pplVar6 + -8) = pcStack_f8;
    if ((ulong)pplVar11 >> 0x20 == 3) {
      dVar22 = (double)(int)pplVar11 / 1000000.0 + (double)(long)plVar19 * 1000.0 + 0.999999999;
      if (dVar22 <= -9.223372036854776e+18) {
        pcVar9 = (char *)0x8000000000000000;
      }
      else if (9.223372036854776e+18 <= dVar22) {
        pcVar9 = (char *)0x7fffffffffffffff;
      }
      else {
        pcVar9 = (char *)(long)dVar22;
      }
      return (long *)pcVar9;
    }
    func_0x00773cec();
    *(long **)((long)pplVar6 + -0x30) = param_5;
    *(long **)((long)pplVar6 + -0x28) = plVar7;
    *(undefined1 **)((long)pplVar6 + -0x20) = (undefined1 *)((long)pplVar6 + -0x10);
    *(code **)((long)pplVar6 + -0x18) = FUN_003b8c6c;
    FUN_0033a30c();
    plVar7 = plRam0000000000b5e890;
    if (plRam0000000000b5e890 == (long *)0x0) {
      plVar7 = plVar19;
      FUN_003b8fe0();
    }
    func_0x0033a204(plVar19,pplVar11,plVar7,0);
    param_5 = *(long **)((long)pplVar6 + -0x30);
    plVar7 = *(long **)((long)pplVar6 + -0x28);
    *(undefined8 *)((long)pplVar6 + -0x20) = *(undefined8 *)((long)pplVar6 + -0x20);
    *(undefined8 *)((long)pplVar6 + -0x18) = *(undefined8 *)((long)pplVar6 + -0x18);
    if ((ulong)pplVar11 >> 0x20 == 3) break;
    func_0x00773d24();
    *(undefined8 *)((long)pplVar6 + -0x40) = unaff_d9;
    *(undefined8 *)((long)pplVar6 + -0x38) = unaff_d8;
    *(undefined1 **)((long)pplVar6 + -0x30) = (undefined1 *)((long)pplVar6 + -0x20);
    *(code **)((long)pplVar6 + -0x28) = FUN_003b8d30;
    plVar8 = plRam0000000000b5e898;
    if ((double)plRam0000000000b5e898 == 0.0) {
      FUN_003b8fe0();
      plVar8 = (long *)pplVar11;
    }
    FUN_0033a774(param_1,plVar8);
    puVar21 = *(undefined1 **)((long)pplVar6 + -0x30);
    pcStack_f8 = *(code **)((long)pplVar6 + -0x28);
    unaff_d9 = *(undefined8 *)((long)pplVar6 + -0x40);
    unaff_d8 = *(undefined8 *)((long)pplVar6 + -0x38);
    pplVar6 = (long **)((long)pplVar6 + -0x20);
  }
  dVar22 = (double)(int)pplVar11 / 1000000.0 + (double)(long)plVar19 * 1000.0;
  if (dVar22 <= -9.223372036854776e+18) {
    pcVar9 = (char *)0x8000000000000000;
  }
  else if (9.223372036854776e+18 <= dVar22) {
    pcVar9 = (char *)0x7fffffffffffffff;
  }
  else {
    pcVar9 = (char *)(long)dVar22;
  }
  return (long *)pcVar9;
}



/* Entry: 003b8b9c; end: 003b8beb;  */

long FUN_003b8b9c(undefined8 param_1,long param_2,double param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  double dVar3;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  FUN_0033a30c(param_2,param_3,0);
  lVar2 = lRam0000000000b5e890;
  if (lRam0000000000b5e890 == 0) {
    lVar2 = param_2;
    FUN_003b8fe0();
  }
  func_0x0033a204(param_2,param_3,lVar2,0);
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
    if ((ulong)param_3 >> 0x20 == 3) {
      dVar3 = (double)SUB84(param_3,0) / 1000000.0 + (double)param_2 * 1000.0 + 0.999999999;
      if (dVar3 <= -9.223372036854776e+18) {
        lVar2 = -0x8000000000000000;
      }
      else if (9.223372036854776e+18 <= dVar3) {
        lVar2 = 0x7fffffffffffffff;
      }
      else {
        lVar2 = (long)dVar3;
      }
      return lVar2;
    }
    func_0x00773cec();
    *(undefined8 *)(puVar1 + -0x30) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x20) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x18) = FUN_003b8c6c;
    FUN_0033a30c();
    lVar2 = lRam0000000000b5e890;
    if (lRam0000000000b5e890 == 0) {
      lVar2 = param_2;
      FUN_003b8fe0();
    }
    func_0x0033a204(param_2,param_3,lVar2,0);
    unaff_x20 = *(undefined8 *)(puVar1 + -0x30);
    unaff_x19 = *(undefined8 *)(puVar1 + -0x28);
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    if ((ulong)param_3 >> 0x20 == 3) break;
    func_0x00773d24();
    *(undefined8 *)(puVar1 + -0x40) = unaff_d9;
    *(undefined8 *)(puVar1 + -0x38) = unaff_d8;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x20;
    *(code **)(puVar1 + -0x28) = FUN_003b8d30;
    dVar3 = dRam0000000000b5e898;
    if (dRam0000000000b5e898 == 0.0) {
      FUN_003b8fe0();
      dVar3 = param_3;
    }
    FUN_0033a774(param_1,dVar3);
    unaff_x29 = *(undefined8 *)(puVar1 + -0x30);
    unaff_x30 = *(undefined8 *)(puVar1 + -0x28);
    unaff_d9 = *(undefined8 *)(puVar1 + -0x40);
    unaff_d8 = *(undefined8 *)(puVar1 + -0x38);
    puVar1 = puVar1 + -0x20;
  }
  dVar3 = (double)SUB84(param_3,0) / 1000000.0 + (double)param_2 * 1000.0;
  if (dVar3 <= -9.223372036854776e+18) {
    lVar2 = -0x8000000000000000;
  }
  else if (9.223372036854776e+18 <= dVar3) {
    lVar2 = 0x7fffffffffffffff;
  }
  else {
    lVar2 = (long)dVar3;
  }
  return lVar2;
}



/* Entry: 003b8bec; end: 003b8c6b;  */

long FUN_003b8bec(undefined8 param_1,long param_2,double param_3)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  double dVar2;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if ((ulong)param_3 >> 0x20 == 3) {
      dVar2 = (double)SUB84(param_3,0) / 1000000.0 + (double)param_2 * 1000.0 + 0.999999999;
      if (dVar2 <= -9.223372036854776e+18) {
        lVar1 = -0x8000000000000000;
      }
      else if (9.223372036854776e+18 <= dVar2) {
        lVar1 = 0x7fffffffffffffff;
      }
      else {
        lVar1 = (long)dVar2;
      }
      return lVar1;
    }
    func_0x00773cec();
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x18) = FUN_003b8c6c;
    FUN_0033a30c();
    lVar1 = lRam0000000000b5e890;
    if (lRam0000000000b5e890 == 0) {
      lVar1 = param_2;
      FUN_003b8fe0();
    }
    func_0x0033a204(param_2,param_3,lVar1,0);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    if ((ulong)param_3 >> 0x20 == 3) break;
    func_0x00773d24();
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x20);
    *(code **)((long)register0x00000008 + -0x28) = FUN_003b8d30;
    dVar2 = dRam0000000000b5e898;
    if (dRam0000000000b5e898 == 0.0) {
      FUN_003b8fe0();
      dVar2 = param_3;
    }
    FUN_0033a774(param_1,dVar2);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x38);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
  }
  dVar2 = (double)SUB84(param_3,0) / 1000000.0 + (double)param_2 * 1000.0;
  if (dVar2 <= -9.223372036854776e+18) {
    lVar1 = -0x8000000000000000;
  }
  else if (9.223372036854776e+18 <= dVar2) {
    lVar1 = 0x7fffffffffffffff;
  }
  else {
    lVar1 = (long)dVar2;
  }
  return lVar1;
}



/* Entry: 003b8c6c; end: 003b8cbb;  */

long FUN_003b8c6c(undefined8 param_1,long param_2,double param_3)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  double dVar2;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    FUN_0033a30c();
    lVar1 = lRam0000000000b5e890;
    if (lRam0000000000b5e890 == 0) {
      lVar1 = param_2;
      FUN_003b8fe0();
    }
    func_0x0033a204(param_2,param_3,lVar1,0);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    if ((ulong)param_3 >> 0x20 == 3) {
      dVar2 = (double)SUB84(param_3,0) / 1000000.0 + (double)param_2 * 1000.0;
      if (dVar2 <= -9.223372036854776e+18) {
        lVar1 = -0x8000000000000000;
      }
      else if (9.223372036854776e+18 <= dVar2) {
        lVar1 = 0x7fffffffffffffff;
      }
      else {
        lVar1 = (long)dVar2;
      }
      return lVar1;
    }
    func_0x00773d24();
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x18) = FUN_003b8d30;
    dVar2 = dRam0000000000b5e898;
    if (dRam0000000000b5e898 == 0.0) {
      FUN_003b8fe0();
      dVar2 = param_3;
    }
    FUN_0033a774(param_1,dVar2);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    if ((ulong)param_3 >> 0x20 == 3) break;
    unaff_x30 = FUN_003b8c6c;
    func_0x00773cec();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
  }
  dVar2 = (double)SUB84(param_3,0) / 1000000.0 + (double)param_2 * 1000.0 + 0.999999999;
  if (dVar2 <= -9.223372036854776e+18) {
    lVar1 = -0x8000000000000000;
  }
  else if (9.223372036854776e+18 <= dVar2) {
    lVar1 = 0x7fffffffffffffff;
  }
  else {
    lVar1 = (long)dVar2;
  }
  return lVar1;
}



/* Entry: 003b8cbc; end: 003b8d2f;  */

long FUN_003b8cbc(undefined8 param_1,long param_2,double param_3)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  double dVar2;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if ((ulong)param_3 >> 0x20 == 3) {
      dVar2 = (double)SUB84(param_3,0) / 1000000.0 + (double)param_2 * 1000.0;
      if (dVar2 <= -9.223372036854776e+18) {
        lVar1 = -0x8000000000000000;
      }
      else if (9.223372036854776e+18 <= dVar2) {
        lVar1 = 0x7fffffffffffffff;
      }
      else {
        lVar1 = (long)dVar2;
      }
      return lVar1;
    }
    func_0x00773d24();
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x18) = FUN_003b8d30;
    dVar2 = dRam0000000000b5e898;
    if (dRam0000000000b5e898 == 0.0) {
      FUN_003b8fe0();
      dVar2 = param_3;
    }
    FUN_0033a774(param_1,dVar2);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    if ((ulong)param_3 >> 0x20 == 3) break;
    func_0x00773cec();
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x20);
    *(code **)((long)register0x00000008 + -0x28) = FUN_003b8c6c;
    FUN_0033a30c();
    lVar1 = lRam0000000000b5e890;
    if (lRam0000000000b5e890 == 0) {
      lVar1 = param_2;
      FUN_003b8fe0();
    }
    func_0x0033a204(param_2,param_3,lVar1,0);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x38);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
  }
  dVar2 = (double)SUB84(param_3,0) / 1000000.0 + (double)param_2 * 1000.0 + 0.999999999;
  if (dVar2 <= -9.223372036854776e+18) {
    lVar1 = -0x8000000000000000;
  }
  else if (9.223372036854776e+18 <= dVar2) {
    lVar1 = 0x7fffffffffffffff;
  }
  else {
    lVar1 = (long)dVar2;
  }
  return lVar1;
}



/* Entry: 003b8d30; end: 003b8d6f;  */

long FUN_003b8d30(undefined8 param_1,long param_2,double param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  double dVar3;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_d8;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    dVar3 = dRam0000000000b5e898;
    if (dRam0000000000b5e898 == 0.0) {
      FUN_003b8fe0();
      dVar3 = param_3;
    }
    FUN_0033a774(param_1,dVar3);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    if ((ulong)param_3 >> 0x20 == 3) {
      dVar3 = (double)SUB84(param_3,0) / 1000000.0 + (double)param_2 * 1000.0 + 0.999999999;
      if (dVar3 <= -9.223372036854776e+18) {
        lVar2 = -0x8000000000000000;
      }
      else if (9.223372036854776e+18 <= dVar3) {
        lVar2 = 0x7fffffffffffffff;
      }
      else {
        lVar2 = (long)dVar3;
      }
      return lVar2;
    }
    func_0x00773cec();
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x18) = FUN_003b8c6c;
    FUN_0033a30c();
    lVar2 = lRam0000000000b5e890;
    if (lRam0000000000b5e890 == 0) {
      lVar2 = param_2;
      FUN_003b8fe0();
    }
    func_0x0033a204(param_2,param_3,lVar2,0);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    if ((ulong)param_3 >> 0x20 == 3) break;
    unaff_x30 = FUN_003b8d30;
    func_0x00773d24();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    unaff_x29 = puVar1;
  }
  dVar3 = (double)SUB84(param_3,0) / 1000000.0 + (double)param_2 * 1000.0;
  if (dVar3 <= -9.223372036854776e+18) {
    lVar2 = -0x8000000000000000;
  }
  else if (9.223372036854776e+18 <= dVar3) {
    lVar2 = 0x7fffffffffffffff;
  }
  else {
    lVar2 = (long)dVar3;
  }
  return lVar2;
}



/* Entry: 003b8d70; end: 003b8d77;  */

/* WARNING: Possible PIC construction at 0x003b8e14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003b8e18) */
/* WARNING: Removing unreachable block (ram,0x0033a118) */
/* WARNING: Removing unreachable block (ram,0x0033a1fc) */
/* WARNING: Removing unreachable block (ram,0x0033a12c) */
/* WARNING: Removing unreachable block (ram,0x0033a200) */
/* WARNING: Removing unreachable block (ram,0x0033a21c) */
/* WARNING: Removing unreachable block (ram,0x0033a220) */
/* WARNING: Removing unreachable block (ram,0x0033a224) */
/* WARNING: Removing unreachable block (ram,0x0033a2e4) */
/* WARNING: Removing unreachable block (ram,0x0033a22c) */
/* WARNING: Removing unreachable block (ram,0x0033a230) */
/* WARNING: Removing unreachable block (ram,0x0033a240) */
/* WARNING: Removing unreachable block (ram,0x0033a254) */
/* WARNING: Removing unreachable block (ram,0x0033a264) */
/* WARNING: Removing unreachable block (ram,0x0033a26c) */
/* WARNING: Removing unreachable block (ram,0x0033a288) */
/* WARNING: Removing unreachable block (ram,0x0033a294) */
/* WARNING: Removing unreachable block (ram,0x0033a298) */
/* WARNING: Removing unreachable block (ram,0x0033a2a4) */
/* WARNING: Removing unreachable block (ram,0x0033a2ac) */
/* WARNING: Removing unreachable block (ram,0x0033a2d4) */
/* WARNING: Removing unreachable block (ram,0x0033a2b8) */
/* WARNING: Removing unreachable block (ram,0x0033a278) */
/* WARNING: Removing unreachable block (ram,0x0033a2c4) */
/* WARNING: Removing unreachable block (ram,0x0033a130) */
/* WARNING: Removing unreachable block (ram,0x0033a158) */
/* WARNING: Removing unreachable block (ram,0x0033a164) */
/* WARNING: Removing unreachable block (ram,0x0033a168) */
/* WARNING: Removing unreachable block (ram,0x0033a190) */
/* WARNING: Removing unreachable block (ram,0x0033a19c) */
/* WARNING: Removing unreachable block (ram,0x0033a1a4) */
/* WARNING: Removing unreachable block (ram,0x0033a1bc) */
/* WARNING: Removing unreachable block (ram,0x0033a1d4) */
/* WARNING: Removing unreachable block (ram,0x0033a1e0) */
/* WARNING: Removing unreachable block (ram,0x0033a1e4) */
/* WARNING: Removing unreachable block (ram,0x0033a1ec) */
/* WARNING: Removing unreachable block (ram,0x0033a1f4) */
/* WARNING: Removing unreachable block (ram,0x0033a1b0) */
/* WARNING: Removing unreachable block (ram,0x0033a174) */
/* WARNING: Removing unreachable block (ram,0x0033a17c) */

undefined1  [16] FUN_003b8d70(ulong *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar2 = *param_1;
  if (uVar2 == 0x8000000000000000) {
    auVar4._8_8_ = (ulong)param_2 << 0x20;
    auVar4._0_8_ = 0x8000000000000000;
    return auVar4;
  }
  if (uVar2 == 0x7fffffffffffffff) {
    auVar3._8_8_ = (ulong)param_2 << 0x20;
    auVar3._0_8_ = 0x7fffffffffffffff;
    return auVar3;
  }
  if (param_2 != 3) {
    if (lRam0000000000b5e890 == 0) {
      FUN_003b8fe0();
    }
    FUN_0033a30c();
  }
  if (uVar2 == 0x8000000000000000) {
    uVar1 = 0x8000000000000000;
  }
  else {
    if (uVar2 != 0x7fffffffffffffff) {
      uVar1 = (long)(uVar2 + 1) / 1000 - 1;
      if ((uVar2 & 0x8000000000000000) == 0) {
        uVar1 = uVar2 / 1000;
      }
      uVar2 = (long)((uVar2 + uVar1 * -1000) * 1000000000) / 1000;
      goto LAB_0033a0f8;
    }
    uVar1 = 0x7fffffffffffffff;
  }
  uVar2 = 0;
LAB_0033a0f8:
  auVar5._8_8_ = uVar2 & 0xffffffff | 0x300000000;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 003b8d78; end: 003b8e47;  */

/* WARNING: Possible PIC construction at 0x003b8e14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003b8e18) */
/* WARNING: Removing unreachable block (ram,0x0033a118) */
/* WARNING: Removing unreachable block (ram,0x0033a1fc) */
/* WARNING: Removing unreachable block (ram,0x0033a12c) */
/* WARNING: Removing unreachable block (ram,0x0033a200) */
/* WARNING: Removing unreachable block (ram,0x0033a21c) */
/* WARNING: Removing unreachable block (ram,0x0033a220) */
/* WARNING: Removing unreachable block (ram,0x0033a224) */
/* WARNING: Removing unreachable block (ram,0x0033a2e4) */
/* WARNING: Removing unreachable block (ram,0x0033a22c) */
/* WARNING: Removing unreachable block (ram,0x0033a230) */
/* WARNING: Removing unreachable block (ram,0x0033a240) */
/* WARNING: Removing unreachable block (ram,0x0033a254) */
/* WARNING: Removing unreachable block (ram,0x0033a264) */
/* WARNING: Removing unreachable block (ram,0x0033a26c) */
/* WARNING: Removing unreachable block (ram,0x0033a288) */
/* WARNING: Removing unreachable block (ram,0x0033a294) */
/* WARNING: Removing unreachable block (ram,0x0033a298) */
/* WARNING: Removing unreachable block (ram,0x0033a2a4) */
/* WARNING: Removing unreachable block (ram,0x0033a2ac) */
/* WARNING: Removing unreachable block (ram,0x0033a2d4) */
/* WARNING: Removing unreachable block (ram,0x0033a2b8) */
/* WARNING: Removing unreachable block (ram,0x0033a278) */
/* WARNING: Removing unreachable block (ram,0x0033a2c4) */
/* WARNING: Removing unreachable block (ram,0x0033a130) */
/* WARNING: Removing unreachable block (ram,0x0033a158) */
/* WARNING: Removing unreachable block (ram,0x0033a164) */
/* WARNING: Removing unreachable block (ram,0x0033a168) */
/* WARNING: Removing unreachable block (ram,0x0033a190) */
/* WARNING: Removing unreachable block (ram,0x0033a19c) */
/* WARNING: Removing unreachable block (ram,0x0033a1a4) */
/* WARNING: Removing unreachable block (ram,0x0033a1bc) */
/* WARNING: Removing unreachable block (ram,0x0033a1d4) */
/* WARNING: Removing unreachable block (ram,0x0033a1e0) */
/* WARNING: Removing unreachable block (ram,0x0033a1e4) */
/* WARNING: Removing unreachable block (ram,0x0033a1ec) */
/* WARNING: Removing unreachable block (ram,0x0033a1f4) */
/* WARNING: Removing unreachable block (ram,0x0033a1b0) */
/* WARNING: Removing unreachable block (ram,0x0033a174) */
/* WARNING: Removing unreachable block (ram,0x0033a17c) */

undefined1  [16] FUN_003b8d78(ulong param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_1 == 0x8000000000000000) {
    auVar4._8_8_ = (ulong)param_2 << 0x20;
    auVar4._0_8_ = 0x8000000000000000;
    return auVar4;
  }
  if (param_1 == 0x7fffffffffffffff) {
    auVar3._8_8_ = (ulong)param_2 << 0x20;
    auVar3._0_8_ = 0x7fffffffffffffff;
    return auVar3;
  }
  if (param_2 != 3) {
    if (lRam0000000000b5e890 == 0) {
      FUN_003b8fe0();
    }
    FUN_0033a30c();
  }
  if (param_1 == 0x8000000000000000) {
    uVar1 = 0x8000000000000000;
  }
  else {
    if (param_1 != 0x7fffffffffffffff) {
      uVar1 = (long)(param_1 + 1) / 1000 - 1;
      if ((param_1 & 0x8000000000000000) == 0) {
        uVar1 = param_1 / 1000;
      }
      uVar2 = (long)((param_1 + uVar1 * -1000) * 1000000000) / 1000;
      goto LAB_0033a0f8;
    }
    uVar1 = 0x7fffffffffffffff;
  }
  uVar2 = 0;
LAB_0033a0f8:
  auVar5._8_8_ = uVar2 & 0xffffffff | 0x300000000;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 003b8e48; end: 003b8f0b;  */

ulong * FUN_003b8e48(ulong *param_1,long *param_2)

{
  char *pcVar1;
  ulong *puVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *in_stack_ffffffffffffffc8;
  long in_stack_ffffffffffffffd8;
  
  if (*param_2 == -0x8000000000000000) {
    pcVar3 = s___008c83e0;
  }
  else {
    if (*param_2 != 0x7fffffffffffffff) {
      __ZNSt3__19to_stringEx(&stack0xffffffffffffffc8);
      puVar2 = (ulong *)&stack0xffffffffffffffc8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (puVar2,&DAT_0091e109);
      uVar5 = puVar2[1];
      uVar4 = *puVar2;
      param_1[2] = puVar2[2];
      param_1[1] = uVar5;
      *param_1 = uVar4;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      if (in_stack_ffffffffffffffd8 < 0) {
        __ZdlPv(in_stack_ffffffffffffffc8);
        puVar2 = in_stack_ffffffffffffffc8;
      }
      return puVar2;
    }
    pcVar3 = s__008c83dc;
  }
  pcVar1 = pcVar3;
  _strlen();
  if ((char *)0x7ffffffffffffff7 < pcVar1) {
    func_0x0033b318();
    if (*param_1 != 0) {
      func_0x003711f8();
    }
    return param_1;
  }
  if (pcVar1 < "") {
    *(char *)((long)param_1 + 0x17) = (char)pcVar1;
    puVar2 = param_1;
    if (pcVar1 == (char *)0x0) goto LAB_003532e0;
  }
  else {
    uVar4 = ((ulong)pcVar1 & 0xfffffffffffffff8) + 8;
    if (((ulong)pcVar1 | 7) != 0x17) {
      uVar4 = (ulong)pcVar1 | 7;
    }
    puVar2 = (ulong *)(uVar4 + 1);
    __Znwm();
    param_1[1] = (ulong)pcVar1;
    param_1[2] = uVar4 + 1 | 0x8000000000000000;
    *param_1 = (ulong)puVar2;
  }
  _memmove(puVar2,pcVar3,pcVar1);
LAB_003532e0:
  *(char *)((long)puVar2 + (long)pcVar1) = '\0';
  return param_1;
}



/* Entry: 003b8f0c; end: 003b8fa3;  */

char * FUN_003b8f0c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 uStack_48;
  code *pcStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = *param_2;
  uVar4 = 3;
  FUN_003b8d78();
  pcStack_40 = FUN_00560cd0;
  uStack_38 = uVar4 & 0xffffffff;
  uStack_30 = 0x5606ac;
  pcVar3 = "%d.%09ds";
  uStack_48 = uVar2;
  FUN_0056189c(param_1,"%d.%09ds",8,&uStack_48,2);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return pcVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar1 = *(long *)pcVar3;
  if (0x8637bd05af5 < *(long *)pcVar3) {
    lVar1 = 0x8637bd05af6;
  }
  if (lVar1 < -0x8637bd05af5) {
    lVar1 = -0x8637bd05af6;
  }
  return (char *)(lVar1 * 1000000);
}



/* Entry: 003b8fa4; end: 003b8fdf;  */

long FUN_003b8fa4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (0x8637bd05af5 < *param_1) {
    lVar1 = 0x8637bd05af6;
  }
  if (lVar1 < -0x8637bd05af5) {
    lVar1 = -0x8637bd05af6;
  }
  return lVar1 * 1000000;
}



/* Entry: 003b8fe0; end: 003b91d3;  */

undefined1  [16] FUN_003b8fe0(double param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  lVar6 = 0xb5e000;
  if ((bRam0000000000b5e8a8 & 1) == 0) goto LAB_003b91ac;
LAB_003b900c:
  dVar8 = param_1;
  if (*(char *)(lVar6 + 0x8a0) == '\0') {
    iVar7 = 0xb;
    do {
      FUN_0033a6ec();
      lVar6 = 0;
      param_1 = dVar8;
      FUN_0033a598();
      FUN_0033a6ec();
      lVar4 = lVar6 + -1;
      if (lVar4 != 0) goto LAB_003b9104;
      uVar3 = 100;
      uVar5 = 3;
      func_0x0033a104(100,3);
      FUN_0033a118(lVar6,param_3,uVar3,uVar5);
      FUN_0033a5d4();
      iVar7 = iVar7 + -1;
      dVar8 = param_1;
    } while (iVar7 != 0);
    param_3 = 0x5c;
  }
  else {
    iVar7 = 0x15;
    do {
      FUN_0033a6ec();
      lVar6 = 0;
      param_1 = dVar8;
      FUN_0033a598();
      FUN_0033a6ec();
      lVar4 = lVar6 + -1;
      if (lVar4 != 0 && 0 < lVar6) goto LAB_003b9104;
      uVar3 = 100;
      uVar5 = 3;
      func_0x0033a104(100,3);
      FUN_0033a118(lVar6,param_3,uVar3,uVar5);
      FUN_0033a5d4();
      iVar7 = iVar7 + -1;
      dVar8 = param_1;
    } while (iVar7 != 0);
    param_3 = 0x49;
  }
  goto LAB_003b91a0;
LAB_003b9104:
  param_1 = (param_1 + dVar8) * 0.5;
  if (param_1 == 0.0) {
    param_3 = 0x61;
LAB_003b91a0:
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/time.cc"
                 ,param_3,2,"assertion failed: %s");
    _abort();
LAB_003b91ac:
    iVar7 = 0xb5e8a8;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      FUN_003b91d4();
      *(char *)(lVar6 + 0x8a0) = (char)iVar7;
      ___cxa_guard_release(0xb5e8a8);
    }
    goto LAB_003b900c;
  }
LAB_003b9120:
  if (lRam0000000000b5e890 != 0) {
    ClearExclusiveLocal();
    do {
      lVar4 = lRam0000000000b5e890;
      dVar8 = dRam0000000000b5e898;
    } while (ABS(dRam0000000000b5e898) == 0.0);
LAB_003b9168:
    dRam0000000000b5e898 = dVar8;
    auVar9._8_8_ = dRam0000000000b5e898;
    auVar9._0_8_ = lVar4;
    return auVar9;
  }
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(0xb5e890,0x10);
  if (bVar2) {
    cVar1 = ExclusiveMonitorsStatus();
    lRam0000000000b5e890 = lVar4;
  }
  dVar8 = param_1;
  if (cVar1 == '\0') goto LAB_003b9168;
  goto LAB_003b9120;
}



/* Entry: 003b91d4; end: 003b9207;  */

void FUN_003b91d4(void)

{
  char *pcVar1;
  
  pcVar1 = "GRPC_INIT_TIME_FIX";
  _getenv();
  if (pcVar1 != (char *)0x0) {
    _strtol();
  }
  return;
}



/* Entry: 003b9208; end: 003b9e4b;  */

void FUN_003b9208(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long *param_5)

{
  code *pcVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  uVar8 = 0xaaaaaaaaaaaaaaa;
  FUN_00353254(&uStack_a0,param_3);
  puVar7 = (ulong *)(param_5 + 2);
  puVar3 = (ulong *)param_5[1];
  if (puVar3 < (ulong *)*puVar7) {
    puVar3[2] = uStack_90;
    puVar3[1] = uStack_98;
    *puVar3 = uStack_a0;
    param_5[1] = (long)(puVar3 + 3);
  }
  else {
    lVar9 = (long)puVar3 - *param_5 >> 3;
    uVar10 = lVar9 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
      FUN_0037b568(param_5);
      goto LAB_003b9dbc;
    }
    lVar4 = (long)*puVar7 - *param_5 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
      uVar5 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      puVar3 = (ulong *)0x0;
      puStack_68 = puVar7;
    }
    else {
      puVar3 = puVar7;
      puStack_68 = puVar7;
      FUN_0037b57c();
    }
    puStack_80 = puVar3 + lVar9;
    puStack_70 = puVar3 + uVar5 * 3;
    puStack_80[2] = uStack_90;
    puStack_80[1] = uStack_98;
    *puStack_80 = uStack_a0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_78 = puStack_80 + 3;
    puStack_88 = puVar3;
    FUN_0045a5fc(param_5,&puStack_88);
    lVar9 = param_5[1];
    func_0x00427834(&puStack_88);
    param_5[1] = lVar9;
    if ((long)uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
  }
  FUN_00353254(&uStack_a0," HTTP/1.1\r\n");
  puVar3 = (ulong *)param_5[1];
  if (puVar3 < (ulong *)param_5[2]) {
    puVar3[2] = uStack_90;
    puVar3[1] = uStack_98;
    *puVar3 = uStack_a0;
    param_5[1] = (long)(puVar3 + 3);
  }
  else {
    lVar9 = (long)puVar3 - *param_5 >> 3;
    uVar10 = lVar9 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
      FUN_0037b568(param_5);
      goto LAB_003b9dbc;
    }
    lVar4 = param_5[2] - *param_5 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
      uVar5 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      puVar3 = (ulong *)0x0;
      puStack_68 = puVar7;
    }
    else {
      puVar3 = puVar7;
      puStack_68 = puVar7;
      FUN_0037b57c();
    }
    puStack_80 = puVar3 + lVar9;
    puStack_70 = puVar3 + uVar5 * 3;
    puStack_80[2] = uStack_90;
    puStack_80[1] = uStack_98;
    *puStack_80 = uStack_a0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_78 = puStack_80 + 3;
    puStack_88 = puVar3;
    FUN_0045a5fc(param_5,&puStack_88);
    lVar9 = param_5[1];
    func_0x00427834(&puStack_88);
    param_5[1] = lVar9;
    if ((long)uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
  }
  FUN_00353254(&uStack_a0,"Host: ");
  puVar3 = (ulong *)param_5[1];
  if (puVar3 < (ulong *)param_5[2]) {
    puVar3[2] = uStack_90;
    puVar3[1] = uStack_98;
    *puVar3 = uStack_a0;
    param_5[1] = (long)(puVar3 + 3);
  }
  else {
    lVar9 = (long)puVar3 - *param_5 >> 3;
    uVar10 = lVar9 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
      FUN_0037b568(param_5);
      goto LAB_003b9dbc;
    }
    lVar4 = param_5[2] - *param_5 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
      uVar5 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      puVar3 = (ulong *)0x0;
      puStack_68 = puVar7;
    }
    else {
      puVar3 = puVar7;
      puStack_68 = puVar7;
      FUN_0037b57c();
    }
    puStack_80 = puVar3 + lVar9;
    puStack_70 = puVar3 + uVar5 * 3;
    puStack_80[2] = uStack_90;
    puStack_80[1] = uStack_98;
    *puStack_80 = uStack_a0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_78 = puStack_80 + 3;
    puStack_88 = puVar3;
    FUN_0045a5fc(param_5,&puStack_88);
    lVar9 = param_5[1];
    func_0x00427834(&puStack_88);
    param_5[1] = lVar9;
    if ((long)uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
  }
  FUN_00353254(&uStack_a0,param_2);
  puVar3 = (ulong *)param_5[1];
  if (puVar3 < (ulong *)param_5[2]) {
    puVar3[2] = uStack_90;
    puVar3[1] = uStack_98;
    *puVar3 = uStack_a0;
    param_5[1] = (long)(puVar3 + 3);
  }
  else {
    lVar9 = (long)puVar3 - *param_5 >> 3;
    uVar10 = lVar9 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
      FUN_0037b568(param_5);
      goto LAB_003b9dbc;
    }
    lVar4 = param_5[2] - *param_5 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
      uVar5 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      puVar3 = (ulong *)0x0;
      puStack_68 = puVar7;
    }
    else {
      puVar3 = puVar7;
      puStack_68 = puVar7;
      FUN_0037b57c();
    }
    puStack_80 = puVar3 + lVar9;
    puStack_70 = puVar3 + uVar5 * 3;
    puStack_80[2] = uStack_90;
    puStack_80[1] = uStack_98;
    *puStack_80 = uStack_a0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_78 = puStack_80 + 3;
    puStack_88 = puVar3;
    FUN_0045a5fc(param_5,&puStack_88);
    lVar9 = param_5[1];
    func_0x00427834(&puStack_88);
    param_5[1] = lVar9;
    if ((long)uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
  }
  FUN_00353254(&uStack_a0,"\r\n");
  puVar3 = (ulong *)param_5[1];
  if (puVar3 < (ulong *)param_5[2]) {
    puVar3[2] = uStack_90;
    puVar3[1] = uStack_98;
    *puVar3 = uStack_a0;
    param_5[1] = (long)(puVar3 + 3);
  }
  else {
    lVar9 = (long)puVar3 - *param_5 >> 3;
    uVar10 = lVar9 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
      FUN_0037b568(param_5);
      goto LAB_003b9dbc;
    }
    lVar4 = param_5[2] - *param_5 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
      uVar5 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      puVar3 = (ulong *)0x0;
      puStack_68 = puVar7;
    }
    else {
      puVar3 = puVar7;
      puStack_68 = puVar7;
      FUN_0037b57c();
    }
    puStack_80 = puVar3 + lVar9;
    puStack_70 = puVar3 + uVar5 * 3;
    puStack_80[2] = uStack_90;
    puStack_80[1] = uStack_98;
    *puStack_80 = uStack_a0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_78 = puStack_80 + 3;
    puStack_88 = puVar3;
    FUN_0045a5fc(param_5,&puStack_88);
    lVar9 = param_5[1];
    func_0x00427834(&puStack_88);
    param_5[1] = lVar9;
    if ((long)uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
  }
  if (param_4 != 0) {
    FUN_00353254(&uStack_a0,"Connection: close\r\n");
    puVar3 = (ulong *)param_5[1];
    if (puVar3 < (ulong *)param_5[2]) {
      puVar3[2] = uStack_90;
      puVar3[1] = uStack_98;
      *puVar3 = uStack_a0;
      param_5[1] = (long)(puVar3 + 3);
    }
    else {
      lVar9 = (long)puVar3 - *param_5 >> 3;
      uVar10 = lVar9 * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar10) {
        FUN_0037b568(param_5);
        goto LAB_003b9dbc;
      }
      lVar4 = param_5[2] - *param_5 >> 3;
      uVar5 = lVar4 * 0x5555555555555556;
      if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
        uVar5 = uVar10;
      }
      if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
        puVar3 = (ulong *)0x0;
        puStack_68 = puVar7;
      }
      else {
        puVar3 = puVar7;
        puStack_68 = puVar7;
        FUN_0037b57c();
      }
      puStack_80 = puVar3 + lVar9;
      puStack_70 = puVar3 + uVar5 * 3;
      puStack_80[2] = uStack_90;
      puStack_80[1] = uStack_98;
      *puStack_80 = uStack_a0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a0 = 0;
      puStack_78 = puStack_80 + 3;
      puStack_88 = puVar3;
      FUN_0045a5fc(param_5,&puStack_88);
      lVar9 = param_5[1];
      func_0x00427834(&puStack_88);
      param_5[1] = lVar9;
      if ((long)uStack_90 < 0) {
        __ZdlPv(uStack_a0);
      }
    }
  }
  FUN_00353254(&uStack_a0,"User-Agent: grpc-httpcli/0.0\r\n");
  puVar3 = (ulong *)param_5[1];
  if (puVar3 < (ulong *)param_5[2]) {
    puVar3[2] = uStack_90;
    puVar3[1] = uStack_98;
    *puVar3 = uStack_a0;
    param_5[1] = (long)(puVar3 + 3);
  }
  else {
    lVar9 = (long)puVar3 - *param_5 >> 3;
    uVar10 = lVar9 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
      FUN_0037b568(param_5);
LAB_003b9dbc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x3b9dc0);
      (*pcVar1)();
    }
    lVar4 = param_5[2] - *param_5 >> 3;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar10 || uVar5 - uVar10 == 0) {
      uVar5 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      puVar3 = (ulong *)0x0;
      puStack_68 = puVar7;
    }
    else {
      puVar3 = puVar7;
      puStack_68 = puVar7;
      FUN_0037b57c();
    }
    puStack_80 = puVar3 + lVar9;
    puStack_70 = puVar3 + uVar5 * 3;
    puStack_80[2] = uStack_90;
    puStack_80[1] = uStack_98;
    *puStack_80 = uStack_a0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_78 = puStack_80 + 3;
    puStack_88 = puVar3;
    FUN_0045a5fc(param_5,&puStack_88);
    lVar9 = param_5[1];
    func_0x00427834(&puStack_88);
    param_5[1] = lVar9;
    if ((long)uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      FUN_00353254(&uStack_a0,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9));
      puVar3 = (ulong *)param_5[1];
      if (puVar3 < (ulong *)param_5[2]) {
        puVar3[2] = uStack_90;
        puVar3[1] = uStack_98;
        *puVar3 = uStack_a0;
        param_5[1] = (long)(puVar3 + 3);
      }
      else {
        lVar4 = (long)puVar3 - *param_5 >> 3;
        uVar5 = lVar4 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar5) {
          FUN_0037b568(param_5);
          goto LAB_003b9dbc;
        }
        lVar2 = param_5[2] - *param_5 >> 3;
        uVar6 = lVar2 * 0x5555555555555556;
        if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
          uVar6 = uVar5;
        }
        if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
          uVar6 = uVar8;
        }
        if (uVar6 == 0) {
          puVar3 = (ulong *)0x0;
          puStack_68 = puVar7;
        }
        else {
          puVar3 = puVar7;
          puStack_68 = puVar7;
          FUN_0037b57c();
        }
        puStack_80 = puVar3 + lVar4;
        puStack_70 = puVar3 + uVar6 * 3;
        puStack_80[2] = uStack_90;
        puStack_78 = puStack_80 + 3;
        puStack_80[1] = uStack_98;
        *puStack_80 = uStack_a0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a0 = 0;
        puStack_88 = puVar3;
        FUN_0045a5fc(param_5,&puStack_88);
        lVar4 = param_5[1];
        func_0x00427834(&puStack_88);
        param_5[1] = lVar4;
        if ((long)uStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
      }
      FUN_00353254(&uStack_a0,": ");
      puVar3 = (ulong *)param_5[1];
      if (puVar3 < (ulong *)param_5[2]) {
        puVar3[2] = uStack_90;
        puVar3[1] = uStack_98;
        *puVar3 = uStack_a0;
        param_5[1] = (long)(puVar3 + 3);
      }
      else {
        lVar4 = (long)puVar3 - *param_5 >> 3;
        uVar5 = lVar4 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar5) {
          FUN_0037b568(param_5);
          goto LAB_003b9dbc;
        }
        lVar2 = param_5[2] - *param_5 >> 3;
        uVar6 = lVar2 * 0x5555555555555556;
        if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
          uVar6 = uVar5;
        }
        if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
          uVar6 = uVar8;
        }
        if (uVar6 == 0) {
          puVar3 = (ulong *)0x0;
          puStack_68 = puVar7;
        }
        else {
          puVar3 = puVar7;
          puStack_68 = puVar7;
          FUN_0037b57c();
        }
        puStack_80 = puVar3 + lVar4;
        puStack_70 = puVar3 + uVar6 * 3;
        puStack_80[2] = uStack_90;
        puStack_78 = puStack_80 + 3;
        puStack_80[1] = uStack_98;
        *puStack_80 = uStack_a0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a0 = 0;
        puStack_88 = puVar3;
        FUN_0045a5fc(param_5,&puStack_88);
        lVar4 = param_5[1];
        func_0x00427834(&puStack_88);
        param_5[1] = lVar4;
        if ((long)uStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
      }
      FUN_00353254(&uStack_a0,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9 + 8));
      puVar3 = (ulong *)param_5[1];
      if (puVar3 < (ulong *)param_5[2]) {
        puVar3[2] = uStack_90;
        puVar3[1] = uStack_98;
        *puVar3 = uStack_a0;
        param_5[1] = (long)(puVar3 + 3);
      }
      else {
        lVar4 = (long)puVar3 - *param_5 >> 3;
        uVar5 = lVar4 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar5) {
          FUN_0037b568(param_5);
          goto LAB_003b9dbc;
        }
        lVar2 = param_5[2] - *param_5 >> 3;
        uVar6 = lVar2 * 0x5555555555555556;
        if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
          uVar6 = uVar5;
        }
        if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
          uVar6 = uVar8;
        }
        if (uVar6 == 0) {
          puVar3 = (ulong *)0x0;
          puStack_68 = puVar7;
        }
        else {
          puVar3 = puVar7;
          puStack_68 = puVar7;
          FUN_0037b57c();
        }
        puStack_80 = puVar3 + lVar4;
        puStack_70 = puVar3 + uVar6 * 3;
        puStack_80[2] = uStack_90;
        puStack_78 = puStack_80 + 3;
        puStack_80[1] = uStack_98;
        *puStack_80 = uStack_a0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a0 = 0;
        puStack_88 = puVar3;
        FUN_0045a5fc(param_5,&puStack_88);
        lVar4 = param_5[1];
        func_0x00427834(&puStack_88);
        param_5[1] = lVar4;
        if ((long)uStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
      }
      FUN_00353254(&uStack_a0,"\r\n");
      puVar3 = (ulong *)param_5[1];
      if (puVar3 < (ulong *)param_5[2]) {
        puVar3[2] = uStack_90;
        puVar3[1] = uStack_98;
        *puVar3 = uStack_a0;
        param_5[1] = (long)(puVar3 + 3);
      }
      else {
        lVar4 = (long)puVar3 - *param_5 >> 3;
        uVar5 = lVar4 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar5) {
          FUN_0037b568(param_5);
          goto LAB_003b9dbc;
        }
        lVar2 = param_5[2] - *param_5 >> 3;
        uVar6 = lVar2 * 0x5555555555555556;
        if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
          uVar6 = uVar5;
        }
        if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
          uVar6 = uVar8;
        }
        if (uVar6 == 0) {
          puVar3 = (ulong *)0x0;
          puStack_68 = puVar7;
        }
        else {
          puVar3 = puVar7;
          puStack_68 = puVar7;
          FUN_0037b57c();
        }
        puStack_80 = puVar3 + lVar4;
        puStack_70 = puVar3 + uVar6 * 3;
        puStack_80[2] = uStack_90;
        puStack_78 = puStack_80 + 3;
        puStack_80[1] = uStack_98;
        *puStack_80 = uStack_a0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_a0 = 0;
        puStack_88 = puVar3;
        FUN_0045a5fc(param_5,&puStack_88);
        lVar4 = param_5[1];
        func_0x00427834(&puStack_88);
        param_5[1] = lVar4;
        if ((long)uStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while (uVar10 < *(ulong *)(param_1 + 0x18));
  }
  return;
}



/* Entry: 003b9e4c; end: 003ba1a3;  */

void FUN_003b9e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  
  lStack_80 = 0;
  puStack_78 = (undefined8 **)0x0;
  puStack_70 = (undefined8 **)0x0;
  FUN_00353254(&puStack_98,"CONNECT ");
  pppuVar5 = (undefined8 ***)&puStack_70;
  if (puStack_78 < puStack_70) {
    puStack_78[2] = puStack_88;
    puStack_78[1] = puStack_90;
    *puStack_78 = puStack_98;
    puStack_78 = puStack_78 + 3;
  }
  else {
    lVar8 = (long)puStack_78 - lStack_80 >> 3;
    uVar1 = lVar8 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
      FUN_0037b568(&lStack_80);
      goto LAB_003ba134;
    }
    lVar7 = (long)puStack_70 - lStack_80 >> 3;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
      uVar9 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar9 == 0) {
      pppuVar4 = (undefined8 ***)0x0;
      ppuStack_48 = pppuVar5;
    }
    else {
      pppuVar4 = pppuVar5;
      ppuStack_48 = pppuVar5;
      FUN_0037b57c();
    }
    pppuVar6 = pppuVar4 + lVar8;
    ppuStack_50 = pppuVar4 + uVar9 * 3;
    ppuStack_60 = pppuVar6;
    pppuVar6[2] = (undefined8 **)puStack_88;
    ppuStack_68 = pppuVar4;
    pppuVar6[1] = (undefined8 **)puStack_90;
    *pppuVar6 = (undefined8 **)puStack_98;
    puStack_90 = (undefined8 **)0x0;
    puStack_88 = (undefined8 **)0x0;
    puStack_98 = (undefined8 **)0x0;
    ppuStack_58 = pppuVar6 + 3;
    FUN_0045a5fc(&lStack_80,&ppuStack_68);
    puVar2 = puStack_78;
    func_0x00427834(&ppuStack_68);
    puStack_78 = puVar2;
    if ((long)puStack_88 < 0) {
      __ZdlPv(puStack_98);
    }
  }
  FUN_003b9208(param_2,param_3,param_4,0,&lStack_80);
  FUN_00353254(&puStack_98,"\r\n");
  if (puStack_78 < puStack_70) {
    puStack_78[2] = puStack_88;
    puStack_78[1] = puStack_90;
    *puStack_78 = puStack_98;
    puStack_78 = puStack_78 + 3;
  }
  else {
    lVar8 = (long)puStack_78 - lStack_80 >> 3;
    uVar1 = lVar8 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
      FUN_0037b568(&lStack_80);
LAB_003ba134:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3ba138);
      (*pcVar3)();
    }
    lVar7 = (long)puStack_70 - lStack_80 >> 3;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
      uVar9 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar9 == 0) {
      ppuStack_68 = (undefined8 ***)0x0;
      ppuStack_48 = pppuVar5;
    }
    else {
      ppuStack_48 = pppuVar5;
      FUN_0037b57c();
      ppuStack_68 = pppuVar5;
    }
    pppuVar5 = (undefined8 ***)(ppuStack_68 + lVar8);
    ppuStack_50 = ppuStack_68 + uVar9 * 3;
    ppuStack_60 = pppuVar5;
    pppuVar5[2] = (undefined8 **)puStack_88;
    pppuVar5[1] = (undefined8 **)puStack_90;
    *pppuVar5 = (undefined8 **)puStack_98;
    puStack_90 = (undefined8 **)0x0;
    puStack_88 = (undefined8 **)0x0;
    puStack_98 = (undefined8 **)0x0;
    ppuStack_58 = pppuVar5 + 3;
    FUN_0045a5fc(&lStack_80,&ppuStack_68);
    puVar2 = puStack_78;
    func_0x00427834(&ppuStack_68);
    puStack_78 = puVar2;
    if ((long)puStack_88 < 0) {
      __ZdlPv(puStack_98);
    }
  }
  FUN_0037b5c0(&ppuStack_68,lStack_80,puStack_78,"",0);
  pppuVar5 = (undefined8 ***)ppuStack_60;
  pppuVar4 = (undefined8 ***)ppuStack_68;
  if (-1 < (long)ppuStack_58) {
    pppuVar5 = (undefined8 ***)((ulong)ppuStack_58 >> 0x38);
    pppuVar4 = &ppuStack_68;
  }
  func_0x003ec288(param_1,pppuVar4,pppuVar5);
  if ((long)ppuStack_58 < 0) {
    __ZdlPv(ppuStack_68);
  }
  ppuStack_68 = (undefined8 **)&lStack_80;
  FUN_0037b728(&ppuStack_68);
  return;
}



/* Entry: 003ba1a4; end: 003ba227;  */

undefined8 * FUN_003ba1a4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  puStack_28 = param_1 + 0xc;
  FUN_0035af5c(&puStack_28);
  FUN_0035ad28(param_1 + 9,param_1[10]);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 003ba228; end: 003ba39b;  */

void FUN_003ba228(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *extraout_x8;
  long *plVar3;
  long lVar4;
  long alStack_40 [3];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar1 = param_2;
  if (param_2 != param_1) {
    plVar2 = (long *)param_1[3];
    plVar3 = (long *)param_2[3];
    if (plVar2 == param_1) {
      if (plVar3 == param_2) {
        (**(code **)(*param_1 + 0x18))(param_1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        (**(code **)(*param_1 + 0x18))(param_1);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
    }
    else if (plVar3 == param_2) {
      plVar1 = param_1;
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*(long *)param_2[3] + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
    }
    else {
      param_1[3] = (long)plVar3;
      param_2[3] = (long)plVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar1 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  lVar4 = *plVar1;
  extraout_x8[1] = plVar1[1];
  *extraout_x8 = lVar4;
  *plVar1 = 0;
  plVar1[1] = 0;
  return;
}



/* Entry: 003ba39c; end: 003ba3ab;  */

void FUN_003ba39c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 003ba3ac; end: 003ba403;  */

undefined8 FUN_003ba3ac(void)

{
  int iVar1;
  
  if ((bRam0000000000afacd0 & 1) == 0) {
    iVar1 = 0xafacd0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam0000000000afacc8 = &PTR_FUN_009dfec8;
      ___cxa_guard_release(0xafacd0);
    }
  }
  return 0xafacc8;
}



/* Entry: 003ba404; end: 003ba417;  */

void FUN_003ba404(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 003ba418; end: 003ba4e7;  */

undefined8 * FUN_003ba418(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  dword *pdVar3;
  dword *pdVar4;
  
  pdVar3 = &MACH_HEADER.flags;
  __Znwm();
  if (0x7ffffffffffffff7 < param_3) {
    func_0x0033b318(pdVar3);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x3ba4d4);
    (*pcVar2)();
  }
  if (param_3 < 0x17) {
    *(char *)((long)pdVar3 + 0x17) = (char)param_3;
    pdVar4 = pdVar3;
    if (param_3 == 0) goto LAB_003ba4a8;
  }
  else {
    uVar1 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar1 = param_3 | 7;
    }
    pdVar4 = (dword *)(uVar1 + 1);
    __Znwm();
    *(ulong *)(pdVar3 + 2) = param_3;
    *(ulong *)(pdVar3 + 4) = uVar1 + 1 | 0x8000000000000000;
    *(dword **)pdVar3 = pdVar4;
  }
  _memmove(pdVar4,param_2,param_3);
LAB_003ba4a8:
  *(undefined1 *)((long)pdVar4 + param_3) = 0;
  *param_1 = pdVar3;
  return param_1;
}



/* Entry: 003ba4e8; end: 003ba52b;  */

void FUN_003ba4e8(long param_1,undefined4 param_2,undefined8 param_3)

{
  char *pcVar1;
  
  _bzero(param_1,0x1028);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 8) = param_3;
  pcVar1 = section_00000ff8.segname + param_1 + 0x20;
  pcVar1[0] = '\x02';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  return;
}



/* Entry: 003ba52c; end: 003ba52f;  */

void FUN_003ba52c(void)

{
  return;
}



/* Entry: 003ba530; end: 003ba59f;  */

void FUN_003ba530(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  FUN_00338cb8(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_00338cb8(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar1));
      FUN_00338cb8(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar1 + 8));
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 < *(ulong *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 003ba5a0; end: 003bb737;  */

void FUN_003ba5a0(long *param_1,uint *param_2,long *param_3,long *param_4)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  code *pcVar6;
  bool bVar7;
  char ****ppppcVar8;
  long lVar9;
  char *****pppppcVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  char *pcVar23;
  char *pcVar24;
  long *plVar25;
  ulong uVar26;
  char **ppcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  char **ppcStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  char *pcStack_1b8;
  char ***pppcStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 ****ppppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  char ***pppcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  char ***pppcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  char ***pppcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  char ***pppcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  char ***pppcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  char ***pppcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  char ***pppcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b9;
  char ****ppppcStack_b8;
  char ***pppcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char ***pppcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char ***pppcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  bVar7 = *param_3 == 0;
  uVar22 = param_3[1] & 0xff;
  if (!bVar7) {
    uVar22 = param_3[1];
  }
  if (uVar22 != 0) {
    uVar22 = 0;
    puVar1 = param_2 + 8;
    do {
      lVar20 = (long)param_3 + 9;
      if (!bVar7) {
        lVar20 = param_3[2];
      }
      if (4 < *param_2) {
LAB_003bb50c:
        func_0x00338df0("return GRPC_ERROR_NONE",
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/http/parser.cc"
                        ,0x198);
code_r0x003bb524:
        func_0x00338df0("return GRPC_ERROR_CREATE_FROM_STATIC_STRING(\"Should never reach here\")",
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/http/parser.cc"
                        ,0x15a);
code_r0x003bb53c:
        func_0x00338df0("return GRPC_ERROR_CREATE_FROM_STATIC_STRING( \"Should never reach here\")",
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/http/parser.cc"
                        ,0x112);
code_r0x003bb554:
        func_0x00338df0("return GRPC_ERROR_CREATE_FROM_STATIC_STRING(\"Should never reach here\")",
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/http/parser.cc"
                        ,0xab);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x3bb570);
        (*pcVar6)();
      }
      bVar5 = *(byte *)(lVar20 + uVar22);
      switch(*param_2) {
      default:
        if (0xfff < *(ulong *)(param_2 + 0x408)) {
          uStack_1c8 = 0;
          uStack_1c0 = 0;
          ppcStack_1d0 = (char **)0x0;
          FUN_003b646c(param_1,2,"HTTP header max line length exceeded",0x24,&pppcStack_98,
                       &ppcStack_1d0);
          pppcStack_80 = &ppcStack_1d0;
          goto code_r0x003ba728;
        }
        *(byte *)((long)param_2 + *(ulong *)(param_2 + 0x408) + 0x20) = bVar5;
        lVar20 = *(long *)(param_2 + 0x408);
        uVar13 = lVar20 + 1;
        *(ulong *)(param_2 + 0x408) = uVar13;
        if (1 < uVar13) {
          cVar3 = *(char *)((long)param_2 + lVar20 + 0x1f);
          if (cVar3 == '\n') {
            if (*(char *)((long)param_2 + lVar20 + 0x20) != '\r') goto code_r0x003ba7b8;
          }
          else if ((cVar3 != '\r') || (*(char *)((long)param_2 + lVar20 + 0x20) != '\n')) {
code_r0x003ba7b8:
            if (*(char *)((long)param_2 + lVar20 + 0x20) != '\n') goto code_r0x003ba818;
            param_2[0x40a] = 1;
            param_2[0x40b] = 0;
          }
          switch(*param_2) {
          case 0:
            if (param_2[1] == 0) {
              if ((char)*puVar1 == 'H') {
                puVar15 = (uint *)((long)puVar1 + uVar13);
                if (((uint *)((long)param_2 + 0x21) == puVar15) ||
                   (*(char *)((long)param_2 + 0x21) != 'T')) {
                  uStack_90 = 0;
                  uStack_88 = 0;
                  pppcStack_98 = (char ***)0x0;
                  FUN_003b646c(&pcStack_1b8,2,"Expected \'T\'",0xc,&uStack_b9,&pppcStack_98);
                  ppppcStack_b8 = &pppcStack_98;
                }
                else if (((uint *)((long)param_2 + 0x22) == puVar15) ||
                        (*(char *)((long)param_2 + 0x22) != 'T')) {
                  uStack_a8 = 0;
                  uStack_a0 = 0;
                  pppcStack_b0 = (char ***)0x0;
                  FUN_003b646c(&pcStack_1b8,2,"Expected \'T\'",0xc,&uStack_b9,&pppcStack_b0);
                  ppppcStack_b8 = &pppcStack_b0;
                }
                else if (((uint *)((long)param_2 + 0x23) == puVar15) ||
                        (*(char *)((long)param_2 + 0x23) != 'P')) {
                  uStack_d0 = 0;
                  uStack_c8 = 0;
                  pcStack_d8 = (char *)0x0;
                  FUN_003b646c(&pcStack_1b8,2,"Expected \'P\'",0xc,&uStack_b9,&pcStack_d8);
                  ppppcStack_b8 = (char ****)&pcStack_d8;
                }
                else if ((param_2 + 9 == puVar15) || ((char)param_2[9] != '/')) {
                  uStack_e8 = 0;
                  uStack_e0 = 0;
                  pppcStack_f0 = (char ***)0x0;
                  FUN_003b646c(&pcStack_1b8,2,"Expected \'/\'",0xc,&uStack_b9,&pppcStack_f0);
                  ppppcStack_b8 = &pppcStack_f0;
                }
                else if (((uint *)((long)param_2 + 0x25) == puVar15) ||
                        (*(char *)((long)param_2 + 0x25) != '1')) {
                  uStack_100 = 0;
                  uStack_f8 = 0;
                  pppcStack_108 = (char ***)0x0;
                  FUN_003b646c(&pcStack_1b8,2,"Expected \'1\'",0xc,&uStack_b9,&pppcStack_108);
                  ppppcStack_b8 = &pppcStack_108;
                }
                else if (((uint *)((long)param_2 + 0x26) == puVar15) ||
                        (*(char *)((long)param_2 + 0x26) != '.')) {
                  uStack_118 = 0;
                  uStack_110 = 0;
                  pppcStack_120 = (char ***)0x0;
                  FUN_003b646c(&pcStack_1b8,2,"Expected \'.\'",0xc,&uStack_b9,&pppcStack_120);
                  ppppcStack_b8 = &pppcStack_120;
                }
                else if (((uint *)((long)param_2 + 0x27) == puVar15) ||
                        (*(byte *)((long)param_2 + 0x27) - 0x32 < 0xfffffffe)) {
                  uStack_130 = 0;
                  uStack_128 = 0;
                  pppcStack_138 = (char ***)0x0;
                  FUN_003b646c(&pcStack_1b8,2,"Expected HTTP/1.0 or HTTP/1.1",0x1d,&uStack_b9,
                               &pppcStack_138);
                  ppppcStack_b8 = &pppcStack_138;
                }
                else if ((param_2 + 10 == puVar15) || ((char)param_2[10] != ' ')) {
                  uStack_148 = 0;
                  uStack_140 = 0;
                  pppcStack_150 = (char ***)0x0;
                  FUN_003b646c(&pcStack_1b8,2,"Expected \' \'",0xc,&uStack_b9,&pppcStack_150);
                  ppppcStack_b8 = &pppcStack_150;
                }
                else if (((uint *)((long)param_2 + 0x29) == puVar15) ||
                        (uVar14 = (uint)*(byte *)((long)param_2 + 0x29), uVar14 - 0x3a < 0xfffffff7)
                        ) {
                  uStack_160 = 0;
                  uStack_158 = 0;
                  pppcStack_168 = (char ***)0x0;
                  FUN_003b646c(&pcStack_1b8,2,"Expected status code",0x14,&uStack_b9,&pppcStack_168)
                  ;
                  ppppcStack_b8 = &pppcStack_168;
                }
                else if (((uint *)((long)param_2 + 0x2a) == puVar15) ||
                        (uVar18 = (uint)*(byte *)((long)param_2 + 0x2a), uVar18 - 0x3a < 0xfffffff6)
                        ) {
                  uStack_178 = 0;
                  uStack_170 = 0;
                  pppcStack_180 = (char ***)0x0;
                  FUN_003b646c(&pcStack_1b8,2,"Expected status code",0x14,&uStack_b9,&pppcStack_180)
                  ;
                  ppppcStack_b8 = &pppcStack_180;
                }
                else if (((uint *)((long)param_2 + 0x2b) == puVar15) ||
                        (uVar19 = (uint)*(byte *)((long)param_2 + 0x2b), uVar19 - 0x3a < 0xfffffff6)
                        ) {
                  uStack_190 = 0;
                  uStack_188 = 0;
                  ppppuStack_198 = (undefined8 ****)0x0;
                  FUN_003b646c(&pcStack_1b8,2,"Expected status code",0x14,&uStack_b9,&ppppuStack_198
                              );
                  ppppcStack_b8 = (char ****)&ppppuStack_198;
                }
                else {
                  **(int **)(param_2 + 2) = uVar18 * 10 + uVar14 * 100 + (uVar19 - 0x14d0);
                  if ((param_2 + 0xb != puVar15) && ((char)param_2[0xb] == ' ')) {
                    pcStack_1b8 = (char *)0x0;
                    goto code_r0x003bb1d8;
                  }
                  uStack_1a8 = 0;
                  uStack_1a0 = 0;
                  pppcStack_1b0 = (char ***)0x0;
                  FUN_003b646c(&pcStack_1b8,2,"Expected \' \'",0xc,&uStack_b9,&pppcStack_1b0);
                  ppppcStack_b8 = &pppcStack_1b0;
                }
              }
              else {
                uStack_78 = 0;
                uStack_70 = 0;
                pppcStack_80 = (char ***)0x0;
                FUN_003b646c(&pcStack_1b8,2,"Expected \'H\'",0xc,&uStack_b9,&pppcStack_80);
                ppppcStack_b8 = &pppcStack_80;
              }
              pppppcVar10 = &ppppcStack_b8;
code_r0x003bb1d4:
              FUN_0033d548(pppppcVar10);
            }
            else {
              if (param_2[1] != 1) goto code_r0x003bb554;
              uVar26 = 0;
              do {
                if (uVar13 == uVar26) goto code_r0x003bacc0;
                pcVar23 = (char *)((long)puVar1 + uVar26);
                uVar26 = uVar26 + 1;
              } while (*pcVar23 != ' ');
              if (uVar13 == uVar26) {
code_r0x003bacc0:
                uStack_78 = 0;
                uStack_70 = 0;
                pppcStack_80 = (char ***)0x0;
                FUN_003b646c(&pcStack_1b8,2,"No method on HTTP request line",0x1e,&pppcStack_1b0,
                             &pppcStack_80);
                ppppuStack_198 = (undefined8 ****)&pppcStack_80;
code_r0x003bae5c:
                pppppcVar10 = (char *****)&ppppuStack_198;
                goto code_r0x003bb1d4;
              }
              uVar13 = uVar26;
              FUN_00338c74();
              _memcpy();
              lVar9 = 0;
              *(undefined1 *)(uVar13 + uVar26 + -1) = 0;
              **(ulong **)(param_2 + 2) = uVar13;
              lVar20 = uVar26 - lVar20;
              do {
                if (lVar20 + lVar9 == 1) goto code_r0x003bae30;
                lVar12 = lVar9 + uVar26;
                lVar9 = lVar9 + 1;
              } while (*(char *)((long)puVar1 + lVar12) != ' ');
              if (lVar20 + lVar9 == 1) {
code_r0x003bae30:
                uStack_90 = 0;
                uStack_88 = 0;
                pppcStack_98 = (char ***)0x0;
                FUN_003b646c(&pcStack_1b8,2,"No path on HTTP request line",0x1c,&pppcStack_1b0,
                             &pppcStack_98);
                ppppuStack_198 = (undefined8 ****)&pppcStack_98;
                goto code_r0x003bae5c;
              }
              lVar12 = lVar9;
              FUN_00338c74();
              _memcpy();
              *(undefined1 *)(lVar12 + lVar9 + -1) = 0;
              *(long *)(*(long *)(param_2 + 2) + 8) = lVar12;
              if (*(char *)((long)puVar1 + lVar9 + uVar26) != 'H') {
                uStack_a8 = 0;
                uStack_a0 = 0;
                pppcStack_b0 = (char ***)0x0;
                FUN_003b646c(&pcStack_1b8,2,"Expected \'H\'",0xc,&pppcStack_1b0,&pppcStack_b0);
                ppppuStack_198 = (undefined8 ****)&pppcStack_b0;
                goto code_r0x003bae5c;
              }
              if ((lVar20 + lVar9 == 0) || (*(char *)((long)puVar1 + lVar9 + uVar26 + 1) != 'T')) {
                uStack_d0 = 0;
                uStack_c8 = 0;
                pcStack_d8 = (char *)0x0;
                FUN_003b646c(&pcStack_1b8,2,"Expected \'T\'",0xc,&pppcStack_1b0,&pcStack_d8);
                ppppuStack_198 = (undefined8 ****)&pcStack_d8;
                goto code_r0x003bae5c;
              }
              if ((lVar20 + lVar9 == -1) || (*(char *)((long)puVar1 + lVar9 + uVar26 + 2) != 'T')) {
                uStack_e8 = 0;
                uStack_e0 = 0;
                pppcStack_f0 = (char ***)0x0;
                FUN_003b646c(&pcStack_1b8,2,"Expected \'T\'",0xc,&pppcStack_1b0,&pppcStack_f0);
                ppppuStack_198 = (undefined8 ****)&pppcStack_f0;
                goto code_r0x003bae5c;
              }
              if ((lVar20 + lVar9 == -2) || (*(char *)((long)puVar1 + lVar9 + uVar26 + 3) != 'P')) {
                uStack_100 = 0;
                uStack_f8 = 0;
                pppcStack_108 = (char ***)0x0;
                FUN_003b646c(&pcStack_1b8,2,"Expected \'P\'",0xc,&pppcStack_1b0,&pppcStack_108);
                ppppuStack_198 = (undefined8 ****)&pppcStack_108;
                goto code_r0x003bae5c;
              }
              if ((lVar20 + lVar9 == -3) || (*(char *)((long)puVar1 + lVar9 + uVar26 + 4) != '/')) {
                uStack_118 = 0;
                uStack_110 = 0;
                pppcStack_120 = (char ***)0x0;
                FUN_003b646c(&pcStack_1b8,2,"Expected \'/\'",0xc,&pppcStack_1b0,&pppcStack_120);
                ppppuStack_198 = (undefined8 ****)&pppcStack_120;
                goto code_r0x003bae5c;
              }
              if (lVar20 + lVar9 == -6) {
                uStack_130 = 0;
                uStack_128 = 0;
                pppcStack_138 = (char ***)0x0;
                FUN_003b646c(&pcStack_1b8,2,"End of line in HTTP version string",0x22,&pppcStack_1b0
                             ,&pppcStack_138);
                ppppuStack_198 = (undefined8 ****)&pppcStack_138;
code_r0x003bb3b4:
                FUN_0033d548(&ppppuStack_198);
              }
              else {
                cVar3 = *(char *)((long)puVar1 + lVar9 + uVar26 + 5);
                cVar4 = *(char *)((long)puVar1 + lVar9 + uVar26 + 7);
                if (cVar3 == '2') {
                  if (cVar4 == '0') {
                    uVar11 = 2;
                    goto code_r0x003bb378;
                  }
                  uStack_160 = 0;
                  uStack_158 = 0;
                  pppcStack_168 = (char ***)0x0;
                  FUN_003b646c(&pcStack_1b8,2,"Expected one of HTTP/1.0, HTTP/1.1, or HTTP/2.0",0x2f
                               ,&pppcStack_1b0,&pppcStack_168);
                  ppppuStack_198 = (undefined8 ****)&pppcStack_168;
                  goto code_r0x003bb3b4;
                }
                if (cVar3 != '1') {
                  uStack_178 = 0;
                  uStack_170 = 0;
                  pppcStack_180 = (char ***)0x0;
                  FUN_003b646c(&pcStack_1b8,2,"Expected one of HTTP/1.0, HTTP/1.1, or HTTP/2.0",0x2f
                               ,&pppcStack_1b0,&pppcStack_180);
                  ppppuStack_198 = (undefined8 ****)&pppcStack_180;
                  goto code_r0x003bb3b4;
                }
                if (cVar4 == '0') {
                  uVar11 = 0;
                }
                else {
                  if (cVar4 != '1') {
                    uStack_148 = 0;
                    uStack_140 = 0;
                    pppcStack_150 = (char ***)0x0;
                    FUN_003b646c(&pcStack_1b8,2,"Expected one of HTTP/1.0, HTTP/1.1, or HTTP/2.0",
                                 0x2f,&pppcStack_1b0,&pppcStack_150);
                    ppppuStack_198 = (undefined8 ****)&pppcStack_150;
                    goto code_r0x003bb3b4;
                  }
                  uVar11 = 1;
                }
code_r0x003bb378:
                *(undefined4 *)(*(long *)(param_2 + 2) + 0x10) = uVar11;
                pcStack_1b8 = (char *)0x0;
              }
            }
code_r0x003bb1d8:
            pcVar23 = pcStack_1b8;
            if (pcStack_1b8 == (char *)0x0) {
              bVar7 = false;
              *param_2 = 1;
              break;
            }
code_r0x003bb1e0:
            bVar7 = false;
            goto code_r0x003bb1fc;
          case 1:
          case 3:
            if (uVar13 == *(ulong *)(param_2 + 0x40a)) {
              if (*param_2 == 1) {
                *param_2 = 2;
                bVar7 = true;
              }
              else {
                bVar7 = false;
                *param_2 = 4;
              }
            }
            else {
              cVar3 = (char)*puVar1;
              if ((cVar3 == '\t') ||
                 (puVar16 = puVar1, lVar9 = lVar20, puVar15 = puVar1, cVar3 == ' ')) {
                uStack_78 = 0;
                uStack_70 = 0;
                pppcStack_80 = (char ***)0x0;
                FUN_003b646c(&pcStack_d8,2,"Continued header lines not supported yet",0x28,
                             &pppcStack_f0,&pppcStack_80);
                pcVar23 = pcStack_d8;
                if (pcStack_d8 != (char *)0x0) {
                  pcStack_d8 = segment_command_00000020.segname + 0xe;
                }
                lVar20 = -0x70;
code_r0x003bae04:
                pppcStack_b0 = (char ***)(&stack0xfffffffffffffff0 + lVar20);
                FUN_0033d548(&pppcStack_b0);
                if (pcVar23 == (char *)0x0) goto code_r0x003bae28;
                FUN_00338cb8(0);
                FUN_00338cb8(0);
                goto code_r0x003bb1e0;
              }
              while (cVar3 != ':') {
                if (lVar9 == 0) {
                  uStack_90 = 0;
                  uStack_88 = 0;
                  pppcStack_98 = (char ***)0x0;
                  FUN_003b646c(&pcStack_d8,2,"Didn\'t find \':\' in header string",0x20,
                               &pppcStack_f0,&pppcStack_98);
                  pcVar23 = pcStack_d8;
                  if (pcStack_d8 != (char *)0x0) {
                    pcStack_d8 = segment_command_00000020.segname + 0xe;
                  }
                  lVar20 = -0x88;
                  goto code_r0x003bae04;
                }
                cVar3 = *(char *)((long)puVar15 + 1);
                puVar16 = (uint *)((long)puVar16 + 1);
                lVar9 = lVar9 + -1;
                puVar15 = (uint *)((long)puVar15 + 1);
              }
              pcVar2 = (char *)((long)puVar1 + uVar13);
              lVar9 = (long)puVar16 + (1 - (long)puVar1);
              FUN_00338c74();
              _memcpy();
              *(undefined1 *)((long)puVar16 + (lVar9 - (long)puVar1)) = 0;
              pcVar23 = (char *)((long)puVar15 + 1);
              pcVar24 = pcVar2;
              if (pcVar23 != pcVar2) {
                puVar15 = (uint *)((long)param_2 + lVar20 + 0x20);
                do {
                  if (*pcVar23 != ' ' && *pcVar23 != '\t') {
                    puVar15 = (uint *)(pcVar23 + -1);
                    pcVar24 = pcVar23;
                    break;
                  }
                  pcVar23 = pcVar23 + 1;
                } while (pcVar23 != pcVar2);
              }
              lVar20 = ((long)pcVar2 - (long)pcVar24) - *(ulong *)(param_2 + 0x40a);
              if ((ulong)((long)pcVar2 - (long)pcVar24) < *(ulong *)(param_2 + 0x40a)) {
                func_0x00773d5c();
                goto LAB_003bb50c;
              }
              if (lVar20 == 0) {
                lVar20 = 0;
              }
              else {
                lVar20 = lVar20 - (ulong)(*(char *)((long)puVar15 + lVar20) == '\r');
              }
              lVar12 = lVar20 + 1;
              FUN_00338c74();
              _memcpy();
              *(undefined1 *)(lVar12 + lVar20) = 0;
              lVar20 = *(long *)(param_2 + 2);
              if (param_2[1] == 0) {
                plVar21 = (long *)(lVar20 + 8);
                plVar25 = (long *)(lVar20 + 0x10);
                lVar17 = lVar9;
                _strcmp(lVar9,"Transfer-Encoding");
                if (((int)lVar17 == 0) &&
                   (lVar17 = lVar12, _strcmp(lVar12,"chunked"), (int)lVar17 == 0)) {
                  *(undefined4 *)(lVar20 + 0x20) = 1;
                }
              }
              else {
                plVar21 = (long *)(lVar20 + 0x18);
                plVar25 = (long *)(lVar20 + 0x20);
              }
              lVar17 = *plVar21;
              lVar20 = *plVar25;
              if (lVar17 == *(long *)(param_2 + 6)) {
                uVar13 = (ulong)(lVar17 * 3) >> 1;
                if ((ulong)(lVar17 * 3) >> 1 < lVar17 + 1U) {
                  uVar13 = lVar17 + 1;
                }
                *(ulong *)(param_2 + 6) = uVar13;
                FUN_00338cbc(lVar20,uVar13 << 4);
                *plVar25 = lVar20;
                lVar17 = *plVar21;
              }
              bVar7 = false;
              *plVar21 = lVar17 + 1;
              plVar21 = (long *)(lVar20 + lVar17 * 0x10);
              *plVar21 = lVar9;
              plVar21[1] = lVar12;
            }
            break;
          case 2:
          case 4:
            goto code_r0x003bb53c;
          default:
code_r0x003bae28:
            bVar7 = false;
          }
          pcVar23 = (char *)0x0;
          param_2[0x408] = 0;
          param_2[0x409] = 0;
code_r0x003bb1fc:
          *param_1 = (long)pcVar23;
          if (pcVar23 != (char *)0x0) {
            return;
          }
          goto code_r0x003baad8;
        }
        if (uVar13 != 0) goto code_r0x003ba7b8;
code_r0x003ba818:
        *param_1 = 0;
        goto code_r0x003baae8;
      case 2:
        if (param_2[1] == 1) {
          lVar20 = *(long *)(param_2 + 2);
          plVar21 = (long *)(lVar20 + 0x28);
code_r0x003baa78:
          lVar12 = *plVar21;
          lVar9 = *(long *)(lVar20 + 0x30);
          if (lVar12 == *(long *)(param_2 + 4)) {
            uVar13 = (ulong)(lVar12 * 3) >> 1;
            if (uVar13 < 9) {
              uVar13 = 8;
            }
            *(ulong *)(param_2 + 4) = uVar13;
            FUN_00338cbc();
            *(long *)(lVar20 + 0x30) = lVar9;
            lVar12 = *plVar21;
          }
          *(byte *)(lVar9 + lVar12) = bVar5;
          *plVar21 = *plVar21 + 1;
          goto code_r0x003baac8;
        }
        if (param_2[1] != 0) goto code_r0x003bb524;
        lVar20 = *(long *)(param_2 + 2);
        puVar15 = (uint *)(lVar20 + 0x20);
        if (3 < *puVar15 - 1) {
code_r0x003baa74:
          plVar21 = (long *)(lVar20 + 0x18);
          goto code_r0x003baa78;
        }
        uVar14 = (uint)bVar5;
        switch(*puVar15) {
        case 1:
          if (uVar14 == 0x3b || uVar14 == 0xd) {
            *puVar15 = 2;
          }
          else {
            if (uVar14 - 0x30 < 10) {
              *(long *)(lVar20 + 0x28) = *(long *)(lVar20 + 0x28) << 4;
              uVar13 = (ulong)(bVar5 - 0x30);
            }
            else if (uVar14 - 0x61 < 6) {
              *(long *)(lVar20 + 0x28) = *(long *)(lVar20 + 0x28) << 4;
              uVar13 = (ulong)(uVar14 - 0x57);
            }
            else {
              if (5 < uVar14 - 0x41) {
                uStack_78 = 0;
                uStack_70 = 0;
                pppcStack_80 = (char ***)0x0;
                FUN_003b646c(param_1,2,"Expected chunk size in hexadecimal",0x22,&pppcStack_f0,
                             &pppcStack_80);
                pcStack_d8 = (char *)&pppcStack_80;
                goto code_r0x003bae94;
              }
              *(long *)(lVar20 + 0x28) = *(long *)(lVar20 + 0x28) << 4;
              uVar13 = (ulong)(uVar14 - 0x37);
            }
            *(ulong *)(*(long *)(param_2 + 2) + 0x28) =
                 *(long *)(*(long *)(param_2 + 2) + 0x28) + uVar13;
          }
          break;
        case 2:
          if (uVar14 == 10) {
            puVar16 = param_2;
            if (*(long *)(lVar20 + 0x28) != 0) {
              puVar16 = puVar15;
            }
            *puVar16 = 3;
          }
          break;
        case 3:
          if (*(long *)(lVar20 + 0x28) != 0) {
            *(long *)(lVar20 + 0x28) = *(long *)(lVar20 + 0x28) + -1;
            lVar20 = *(long *)(param_2 + 2);
            goto code_r0x003baa74;
          }
          if (uVar14 != 0xd) {
            uStack_90 = 0;
            uStack_88 = 0;
            pppcStack_98 = (char ***)0x0;
            FUN_003b646c(param_1,2,"Expected \'\\r\\n\' after chunk body",0x20,&pppcStack_f0,
                         &pppcStack_98);
            pcStack_d8 = (char *)&pppcStack_98;
            goto code_r0x003bae94;
          }
          *puVar15 = 4;
          *(undefined8 *)(*(long *)(param_2 + 2) + 0x28) = 0;
          break;
        case 4:
          if (uVar14 == 10) {
            *puVar15 = 1;
            break;
          }
          uStack_a8 = 0;
          uStack_a0 = 0;
          pppcStack_b0 = (char ***)0x0;
          FUN_003b646c(param_1,2,"Expected \'\\r\\n\' after chunk body",0x20,&pppcStack_f0,
                       &pppcStack_b0);
          pcStack_d8 = (char *)&pppcStack_b0;
code_r0x003bae94:
          ppppcVar8 = (char ****)&pcStack_d8;
          goto code_r0x003ba730;
        }
code_r0x003baac8:
        *param_1 = 0;
        break;
      case 4:
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        ppcStack_1e8 = (char **)0x0;
        FUN_003b646c(param_1,2,"Unexpected byte after end",0x19,&pppcStack_98,&ppcStack_1e8);
        pppcStack_80 = &ppcStack_1e8;
code_r0x003ba728:
        ppppcVar8 = &pppcStack_80;
code_r0x003ba730:
        FUN_0033d548(ppppcVar8);
      }
      bVar7 = false;
      if (*param_1 != 0) {
        return;
      }
code_r0x003baad8:
      if ((param_4 != (long *)0x0) && (bVar7)) {
        *param_4 = uVar22 + 1;
      }
code_r0x003baae8:
      uVar22 = uVar22 + 1;
      bVar7 = *param_3 == 0;
      uVar13 = param_3[1] & 0xff;
      if (!bVar7) {
        uVar13 = param_3[1];
      }
    } while (uVar22 < uVar13);
  }
  *param_1 = 0;
  return;
}



/* Entry: 003bb738; end: 003bb7bf;  */

void FUN_003bb738(undefined8 *param_1,int *param_2)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  
  if (*param_2 == 2 || *param_2 == 4) {
    *param_1 = 0;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    FUN_003b646c(2,"Did not finish headers",0x16,&uStack_29,&uStack_48);
    puStack_28 = &uStack_48;
    FUN_0033d548(&puStack_28);
  }
  return;
}



/* Entry: 003bb7c0; end: 003bb7db;  */

void FUN_003bb7c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 10;
  *puVar1 = 0;
  param_1[1] = puVar1;
  param_1[9] = puVar1;
  param_1[0xb] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 003bb7dc; end: 003bb817;  */

long FUN_003bb7dc(long param_1)

{
  if ((*(ulong *)(param_1 + 0x58) & 1) != 0) {
    FUN_003b7afc(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffe);
  }
  FUN_003bbcd4(param_1 + 8);
  return param_1;
}



/* Entry: 003bb818; end: 003bb81b;  */

long FUN_003bb818(long param_1)

{
  if ((*(ulong *)(param_1 + 0x58) & 1) != 0) {
    FUN_003b7afc(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffe);
  }
  FUN_003bbcd4(param_1 + 8);
  return param_1;
}



/* Entry: 003bb81c; end: 003bb88b;  */

void FUN_003bb81c(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uStack_30 = *param_3;
  if ((uStack_30 & 1) != 0) {
    piVar3 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(&uStack_21,param_2,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003bb88c; end: 003bb973;  */

void FUN_003bb88c(long *param_1,long param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  ulong uStack_40;
  ulong uStack_38;
  
  puVar3 = &uStack_40;
  do {
    lVar4 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar6 = *param_3;
  if (lVar4 == 0) {
    if ((uVar6 & 1) != 0) {
      piVar5 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_38 = uVar6;
    FUN_003bb81c(param_1,param_2,&uStack_38);
    if ((uVar6 & 1) != 0) {
      FUN_0055293c(uVar6);
    }
  }
  else {
    if ((uVar6 & 1) != 0) {
      piVar5 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_40 = uVar6;
    FUN_003b7ab0();
    *(ulong **)(param_2 + 0x18) = puVar3;
    if ((uStack_40 & 1) != 0) {
      FUN_0055293c();
    }
    FUN_0033b3a0(param_1 + 1,param_2);
  }
  return;
}



/* Entry: 003bb974; end: 003bba53;  */

void FUN_003bb974(long *param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  bool bVar8;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_79;
  ulong uStack_78;
  ulong uStack_38;
  ulong uStack_30;
  undefined1 uStack_21;
  
  do {
    lVar5 = *param_1;
    lVar3 = lVar5 + -1;
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar8) {
      *param_1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar3 != 0) {
    if (lVar5 == 0) {
      func_0x00773d94();
      func_0x0040cf10();
      func_0x0040cf10();
      FUN_0033c494(&uStack_38);
      FUN_0033c494(&uStack_30);
      __Unwind_Resume();
      puVar1 = (ulong *)(param_1 + 0xb);
      do {
        uVar7 = *puVar1;
        if ((uVar7 & 1) == 0) {
          uStack_78 = 0;
LAB_003bbad0:
          do {
            if (*puVar1 != uVar7) {
              ClearExclusiveLocal();
              bVar8 = true;
              goto LAB_003bbb24;
            }
            cVar2 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
              *puVar1 = param_2;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 == 0) goto LAB_003bbb14;
          uStack_90 = 0;
          FUN_003c1e6c(&uStack_79,uVar7,&uStack_90);
          if ((uStack_90 & 1) != 0) {
            FUN_0055293c();
          }
          bVar8 = false;
          param_2 = uVar7;
        }
        else {
          FUN_003b7b3c(&uStack_78,uVar7 & 0xfffffffffffffffe);
          if (uStack_78 == 0) goto LAB_003bbad0;
          uStack_88 = uStack_78;
          if ((uStack_78 & 1) != 0) {
            piVar6 = (int *)(uStack_78 - 1);
            do {
              cVar2 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar8) {
                *piVar6 = *piVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          FUN_003c1e6c(&uStack_79,param_2,&uStack_88);
          if ((uStack_88 & 1) != 0) {
            FUN_0055293c();
          }
LAB_003bbb14:
          bVar8 = false;
        }
LAB_003bbb24:
        if ((uStack_78 & 1) != 0) {
          FUN_0055293c();
        }
        if (!bVar8) {
          return;
        }
      } while( true );
    }
    param_1 = param_1 + 1;
    plVar4 = param_1;
    FUN_0033b3e4(param_1,&uStack_21);
    while (plVar4 == (long *)0x0) {
      plVar4 = param_1;
      FUN_0033b3e4(param_1,&uStack_21);
    }
    FUN_003b7b6c(&uStack_30,plVar4[3]);
    uVar7 = uStack_30;
    plVar4[3] = 0;
    uStack_38 = uStack_30;
    if ((uStack_30 & 1) != 0) {
      piVar6 = (int *)(uStack_30 - 1);
      do {
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar8) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003bb81c();
    if ((uVar7 & 1) != 0) {
      FUN_0055293c(uVar7);
    }
    if ((uStack_30 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 003bba54; end: 003bbb7b;  */

void FUN_003bba54(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  int *piVar3;
  ulong uVar4;
  bool bVar5;
  ulong uStack_50;
  ulong uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  
  puVar1 = (ulong *)(param_1 + 0x58);
  do {
    uVar4 = *puVar1;
    if ((uVar4 & 1) == 0) {
      uStack_38 = 0;
LAB_003bbad0:
      do {
        if (*puVar1 != uVar4) {
          ClearExclusiveLocal();
          bVar5 = true;
          goto LAB_003bbb24;
        }
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = param_2;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 == 0) goto LAB_003bbb14;
      uStack_50 = 0;
      FUN_003c1e6c(&uStack_39,uVar4,&uStack_50);
      if ((uStack_50 & 1) != 0) {
        FUN_0055293c();
      }
      bVar5 = false;
      param_2 = uVar4;
    }
    else {
      FUN_003b7b3c(&uStack_38,uVar4 & 0xfffffffffffffffe);
      if (uStack_38 == 0) goto LAB_003bbad0;
      uStack_48 = uStack_38;
      if ((uStack_38 & 1) != 0) {
        piVar3 = (int *)(uStack_38 - 1);
        do {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = *piVar3 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003c1e6c(&uStack_39,param_2,&uStack_48);
      if ((uStack_48 & 1) != 0) {
        FUN_0055293c();
      }
LAB_003bbb14:
      bVar5 = false;
    }
LAB_003bbb24:
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    if (!bVar5) {
      return;
    }
  } while( true );
}



/* Entry: 003bbb7c; end: 003bbcd3;  */

void FUN_003bbb7c(long param_1,ulong *param_2)

{
  ulong *puVar1;
  char cVar2;
  ulong *puVar3;
  int *piVar4;
  bool bVar5;
  ulong uVar6;
  ulong uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_48 = *param_2;
  if ((uStack_48 & 1) != 0) {
    piVar4 = (int *)(uStack_48 - 1);
    do {
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar5) {
        *piVar4 = *piVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar3 = &uStack_48;
  FUN_003b7ab0();
  if ((uStack_48 & 1) != 0) {
    FUN_0055293c();
  }
  puVar1 = (ulong *)(param_1 + 0x58);
  do {
    uVar6 = *puVar1;
    if ((uVar6 & 1) == 0) {
      uStack_50 = 0;
LAB_003bbc0c:
      do {
        if (*puVar1 != uVar6) {
          ClearExclusiveLocal();
          bVar5 = true;
          goto LAB_003bbc70;
        }
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = (ulong)puVar3 | 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar5 = false;
      if (uVar6 != 0) {
        uStack_60 = *param_2;
        if ((uStack_60 & 1) != 0) {
          piVar4 = (int *)(uStack_60 - 1);
          do {
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar5) {
              *piVar4 = *piVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_003c1e6c(&uStack_51,uVar6,&uStack_60);
        if ((uStack_60 & 1) != 0) {
          FUN_0055293c();
        }
        goto LAB_003bbc60;
      }
    }
    else {
      FUN_003b7b3c(&uStack_50,uVar6 & 0xfffffffffffffffe);
      if (uStack_50 == 0) goto LAB_003bbc0c;
      FUN_003b7afc(puVar3);
LAB_003bbc60:
      bVar5 = false;
    }
LAB_003bbc70:
    if ((uStack_50 & 1) != 0) {
      FUN_0055293c();
    }
    if (!bVar5) {
      return;
    }
  } while( true );
}



/* Entry: 003bbcd4; end: 003bbd4b;  */

void FUN_003bbcd4(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_1 + 9 == (long *)*param_1) {
    if ((long *)param_1[8] == (long *)*param_1) {
      return;
    }
    uVar2 = 0x2d;
  }
  else {
    uVar2 = 0x2c;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/mpscq.h"
               ,uVar2,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3bbd48);
  (*pcVar1)();
}



/* Entry: 003bbd4c; end: 003bbd7f;  */

undefined8 * FUN_003bbd4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009dff40;
  FUN_003f8e14();
  return param_1;
}



/* Entry: 003bbd80; end: 003bbdb3;  */

void FUN_003bbd80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009dff40;
  FUN_003f8e14();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 003bbdb4; end: 003bbddb;  */

long FUN_003bbdb4(long param_1)

{
  func_0x00339cd4(param_1 + 0x28);
  return param_1;
}



/* Entry: 003bbddc; end: 003bbde3;  */

void FUN_003bbddc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 0x28);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 003bbde4; end: 003bbe6b;  */

void FUN_003bbde4(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x28;
  FUN_00339d14();
  if ((param_1 != (long *)0x0) && (iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x003bbe18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1);
    return;
  }
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090d3054; end: 1090d3073;  */

void FUN_1090d3054(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_1090d36d8();
  }
  return;
}



/* Entry: 1090d3074; end: 1090d31e7;  */

void FUN_1090d3074(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  return;
}



/* Entry: 1090d31e8; end: 1090d337b;  */

void FUN_1090d31e8(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar5;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    puVar3 = (undefined8 *)0xc8;
    __Znwm();
    plVar5 = puVar3 + 1;
    *plVar5 = 1;
    *puVar3 = &PTR_FUN_110ad99e0;
    *(undefined1 *)(puVar3 + 0xd) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined1 *)(puVar3 + 0x15) = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    *(undefined1 *)(puVar3 + 8) = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    *(undefined1 *)(puVar3 + 0x18) = 0;
    uVar4 = 0xa8;
    puStack_58 = puVar3;
    __Znwm();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puStack_48 = puVar3;
    func_0x0001090d346c();
    uStack_50 = uVar4;
    func_0x0001090d3448();
    do {
      func_0x0001090d3450();
    } while (extraout_w10 != 0);
    func_0x0001090d3460();
    FUN_1090d337c(&puStack_58);
  }
  else {
    puVar3 = (undefined8 *)0x30;
    __Znwm();
    FUN_1090d4a14();
    uVar4 = 0xa8;
    puStack_58 = puVar3;
    __Znwm();
    do {
      func_0x0001090d3450();
    } while (extraout_w10_00 != 0);
    puStack_48 = puVar3;
    func_0x0001090d346c();
    uStack_50 = uVar4;
    func_0x0001090d3448();
    do {
      func_0x0001090d3450();
    } while (extraout_w10_01 != 0);
    func_0x0001090d3460();
    func_0x0001090d33fc(&puStack_58);
  }
  return;
}



/* Entry: 1090d337c; end: 1090d343b;  */

long * FUN_1090d337c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    plVar1 = (long *)(*param_1 + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      FUN_1090d343c();
    }
  }
  return param_1;
}



/* Entry: 1090d343c; end: 1090d347f;  */

void FUN_1090d343c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090d3444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1090d3480; end: 1090d34fb;  */

undefined8 FUN_1090d3480(void)

{
  int iVar1;
  
  if ((bRam0000000113829b90 & 1) == 0) {
    iVar1 = 0x13829b90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b99f5f8(0x113829b88,&UNK_10f5501ef);
      ___cxa_guard_release(0x113829b90);
    }
  }
  return 0x113829b88;
}



/* Entry: 1090d34fc; end: 1090d35bf;  */

undefined1 FUN_1090d34fc(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uStack_58;
  
  if (0xb < param_2) {
    uVar5 = *(ulong *)(param_1 + 4);
    for (lVar4 = 0; lVar4 != 0x50; lVar4 = lVar4 + 8) {
      uVar3 = *(ulong *)((long)&PTR_DAT_110ad9768 + lVar4);
      uVar2 = uVar3;
      _strlen();
      uVar1 = uVar2;
      if (7 < uVar2) {
        uVar1 = 8;
      }
      _memcpy(&uStack_58,uVar3,uVar1);
      if (uVar2 < 8) {
        if ((uStack_58 ^ uVar5) << (uVar2 * -8 & 0x3f) == 0) {
          return 1;
        }
      }
      else if (uVar5 == uStack_58) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 1090d35c0; end: 1090d35cb;  */

long * FUN_1090d35c0(long *param_1,long param_2,long param_3)

{
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 0x80;
  param_1[1] = 0;
  FUN_1090d3b3c(param_1,param_2,param_2 + param_3,0);
  return param_1;
}



/* Entry: 1090d35cc; end: 1090d368f;  */

long * FUN_1090d35cc(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar3;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar2 = param_1 + 3;
  *plVar2 = (long)&UNK_10dd5b8b0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  FUN_1090d3690(plVar2,param_1[1] - *param_1 >> 2);
  lVar1 = param_1[1];
  for (lVar3 = *param_1; lVar3 != lVar1; lVar3 = lVar3 + 4) {
    FUN_1090d36b4(auStack_48,plVar2,lVar3);
  }
  return param_1;
}



/* Entry: 1090d3690; end: 1090d36b3;  */

void FUN_1090d3690(long *param_1,long param_2)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  long **pplVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plStack_58;
  
  if (param_2 == 7) {
    uVar7 = 8;
  }
  else {
    uVar7 = (param_2 + -1) / 7 + param_2;
  }
  if (uVar7 == 0) {
    if (param_1[3] == 0) {
      return;
    }
    uVar8 = param_1[2];
    if (uVar8 == 0) {
      if (param_1[3] != 0) {
        __ZdlPv(*param_1);
        param_1[5] = 0;
        *param_1 = (long)&UNK_10dd5b8b0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      return;
    }
  }
  else {
    uVar8 = param_1[2];
  }
  uVar2 = uVar7;
  if (uVar7 <= uVar8) {
    uVar2 = uVar8;
  }
  uVar8 = 0xffffffffffffffff >> (LZCOUNT(uVar2) & 0x3fU);
  if (uVar2 == 0) {
    uVar8 = 1;
  }
  if ((uVar7 != 0) && (uVar8 <= (ulong)param_1[3])) {
    return;
  }
  pcVar3 = (char *)*param_1;
  puVar4 = (undefined4 *)param_1[1];
  lVar9 = param_1[3];
  FUN_1090d3d5c();
  param_1[3] = uVar8;
  pcVar1 = pcVar3;
  for (lVar10 = lVar9; lVar10 != 0; lVar10 = lVar10 + -1) {
    if (-1 < *pcVar1) {
      pplVar5 = &plStack_58;
      plStack_58 = param_1 + 5;
      FUN_1090d3e58(pplVar5,puVar4);
      plVar6 = param_1;
      FUN_1090d3dcc(param_1,pplVar5);
      *(byte *)(*param_1 + (long)plVar6) = (byte)pplVar5 & 0x7f;
      func_0x0001090d434c();
      *(undefined4 *)(param_1[1] + (long)plVar6 * 4) = *puVar4;
    }
    pcVar1 = pcVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  if (lVar9 != 0) {
    __ZdlPv(pcVar3);
  }
  return;
}



/* Entry: 1090d36b4; end: 1090d36d7;  */

void FUN_1090d36b4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1090d3e78(&uStack_18);
  return;
}



/* Entry: 1090d36d8; end: 1090d36ff;  */

long FUN_1090d36d8(long param_1)

{
  long lStack_28;
  
  FUN_1090d3a94(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x00010731e298(&lStack_28);
  return param_1;
}



/* Entry: 1090d3700; end: 1090d3727;  */

void FUN_1090d3700(long param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_1090d3728(param_1 + 0x18,&uStack_14);
  return;
}



/* Entry: 1090d3728; end: 1090d375b;  */

bool FUN_1090d3728(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_1090d4228();
  return (long *)(*param_1 + param_1[3]) != plVar1;
}



/* Entry: 1090d375c; end: 1090d378f;  */

long FUN_1090d375c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1090d3790(param_1,param_1);
  }
  return param_1;
}



/* Entry: 1090d3790; end: 1090d37ab;  */

void FUN_1090d3790(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090d37ac; end: 1090d3813;  */

long * FUN_1090d37ac(long *param_1,long *param_2)

{
  long lStack_30;
  long lStack_28;
  
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 0x80;
  param_1[1] = 0;
  lStack_28 = *param_2;
  lStack_30 = lStack_28 + param_2[1];
  FUN_1090d3814(param_1,&lStack_28,&lStack_30,0);
  return param_1;
}



/* Entry: 1090d3814; end: 1090d38eb;  */

void FUN_1090d3814(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lStack_50;
  long lStack_48;
  
  uVar2 = *param_3 - *param_2;
  if ((ulong)param_1[2] < uVar2) {
    plVar1 = param_1;
    func_0x0001090d43a4();
    if (((long *)*param_1 != (long *)0x0) && (param_1[1] = 0, param_1 + 3 != (long *)*param_1)) {
      __ZdlPv();
    }
    param_1[1] = 0;
    param_1[2] = uVar2;
    *param_1 = (long)plVar1;
    lStack_48 = *param_2;
    lStack_50 = *param_3;
    FUN_1090d38ec(param_1,&lStack_48,&lStack_50);
    return;
  }
  if ((ulong)param_1[1] < uVar2) {
    if (param_1[1] != 0) {
      func_0x0001090d4384();
      _memmove();
    }
    func_0x0001090d4384();
  }
  else {
    if (*param_3 == *param_2) goto LAB_1090d38e0;
    func_0x0001090d4384();
  }
  _memmove();
LAB_1090d38e0:
  param_1[1] = uVar2;
  return;
}



/* Entry: 1090d38ec; end: 1090d3953;  */

void FUN_1090d38ec(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1[1];
  lVar1 = *param_1 + lVar3;
  lVar2 = *param_2;
  lVar4 = lVar1;
  if ((lVar2 != 0) && (*param_1 != 0 && lVar2 != *param_3)) {
    lVar4 = *param_3 - lVar2;
    _memmove(lVar1,lVar2,lVar4);
    lVar3 = param_1[1];
    lVar4 = lVar1 + lVar4;
  }
  param_1[1] = (lVar3 - lVar1) + lVar4;
  return;
}



/* Entry: 1090d3954; end: 1090d399f;  */

void FUN_1090d3954(undefined *param_1,long param_2)

{
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_2 < 0) {
    unaff_x29 = &stack0xfffffffffffffff0;
    param_1 = &UNK_10f424dbf;
    unaff_x30 = 0x1090d3970;
    func_0x00010772e1f8();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  if (param_2 < 0) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010772e264();
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x18) = 0x1090d3988;
    FUN_1090d39a0();
    *(undefined4 *)(param_1 + 200) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2);
  return;
}



/* Entry: 1090d39a0; end: 1090d39db;  */

undefined8 * FUN_1090d39a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  FUN_1090d37ac(param_1 + 1,param_2 + 1);
  uVar2 = param_2[0x15];
  uVar1 = param_2[0x14];
  uVar4 = param_2[0x17];
  uVar3 = param_2[0x16];
  *(undefined4 *)((long)param_1 + 0xbf) = *(undefined4 *)((long)param_2 + 0xbf);
  param_1[0x15] = uVar2;
  param_1[0x14] = uVar1;
  param_1[0x17] = uVar4;
  param_1[0x16] = uVar3;
  return param_1;
}



/* Entry: 1090d39dc; end: 1090d39f7;  */

void FUN_1090d39dc(long param_1)

{
  FUN_1090d39f8();
  *(undefined4 *)(param_1 + 200) = 1;
  return;
}



/* Entry: 1090d39f8; end: 1090d3a2b;  */

undefined8 * FUN_1090d39f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  FUN_1090d37ac(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1090d3a2c; end: 1090d3a7f;  */

void FUN_1090d3a2c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 200) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ad97b8)[*(uint *)(param_1 + 200)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  return;
}



/* Entry: 1090d3a80; end: 1090d3a93;  */

long FUN_1090d3a80(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2 + 8;
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN_1090d3790(lVar1,lVar1);
  }
  return lVar1;
}



/* Entry: 1090d3a94; end: 1090d3ab7;  */

undefined8 FUN_1090d3a94(undefined8 param_1)

{
  FUN_1090d3ab8();
  return param_1;
}



/* Entry: 1090d3ab8; end: 1090d3af7;  */

void FUN_1090d3ab8(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    __ZdlPv(*param_1);
    param_1[5] = 0;
    *param_1 = &UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 1090d3af8; end: 1090d3b3b;  */

long * FUN_1090d3af8(long *param_1)

{
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 0x80;
  param_1[1] = 0;
  FUN_1090d3b3c();
  return param_1;
}



/* Entry: 1090d3b3c; end: 1090d3c3b;  */

void FUN_1090d3b3c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar4 = param_3 - param_2;
  if ((ulong)param_1[2] < uVar4) {
    plVar1 = param_1;
    func_0x0001090d43a4();
    if (((long *)*param_1 != (long *)0x0) && (param_1[1] = 0, param_1 + 3 != (long *)*param_1)) {
      __ZdlPv();
    }
    lVar2 = 0;
    param_1[1] = 0;
    param_1[2] = uVar4;
    *param_1 = (long)plVar1;
    plVar3 = plVar1;
    if (((param_2 != 0) && (param_2 != param_3)) && (plVar1 != (long *)0x0)) {
      func_0x0001090d4384();
      _memmove();
      lVar2 = param_1[1];
      plVar3 = (long *)((long)plVar1 + uVar4);
    }
    param_1[1] = (lVar2 - (long)plVar1) + (long)plVar3;
    return;
  }
  if ((ulong)param_1[1] < uVar4) {
    if (param_1[1] != 0) {
      func_0x0001090d4384();
      _memmove();
    }
    func_0x0001090d4384();
  }
  else {
    if (param_3 == param_2) goto LAB_1090d3c18;
    func_0x0001090d4384();
  }
  _memmove();
LAB_1090d3c18:
  param_1[1] = uVar4;
  return;
}



/* Entry: 1090d3c3c; end: 1090d3c8f;  */

void FUN_1090d3c3c(long *param_1,ulong param_2)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  long **pplVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plStack_58;
  
  if (param_2 == 0) {
    if (param_1[3] == 0) {
      return;
    }
    uVar7 = param_1[2];
    if (uVar7 == 0) {
      if (param_1[3] != 0) {
        __ZdlPv(*param_1);
        param_1[5] = 0;
        *param_1 = (long)&UNK_10dd5b8b0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      return;
    }
  }
  else {
    uVar7 = param_1[2];
  }
  uVar2 = param_2;
  if (param_2 <= uVar7) {
    uVar2 = uVar7;
  }
  uVar7 = 0xffffffffffffffff >> (LZCOUNT(uVar2) & 0x3fU);
  if (uVar2 == 0) {
    uVar7 = 1;
  }
  if ((param_2 != 0) && (uVar7 <= (ulong)param_1[3])) {
    return;
  }
  pcVar3 = (char *)*param_1;
  puVar4 = (undefined4 *)param_1[1];
  lVar8 = param_1[3];
  FUN_1090d3d5c();
  param_1[3] = uVar7;
  pcVar1 = pcVar3;
  for (lVar9 = lVar8; lVar9 != 0; lVar9 = lVar9 + -1) {
    if (-1 < *pcVar1) {
      pplVar5 = &plStack_58;
      plStack_58 = param_1 + 5;
      FUN_1090d3e58(pplVar5,puVar4);
      plVar6 = param_1;
      FUN_1090d3dcc(param_1,pplVar5);
      *(byte *)(*param_1 + (long)plVar6) = (byte)pplVar5 & 0x7f;
      func_0x0001090d434c();
      *(undefined4 *)(param_1[1] + (long)plVar6 * 4) = *puVar4;
    }
    pcVar1 = pcVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  if (lVar8 != 0) {
    __ZdlPv(pcVar3);
  }
  return;
}



/* Entry: 1090d3c90; end: 1090d3d5b;  */

void FUN_1090d3c90(long *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 *puVar3;
  long **pplVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_58;
  
  pcVar2 = (char *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  lVar6 = param_1[3];
  FUN_1090d3d5c();
  param_1[3] = param_2;
  pcVar1 = pcVar2;
  for (lVar7 = lVar6; lVar7 != 0; lVar7 = lVar7 + -1) {
    if (-1 < *pcVar1) {
      pplVar4 = &plStack_58;
      plStack_58 = param_1 + 5;
      FUN_1090d3e58(pplVar4,puVar3);
      plVar5 = param_1;
      FUN_1090d3dcc(param_1,pplVar4);
      *(byte *)(*param_1 + (long)plVar5) = (byte)pplVar4 & 0x7f;
      func_0x0001090d434c();
      *(undefined4 *)(param_1[1] + (long)plVar5 * 4) = *puVar3;
    }
    pcVar1 = pcVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  if (lVar6 != 0) {
    __ZdlPv(pcVar2);
  }
  return;
}



/* Entry: 1090d3d5c; end: 1090d3dcb;  */

void FUN_1090d3d5c(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = (param_2 & 0xfffffffffffffffc) + 0xc;
  plVar2 = param_1 + 5;
  FUN_1090d3e18(plVar2,lVar1 + param_2 * 4);
  *param_1 = (long)plVar2;
  param_1[1] = (long)plVar2 + lVar1;
  _memset();
  *(undefined1 *)(*param_1 + param_2) = 0xff;
  lVar1 = 6;
  if (param_2 != 7) {
    lVar1 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar1 - param_1[2];
  return;
}



/* Entry: 1090d3dcc; end: 1090d3e17;  */

ulong FUN_1090d3dcc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_2 = param_2 >> 7;
  while( true ) {
    param_2 = param_2 & param_1[3];
    uVar1 = *(ulong *)(*param_1 + param_2) & ~*(ulong *)(*param_1 + param_2) << 7 &
            0x8080808080808080;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_2 = lVar2 + param_2;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_2 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[3];
}



/* Entry: 1090d3e18; end: 1090d3e57;  */

void FUN_1090d3e18(undefined8 param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x0001090d3e3c(&uStack_11,param_2 + 3U >> 2);
  return;
}



/* Entry: 1090d3e58; end: 1090d3e5f;  */

void FUN_1090d3e58(undefined8 param_1,undefined8 param_2)

{
  func_0x0001090d43bc(param_1,param_2,param_2);
  return;
}



/* Entry: 1090d3e60; end: 1090d3e77;  */

void FUN_1090d3e60(void)

{
  func_0x0001090d43bc();
  return;
}



/* Entry: 1090d3e78; end: 1090d3e7f;  */

void FUN_1090d3e78(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_2;
  plVar2 = plVar6;
  FUN_1090d3f34();
  plVar3 = plVar6;
  puVar5 = param_3;
  func_0x0001090d3f58();
  uVar4 = SUB81(puVar5,0);
  if (((ulong)puVar5 & 1) != 0) {
    lVar1 = *plVar6;
    *(undefined4 *)(plVar6[1] + (long)plVar3 * 4) = *param_3;
    *(byte *)(lVar1 + (long)plVar3) = (byte)plVar2 & 0x7f;
    func_0x0001090d434c();
  }
  lVar1 = plVar6[1];
  *param_1 = *plVar6 + (long)plVar3;
  param_1[1] = lVar1 + (long)plVar3 * 4;
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}



/* Entry: 1090d3e80; end: 1090d3f33;  */

void FUN_1090d3e80(long *param_1,undefined8 *param_2,ulong param_3,undefined4 *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_2;
  plVar2 = plVar5;
  FUN_1090d3f34();
  plVar3 = plVar5;
  func_0x0001090d3f58();
  uVar4 = (undefined1)param_3;
  if ((param_3 & 1) != 0) {
    lVar1 = *plVar5;
    *(undefined4 *)(plVar5[1] + (long)plVar3 * 4) = *param_4;
    *(byte *)(lVar1 + (long)plVar3) = (byte)plVar2 & 0x7f;
    func_0x0001090d434c();
  }
  lVar1 = plVar5[1];
  *param_1 = *plVar5 + (long)plVar3;
  param_1[1] = lVar1 + (long)plVar3 * 4;
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}



/* Entry: 1090d3f34; end: 1090d400f;  */

void FUN_1090d3f34(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_1090d4210(&lStack_18);
  return;
}



/* Entry: 1090d4010; end: 1090d4083;  */

void FUN_1090d4010(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = param_1;
  FUN_1090d3dcc();
  lVar3 = param_1[5];
  lVar2 = *param_1;
  if (lVar3 == 0) {
    if (*(char *)(lVar2 + (long)plVar1) == -2) {
      lVar3 = 0;
    }
    else {
      plVar1 = param_1;
      FUN_1090d4084();
      func_0x0001090d43b0();
      lVar2 = *param_1;
      lVar3 = param_1[5];
    }
  }
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar3 - (ulong)(*(char *)(lVar2 + (long)plVar1) == -0x80);
  return;
}



/* Entry: 1090d4084; end: 1090d40b3;  */

void FUN_1090d4084(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  long **pplVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plStack_58;
  
  uVar11 = param_1[3];
  if (uVar11 == 0) {
    uVar11 = 1;
  }
  else {
    if ((ulong)param_1[2] <= uVar11 - (uVar11 >> 3) >> 1) {
      func_0x000104bda340(*param_1,param_1[3]);
      for (uVar11 = 0; uVar11 != param_1[3]; uVar11 = uVar11 + 1) {
        if (*(char *)(*param_1 + uVar11) == -2) {
          puVar9 = &stack0xffffffffffffffb8;
          FUN_1090d3e58(puVar9,param_1[1] + uVar11 * 4);
          puVar10 = puVar9;
          func_0x0001090d43b0();
          uVar12 = param_1[3] & (ulong)puVar9 >> 7;
          if ((((long)puVar10 - uVar12 ^ uVar11 - uVar12) & param_1[3]) < 8) {
            *(byte *)(*param_1 + uVar11) = (byte)puVar9 & 0x7f;
            func_0x0001090d434c();
          }
          else {
            cVar5 = puVar10[*param_1];
            bVar6 = (byte)puVar9 & 0x7f;
            puVar10[*param_1] = bVar6;
            *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)(puVar10 + -8)) + 1) =
                 bVar6;
            lVar14 = param_1[1];
            if (cVar5 == -0x80) {
              *(undefined4 *)(lVar14 + (long)puVar10 * 4) = *(undefined4 *)(lVar14 + uVar11 * 4);
              *(undefined1 *)(*param_1 + uVar11) = 0x80;
              *(undefined1 *)(*param_1 + (param_1[3] & uVar11 - 8) + (param_1[3] & 7U) + 1) = 0x80;
            }
            else {
              uVar4 = *(undefined4 *)(lVar14 + uVar11 * 4);
              *(undefined4 *)(lVar14 + uVar11 * 4) = *(undefined4 *)(lVar14 + (long)puVar10 * 4);
              *(undefined4 *)(lVar14 + (long)puVar10 * 4) = uVar4;
              uVar11 = uVar11 - 1;
            }
          }
        }
      }
      lVar14 = 6;
      if (uVar11 != 7) {
        lVar14 = uVar11 - (uVar11 >> 3);
      }
      param_1[5] = lVar14 - param_1[2];
      return;
    }
    uVar11 = uVar11 << 1 | 1;
  }
  pcVar2 = (char *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  lVar13 = param_1[3];
  FUN_1090d3d5c();
  param_1[3] = uVar11;
  pcVar1 = pcVar2;
  for (lVar14 = lVar13; lVar14 != 0; lVar14 = lVar14 + -1) {
    if (-1 < *pcVar1) {
      pplVar7 = &plStack_58;
      plStack_58 = param_1 + 5;
      FUN_1090d3e58(pplVar7,puVar3);
      plVar8 = param_1;
      FUN_1090d3dcc(param_1,pplVar7);
      *(byte *)(*param_1 + (long)plVar8) = (byte)pplVar7 & 0x7f;
      func_0x0001090d434c();
      *(undefined4 *)(param_1[1] + (long)plVar8 * 4) = *puVar3;
    }
    pcVar1 = pcVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  if (lVar13 != 0) {
    __ZdlPv(pcVar2);
  }
  return;
}



/* Entry: 1090d40b4; end: 1090d420f;  */

void FUN_1090d40b4(long *param_1)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  long **pplVar4;
  long **pplVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plStack_48;
  
  func_0x000104bda340(*param_1,param_1[3]);
  for (uVar8 = 0; uVar8 != param_1[3]; uVar8 = uVar8 + 1) {
    if (*(char *)(*param_1 + uVar8) == -2) {
      pplVar4 = &plStack_48;
      plStack_48 = param_1 + 5;
      FUN_1090d3e58(pplVar4,param_1[1] + uVar8 * 4);
      pplVar5 = pplVar4;
      func_0x0001090d43b0();
      uVar7 = param_1[3] & (ulong)pplVar4 >> 7;
      if ((((long)pplVar5 - uVar7 ^ uVar8 - uVar7) & param_1[3]) < 8) {
        *(byte *)(*param_1 + uVar8) = (byte)pplVar4 & 0x7f;
        func_0x0001090d434c();
      }
      else {
        cVar2 = *(char *)(*param_1 + (long)pplVar5);
        bVar3 = (byte)pplVar4 & 0x7f;
        *(byte *)(*param_1 + (long)pplVar5) = bVar3;
        *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)(pplVar5 + -1)) + 1) = bVar3;
        lVar6 = param_1[1];
        if (cVar2 == -0x80) {
          *(undefined4 *)(lVar6 + (long)pplVar5 * 4) = *(undefined4 *)(lVar6 + uVar8 * 4);
          *(undefined1 *)(*param_1 + uVar8) = 0x80;
          *(undefined1 *)(*param_1 + (param_1[3] & uVar8 - 8) + (param_1[3] & 7U) + 1) = 0x80;
        }
        else {
          uVar1 = *(undefined4 *)(lVar6 + uVar8 * 4);
          *(undefined4 *)(lVar6 + uVar8 * 4) = *(undefined4 *)(lVar6 + (long)pplVar5 * 4);
          *(undefined4 *)(lVar6 + (long)pplVar5 * 4) = uVar1;
          uVar8 = uVar8 - 1;
        }
      }
    }
  }
  lVar6 = 6;
  if (uVar8 != 7) {
    lVar6 = uVar8 - (uVar8 >> 3);
  }
  param_1[5] = lVar6 - param_1[2];
  return;
}



/* Entry: 1090d4210; end: 1090d4227;  */

void FUN_1090d4210(void)

{
  func_0x0001090d43bc();
  return;
}



/* Entry: 1090d4228; end: 1090d42a7;  */

long FUN_1090d4228(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_1090d3f34();
  plVar2 = param_1;
  FUN_1090d42a8(param_1,param_2,plVar1,&lStack_28);
  if ((int)plVar2 == 0) {
    lStack_28 = *param_1 + param_1[3];
  }
  else {
    lStack_28 = *param_1 + lStack_28;
  }
  return lStack_28;
}



/* Entry: 1090d42a8; end: 1090d43c7;  */

bool FUN_1090d42a8(long *param_1,int *param_2,ulong param_3,ulong *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar2 = 0;
  uVar5 = param_3 >> 7;
  uVar3 = param_1[3];
  lVar4 = *param_1;
  while( true ) {
    uVar5 = uVar5 & uVar3;
    uVar7 = *(ulong *)(lVar4 + uVar5);
    uVar6 = uVar7 ^ (param_3 & 0x7f) * 0x101010101010101;
    iVar1 = *param_2;
    for (uVar6 = uVar6 + 0xfefefefefefefeff & (uVar6 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar8 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar5 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar3;
      *param_4 = uVar8;
      if (*(int *)(param_1[1] + uVar8 * 4) == iVar1) goto LAB_1090d4338;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar5 = lVar2 + uVar5;
  }
LAB_1090d4338:
  return uVar6 != 0;
}



/* Entry: 1090d43c8; end: 1090d45cb;  */

/* WARNING: Possible PIC construction at 0x0001090d45a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001090d45a8) */

undefined8 * FUN_1090d43c8(undefined8 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  int extraout_w11;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined1 *puVar5;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar5 = &stack0xfffffffffffffff0;
  puVar3 = &DAT_10f54d570;
  switch(param_2) {
  case 0:
    break;
  case 1:
    puVar3 = &DAT_10f54d579;
    break;
  case 2:
    puVar2 = param_1;
    if ((bRam0000000113730a38 & 1) != 0) {
code_r0x0001090d4484:
      uVar4 = 0;
      if (lRam0000000113730a30 != 0) {
        do {
          func_0x0001090d59e8();
          uVar4 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      *param_1 = uVar4;
      return puVar2;
    }
    puVar2 = (undefined8 *)0x113730a38;
    ___cxa_guard_acquire();
    if ((int)puVar2 == 0) goto code_r0x0001090d4484;
    puVar2 = (undefined8 *)0x113730a30;
    puVar3 = &DAT_10f54d588;
    unaff_x30 = 0x1090d45a8;
    goto code_r0x00010b99f5f8;
  case 3:
    puVar3 = &DAT_10f54d599;
    break;
  case 4:
    puVar3 = &DAT_10f54d5a6;
    break;
  case 5:
    puVar3 = &DAT_10f54d5b7;
    break;
  case 6:
    puVar3 = &DAT_10f54d5cb;
    break;
  case 7:
    puVar3 = &DAT_10f54d5dd;
    break;
  case 8:
    puVar3 = &DAT_10f54d5ea;
    break;
  case 9:
    puVar3 = &DAT_10f54d602;
    break;
  case 10:
    puVar3 = &DAT_10f54d614;
    break;
  case 0xb:
    puVar3 = &DAT_10f54d62c;
    break;
  case 0xc:
    puVar3 = &DAT_10f54d63e;
    break;
  case 0xd:
    puVar3 = &DAT_10f54d657;
    break;
  case 0xe:
    puVar3 = &DAT_10f54d66b;
    break;
  case 0xf:
    puVar3 = &DAT_10f54d685;
    break;
  case 0x10:
    puVar3 = &DAT_10f54d69d;
    break;
  case 0x11:
    puVar3 = &DAT_10f54d6aa;
    break;
  case 0x12:
    puVar3 = &DAT_10f54d6b7;
    break;
  case 0x13:
    puVar3 = &DAT_10f54d6c4;
    break;
  case 0x14:
    puVar3 = &UNK_10f550253;
    break;
  case 0x15:
    puVar3 = &DAT_10f54d6d7;
    break;
  case 0x16:
    puVar3 = &DAT_10f54d6e7;
    break;
  case 0x17:
    puVar3 = &DAT_10f54d6fa;
    break;
  case 0x18:
    puVar3 = &DAT_10f54d70d;
    break;
  case 0x19:
    puVar3 = &UNK_10f550262;
    break;
  case 0x1a:
    puVar3 = &DAT_10f54d733;
    break;
  default:
    puVar3 = &UNK_10f54d74b;
  }
  puVar1 = (undefined1 *)register0x00000008;
  puVar2 = param_1;
  param_1 = unaff_x19;
  puVar5 = unaff_x29;
code_r0x00010b99f5f8:
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = puVar5;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  func_0x000107c31088(puVar1 + -0x28,puVar3);
  *(undefined8 *)(puVar1 + -0x30) = 0;
  func_0x00010b99feb0();
  func_0x00010b99fe90(puVar2);
  func_0x00010b99fe20();
  func_0x00010b99fdf8();
  return puVar2;
}



/* Entry: 1090d45cc; end: 1090d460b;  */

undefined8 * FUN_1090d45cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad97e0;
  func_0x00010910a50c(param_1[3]);
  func_0x00010724e5b8(param_1 + 5);
  func_0x00010724e5b8(param_1 + 4);
  return param_1;
}



/* Entry: 1090d460c; end: 1090d460f;  */

undefined8 * FUN_1090d460c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad97e0;
  func_0x00010910a50c(param_1[3]);
  func_0x00010724e5b8(param_1 + 5);
  func_0x00010724e5b8(param_1 + 4);
  return param_1;
}



/* Entry: 1090d4610; end: 1090d4623;  */

void FUN_1090d4610(void)

{
  FUN_1090d45cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090d4624; end: 1090d4683;  */

void FUN_1090d4624(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010910a448(uVar2,*(undefined8 *)(param_2 + 0x10),param_3,param_4,param_5,0);
  bVar1 = (int)uVar2 == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    func_0x0001090d5974();
    *param_1 = uStack_28;
    func_0x0001090d58e0();
  }
  *(bool *)(param_1 + 1) = !bVar1;
  return;
}



/* Entry: 1090d4684; end: 1090d4783;  */

void FUN_1090d4684(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  undefined2 extraout_w12;
  ulong uVar6;
  long lVar7;
  long lStack_1d8;
  undefined1 auStack_1d0 [216];
  undefined8 uStack_f8;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [72];
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001090d5910();
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x1a0);
  if (lVar7 == 0) {
    auStack_88[0] = 0;
    uStack_40 = 0;
    func_0x0001090d59c8();
    plVar2 = (long *)auStack_88;
    FUN_1090d3054();
  }
  else {
    uVar6 = (ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0x19c);
    lStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    func_0x0001074287b0(&lStack_b8,uVar6);
    for (lVar5 = 0; in_ZR = uVar6 * 4 - lVar5 == 0, !(bool)in_ZR; lVar5 = lVar5 + 4) {
      uVar1 = *(uint *)(lVar7 + lVar5);
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      *(uint *)(lStack_b8 + lVar5) = uVar1 >> 0x10 | uVar1 << 0x10;
    }
    uStack_90 = uStack_a8;
    uStack_98 = uStack_b0;
    uStack_a8 = 0;
    lStack_a0 = lStack_b8;
    lStack_b8 = 0;
    uStack_b0 = 0;
    FUN_1090d35cc(auStack_88,&lStack_a0);
    func_0x00010731e26c(&lStack_a0);
    uStack_40 = 1;
    func_0x0001090d59c8();
    FUN_1090d3054(auStack_88);
    plVar2 = &lStack_b8;
    func_0x00010731e26c();
  }
  func_0x0001090d58fc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010731e26c(&lStack_a0);
  plVar3 = &lStack_b8;
  func_0x00010731e26c();
  func_0x0001090d59f8();
  func_0x0001090d5910();
  _bzero(auStack_1d0,0xd0);
  lVar7 = plVar3[3];
  FUN_109109b9c(lVar7,auStack_1d0);
  iVar4 = (int)lVar7;
  if (iVar4 == 0) {
    func_0x0001090d5928();
    *(undefined2 *)(plVar2 + 8) = 0;
  }
  else {
    in_ZR = iVar4 == 0x14;
    if ((bool)in_ZR) {
      func_0x0001090d5928();
      *(undefined2 *)(plVar2 + 8) = extraout_w12;
    }
    else {
      in_ZR = iVar4 == 0x11;
      if ((bool)in_ZR) {
        *plVar2 = 1;
        plVar2[2] = 0;
        plVar2[1] = 0;
        plVar2[4] = 0;
        plVar2[3] = 0;
        plVar2[6] = 0;
        plVar2[5] = 0;
        *(undefined4 *)(plVar2 + 7) = 0;
        *(undefined2 *)(plVar2 + 8) = 0x100;
      }
      else {
        FUN_1090d43c8(&lStack_1d8);
        *plVar2 = 2;
        plVar2[1] = lStack_1d8;
        func_0x0001090d58e0();
      }
    }
  }
  func_0x0001090d58fc(uStack_f8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  return;
}



/* Entry: 1090d4784; end: 1090d484f;  */

void FUN_1090d4784(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  int iVar2;
  undefined2 extraout_w12;
  undefined8 *unaff_x19;
  undefined8 uStack_118;
  undefined1 auStack_110 [216];
  undefined8 uStack_38;
  
  func_0x0001090d5910();
  _bzero(auStack_110,0xd0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_109109b9c(uVar1,auStack_110);
  iVar2 = (int)uVar1;
  if (iVar2 == 0) {
    func_0x0001090d5928();
    *(undefined2 *)(unaff_x19 + 8) = 0;
  }
  else {
    in_ZR = iVar2 == 0x14;
    if ((bool)in_ZR) {
      func_0x0001090d5928();
      *(undefined2 *)(unaff_x19 + 8) = extraout_w12;
    }
    else {
      in_ZR = iVar2 == 0x11;
      if ((bool)in_ZR) {
        *unaff_x19 = 1;
        unaff_x19[2] = 0;
        unaff_x19[1] = 0;
        unaff_x19[4] = 0;
        unaff_x19[3] = 0;
        unaff_x19[6] = 0;
        unaff_x19[5] = 0;
        *(undefined4 *)(unaff_x19 + 7) = 0;
        *(undefined2 *)(unaff_x19 + 8) = 0x100;
      }
      else {
        FUN_1090d43c8(&uStack_118);
        *unaff_x19 = 2;
        unaff_x19[1] = uStack_118;
        func_0x0001090d58e0();
      }
    }
  }
  func_0x0001090d58fc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  return;
}



/* Entry: 1090d4850; end: 1090d4857;  */

void FUN_1090d4850(void)

{
  return;
}



/* Entry: 1090d4858; end: 1090d4937;  */

void FUN_1090d4858(undefined8 *param_1,long param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_48;
  
  lVar8 = *(long *)(param_2 + 0x18);
  uVar2 = (int)param_2 + 0x10;
  func_0x00010910675c();
  if (uVar2 < 2) {
    iVar3 = (int)param_2 + 0x10;
    func_0x0001091067dc();
    func_0x0001090d59b0();
    iVar4 = iVar3;
    func_0x0001090d59b0();
    *(int *)(param_2 + 0x38) = iVar4;
    uVar5 = param_2 + 0x10;
    if (uVar2 == 0) {
      func_0x000109106814();
      uVar7 = uVar5 & 0xffffffff;
      func_0x0001090d59b0();
      uVar6 = uVar5 & 0xffffffff;
    }
    else {
      func_0x00010910685c();
      uVar6 = param_2 + 0x10;
      func_0x00010910685c();
      uVar7 = uVar5;
    }
    *(ulong *)(param_2 + 0x30) = uVar6 + lVar8 + *(long *)(param_2 + 0x28);
    func_0x000109106790(param_2 + 0x10);
    sVar1 = (short)param_2 + 0x10;
    func_0x000109106790();
    *(ulong *)(param_2 + 0x40) = uVar7;
    *(short *)(param_2 + 0x3c) = sVar1;
    *(undefined2 *)(param_2 + 0x48) = 0;
    *param_1 = 1;
    *(int *)(param_1 + 1) = iVar3;
  }
  else {
    func_0x00010b99f5f8(&uStack_48,&DAT_10f54d774);
    *param_1 = 2;
    param_1[1] = uStack_48;
    FUN_1090d58e0();
  }
  return;
}



/* Entry: 1090d4938; end: 1090d4a13;  */

void FUN_1090d4938(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_38;
  
  if (*(ushort *)(param_2 + 0x48) < *(ushort *)(param_2 + 0x3c)) {
    *(ushort *)(param_2 + 0x48) = *(ushort *)(param_2 + 0x48) + 1;
    uVar5 = param_2 + 0x10;
    func_0x000109106814();
    uVar2 = uVar5;
    func_0x0001090d59b0();
    uVar3 = uVar2;
    func_0x0001090d59b0();
    if ((int)uVar5 < 0) {
      func_0x00010b99f5f8(&uStack_38,&DAT_10f54d791);
      *param_1 = 2;
      param_1[1] = uStack_38;
      func_0x0001090d58e0();
    }
    else {
      lVar4 = *(long *)(param_2 + 0x40);
      lVar6 = *(long *)(param_2 + 0x30);
      *(ulong *)(param_2 + 0x40) = lVar4 + (uVar2 & 0xffffffff);
      lVar1 = lVar6 + (uVar5 & 0xffffffff);
      *(long *)(param_2 + 0x30) = lVar1;
      uVar5 = (ulong)*(uint *)(param_2 + 0x38) | 0x100000000;
      *param_1 = 1;
      param_1[1] = lVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar2 & 0xffffffff;
      param_1[4] = uVar5;
      param_1[5] = lVar6;
      param_1[6] = lVar1;
      *(bool *)(param_1 + 7) = ((uint)(uVar3 >> 0x1c) & 0xf) == 9;
      *(undefined1 *)(param_1 + 8) = 1;
    }
  }
  else {
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 1090d4a14; end: 1090d4b13;  */

void FUN_1090d4a14(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x0001090d5a38();
  *param_1 = &PTR_FUN_110ad9868;
  param_1[1] = extraout_x8;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar2 = 0x198;
  __Znam(0x198);
  _bzero();
  func_0x0001073c8290(param_1 + 4,uVar2);
  func_0x0001090d5a0c();
  uVar2 = 0x140;
  __Znam(0x140);
  _bzero();
  func_0x0001073c8290(unaff_x19 + 0x18,uVar2);
  func_0x0001090d5a0c();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  _bzero(lVar1,0x198);
  *(undefined ***)(lVar1 + 0x168) = &PTR_DAT_110adc8c0;
  *(undefined8 *)(lVar1 + 0x170) = uVar2;
  *(undefined ***)(lVar1 + 0x178) = &PTR_DAT_110adc960;
  *(undefined ***)(lVar1 + 0x180) = &PTR_DAT_110adc8a0;
  *(long *)(lVar1 + 0x188) = lVar1;
  *(undefined8 *)(lVar1 + 400) = 0x8000000000;
  *(long *)(unaff_x19 + 0x10) = lVar1;
  return;
}



/* Entry: 1090d4b14; end: 1090d4b4f;  */

undefined8 * FUN_1090d4b14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9868;
  func_0x00010724e5b8(param_1 + 4);
  func_0x00010724e5b8(param_1 + 3);
  return param_1;
}



/* Entry: 1090d4b50; end: 1090d4b53;  */

undefined8 * FUN_1090d4b50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9868;
  func_0x00010724e5b8(param_1 + 4);
  func_0x00010724e5b8(param_1 + 3);
  return param_1;
}



/* Entry: 1090d4b54; end: 1090d4b67;  */

void FUN_1090d4b54(void)

{
  FUN_1090d4b14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090d4b68; end: 1090d4bf7;  */

void FUN_1090d4b68(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 auStack_40 [2];
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  FUN_109106c0c();
  if ((int)uVar1 == 0) {
    *(undefined8 *)(param_2 + 0x28) = param_5;
    lVar2 = *(long *)(param_2 + 0x10);
    func_0x0001090fd5f8(param_1 + 1,lVar2);
    uVar1 = *(undefined8 *)(lVar2 + 8);
    param_1[2] = (ulong)*(uint *)(lVar2 + 4);
    param_1[3] = uVar1;
    uVar1 = 1;
  }
  else {
    FUN_1090d43c8(auStack_40,uVar1);
    param_1[1] = auStack_40[0];
    auStack_40[0] = 0;
    func_0x000104bda93c(auStack_40);
    uVar1 = 2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1090d4bf8; end: 1090d4d67;  */

long * FUN_1090d4bf8(long param_1,uint *param_2)

{
  ulong uVar1;
  ushort uVar2;
  uint6 uVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar13;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *unaff_x19;
  ulong uVar14;
  ushort uVar15;
  undefined1 uVar16;
  ushort uVar17;
  undefined4 uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [14];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_568 [152];
  undefined1 auStack_4d0 [152];
  uint uStack_438;
  undefined2 uStack_434;
  undefined2 uStack_432;
  undefined4 auStack_430 [2];
  undefined1 auStack_428 [144];
  undefined4 uStack_398;
  undefined8 uStack_394;
  undefined8 uStack_38c;
  undefined4 uStack_384;
  undefined4 uStack_380;
  ushort uStack_37c;
  ushort uStack_37a;
  ushort uStack_378;
  undefined1 uStack_376;
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
  undefined4 uStack_2a8;
  long lStack_2a0;
  long alStack_298 [3];
  uint uStack_27e;
  byte bStack_27a;
  byte bStack_279;
  byte bStack_278;
  byte bStack_277;
  long lStack_240;
  long lStack_238;
  ulong uStack_230;
  long lStack_228;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined2 uStack_1f0;
  undefined2 uStack_1ee;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined8 uStack_1e4;
  undefined8 uStack_1bc;
  undefined4 uStack_1a8;
  undefined8 uStack_178;
  long lStack_f8;
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
  long lStack_98;
  undefined4 auStack_90 [2];
  undefined4 uStack_88;
  undefined8 uStack_80;
  uint uStack_76;
  undefined4 uStack_6c;
  undefined1 auStack_60 [16];
  int iStack_50;
  ulong uStack_48;
  undefined8 uStack_38;
  
  func_0x0001090d5910();
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  iVar5 = (int)*(undefined8 *)(param_1 + 0x10);
  puVar12 = &uStack_f0;
  FUN_109106d40();
  if (iVar5 == 0) {
    lStack_98 = 1;
    param_2 = (uint *)&uStack_f0;
    puVar12 = (undefined8 *)0x58;
    _memcpy(auStack_90,param_2,0x58);
    uVar6 = (uStack_76 & 0xff00ff00) >> 8 | (uStack_76 & 0xff00ff) << 8;
    *unaff_x19 = 1;
    *(undefined4 *)(unaff_x19 + 1) = auStack_90[0];
    *(undefined4 *)((long)unaff_x19 + 0xc) = uStack_88;
    unaff_x19[2] = uStack_80;
    *(uint *)(unaff_x19 + 3) = uVar6 >> 0x10 | uVar6 << 0x10;
    *(undefined4 *)((long)unaff_x19 + 0x1c) = uStack_6c;
    uVar3 = CONCAT15(auStack_60[5],CONCAT14(auStack_60[4],(uint)auStack_60._0_2_));
    auVar21._0_8_ = CONCAT26(0,uVar3);
    auVar21[8] = auStack_60[0xc];
    auVar21[9] = auStack_60[0xd];
    auVar21._10_2_ = 0;
    auVar21[0xc] = (char)iStack_50;
    auVar21[0xd] = (char)((uint)iStack_50 >> 8);
    auVar23._0_8_ = (ulong)auVar21._8_6_ & 0xffffffff;
    auVar23._8_2_ = auVar21._12_2_;
    auVar23._10_6_ = 0;
    auVar24 = NEON_ucvtf(auVar23,8);
    auVar26._0_8_ = auVar21._0_8_ & 0xffffffff;
    auVar26._8_2_ = (short)(uVar3 >> 0x20);
    auVar26._10_6_ = 0;
    auVar22 = NEON_ucvtf(auVar26,8);
    auVar25._0_8_ = (long)(auStack_60._0_4_ >> 0x10);
    auVar25._8_8_ = (long)(auStack_60._4_4_ >> 0x10);
    auVar26 = NEON_scvtf(auVar25,8);
    auVar20._0_8_ = (long)(auStack_60._12_4_ >> 0x10);
    auVar20._8_8_ = (long)(iStack_50 >> 0x10);
    auVar20 = NEON_scvtf(auVar20,8);
    unaff_x19[5] = CONCAT44((float)(auVar24._8_8_ * 1.52587890625e-05 + auVar20._8_8_),
                            (float)(auVar24._0_8_ * 1.52587890625e-05 + auVar20._0_8_));
    unaff_x19[4] = CONCAT44((float)(auVar22._8_8_ * 1.52587890625e-05 + auVar26._8_8_),
                            (float)(auVar22._0_8_ * 1.52587890625e-05 + auVar26._0_8_));
    uVar6 = (uint)(uStack_48 >> 0x20);
    auVar24._0_8_ = uStack_48 & 0xffff;
    auVar24._8_4_ = uVar6 & 0xffff;
    auVar24._12_4_ = 0;
    auVar26 = NEON_ucvtf(auVar24,8);
    auVar22._0_8_ = (long)((int)uStack_48 >> 0x10);
    auVar22._8_8_ = (long)((int)uVar6 >> 0x10);
    auVar20 = NEON_scvtf(auVar22,8);
    unaff_x19[6] = CONCAT44((float)(auVar26._8_8_ * 1.52587890625e-05 + auVar20._8_8_),
                            (float)(auVar26._0_8_ * 1.52587890625e-05 + auVar20._0_8_));
  }
  else {
    func_0x0001090d5974();
    lStack_98 = 2;
    func_0x0001090d58e0();
    *unaff_x19 = 2;
    if (lStack_f8 != 0) {
      do {
        func_0x0001090d59b8();
      } while (extraout_w10 != 0);
    }
    unaff_x19[1] = lStack_f8;
  }
  plVar7 = &lStack_98;
  FUN_1090d5760();
  func_0x0001090d58fc(uStack_38);
  if ((bool)in_ZR) {
    return plVar7;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  uStack_178 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _bzero(&uStack_370,0xc0);
  lVar8 = plVar7[2];
  FUN_109106e38(lVar8,param_2,puVar12,&uStack_370);
  if ((int)lVar8 == 0) {
    lStack_240 = 1;
    _memcpy(&lStack_238,&uStack_370,0xc0);
  }
  else {
    func_0x0001090d5a14();
    lStack_238 = CONCAT26(uStack_432,CONCAT24(uStack_434,uStack_438));
    lStack_240 = 2;
    func_0x0001090d5a20();
    uVar4 = lStack_240 == 1;
    if (!(bool)uVar4) {
      *extraout_x8 = 2;
      uVar13 = 0;
      if (lStack_238 != 0) {
        do {
          func_0x0001090d59e8();
          uVar13 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      extraout_x8[1] = uVar13;
      goto LAB_1090d5104;
    }
  }
  uStack_320 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  lVar8 = plVar7[2];
  FUN_109106d40(lVar8,param_2,&uStack_370);
  if ((int)lVar8 == 0) {
    lStack_2a0 = 1;
    _memcpy(alStack_298,&uStack_370,0x58);
LAB_1090d4ec0:
    uVar6 = (uStack_27e & 0xff00ff00) >> 8 | (uStack_27e & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if (uVar6 == 0x736f756e) {
      uVar4 = uStack_230 - 4 == 0;
      uVar1 = uStack_230 - 4;
      if (uStack_230 < 4 || (bool)uVar4) {
        uVar1 = uStack_230;
      }
      lVar8 = 4;
      if (uStack_230 < 4 || (bool)uVar4) {
        lVar8 = 0;
      }
      FUN_1090d35c0(auStack_568,lStack_228 + lVar8,uVar1);
      uStack_438 = (uint)bStack_27a << 0x18 | (uint)bStack_279 << 0x10 | (uint)bStack_278 << 8 |
                   (uint)bStack_277;
      uStack_434 = uStack_1f0;
      auStack_430[0] = uStack_1ec;
      FUN_1090d37ac(auStack_428,auStack_568);
      FUN_1090d39dc(&uStack_370,&uStack_438);
      func_0x0001090d5988();
      func_0x0001090d59e0();
      FUN_1090d375c(auStack_428);
      puVar10 = auStack_568;
    }
    else {
      uVar4 = uVar6 == 0x76696465;
      if (!(bool)uVar4) {
        uStack_2a8 = 2;
        func_0x0001090d5988();
        func_0x0001090d59e0();
        goto LAB_1090d50fc;
      }
      uVar16 = 0;
      uVar17 = 0;
      uVar2 = 0;
      uVar15 = 0;
      uVar18 = 0;
      uVar1 = uStack_1f8;
      for (uVar19 = uStack_200; (uVar1 != 0 && (uVar4 = uVar19 == 8, 7 < uVar19));
          uVar19 = uVar19 - uVar14) {
        uVar9 = uVar1;
        FUN_1090d51a4();
        uVar14 = uVar9 & 0xffffffff;
        uVar6 = (uint)uVar9;
        uVar4 = uVar6 >= 2 && uVar19 == uVar14;
        if (uVar6 < 2 || uVar19 < uVar14) break;
        iVar5 = (int)uVar1 + 4;
        FUN_1090d51a4();
        uVar4 = 0xb < uVar6 && iVar5 == 0x636f6c72;
        if (0xb < uVar6 && iVar5 == 0x636f6c72) {
          iVar5 = (int)uVar1 + 8;
          FUN_1090d51a4();
          uVar4 = iVar5 == 0x6e636c78 && uVar14 - 0x13 == 0xfffffffffffffff4;
          if (iVar5 == 0x6e636c78 && uVar14 - 0x13 < 0xfffffffffffffff5) {
            uVar15 = *(ushort *)(uVar1 + 0xc) >> 8 | *(ushort *)(uVar1 + 0xc) << 8;
            uVar2 = *(ushort *)(uVar1 + 0xe) >> 8 | *(ushort *)(uVar1 + 0xe) << 8;
            uVar17 = *(ushort *)(uVar1 + 0x10) >> 8 | *(ushort *)(uVar1 + 0x10) << 8;
            uVar16 = *(undefined1 *)(uVar1 + 0x12);
            uVar18 = 1;
          }
        }
        uVar1 = uVar1 + uVar14;
      }
      FUN_1090d35c0(auStack_4d0,lStack_228,uStack_230);
      uStack_438 = (uint)bStack_27a << 0x18 | (uint)bStack_279 << 0x10 | (uint)bStack_278 << 8 |
                   (uint)bStack_277;
      uStack_434 = uStack_1f0;
      uStack_432 = uStack_1ee;
      FUN_1090d37ac(auStack_430,auStack_4d0);
      uStack_398 = uStack_1e8;
      uStack_38c = uStack_1bc;
      uStack_394 = uStack_1e4;
      uStack_384 = uStack_1a8;
      uStack_380 = uVar18;
      uStack_37c = uVar15;
      uStack_37a = uVar2;
      uStack_378 = uVar17;
      uStack_376 = uVar16;
      func_0x0001090d3988(&uStack_370,&uStack_438);
      func_0x0001090d5988();
      func_0x0001090d59e0();
      FUN_1090d375c(auStack_430);
      puVar10 = auStack_4d0;
    }
    param_2 = &uStack_438;
    FUN_1090d375c(puVar10);
  }
  else {
    func_0x0001090d5a14();
    alStack_298[0] = CONCAT26(uStack_432,CONCAT24(uStack_434,uStack_438));
    lStack_2a0 = 2;
    func_0x0001090d5a20();
    if (lStack_2a0 == 1) goto LAB_1090d4ec0;
    *extraout_x8 = 2;
    uVar4 = 0;
    uVar13 = 0;
    if (alStack_298[0] != 0) {
      do {
        func_0x0001090d59e8();
        uVar13 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    extraout_x8[1] = uVar13;
  }
LAB_1090d50fc:
  FUN_1090d5760(&lStack_2a0);
LAB_1090d5104:
  plVar7 = &lStack_240;
  func_0x0001090d5778(plVar7);
  func_0x0001090d58fc(uStack_178);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    FUN_1090d375c(param_2 + 4);
    FUN_1090d375c(auStack_568);
    FUN_1090d5760(&lStack_2a0);
    puVar11 = (uint *)&lStack_240;
    func_0x0001090d5778();
    func_0x0001090d59f8();
    uVar6 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
    return (long *)(ulong)(uVar6 >> 0x10 | uVar6 << 0x10);
  }
  return plVar7;
}



/* Entry: 1090d4d68; end: 1090d51a3;  */

long * FUN_1090d4d68(undefined8 *param_1,long param_2,uint *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long *plVar10;
  uint *puVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar12;
  ushort uVar13;
  undefined1 uVar14;
  ushort uVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined1 auStack_468 [152];
  undefined1 auStack_3d0 [152];
  uint uStack_338;
  undefined2 uStack_334;
  undefined2 uStack_332;
  undefined4 auStack_330 [2];
  undefined1 auStack_328 [144];
  undefined4 uStack_298;
  undefined8 uStack_294;
  undefined8 uStack_28c;
  undefined4 uStack_284;
  undefined4 uStack_280;
  ushort uStack_27c;
  ushort uStack_27a;
  ushort uStack_278;
  undefined1 uStack_276;
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
  undefined4 uStack_1a8;
  long lStack_1a0;
  long alStack_198 [3];
  uint uStack_17e;
  byte bStack_17a;
  byte bStack_179;
  byte bStack_178;
  byte bStack_177;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_100;
  ulong uStack_f8;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined8 uStack_bc;
  undefined4 uStack_a8;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _bzero(&uStack_270,0xc0);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  FUN_109106e38(uVar7,param_3,param_4,&uStack_270);
  if ((int)uVar7 == 0) {
    lStack_140 = 1;
    _memcpy(&lStack_138,&uStack_270,0xc0);
  }
  else {
    func_0x0001090d5a14();
    lStack_138 = CONCAT26(uStack_332,CONCAT24(uStack_334,uStack_338));
    lStack_140 = 2;
    func_0x0001090d5a20();
    uVar4 = lStack_140 == 1;
    if (!(bool)uVar4) {
      *param_1 = 2;
      uVar7 = 0;
      if (lStack_138 != 0) {
        do {
          func_0x0001090d59e8();
          uVar7 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      param_1[1] = uVar7;
      goto LAB_1090d5104;
    }
  }
  uStack_220 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  FUN_109106d40(uVar7,param_3,&uStack_270);
  if ((int)uVar7 == 0) {
    lStack_1a0 = 1;
    _memcpy(alStack_198,&uStack_270,0x58);
LAB_1090d4ec0:
    uVar5 = (uStack_17e & 0xff00ff00) >> 8 | (uStack_17e & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if (uVar5 == 0x736f756e) {
      uVar4 = uStack_130 - 4 == 0;
      uVar1 = uStack_130 - 4;
      if (uStack_130 < 4 || (bool)uVar4) {
        uVar1 = uStack_130;
      }
      lVar2 = 4;
      if (uStack_130 < 4 || (bool)uVar4) {
        lVar2 = 0;
      }
      FUN_1090d35c0(auStack_468,lStack_128 + lVar2,uVar1);
      uStack_338 = (uint)bStack_17a << 0x18 | (uint)bStack_179 << 0x10 | (uint)bStack_178 << 8 |
                   (uint)bStack_177;
      uStack_334 = uStack_f0;
      auStack_330[0] = uStack_ec;
      FUN_1090d37ac(auStack_328,auStack_468);
      FUN_1090d39dc(&uStack_270,&uStack_338);
      func_0x0001090d5988();
      func_0x0001090d59e0();
      FUN_1090d375c(auStack_328);
      puVar9 = auStack_468;
    }
    else {
      uVar4 = uVar5 == 0x76696465;
      if (!(bool)uVar4) {
        uStack_1a8 = 2;
        func_0x0001090d5988();
        func_0x0001090d59e0();
        goto LAB_1090d50fc;
      }
      uVar14 = 0;
      uVar15 = 0;
      uVar3 = 0;
      uVar13 = 0;
      uVar16 = 0;
      uVar1 = uStack_f8;
      for (uVar17 = uStack_100; (uVar1 != 0 && (uVar4 = uVar17 == 8, 7 < uVar17));
          uVar17 = uVar17 - uVar12) {
        uVar8 = uVar1;
        FUN_1090d51a4();
        uVar12 = uVar8 & 0xffffffff;
        uVar5 = (uint)uVar8;
        uVar4 = uVar5 >= 2 && uVar17 == uVar12;
        if (uVar5 < 2 || uVar17 < uVar12) break;
        iVar6 = (int)uVar1 + 4;
        FUN_1090d51a4();
        uVar4 = 0xb < uVar5 && iVar6 == 0x636f6c72;
        if (0xb < uVar5 && iVar6 == 0x636f6c72) {
          iVar6 = (int)uVar1 + 8;
          FUN_1090d51a4();
          uVar4 = iVar6 == 0x6e636c78 && uVar12 - 0x13 == 0xfffffffffffffff4;
          if (iVar6 == 0x6e636c78 && uVar12 - 0x13 < 0xfffffffffffffff5) {
            uVar13 = *(ushort *)(uVar1 + 0xc) >> 8 | *(ushort *)(uVar1 + 0xc) << 8;
            uVar3 = *(ushort *)(uVar1 + 0xe) >> 8 | *(ushort *)(uVar1 + 0xe) << 8;
            uVar15 = *(ushort *)(uVar1 + 0x10) >> 8 | *(ushort *)(uVar1 + 0x10) << 8;
            uVar14 = *(undefined1 *)(uVar1 + 0x12);
            uVar16 = 1;
          }
        }
        uVar1 = uVar1 + uVar12;
      }
      FUN_1090d35c0(auStack_3d0,lStack_128,uStack_130);
      uStack_338 = (uint)bStack_17a << 0x18 | (uint)bStack_179 << 0x10 | (uint)bStack_178 << 8 |
                   (uint)bStack_177;
      uStack_334 = uStack_f0;
      uStack_332 = uStack_ee;
      FUN_1090d37ac(auStack_330,auStack_3d0);
      uStack_298 = uStack_e8;
      uStack_28c = uStack_bc;
      uStack_294 = uStack_e4;
      uStack_284 = uStack_a8;
      uStack_280 = uVar16;
      uStack_27c = uVar13;
      uStack_27a = uVar3;
      uStack_278 = uVar15;
      uStack_276 = uVar14;
      func_0x0001090d3988(&uStack_270,&uStack_338);
      func_0x0001090d5988();
      func_0x0001090d59e0();
      FUN_1090d375c(auStack_330);
      puVar9 = auStack_3d0;
    }
    param_3 = &uStack_338;
    FUN_1090d375c(puVar9);
  }
  else {
    func_0x0001090d5a14();
    alStack_198[0] = CONCAT26(uStack_332,CONCAT24(uStack_334,uStack_338));
    lStack_1a0 = 2;
    func_0x0001090d5a20();
    if (lStack_1a0 == 1) goto LAB_1090d4ec0;
    *param_1 = 2;
    uVar4 = 0;
    uVar7 = 0;
    if (alStack_198[0] != 0) {
      do {
        func_0x0001090d59e8();
        uVar7 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    param_1[1] = uVar7;
  }
LAB_1090d50fc:
  func_0x0001090d5760(&lStack_1a0);
LAB_1090d5104:
  plVar10 = &lStack_140;
  func_0x0001090d5778(plVar10);
  func_0x0001090d58fc(uStack_78);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    FUN_1090d375c(param_3 + 4);
    FUN_1090d375c(auStack_468);
    func_0x0001090d5760(&lStack_1a0);
    puVar11 = (uint *)&lStack_140;
    func_0x0001090d5778();
    func_0x0001090d59f8();
    uVar5 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
    return (long *)(ulong)(uVar5 >> 0x10 | uVar5 << 0x10);
  }
  return plVar10;
}



/* Entry: 1090d51a4; end: 1090d51af;  */

uint FUN_1090d51a4(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}



/* Entry: 1090d51b0; end: 1090d5267;  */

void FUN_1090d51b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  undefined8 *extraout_x8;
  undefined8 uVar4;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001090d5910();
  lStack_60 = 0;
  uStack_58 = 0;
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
  plVar3 = &lStack_60;
  FUN_109106ce8();
  if (iVar2 == 0) {
    uStack_40 = uStack_58;
    lStack_48 = lStack_60;
    *unaff_x19 = 1;
    unaff_x19[1] = lStack_60;
  }
  else {
    func_0x0001090d5974();
    lStack_50 = 2;
    lStack_48 = lStack_68;
    func_0x0001090d58e0();
    *unaff_x19 = 2;
    if (lStack_68 == 0) {
      unaff_x19[1] = 0;
    }
    else {
      do {
        func_0x0001090d59b8();
      } while (extraout_w10 != 0);
      unaff_x19[1] = lStack_68;
      in_ZR = lStack_50 == 2;
      if (!(bool)in_ZR) goto LAB_1090d5240;
    }
    func_0x000104bda93c(&lStack_48);
  }
LAB_1090d5240:
  func_0x0001090d58fc(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    FUN_1091086fc(plVar3,param_3,0,&uStack_c0);
    if ((int)plVar3 == 0) {
      uVar1 = ((uint)uStack_c0 & 0xff00ff00) >> 8 | ((uint)uStack_c0 & 0xff00ff) << 8;
      *(uint *)(extraout_x8 + 1) = uVar1 >> 0x10 | uVar1 << 0x10;
      extraout_x8[2] = uStack_c0 >> 0x20;
      extraout_x8[3] = uStack_b8;
      uVar4 = 1;
    }
    else {
      func_0x0001090d5974();
      extraout_x8[1] = uStack_c8;
      func_0x0001090d58e0();
      uVar4 = 2;
    }
    *extraout_x8 = uVar4;
    return;
  }
  return;
}



/* Entry: 1090d5268; end: 1090d52e3;  */

void FUN_1090d5268(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_1091086fc(param_3,param_4,0,&uStack_50);
  if ((int)param_3 == 0) {
    uVar1 = ((uint)uStack_50 & 0xff00ff00) >> 8 | ((uint)uStack_50 & 0xff00ff) << 8;
    *(uint *)(param_1 + 1) = uVar1 >> 0x10 | uVar1 << 0x10;
    param_1[2] = uStack_50 >> 0x20;
    param_1[3] = uStack_48;
    uVar2 = 1;
  }
  else {
    func_0x0001090d5974();
    param_1[1] = uStack_58;
    func_0x0001090d58e0();
    uVar2 = 2;
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1090d52e4; end: 1090d53bb;  */

void FUN_1090d52e4(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x19;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  puVar3 = (undefined8 *)0x30;
  __Znwm();
  func_0x0001090d5a38();
  plVar7 = puVar3 + 1;
  *plVar7 = extraout_x8;
  *puVar3 = &PTR_FUN_110ad97e0;
  puVar3[2] = uVar5;
  puVar3[4] = 0;
  plVar6 = puVar3 + 5;
  *plVar6 = 0;
  uVar5 = 0x570;
  __Znam(0x570);
  _bzero();
  func_0x0001073c8290(plVar6,uVar5);
  func_0x0001090d5a0c();
  lVar4 = *plVar6;
  if (lVar4 != 0) {
    *(long *)(unaff_x19 + 0x18) = lVar4;
    _bzero(lVar4,0x570);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *param_1 = unaff_x19;
  FUN_1090d5860(&stack0xffffffffffffffb8);
  return;
}



/* Entry: 1090d53bc; end: 1090d53f7;  */

undefined4 FUN_1090d53bc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  FUN_1091098e4(uVar1,*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0xac),
                *(undefined4 *)(param_2 + 0xb0),&uStack_14);
  if ((int)uVar1 != 0) {
    uStack_14 = 0;
  }
  return uStack_14;
}



/* Entry: 1090d53f8; end: 1090d5483;  */

void FUN_1090d53f8(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puStack_38;
  
  lVar3 = *(long *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 8);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  lVar4 = *(long *)(param_2 + 0x28);
  uVar1 = *(uint *)(lVar3 + 4);
  puVar2 = (undefined8 *)0x50;
  __Znwm();
  puVar2[1] = 1;
  *puVar2 = &PTR_FUN_110ad9828;
  puVar2[5] = lVar4 + (ulong)uVar1;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  *(undefined2 *)((long)puVar2 + 0x3c) = 0;
  puVar2[8] = 0;
  *(undefined2 *)(puVar2 + 9) = 0;
  puVar2[3] = uVar5;
  puVar2[4] = uVar6;
  puVar2[2] = uVar6;
  puStack_38 = puVar2;
  do {
    func_0x0001090d59b8();
  } while (extraout_w10 != 0);
  *param_1 = puVar2;
  func_0x0001090d58a0(&puStack_38);
  return;
}



/* Entry: 1090d5484; end: 1090d54ab;  */

void FUN_1090d5484(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x0001090d5a38();
  *param_1 = extraout_x8;
  FUN_1090d54ac(param_1 + 1);
  return;
}



/* Entry: 1090d54ac; end: 1090d54df;  */

undefined1 * FUN_1090d54ac(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x48] = 0;
  FUN_1090d54e0();
  return param_1;
}



/* Entry: 1090d54e0; end: 1090d54f3;  */

void FUN_1090d54e0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1090d5510();
    *(undefined1 *)(param_1 + 0x48) = 1;
    return;
  }
  return;
}



/* Entry: 1090d54f4; end: 1090d550f;  */

void FUN_1090d54f4(long param_1)

{
  FUN_1090d5510();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 1090d5510; end: 1090d554b;  */

long FUN_1090d5510(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010731e2b0();
  FUN_1090d554c(lVar1 + 0x18,param_2 + 0x18);
  return param_1;
}



/* Entry: 1090d554c; end: 1090d556b;  */

void FUN_1090d554c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1090d556c(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 1090d556c; end: 1090d5683;  */

long * FUN_1090d556c(long *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  long **pplVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long *plStack_58;
  long *plStack_50;
  undefined4 *puStack_48;
  
  param_1[5] = 0;
  *param_1 = (long)&UNK_10dd5b8b0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar4 = (undefined4 *)param_2[3];
  FUN_1090d3c3c();
  plVar2 = param_2;
  FUN_1090d5684();
  lVar5 = *param_2;
  lVar6 = param_2[3];
  plStack_50 = plVar2;
  puStack_48 = puVar4;
  while (puVar4 = puStack_48, plStack_50 != (long *)(lVar5 + lVar6)) {
    pplVar3 = &plStack_58;
    plStack_58 = param_1 + 5;
    FUN_1090d5700(pplVar3,puStack_48);
    plVar2 = param_1;
    FUN_1090d3dcc(param_1,pplVar3);
    bVar1 = (byte)pplVar3 & 0x7f;
    *(byte *)(*param_1 + (long)plVar2) = bVar1;
    *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)(plVar2 + -1)) + 1) = bVar1;
    *(undefined4 *)(param_1[1] + (long)plVar2 * 4) = *puVar4;
    FUN_1090d572c(&plStack_50);
  }
  lVar5 = param_2[2];
  param_1[2] = lVar5;
  param_1[5] = param_1[5] - lVar5;
  return param_1;
}



/* Entry: 1090d5684; end: 1090d56af;  */

undefined1  [16] FUN_1090d5684(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_1090d56b0(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1090d56b0; end: 1090d56ff;  */

void FUN_1090d56b0(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x000107c27e58();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 4;
  }
  return;
}



/* Entry: 1090d5700; end: 1090d5707;  */

void FUN_1090d5700(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_2,param_2);
  return;
}



/* Entry: 1090d5708; end: 1090d572b;  */

void FUN_1090d5708(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_2);
  return;
}



/* Entry: 1090d572c; end: 1090d575f;  */

long * FUN_1090d572c(long *param_1)

{
  param_1[1] = param_1[1] + 4;
  *param_1 = *param_1 + 1;
  FUN_1090d56b0();
  return param_1;
}



/* Entry: 1090d5760; end: 1090d578f;  */

void FUN_1090d5760(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  return;
}



/* Entry: 1090d5790; end: 1090d57b7;  */

void FUN_1090d5790(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x0001090d5a38();
  *param_1 = extraout_x8;
  FUN_1090d57b8(param_1 + 1);
  return;
}



/* Entry: 1090d57b8; end: 1090d57ef;  */

undefined1 * FUN_1090d57b8(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  FUN_1090d57f0();
  return param_1;
}



/* Entry: 1090d57f0; end: 1090d5843;  */

void FUN_1090d57f0(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_1090d3a2c();
  uVar1 = *(uint *)(param_2 + 200);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_FUN_110ad99b8)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 200) = uVar1;
  }
  return;
}



/* Entry: 1090d5844; end: 1090d585f;  */

undefined8 * FUN_1090d5844(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = *param_2;
  FUN_1090d37ac(puVar1 + 1,param_2 + 1);
  uVar3 = param_2[0x15];
  uVar2 = param_2[0x14];
  uVar5 = param_2[0x17];
  uVar4 = param_2[0x16];
  *(undefined4 *)((long)puVar1 + 0xbf) = *(undefined4 *)((long)param_2 + 0xbf);
  puVar1[0x15] = uVar3;
  puVar1[0x14] = uVar2;
  puVar1[0x17] = uVar5;
  puVar1[0x16] = uVar4;
  return puVar1;
}



/* Entry: 1090d5860; end: 1090d58df;  */

long * FUN_1090d5860(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    plVar1 = (long *)(*param_1 + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      func_0x0001090d59d4();
    }
  }
  return param_1;
}



/* Entry: 1090d58e0; end: 1090d5a43;  */

void FUN_1090d58e0(void)

{
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = 0;
  func_0x0001003adc0c(&stack0x00000008);
  func_0x000104bda960();
  return;
}



/* Entry: 1090d5a44; end: 1090d5ab7;  */

undefined8 * FUN_1090d5a44(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110ad99e0;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_1090d8b50(param_1 + 0x12);
  }
  plVar1 = param_1 + 5;
  if (*plVar1 != 0) {
    FUN_1090d86b8(plVar1);
    __ZdlPv(*plVar1);
  }
  plVar1 = param_1 + 2;
  if (*plVar1 != 0) {
    FUN_1090d8684(plVar1);
    __ZdlPv(*plVar1);
  }
  return param_1;
}



/* Entry: 1090d5ab8; end: 1090d5abb;  */

undefined8 * FUN_1090d5ab8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110ad99e0;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_1090d8b50(param_1 + 0x12);
  }
  plVar1 = param_1 + 5;
  if (*plVar1 != 0) {
    FUN_1090d86b8(plVar1);
    __ZdlPv(*plVar1);
  }
  plVar1 = param_1 + 2;
  if (*plVar1 != 0) {
    FUN_1090d8684(plVar1);
    __ZdlPv(*plVar1);
  }
  return param_1;
}



/* Entry: 1090d5abc; end: 1090d5acf;  */

void FUN_1090d5abc(void)

{
  FUN_1090d5a44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090d5ad0; end: 1090d5c13;  */

void FUN_1090d5ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_f8 [104];
  undefined1 auStack_90 [80];
  
  FUN_1090da6d4(auStack_90);
  FUN_1090d5c14(auStack_f8,auStack_90);
  FUN_1090d5ca8(param_1,auStack_f8,param_4);
  func_0x0001090d9f24();
  func_0x0001090da04c();
  func_0x0001090d9dd4(auStack_90);
  return;
}



/* Entry: 1090d5c14; end: 1090d5ca7;  */

void FUN_1090d5c14(void)

{
  undefined8 *unaff_x19;
  undefined1 auStack_d8 [80];
  undefined1 auStack_88 [80];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001090d9dfc();
  FUN_1090d85dc(&uStack_38);
  FUN_1090da87c(auStack_88);
  FUN_1090d88bc(auStack_d8,auStack_88);
  unaff_x19[1] = uStack_30;
  *unaff_x19 = CONCAT44(uStack_34,uStack_38);
  unaff_x19[2] = uStack_28;
  FUN_1090d88bc(unaff_x19 + 3,auStack_d8);
  func_0x0001090da008();
  func_0x0001090d9dd4(auStack_88);
  return;
}



/* Entry: 1090d5ca8; end: 1090d7d13;  */

void FUN_1090d5ca8(long param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint **ppuVar11;
  undefined1 *puVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  long extraout_x8_07;
  undefined8 *extraout_x8_08;
  undefined4 *extraout_x8_09;
  undefined4 *puVar14;
  undefined8 *extraout_x8_10;
  undefined8 *extraout_x8_11;
  undefined8 *puVar15;
  undefined8 *extraout_x8_12;
  long extraout_x8_13;
  undefined8 *extraout_x8_14;
  undefined8 *extraout_x8_15;
  ulong extraout_x8_16;
  ulong extraout_x8_17;
  long extraout_x8_18;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long extraout_x10;
  ulong uVar16;
  long extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long extraout_x12;
  long lVar17;
  ulong uVar18;
  uint *puVar19;
  uint *puVar20;
  int iVar21;
  uint *unaff_x22;
  uint *unaff_x23;
  uint *puVar22;
  uint *puVar23;
  ulong uVar24;
  uint *puVar25;
  undefined4 uVar26;
  uint *puVar27;
  uint *puVar28;
  ulong uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  uint uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  uint uVar39;
  uint5 uVar40;
  long lVar41;
  long lVar42;
  undefined8 uVar43;
  long extraout_var;
  long extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint auStack_ab0 [6];
  uint auStack_a98 [2];
  undefined8 uStack_a90;
  undefined1 auStack_a80 [56];
  undefined8 uStack_a48;
  uint *puStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  uint *puStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  uint uStack_a10;
  undefined4 uStack_a0c;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  uint *puStack_9f8;
  byte bStack_9f0;
  undefined7 uStack_9ef;
  ulong uStack_9e8;
  uint *puStack_9e0;
  uint *puStack_9d8;
  undefined8 uStack_9d0;
  uint *puStack_9c8;
  undefined8 uStack_9c0;
  byte bStack_9b8;
  ulong uStack_9b0;
  uint *puStack_9a8;
  uint *puStack_9a0;
  uint *puStack_998;
  char cStack_990;
  undefined1 auStack_988 [376];
  byte bStack_810;
  char cStack_808;
  uint auStack_800 [2];
  uint *puStack_7f8;
  uint *puStack_7f0;
  uint *puStack_7e8;
  byte bStack_7e0;
  char cStack_7d8;
  uint auStack_7d0 [6];
  undefined1 auStack_7b8 [8];
  undefined8 uStack_7b0;
  uint uStack_768;
  undefined4 uStack_764;
  uint *puStack_760;
  uint *puStack_758;
  uint uStack_750;
  undefined4 uStack_74c;
  uint *puStack_748;
  undefined2 uStack_740;
  undefined6 uStack_73e;
  byte bStack_738;
  ulong uStack_730;
  uint *puStack_728;
  uint *puStack_720;
  uint *puStack_718;
  char cStack_710;
  undefined1 auStack_708 [376];
  byte bStack_590;
  uint auStack_588 [6];
  undefined1 auStack_570 [8];
  long lStack_568;
  long lStack_560;
  undefined8 uStack_520;
  uint *puStack_518;
  uint *puStack_510;
  uint *puStack_508;
  byte bStack_500;
  undefined7 uStack_4ff;
  undefined1 auStack_4f0 [320];
  char cStack_3b0;
  undefined4 auStack_3a0 [8];
  undefined8 uStack_380;
  undefined8 uStack_338;
  uint *puStack_330;
  uint *puStack_328;
  uint *puStack_320;
  uint *puStack_318;
  undefined8 uStack_310;
  uint *puStack_308;
  uint *puStack_300;
  uint *puStack_2f8;
  char cStack_2f0;
  uint auStack_2e8 [2];
  uint *puStack_2e0;
  uint *puStack_2d8;
  uint *puStack_2d0;
  char cStack_2c8;
  ulong uStack_2c0;
  undefined4 uStack_2b8;
  uint *puStack_2b0;
  uint *puStack_2a8;
  long lStack_2a0;
  char cStack_298;
  uint auStack_290 [6];
  uint *puStack_278;
  char cStack_270;
  uint auStack_268 [6];
  uint *puStack_250;
  char cStack_248;
  uint auStack_240 [6];
  uint *puStack_228;
  char cStack_220;
  uint auStack_218 [2];
  uint *puStack_210;
  uint *puStack_208;
  uint *puStack_200;
  char cStack_1f8;
  uint auStack_1f0 [2];
  uint *puStack_1e8;
  uint *puStack_1e0;
  uint *puStack_1d8;
  char cStack_1d0;
  uint auStack_1c8 [6];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [56];
  undefined4 auStack_160 [8];
  undefined1 auStack_140 [40];
  undefined8 uStack_118;
  uint *puStack_110;
  uint *puStack_108;
  uint *puStack_100;
  long lStack_f8;
  long lStack_f0;
  
  uVar34 = *param_2;
  uVar5 = 0x6d6f6f65 < uVar34;
  if (uVar34 == 0x6d6f6f66) {
    *(uint **)(param_1 + 0xb8) = param_3;
    *(undefined1 *)(param_1 + 0xc0) = 1;
    FUN_1090d86b8(param_1 + 0x28);
    while (func_0x0001090d9de4(*(undefined8 *)(param_2 + 8)), (bool)uVar5) {
      FUN_1090d5c14(&uStack_520,extraout_x10_00 + 0x18);
      uVar5 = 0x74726165 < (uint)uStack_520;
      if ((uint)uStack_520 == 0x74726166) {
        bVar2 = false;
        bVar1 = false;
        bVar6 = false;
        uStack_a48 = uStack_a48 & 0xffffffffffffff00;
        puStack_a28 = (uint *)((ulong)puStack_a28 & 0xffffffffffffff00);
        uStack_a20 = (uint *)((ulong)uStack_a20 & 0xffffffffffffff00);
        uStack_a10 = uStack_a10 & 0xffffff00;
        uStack_a08 = uStack_a08 & 0xffffffffffffff00;
        puVar20 = (uint *)CONCAT71(uStack_9ef,bStack_9f0);
        uVar5 = 1;
        while (func_0x0001090d9de4(CONCAT71(uStack_4ff,bStack_500)), (bool)uVar5) {
          puVar23 = &uStack_768;
          FUN_1090d5c14(puVar23,&puStack_508);
          uVar34 = (uint)puVar23;
          iVar21 = (int)unaff_x23;
          if (uStack_768 == 0x74666474) {
            func_0x0001090da010();
            func_0x0001090d9fb8();
            uVar5 = iVar21 != 0;
            if (iVar21 == 1) {
              func_0x0001090da7f8();
            }
            else {
              if (iVar21 != 0) {
                func_0x0001090d9c2c();
                func_0x0001090d9d0c();
                func_0x0001090da020();
LAB_1090d78a4:
                func_0x0001090d9c4c();
                func_0x0001090da030();
                goto LAB_1090d796c;
              }
              func_0x0001090d9d1c();
            }
            if (!bVar6) {
              uStack_a10 = CONCAT31(uStack_a10._1_3_,1);
            }
            bVar6 = true;
          }
          else if (uStack_768 == 0x7472756e) {
            uStack_338 = 0;
            puStack_330 = (uint *)((ulong)puStack_330 & 0xffffffff00000000);
            puStack_320 = (uint *)0x0;
            puStack_328 = (uint *)0x0;
            uStack_310 = (uint *)0x0;
            puStack_318 = (uint *)0x0;
            func_0x0001090da010();
            puVar23 = &uStack_750;
            func_0x0001090da7a8();
            uVar9 = (uint)puVar23;
            uStack_338 = CONCAT44(uStack_338._4_4_,uVar9);
            uVar5 = 1 < uVar34;
            if ((bool)uVar5) {
              func_0x0001090d9c2c();
              func_0x0001090d9d0c();
              func_0x0001090da020();
              func_0x0001090d9c4c();
              func_0x0001090da030();
              goto LAB_1090d796c;
            }
            puVar28 = puVar23;
            func_0x0001090d9d1c();
            iVar10 = (int)puVar28;
            iVar21 = iVar10;
            if (((ulong)puVar23 & 1) != 0) {
              func_0x0001090d9d1c();
              uStack_338 = CONCAT44(iVar21,(undefined4)uStack_338);
            }
            if ((uVar9 >> 2 & 1) != 0) {
              func_0x0001090d9d1c();
              puStack_330 = (uint *)CONCAT44(puStack_330._4_4_,iVar21);
            }
            auVar44._4_4_ = uVar9;
            auVar44._0_4_ = uVar9;
            auVar44._8_4_ = uVar9;
            auVar44._12_4_ = uVar9;
            puVar28 = (uint *)((ulong)puVar28 & 0xffffffff);
            auVar45[8] = 0xf8;
            auVar45._0_8_ = 0xfffffff9fffffffa;
            auVar45[9] = 0xff;
            auVar45[10] = 0xff;
            auVar45[0xb] = 0xff;
            auVar45[0xc] = 0xf7;
            auVar45[0xd] = 0xff;
            auVar45[0xe] = 0xff;
            auVar45[0xf] = 0xff;
            auVar45 = NEON_ushl(auVar44,auVar45,4);
            uVar40 = CONCAT14(auVar45[4],(uint)(auVar45[0] & 4)) & 0x4ffffffff;
            uVar39 = (int)uVar40 + (uint)(byte)(uVar40 >> 0x20) +
                     (uint)(auVar45[8] & 4) + (uint)(auVar45[0xc] & 4);
            puStack_328 = puVar28;
            if (uVar39 == 0) {
              puVar23 = (uint *)0x0;
            }
            else {
              puVar22 = &uStack_750;
              FUN_1090daa0c(puVar22,(long)puVar28 * (ulong)uVar39);
              if (iVar10 == 0) {
                puVar23 = (uint *)0x0;
              }
              else {
                puVar25 = (uint *)((long)puVar28 * 0x18);
                puVar22 = puVar25;
                __Znwm();
                puStack_318 = puVar22 + (long)puVar28 * 6;
                for (puVar27 = (uint *)0x0; uVar5 = puVar27 <= puVar25, puVar23 = puVar22,
                    puStack_320 = puVar22, uStack_310 = puStack_318,
                    (long)puVar25 - (long)puVar27 != 0; puVar27 = puVar27 + 6) {
                  puVar15 = (undefined8 *)((long)puVar22 + (long)puVar27);
                  *puVar15 = 0;
                  puVar15[1] = 0;
                  puVar15[2] = 0;
                }
              }
              puVar27 = puVar23 + 2;
              for (; puVar28 != (uint *)0x0; puVar28 = (uint *)((long)puVar28 + -1)) {
                if ((uVar9 >> 8 & 1) != 0) {
                  func_0x0001090d9d1c();
                  puVar27[-2] = (uint)puVar22;
                }
                if ((uVar9 >> 9 & 1) != 0) {
                  func_0x0001090d9d1c();
                  puVar27[-1] = (uint)puVar22;
                }
                if ((uVar9 >> 10 & 1) != 0) {
                  func_0x0001090d9d1c();
                  *puVar27 = (uint)puVar22;
                }
                if ((uVar9 >> 0xb & 1) != 0) {
                  if (uVar34 == 0) {
                    func_0x0001090d9d1c();
                    uVar29 = (ulong)puVar22 & 0xffffffff;
                  }
                  else {
                    func_0x0001090d9d1c();
                    uVar29 = (ulong)(int)puVar22;
                  }
                  *(ulong *)(puVar27 + 2) = uVar29;
                }
                puVar27 = puVar27 + 6;
              }
            }
            uStack_a00 = puStack_330;
            uStack_a08 = uStack_338;
            puStack_9f8 = puStack_328;
            if ((bVar2) && (puVar20 != (uint *)0x0)) {
              __ZdlPv(puVar20);
            }
            puStack_320 = (uint *)0x0;
            puStack_318 = (uint *)0x0;
            uStack_310 = (uint *)0x0;
            func_0x0001090d8e2c(&puStack_320);
            bVar2 = true;
            puVar20 = puVar23;
          }
          else {
            uVar5 = 0x74666863 < uStack_768;
            if (uStack_768 == 0x74666864) {
              func_0x0001090da010();
              func_0x0001090d9fb8();
              if (iVar21 != 0) {
                func_0x0001090d9c2c();
                func_0x0001090d9d0c();
                func_0x0001090da020();
                goto LAB_1090d78a4;
              }
              puVar28 = puVar23;
              func_0x0001090d9d1c();
              uVar34 = (uint)puVar23;
              if (((ulong)puVar23 & 1) == 0) {
                puVar23 = puVar28;
                puVar22 = (uint *)0x0;
                if ((uVar34 >> 1 & 1) != 0) goto LAB_1090d7330;
LAB_1090d71d8:
                uVar30 = 0;
                uVar8 = (int)puVar23;
                uVar26 = (int)puVar23;
                if ((uVar34 >> 3 & 1) != 0) goto LAB_1090d733c;
LAB_1090d71e0:
                uVar26 = 0;
                uVar31 = uVar8;
                if ((uVar34 >> 4 & 1) != 0) goto LAB_1090d7348;
LAB_1090d71e8:
                uVar31 = 0;
                if ((uVar34 >> 5 & 1) != 0) goto LAB_1090d7354;
LAB_1090d71f0:
                uVar8 = 0;
              }
              else {
                puVar23 = &uStack_750;
                func_0x0001090da7f8();
                puVar22 = puVar23;
                if ((uVar34 >> 1 & 1) == 0) goto LAB_1090d71d8;
LAB_1090d7330:
                uVar30 = SUB84(puVar23,0);
                func_0x0001090d9d1c();
                uVar8 = uVar30;
                uVar26 = uVar30;
                if ((uVar34 >> 3 & 1) == 0) goto LAB_1090d71e0;
LAB_1090d733c:
                func_0x0001090d9d1c();
                uVar8 = uVar26;
                uVar31 = uVar26;
                if ((uVar34 >> 4 & 1) == 0) goto LAB_1090d71e8;
LAB_1090d7348:
                func_0x0001090d9d1c();
                uVar8 = uVar31;
                if ((uVar34 >> 5 & 1) == 0) goto LAB_1090d71f0;
LAB_1090d7354:
                func_0x0001090d9d1c();
              }
              uStack_a48 = CONCAT44((int)puVar28,uVar34);
              uStack_a38 = (uint *)CONCAT44(uVar26,uVar30);
              uStack_a30 = (uint *)CONCAT44(uVar8,uVar31);
              if (!bVar1) {
                puStack_a28 = (uint *)CONCAT71(puStack_a28._1_7_,1);
              }
              bVar1 = true;
              puStack_a40 = puVar22;
            }
          }
          func_0x0001090d9fe0();
          unaff_x23 = puVar20;
        }
        func_0x0001090d9c2c();
        uVar29 = *(ulong *)(param_1 + 0x30);
        uVar5 = *(ulong *)(param_1 + 0x38) <= uVar29;
        if ((bool)uVar5) {
          uVar18 = *(ulong *)(param_1 + 0x28);
          lVar41 = uVar29 - uVar18;
          if (0x222222222222222 < lVar41 / 0x78 + 1U) {
            FUN_1090d91dc();
            goto LAB_1090d796c;
          }
          func_0x0001090da0b4(*(ulong *)(param_1 + 0x38) - uVar18);
          uVar16 = extraout_x9_00;
          if (0x111111111111110 < extraout_x8_17) {
            uVar16 = extraout_x11_00;
          }
          if (uVar16 == 0) {
            lVar42 = 0;
          }
          else {
            if (0x222222222222222 < uVar16) {
              func_0x000104bd35f4();
              goto LAB_1090d796c;
            }
            lVar42 = uVar16 * 0x78;
            __Znwm();
          }
          unaff_x23 = (uint *)(lVar42 + lVar41);
          FUN_1090d9170(unaff_x23,&uStack_a48);
          puVar20 = unaff_x23 + (lVar41 / -0x78) * 0x1e;
          for (uVar24 = uVar18; uVar24 != uVar29; uVar24 = uVar24 + 0x78) {
            FUN_1090d9170(puVar20,uVar24);
            puVar20 = puVar20 + 0x1e;
          }
          for (; uVar5 = uVar29 <= uVar18, uVar18 != uVar29; uVar18 = uVar18 + 0x78) {
            func_0x0001090d8e50(uVar18 + 0x40);
          }
          puVar20 = unaff_x23 + 0x1e;
          lVar13 = *(long *)(param_1 + 0x28);
          *(uint **)(param_1 + 0x28) = unaff_x23 + (lVar41 / -0x78) * 0x1e;
          *(uint **)(param_1 + 0x30) = puVar20;
          *(ulong *)(param_1 + 0x38) = lVar42 + uVar16 * 0x78;
          if (lVar13 != 0) {
            __ZdlPv();
          }
        }
        else {
          FUN_1090d9170(uVar29,&uStack_a48);
          puVar20 = (uint *)(uVar29 + 0x78);
        }
        *(uint **)(param_1 + 0x30) = puVar20;
        func_0x0001090d9e14();
      }
      FUN_1090d886c(auStack_4f0);
    }
  }
  else if (uVar34 == 0x73696478) {
    uStack_a48 = 0;
    puStack_a40 = (uint *)((ulong)puStack_a40 & 0xffffffff00000000);
    uStack_a30 = (uint *)0x0;
    uStack_a38 = (uint *)0x0;
    uStack_a20 = (uint *)0x0;
    puStack_a28 = (uint *)0x0;
    uStack_a18 = (uint *)0x0;
    puVar20 = param_2 + 6;
    FUN_1090da730();
    func_0x0001090d9d30();
    uStack_a48 = CONCAT44(uStack_a48._4_4_,(int)puVar20);
    func_0x0001090d9d04();
    uStack_a48 = CONCAT44((int)puVar20,(undefined4)uStack_a48);
    func_0x0001090d9d04();
    puStack_a40 = (uint *)CONCAT44(puStack_a40._4_4_,(int)puVar20);
    if ((int)unaff_x22 == 1) {
      func_0x0001090d9dcc();
      uStack_a38 = puVar20;
      func_0x0001090d9dcc();
    }
    else {
      if ((int)unaff_x22 != 0) {
        func_0x0001090d9d0c();
        FUN_1090daaa0();
        func_0x0001090d9c14();
LAB_1090d796c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1090d7970);
        (*pcVar3)();
      }
      func_0x0001090d9d04();
      uStack_a38 = (uint *)((ulong)puVar20 & 0xffffffff);
      func_0x0001090d9d04();
      puVar20 = (uint *)((ulong)puVar20 & 0xffffffff);
    }
    uStack_a30 = puVar20;
    func_0x0001090d9ef0();
    func_0x0001090d9ef0();
    puVar23 = puVar20;
    func_0x0001090da018();
    uVar29 = (ulong)puVar20 & 0xffffffff;
    if ((int)puVar20 == 0) {
      puVar20 = (uint *)0x0;
    }
    else {
      func_0x0001090d9ee8();
      func_0x0001090da0dc();
      uStack_a20 = puVar23 + uVar29 * 8;
      for (lVar41 = extraout_x8_18; puStack_a28 = puVar20, uStack_a18 = uStack_a20,
          uVar29 * 0x20 - lVar41 != 0; lVar41 = lVar41 + 0x20) {
        puVar15 = (undefined8 *)((long)puVar20 + lVar41);
        puVar15[1] = 0;
        *puVar15 = 0;
        puVar15[3] = 0;
        puVar15[2] = 0;
      }
    }
    puVar20 = puVar20 + 6;
    for (; uVar29 != 0; uVar29 = uVar29 - 1) {
      func_0x0001090d9ddc();
      *(byte *)(puVar20 + -6) = (byte)((ulong)puVar23 >> 0x1f) & 1;
      *(ulong *)(puVar20 + -4) = (ulong)((uint)puVar23 & 0x7fffffff);
      func_0x0001090d9ddc();
      puVar20[-2] = (uint)puVar23;
      func_0x0001090d9ddc();
      *(byte *)(puVar20 + -1) = (byte)((ulong)puVar23 >> 0x1f) & 1;
      *(byte *)((long)puVar20 + -3) = (byte)((ulong)puVar23 >> 0x18) >> 4 & 7;
      *puVar20 = (uint)puVar23 & 0xfffffff;
      puVar20 = puVar20 + 8;
    }
    *(uint **)(param_1 + 0x78) = puStack_a40;
    *(ulong *)(param_1 + 0x70) = uStack_a48;
    *(uint **)(param_1 + 0x88) = uStack_a30;
    *(uint **)(param_1 + 0x80) = uStack_a38;
    if (*(char *)(param_1 + 0xa8) == '\x01') {
      if (*(long *)(param_1 + 0x90) != 0) {
        *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
        __ZdlPv();
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
      }
      func_0x0001090da0c8();
    }
    else {
      func_0x0001090da0c8();
      *(undefined1 *)(param_1 + 0xa8) = 1;
    }
    func_0x0001090d8b50(&puStack_a28);
    *(long *)(param_1 + 0xb0) = (long)param_3 + *(long *)(param_2 + 4) + *(long *)(param_2 + 2);
  }
  else {
    uVar5 = 0x6d6f6f75 < uVar34;
    if (uVar34 == 0x6d6f6f76) {
      FUN_1090d8684(param_1 + 0x10);
      while (func_0x0001090d9de4(*(undefined8 *)(param_2 + 8)), (bool)uVar5) {
        FUN_1090d5c14(auStack_ab0,extraout_x10 + 0x18);
        uVar5 = 0x6d766863 < auStack_ab0[0];
        if (auStack_ab0[0] == 0x6d766864) {
          iVar21 = (int)auStack_a98;
          FUN_1090da730();
          puVar20 = auStack_a98;
          func_0x0001090da7a8();
          if (iVar21 == 0) {
            puVar23 = puVar20;
            func_0x0001090d9ddc();
            param_3 = puVar23;
            func_0x0001090d9ddc();
            puVar28 = param_3;
            func_0x0001090d9ddc();
            puVar22 = puVar28;
            func_0x0001090d9ddc();
            unaff_x22 = (uint *)((ulong)puVar23 & 0xffffffff);
            param_3 = (uint *)((ulong)param_3 & 0xffffffff);
            puVar22 = (uint *)((ulong)puVar22 & 0xffffffff);
          }
          else {
            uVar5 = iVar21 != 0;
            if (iVar21 != 1) {
              func_0x0001090d9d0c();
              FUN_1090daaa0();
              func_0x0001090d9c14();
              goto LAB_1090d796c;
            }
            unaff_x22 = puVar20;
            func_0x0001090da06c();
            param_3 = unaff_x22;
            func_0x0001090da06c();
            puVar28 = param_3;
            func_0x0001090d9ddc();
            puVar22 = puVar28;
            func_0x0001090da06c();
          }
          *(int *)(param_1 + 0x40) = (int)puVar20;
          *(uint **)(param_1 + 0x48) = unaff_x22;
          *(uint **)(param_1 + 0x50) = param_3;
          *(int *)(param_1 + 0x58) = (int)puVar28;
          *(uint **)(param_1 + 0x60) = puVar22;
          if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
            *(undefined1 *)(param_1 + 0x68) = 1;
          }
        }
        else {
          uVar5 = 0x7472616a < auStack_ab0[0];
          if (auStack_ab0[0] == 0x7472616b) {
            uStack_a48 = uStack_a48 & 0xffffffffffffff00;
            bStack_9f0 = 0;
            uStack_9e8 = uStack_9e8 & 0xffffffffffffff00;
            cStack_808 = '\0';
            auStack_800[0] = auStack_800[0] & 0xffffff00;
            cStack_7d8 = '\0';
            uVar5 = 1;
            while (func_0x0001090d9de4(uStack_a90), (bool)uVar5) {
              puVar20 = auStack_7d0;
              FUN_1090d5c14(puVar20,auStack_a98);
              if (auStack_7d0[0] == 0x65647473) {
                uStack_520 = uStack_520 & 0xffffffffffffff00;
                bStack_500 = 0;
                uVar5 = 1;
                while (func_0x0001090d9de4(uStack_7b0), (bool)uVar5) {
                  puVar20 = &uStack_768;
                  func_0x0001090d9eb8(auStack_7d0);
                  uVar5 = 0x656c7373 < uStack_768;
                  if (uStack_768 == 0x656c7374) {
                    uStack_338 = uStack_338 & 0xffffffff00000000;
                    func_0x0001090d9d24(&uStack_338);
                    func_0x0001090d9ef8();
                    func_0x0001090d9d30();
                    uStack_338 = CONCAT44(uStack_338._4_4_,(int)puVar20);
                    if (1 < (uint)unaff_x22) {
                      func_0x0001090d9d0c();
                      FUN_1090daaa0();
                      func_0x0001090d9c14();
                      goto LAB_1090d796c;
                    }
                    func_0x0001090d9d04();
                    uVar29 = (ulong)puVar20 & 0xffffffff;
                    if ((uint)unaff_x22 == 0) {
                      func_0x0001090da018();
                      func_0x0001090d9ff4();
                      puVar20 = puStack_330;
                      puVar23 = puStack_330 + 4;
                      for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                        puVar28 = &uStack_750;
                        unaff_x22 = &uStack_768;
                        func_0x0001090da7d8();
                        *(ulong *)(puVar23 + -4) = (ulong)puVar28 & 0xffffffff;
                        iVar21 = (int)&uStack_750;
                        func_0x0001090da7d8();
                        *(long *)(puVar23 + -2) = (long)iVar21;
                        uVar34 = func_0x0001090da850(&uStack_750);
                        *puVar23 = uVar34;
                        puVar23 = puVar23 + 6;
                      }
                    }
                    else {
                      func_0x0001090da018();
                      func_0x0001090d9ff4();
                      puVar20 = puStack_330;
                      puVar23 = puStack_330 + 4;
                      for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                        puVar28 = &uStack_750;
                        unaff_x22 = &uStack_768;
                        func_0x0001090da7f8();
                        *(uint **)(puVar23 + -4) = puVar28;
                        puVar28 = &uStack_750;
                        func_0x0001090da7f8();
                        *(uint **)(puVar23 + -2) = puVar28;
                        uVar34 = func_0x0001090da850(&uStack_750);
                        *puVar23 = uVar34;
                        puVar23 = puVar23 + 6;
                      }
                    }
                    param_3 = (uint *)0x0;
                    uVar5 = bStack_500 != 0;
                    if (bStack_500 == 1) {
                      func_0x0001090d973c(&uStack_520,&uStack_338);
                      puVar15 = &uStack_338;
                    }
                    else {
                      uStack_520 = CONCAT44(uStack_520._4_4_,(undefined4)uStack_338);
                      puStack_508 = puStack_320;
                      puStack_510 = puStack_328;
                      puStack_518 = puVar20;
                      func_0x0001090d9d24(&uStack_338);
                      bStack_500 = 1;
                      puVar15 = extraout_x8_15;
                    }
                    func_0x0001090d8d1c(puVar15 + 1);
                  }
                  func_0x0001090d9da4(&uStack_768);
                }
                uVar5 = cStack_7d8 != '\0';
                if (cStack_7d8 == '\x01') {
                  uVar5 = bStack_500 <= bStack_7e0;
                  if (bStack_7e0 == bStack_500) {
                    if (bStack_7e0 != 0) {
                      func_0x0001090d973c(auStack_800,&uStack_520);
                    }
                  }
                  else if (bStack_7e0 == 0) {
                    auStack_800[0] = (uint)uStack_520;
                    puStack_7f0 = puStack_510;
                    puStack_7f8 = puStack_518;
                    puStack_7e8 = puStack_508;
                    func_0x0001090d9d24(&uStack_520);
                    bStack_7e0 = 1;
                  }
                  else {
                    func_0x0001090d8d1c(&puStack_7f8);
                    bStack_7e0 = 0;
                  }
                }
                else {
                  FUN_1090d9130(auStack_800,&uStack_520);
                }
                func_0x0001090d8cec(&uStack_520);
              }
              else if (auStack_7d0[0] == 0x6d646961) {
                uStack_768 = uStack_768 & 0xffffff00;
                bStack_738 = 0;
                uStack_730 = uStack_730 & 0xffffffffffffff00;
                cStack_710 = '\0';
                auStack_708[0] = 0;
                bStack_590 = 0;
                uVar5 = 1;
                while (func_0x0001090d9de4(uStack_7b0), (bool)uVar5) {
                  puVar20 = auStack_588;
                  func_0x0001090d9eb8(auStack_7d0);
                  if (auStack_588[0] == 0x68646c72) {
                    puStack_508 = (uint *)0x0;
                    puStack_510 = (uint *)0x0;
                    puStack_518 = (uint *)0x0;
                    uStack_520 = 0;
                    func_0x0001090d9ef8();
                    uVar8 = SUB84(auStack_570,0);
                    func_0x0001090da7a8();
                    uStack_520 = CONCAT44(uStack_520._4_4_,uVar8);
                    if ((int)puVar20 != 0) {
                      func_0x0001090d9d0c();
                      func_0x0001090da000(auStack_588);
                      func_0x0001090d9c14();
                      goto LAB_1090d796c;
                    }
                    func_0x0001090d9d04();
                    func_0x0001090d9d04();
                    uStack_520 = CONCAT44(uVar8,(uint)uStack_520);
                    FUN_1090da74c(auStack_570,0xc);
                    puVar20 = (uint *)(lStack_568 - lStack_560);
                    puVar12 = auStack_570;
                    FUN_1090da74c(puVar12,puVar20);
                    param_3 = puVar20;
                    if (puVar20 != (uint *)0x0) {
                      for (puVar23 = (uint *)0x0;
                          (param_3 = puVar20, puVar20 != puVar23 &&
                          (param_3 = puVar23, puVar12[(long)puVar23] != '\0'));
                          puVar23 = (uint *)((long)puVar23 + 1)) {
                      }
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
                                (&uStack_338,puVar12,param_3);
                      func_0x000107c27b9c(&puStack_518,&uStack_338);
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                (&uStack_338);
                    }
                    uVar5 = cStack_710 != '\0';
                    if (cStack_710 == '\x01') {
                      func_0x0001090d92dc(&uStack_730,&uStack_520);
                    }
                    else {
                      uStack_730 = uStack_520;
                      puStack_720 = puStack_510;
                      puStack_728 = puStack_518;
                      puStack_718 = puStack_508;
                      puStack_518 = (uint *)0x0;
                      puStack_510 = (uint *)0x0;
                      puStack_508 = (uint *)0x0;
                      cStack_710 = '\x01';
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                              (&puStack_518);
                  }
                  else if (auStack_588[0] == 0x6d696e66) {
                    uStack_520 = uStack_520 & 0xffffffffffffff00;
                    cStack_3b0 = '\0';
                    uVar5 = 1;
                    uVar4 = 1;
LAB_1090d5ee4:
                    func_0x0001090d9de4(lStack_568);
                    if ((bool)uVar5) {
                      func_0x0001090d9eb8(auStack_588,auStack_3a0);
                      func_0x0001090d9eac(auStack_3a0[0]);
                      uVar7 = 0;
                      if ((bool)uVar4) {
                        uStack_338 = uStack_338 & 0xffffffffffffff00;
                        puStack_318 = (uint *)((ulong)puStack_318 & 0xffffffffffffff00);
                        uStack_310 = (uint *)((ulong)uStack_310 & 0xffffffffffffff00);
                        cStack_2f0 = '\0';
                        auStack_2e8[0] = auStack_2e8[0] & 0xffffff00;
                        cStack_2c8 = '\0';
                        uStack_2c0 = uStack_2c0 & 0xffffffffffffff00;
                        cStack_298 = '\0';
                        auStack_290[0] = auStack_290[0] & 0xffffff00;
                        cStack_270 = '\0';
                        auStack_268[0] = auStack_268[0] & 0xffffff00;
                        cStack_248 = '\0';
                        auStack_240[0] = auStack_240[0] & 0xffffff00;
                        cStack_220 = '\0';
                        auStack_218[0] = auStack_218[0] & 0xffffff00;
                        cStack_1f8 = '\0';
                        auStack_1f0[0] = auStack_1f0[0] & 0xffffff00;
                        cStack_1d0 = '\0';
LAB_1090d5f58:
                        func_0x0001090d9de4(uStack_380);
                        if (!(bool)uVar5) goto LAB_1090d68cc;
                        puVar20 = auStack_1c8;
                        func_0x0001090d9eb8(auStack_3a0);
                        iVar21 = (int)param_3;
                        if (auStack_1c8[0] == 0x636f3634) {
                          func_0x0001090d9c8c();
                          func_0x0001090d9d70();
                          func_0x0001090d9cc8();
                          uStack_118 = CONCAT44(uStack_118._4_4_,(int)puVar20);
                          if (iVar21 != 0) {
                            func_0x0001090d9d0c();
                            func_0x0001090d9d9c();
                            func_0x0001090d9c14();
                            goto LAB_1090d796c;
                          }
                          func_0x0001090d9d14();
                          func_0x0001090d9e98();
                          uVar29 = (ulong)puVar20 & 0xffffffff;
                          FUN_1090d98d8(&puStack_110,uVar29);
                          puVar20 = puStack_110;
                          for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                            puVar12 = auStack_1b0;
                            func_0x0001090da7f8();
                            *(undefined1 **)puVar20 = puVar12;
                            puVar20 = puVar20 + 2;
                          }
                          uVar5 = cStack_220 != '\0';
                          if (cStack_220 == '\x01') {
                            func_0x0001090d96c8(auStack_240,&uStack_118);
                            puVar15 = &uStack_118;
                          }
                          else {
                            auStack_240[0] = (uint)uStack_118;
                            uVar43 = func_0x0001090d9f60();
                            *(undefined8 *)(extraout_x8_04 + 0x108) = extraout_var_01;
                            *(undefined8 *)(extraout_x8_04 + 0x100) = uVar43;
                            puStack_228 = puStack_100;
                            func_0x0001090d9ca0();
                            cStack_220 = '\x01';
                            puVar15 = extraout_x8_05;
                          }
                          func_0x000107c28374(puVar15 + 1);
                          param_3 = (uint *)0x0;
                        }
                        else {
                          uVar5 = 0x63747472 < auStack_1c8[0];
                          bVar6 = auStack_1c8[0] == 0x63747473;
                          if (bVar6) {
                            func_0x0001090d9c8c();
                            func_0x0001090d9d70();
                            param_3 = puVar20;
                            func_0x0001090d9dbc();
                            uStack_118 = CONCAT44(uStack_118._4_4_,(uint)param_3);
                            if (1 < (uint)puVar20) {
                              func_0x0001090d9d0c();
                              func_0x0001090d9d9c();
                              func_0x0001090d9c14();
                              goto LAB_1090d796c;
                            }
                            unaff_x22 = param_3;
                            func_0x0001090d9d14();
                            puVar20 = unaff_x22;
                            func_0x0001090d9e98();
                            uVar29 = (ulong)unaff_x22 & 0xffffffff;
                            if ((int)unaff_x22 == 0) {
                              puVar23 = (uint *)0x0;
                              unaff_x22 = (uint *)0x0;
                            }
                            else {
                              func_0x0001090d9ee8();
                              func_0x0001090da0dc();
                              puVar23 = puVar20 + uVar29 * 4;
                              for (lVar41 = extraout_x8_03; puStack_110 = unaff_x22,
                                  puStack_108 = puVar23, puStack_100 = puVar23,
                                  uVar29 * 0x10 - lVar41 != 0; lVar41 = lVar41 + 0x10) {
                                *(undefined8 *)((long)unaff_x22 + lVar41) = 0;
                                ((undefined8 *)((long)unaff_x22 + lVar41))[1] = 0;
                              }
                            }
                            puVar28 = unaff_x22 + 2;
                            for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                              func_0x0001090d9d14();
                              puVar28[-2] = (uint)puVar20;
                              func_0x0001090d9d14();
                              *(long *)puVar28 = (long)(int)puVar20;
                              puVar28 = puVar28 + 4;
                            }
                            uVar5 = cStack_1d0 != '\0';
                            if (cStack_1d0 == '\x01') {
                              FUN_1090d970c(auStack_1f0,&uStack_118);
                              puVar15 = &uStack_118;
                            }
                            else {
                              auStack_1f0[0] = (uint)param_3;
                              puStack_1e8 = unaff_x22;
                              puStack_1e0 = puVar23;
                              puStack_1d8 = puVar23;
                              func_0x0001090d9ca0();
                              cStack_1d0 = '\x01';
                              puVar15 = extraout_x8_12;
                            }
                            func_0x0001090d8e08(puVar15 + 1);
                          }
                          else {
                            func_0x0001090d9eac();
                            if (bVar6) {
                              func_0x0001090d9c8c();
                              func_0x0001090d9d70();
                              func_0x0001090d9cc8();
                              uStack_118 = CONCAT44(uStack_118._4_4_,(int)puVar20);
                              if (iVar21 == 0) {
                                func_0x0001090d9d14();
                                func_0x0001090d9e98();
                                func_0x0001090d9cf0();
                                while (((ulong)puVar20 & 0xffffffff) != 0) {
                                  func_0x0001090d9d14();
                                  func_0x0001090d9f70();
                                }
                                uVar5 = cStack_248 != '\0';
                                param_3 = (uint *)0x0;
                                if (cStack_248 == '\x01') {
                                  func_0x0001090d96ac(auStack_268,&uStack_118);
                                  goto LAB_1090d688c;
                                }
                                auStack_268[0] = (uint)uStack_118;
                                uVar43 = func_0x0001090d9f60();
                                *(undefined8 *)(extraout_x8_07 + 0xe0) = extraout_var_02;
                                *(undefined8 *)(extraout_x8_07 + 0xd8) = uVar43;
                                puStack_250 = puStack_100;
                                func_0x0001090d9ca0();
                                cStack_248 = '\x01';
                                puVar15 = extraout_x8_08;
                                goto LAB_1090d68b8;
                              }
                              func_0x0001090d9d0c();
                              func_0x0001090d9d9c();
                              func_0x0001090d9c14();
                              goto LAB_1090d796c;
                            }
                            func_0x0001090d9eac();
                            if (bVar6) {
                              func_0x0001090d9c8c();
                              func_0x0001090d9d70();
                              param_3 = puVar20;
                              func_0x0001090d9dbc();
                              uStack_118 = CONCAT44(uStack_118._4_4_,(uint)param_3);
                              if ((int)puVar20 == 0) {
                                unaff_x22 = param_3;
                                func_0x0001090d9d14();
                                puVar20 = unaff_x22;
                                func_0x0001090da060(((ulong)unaff_x22 & 0xffffffff) * 2 +
                                                    ((ulong)unaff_x22 & 0xffffffff));
                                uVar29 = (ulong)unaff_x22 & 0xffffffff;
                                if ((int)unaff_x22 == 0) {
                                  puVar23 = (uint *)0x0;
                                  unaff_x22 = (uint *)0x0;
                                }
                                else {
                                  func_0x0001090d9ee8();
                                  func_0x0001090da0dc();
                                  puVar23 = puVar20 + uVar29 * 3;
                                  for (lVar41 = extraout_x8_01; puStack_110 = unaff_x22,
                                      puStack_108 = puVar23, puStack_100 = puVar23,
                                      uVar29 * 0xc - lVar41 != 0; lVar41 = lVar41 + 0xc) {
                                    *(undefined4 *)((undefined8 *)((long)unaff_x22 + lVar41) + 1) =
                                         0;
                                    *(undefined8 *)((long)unaff_x22 + lVar41) = 0;
                                  }
                                }
                                puVar28 = unaff_x22 + 2;
                                for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                                  func_0x0001090d9d14();
                                  puVar28[-2] = (uint)puVar20;
                                  func_0x0001090d9d14();
                                  puVar28[-1] = (uint)puVar20;
                                  func_0x0001090d9d14();
                                  *puVar28 = (uint)puVar20;
                                  puVar28 = puVar28 + 3;
                                }
                                uVar5 = cStack_2c8 != '\0';
                                if (cStack_2c8 == '\x01') {
                                  func_0x0001090d962c(auStack_2e8,&uStack_118);
                                  puVar15 = &uStack_118;
                                }
                                else {
                                  auStack_2e8[0] = (uint)param_3;
                                  puStack_2e0 = unaff_x22;
                                  puStack_2d8 = puVar23;
                                  puStack_2d0 = puVar23;
                                  func_0x0001090d9ca0();
                                  cStack_2c8 = '\x01';
                                  puVar15 = extraout_x8_10;
                                }
                                func_0x0001090d8de4(puVar15 + 1);
                                goto LAB_1090d68c0;
                              }
                              func_0x0001090d9d0c();
                              func_0x0001090d9d9c();
                              func_0x0001090d9c14();
                              goto LAB_1090d796c;
                            }
                            func_0x0001090d9eac();
                            if (bVar6) {
                              func_0x0001090d9c8c();
                              func_0x0001090d9d70();
                              func_0x0001090d9cc8();
                              uStack_118 = CONCAT44(uStack_118._4_4_,(int)puVar20);
                              if (iVar21 != 0) {
                                func_0x0001090d9d0c();
                                func_0x0001090d9d9c();
                                func_0x0001090d9c14();
                                goto LAB_1090d796c;
                              }
                              func_0x0001090d9d70();
                              puVar23 = puVar20;
                              func_0x0001090d9d14();
                              param_3 = (uint *)((ulong)puVar23 & 0xffffffff);
                              iVar21 = (int)puVar20;
                              if (iVar21 == 4) {
                                lVar41 = ((ulong)puVar23 & 1) + ((ulong)param_3 >> 1);
                                puVar12 = auStack_1b0;
                                FUN_1090daa0c(puVar12,lVar41);
                                func_0x0001090d9cf0();
                                puVar28 = puStack_108;
                                puVar23 = puStack_110;
                                for (; puVar20 = (uint *)0x0, lVar41 != 0; lVar41 = lVar41 + -1) {
                                  func_0x0001090d9d70();
                                  puVar20 = puVar23 + 1;
                                  *puVar23 = (uint)((ulong)puVar12 >> 4) & 0xfffffff;
                                  if (puVar20 < puVar28) {
                                    puVar20 = puVar23 + 2;
                                    puVar23[1] = (uint)puVar12 & 0xf;
                                  }
                                  puVar23 = puVar20;
                                }
                              }
                              else if (iVar21 == 8) {
                                FUN_1090daa0c(auStack_1b0,param_3);
                                func_0x0001090d9cf0();
                                while (param_3 != (uint *)0x0) {
                                  func_0x0001090d9d70();
                                  func_0x0001090d9f70();
                                }
                              }
                              else {
                                if (iVar21 != 0x10) {
                                  func_0x0001090d9d0c();
                                  func_0x0001090d9d9c();
                                  func_0x0001090d9c14();
                                  goto LAB_1090d796c;
                                }
                                func_0x0001090d9e98();
                                func_0x0001090d9cf0();
                                while (param_3 != (uint *)0x0) {
                                  FUN_1090da784(auStack_1b0);
                                  func_0x0001090d9f70();
                                }
                              }
                              uVar5 = cStack_270 != '\0';
                              unaff_x22 = puVar20;
                              if (cStack_270 == '\x01') {
                                func_0x0001090d9690(auStack_290,&uStack_118);
LAB_1090d688c:
                                puVar15 = &uStack_118;
                              }
                              else {
                                auStack_290[0] = (uint)uStack_118;
                                uVar43 = func_0x0001090d9f60();
                                *(undefined8 *)(extraout_x8_13 + 0xb8) = extraout_var_03;
                                *(undefined8 *)(extraout_x8_13 + 0xb0) = uVar43;
                                puStack_278 = puStack_100;
                                func_0x0001090d9ca0();
                                cStack_270 = '\x01';
                                puVar15 = extraout_x8_14;
                              }
LAB_1090d68b8:
                              ppuVar11 = (uint **)(puVar15 + 1);
                            }
                            else {
                              func_0x0001090d9eac();
                              if (bVar6) {
                                func_0x0001090d9c8c();
                                func_0x0001090d9d70();
                                func_0x0001090d9cc8();
                                uStack_118 = CONCAT44(uStack_118._4_4_,(int)puVar20);
                                if (iVar21 == 0) {
                                  func_0x0001090d9d14();
                                  func_0x0001090d9e98();
                                  func_0x0001090d9cf0();
                                  while (((ulong)puVar20 & 0xffffffff) != 0) {
                                    func_0x0001090d9d14();
                                    func_0x0001090d9f70();
                                  }
                                  uVar5 = cStack_1f8 != '\0';
                                  param_3 = (uint *)0x0;
                                  if (cStack_1f8 == '\x01') {
                                    func_0x0001090d96f0(auStack_218,&uStack_118);
                                    goto LAB_1090d688c;
                                  }
                                  auStack_218[0] = (uint)uStack_118;
                                  puStack_200 = puStack_100;
                                  puStack_210 = puStack_110;
                                  puStack_208 = puStack_108;
                                  func_0x0001090d9ca0();
                                  cStack_1f8 = '\x01';
                                  puVar15 = extraout_x8_06;
                                  goto LAB_1090d68b8;
                                }
                                func_0x0001090d9d0c();
                                func_0x0001090d9d9c();
                                func_0x0001090d9c14();
                                goto LAB_1090d796c;
                              }
                              func_0x0001090d9eac();
                              if (!bVar6) {
                                func_0x0001090d9eac();
                                if (bVar6) {
                                  func_0x0001090d9c8c();
                                  func_0x0001090d9d70();
                                  param_3 = puVar20;
                                  func_0x0001090d9dbc();
                                  uStack_118 = CONCAT44(uStack_118._4_4_,(int)param_3);
                                  if ((int)puVar20 != 0) {
                                    func_0x0001090d9d0c();
                                    func_0x0001090d9d9c();
                                    func_0x0001090d9c14();
                                    goto LAB_1090d796c;
                                  }
                                  unaff_x22 = param_3;
                                  func_0x0001090d9d14();
                                  puVar20 = unaff_x22;
                                  func_0x0001090da060();
                                  uVar29 = (ulong)unaff_x22 & 0xffffffff;
                                  if ((int)unaff_x22 == 0) {
                                    puVar23 = (uint *)0x0;
                                    unaff_x22 = (uint *)0x0;
                                  }
                                  else {
                                    func_0x0001090d9ee8();
                                    func_0x0001090da0dc();
                                    puVar23 = puVar20 + uVar29 * 2;
                                    for (lVar41 = extraout_x8_02; puStack_110 = unaff_x22,
                                        puStack_108 = puVar23, puStack_100 = puVar23,
                                        uVar29 * 8 - lVar41 != 0; lVar41 = lVar41 + 8) {
                                      *(undefined8 *)((long)unaff_x22 + lVar41) = 0;
                                    }
                                  }
                                  puVar28 = unaff_x22 + 1;
                                  for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                                    func_0x0001090d9d14();
                                    puVar28[-1] = (uint)puVar20;
                                    func_0x0001090d9d14();
                                    *puVar28 = (uint)puVar20;
                                    puVar28 = puVar28 + 2;
                                  }
                                  uVar5 = cStack_2f0 != '\0';
                                  if (cStack_2f0 == '\x01') {
                                    func_0x0001090d95fc(&uStack_310,&uStack_118);
                                    puVar15 = &uStack_118;
                                  }
                                  else {
                                    uVar29 = (ulong)uStack_310 >> 0x20;
                                    uStack_310 = (uint *)CONCAT44((int)uVar29,(int)param_3);
                                    puStack_308 = unaff_x22;
                                    puStack_300 = puVar23;
                                    puStack_2f8 = puVar23;
                                    func_0x0001090d9ca0();
                                    cStack_2f0 = '\x01';
                                    puVar15 = extraout_x8_11;
                                  }
                                  FUN_1090d8dc0(puVar15 + 1);
                                }
                                else {
                                  func_0x0001090d9eac();
                                  if (!bVar6) goto LAB_1090d68c0;
                                  auStack_160[0] = 0;
                                  func_0x0001090d9d24(auStack_160);
                                  func_0x0001090d9d70();
                                  func_0x0001090d9cc8();
                                  auStack_160[0] = SUB84(puVar20,0);
                                  if (iVar21 != 0) {
                                    func_0x0001090d9d0c();
                                    func_0x0001090d9d9c();
                                    func_0x0001090d9c4c();
                                    func_0x0001090da030();
                                    goto LAB_1090d796c;
                                  }
                                  func_0x0001090d9d14();
                                  puVar22 = (uint *)0x0;
                                  puVar28 = (uint *)0x0;
                                  puVar23 = (uint *)0x0;
                                  puVar27 = (uint *)0x0;
                                  param_3 = (uint *)0x0;
                                  for (uVar29 = 0; uVar29 != ((ulong)puVar20 & 0xffffffff);
                                      uVar29 = uVar29 + 1) {
                                    func_0x0001090d9eb8(auStack_1c8,&uStack_118);
                                    unaff_x22 = (uint *)(lStack_f8 - lStack_f0);
                                    ppuVar11 = &puStack_100;
                                    FUN_1090da74c(ppuVar11,unaff_x22);
                                    uVar34 = (uint)uStack_118;
                                    func_0x00010b99d8d0(auStack_140,ppuVar11,
                                                        (long)ppuVar11 + (long)unaff_x22);
                                    if (puVar22 < puVar27) {
                                      lVar41 = func_0x0001090d9f94();
                                      *puVar22 = uVar34;
                                      puVar22[4] = 1;
                                      puVar22[5] = 0;
                                      *(undefined ***)(puVar22 + 2) = &PTR_DAT_110d7e488;
                                      *(long *)(puVar22 + 8) = extraout_var;
                                      *(long *)(puVar22 + 6) = lVar41;
                                      *(long *)(puVar22 + 10) = extraout_x8;
                                      puVar19 = param_3;
                                      puVar25 = puVar22;
                                    }
                                    else {
                                      lVar41 = (long)puVar22 - (long)puVar23;
                                      uVar18 = lVar41 / 0x30 + 1;
                                      if (0x555555555555555 < uVar18) {
                                        func_0x0001090d9cd4();
                                        FUN_1090d8d40();
                                        goto LAB_1090d796c;
                                      }
                                      uVar24 = ((long)puVar27 - (long)puVar23) / 0x30;
                                      uVar16 = uVar24 * 2;
                                      if (uVar16 < uVar18 || uVar16 - uVar18 == 0) {
                                        uVar16 = uVar18;
                                      }
                                      if (0x2aaaaaaaaaaaaa9 < uVar24) {
                                        uVar16 = 0x555555555555555;
                                      }
                                      if (uVar16 == 0) {
                                        unaff_x22 = (uint *)0x0;
                                      }
                                      else {
                                        if (0x555555555555555 < uVar16) {
                                          func_0x0001090d9cd4();
                                          func_0x000104bd35f4();
                                          goto LAB_1090d796c;
                                        }
                                        unaff_x22 = (uint *)(uVar16 * 0x30);
                                        __Znwm();
                                      }
                                      puVar25 = (uint *)((long)unaff_x22 + lVar41);
                                      lVar42 = func_0x0001090d9f94();
                                      *puVar25 = uVar34;
                                      *(undefined ***)(puVar25 + 2) = &PTR_DAT_110d7e488;
                                      puVar25[4] = 1;
                                      puVar25[5] = 0;
                                      *(long *)(puVar25 + 8) = extraout_var_00;
                                      *(long *)(puVar25 + 6) = lVar42;
                                      *(long *)(puVar25 + 10) = extraout_x8_00;
                                      puVar19 = puVar25 + (lVar41 / -0x30) * 0xc;
                                      lVar41 = (long)unaff_x22 +
                                               (long)puVar22 +
                                               ((lVar41 / -0x30) * 0x30 - (long)puVar23) + 8;
                                      for (puVar28 = puVar23; puVar28 != puVar22;
                                          puVar28 = puVar28 + 0xc) {
                                        *(uint *)(lVar41 + -8) = *puVar28;
                                        func_0x00010b99d74c(lVar41,puVar28 + 2);
                                        lVar41 = lVar41 + 0x30;
                                      }
                                      for (; puVar23 != puVar22; puVar23 = puVar23 + 0xc) {
                                        func_0x00010b99d89c(puVar23 + 2);
                                      }
                                      puVar27 = unaff_x22 + uVar16 * 0xc;
                                      puVar23 = puVar19;
                                      puVar28 = puVar27;
                                      if (param_3 != (uint *)0x0) {
                                        __ZdlPv(param_3);
                                      }
                                    }
                                    puVar22 = puVar25 + 0xc;
                                    func_0x0001090d9e20();
                                    func_0x0001090d9da4(&uStack_118);
                                    param_3 = puVar19;
                                  }
                                  func_0x0001090d9cd4();
                                  uVar5 = (char)puStack_318 != '\0';
                                  if ((char)puStack_318 == '\x01') {
                                    FUN_1090d95c0(&uStack_338,auStack_160);
                                    puVar14 = auStack_160;
                                  }
                                  else {
                                    uStack_338 = CONCAT44(uStack_338._4_4_,auStack_160[0]);
                                    puStack_330 = param_3;
                                    puStack_328 = puVar22;
                                    puStack_320 = puVar28;
                                    func_0x0001090d9d24(auStack_160);
                                    puStack_318 = (uint *)CONCAT71(puStack_318._1_7_,1);
                                    puVar14 = extraout_x8_09;
                                  }
                                  FUN_1090d8d4c(puVar14 + 2);
                                }
                                goto LAB_1090d68c0;
                              }
                              uStack_118 = 0;
                              puStack_110 = (uint *)((ulong)puStack_110 & 0xffffffff00000000);
                              puStack_100 = (uint *)0x0;
                              lStack_f8 = 0;
                              puStack_108 = (uint *)0x0;
                              func_0x0001090d9d70();
                              func_0x0001090d9cc8();
                              uStack_118 = CONCAT44(uStack_118._4_4_,(int)puVar20);
                              if (iVar21 != 0) {
                                func_0x0001090d9d0c();
                                func_0x0001090d9d9c();
                                func_0x0001090d9c14();
                                goto LAB_1090d796c;
                              }
                              func_0x0001090d9d14();
                              uStack_118 = CONCAT44((int)puVar20,(uint)uStack_118);
                              param_3 = puVar20;
                              func_0x0001090d9d14();
                              puStack_110 = (uint *)CONCAT44(puStack_110._4_4_,(int)param_3);
                              if ((int)puVar20 == 0) {
                                func_0x0001090d9e98();
                                uVar29 = (ulong)param_3 & 0xffffffff;
                                func_0x0001074287b0(&puStack_108,uVar29);
                                while (param_3 = (uint *)0x0, uVar29 != 0) {
                                  func_0x0001090d9d14();
                                  func_0x0001090d9f70();
                                }
                              }
                              uVar5 = cStack_298 != '\0';
                              if (cStack_298 == '\x01') {
                                FUN_1090d965c(&uStack_2c0,&uStack_118);
                              }
                              else {
                                uStack_2c0 = uStack_118;
                                uStack_2b8 = puStack_110._0_4_;
                                puStack_2a8 = puStack_100;
                                puStack_2b0 = puStack_108;
                                lStack_2a0 = lStack_f8;
                                puStack_100 = (uint *)0x0;
                                lStack_f8 = 0;
                                puStack_108 = (uint *)0x0;
                                cStack_298 = '\x01';
                              }
                              ppuVar11 = &puStack_108;
                              unaff_x22 = puVar20;
                            }
                            func_0x00010731e26c(ppuVar11);
                          }
                        }
LAB_1090d68c0:
                        FUN_1090d886c(auStack_198);
                        goto LAB_1090d5f58;
                      }
                      goto LAB_1090d68f4;
                    }
                    uVar5 = bStack_590 != 0;
                    if (bStack_590 == 1) {
                      func_0x0001090d9304(auStack_708,&uStack_520);
                    }
                    else {
                      func_0x0001090d8f78(auStack_708,&uStack_520);
                    }
                    FUN_1090d8bfc(&uStack_520);
                  }
                  else {
                    uVar5 = 0x6d646863 < auStack_588[0];
                    if (auStack_588[0] == 0x6d646864) {
                      func_0x0001090d9ef8();
                      func_0x0001090d9d30();
                      iVar21 = (int)unaff_x22;
                      if (iVar21 == 0) {
                        puVar23 = puVar20;
                        func_0x0001090d9d04();
                        puVar28 = puVar23;
                        func_0x0001090d9d04();
                        puVar22 = puVar28;
                        func_0x0001090d9d04();
                        param_3 = puVar22;
                        func_0x0001090d9d04();
                        puVar23 = (uint *)((ulong)puVar23 & 0xffffffff);
                        puVar28 = (uint *)((ulong)puVar28 & 0xffffffff);
                        unaff_x22 = (uint *)((ulong)param_3 & 0xffffffff);
                      }
                      else {
                        uVar5 = iVar21 != 0;
                        if (iVar21 != 1) {
                          func_0x0001090d9d0c();
                          func_0x0001090da000(auStack_588);
                          func_0x0001090d9c14();
                          goto LAB_1090d796c;
                        }
                        puVar23 = puVar20;
                        func_0x0001090d9dcc();
                        puVar28 = puVar23;
                        func_0x0001090d9dcc();
                        puVar22 = puVar28;
                        func_0x0001090d9d04();
                        param_3 = puVar22;
                        func_0x0001090d9dcc();
                        unaff_x22 = param_3;
                      }
                      func_0x0001090d9ef0();
                      func_0x0001090d9ef0();
                      uStack_768 = (uint)puVar20;
                      uStack_750 = (uint)puVar22;
                      uStack_740 = SUB82(param_3,0);
                      puStack_760 = puVar23;
                      puStack_758 = puVar28;
                      puStack_748 = unaff_x22;
                      if ((bStack_738 & 1) == 0) {
                        bStack_738 = 1;
                      }
                    }
                  }
                  func_0x0001090d9da4(auStack_588);
                }
                uVar5 = cStack_808 != '\0';
                if (cStack_808 == '\x01') {
                  uStack_9e8 = CONCAT44(uStack_764,uStack_768);
                  uStack_9d0 = CONCAT44(uStack_74c,uStack_750);
                  puStack_9e0 = puStack_760;
                  puStack_9d8 = puStack_758;
                  uStack_9c0 = CONCAT62(uStack_73e,uStack_740);
                  puStack_9c8 = puStack_748;
                  bStack_9b8 = bStack_738;
                  if (cStack_990 == cStack_710) {
                    if (cStack_990 != '\0') {
                      func_0x0001090d92dc(&uStack_9b0,&uStack_730);
                    }
                  }
                  else if (cStack_990 == '\0') {
                    uStack_9b0 = uStack_730;
                    puStack_9a0 = puStack_720;
                    puStack_9a8 = puStack_728;
                    puStack_998 = puStack_718;
                    puStack_728 = (uint *)0x0;
                    puStack_720 = (uint *)0x0;
                    puStack_718 = (uint *)0x0;
                    cStack_990 = '\x01';
                  }
                  else {
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                              (&puStack_9a8);
                    cStack_990 = '\0';
                  }
                  uVar5 = bStack_590 <= bStack_810;
                  if (bStack_810 == bStack_590) {
                    if (bStack_810 != 0) {
                      func_0x0001090da080();
                      func_0x0001090d9304();
                    }
                  }
                  else if (bStack_810 == 0) {
                    func_0x0001090da080();
                    func_0x0001090d8f78();
                  }
                  else {
                    FUN_1090d8bfc(auStack_988);
                    bStack_810 = 0;
                  }
                }
                else {
                  func_0x0001090d8ee4(&uStack_9e8,&uStack_768);
                }
                func_0x0001090d8bb8(&uStack_768);
              }
              else {
                uVar5 = 0x746b6863 < auStack_7d0[0];
                if (auStack_7d0[0] == 0x746b6864) {
                  func_0x0001090d9ef8();
                  func_0x0001090d9d30();
                  iVar21 = (int)unaff_x22;
                  if (iVar21 == 0) {
                    puVar23 = puVar20;
                    func_0x0001090d9d04();
                    puVar28 = puVar23;
                    func_0x0001090d9d04();
                    unaff_x22 = puVar28;
                    func_0x0001090d9d04();
                    param_3 = unaff_x22;
                    func_0x0001090d9d04();
                    func_0x0001090d9d04();
                    puVar23 = (uint *)((ulong)puVar23 & 0xffffffff);
                    puVar28 = (uint *)((ulong)puVar28 & 0xffffffff);
                    param_3 = (uint *)((ulong)param_3 & 0xffffffff);
                  }
                  else {
                    uVar5 = iVar21 != 0;
                    if (iVar21 != 1) {
                      func_0x0001090d9d0c();
                      func_0x0001090da000(auStack_7d0);
                      func_0x0001090d9c14();
                      goto LAB_1090d796c;
                    }
                    puVar23 = puVar20;
                    func_0x0001090d9dcc();
                    puVar28 = puVar23;
                    func_0x0001090d9dcc();
                    unaff_x22 = puVar28;
                    func_0x0001090d9d04();
                    param_3 = unaff_x22;
                    func_0x0001090d9d04();
                    func_0x0001090d9dcc();
                  }
                  puVar12 = auStack_7b8;
                  FUN_1090da74c(puVar12,0x10);
                  uVar26 = SUB84(puVar12,0);
                  uVar30 = func_0x0001090d9dac();
                  uVar31 = func_0x0001090d9dac();
                  uVar32 = func_0x0001090d9dac();
                  uVar33 = func_0x0001090d9dac();
                  uVar34 = func_0x0001090d9dac();
                  uVar35 = func_0x0001090d9dac();
                  uVar36 = func_0x0001090d9dac();
                  uVar37 = func_0x0001090d9dac();
                  uVar38 = func_0x0001090d9dac();
                  func_0x0001090d9d04();
                  uVar8 = uVar26;
                  func_0x0001090d9d04();
                  uStack_a48 = CONCAT44(uStack_a48._4_4_,(int)puVar20);
                  uStack_a30 = (uint *)CONCAT44(uStack_a30._4_4_,(int)unaff_x22);
                  uStack_a20 = (uint *)CONCAT44(uVar31,uVar30);
                  uStack_a18 = (uint *)CONCAT44(uVar33,uVar32);
                  uStack_a08 = CONCAT44(uVar37,uVar36);
                  uStack_a00 = (uint *)CONCAT44(uVar26,uVar38);
                  puStack_9f8 = (uint *)CONCAT44(puStack_9f8._4_4_,uVar8);
                  puStack_a40 = puVar23;
                  uStack_a38 = puVar28;
                  puStack_a28 = param_3;
                  uStack_a10 = uVar34;
                  uStack_a0c = uVar35;
                  if ((bStack_9f0 & 1) == 0) {
                    bStack_9f0 = 1;
                  }
                }
              }
              func_0x0001090d9da4(auStack_7d0);
            }
            param_3 = *(uint **)(param_1 + 0x18);
            uVar5 = *(uint **)(param_1 + 0x20) <= param_3;
            if ((bool)uVar5) {
              puVar20 = *(uint **)(param_1 + 0x10);
              lVar41 = (long)param_3 - (long)puVar20;
              if (0x67b23a5440cf64 < lVar41 / 0x278 + 1U) {
                FUN_1090d9164();
                goto LAB_1090d796c;
              }
              func_0x0001090da0b4((long)*(uint **)(param_1 + 0x20) - (long)puVar20);
              uVar29 = extraout_x9;
              if (0x33d91d2a2067b1 < extraout_x8_16) {
                uVar29 = extraout_x11;
              }
              if (uVar29 == 0) {
                lVar42 = 0;
              }
              else {
                if (extraout_x11 < uVar29) {
                  func_0x000104bd35f4();
                  goto LAB_1090d796c;
                }
                lVar42 = uVar29 * extraout_x12;
                __Znwm();
              }
              lVar13 = lVar42 + lVar41;
              func_0x0001090d8e80(lVar13,&uStack_a48);
              lVar17 = lVar13 + (lVar41 / -0x278) * 0x278;
              lVar41 = lVar17;
              for (unaff_x22 = puVar20; unaff_x22 != param_3; unaff_x22 = unaff_x22 + 0x9e) {
                func_0x0001090d8e80(lVar41,unaff_x22);
                lVar41 = lVar41 + 0x278;
              }
              for (; uVar5 = param_3 <= puVar20, puVar20 != param_3; puVar20 = puVar20 + 0x9e) {
                func_0x0001090d8b74(puVar20);
              }
              param_3 = (uint *)(lVar13 + 0x278);
              lVar41 = *(long *)(param_1 + 0x10);
              *(long *)(param_1 + 0x10) = lVar17;
              *(uint **)(param_1 + 0x18) = param_3;
              *(ulong *)(param_1 + 0x20) = lVar42 + uVar29 * 0x278;
              if (lVar41 != 0) {
                __ZdlPv();
              }
            }
            else {
              func_0x0001090d8e80(param_3,&uStack_a48);
              param_3 = param_3 + 0x9e;
            }
            *(uint **)(param_1 + 0x18) = param_3;
            func_0x0001090da028();
          }
        }
        FUN_1090d886c(auStack_a80);
      }
    }
  }
  return;
LAB_1090d68cc:
  uVar5 = cStack_3b0 != '\0';
  uVar7 = cStack_3b0 == '\x01';
  if ((bool)uVar7) {
    func_0x0001090d9358();
  }
  else {
    func_0x0001090d8fb4(&uStack_520,&uStack_338);
  }
  FUN_1090d8c1c(&uStack_338);
LAB_1090d68f4:
  func_0x0001090d9da4(auStack_3a0);
  uVar4 = uVar7;
  goto LAB_1090d5ee4;
}



/* Entry: 1090d7d14; end: 1090d7d4b;  */

long FUN_1090d7d14(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x240) == '\x01') {
    lVar1 = param_1 + 200;
    if ((*(byte *)(param_1 + 0x238) & *(byte *)(param_1 + 0x230) & *(byte *)(param_1 + 0xe0) & 1) ==
        0) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return 0;
}



/* Entry: 1090d7d4c; end: 1090d7e5b;  */

void FUN_1090d7d4c(undefined8 *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 in_CY;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_28;
  
  func_0x0001090d9f7c();
  if (((((bool)in_CY) ||
       (plVar6 = (long *)(extraout_x8 + param_3 * 0x278), (*(byte *)(plVar6 + 0xb) & 1) == 0)) ||
      ((*(byte *)(plVar6 + 0x48) & 1) == 0)) ||
     ((((*(byte *)(plVar6 + 0x12) & 1) == 0 || ((*(byte *)(plVar6 + 0x17) & 1) == 0)) ||
      ((*(byte *)(param_2 + 0x68) & 1) == 0)))) {
    func_0x0001090d9f08();
    *param_1 = 2;
    param_1[1] = uStack_28;
    func_0x0001090d9d48();
  }
  else {
    plVar3 = plVar6;
    FUN_1090d7d14();
    lVar7 = plVar6[3];
    lVar2 = plVar6[0xf];
    lVar4 = plVar6[0x10];
    uVar1 = *(undefined4 *)((long)plVar6 + 0x9c);
    if (plVar3 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined4)((plVar3[1] - *plVar3) / 0x30);
    }
    *param_1 = 1;
    *(int *)(param_1 + 1) = (int)lVar7;
    *(int *)((long)param_1 + 0xc) = (int)lVar2;
    param_1[2] = lVar4;
    *(undefined4 *)(param_1 + 3) = uVar1;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar5;
    lVar7 = plVar6[5];
    param_1[5] = *(undefined8 *)((long)plVar6 + 0x34);
    param_1[4] = lVar7;
    param_1[6] = plVar6[8];
  }
  return;
}



/* Entry: 1090d7e5c; end: 1090d84d7;  */

void FUN_1090d7e5c(undefined8 *param_1,undefined8 param_2,long param_3,uint *param_4)

{
  uint uVar1;
  undefined1 in_CY;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint **ppuVar7;
  uint **ppuVar8;
  undefined1 *puVar9;
  uint *puVar10;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 uVar11;
  int extraout_w11;
  uint *unaff_x20;
  uint uVar12;
  uint **unaff_x21;
  uint **ppuVar13;
  uint **unaff_x22;
  uint uVar14;
  uint **ppuVar15;
  undefined4 uVar16;
  ulong uStack_4b8;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  uint uStack_460;
  undefined2 uStack_45c;
  undefined2 uStack_45a;
  uint auStack_458 [2];
  uint auStack_450 [36];
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined2 uStack_3a4;
  undefined2 uStack_3a2;
  undefined2 uStack_3a0;
  undefined1 uStack_39e;
  uint *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  uint auStack_380 [8];
  undefined1 auStack_360 [56];
  uint *puStack_328;
  undefined8 uStack_320;
  undefined1 auStack_310 [56];
  undefined1 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [128];
  uint uStack_240;
  undefined1 auStack_228 [8];
  long lStack_220;
  long lStack_218;
  undefined4 *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 auStack_140 [25];
  undefined4 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001090d9f7c();
  if ((bool)in_CY) {
    func_0x0001090d9fc4();
  }
  else {
    unaff_x21 = (uint **)(extraout_x8 + param_3 * 0x278);
    ppuVar13 = unaff_x21;
    FUN_1090d7d14();
    unaff_x20 = param_4;
    if (((param_4 == (uint *)0x0) || (ppuVar13 == (uint **)0x0)) ||
       ((uint *)(((long)ppuVar13[1] - (long)*ppuVar13) / 0x30) < param_4)) {
      func_0x0001090d9fc4();
    }
    else {
      if ((*(char *)(unaff_x21 + 0x48) == '\x01') && (((ulong)unaff_x21[0x17] & 1) != 0)) {
        unaff_x22 = (uint **)(*ppuVar13 + (long)param_4 * 0xc);
        uVar1 = *(uint *)((long)unaff_x21 + 0x9c);
        unaff_x20 = unaff_x22[-1];
        unaff_x21 = (uint **)unaff_x22[-3];
        puStack_398 = auStack_380;
        uStack_388 = 8;
        uStack_390 = 1;
        auStack_380[0] = uVar1;
        FUN_1090da27c(auStack_360,&puStack_398);
        FUN_1090da688(&puStack_328,unaff_x20,unaff_x21,auStack_360);
        FUN_1090d886c(auStack_360);
        ppuVar13 = &puStack_398;
        FUN_1090d886c();
        if (uVar1 == 0x736f756e) {
          uVar1 = *(uint *)(unaff_x22 + -6);
          unaff_x22 = (uint **)(ulong)uVar1;
          func_0x0001090da074();
          func_0x0001090d9d94();
          func_0x0001090d9d94();
          ppuVar8 = ppuVar13;
          func_0x0001090d9d94();
          func_0x0001090d9dc4();
          func_0x0001090d9d94();
          uVar4 = SUB82(ppuVar8,0);
          func_0x0001090d9d94();
          uVar14 = (uint)((ulong)ppuVar8 >> 0x10);
          func_0x0001090d9d94();
          func_0x0001090d9d94();
          func_0x0001090d9dc4();
          uVar12 = (uint)ppuVar13;
          uVar2 = 1 < uVar12;
          if (uVar12 == 2) {
            func_0x0001090d9d78();
            ppuVar13 = &puStack_328;
            func_0x0001090da7f8();
            ppuVar8 = ppuVar13;
            func_0x0001090d9dc4();
            uVar4 = SUB82(ppuVar8,0);
            func_0x0001090d9d78();
            func_0x0001090d9dc4();
            func_0x0001090d9dc4();
            func_0x0001090d9d78();
            func_0x0001090d9d78();
            uVar14 = (uint)(double)ppuVar13;
          }
          else {
            uVar14 = uVar14 & 0xffff;
            uVar2 = uVar12 != 0;
            if (uVar12 == 1) {
              func_0x0001090d9dc4();
              func_0x0001090d9dc4();
              func_0x0001090d9dc4();
              func_0x0001090d9dc4();
            }
          }
          puStack_2d8 = auStack_2c0;
          uStack_2c8 = 0x80;
          uStack_2d0 = 0;
          while (func_0x0001090d9de4(uStack_320), (bool)uVar2) {
            func_0x0001090da054();
            uVar2 = 0x65736472 < uStack_240;
            if (uStack_240 == 0x65736473) {
              FUN_1090da730(auStack_228);
              func_0x0001090da7a8(auStack_228);
              ppuVar13 = (uint **)(lStack_220 - lStack_218);
              puVar9 = auStack_228;
              FUN_1090da74c(puVar9,ppuVar13);
              FUN_1090d35c0(&puStack_1d8,puVar9,ppuVar13);
              func_0x0001090d9d64();
              func_0x0001090d9db4();
            }
            func_0x0001090da04c();
          }
          func_0x0001090da040();
          uStack_460 = uVar1;
          uStack_45c = uVar4;
          auStack_458[0] = uVar14;
          FUN_1090d37ac(auStack_450,&puStack_1d8);
          func_0x0001090d9db4();
          FUN_1090d375c(&puStack_2d8);
          FUN_1090d39dc(auStack_140,&uStack_460);
          func_0x0001090d9e50();
          func_0x0001090d9fcc();
          puVar10 = auStack_450;
        }
        else {
          uVar2 = 0x76696464 < uVar1;
          if (uVar1 != 0x76696465) {
            uStack_78 = 2;
            func_0x0001090d9e50();
            func_0x0001090d9fcc();
            goto LAB_1090d83d0;
          }
          uVar1 = *(uint *)(unaff_x22 + -6);
          func_0x0001090da074();
          func_0x0001090d9d94();
          ppuVar13 = &puStack_328;
          FUN_1090da74c(ppuVar13,0x10);
          uVar3 = SUB82(ppuVar13,0);
          func_0x0001090d9d94();
          uVar4 = uVar3;
          func_0x0001090d9d94();
          FUN_1090da74c(&puStack_328,0xe);
          FUN_1090da730(&puStack_328);
          FUN_1090da74c(&puStack_328,0x1f);
          func_0x0001090d9d94();
          ppuVar8 = &puStack_328;
          FUN_1090da74c(ppuVar8,2);
          uStack_470 = 0;
          uStack_468 = 0;
          unaff_x22 = (uint **)0x0;
          ppuVar15 = (uint **)0x0;
          uVar16 = 0;
          uStack_480 = 0;
          uStack_478 = 0;
          puStack_2d8 = auStack_2c0;
          uStack_2c8 = 0x80;
          uStack_2d0 = 0;
          ppuVar13 = (uint **)0x61766343;
          while( true ) {
            func_0x0001090d9de4(uStack_320);
            if (!(bool)uVar2) break;
            func_0x0001090da054();
            uVar2 = 0x61763142 < uStack_240;
            if (uStack_240 == 0x61763143) {
              func_0x0001090d9f50();
              func_0x0001090d9e44();
              func_0x0001090d9e80();
              func_0x0001090d9d64();
              func_0x0001090d9db4();
              uVar16 = 1;
              ppuVar7 = ppuVar8;
            }
            else {
              uVar2 = 0x61766342 < uStack_240;
              if (uStack_240 == 0x61766343) {
                func_0x0001090d9f50();
                func_0x0001090d9e44();
                func_0x0001090d9e80();
                func_0x0001090d9d64();
                func_0x0001090d9db4();
                uStack_468 = CONCAT44(uStack_468._4_4_,1);
                ppuVar7 = ppuVar8;
              }
              else if (uStack_240 == 0x636f6c72) {
                ppuVar7 = &puStack_1d8;
                FUN_1090d88bc(ppuVar7,auStack_228);
                uVar2 = 0;
                if (3 < (ulong)(lStack_1d0 - lStack_1c8)) {
                  ppuVar7 = &puStack_1d8;
                  func_0x0001090da7d8();
                  uVar2 = 0x6e636c77 < (uint)ppuVar7;
                  if (((uint)ppuVar7 == 0x6e636c78) &&
                     (uVar2 = 6 < (ulong)(lStack_1d0 - lStack_1c8), (bool)uVar2)) {
                    func_0x0001090da038();
                    uVar5 = SUB84(ppuVar7,0);
                    uStack_470 = CONCAT44(uStack_470._4_4_,uVar5);
                    func_0x0001090da038();
                    uVar6 = uVar5;
                    func_0x0001090da038();
                    uStack_478 = CONCAT44(uVar5,uVar6);
                    ppuVar7 = &puStack_1d8;
                    FUN_1090da730();
                    uStack_480 = CONCAT44((int)ppuVar7,1);
                  }
                }
                func_0x0001090d9dd4(&puStack_1d8);
              }
              else {
                uVar2 = 0x68766342 < uStack_240;
                if (uStack_240 == 0x68766343) {
                  func_0x0001090d9f50();
                  func_0x0001090d9e44();
                  func_0x0001090d9e80();
                  func_0x0001090d9d64();
                  func_0x0001090d9db4();
                  uStack_470 = CONCAT44(1,(undefined4)uStack_470);
                  ppuVar7 = ppuVar8;
                }
                else {
                  uVar2 = 0x7061736f < uStack_240;
                  ppuVar7 = ppuVar8;
                  if (uStack_240 == 0x70617370) {
                    func_0x0001090d9d1c();
                    ppuVar15 = ppuVar8;
                    func_0x0001090d9d1c();
                    uStack_468 = CONCAT44(1,(undefined4)uStack_468);
                    ppuVar7 = ppuVar15;
                    unaff_x22 = ppuVar8;
                  }
                }
              }
            }
            func_0x0001090d9fe0();
            ppuVar8 = ppuVar7;
          }
          func_0x0001090da040();
          uStack_460 = uVar1;
          uStack_45c = uVar3;
          uStack_45a = uVar4;
          FUN_1090d37ac(auStack_458,&puStack_1d8);
          uStack_3bc = SUB84(unaff_x22,0);
          uStack_3c0 = uStack_468._4_4_;
          uStack_3b8 = SUB84(ppuVar15,0);
          uStack_3b4 = (undefined4)uStack_468;
          uStack_3b0 = uStack_470._4_4_;
          uStack_3a8 = (undefined4)uStack_480;
          uStack_3a4 = (undefined2)uStack_470;
          uStack_3a2 = (undefined2)((ulong)uStack_478 >> 0x20);
          uStack_3a0 = (undefined2)uStack_478;
          uStack_39e = (undefined1)((ulong)uStack_480 >> 0x20);
          uStack_3ac = uVar16;
          func_0x0001090d9db4();
          FUN_1090d375c(&puStack_2d8);
          func_0x0001090d3988(auStack_140,&uStack_460);
          func_0x0001090d9e50();
          func_0x0001090d9fcc();
          puVar10 = auStack_458;
        }
        unaff_x20 = &uStack_460;
        FUN_1090d375c(puVar10);
        unaff_x21 = ppuVar13;
        goto LAB_1090d83d0;
      }
      func_0x0001090d9fc4();
    }
  }
  *param_1 = 2;
  param_1[1] = auStack_140[0];
  auStack_140[0] = 0;
  func_0x000104bda93c(auStack_140);
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001090d9df0();
    FUN_1090d375c(unaff_x20 + 4);
    if ((int)unaff_x21 != 1) break;
    ppuVar13 = unaff_x22;
    ___cxa_begin_catch();
    *param_1 = 2;
    uVar11 = 0;
    if (ppuVar13[1] != (uint *)0x0) {
      do {
        func_0x0001090d9e70();
        uVar11 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    param_1[1] = uVar11;
    ___cxa_end_catch();
LAB_1090d83d0:
    func_0x0001090d9dd4(&puStack_328);
  }
  FUN_1090d886c(auStack_310);
  __Unwind_Resume();
  if (((ulong)unaff_x22[0xd] & 1) == 0) {
    func_0x0001090d9f08();
    func_0x0001090d9d48();
    uVar11 = 2;
  }
  else {
    uStack_4b8 = ((long)unaff_x22[3] - (long)unaff_x22[2]) / 0x278 & 0xffffffffU |
                 (ulong)*(uint *)(unaff_x22 + 0xb) << 0x20;
    uVar11 = 1;
  }
  *extraout_x8_01 = uVar11;
  extraout_x8_01[1] = uStack_4b8;
  return;
}



/* Entry: 1090d84d8; end: 1090d8537;  */

void FUN_1090d84d8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uStack_28;
  
  if ((*(byte *)(param_2 + 0x68) & 1) == 0) {
    func_0x0001090d9f08(param_2,&UNK_10f550318);
    func_0x0001090d9d48();
    uVar1 = 2;
  }
  else {
    uStack_28 = (*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / 0x278 & 0xffffffffU |
                (ulong)*(uint *)(param_2 + 0x58) << 0x20;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  param_1[1] = uStack_28;
  return;
}



/* Entry: 1090d8538; end: 1090d85db;  */

void FUN_1090d8538(void)

{
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [80];
  
  FUN_1090da6d4(auStack_80);
  FUN_1090d85dc(auStack_98,auStack_80);
  func_0x0001090d9f24();
  func_0x0001090da008();
  return;
}



/* Entry: 1090d85dc; end: 1090d8683;  */

void FUN_1090d85dc(undefined4 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = param_2[1];
  lVar3 = param_2[2];
  plVar4 = param_2;
  func_0x0001090da7d8();
  plVar2 = param_2;
  func_0x0001090da7d8();
  if ((int)plVar4 == 0) {
    param_2 = (long *)(lVar1 - lVar3);
  }
  else {
    if ((int)plVar4 == 1) {
      func_0x0001090da7f8();
      plVar4 = (long *)0x10;
      goto LAB_1090d8640;
    }
    param_2 = (long *)((ulong)plVar4 & 0xffffffff);
  }
  plVar4 = (long *)0x8;
LAB_1090d8640:
  if (plVar4 <= param_2) {
    *param_1 = (int)plVar2;
    *(long **)(param_1 + 2) = plVar4;
    *(long *)(param_1 + 4) = (long)param_2 - (long)plVar4;
    return;
  }
  func_0x0001090d9d0c();
  FUN_1090daaa0();
  func_0x0001090d9c14();
  ___cxa_free_exception();
  func_0x0001090d9f10();
  lVar1 = *param_2;
  lVar3 = param_2[1];
  while (lVar3 != lVar1) {
    lVar3 = lVar3 + -0x278;
    func_0x0001090d8b74();
  }
  param_2[1] = lVar1;
  return;
}



/* Entry: 1090d8684; end: 1090d86b7;  */

void FUN_1090d8684(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x278;
    func_0x0001090d8b74();
  }
  param_1[1] = lVar1;
  return;
}



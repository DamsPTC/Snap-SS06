/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082aa3f0; end: 1082aa46f;  */

long FUN_1082aa3f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1 + 0x1d;
  if (*plVar1 == -1) {
    plVar2 = param_1 + 0x1d;
    (**(code **)(*param_1 + 0x48))();
    *plVar2 = (long)param_1;
  }
  return *plVar1;
}



/* Entry: 1082aa470; end: 1082aa507;  */

byte FUN_1082aa470(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x315) & 1) == 0) {
    uVar5 = *(undefined8 *)(*param_1 + 0x80);
    while( true ) {
      plVar2 = param_1 + 10;
      FUN_1082a9bb0();
      if (plVar2 == (long *)0x0) break;
      if ((*(byte *)(param_1 + 0x315) & 1) != 0) goto LAB_1082aa490;
      lVar4 = *plVar2;
      if (*(long *)(lVar4 + 0x10) == 0) {
        if (*(long *)(lVar4 + 0xc0) == 0) {
          lVar3 = plVar2[4];
          FUN_1082a99d8(lVar3,lVar4,uVar5);
          bVar1 = (byte)lVar3;
        }
        else {
          func_0x0001082aae70();
          bVar1 = (byte)plVar2;
        }
        *(byte *)(param_1 + 0x315) = bVar1 ^ 1;
      }
    }
    bVar1 = *(byte *)(param_1 + 0x315) ^ 1;
  }
  else {
LAB_1082aa490:
    bVar1 = 0;
  }
  return bVar1;
}



/* Entry: 1082aa508; end: 1082aa543;  */

void FUN_1082aa508(void)

{
  func_0x0001082aae80();
  FUN_10827a214();
  FUN_1082aa544();
  return;
}



/* Entry: 1082aa544; end: 1082aa5ab;  */

long * FUN_1082aa544(long *param_1,long *param_2)

{
  uint uVar1;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(*param_2 + 4);
    if ((uVar1 & 0xffff) == 0) {
      func_0x000108277498(param_1);
    }
    else {
      func_0x00010827a2cc(param_1,uVar1 >> 0x12);
      _memcpy(*param_1,*param_2,uVar1 >> 0x10);
    }
  }
  return param_1;
}



/* Entry: 1082aa5ac; end: 1082aa5ff;  */

long FUN_1082aa5ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10827a214();
  *(undefined8 *)(lVar1 + 0x28) = 0;
  FUN_1082aa600();
  return param_1;
}



/* Entry: 1082aa600; end: 1082aa647;  */

void FUN_1082aa600(void)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001082aae80();
  FUN_1082aa544();
  piVar3 = *(int **)(unaff_x20 + 0x28);
  if (piVar3 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_108166048(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  return;
}



/* Entry: 1082aa648; end: 1082aa6b3;  */

void FUN_1082aa648(long *param_1)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar1 = param_1 + 1;
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 != 0) {
    return;
  }
  iVar7 = 0;
  if (param_1[0x10] == 0) {
    if ((*(int *)((long)param_1 + 0xc) == 0) && ((int)*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(param_1[0x10] + 0x20) + 0x78);
  func_0x0001082ade30();
  if ((iVar7 == 0) && (func_0x0001082addb4(), iVar5 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar6 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar6;
    lVar6 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar6 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar6 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar6;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar6;
      sVar2 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar2 != 0)) {
          return;
        }
      }
      else {
        if ((sVar2 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar6) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 1082aa6b4; end: 1082aa6ef;  */

undefined8 * FUN_1082aa6b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar3 = param_1;
  func_0x0001081865e0(param_1,0x30,8);
  param_1[1] = puVar3 + 6;
  uVar1 = *(undefined4 *)param_2[1];
  uVar2 = *(undefined4 *)param_2[2];
  *puVar3 = *(undefined8 *)*param_2;
  *(undefined4 *)(puVar3 + 1) = uVar1;
  *(undefined4 *)((long)puVar3 + 0xc) = uVar2;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[4] = 0;
  *(undefined1 *)(puVar3 + 5) = 1;
  return puVar3;
}



/* Entry: 1082aa6f0; end: 1082aa727;  */

undefined8 * FUN_1082aa6f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1[1];
  uVar2 = *(undefined4 *)param_1[2];
  *param_2 = *(undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined4 *)((long)param_2 + 0xc) = uVar2;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 1;
  return param_2;
}



/* Entry: 1082aa728; end: 1082aa77f;  */

void FUN_1082aa728(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = param_1[1];
  uStack_30 = param_2;
  uStack_28 = param_3;
  if (iVar1 * 3 <= *param_1 * 4) {
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = 4;
    }
    FUN_1082aa780(param_1,iVar2);
  }
  FUN_1082aa86c(param_1,&uStack_30);
  return;
}



/* Entry: 1082aa780; end: 1082aa86b;  */

void FUN_1082aa780(undefined8 param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int unaff_w21;
  uint unaff_w22;
  ulong uVar5;
  long lStack_48;
  
  func_0x0001082aae44();
  uVar5 = (ulong)(int)param_2;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar5;
  uVar4 = ((-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) +
          (long)(int)param_2) * 8;
  puVar2 = (undefined8 *)(uVar4 + 0x10);
  if (0xffffffffffffffef < uVar4 || SUB168(auVar1 * ZEXT816(0x18),8) != 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar2 = 0x18;
  puVar2[1] = uVar5;
  if (unaff_w21 != 0) {
    lVar3 = uVar5 * 0x18;
    puVar2 = puVar2 + 2;
    do {
      *(undefined4 *)puVar2 = 0;
      lVar3 = lVar3 + -0x18;
      puVar2 = puVar2 + 3;
    } while (lVar3 != 0);
  }
  func_0x0001082aa8fc();
  for (lVar3 = 0; (ulong)(unaff_w22 & ((int)unaff_w22 >> 0x1f ^ 0xffffffffU)) * 0x18 - lVar3 != 0;
      lVar3 = lVar3 + 0x18) {
    if (*(int *)(lStack_48 + lVar3) != 0) {
      func_0x0001082aa86c();
    }
  }
  func_0x000108293f9c(&lStack_48);
  return;
}



/* Entry: 1082aa86c; end: 1082aa923;  */

int * FUN_1082aa86c(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int extraout_w8;
  int extraout_w9;
  int extraout_w10;
  int iVar2;
  ulong extraout_x11;
  ulong uVar3;
  uint uVar4;
  ulong extraout_x12;
  ulong uVar5;
  int extraout_w13;
  int *piVar6;
  undefined8 uVar7;
  
  func_0x0001082aae9c();
  uVar4 = (uint)extraout_x12;
  uVar3 = extraout_x11;
  uVar5 = extraout_x12;
  while( true ) {
    if (uVar4 == 0) {
      return (int *)0x0;
    }
    iVar2 = (int)uVar3;
    piVar6 = (int *)(*(long *)(param_1 + 2) + (long)iVar2 * (long)extraout_w13);
    if (*piVar6 == 0) break;
    if ((extraout_w9 == *piVar6) && (extraout_w8 == piVar6[2])) {
      *piVar6 = 0;
      uVar7 = *param_2;
      *(undefined8 *)(piVar6 + 4) = param_2[1];
      *(undefined8 *)(piVar6 + 2) = uVar7;
      *piVar6 = extraout_w9;
      return piVar6 + 2;
    }
    iVar1 = 0;
    if (iVar2 < 1) {
      iVar1 = extraout_w10;
    }
    uVar3 = (ulong)((iVar2 + iVar1) - 1);
    uVar4 = (int)uVar5 - 1;
    uVar5 = (ulong)uVar4;
  }
  uVar7 = *param_2;
  *(undefined8 *)(piVar6 + 4) = param_2[1];
  *(undefined8 *)(piVar6 + 2) = uVar7;
  *piVar6 = extraout_w9;
  *param_1 = *param_1 + 1;
  return piVar6 + 2;
}



/* Entry: 1082aa924; end: 1082aa953;  */

long FUN_1082aa924(long param_1)

{
  FUN_10826b5e8(param_1 + -0x19);
  FUN_10827a250(param_1 + -0x41);
  return param_1 + -0x49;
}



/* Entry: 1082aa954; end: 1082aaa27;  */

uint * FUN_1082aa954(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong extraout_x8;
  int *unaff_x19;
  uint *unaff_x20;
  uint *puVar4;
  
  func_0x0001082aae80();
  uVar1 = *(uint *)*param_2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  uVar2 = param_1[1];
  uVar3 = (ulong)uVar2;
  while( true ) {
    if ((int)uVar3 < 1) {
      return param_1;
    }
    puVar4 = (uint *)(*(long *)(unaff_x19 + 2) + (long)(int)(uVar2 - 1 & uVar1) * 0x48);
    if (*puVar4 == 0) break;
    if ((uVar1 == *puVar4) && (param_1 = unaff_x20, FUN_1082a5e3c(), ((ulong)param_1 & 1) != 0)) {
      FUN_108293f6c();
      FUN_1082aa5ac(puVar4 + 2);
      *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(unaff_x20 + 0xe);
      *puVar4 = uVar1;
      return puVar4;
    }
    func_0x0001082aaef4();
    uVar3 = extraout_x8;
  }
  FUN_1082aaa40(puVar4);
  *unaff_x19 = *unaff_x19 + 1;
  return puVar4;
}



/* Entry: 1082aaa28; end: 1082aaa3f;  */

void FUN_1082aaa28(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * -0x48;
      lVar2 = lVar1 + lVar2 * 0x48;
      do {
        lVar2 = lVar2 + -0x48;
        FUN_108293f6c(lVar2);
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 1082aaa40; end: 1082aaa83;  */

undefined4 * FUN_1082aaa40(undefined4 *param_1,long param_2,undefined4 param_3)

{
  FUN_108293f6c();
  FUN_1082aa5ac(param_1 + 2,param_2);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x38);
  *param_1 = param_3;
  return param_1;
}



/* Entry: 1082aaa84; end: 1082aaa9f;  */

void FUN_1082aaa84(void)

{
  FUN_1082aaaa0();
  return;
}



/* Entry: 1082aaaa0; end: 1082aab3b;  */

uint * FUN_1082aaaa0(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong extraout_x8;
  int iVar6;
  uint unaff_w22;
  
  iVar6 = 0;
  lVar3 = param_1;
  func_0x0001082aaed4(*param_2);
  uVar2 = *(uint *)(lVar3 + 4);
  uVar5 = (ulong)uVar2;
  while( true ) {
    if ((int)uVar5 <= iVar6) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 8) + (long)(int)(uVar2 - 1 & unaff_w22) * 0x10);
    if (*puVar1 == 0) break;
    if ((unaff_w22 == *puVar1) &&
       (puVar4 = param_2, FUN_1082a5e3c(param_2,**(long **)(puVar1 + 2) + 8),
       ((ulong)puVar4 & 1) != 0)) {
      return puVar1 + 2;
    }
    func_0x0001082aaf7c();
    iVar6 = iVar6 + 1;
    uVar5 = extraout_x8;
  }
  return (uint *)0x0;
}



/* Entry: 1082aab3c; end: 1082aac0b;  */

void FUN_1082aab3c(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int unaff_w21;
  uint unaff_w22;
  long lStack_38;
  
  func_0x0001082aae44();
  puVar1 = (undefined8 *)((long)param_2 * 0x10 + 0x10);
  if (0xffffffffffffffef < (ulong)((long)param_2 * 0x10) || param_2 < 0) {
    puVar1 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar1 = 0x10;
  puVar1[1] = (long)unaff_w21;
  if (unaff_w21 != 0) {
    lVar2 = (long)unaff_w21 << 4;
    do {
      puVar1 = puVar1 + 2;
      *(undefined4 *)puVar1 = 0;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  FUN_108294194();
  for (lVar2 = 0; (ulong)(unaff_w22 & ((int)unaff_w22 >> 0x1f ^ 0xffffffffU)) << 4 != lVar2;
      lVar2 = lVar2 + 0x10) {
    if (*(int *)(lStack_38 + lVar2) != 0) {
      FUN_1082aac0c();
    }
  }
  FUN_1082941dc(&lStack_38);
  return;
}



/* Entry: 1082aac0c; end: 1082aacc3;  */

void FUN_1082aac0c(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong extraout_x8;
  int *unaff_x19;
  undefined8 *puVar6;
  uint unaff_w22;
  
  func_0x0001082aae80();
  puVar6 = (undefined8 *)(*(long *)*param_2 + 8);
  func_0x0001082aaed4(*puVar6);
  uVar2 = *(uint *)(param_1 + 4);
  uVar5 = (ulong)uVar2;
  while( true ) {
    if ((int)uVar5 < 1) {
      return;
    }
    puVar1 = (uint *)(*(long *)(unaff_x19 + 2) + (long)(int)(uVar2 - 1 & unaff_w22) * 0x10);
    uVar3 = *puVar1;
    if (uVar3 == 0) break;
    if ((unaff_w22 == uVar3) &&
       (puVar4 = puVar6, FUN_1082a5e3c(puVar6,**(long **)(puVar1 + 2) + 8), ((ulong)puVar4 & 1) != 0
       )) {
      func_0x0001082aaf54();
      return;
    }
    func_0x0001082aaef4();
    uVar5 = extraout_x8;
  }
  func_0x0001082aaf54();
  *unaff_x19 = *unaff_x19 + 1;
  return;
}



/* Entry: 1082aacc4; end: 1082aae23;  */

void FUN_1082aacc4(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_28;
  
  iVar1 = param_1[1];
  uStack_28 = param_2;
  if (iVar1 * 3 <= *param_1 * 4) {
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = 4;
    }
    FUN_1082aab3c(param_1,iVar2);
  }
  FUN_1082aac0c(param_1,&uStack_28);
  return;
}



/* Entry: 1082aae24; end: 1082aaf8f;  */

void FUN_1082aae24(void)

{
  return;
}



/* Entry: 1082aaf90; end: 1082ab06f;  */

undefined8 FUN_1082aaf90(int param_1)

{
  undefined8 uVar1;
  
  if ((cRam0000000113826bb0 == '\0') && (func_0x0001082ade50(), param_1 != 0)) {
    uVar1 = 0x28;
    __Znwm();
    func_0x0001082adf68();
    cRam0000000113826bb0 = '\x02';
    uRam0000000113826bb8 = uVar1;
  }
  else {
    do {
    } while (cRam0000000113826bb0 != '\x02');
  }
  return uRam0000000113826bb8;
}



/* Entry: 1082ab070; end: 1082ab08b;  */

bool FUN_1082ab070(long *param_1,long *param_2)

{
  return *(uint *)(*param_1 + 0x14) < *(uint *)(*param_2 + 0x14);
}



/* Entry: 1082ab08c; end: 1082ab15f;  */

undefined8 *
FUN_1082ab08c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_1 + 3) = 8;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0x10000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_1082ac344(param_1 + 0x13,param_4);
  FUN_1082ab160(param_1 + 0x18,param_3);
  *(undefined4 *)(param_1 + 0x1d) = param_3;
  *(int *)((long)param_1 + 0xec) = (int)param_4;
  param_1[0x1e] = param_2;
  return param_1;
}



/* Entry: 1082ab160; end: 1082ab16f;  */

undefined8 * FUN_1082ab160(undefined8 *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  puVar2 = param_1;
  func_0x0001082adf4c(0x100000000);
  *(undefined4 *)(puVar2 + 4) = param_2;
  func_0x0001082ab000();
  func_0x0001082ae0c8();
  func_0x0001081efc58();
  func_0x00010840f37c(puVar2);
  if (*(int *)((long)puVar2 + 0x14) != 0) {
    *(undefined8 **)(puVar2[1] + (long)*(int *)((long)puVar2 + 0x14) * 8 + -8) = param_1;
    func_0x0001082ade3c();
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ac490);
  (*pcVar1)();
}



/* Entry: 1082ab170; end: 1082ab1c3;  */

long FUN_1082ab170(long param_1)

{
  FUN_1082ab1c4();
  FUN_1082ac728(param_1 + 0xc0);
  FUN_1082ac6b0(param_1 + 0x98);
  FUN_1082ac2a8(param_1 + 0x68);
  FUN_1082ac4bc(param_1 + 0x48);
  FUN_10840f118(param_1 + 0x30);
  FUN_10840f118(param_1 + 0x18);
  return param_1;
}



/* Entry: 1082ab1c4; end: 1082ab22f;  */

void FUN_1082ab1c4(undefined8 *param_1)

{
  code *pcVar1;
  
  FUN_1082b467c(param_1[1]);
  FUN_1082ab99c(param_1);
  FUN_1082a5cc8(*param_1);
  while (*(int *)((long)param_1 + 0x44) != 0) {
    func_0x0001082ade90(*(undefined8 *)(param_1[7] + (long)*(int *)((long)param_1 + 0x44) * 8 + -8))
    ;
  }
  while( true ) {
    if (*(int *)((long)param_1 + 0x2c) == 0) {
      return;
    }
    if (*(int *)((long)param_1 + 0x2c) < 1) break;
    func_0x0001082ae0d4();
    func_0x0001082ade90();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ab230);
  (*pcVar1)();
}



/* Entry: 1082ab230; end: 1082ab47f;  */

void FUN_1082ab230(undefined8 *param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  int iStack_38;
  uint uStack_34;
  
  uStack_58 = 0;
  uStack_50 = 0x100000000;
  func_0x0001082ad138(&uStack_58);
  puStack_48 = param_1 + 0x15;
  func_0x0001081efc58();
  puVar1 = param_1 + 0x13;
  if (puVar1 != &uStack_58) {
    uVar2 = *(uint *)((long)param_1 + 0xa4);
    iVar4 = (int)uStack_50;
    if (((uVar2 & 1) == 0) || ((uStack_50 & 0x100000000) == 0)) {
      if ((uStack_50 & 0x100000000) == 0) {
        uVar6 = uStack_50 & 0xffffffff;
        FUN_1082ad234(0x3ff0000000000000);
        param_2 = param_2 >> 6;
        if (0x7ffffffe < param_2) {
          param_2 = 0x7fffffff;
        }
        uStack_34 = (int)param_2 << 1 | 1;
        uStack_40 = uVar6;
        FUN_1082ad1d8(&uStack_58,uVar6);
        iVar4 = (int)uStack_50;
      }
      else {
        uStack_40 = uStack_58;
        uStack_34 = (int)uStack_50 << 1 | 1;
        uStack_58 = 0;
        uStack_50 = 0x100000000;
      }
      uStack_50 = uStack_50 & 0xffffffff00000000;
      iStack_38 = iVar4;
      func_0x0001082ad158(&uStack_58,puVar1);
      func_0x0001082ad158(puVar1,&uStack_40);
      FUN_1082ad0d0(&uStack_40);
    }
    else {
      uVar6 = param_1[0x13];
      param_1[0x13] = uStack_58;
      uVar3 = *(undefined4 *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = (int)uStack_50;
      *(undefined4 *)((long)param_1 + 0xa4) = uStack_50._4_4_;
      uStack_50 = CONCAT44(uVar2,uVar3);
      uStack_58 = uVar6;
    }
  }
  FUN_1081efc78(&puStack_48);
  if ((int)uStack_50 != 0) {
    lVar7 = 0;
    for (lVar8 = 0; lVar8 < (int)uStack_50; lVar8 = lVar8 + 1) {
      if (*(char *)(uStack_58 + lVar7 + 0x3c) == '\x01') {
        FUN_1082b4d3c(param_1[1]);
      }
      else {
        FUN_1082a4ad0(*param_1,uStack_58 + lVar7,0,1);
      }
      lVar7 = lVar7 + 0x40;
    }
  }
  FUN_1082ab99c(param_1);
  while ((ulong)param_1[0xe] < (ulong)param_1[0x11]) {
    if (*(int *)((long)param_1 + 0x2c) == 0) {
      FUN_1082b4710(param_1[1],param_1);
      goto LAB_1082ab3ec;
    }
    if (*(int *)((long)param_1 + 0x2c) < 1) goto LAB_1082ab43c;
    func_0x0001082ae0d4();
    uStack_40 = extraout_x8;
    FUN_1082ab9e0(&uStack_40);
  }
LAB_1082ab420:
  FUN_1082ad0d0(&uStack_58);
  return;
LAB_1082ab3ec:
  if ((ulong)param_1[0x11] <= (ulong)param_1[0xe]) goto LAB_1082ab420;
  if (*(int *)((long)param_1 + 0x2c) == 0) goto LAB_1082ab420;
  if (*(int *)((long)param_1 + 0x2c) < 1) {
LAB_1082ab43c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1082ab440);
    (*pcVar5)();
  }
  func_0x0001082ae0d4();
  uStack_40 = extraout_x8_00;
  FUN_1082ab9e0(&uStack_40);
  goto LAB_1082ab3ec;
}



/* Entry: 1082ab480; end: 1082ab4d7;  */

void FUN_1082ab480(undefined4 param_1)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  ulong uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar7;
  undefined8 *unaff_x19;
  long lVar8;
  ulong unaff_x20;
  long lVar9;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  int iStack_38;
  uint uStack_34;
  
  func_0x0001082ade44();
  FUN_1082ab4d8();
  *(undefined4 *)(unaff_x20 + 0x14) = param_1;
  uVar7 = unaff_x20;
  FUN_1082ab6d0();
  uVar6 = unaff_x20;
  FUN_1082a07f8();
  unaff_x19[0xf] = unaff_x19[0xf] + uVar6;
  if (*(char *)(unaff_x20 + 0x90) == '\0') {
    func_0x0001082ae038(*(undefined4 *)(unaff_x19 + 0x10));
  }
  uStack_58 = 0;
  uStack_50 = 0x100000000;
  func_0x0001082ad138(&uStack_58);
  puStack_48 = unaff_x19 + 0x15;
  func_0x0001081efc58();
  puVar1 = unaff_x19 + 0x13;
  if (puVar1 != &uStack_58) {
    uVar2 = *(uint *)((long)unaff_x19 + 0xa4);
    iVar4 = (int)uStack_50;
    if (((uVar2 & 1) == 0) || ((uStack_50 & 0x100000000) == 0)) {
      if ((uStack_50 & 0x100000000) == 0) {
        uVar6 = uStack_50 & 0xffffffff;
        FUN_1082ad234(0x3ff0000000000000);
        uVar7 = uVar7 >> 6;
        if (0x7ffffffe < uVar7) {
          uVar7 = 0x7fffffff;
        }
        uStack_34 = (int)uVar7 << 1 | 1;
        uStack_40 = uVar6;
        FUN_1082ad1d8(&uStack_58,uVar6);
        iVar4 = (int)uStack_50;
      }
      else {
        uStack_40 = uStack_58;
        uStack_34 = (int)uStack_50 << 1 | 1;
        uStack_58 = 0;
        uStack_50 = 0x100000000;
      }
      uStack_50 = uStack_50 & 0xffffffff00000000;
      iStack_38 = iVar4;
      func_0x0001082ad158(&uStack_58,puVar1);
      func_0x0001082ad158(puVar1,&uStack_40);
      FUN_1082ad0d0(&uStack_40);
    }
    else {
      uVar7 = unaff_x19[0x13];
      unaff_x19[0x13] = uStack_58;
      uVar3 = *(undefined4 *)(unaff_x19 + 0x14);
      *(int *)(unaff_x19 + 0x14) = (int)uStack_50;
      *(undefined4 *)((long)unaff_x19 + 0xa4) = uStack_50._4_4_;
      uStack_50 = CONCAT44(uVar2,uVar3);
      uStack_58 = uVar7;
    }
  }
  FUN_1081efc78(&puStack_48);
  if ((int)uStack_50 != 0) {
    lVar8 = 0;
    for (lVar9 = 0; lVar9 < (int)uStack_50; lVar9 = lVar9 + 1) {
      if (*(char *)(uStack_58 + lVar8 + 0x3c) == '\x01') {
        FUN_1082b4d3c(unaff_x19[1]);
      }
      else {
        FUN_1082a4ad0(*unaff_x19,uStack_58 + lVar8,0,1);
      }
      lVar8 = lVar8 + 0x40;
    }
  }
  FUN_1082ab99c();
  while ((ulong)unaff_x19[0xe] < (ulong)unaff_x19[0x11]) {
    if (*(int *)((long)unaff_x19 + 0x2c) == 0) {
      FUN_1082b4710(unaff_x19[1]);
      goto LAB_1082ab3ec;
    }
    if (*(int *)((long)unaff_x19 + 0x2c) < 1) goto LAB_1082ab43c;
    func_0x0001082ae0d4();
    uStack_40 = extraout_x8;
    FUN_1082ab9e0(&uStack_40);
  }
LAB_1082ab420:
  FUN_1082ad0d0(&uStack_58);
  return;
LAB_1082ab3ec:
  if ((ulong)unaff_x19[0x11] <= (ulong)unaff_x19[0xe]) goto LAB_1082ab420;
  if (*(int *)((long)unaff_x19 + 0x2c) == 0) goto LAB_1082ab420;
  if (*(int *)((long)unaff_x19 + 0x2c) < 1) {
LAB_1082ab43c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1082ab440);
    (*pcVar5)();
  }
  func_0x0001082ae0d4();
  uStack_40 = extraout_x8_00;
  FUN_1082ab9e0(&uStack_40);
  goto LAB_1082ab3ec;
}



/* Entry: 1082ab4d8; end: 1082ab6cf;  */

void FUN_1082ab4d8(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  ulong extraout_x8_00;
  long lVar7;
  long extraout_x9;
  ulong uVar8;
  ulong extraout_x9_00;
  long extraout_x10;
  ulong uVar9;
  ulong extraout_x10_00;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_38;
  long lStack_30;
  int iStack_24;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x2c) == 0) {
      iVar4 = 0;
    }
    else {
      func_0x0001082adfb0();
      puVar3 = &uStack_38;
      func_0x00010840f1a4();
      while (*(int *)(param_1 + 0x2c) != 0) {
        if (*(int *)(param_1 + 0x2c) < 1) goto LAB_1082ab6bc;
        uVar12 = **(undefined8 **)(param_1 + 0x20);
        func_0x0001082ae08c();
        *puVar3 = uVar12;
        uVar1 = *(uint *)(param_1 + 0x2c);
        if (uVar1 == 1) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
        else {
          if ((int)uVar1 < 1) goto LAB_1082ab6bc;
          lVar5 = (*(long **)(param_1 + 0x20))[(ulong)uVar1 - 1];
          **(long **)(param_1 + 0x20) = lVar5;
          *(undefined4 *)(lVar5 + 0x10) = 0;
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
          puVar3 = (undefined8 *)(param_1 + 0x18);
          func_0x0001082ac8b0(puVar3,0);
        }
      }
      if (1 < *(int *)(param_1 + 0x44)) {
        FUN_1082adb38((int)LZCOUNT(*(int *)(param_1 + 0x44) + -2) * -2 + 0x40,
                      *(undefined8 *)(param_1 + 0x38));
      }
      lVar5 = 0;
      uVar6 = 0;
      lVar7 = lStack_30;
      while (((int)lVar5 < iStack_24 && (iVar4 = (int)uVar6, iVar4 < *(int *)(param_1 + 0x44)))) {
        lVar11 = *(long *)(lVar7 + lVar5 * 8);
        lVar10 = *(long *)(*(long *)(param_1 + 0x38) + uVar6 * 8);
        if (*(uint *)(lVar11 + 0x14) < *(uint *)(lVar10 + 0x14)) {
          lVar5 = lVar5 + 1;
          iVar4 = *(int *)(param_1 + 0x10);
          *(int *)(param_1 + 0x10) = iVar4 + 1;
          *(int *)(lVar11 + 0x14) = iVar4;
          uVar6 = uVar6 & 0xffffffff;
        }
        else {
          *(int *)(lVar10 + 0x10) = iVar4;
          if (*(int *)(param_1 + 0x44) <= iVar4) goto LAB_1082ab6bc;
          func_0x0001082ae0b4();
          uVar6 = extraout_x8 + 1;
          lVar7 = extraout_x9;
          lVar5 = extraout_x10;
        }
      }
      for (; (int)lVar5 < iStack_24; lVar5 = lVar5 + 1) {
        lVar10 = *(long *)(lVar7 + lVar5 * 8);
        iVar4 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = iVar4 + 1;
        *(int *)(lVar10 + 0x14) = iVar4;
      }
      uVar9 = (ulong)*(uint *)(param_1 + 0x44);
      uVar8 = uVar6;
      while (iVar4 = (int)uVar8, iVar4 < (int)uVar9) {
        if (((int)uVar6 < 0) ||
           (*(int *)(*(long *)(*(long *)(param_1 + 0x38) + uVar8 * 8) + 0x10) = iVar4,
           *(int *)(param_1 + 0x44) <= iVar4)) {
LAB_1082ab6bc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1082ab6c0);
          (*pcVar2)();
        }
        func_0x0001082ae0b4();
        uVar6 = extraout_x8_00;
        uVar8 = extraout_x9_00;
        uVar9 = extraout_x10_00;
      }
      lVar5 = 0;
      while( true ) {
        if (iStack_24 <= lVar5) break;
        FUN_1082abdf4(param_1 + 0x18,*(undefined8 *)(lStack_30 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      }
      _free();
      iVar4 = *(int *)(param_1 + 0x10);
    }
  }
  *(int *)(param_1 + 0x10) = iVar4 + 1;
  return;
}



/* Entry: 1082ab6d0; end: 1082ab6fb;  */

void FUN_1082ab6d0(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  plVar2 = (long *)(param_1 + 0x30);
  func_0x0001082ac08c();
  *plVar2 = param_2;
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  return;
}



/* Entry: 1082ab6fc; end: 1082ab79f;  */

void FUN_1082ab6fc(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001082ade30();
  FUN_1082a07f8();
  lVar2 = unaff_x19;
  FUN_1082a0834();
  iVar1 = (int)lVar2;
  if (iVar1 == 0) {
    func_0x0001082adf18();
    FUN_1082ab814();
  }
  else {
    func_0x0001082ae05c();
    *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) - param_2;
  }
  *(long *)(unaff_x20 + 0x78) = *(long *)(unaff_x20 + 0x78) - param_2;
  if (*(char *)(unaff_x19 + 0x90) == '\0') {
    *(int *)(unaff_x20 + 0x80) = *(int *)(unaff_x20 + 0x80) + -1;
    *(long *)(unaff_x20 + 0x88) = *(long *)(unaff_x20 + 0x88) - param_2;
  }
  func_0x0001082addb4();
  if (iVar1 != 0) {
    func_0x0001082addc0();
  }
  if (*(short *)(*(long *)(unaff_x19 + 0x48) + 4) != 0) {
    FUN_1082acd64(unaff_x20 + 0x60,(long *)(unaff_x19 + 0x48));
  }
  return;
}



/* Entry: 1082ab7a0; end: 1082ab813;  */

void FUN_1082ab7a0(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar9 = (ulong)uVar1;
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar4 = uVar2 - 1;
  if (uVar1 == uVar4) {
    *(uint *)(param_1 + 0x14) = uVar1;
  }
  else {
    if (((int)uVar2 < 1) || (uVar2 <= uVar1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1082ab814);
      (*pcVar5)();
    }
    *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) =
         *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar4 * 8);
    *(uint *)(param_1 + 0x14) = uVar4;
    FUN_1082ac7a0(param_1,uVar9);
    uVar11 = param_1;
    FUN_1082ac7fc();
    if ((uVar11 & 1) == 0) {
      do {
        iVar10 = (int)uVar9;
        uVar1 = iVar10 << 1 | 1;
        uVar11 = (ulong)uVar1;
        iVar3 = *(int *)(param_1 + 0x14);
        if (iVar3 <= (int)uVar1) {
code_r0x0001082ac7a0:
          if ((-1 < iVar10) && (iVar10 < *(int *)(param_1 + 0x14))) {
            *(int *)(*(long *)(*(long *)(param_1 + 8) + uVar9 * 8) + 0x10) = iVar10;
            return;
          }
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1082ac7c4);
          (*pcVar5)();
        }
        uVar2 = iVar10 * 2 + 2;
        if ((int)uVar2 < iVar3) {
          if ((iVar10 < -1) || (iVar10 < 0)) goto LAB_1082ac9a8;
          lVar7 = *(long *)(param_1 + 8);
          if (*(uint *)(*(long *)(lVar7 + uVar11 * 8) + 0x14) <=
              *(uint *)(*(long *)(lVar7 + (ulong)uVar2 * 8) + 0x14)) {
            uVar2 = uVar1;
          }
          uVar11 = (ulong)uVar2;
        }
        else {
          if ((iVar10 < 0) || (iVar3 <= iVar10)) goto LAB_1082ac9a8;
          lVar7 = *(long *)(param_1 + 8);
          lVar6 = *(long *)(lVar7 + uVar11 * 8);
          lVar8 = *(long *)(lVar7 + uVar9 * 8);
          if (*(uint *)(lVar6 + 0x14) < *(uint *)(lVar8 + 0x14)) {
            *(long *)(lVar7 + uVar11 * 8) = lVar8;
            *(long *)(lVar7 + uVar9 * 8) = lVar6;
            FUN_1082ac7a0(param_1,uVar11);
            goto code_r0x0001082ac7a0;
          }
        }
        if ((iVar3 <= (int)uVar11) || (iVar3 <= iVar10)) {
LAB_1082ac9a8:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1082ac9ac);
          (*pcVar5)();
        }
        lVar6 = *(long *)(lVar7 + uVar11 * 8);
        lVar8 = *(long *)(lVar7 + uVar9 * 8);
        if (*(uint *)(lVar8 + 0x14) <= *(uint *)(lVar6 + 0x14)) goto code_r0x0001082ac7a0;
        *(long *)(lVar7 + uVar11 * 8) = lVar8;
        *(long *)(lVar7 + uVar9 * 8) = lVar6;
        func_0x0001082ae080();
        uVar9 = uVar11;
      } while( true );
    }
  }
  return;
}



/* Entry: 1082ab814; end: 1082ab853;  */

void FUN_1082ab814(long param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x44))) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x44) * 8 + -8);
    *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 8) = lVar3;
    *(uint *)(lVar3 + 0x10) = uVar1;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082ab854);
  (*pcVar2)();
}



/* Entry: 1082ab854; end: 1082ab887;  */

void FUN_1082ab854(void)

{
  func_0x0001082ac310();
  return;
}



/* Entry: 1082ab888; end: 1082ab8eb;  */

void FUN_1082ab888(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = param_1;
  FUN_1082aca0c();
  plVar1 = (long *)0x0;
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (*plVar2 == param_3) break;
    plVar1 = plVar2;
    plVar2 = (long *)plVar2[1];
  }
  plVar3 = (long *)plVar2[1];
  if (plVar3 == (long *)0x0) {
    if (plVar1 == (long *)0x0) {
      func_0x0001082acab8(param_1,param_2);
    }
    else {
      plVar1[1] = 0;
    }
  }
  else {
    lVar4 = *plVar3;
    plVar2[1] = plVar3[1];
    *plVar2 = lVar4;
    plVar2 = plVar3;
  }
  __ZdlPv(plVar2);
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}



/* Entry: 1082ab8ec; end: 1082ab99b;  */

void FUN_1082ab8ec(long param_1)

{
  code *pcVar1;
  
  while (*(int *)(param_1 + 0x44) != 0) {
    func_0x0001082ae094(*(undefined8 *)
                         (*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x44) * 8 + -8));
  }
  while( true ) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      FUN_1082b467c(*(undefined8 *)(param_1 + 8));
      return;
    }
    if (*(int *)(param_1 + 0x2c) < 1) break;
    func_0x0001082ae0d4();
    func_0x0001082ae094();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ab948);
  (*pcVar1)();
}



/* Entry: 1082ab99c; end: 1082ab9df;  */

void FUN_1082ab99c(long param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0x100000000;
  FUN_1082ac260(param_1 + 0xc0,&uStack_30);
  func_0x0001082adf24();
  return;
}



/* Entry: 1082ab9e0; end: 1082aba93;  */

void FUN_1082ab9e0(long *param_1)

{
  func_0x0001082a0594(*param_1);
  if (((*(int *)(*param_1 + 8) == 0) && (*(int *)(*param_1 + 0xc) == 0)) &&
     ((long *)*param_1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082aba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 0x18))();
    return;
  }
  return;
}



/* Entry: 1082aba94; end: 1082abaeb;  */

long FUN_1082aba94(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  FUN_1082abaec();
  if (lVar1 != 0) {
    FUN_1082ab888(param_1 + 0x48,param_2,lVar1);
    func_0x0001082aba34(param_1,lVar1);
  }
  return lVar1;
}



/* Entry: 1082abaec; end: 1082abb07;  */

void FUN_1082abaec(void)

{
  FUN_1082aca0c();
  return;
}



/* Entry: 1082abb08; end: 1082abb37;  */

void FUN_1082abb08(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uStack_28;
  
  func_0x0001082ade30();
  iVar1 = (int)&uStack_28;
  uStack_28 = param_2;
  FUN_1082ab854();
  if (iVar1 != 0) {
    func_0x0001082addc0();
  }
  return;
}



/* Entry: 1082abb38; end: 1082abbe7;  */

void FUN_1082abb38(undefined8 param_1,long param_2)

{
  int iVar1;
  long unaff_x20;
  long *plVar2;
  
  func_0x0001082ade30();
  plVar2 = (long *)(param_2 + 0x48);
  if (*(short *)(*plVar2 + 4) != 0) {
    FUN_1082acd64(unaff_x20 + 0x60,plVar2);
  }
  func_0x000108277498();
  iVar1 = (int)plVar2;
  func_0x0001082addb4();
  if (iVar1 != 0) {
    func_0x0001082adf08();
  }
  return;
}



/* Entry: 1082abbe8; end: 1082abce7;  */

void FUN_1082abbe8(undefined8 param_1,long param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  long lStack_38;
  
  func_0x0001082ade30();
  if (*(short *)(*param_3 + 4) == 0) {
    func_0x0001082adf18();
    func_0x0001082ade30();
    plVar7 = (long *)(param_2 + 0x48);
    if (*(short *)(*plVar7 + 4) != 0) {
      FUN_1082acd64(unaff_x20 + 0x60,plVar7);
    }
    func_0x000108277498();
    iVar4 = (int)plVar7;
    func_0x0001082addb4();
    if (iVar4 != 0) {
      func_0x0001082adf08();
    }
  }
  else {
    lVar5 = unaff_x20 + 0x60;
    FUN_1082a5db4(lVar5,param_3);
    iVar4 = 0;
    if (lVar5 != 0) {
      lStack_38 = lVar5;
      if ((*(short *)(*(long *)(lVar5 + 0x20) + 4) == 0) &&
         (lVar6 = lVar5, FUN_1082a0834(), (int)lVar6 != 0)) {
        iVar4 = (int)&lStack_38;
        FUN_1082ab9e0();
      }
      else {
        piVar1 = (int *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        FUN_1082abb38();
        iVar4 = (int)&lStack_38;
        FUN_1082837dc();
      }
    }
    plVar7 = (long *)(unaff_x19 + 0x48);
    if (*(short *)(*plVar7 + 4) == 0) {
      func_0x0001082addb4();
      if (iVar4 != 0) {
        func_0x0001082addc0();
      }
    }
    else {
      FUN_1082acd64(unaff_x20 + 0x60,plVar7);
    }
    FUN_1082aa600(plVar7,param_3);
    func_0x0001082ad08c(unaff_x20 + 0x60);
  }
  return;
}



/* Entry: 1082abce8; end: 1082abdf3;  */

void FUN_1082abce8(int param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001082ade30();
  if ((param_3 == 0) && (func_0x0001082addb4(), param_1 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar2 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar2;
    lVar2 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar2 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar2 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar2;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar2;
      sVar1 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar1 != 0)) {
          return;
        }
      }
      else {
        if ((sVar1 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar2) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 1082abdf4; end: 1082abe3b;  */

undefined8 FUN_1082abdf4(undefined8 *param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  
  func_0x0001082ade30();
  uVar1 = *(uint *)((long)param_1 + 0x14);
  func_0x0001082ac08c();
  *param_1 = unaff_x19;
  FUN_1082ac7a0();
  uVar7 = 0;
  while (uVar1 != 0) {
    uVar3 = (ulong)uVar1;
    if (((((int)uVar1 < 0) || (*(int *)(unaff_x20 + 0x14) <= (int)uVar1)) ||
        (uVar1 = (int)(uVar1 - 1) >> 1, (int)uVar1 < 0)) ||
       (*(int *)(unaff_x20 + 0x14) <= (int)uVar1)) goto LAB_1082ac8ac;
    lVar4 = *(long *)(unaff_x20 + 8);
    lVar5 = *(long *)(lVar4 + uVar3 * 8);
    lVar6 = *(long *)(lVar4 + (ulong)uVar1 * 8);
    if (*(uint *)(lVar6 + 0x14) <= *(uint *)(lVar5 + 0x14)) {
      FUN_1082ac7a0();
      return uVar7;
    }
    *(long *)(lVar4 + uVar3 * 8) = lVar6;
    *(long *)(lVar4 + (ulong)uVar1 * 8) = lVar5;
    FUN_1082ac7a0();
    uVar7 = 1;
  }
  if (0 < *(int *)(unaff_x20 + 0x14)) {
    *(undefined4 *)(**(long **)(unaff_x20 + 8) + 0x10) = 0;
    return uVar7;
  }
LAB_1082ac8ac:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082ac8b0);
  (*pcVar2)();
}



/* Entry: 1082abe3c; end: 1082abee7;  */

void FUN_1082abe3c(undefined8 param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  
  func_0x0001082ade44();
  FUN_1082a07f8();
  if (*(char *)(unaff_x20 + 0x90) == '\0') {
    func_0x0001082ae038();
    iVar2 = (int)&stack0xffffffffffffffd8;
    FUN_1082ab854();
    if (iVar2 != 0) {
      func_0x0001082abb88(unaff_x19 + 0x48,unaff_x20 + 0x20);
    }
    FUN_1082ab230();
  }
  else {
    *(int *)(unaff_x19 + 0x80) = *(int *)(unaff_x19 + 0x80) + -1;
    *(long *)(unaff_x19 + 0x88) = *(long *)(unaff_x19 + 0x88) - param_2;
    if (((*(int *)(unaff_x20 + 8) == 0) && (*(short *)(*(long *)(unaff_x20 + 0x48) + 4) == 0)) &&
       (*(short *)(*(long *)(unaff_x20 + 0x20) + 4) != 0)) {
      plVar3 = (long *)(unaff_x19 + 0x48);
      FUN_1082aca0c();
      plVar1 = (long *)0x0;
      while( true ) {
        if (plVar3 == (long *)0x0) {
          return;
        }
        if (*plVar3 == unaff_x20) break;
        plVar1 = plVar3;
        plVar3 = (long *)plVar3[1];
      }
      plVar4 = (long *)plVar3[1];
      if (plVar4 == (long *)0x0) {
        if (plVar1 == (long *)0x0) {
          func_0x0001082acab8((long *)(unaff_x19 + 0x48),(long *)(unaff_x20 + 0x20));
        }
        else {
          plVar1[1] = 0;
        }
      }
      else {
        lVar5 = *plVar4;
        plVar3[1] = plVar4[1];
        *plVar3 = lVar5;
        plVar3 = plVar4;
      }
      __ZdlPv(plVar3);
      *(int *)(unaff_x19 + 0x58) = *(int *)(unaff_x19 + 0x58) + -1;
      return;
    }
  }
  return;
}



/* Entry: 1082abee8; end: 1082ac023;  */

void FUN_1082abee8(undefined8 param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  long *plVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uStack_40;
  int iStack_34;
  
  func_0x0001082ade30();
  if (param_3 == 0) {
    if (unaff_x19 == (long *)0x0) {
      FUN_1082b4710(*(undefined8 *)(unaff_x20 + 8),0);
    }
    else {
      FUN_1082b47e4(*(undefined8 *)(unaff_x20 + 8),*unaff_x19);
    }
    while (*(int *)(unaff_x20 + 0x2c) != 0) {
      if (*(int *)(unaff_x20 + 0x2c) < 1) goto LAB_1082ac014;
      if ((unaff_x19 != (long *)0x0) &&
         (*unaff_x19 <= *(long *)(**(long **)(unaff_x20 + 0x20) + 0x18))) {
        return;
      }
      func_0x0001082ade90();
    }
  }
  else {
    if ((unaff_x19 != (long *)0x0) && (*(int *)(unaff_x20 + 0x2c) != 0)) {
      if (*(int *)(unaff_x20 + 0x2c) < 1) {
LAB_1082ac014:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ac018);
        (*pcVar1)();
      }
      if (*unaff_x19 <= *(long *)(**(long **)(unaff_x20 + 0x20) + 0x18)) {
        return;
      }
    }
    plVar2 = (long *)(unaff_x20 + 0x18);
    FUN_1082ac024();
    lVar3 = 0;
    func_0x0001082adfb0();
    while ((lVar3 < *(int *)(unaff_x20 + 0x2c) &&
           ((lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + lVar3 * 8), unaff_x19 == (long *)0x0 ||
            (*(long *)(lVar4 + 0x18) < *unaff_x19))))) {
      if (*(short *)(*(long *)(lVar4 + 0x48) + 4) == 0) {
        func_0x0001082ae08c();
        *plVar2 = lVar4;
      }
      lVar3 = lVar3 + 1;
    }
    for (lVar3 = 0; lVar3 < iStack_34; lVar3 = lVar3 + 1) {
      func_0x0001082ae068();
    }
    _free(uStack_40);
  }
  return;
}



/* Entry: 1082ac024; end: 1082ac0ab;  */

void FUN_1082ac024(long param_1)

{
  int iVar1;
  code *pcStack_28;
  
  if (1 < (int)*(uint *)(param_1 + 0x14)) {
    pcStack_28 = FUN_1082ab070;
    FUN_1082ad304(*(long *)(param_1 + 8),
                  *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x14) * 8,&pcStack_28);
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
      func_0x0001082ae080();
    }
  }
  return;
}



/* Entry: 1082ac0ac; end: 1082ac1e7;  */

undefined8 FUN_1082ac0ac(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 *puVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  if (*(ulong *)(param_1 + 0x70) < param_2) {
LAB_1082ac0d0:
    uVar3 = 0;
  }
  else {
    func_0x0001082ade44();
    if (extraout_x8 < *(long *)(param_1 + 0x88) + param_2) {
      FUN_1082ac024(unaff_x19 + 0x18);
      lVar8 = 0;
      lVar7 = 0;
      lVar9 = *(long *)(unaff_x19 + 0x88);
      do {
        if (*(int *)(unaff_x19 + 0x2c) <= lVar7) goto LAB_1082ac0d0;
        lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + lVar7 * 8);
        if (*(char *)(lVar4 + 0x90) == '\0') {
          FUN_1082a07f8();
          lVar9 = lVar9 - lVar4;
        }
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 0x100000000;
      } while (*(ulong *)(unaff_x19 + 0x70) < (ulong)(lVar9 + unaff_x20));
      puStack_58 = (undefined8 *)0x0;
      puStack_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      FUN_1082ac1e8(&puStack_58,lVar8 >> 0x20);
      for (uVar6 = 0; puVar1 = puStack_50, puVar5 = puStack_58,
          ((uint)lVar7 & ((int)(uint)lVar7 >> 0x1f ^ 0xffffffffU)) != uVar6; uVar6 = uVar6 + 1) {
        if ((long)*(int *)(unaff_x19 + 0x2c) <= (long)uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1082ac1d4);
          (*pcVar2)();
        }
        uStack_60 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + uVar6 * 8);
        FUN_1082ad808(&puStack_58,&uStack_60);
      }
      for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uStack_60 = *puVar5;
        func_0x0001082ae068();
      }
      FUN_1082ad6ac(&puStack_58);
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 1082ac1e8; end: 1082ac25f;  */

void FUN_1082ac1e8(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = param_1 + 2;
  lVar2 = *param_1;
  if ((ulong)(*plVar1 - lVar2 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      FUN_1082ad6f0();
      func_0x0001082adedc();
      FUN_1082ad7b8();
      func_0x0001082addac();
      func_0x0001082ade30();
      func_0x0001082ad990(param_2);
      func_0x0001081efc58();
      func_0x0001082adf18();
      FUN_1082ad9b0();
      func_0x0001082ade3c();
      return;
    }
    lVar3 = param_1[1];
    plStack_28 = plVar1;
    FUN_1082ad778();
    lStack_40 = (long)plVar1 + (lVar3 - lVar2);
    plStack_30 = plVar1 + param_2;
    plStack_48 = plVar1;
    lStack_38 = lStack_40;
    func_0x0001082ae050();
    FUN_1082ad7b8(&plStack_48);
  }
  return;
}



/* Entry: 1082ac260; end: 1082ac2a7;  */

void FUN_1082ac260(undefined8 param_1,undefined8 param_2)

{
  func_0x0001082ade30();
  func_0x0001082ad990(param_2);
  func_0x0001081efc58();
  func_0x0001082adf18();
  FUN_1082ad9b0();
  func_0x0001082ade3c();
  return;
}



/* Entry: 1082ac2a8; end: 1082ac2cb;  */

undefined8 FUN_1082ac2a8(undefined8 param_1)

{
  FUN_1082ac2cc(param_1,0);
  return param_1;
}



/* Entry: 1082ac2cc; end: 1082ac343;  */

void FUN_1082ac2cc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1082ac344; end: 1082ac3cb;  */

undefined8 * FUN_1082ac344(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *apuStack_40 [2];
  
  *param_1 = 0;
  puVar1 = param_1;
  func_0x0001082adf4c(0x100000000);
  *(undefined4 *)(puVar1 + 4) = param_2;
  FUN_1082aaf90();
  func_0x0001082ae0c8();
  func_0x0001081efc58();
  apuStack_40[0] = param_1;
  FUN_1082ac3cc(puVar1,apuStack_40);
  func_0x0001082ade3c();
  return param_1;
}



/* Entry: 1082ac3cc; end: 1082ac423;  */

void FUN_1082ac3cc(void)

{
  code *pcVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001082ade44();
  func_0x0001082ac404();
  if (*(int *)(unaff_x19 + 0x14) != 0) {
    *(undefined8 *)(*(long *)(unaff_x19 + 8) + (long)*(int *)(unaff_x19 + 0x14) * 8 + -8) =
         *unaff_x20;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ac404);
  (*pcVar1)();
}



/* Entry: 1082ac424; end: 1082ac4bb;  */

undefined8 * FUN_1082ac424(undefined8 *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  puVar2 = param_1;
  func_0x0001082adf4c(0x100000000);
  *(undefined4 *)(puVar2 + 4) = param_2;
  func_0x0001082ab000();
  func_0x0001082ae0c8();
  func_0x0001081efc58();
  func_0x00010840f37c(puVar2);
  if (*(int *)((long)puVar2 + 0x14) != 0) {
    *(undefined8 **)(puVar2[1] + (long)*(int *)((long)puVar2 + 0x14) * 8 + -8) = param_1;
    func_0x0001082ade3c();
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ac490);
  (*pcVar1)();
}



/* Entry: 1082ac4bc; end: 1082ac4e7;  */

long FUN_1082ac4bc(long param_1)

{
  FUN_1082ac4e8();
  FUN_1082ac678(param_1 + 8);
  return param_1;
}



/* Entry: 1082ac4e8; end: 1082ac517;  */

void FUN_1082ac4e8(long param_1)

{
  undefined1 uStack_21;
  
  FUN_1082ac518(param_1,&uStack_21);
  FUN_1082ac598(param_1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1082ac518; end: 1082ac53b;  */

void FUN_1082ac518(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1082ac53c(param_1,&uStack_18);
  return;
}



/* Entry: 1082ac53c; end: 1082ac597;  */

void FUN_1082ac53c(long param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  
  for (lVar3 = 0; lVar3 < *(int *)(param_1 + 4); lVar3 = lVar3 + 1) {
    piVar1 = (int *)(*(long *)(param_1 + 8) + lVar3 * 0x10);
    if (*piVar1 != 0) {
      lVar2 = *(long *)(piVar1 + 2);
      while (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 8);
        __ZdlPv();
      }
    }
  }
  return;
}



/* Entry: 1082ac598; end: 1082ac62f;  */

void FUN_1082ac598(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001082ac5c8(param_1,&uStack_30);
  FUN_1082ac678(&uStack_28);
  return;
}



/* Entry: 1082ac630; end: 1082ac677;  */

void FUN_1082ac630(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1082ac678; end: 1082ac69b;  */

undefined8 FUN_1082ac678(undefined8 param_1)

{
  FUN_1082ac69c(param_1,0);
  return param_1;
}



/* Entry: 1082ac69c; end: 1082ac6af;  */

void FUN_1082ac69c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1082ac6b0; end: 1082ac727;  */

void FUN_1082ac6b0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1;
  FUN_1082aaf90();
  func_0x0001082ae0c8();
  func_0x0001081efc58();
  uVar2 = 0;
  do {
    if ((*(uint *)(lVar1 + 0x14) & ((int)*(uint *)(lVar1 + 0x14) >> 0x1f ^ 0xffffffffU)) == uVar2) {
LAB_1082ac708:
      func_0x0001082ade3c();
      FUN_108410074(param_1 + 0x10);
      FUN_1082ad0d0(param_1);
      return;
    }
    if (param_1 == *(long *)(*(long *)(lVar1 + 8) + uVar2 * 8)) {
      FUN_10840f328(lVar1);
      goto LAB_1082ac708;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



/* Entry: 1082ac728; end: 1082ac79f;  */

void FUN_1082ac728(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1;
  func_0x0001082ab000();
  func_0x0001082ae0c8();
  func_0x0001081efc58();
  uVar2 = 0;
  do {
    if ((*(uint *)(lVar1 + 0x14) & ((int)*(uint *)(lVar1 + 0x14) >> 0x1f ^ 0xffffffffU)) == uVar2) {
LAB_1082ac780:
      func_0x0001082ade3c();
      FUN_108410074(param_1 + 0x10);
      FUN_1082ad928(param_1);
      return;
    }
    if (param_1 == *(long *)(*(long *)(lVar1 + 8) + uVar2 * 8)) {
      FUN_10840f328(lVar1);
      goto LAB_1082ac780;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



/* Entry: 1082ac7a0; end: 1082ac7c3;  */

void FUN_1082ac7a0(long param_1,uint param_2)

{
  code *pcVar1;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x14))) {
    *(uint *)(*(long *)(*(long *)(param_1 + 8) + (ulong)param_2 * 8) + 0x10) = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ac7c4);
  (*pcVar1)();
}



/* Entry: 1082ac7c4; end: 1082ac7fb;  */

void FUN_1082ac7c4(ulong param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  
  uVar9 = param_1;
  FUN_1082ac7fc();
  if ((uVar9 & 1) != 0) {
    return;
  }
  do {
    iVar8 = (int)param_2;
    uVar2 = iVar8 << 1 | 1;
    uVar9 = (ulong)uVar2;
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 <= (int)uVar2) {
code_r0x0001082ac7a0:
      if ((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 0x14))) {
        *(int *)(*(long *)(*(long *)(param_1 + 8) + (param_2 & 0xffffffff) * 8) + 0x10) = iVar8;
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1082ac7c4);
      (*pcVar4)();
    }
    uVar1 = iVar8 * 2 + 2;
    if ((int)uVar1 < iVar3) {
      if ((iVar8 < -1) || (iVar8 < 0)) goto LAB_1082ac9a8;
      lVar6 = *(long *)(param_1 + 8);
      if (*(uint *)(*(long *)(lVar6 + uVar9 * 8) + 0x14) <=
          *(uint *)(*(long *)(lVar6 + (ulong)uVar1 * 8) + 0x14)) {
        uVar1 = uVar2;
      }
      uVar9 = (ulong)uVar1;
    }
    else {
      if ((iVar8 < 0) || (iVar3 <= iVar8)) goto LAB_1082ac9a8;
      lVar6 = *(long *)(param_1 + 8);
      lVar5 = *(long *)(lVar6 + uVar9 * 8);
      lVar7 = *(long *)(lVar6 + (param_2 & 0xffffffff) * 8);
      if (*(uint *)(lVar5 + 0x14) < *(uint *)(lVar7 + 0x14)) {
        *(long *)(lVar6 + uVar9 * 8) = lVar7;
        *(long *)(lVar6 + (param_2 & 0xffffffff) * 8) = lVar5;
        FUN_1082ac7a0(param_1,uVar9);
        goto code_r0x0001082ac7a0;
      }
    }
    if ((iVar3 <= (int)uVar9) || (iVar3 <= iVar8)) {
LAB_1082ac9a8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1082ac9ac);
      (*pcVar4)();
    }
    lVar5 = *(long *)(lVar6 + uVar9 * 8);
    lVar7 = *(long *)(lVar6 + (param_2 & 0xffffffff) * 8);
    if (*(uint *)(lVar7 + 0x14) <= *(uint *)(lVar5 + 0x14)) goto code_r0x0001082ac7a0;
    *(long *)(lVar6 + uVar9 * 8) = lVar7;
    *(long *)(lVar6 + (param_2 & 0xffffffff) * 8) = lVar5;
    func_0x0001082ae080();
    param_2 = uVar9;
  } while( true );
}



/* Entry: 1082ac7fc; end: 1082ac9ab;  */

undefined8 FUN_1082ac7fc(long param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  while (param_2 != 0) {
    if (((((int)param_2 < 0) || (*(int *)(param_1 + 0x14) <= (int)param_2)) ||
        (uVar1 = (int)(param_2 - 1) >> 1, (int)uVar1 < 0)) ||
       (*(int *)(param_1 + 0x14) <= (int)uVar1)) goto LAB_1082ac8ac;
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(lVar3 + (ulong)param_2 * 8);
    lVar5 = *(long *)(lVar3 + (ulong)uVar1 * 8);
    if (*(uint *)(lVar5 + 0x14) <= *(uint *)(lVar4 + 0x14)) {
      FUN_1082ac7a0(param_1);
      return uVar6;
    }
    *(long *)(lVar3 + (ulong)param_2 * 8) = lVar5;
    *(long *)(lVar3 + (ulong)uVar1 * 8) = lVar4;
    FUN_1082ac7a0(param_1);
    uVar6 = 1;
    param_2 = uVar1;
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    *(undefined4 *)(**(long **)(param_1 + 8) + 0x10) = 0;
    return uVar6;
  }
LAB_1082ac8ac:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082ac8b0);
  (*pcVar2)();
}



/* Entry: 1082ac9ac; end: 1082aca0b;  */

void FUN_1082ac9ac(long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_3[1];
  if (puVar1 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      func_0x0001082acab8(param_1,param_4);
    }
    else {
      *(undefined8 *)(param_2 + 8) = 0;
    }
  }
  else {
    uVar2 = *puVar1;
    param_3[1] = puVar1[1];
    *param_3 = uVar2;
    param_3 = puVar1;
  }
  __ZdlPv(param_3);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}



/* Entry: 1082aca0c; end: 1082aca27;  */

void FUN_1082aca0c(void)

{
  FUN_1082aca28();
  return;
}



/* Entry: 1082aca28; end: 1082acbfb;  */

uint * FUN_1082aca28(undefined8 param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulong extraout_x8;
  ulong uVar4;
  uint extraout_w9;
  ulong unaff_x19;
  long unaff_x20;
  int iVar5;
  uint unaff_w22;
  uint uVar6;
  
  func_0x0001082ade30();
  iVar5 = 0;
  func_0x0001082addd8(*param_2);
  uVar6 = extraout_w9 & unaff_w22;
  uVar4 = extraout_x8;
  while( true ) {
    if ((int)uVar4 <= iVar5) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(unaff_x20 + 8) + (long)(int)uVar6 * 0x10);
    uVar2 = *puVar1;
    if (uVar2 == 0) break;
    if (unaff_w22 == uVar2) {
      uVar4 = unaff_x19;
      FUN_1082a5e3c();
      if ((uVar4 & 1) != 0) {
        return puVar1 + 2;
      }
      uVar4 = (ulong)*(uint *)(unaff_x20 + 4);
    }
    iVar3 = 0;
    if ((int)uVar6 < 1) {
      iVar3 = (int)uVar4;
    }
    uVar6 = (uVar6 + iVar3) - 1;
    iVar5 = iVar5 + 1;
  }
  return (uint *)0x0;
}



/* Entry: 1082acbfc; end: 1082accc3;  */

void FUN_1082acbfc(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int extraout_w8;
  undefined8 uVar3;
  long lVar4;
  undefined8 *extraout_x9;
  undefined8 *puVar5;
  long lStack_38;
  
  uVar1 = param_1[1];
  *param_1 = 0;
  param_1[1] = param_2;
  puVar5 = (undefined8 *)(param_1 + 2);
  uVar3 = *puVar5;
  *puVar5 = 0;
  func_0x0001082adf94(uVar3);
  puVar2 = extraout_x9;
  if (extraout_w8 != 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar2 = 0x10;
  puVar2[1] = (long)param_2;
  if (param_2 != 0) {
    lVar4 = (long)param_2 << 4;
    do {
      puVar2 = puVar2 + 2;
      *(undefined4 *)puVar2 = 0;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  FUN_1082ac630(puVar5);
  for (lVar4 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 4 != lVar4;
      lVar4 = lVar4 + 0x10) {
    if (*(int *)(lStack_38 + lVar4) != 0) {
      FUN_1082accc4(param_1,lStack_38 + lVar4 + 8);
    }
  }
  FUN_1082ac678(&lStack_38);
  return;
}



/* Entry: 1082accc4; end: 1082acd63;  */

void FUN_1082accc4(undefined8 param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 extraout_x8_00;
  uint extraout_w9;
  int *unaff_x19;
  undefined8 *puVar5;
  uint unaff_w22;
  
  func_0x0001082ade44();
  puVar5 = (undefined8 *)(*(long *)*param_2 + 0x20);
  func_0x0001082addd8(*puVar5);
  uVar4 = extraout_x8;
  while( true ) {
    if ((int)uVar4 < 1) {
      return;
    }
    puVar1 = (uint *)(*(long *)(unaff_x19 + 2) + (long)(int)(extraout_w9 & unaff_w22) * 0x10);
    uVar2 = *puVar1;
    if (uVar2 == 0) break;
    if ((unaff_w22 == uVar2) &&
       (puVar3 = puVar5, FUN_1082a5e3c(puVar5,**(long **)(puVar1 + 2) + 0x20),
       ((ulong)puVar3 & 1) != 0)) {
      func_0x0001082add90();
      return;
    }
    func_0x0001082ae020();
    uVar4 = extraout_x8_00;
  }
  func_0x0001082add90();
  *unaff_x19 = *unaff_x19 + 1;
  return;
}



/* Entry: 1082acd64; end: 1082ace0f;  */

byte FUN_1082acd64(void)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 extraout_x8_00;
  bool bVar5;
  int *unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  
  func_0x0001082ade44();
  func_0x0001082ade9c();
  uVar4 = extraout_x8;
  do {
    bVar5 = unaff_w22 < (int)uVar4;
    if (((int)uVar4 <= unaff_w22) ||
       (iVar1 = *(int *)(*(long *)(unaff_x19 + 2) + (long)unaff_w21 * 0x10), iVar1 == 0)) {
      bVar3 = 0;
LAB_1082acdc8:
      return bVar5 & bVar3;
    }
    if ((unaff_w23 == iVar1) && (uVar2 = unaff_x20, FUN_1082a5e3c(), (uVar2 & 1) != 0)) {
      FUN_1082ace10();
      if ((4 < unaff_x19[1]) && (*unaff_x19 * 4 <= unaff_x19[1])) {
        FUN_1082aceb4();
      }
      bVar5 = true;
      bVar3 = 1;
      goto LAB_1082acdc8;
    }
    func_0x0001082adff0();
    uVar4 = extraout_x8_00;
  } while( true );
}



/* Entry: 1082ace10; end: 1082aceb3;  */

void FUN_1082ace10(int *param_1,ulong param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  *param_1 = *param_1 + -1;
  do {
    lVar5 = *(long *)(param_1 + 2);
    iVar4 = (int)param_2;
    piVar1 = (int *)(lVar5 + (long)iVar4 * 0x10);
    do {
      uVar3 = (int)param_2 - 1;
      if ((int)param_2 < 1) {
        uVar3 = param_1[1] + uVar3;
      }
      param_2 = (ulong)uVar3;
      uVar2 = *(uint *)(lVar5 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | param_2 << 4));
      if (uVar2 == 0) {
        if (*piVar1 != 0) {
          *piVar1 = 0;
        }
        return;
      }
      uVar2 = param_1[1] - 1U & uVar2;
    } while (((int)uVar3 <= (int)uVar2 && (int)uVar2 < iVar4) ||
            ((iVar4 < (int)uVar3 && ((int)uVar2 < iVar4 || (int)uVar3 <= (int)uVar2))));
    FUN_1082acf74(piVar1,lVar5 + (long)(int)uVar3 * 0x10);
  } while( true );
}



/* Entry: 1082aceb4; end: 1082acf73;  */

void FUN_1082aceb4(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int extraout_w8;
  undefined8 uVar3;
  undefined8 *extraout_x9;
  long lVar4;
  undefined8 *puVar5;
  long lStack_38;
  
  uVar1 = param_1[1];
  *param_1 = 0;
  param_1[1] = param_2;
  uVar3 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  func_0x0001082adf94(uVar3);
  puVar2 = extraout_x9;
  if (extraout_w8 != 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar2 = 0x10;
  puVar2[1] = (long)param_2;
  if (param_2 != 0) {
    lVar4 = (long)param_2 << 4;
    puVar5 = puVar2 + 2;
    do {
      *(undefined4 *)puVar5 = 0;
      lVar4 = lVar4 + -0x10;
      puVar5 = puVar5 + 2;
    } while (lVar4 != 0);
  }
  *(undefined8 **)(param_1 + 2) = puVar2 + 2;
  for (lVar4 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 4 != lVar4;
      lVar4 = lVar4 + 0x10) {
    if (*(int *)(lStack_38 + lVar4) != 0) {
      FUN_1082acfb0(param_1,lStack_38 + lVar4 + 8);
    }
  }
  FUN_1082ac2a8(&lStack_38);
  return;
}



/* Entry: 1082acf74; end: 1082acfaf;  */

void FUN_1082acf74(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = *param_2;
    if (*param_1 == 0) {
      if (iVar1 == 0) {
        return;
      }
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    }
    else if (iVar1 != 0) {
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      iVar1 = *param_2;
    }
    *param_1 = iVar1;
  }
  return;
}



/* Entry: 1082acfb0; end: 1082ad047;  */

void FUN_1082acfb0(undefined8 param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 extraout_x8_00;
  uint extraout_w9;
  int *unaff_x19;
  undefined8 *puVar5;
  uint unaff_w22;
  
  func_0x0001082ade44();
  puVar5 = (undefined8 *)(*param_2 + 0x48);
  func_0x0001082addd8(*puVar5);
  uVar4 = extraout_x8;
  while( true ) {
    if ((int)uVar4 < 1) {
      return;
    }
    puVar1 = (uint *)(*(long *)(unaff_x19 + 2) + (long)(int)(extraout_w9 & unaff_w22) * 0x10);
    uVar2 = *puVar1;
    if (uVar2 == 0) break;
    if ((unaff_w22 == uVar2) &&
       (puVar3 = puVar5, FUN_1082a5e3c(puVar5,*(long *)(puVar1 + 2) + 0x48),
       ((ulong)puVar3 & 1) != 0)) {
      func_0x0001082add90();
      return;
    }
    func_0x0001082ae020();
    uVar4 = extraout_x8_00;
  }
  func_0x0001082add90();
  *unaff_x19 = *unaff_x19 + 1;
  return;
}



/* Entry: 1082ad048; end: 1082ad0cf;  */

void FUN_1082ad048(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x0001082adfd8();
  if ((bool)in_ZR || in_NG != in_OV) {
    FUN_1082acbfc();
  }
  FUN_1082accc4();
  return;
}



/* Entry: 1082ad0d0; end: 1082ad0ff;  */

long FUN_1082ad0d0(long param_1)

{
  FUN_1082ad100();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001082aded4();
  }
  return param_1;
}



/* Entry: 1082ad100; end: 1082ad1d7;  */

void FUN_1082ad100(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 0x40;
    do {
      func_0x00010827a384();
      uVar2 = uVar2 + 0x40;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 1082ad1d8; end: 1082ad233;  */

void FUN_1082ad1d8(void)

{
  long unaff_x19;
  long *unaff_x20;
  long lVar1;
  long lVar2;
  
  func_0x0001082ade30();
  lVar1 = 0;
  for (lVar2 = 0; lVar2 < (int)unaff_x20[1]; lVar2 = lVar2 + 1) {
    FUN_1082ad264(unaff_x19,*unaff_x20 + lVar1);
    func_0x00010827a384(*unaff_x20 + lVar1);
    unaff_x19 = unaff_x19 + 0x40;
    lVar1 = lVar1 + 0x40;
  }
  return;
}



/* Entry: 1082ad234; end: 1082ad263;  */

void FUN_1082ad234(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x40;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1082ad264; end: 1082ad28f;  */

void FUN_1082ad264(long param_1,long param_2)

{
  undefined4 uVar1;
  
  FUN_1082aa5ac();
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return;
}



/* Entry: 1082ad290; end: 1082ad2df;  */

void FUN_1082ad290(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001082ade44();
  FUN_1082ad1d8();
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001082aded4();
  }
  param_3 = param_3 >> 6;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *unaff_x19 = unaff_x20;
  *(uint *)((long)unaff_x19 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1082ad2e0; end: 1082ad303;  */

void FUN_1082ad2e0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_2 <= (int)(*(uint *)(param_1 + 1) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x40;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + (int)param_2);
    return;
  }
  func_0x00010bdb1a68();
  uVar6 = (ulong)(param_2 - (long)param_1) >> 3;
  if ((int)uVar6 < 2) {
    return;
  }
  iVar2 = (int)LZCOUNT((int)uVar6 + -2) * -2 + 0x40;
  pcStack_18 = FUN_1082ad304;
  puStack_20 = &stack0xfffffffffffffff0;
  while( true ) {
    iVar2 = iVar2 + -1;
    iVar8 = (int)uVar6;
    if (iVar8 < 0x21) break;
    if (iVar2 == -1) {
      uVar6 = uVar6 & 0xffffffff;
      for (uVar10 = uVar6 >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
        FUN_1082ad598(param_1,uVar10,uVar6,param_3);
      }
      while (uVar6 = uVar6 - 1, uVar6 != 0) {
        uVar7 = *param_1;
        *param_1 = param_1[uVar6];
        param_1[uVar6] = uVar7;
        func_0x0001082ad614(param_1,1,uVar6,param_3);
      }
      return;
    }
    puVar3 = param_1;
    func_0x0001082ad510(param_1,uVar6,param_1 + (iVar8 - 1U >> 1),param_3);
    uVar6 = (ulong)((long)puVar3 - (long)param_1) >> 3;
    FUN_1082ad334(iVar2,param_1,uVar6,param_3);
    iVar1 = (int)uVar6 + 1;
    param_1 = param_1 + iVar1;
    uVar6 = (ulong)(uint)(iVar8 - iVar1);
  }
  puVar3 = param_1;
  do {
    do {
      puVar9 = puVar3;
      puVar3 = puVar9 + 1;
      if (param_1 + (long)iVar8 + -1 < puVar3) {
        return;
      }
      puVar4 = puVar3;
      (*(code *)*param_3)(puVar3,puVar9);
    } while ((int)puVar4 == 0);
    uStack_58 = *puVar3;
    do {
      puVar4 = puVar9;
      puVar4[1] = *puVar4;
      if (puVar4 <= param_1) break;
      puVar5 = &uStack_58;
      (*(code *)*param_3)(puVar5,puVar4 + -1);
      puVar9 = puVar4 + -1;
    } while (((ulong)puVar5 & 1) != 0);
    *puVar4 = uStack_58;
  } while( true );
}



/* Entry: 1082ad304; end: 1082ad333;  */

void FUN_1082ad304(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uStack_48;
  
  uVar6 = (ulong)(param_2 - (long)param_1) >> 3;
  if ((int)uVar6 < 2) {
    return;
  }
  iVar2 = (int)LZCOUNT((int)uVar6 + -2) * -2 + 0x40;
  while( true ) {
    iVar2 = iVar2 + -1;
    iVar8 = (int)uVar6;
    if (iVar8 < 0x21) break;
    if (iVar2 == -1) {
      uVar6 = uVar6 & 0xffffffff;
      for (uVar10 = uVar6 >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
        FUN_1082ad598(param_1,uVar10,uVar6,param_3);
      }
      while (uVar6 = uVar6 - 1, uVar6 != 0) {
        uVar7 = *param_1;
        *param_1 = param_1[uVar6];
        param_1[uVar6] = uVar7;
        func_0x0001082ad614(param_1,1,uVar6,param_3);
      }
      return;
    }
    puVar3 = param_1;
    func_0x0001082ad510(param_1,uVar6,param_1 + (iVar8 - 1U >> 1),param_3);
    uVar6 = (ulong)((long)puVar3 - (long)param_1) >> 3;
    FUN_1082ad334(iVar2,param_1,uVar6,param_3);
    iVar1 = (int)uVar6 + 1;
    param_1 = param_1 + iVar1;
    uVar6 = (ulong)(uint)(iVar8 - iVar1);
  }
  puVar3 = param_1;
  do {
    do {
      puVar9 = puVar3;
      puVar3 = puVar9 + 1;
      if (param_1 + (long)iVar8 + -1 < puVar3) {
        return;
      }
      puVar4 = puVar3;
      (*(code *)*param_3)(puVar3,puVar9);
    } while ((int)puVar4 == 0);
    uStack_48 = *puVar3;
    do {
      puVar4 = puVar9;
      puVar4[1] = *puVar4;
      if (puVar4 <= param_1) break;
      puVar5 = &uStack_48;
      (*(code *)*param_3)(puVar5,puVar4 + -1);
      puVar9 = puVar4 + -1;
    } while (((ulong)puVar5 & 1) != 0);
    *puVar4 = uStack_48;
  } while( true );
}



/* Entry: 1082ad334; end: 1082ad497;  */

void FUN_1082ad334(int param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uStack_48;
  
  while( true ) {
    param_1 = param_1 + -1;
    iVar6 = (int)param_3;
    if (iVar6 < 0x21) break;
    if (param_1 == -1) {
      param_3 = param_3 & 0xffffffff;
      for (uVar8 = param_3 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
        FUN_1082ad598(param_2,uVar8,param_3,param_4);
      }
      while (param_3 = param_3 - 1, param_3 != 0) {
        uVar5 = *param_2;
        *param_2 = param_2[param_3];
        param_2[param_3] = uVar5;
        func_0x0001082ad614(param_2,1,param_3,param_4);
      }
      return;
    }
    puVar2 = param_2;
    func_0x0001082ad510(param_2,param_3,param_2 + (iVar6 - 1U >> 1),param_4);
    uVar8 = (ulong)((long)puVar2 - (long)param_2) >> 3;
    FUN_1082ad334(param_1,param_2,uVar8,param_4);
    iVar1 = (int)uVar8 + 1;
    param_2 = param_2 + iVar1;
    param_3 = (ulong)(uint)(iVar6 - iVar1);
  }
  puVar2 = param_2;
  do {
    do {
      puVar7 = puVar2;
      puVar2 = puVar7 + 1;
      if (param_2 + (long)iVar6 + -1 < puVar2) {
        return;
      }
      puVar3 = puVar2;
      (*(code *)*param_4)(puVar2,puVar7);
    } while ((int)puVar3 == 0);
    uStack_48 = *puVar2;
    do {
      puVar3 = puVar7;
      puVar3[1] = *puVar3;
      if (puVar3 <= param_2) break;
      puVar4 = &uStack_48;
      (*(code *)*param_4)(puVar4,puVar3 + -1);
      puVar7 = puVar3 + -1;
    } while (((ulong)puVar4 & 1) != 0);
    *puVar3 = uStack_48;
  } while( true );
}



/* Entry: 1082ad498; end: 1082ad597;  */

void FUN_1082ad498(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  for (uVar2 = param_2 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    FUN_1082ad598(param_1,uVar2,param_2,param_3);
  }
  while (param_2 = param_2 - 1, param_2 != 0) {
    uVar1 = *param_1;
    *param_1 = param_1[param_2];
    param_1[param_2] = uVar1;
    func_0x0001082ad614(param_1,1,param_2,param_3);
  }
  return;
}



/* Entry: 1082ad598; end: 1082ad6ab;  */

void FUN_1082ad598(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar2;
  undefined8 uStack_58;
  
  func_0x0001082adee8();
  puVar1 = param_1;
  while( true ) {
    uVar2 = unaff_x21 * 2;
    if (unaff_x22 <= uVar2 && uVar2 - unaff_x22 != 0) break;
    if (unaff_x22 > uVar2) {
      func_0x0001082adf84();
      uVar2 = uVar2 | (ulong)puVar1 & 0xffffffff;
    }
    puVar1 = &uStack_58;
    (*(code *)*unaff_x19)(puVar1,param_1 + (uVar2 - 1));
    if ((int)puVar1 == 0) break;
    param_1[unaff_x21 - 1] = param_1[uVar2 - 1];
    unaff_x21 = uVar2;
  }
  *(undefined8 *)(unaff_x20 + unaff_x21 * 8 + -8) = uStack_58;
  return;
}



/* Entry: 1082ad6ac; end: 1082ad6d7;  */

undefined8 FUN_1082ad6ac(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1082ad6d8(&uStack_28);
  return param_1;
}



/* Entry: 1082ad6d8; end: 1082ad6ef;  */

void FUN_1082ad6d8(undefined8 *param_1)

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



/* Entry: 1082ad6f0; end: 1082ad703;  */

void FUN_1082ad6f0(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  plVar1 = (long *)&UNK_10f483ba8;
  func_0x000104bd47e8();
  func_0x0001082ade30();
  lVar3 = *(long *)(param_2 + 8) - (plVar1[1] - *plVar1);
  _memcpy(lVar3);
  unaff_x19[1] = lVar3;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1082ad704; end: 1082ad777;  */

void FUN_1082ad704(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001082ade30();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1082ad778; end: 1082ad79b;  */

void FUN_1082ad778(void)

{
  FUN_1082ad79c();
  return;
}



/* Entry: 1082ad79c; end: 1082ad7b7;  */

long * FUN_1082ad79c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1082ad7e4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1082ad7b8; end: 1082ad7e3;  */

long * FUN_1082ad7b8(long *param_1)

{
  FUN_1082ad7e4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



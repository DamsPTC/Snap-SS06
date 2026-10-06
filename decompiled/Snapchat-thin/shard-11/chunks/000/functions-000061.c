/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080e3ea0; end: 1080e3eab;  */

void FUN_1080e3ea0(long param_1)

{
  long lVar1;
  
  _abort();
  lVar1 = *(long *)(param_1 + 8);
  FUN_1080e08ac();
  *(long *)(param_1 + 8) = lVar1 + 0x20;
  return;
}



/* Entry: 1080e3eac; end: 1080e3f53;  */

void FUN_1080e3eac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1080e08ac();
  *(long *)(param_1 + 8) = lVar1 + 0x20;
  return;
}



/* Entry: 1080e3f54; end: 1080e3f93;  */

long * FUN_1080e3f54(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar3 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar3 <= param_2) {
      plVar3 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar3 = (long *)0x7ffffffffffffff;
    }
    return plVar3;
  }
  FUN_1080e4008();
  func_0x0001080e4b88();
  plVar3 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_1080e409c(plVar3,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
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
  return plVar3;
}



/* Entry: 1080e3f94; end: 1080e4007;  */

void FUN_1080e3f94(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001080e4b88();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_1080e409c(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
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



/* Entry: 1080e4008; end: 1080e4013;  */

long * FUN_1080e4008(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001080e405c();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 1080e4014; end: 1080e407f;  */

long * FUN_1080e4014(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001080e405c();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 1080e4080; end: 1080e409b;  */

void FUN_1080e4080(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (param_2 >> 0x3b != 0) {
    func_0x000104bfe188();
    for (uVar1 = param_2; uVar1 != param_3; uVar1 = uVar1 + 0x20) {
      FUN_1080e08ac(param_4,uVar1);
      param_4 = param_4 + 0x20;
    }
    for (; param_2 != param_3; param_2 = param_2 + 0x20) {
      FUN_1080e0bc0();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 5);
  return;
}



/* Entry: 1080e409c; end: 1080e4103;  */

void FUN_1080e409c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (lVar1 = param_2; lVar1 != param_3; lVar1 = lVar1 + 0x20) {
    FUN_1080e08ac(param_4,lVar1);
    param_4 = param_4 + 0x20;
  }
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_1080e0bc0();
  }
  return;
}



/* Entry: 1080e4104; end: 1080e415f;  */

void FUN_1080e4104(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_1080e0bc0();
  }
  return;
}



/* Entry: 1080e4160; end: 1080e4167;  */

void FUN_1080e4160(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080e4b88(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    FUN_1080e0bc0();
  }
  return;
}



/* Entry: 1080e4168; end: 1080e4203;  */

void FUN_1080e4168(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080e4b88();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    FUN_1080e0bc0();
  }
  return;
}



/* Entry: 1080e4204; end: 1080e420b;  */

void FUN_1080e4204(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080e4b88(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    FUN_1080e0bc0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1080e420c; end: 1080e4307;  */

void FUN_1080e420c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080e4b88();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    FUN_1080e0bc0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1080e4308; end: 1080e4337;  */

long FUN_1080e4308(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 9) * 8) + (uVar1 & 0x1ff) * 8;
  }
  return 0;
}



/* Entry: 1080e4338; end: 1080e43b7;  */

long * FUN_1080e4338(long *param_1,long param_2,undefined8 *param_3,long param_4,undefined8 param_5,
                    undefined8 *param_6)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x24;
  long lVar6;
  
  puVar4 = param_3;
  func_0x0001080e4ca8();
  lVar6 = *param_1;
  FUN_1080e43b8();
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 3);
    plVar5 = unaff_x20;
    FUN_1080e4410();
    *unaff_x19 = *unaff_x20 + (param_2 - lVar6);
    return plVar5;
  }
  _abort();
  uVar2 = param_1[2];
  if ((long)puVar4 + (param_1[1] - uVar2) <= 0xfffffffffffffff - uVar2) {
    if (uVar2 >> 0x3d == 0) {
      plVar5 = (long *)((uVar2 << 3) / 5);
    }
    else {
      plVar5 = (long *)(uVar2 << 3);
      if (4 < uVar2 >> 0x3d) {
        plVar5 = (long *)0xffffffffffffffff;
      }
    }
    plVar1 = (long *)(param_1[1] + (long)puVar4);
    if ((long *)0xffffffffffffffe < plVar5) {
      plVar5 = (long *)0xfffffffffffffff;
    }
    if (plVar1 <= plVar5) {
      plVar1 = plVar5;
    }
    return plVar1;
  }
  _abort();
  func_0x0001080e4cfc();
  lVar6 = *param_1;
  lVar3 = param_1[1];
  if (((lVar6 != 0) && (puVar4 = param_3, param_3 != (undefined8 *)0x0)) && (lVar6 != unaff_x24)) {
    func_0x0001080e4ccc();
    _memmove();
    puVar4 = (undefined8 *)((long)param_3 + (unaff_x24 - lVar6));
  }
  *puVar4 = *param_6;
  if ((unaff_x24 != 0) && (unaff_x24 != lVar6 + lVar3 * 8)) {
    param_1 = puVar4 + param_4;
    _memmove(param_1);
  }
  if ((lVar6 != 0) && (param_1 = (long *)*unaff_x20, unaff_x20 + 3 != param_1)) {
    __ZdlPv();
  }
  func_0x0001080e4e3c();
  return param_1;
}



/* Entry: 1080e43b8; end: 1080e440f;  */

long * FUN_1080e43b8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *in_x5;
  long *plVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x24;
  
  uVar3 = param_1[2];
  if ((long)param_2 + (param_1[1] - uVar3) <= 0xfffffffffffffff - uVar3) {
    if (uVar3 >> 0x3d == 0) {
      plVar5 = (long *)((uVar3 << 3) / 5);
    }
    else {
      plVar5 = (long *)(uVar3 << 3);
      if (4 < uVar3 >> 0x3d) {
        plVar5 = (long *)0xffffffffffffffff;
      }
    }
    plVar1 = (long *)(param_1[1] + (long)param_2);
    if ((long *)0xffffffffffffffe < plVar5) {
      plVar5 = (long *)0xfffffffffffffff;
    }
    if (plVar1 <= plVar5) {
      plVar1 = plVar5;
    }
    return plVar1;
  }
  _abort();
  func_0x0001080e4cfc();
  lVar2 = *param_1;
  lVar4 = param_1[1];
  if (((lVar2 != 0) && (param_2 = unaff_x22, unaff_x22 != (undefined8 *)0x0)) &&
     (lVar2 != unaff_x24)) {
    func_0x0001080e4ccc();
    _memmove();
    param_2 = (undefined8 *)((long)unaff_x22 + (unaff_x24 - lVar2));
  }
  *param_2 = *in_x5;
  if ((unaff_x24 != 0) && (unaff_x24 != lVar2 + lVar4 * 8)) {
    param_1 = param_2 + unaff_x21;
    _memmove(param_1);
  }
  if ((lVar2 != 0) && (param_1 = (long *)*unaff_x20, unaff_x20 + 3 != param_1)) {
    __ZdlPv();
  }
  func_0x0001080e4e3c();
  return param_1;
}



/* Entry: 1080e4410; end: 1080e44b3;  */

void FUN_1080e4410(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *in_x5;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x24;
  
  func_0x0001080e4cfc();
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (((lVar1 != 0) && (param_2 = unaff_x22, unaff_x22 != (undefined8 *)0x0)) &&
     (lVar1 != unaff_x24)) {
    func_0x0001080e4ccc();
    _memmove();
    param_2 = (undefined8 *)((long)unaff_x22 + (unaff_x24 - lVar1));
  }
  *param_2 = *in_x5;
  if ((unaff_x24 != 0) && (unaff_x24 != lVar1 + lVar2 * 8)) {
    _memmove(param_2 + unaff_x21);
  }
  if (lVar1 != 0) {
    if (unaff_x20 + 3 != (long *)*unaff_x20) {
      __ZdlPv();
    }
  }
  func_0x0001080e4e3c();
  return;
}



/* Entry: 1080e44b4; end: 1080e44df;  */

void FUN_1080e44b4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x0001080e44d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080e44e0; end: 1080e455b;  */

void FUN_1080e44e0(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_28 [8];
  
  uVar2 = param_1[1];
  uVar1 = param_2 - uVar2;
  if (param_2 < uVar2) {
    param_1[1] = param_2;
  }
  else {
    lVar3 = *param_1;
    if (param_1[2] - uVar2 < uVar1) {
      FUN_1080e455c(auStack_28,param_1,lVar3 + uVar2,uVar1);
    }
    else {
      FUN_1080e45d4(param_1,lVar3 + uVar2,lVar3 + uVar2,uVar1);
      param_1[1] = param_1[1] + uVar1;
    }
  }
  return;
}



/* Entry: 1080e455c; end: 1080e45d3;  */

void FUN_1080e455c(long *param_1,long param_2,undefined1 *param_3,ulong param_4)

{
  undefined1 *puVar1;
  long *unaff_x19;
  long *unaff_x20;
  long lVar2;
  
  func_0x0001080e4ca8();
  lVar2 = *param_1;
  puVar1 = param_3;
  FUN_1080e4680();
  if (-1 < (long)param_1) {
    __Znwm();
    FUN_1080e46d4();
    *unaff_x19 = *unaff_x20 + (param_2 - lVar2);
    return;
  }
  _abort();
  if (param_4 == 0) {
    return;
  }
  if (puVar1 != param_3) {
    if (param_4 <= (ulong)((long)puVar1 - (long)param_3)) {
      _memmove(puVar1,(long)puVar1 - param_4,param_4);
      lVar2 = ((long)puVar1 - param_4) - (long)param_3;
      if (lVar2 != 0) {
        _memmove((long)puVar1 - lVar2,param_3);
      }
      for (; param_4 != 0; param_4 = param_4 - 1) {
        *param_3 = 0;
        param_3 = param_3 + 1;
      }
      return;
    }
    if (param_3 != (undefined1 *)0x0) {
      _memmove(param_3 + param_4,param_3);
    }
    lVar2 = (long)param_3 - (long)puVar1;
    for (; lVar2 != 0; lVar2 = lVar2 + 1) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
  }
  func_0x0001080e4ab8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)();
  return;
}



/* Entry: 1080e45d4; end: 1080e467f;  */

void FUN_1080e45d4(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  long lVar1;
  
  if (param_4 == 0) {
    return;
  }
  if (param_3 != param_2) {
    if (param_4 <= (ulong)((long)param_3 - (long)param_2)) {
      _memmove(param_3,(long)param_3 - param_4,param_4);
      lVar1 = ((long)param_3 - param_4) - (long)param_2;
      if (lVar1 != 0) {
        _memmove((long)param_3 - lVar1,param_2);
      }
      for (; param_4 != 0; param_4 = param_4 - 1) {
        *param_2 = 0;
        param_2 = param_2 + 1;
      }
      return;
    }
    if (param_2 != (undefined1 *)0x0) {
      _memmove(param_2 + param_4,param_2);
    }
    lVar1 = (long)param_2 - (long)param_3;
    for (; lVar1 != 0; lVar1 = lVar1 + 1) {
      *param_2 = 0;
      param_2 = param_2 + 1;
    }
  }
  func_0x0001080e4ab8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)();
  return;
}



/* Entry: 1080e4680; end: 1080e46d3;  */

long * FUN_1080e4680(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  
  uVar2 = param_1[2];
  if ((uVar2 ^ 0x7fffffffffffffff) < (long)param_2 + (param_1[1] - uVar2)) {
    _abort();
    func_0x0001080e4cfc();
    lVar1 = *param_1;
    lVar3 = param_1[1];
    if (((lVar1 != 0) && (param_2 = unaff_x22, unaff_x22 != (long *)0x0)) && (lVar1 != unaff_x24)) {
      func_0x0001080e4ccc();
      _memmove();
      param_2 = (long *)((long)unaff_x22 + (unaff_x24 - lVar1));
    }
    if (unaff_x21 != 0) {
      param_1 = param_2;
      _bzero(param_2);
    }
    if ((unaff_x24 != 0) && (unaff_x24 != lVar1 + lVar3 && param_2 != (long *)0x0)) {
      param_1 = (long *)((long)param_2 + unaff_x21);
      _memmove(param_1);
    }
    if ((lVar1 != 0) && (param_1 = (long *)*unaff_x20, unaff_x20 + 3 != param_1)) {
      __ZdlPv();
    }
    func_0x0001080e4e3c();
    return param_1;
  }
  if (uVar2 >> 0x3d == 0) {
    plVar4 = (long *)((uVar2 << 3) / 5);
  }
  else {
    plVar4 = (long *)(uVar2 << 3);
    if (4 < uVar2 >> 0x3d) {
      plVar4 = (long *)0xffffffffffffffff;
    }
  }
  param_2 = (long *)(param_1[1] + (long)param_2);
  if ((long *)0x7ffffffffffffffe < plVar4) {
    plVar4 = (long *)0x7fffffffffffffff;
  }
  if (param_2 <= plVar4) {
    param_2 = plVar4;
  }
  return param_2;
}



/* Entry: 1080e46d4; end: 1080e477b;  */

void FUN_1080e46d4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  
  func_0x0001080e4cfc();
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (((lVar1 != 0) && (param_2 = unaff_x22, unaff_x22 != 0)) && (lVar1 != unaff_x24)) {
    func_0x0001080e4ccc();
    _memmove();
    param_2 = unaff_x22 + (unaff_x24 - lVar1);
  }
  if (unaff_x21 != 0) {
    _bzero(param_2);
  }
  if ((unaff_x24 != 0) && (unaff_x24 != lVar1 + lVar2 && param_2 != 0)) {
    _memmove(param_2 + unaff_x21);
  }
  if ((lVar1 != 0) && (unaff_x20 + 3 != (long *)*unaff_x20)) {
    __ZdlPv();
  }
  func_0x0001080e4e3c();
  return;
}



/* Entry: 1080e477c; end: 1080e4867;  */

void FUN_1080e477c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  func_0x0001080e4e70();
  puStack_50 = (ulong *)(param_1 + 0x18);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *unaff_x19;
    uVar4 = unaff_x19[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_1080e4890();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_1080e4868(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar7 = *unaff_x19;
      uVar8 = unaff_x19[3];
      uVar6 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x0001080e48c4(&uStack_70);
      puVar5 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      unaff_x19[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 1080e4868; end: 1080e488f;  */

void FUN_1080e4868(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1080e4890; end: 1080e4903;  */

undefined1  [16] FUN_1080e4890(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bfe188();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1080e4904; end: 1080e4e7b;  */

void FUN_1080e4904(void)

{
  return;
}



/* Entry: 1080e4e7c; end: 1080e4fe7;  */

undefined * FUN_1080e4e7c(void)

{
  return &UNK_10f47a867;
}



/* Entry: 1080e4fe8; end: 1080e507b;  */

undefined8 *
FUN_1080e4fe8(double param_1,double param_2,undefined8 *param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = &PTR_FUN_110a20010;
  param_3[1] = &PTR_DAT_110a20040;
  param_3[4] = CONCAT17(in_register_00005007,
                        CONCAT16(in_register_00005006,
                                 CONCAT15(in_register_00005005,
                                          CONCAT14(in_register_00005004,
                                                   CONCAT13(in_register_00005003,
                                                            CONCAT12(in_register_00005002,
                                                                     CONCAT11(in_register_00005001,
                                                                              in_b0)))))));
  param_3[5] = *param_4;
  (**(code **)(param_4[1] + 0x10))(param_3 + 6);
  *(undefined1 *)(param_3 + 0xb) = param_5;
  param_3[0xc] = param_1;
  param_3[0xd] = param_2;
  *(undefined1 *)((long)param_3 + 0x71) = 0;
  param_3[0x10] = 0;
  param_3[0xf] = 0;
  param_3[0x12] = 0;
  param_3[0x11] = 0;
  param_3[0x14] = 0;
  param_3[0x13] = 0;
  *(bool *)(param_3 + 0xe) = param_2 != 0.0 && param_1 != 0.0;
  return param_3;
}



/* Entry: 1080e507c; end: 1080e50cb;  */

undefined8 * FUN_1080e507c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20010;
  param_1[1] = &PTR_DAT_110a20040;
  FUN_1080e5788(param_1 + 0x12);
  FUN_1080e5788(param_1 + 0xf);
  (**(code **)param_1[6])();
  func_0x0001003a81d8(param_1 + 2);
  return param_1;
}



/* Entry: 1080e50cc; end: 1080e50d7;  */

undefined8 * FUN_1080e50cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20010;
  param_1[1] = &PTR_DAT_110a20040;
  FUN_1080e5788(param_1 + 0x12);
  FUN_1080e5788(param_1 + 0xf);
  (**(code **)param_1[6])();
  func_0x0001003a81d8(param_1 + 2);
  return param_1;
}



/* Entry: 1080e50d8; end: 1080e50eb;  */

void FUN_1080e50d8(void)

{
  FUN_1080e507c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080e50ec; end: 1080e50f3;  */

void FUN_1080e50ec(long param_1)

{
  FUN_1080e507c(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080e50f4; end: 1080e5167;  */

void FUN_1080e50f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1080e5168(&uStack_48);
  func_0x0001080e51bc(&uStack_40,param_3);
  func_0x0001003b1eb0(&uStack_38,param_4);
  func_0x0001080e5200(param_1 + 0x78,&uStack_48);
  func_0x0001080e5b40(&uStack_48);
  return;
}



/* Entry: 1080e5168; end: 1080e523b;  */

long * FUN_1080e5168(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    lVar4 = *param_1;
    lVar5 = *param_2;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lVar5 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lVar5;
    func_0x0001078bee50(lVar4);
  }
  return param_1;
}



/* Entry: 1080e523c; end: 1080e543b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1080e523c(void)

{
  undefined1 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  int extraout_w11;
  long unaff_x20;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  long alStack_d0 [2];
  undefined8 *apuStack_c0 [5];
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_68;
  
  func_0x0001080e5eb4();
  func_0x0001080e5e88();
  uStack_68 = extraout_x8;
  FUN_1080e543c(alStack_d0);
  puVar4 = *(undefined8 **)(unaff_x20 + 0x78);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x88);
  puVar6 = *(undefined8 **)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  puStack_e8 = puVar4;
  puStack_e0 = puVar6;
  for (; lVar5 = alStack_d0[0], uVar1 = puVar4 == puVar6, !(bool)uVar1; puVar4 = puVar4 + 3) {
    func_0x00010b948a74(alStack_d0[0]);
    plVar2 = (long *)puVar4[1];
    lVar5 = 0;
    if (alStack_d0[0] != 0) {
      do {
        func_0x0001080e5e98();
        lVar5 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    ppuStack_90 = &PTR_DAT_110a200c8;
    lStack_88 = lVar5;
    (**(code **)(*plVar2 + 0x38))();
    (*(code *)*ppuStack_90)(&ppuStack_90);
    func_0x00010811fc6c(*puVar4,puVar4 + 2,puVar4 + 1);
    uVar3 = *(ulong *)(unaff_x20 + 0x98);
    if (uVar3 < *(ulong *)(unaff_x20 + 0xa0)) {
      FUN_1080e5b70(uVar3,puVar4);
      lVar5 = uVar3 + 0x18;
    }
    else {
      lVar5 = unaff_x20 + 0x90;
      FUN_1080e58c8(lVar5,(long)(uVar3 - *(long *)(unaff_x20 + 0x90)) / 0x18 + 1);
      FUN_1080e59a4(&stack0xffffffffffffff68,lVar5,
                    (*(long *)(unaff_x20 + 0x98) - *(long *)(unaff_x20 + 0x90)) / 0x18,
                    unaff_x20 + 0xa0);
      FUN_1080e5b70(lStack_88,puVar4);
      lStack_88 = lStack_88 + 0x18;
      FUN_1080e5918(unaff_x20 + 0x90,&stack0xffffffffffffff68);
      lVar5 = *(long *)(unaff_x20 + 0x98);
      func_0x0001080e5ad8(&stack0xffffffffffffff68);
    }
    *(long *)(unaff_x20 + 0x98) = lVar5;
  }
  uVar3 = unaff_x20 + 8;
  func_0x00010b9a5818();
  if ((uVar3 & 1) == 0) {
    func_0x00010b9a5890();
  }
  else {
    func_0x00010b9a8f04(&ppuStack_90);
    alStack_d0[1] = 0x1080e5bdc;
    func_0x0001080e5c64(apuStack_c0,&stack0xffffffffffffff68);
    func_0x00010b948bcc(lVar5,alStack_d0 + 1);
    (*(code *)*apuStack_c0[0])(apuStack_c0);
    func_0x0001080e5498(&stack0xffffffffffffff68);
    FUN_1080e5788(&puStack_e8);
    FUN_1080e5d64(alStack_d0[0]);
    func_0x0001080e5e6c(uStack_68);
    if ((bool)uVar1) {
      return;
    }
  }
  ___stack_chk_fail();
  puVar4 = (undefined8 *)0x78;
  __Znwm();
  *puVar4 = &PTR_DAT_110d78770;
  puVar4[2] = 0x32aaaba7;
  puVar4[1] = 1;
  puVar4[4] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[10] = 0;
  puVar4[9] = 0;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  puVar4[0xe] = 0;
  puVar4[0xd] = 0;
  *extraout_x8_01 = puVar4;
  return;
}



/* Entry: 1080e543c; end: 1080e554f;  */

void FUN_1080e543c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  *puVar1 = &PTR_DAT_110d78770;
  puVar1[2] = 0x32aaaba7;
  puVar1[1] = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 1080e5550; end: 1080e570b;  */

/* WARNING: Possible PIC construction at 0x0001080e55ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080e55b0) */
/* WARNING: Removing unreachable block (ram,0x0001080e55b8) */
/* WARNING: Removing unreachable block (ram,0x0001080e55bc) */
/* WARNING: Removing unreachable block (ram,0x0001080e55c4) */

void FUN_1080e5550(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *puVar6;
  int extraout_w11;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [5];
  undefined8 uStack_48;
  
  func_0x0001080e5e88();
  uStack_80 = param_1;
  uStack_48 = extraout_x8;
  FUN_1080e5de0();
  uStack_90 = 0;
  uVar1 = *(char *)(param_2 + 0x70) == '\x01';
  puStack_88 = param_3;
  if ((bool)uVar1) {
    puVar6 = &uStack_98;
    puVar2 = (undefined8 *)(param_2 + 0x60);
    ppuVar4 = (undefined8 **)(param_2 + 0x68);
    puVar5 = &uStack_80;
  }
  else {
    uStack_78 = *(undefined8 *)(param_2 + 0x28);
    (**(code **)(*(long *)(param_2 + 0x30) + 0x18))(apuStack_70);
    FUN_1080e5744(&lStack_a0,param_2 + 0x20,&uStack_78,param_5);
    uStack_98 = 0;
    if (lStack_a0 != 0) {
      do {
        func_0x0001080e5e98();
        uStack_98 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    FUN_1080e570c(&uStack_90,&uStack_98);
    FUN_1080e5d1c(uStack_98);
    func_0x0001080e5e34(lStack_a0);
    (*(code *)*apuStack_70[0])(apuStack_70);
    ppuVar4 = &puStack_88;
    puVar5 = &uStack_90;
    FUN_1080e50f4(param_2,ppuVar4,puVar5,param_4);
    FUN_1080e5d1c(uStack_90);
    puVar2 = puStack_88;
    func_0x0001078bee50();
    func_0x0001080e5e6c(uStack_48);
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    puVar6 = extraout_x8_01;
  }
  uVar3 = 200;
  __Znwm();
  func_0x00010810bc54(*puVar2,*ppuVar4,*puVar5);
  *puVar6 = uVar3;
  return;
}



/* Entry: 1080e570c; end: 1080e5743;  */

undefined8 * FUN_1080e570c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_1080e5d1c(uVar1);
  }
  return param_1;
}



/* Entry: 1080e5744; end: 1080e5787;  */

void FUN_1080e5744(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xa0;
  __Znwm();
  FUN_10810b1cc(*param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1080e5788; end: 1080e5817;  */

long * FUN_1080e5788(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001080e57bc(param_1);
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1080e5818; end: 1080e58ab;  */

long FUN_1080e5818(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001080e5eb4();
  FUN_1080e58c8();
  FUN_1080e59a4(auStack_58,param_1,(unaff_x20[1] - *unaff_x20) / 0x18,unaff_x20 + 2);
  FUN_1080e58ac(lStack_48);
  lStack_48 = lStack_48 + 0x18;
  FUN_1080e5918();
  lVar1 = unaff_x20[1];
  func_0x0001080e5ad8(auStack_58);
  return lVar1;
}



/* Entry: 1080e58ac; end: 1080e58c7;  */

void FUN_1080e58ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  return;
}



/* Entry: 1080e58c8; end: 1080e5917;  */

long * FUN_1080e58c8(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      plVar3 = (long *)0xaaaaaaaaaaaaaaa;
    }
    return plVar3;
  }
  FUN_1080e5998();
  func_0x0001080e5eb4();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_1080e5a40(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
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
  return plVar3;
}



/* Entry: 1080e5918; end: 1080e5997;  */

void FUN_1080e5918(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001080e5eb4();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_1080e5a40(param_1 + 2,*param_1,param_1[1],lVar2);
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



/* Entry: 1080e5998; end: 1080e59a3;  */

long * FUN_1080e5998(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001080e59f0();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1080e59a4; end: 1080e5a13;  */

long * FUN_1080e59a4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001080e59f0();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1080e5a14; end: 1080e5a3f;  */

void FUN_1080e5a14(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000104bfe188();
    for (uVar1 = param_2; uVar1 != param_3; uVar1 = uVar1 + 0x18) {
      FUN_1080e58ac(param_4,uVar1);
      param_4 = param_4 + 0x18;
    }
    for (; param_2 != param_3; param_2 = param_2 + 0x18) {
      func_0x0001080e5b40();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
  return;
}



/* Entry: 1080e5a40; end: 1080e5aa7;  */

void FUN_1080e5a40(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (lVar1 = param_2; lVar1 != param_3; lVar1 = lVar1 + 0x18) {
    FUN_1080e58ac(param_4,lVar1);
    param_4 = param_4 + 0x18;
  }
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x0001080e5b40();
  }
  return;
}



/* Entry: 1080e5aa8; end: 1080e5b03;  */

void FUN_1080e5aa8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x0001080e5b40();
  }
  return;
}



/* Entry: 1080e5b04; end: 1080e5b0b;  */

void FUN_1080e5b04(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080e5eb4(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x0001080e5b40();
  }
  return;
}



/* Entry: 1080e5b0c; end: 1080e5b6f;  */

void FUN_1080e5b0c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080e5eb4();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x0001080e5b40();
  }
  return;
}



/* Entry: 1080e5b70; end: 1080e5bdb;  */

void FUN_1080e5b70(long *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long extraout_x8;
  int extraout_w11;
  
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar5;
  lVar5 = 0;
  if (param_2[1] != 0) {
    do {
      func_0x0001080e5e98();
      lVar5 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[1] = lVar5;
  lVar5 = param_2[2];
  if (lVar5 != 0) {
    piVar2 = (int *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[2] = lVar5;
  return;
}



/* Entry: 1080e5bdc; end: 1080e5c97;  */

undefined8 * FUN_1080e5bdc(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined2 uStack_48;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar3 = (undefined8 *)auStack_50;
  lVar2 = param_1;
  func_0x0001080e5e88();
  uVar1 = *(char *)(lVar2 + 0x20) == '\v';
  uStack_28 = extraout_x8;
  if ((bool)uVar1) {
    auStack_50[0] = *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x71);
    uStack_48 = 7;
    func_0x000105275910(auStack_40,*(undefined8 *)(param_1 + 0x18),auStack_50,1);
    func_0x000104bda914(auStack_40);
    func_0x00010b9a8d98(auStack_50);
    param_2 = puVar3;
  }
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x90);
  func_0x0001080e57bc();
  func_0x0001080e5e6c(uStack_28);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  uVar4 = *param_2;
  *puVar3 = &PTR_FUN_110a200a8;
  puVar3[1] = uVar4;
  *param_2 = 0;
  func_0x00010b9a8f04(puVar3 + 2,param_2 + 1);
  return puVar3;
}



/* Entry: 1080e5c98; end: 1080e5cf7;  */

undefined8 * FUN_1080e5c98(long param_1)

{
  func_0x00010b9a8d98(param_1 + 0x10);
  func_0x0001080e5ce8(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 1080e5cf8; end: 1080e5d1b;  */

undefined8 * FUN_1080e5cf8(undefined8 *param_1)

{
  FUN_1080e5d1c(*param_1);
  return param_1;
}



/* Entry: 1080e5d1c; end: 1080e5d3f;  */

void FUN_1080e5d1c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x0001080e5e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080e5d40; end: 1080e5d63;  */

undefined8 * FUN_1080e5d40(undefined8 *param_1)

{
  FUN_1080e5d64(*param_1);
  return param_1;
}



/* Entry: 1080e5d64; end: 1080e5ddf;  */

void FUN_1080e5d64(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x0001080e5e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080e5de0; end: 1080e5e0f;  */

long * FUN_1080e5de0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if ((param_1 == (long *)0x0) ||
     (plVar4 = param_1, func_0x00010b9a5818(), ((ulong)plVar4 & 1) != 0)) {
    return param_1;
  }
  func_0x00010b9a5890();
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080e5e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))();
      return plVar4;
    }
  }
  return plVar4;
}



/* Entry: 1080e5e10; end: 1080e5ebf;  */

void FUN_1080e5e10(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x0001080e5e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080e5ec0; end: 1080e6da7;  */

void FUN_1080e5ec0(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a200f8;
  lVar4 = *param_2;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = lVar4;
  param_1[4] = param_3;
  param_1[5] = 0x32aaaba7;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0xd] = lVar4;
  return;
}



/* Entry: 1080e6da8; end: 1080e6de3;  */

undefined8 * FUN_1080e6da8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20258;
  func_0x000107475310(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1080e6de4; end: 1080e6de7;  */

undefined8 * FUN_1080e6de4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20258;
  func_0x000107475310(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1080e6de8; end: 1080e6dfb;  */

void FUN_1080e6de8(void)

{
  FUN_1080e6da8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080e6dfc; end: 1080e6e03;  */

undefined8 FUN_1080e6dfc(void)

{
  return 6;
}



/* Entry: 1080e6e04; end: 1080e6f5b;  */

void FUN_1080e6e04(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  FUN_1080cbe58(&uStack_80);
  puVar7 = (undefined8 *)0x58;
  __Znwm();
  uVar6 = uStack_70;
  uVar5 = uStack_78;
  uVar4 = uStack_80;
  plVar10 = puVar7 + 1;
  *plVar10 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110a202b0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[7] = uVar5;
  puVar7[6] = uVar4;
  puVar7[8] = uVar6;
  puStack_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  puStack_68 = (undefined8 *)0x0;
  func_0x000104bfe1e0(&puStack_68);
  puVar9 = puVar7 + 3;
  *puVar9 = &PTR_DAT_110a20300;
  lVar8 = *(long *)(param_2 + 0x18);
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7[9] = lVar8;
  lVar8 = *param_4;
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x10) != 0)) {
    do {
      func_0x0001080e76c4();
      lVar8 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar7[10] = lVar8;
  if ((puVar7[5] == 0) || (*(long *)(puVar7[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_68 = puVar9;
    puStack_60 = puVar7;
    func_0x0001003a8180(puVar7 + 4,&puStack_68);
    func_0x0001003a824c(&puStack_68);
    if (puVar7[5] == 0) goto LAB_1080e6f2c;
  }
  do {
    func_0x0001080e76b4();
  } while (extraout_w10 != 0);
LAB_1080e6f2c:
  *param_1 = puVar9;
  func_0x0001003a916c(puVar9);
  func_0x000104bfe1e0(&uStack_80);
  return;
}



/* Entry: 1080e6f5c; end: 1080e6f5f;  */

void FUN_1080e6f5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a202b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080e6f60; end: 1080e6f73;  */

void FUN_1080e6f60(void)

{
  FUN_1080e76a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080e6f74; end: 1080e6f87;  */

void FUN_1080e6f74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080e6f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080e6f88; end: 1080e6f9b;  */

void FUN_1080e6f88(void)

{
  FUN_1080e71f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080e6f9c; end: 1080e6fa3;  */

undefined8 FUN_1080e6f9c(void)

{
  return 6;
}



/* Entry: 1080e6fa4; end: 1080e6fe3;  */

void FUN_1080e6fa4(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b9a8e18(auStack_30);
  func_0x000104bf351c(param_1,auStack_30);
  func_0x00010b9a8d98(auStack_30);
  return;
}



/* Entry: 1080e6fe4; end: 1080e71f3;  */

undefined8 *
FUN_1080e6fe4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long *param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 in_ZR;
  long *plVar5;
  undefined8 *puVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1080dabac(&puStack_a0,param_6);
  func_0x00010b9a9358(&lStack_a8,param_3);
  plVar7 = *(long **)(param_2 + 0x38);
  lStack_98 = param_2;
  if (*(long *)(param_2 + 8) == 0) {
    lVar8 = *(long *)(param_2 + 0x10);
    lStack_90 = lVar8;
    lStack_d0 = param_2;
    if (lVar8 == 0) {
      lStack_c8 = 0;
      goto LAB_1080e70bc;
    }
    do {
      func_0x0001080e76b4();
      lStack_c8 = lVar8;
    } while (extraout_w10_00 != 0);
  }
  else {
    func_0x0001003ae9f0(&lStack_d0);
    if (lStack_d0 == 0) {
      param_2 = 0;
      lStack_98 = 0;
      lStack_90 = 0;
      lVar8 = 0;
    }
    else {
      lStack_90 = lStack_c8;
      lVar8 = lStack_c8;
      if (lStack_c8 != 0) {
        do {
          func_0x0001080e76b4();
        } while (extraout_w10 != 0);
      }
    }
    func_0x0001003a824c(&lStack_d0);
    lStack_d0 = param_2;
    lStack_c8 = lVar8;
    if (lVar8 == 0) goto LAB_1080e70bc;
  }
  do {
    func_0x0001080e76b4();
  } while (extraout_w10_01 != 0);
LAB_1080e70bc:
  func_0x0001080e7234(&lStack_98);
  puVar6 = puStack_a0;
  if ((puStack_a0 != (undefined8 *)0x0) && (puStack_a0[2] != 0)) {
    do {
      func_0x0001080e76b4();
    } while (extraout_w10_02 != 0);
  }
  puStack_c0 = puVar6;
  lVar9 = *param_7;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
    do {
      func_0x0001080e76b4();
    } while (extraout_w10_03 != 0);
  }
  lVar4 = lStack_a8;
  if (lStack_a8 != 0) {
    piVar1 = (int *)(lStack_a8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      param_2 = lStack_d0;
      lVar8 = lStack_c8;
      puVar6 = puStack_c0;
    } while (cVar2 != '\0');
  }
  pcStack_88 = FUN_1080e725c;
  ppuStack_80 = &PTR_FUN_110a20358;
  plVar5 = (long *)0x28;
  lStack_b8 = lVar9;
  __Znwm();
  *plVar5 = param_2;
  plVar5[1] = lVar8;
  lStack_c8 = 0;
  puStack_c0 = (undefined8 *)0x0;
  lStack_d0 = 0;
  plVar5[2] = (long)puVar6;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
    do {
      func_0x0001080e76b4();
    } while (extraout_w10_04 != 0);
  }
  plVar5[3] = lVar9;
  plVar5[4] = lVar4;
  uStack_b0 = 0;
  plStack_78 = plVar5;
  (**(code **)(*plVar7 + 0x20))(param_1,plVar7,&lStack_a8,&pcStack_88);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  func_0x0001080e7640(&lStack_d0);
  func_0x0001003a8cb8(lStack_a8);
  func_0x0001080dafac();
  func_0x0001080e7708(uStack_58);
  if (!(bool)in_ZR) {
    puVar6 = puStack_a0;
    ___stack_chk_fail();
    *puVar6 = &PTR_DAT_110a20300;
    func_0x0001080cbf20(puVar6 + 7);
    func_0x000107475310(puVar6 + 6);
    *puVar6 = &PTR_DAT_110d76a50;
    func_0x000104bfe1e0(puVar6 + 3);
    func_0x000107c278e8(puVar6 + 1);
    return puVar6;
  }
  return puStack_a0;
}



/* Entry: 1080e71f4; end: 1080e725b;  */

undefined8 * FUN_1080e71f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a20300;
  func_0x0001080cbf20(param_1 + 7);
  func_0x000107475310(param_1 + 6);
  *param_1 = &PTR_DAT_110d76a50;
  func_0x000104bfe1e0(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1080e725c; end: 1080e74fb;  */

void FUN_1080e725c(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long lVar3;
  long *plVar4;
  undefined8 ****extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long *plVar5;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [24];
  long lStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined8 auStack_a8 [3];
  undefined8 ***pppuStack_90;
  ulong uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 ***pppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  long lStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(param_2 + 0x10);
  lStack_e8 = 0;
  lStack_e0 = 0;
  lVar3 = plVar5[1];
  if (((lVar3 != 0) && (__ZNSt3__119__shared_weak_count4lockEv(), lStack_e0 = lVar3, lVar3 != 0)) &&
     (lStack_e8 = *plVar5, lStack_e8 != 0)) {
    in_ZR = *param_1 == 1;
    if ((bool)in_ZR) {
      pppuStack_60 = (undefined8 ***)plVar5[2];
      if ((((undefined8 ****)pppuStack_60 != (undefined8 ****)0x0) ||
          (pppuStack_60 = *(undefined8 ****)(*(long *)(lStack_e8 + 0x30) + 0x10),
          (undefined8 ****)pppuStack_60 != (undefined8 ****)0x0)) &&
         ((undefined8 ***)pppuStack_60[2] != (undefined8 ***)0x0)) {
        do {
          func_0x0001080e76c4();
          pppuStack_60 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      FUN_10813e508(&lStack_48,&pppuStack_60,param_1[2],param_1[3]);
      func_0x0001080dafac(pppuStack_60);
      in_ZR = lStack_48 == 1;
      if ((bool)in_ZR) {
        if ((uStack_40 == 0) || (*(long *)(uStack_40 + 0x10) == 0)) {
          pppuStack_60 = (undefined8 ****)0x1;
        }
        else {
          do {
            func_0x0001080e76b4();
          } while (extraout_w10 != 0);
          pppuStack_60 = (undefined8 ****)0x1;
          if (*(long *)(uStack_40 + 0x10) != 0) {
            do {
              func_0x0001080e76b4();
            } while (extraout_w10_00 != 0);
          }
        }
        uStack_58 = uStack_40;
        func_0x0001080e76f0();
        func_0x0001080cb554(&pppuStack_60);
        FUN_1080cb914(uStack_40);
      }
      else {
        func_0x00010b99fc44(&lStack_c0,&uStack_40);
        plVar4 = &lStack_c0;
        func_0x00010b99f828();
        lVar3 = *plVar4;
        if (lVar3 == 0) {
          puStack_b8 = &UNK_10f7d0ef0;
          uStack_b0 = 0;
        }
        else {
          puStack_b8 = (undefined *)(lVar3 + 0x18);
          uStack_b0 = (ulong)*(uint *)(lVar3 + 0xc);
        }
        func_0x0001003b055c(auStack_a8,&puStack_b8);
        FUN_1080e74fc(&pppuStack_90,auStack_a8,&UNK_10f47a8fa);
        FUN_1080e771c(auStack_d8,plVar5 + 4);
        func_0x0001080e751c(&uStack_78,&pppuStack_90,auStack_d8);
        FUN_1080e74fc(&pppuStack_60,&uStack_78,&DAT_10f62a9ea);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_90);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
        func_0x000104bda960(lStack_c0);
        plVar5 = (long *)plVar5[3];
        in_ZR = bStack_49 == 0;
        uStack_88 = uStack_58;
        pppuStack_90 = pppuStack_60;
        if (-1 < (char)bStack_49) {
          uStack_88 = (ulong)bStack_49;
          pppuStack_90 = &pppuStack_60;
        }
        func_0x00010b99f5a8(auStack_a8,&pppuStack_90);
        uStack_78 = 2;
        uStack_70 = auStack_a8[0];
        auStack_a8[0] = 0;
        (**(code **)(*plVar5 + 0x20))(plVar5,&uStack_78);
        func_0x0001080cb554(&uStack_78);
        func_0x000104bda960(auStack_a8[0]);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_60);
      }
      func_0x0001080daf78(&lStack_48);
    }
    else {
      lVar3 = plVar5[3];
      pppuStack_60 = (undefined8 ****)0x2;
      uStack_58 = param_1[1];
      if (uStack_58 != 0) {
        plVar5 = (long *)(uStack_58 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x0001080e76f0(lVar3);
      func_0x0001080cb554(&pppuStack_60);
    }
  }
  func_0x0001080e7234(&lStack_e8);
  func_0x0001080e7708(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
  func_0x0001080e76d4();
  return;
}



/* Entry: 1080e74fc; end: 1080e753b;  */

void FUN_1080e74fc(void)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
  func_0x0001080e76d4();
  return;
}



/* Entry: 1080e753c; end: 1080e7557;  */

void FUN_1080e753c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
            (param_1,puVar2,uVar1);
  return;
}



/* Entry: 1080e7558; end: 1080e7577;  */

void FUN_1080e7558(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001080e7640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080e7578; end: 1080e758f;  */

void FUN_1080e7578(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080e7590; end: 1080e76a3;  */

void FUN_1080e7590(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110a20358;
  puVar4 = (undefined8 *)0x28;
  __Znwm();
  lVar5 = puVar6[1];
  uVar7 = *puVar6;
  puVar4[1] = puVar6[1];
  *puVar4 = uVar7;
  if (lVar5 != 0) {
    do {
      func_0x0001080e76b4();
    } while (extraout_w10 != 0);
  }
  lVar5 = puVar6[2];
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    do {
      func_0x0001080e76c4();
      lVar5 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar4[2] = lVar5;
  lVar5 = puVar6[3];
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    do {
      func_0x0001080e76c4();
      lVar5 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puVar4[3] = lVar5;
  lVar5 = puVar6[4];
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[4] = lVar5;
  param_1[1] = puVar4;
  return;
}



/* Entry: 1080e76a4; end: 1080e771b;  */

void FUN_1080e76a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a202b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080e771c; end: 1080e79cb;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_1080e771c(undefined1 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 *******pppppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  char cVar13;
  long lVar14;
  undefined1 *unaff_x20;
  undefined8 *******pppppppuStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  undefined1 auStack_78 [24];
  undefined8 ******ppppppuStack_60;
  ulong uStack_58;
  undefined8 ******ppppppuStack_50;
  ulong uStack_48;
  
  lVar14 = *param_2;
  if (lVar14 == 0) {
    uVar11 = 0;
    ppppppuVar5 = (undefined8 ******)&UNK_10f7d0ef0;
  }
  else {
    ppppppuVar5 = (undefined8 ******)(lVar14 + 0x18);
    uVar11 = (ulong)*(uint *)(lVar14 + 0xc);
  }
  ppppppuStack_50 = ppppppuVar5;
  uStack_48 = uVar11;
  FUN_1080e79cc(ppppppuVar5,uVar11,&DAT_10f300a96,0);
  if (ppppppuVar5 == (undefined8 ******)0xffffffffffffffff) {
    puVar12 = &UNK_10f47a8fd;
    func_0x0001080e4b88(param_1,&UNK_10f47a8fd);
    _strlen(puVar12);
    func_0x0001080e495c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
    return unaff_x20;
  }
  ppppppuVar6 = &ppppppuStack_50;
  func_0x0001080e80f0();
  ppppppuStack_60 = ppppppuVar6;
  uStack_58 = uVar11;
  FUN_1080e7d30();
  if (ppppppuVar6 != (undefined8 ******)0x0) {
    FUN_1080e7a18(param_1,ppppppuStack_50,uStack_48);
    return param_1;
  }
  func_0x0001003b055c(&pppppppuStack_90,&ppppppuStack_60);
  func_0x0001080e7bf4(auStack_78,&UNK_10f47a907,&pppppppuStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_90);
  pppppppuVar7 = &ppppppuStack_50;
  puVar12 = (undefined *)((long)ppppppuVar5 + 3);
  func_0x0001080e80d4();
  lVar14 = 0;
  pppppppuStack_90 = pppppppuVar7;
  puStack_88 = puVar12;
  while (pppppppuVar8 = pppppppuVar7, FUN_1080e79cc(pppppppuVar7,puVar12,&UNK_10f47a937,lVar14),
        pppppppuVar8 != (undefined8 *******)0x0) {
    pppppppuVar4 = pppppppuStack_90;
    puVar1 = puStack_88;
    if (pppppppuVar8 == (undefined8 *******)0xffffffffffffffff) goto LAB_1080e7998;
    cVar13 = *(char *)((long)pppppppuVar7 + -1 + (long)pppppppuVar8);
    if ((cVar13 == '?') || (cVar13 == '&')) break;
    lVar14 = (long)pppppppuVar8 + 1;
  }
  pppppppuVar7 = &pppppppuStack_90;
  puVar12 = (undefined *)((long)pppppppuVar8 + 4);
  func_0x0001080e80d4();
  pppppppuVar8 = &pppppppuStack_a8;
  pppppppuStack_a8 = pppppppuVar7;
  puStack_a0 = puVar12;
  func_0x0001080e80dc(pppppppuVar8,&UNK_10f47a93c);
  pppppppuVar7 = pppppppuStack_a8;
  puVar12 = puStack_a0;
  pppppppuVar4 = pppppppuStack_90;
  puVar1 = puStack_88;
  if (pppppppuVar8 != (undefined8 *******)0xffffffffffffffff) {
    pppppppuVar7 = &pppppppuStack_a8;
    puVar12 = (undefined *)0x0;
    func_0x00010082b490(pppppppuVar7,0,pppppppuVar8);
    pppppppuVar4 = pppppppuStack_90;
    puVar1 = puStack_88;
  }
  puStack_88 = puVar12;
  pppppppuStack_90 = pppppppuVar7;
  if (puStack_88 == (undefined *)0x0) {
LAB_1080e7998:
    puStack_88 = puVar1;
    pppppppuStack_90 = pppppppuVar4;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (param_1,&UNK_10f47a8fd,auStack_78);
  }
  else {
    if ((undefined *)0x400 < puStack_88) {
      pppppppuVar7 = &pppppppuStack_90;
      puVar12 = (undefined *)0x0;
      func_0x00010082b490(pppppppuVar7,0,0x400);
      pppppppuStack_90 = pppppppuVar7;
      puStack_88 = puVar12;
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    puStack_a0 = (undefined *)0x0;
    uStack_98 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&pppppppuStack_a8);
    for (puVar12 = (undefined *)0x0; pppppppuVar7 = pppppppuStack_90, puVar12 < puStack_88;
        puVar12 = puVar12 + 1) {
      cVar13 = *(char *)((long)pppppppuStack_90 + (long)puVar12);
      if (cVar13 == '%') {
        puVar1 = puVar12 + 2;
        if (puVar1 < puStack_88) {
          uVar11 = (ulong)((char *)((long)pppppppuStack_90 + (long)puVar12))[1];
          func_0x0001080e8088();
          uVar9 = (ulong)*(char *)((long)pppppppuVar7 + (long)puVar1);
          func_0x0001080e8088();
          puVar2 = puVar12;
          cVar3 = '%';
          if ((uVar9 & 0x80000000) == 0) {
            puVar2 = puVar1;
            cVar3 = (char)uVar9 + (char)uVar11 * '\x10';
          }
          cVar13 = '%';
          if ((uVar11 & 0x80000000) == 0) {
            puVar12 = puVar2;
            cVar13 = cVar3;
          }
        }
        else {
          cVar13 = '%';
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&pppppppuStack_a8,(int)cVar13);
    }
    puVar12 = puStack_a0;
    pppppppuVar7 = pppppppuStack_a8;
    if (-1 < (long)uStack_98) {
      puVar12 = (undefined *)(uStack_98 >> 0x38);
      pppppppuVar7 = &pppppppuStack_a8;
    }
    FUN_1080e7a18(&pppppppuStack_90,pppppppuVar7,puVar12);
    func_0x0001080e7c24(param_1,&pppppppuStack_90,auStack_78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_a8);
  }
  puVar10 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10);
  return puVar10;
}



/* Entry: 1080e79cc; end: 1080e7a17;  */

ulong FUN_1080e79cc(long param_1,ulong param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3;
  _strlen();
  if (param_2 < param_4) {
    param_4 = 0xffffffffffffffff;
  }
  else if (lVar1 != 0) {
    lVar2 = param_1 + param_4;
    FUN_1080e7c9c(lVar2,param_1 + param_2,param_3,param_3 + lVar1);
    param_4 = lVar2 - param_1;
    if (lVar2 == param_1 + param_2) {
      param_4 = 0xffffffffffffffff;
    }
  }
  return param_4;
}



/* Entry: 1080e7a18; end: 1080e7c9b;  */

undefined1 * FUN_1080e7a18(undefined8 param_1,undefined8 ****param_2,undefined8 param_3)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *****pppppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *unaff_x20;
  undefined1 auStack_e0 [24];
  undefined8 ****ppppuStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 ****ppppuStack_70;
  long lStack_68;
  undefined8 ****ppppuStack_60;
  undefined8 ****ppppuStack_58;
  undefined8 ****ppppuStack_50;
  undefined *puStack_48;
  undefined8 ****ppppuStack_40;
  undefined *puStack_38;
  undefined8 ***pppuStack_30;
  undefined8 uStack_28;
  
  pppuStack_30 = param_2;
  uStack_28 = param_3;
  FUN_1080e79cc(param_2,param_3,&DAT_10f300a96,0);
  if (param_2 != (undefined8 ****)0xffffffffffffffff) {
    pppppuVar1 = (undefined8 *****)&pppuStack_30;
    puVar4 = (undefined *)((long)param_2 + 3);
    func_0x0001080e80d4();
    puVar5 = &UNK_10f47a924;
    pppppuVar2 = &ppppuStack_40;
    ppppuStack_40 = pppppuVar1;
    puStack_38 = puVar4;
    func_0x0001080e80dc();
    if (pppppuVar2 == (undefined8 *****)0xffffffffffffffff) {
      puStack_48 = puStack_38;
      ppppuStack_50 = ppppuStack_40;
      ppppuStack_60 = (undefined8 *****)0x0;
      ppppuStack_58 = (undefined8 *****)0x0;
    }
    else {
      pppppuVar1 = &ppppuStack_40;
      func_0x0001080e80f0();
      pppppuVar6 = &ppppuStack_40;
      ppppuStack_50 = pppppuVar1;
      puStack_48 = puVar5;
      func_0x0001080e80d4();
      ppppuStack_60 = pppppuVar6;
      ppppuStack_58 = pppppuVar2;
    }
    pppppuVar1 = &ppppuStack_60;
    func_0x0001080e80dc(pppppuVar1,&UNK_10f47a928);
    if (pppppuVar1 != (undefined8 *****)0xffffffffffffffff) {
      pppppuVar2 = &ppppuStack_60;
      pppppuVar6 = (undefined8 *****)0x0;
      func_0x00010082b490(pppppuVar2,0,pppppuVar1);
      ppppuStack_60 = pppppuVar2;
      ppppuStack_58 = pppppuVar6;
    }
    pppppuVar1 = &ppppuStack_60;
    FUN_1080e7ed4(pppppuVar1,0x2f,0xffffffffffffffff);
    pppppuVar2 = &ppppuStack_60;
    FUN_1080e7ed4(pppppuVar2,0x2e,0xffffffffffffffff);
    if ((pppppuVar2 == (undefined8 *****)0xffffffffffffffff) ||
       (pppppuVar1 != (undefined8 *****)0xffffffffffffffff && pppppuVar2 <= pppppuVar1)) {
      ppppuStack_70 = (undefined8 ****)0x10f1e23d4;
      lVar7 = 4;
    }
    else {
      pppppuVar1 = &ppppuStack_60;
      lVar7 = (long)pppppuVar2 + 1;
      func_0x00010082b490(pppppuVar1,lVar7,8);
      ppppuStack_70 = pppppuVar1;
    }
    pppppuVar1 = &ppppuStack_50;
    uVar8 = 0;
    lStack_68 = lVar7;
    func_0x00010082b490(pppppuVar1,0,0x40);
    ppppuStack_c8 = pppppuVar1;
    uStack_c0 = uVar8;
    func_0x0001003b055c(auStack_b8,&ppppuStack_c8);
    func_0x0001080e7bf4(auStack_a0,&UNK_10f47a92b,auStack_b8);
    FUN_1080e74fc(auStack_88,auStack_a0,&UNK_10f47a931);
    func_0x0001003b055c(auStack_e0,&ppppuStack_70);
    func_0x0001080e751c(param_1,auStack_88,auStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
    puVar3 = auStack_b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
    return puVar3;
  }
  puVar4 = &UNK_10f47a8fd;
  func_0x0001080e4b88(param_1,&UNK_10f47a8fd);
  _strlen(puVar4);
  func_0x0001080e495c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
  return unaff_x20;
}



/* Entry: 1080e7c9c; end: 1080e7d2b;  */

long FUN_1080e7c9c(long param_1,long param_2,char *param_3,long param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  param_4 = param_4 - (long)param_3;
  lVar3 = param_1;
  if ((param_4 != 0) && (lVar3 = param_2, param_4 <= param_2 - param_1)) {
    cVar1 = *param_3;
    while (((lVar3 = param_2, param_4 <= param_2 - param_1 &&
            (FUN_1080e7d2c(param_1,(long)cVar1,((param_2 - param_1) - param_4) + 1), param_1 != 0))
           && (lVar2 = param_1, _memcmp(), lVar3 = param_1, (int)lVar2 != 0))) {
      param_1 = param_1 + 1;
    }
  }
  return lVar3;
}



/* Entry: 1080e7d2c; end: 1080e7d2f;  */

void FUN_1080e7d2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memchr_11034c648)();
  return;
}



/* Entry: 1080e7d30; end: 1080e7d8f;  */

long FUN_1080e7d30(long param_1,ulong param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = param_2;
  if (param_4 <= param_2) {
    uVar1 = param_4;
  }
  uVar2 = uVar1 + param_5;
  if (param_2 - uVar1 <= param_5) {
    uVar2 = param_2;
  }
  lVar3 = param_1;
  FUN_1080e7d90(param_1,param_1 + uVar2,param_3,param_3 + param_5,&UNK_10067f248);
  lVar4 = lVar3 - param_1;
  if (lVar3 == param_1 + uVar2 && param_5 != 0) {
    lVar4 = -1;
  }
  return lVar4;
}



/* Entry: 1080e7d90; end: 1080e7db7;  */

void FUN_1080e7d90(void)

{
  FUN_1080e7db8();
  return;
}



/* Entry: 1080e7db8; end: 1080e7e8b;  */

undefined1  [16]
FUN_1080e7db8(char *param_1,char *param_2,char *param_3,char *param_4,code *param_5)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  
  pcVar3 = param_2;
  pcVar5 = param_2;
  pcVar7 = param_1;
  if (param_3 != param_4) {
    while (pcVar7 = pcVar7 + 1, param_1 != param_2) {
      lVar1 = (long)*param_1;
      (*param_5)(lVar1,(long)*param_3);
      pcVar8 = param_3;
      if ((int)lVar1 == 0) {
        param_1 = param_1 + 1;
      }
      else {
        do {
          pcVar8 = pcVar8 + 1;
          pcVar4 = param_1;
          pcVar6 = pcVar7;
          if (pcVar8 == param_4) break;
          if (pcVar7 == param_2) goto LAB_1080e7e68;
          uVar2 = (ulong)*pcVar7;
          (*param_5)(uVar2,(long)*pcVar8);
          pcVar4 = pcVar5;
          pcVar6 = pcVar3;
          pcVar7 = pcVar7 + 1;
        } while ((uVar2 & 1) != 0);
        param_1 = param_1 + 1;
        pcVar7 = param_1;
        pcVar3 = pcVar6;
        pcVar5 = pcVar4;
      }
    }
  }
LAB_1080e7e68:
  auVar9._8_8_ = pcVar3;
  auVar9._0_8_ = pcVar5;
  return auVar9;
}



/* Entry: 1080e7e8c; end: 1080e7ed3;  */

long FUN_1080e7e8c(long *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  lVar2 = *param_1;
  uVar3 = param_1[1];
  pcVar5 = param_2;
  _strlen();
  lVar6 = -1;
  if ((param_3 < uVar3) && (pcVar5 != (char *)0x0)) {
    pcVar1 = (char *)(lVar2 + uVar3);
    for (pcVar7 = (char *)(lVar2 + param_3); pcVar8 = pcVar1, pcVar9 = pcVar5, pcVar10 = param_2,
        pcVar7 != pcVar1; pcVar7 = pcVar7 + 1) {
      while (pcVar9 != (char *)0x0) {
        cVar4 = *pcVar10;
        pcVar8 = pcVar7;
        pcVar9 = pcVar9 + -1;
        pcVar10 = pcVar10 + 1;
        if (*pcVar7 == cVar4) goto LAB_1080e7f38;
      }
    }
LAB_1080e7f38:
    lVar6 = (long)pcVar8 - lVar2;
    if (pcVar8 == pcVar1) {
      lVar6 = -1;
    }
  }
  return lVar6;
}



/* Entry: 1080e7ed4; end: 1080e7f83;  */

ulong FUN_1080e7ed4(long *param_1,char param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    if (param_3 < uVar2) {
      uVar2 = param_3 + 1;
    }
    while (uVar2 != 0) {
      pcVar1 = (char *)(*param_1 + -1 + uVar2);
      uVar2 = uVar2 - 1;
      if (*pcVar1 == param_2) {
        return uVar2;
      }
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 1080e7f84; end: 1080e8013;  */

void FUN_1080e7f84(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  undefined1 uStack_41;
  
  FUN_1080e8014(param_1,param_6 + param_4,&uStack_41);
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  if (param_4 != 0) {
    _memmove(plVar1,param_3,param_4);
  }
  if (param_6 != 0) {
    _memmove((long)plVar1 + param_4,param_5,param_6);
  }
  *(undefined1 *)((long)plVar1 + param_4 + param_6) = 0;
  return;
}



/* Entry: 1080e8014; end: 1080e8087;  */

ulong * FUN_1080e8014(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 < 0x7ffffffffffffff7) {
    if (param_2 < 0x17) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      *(char *)((long)param_1 + 0x17) = (char)param_2;
    }
    else {
      uVar1 = 0x19;
      if ((param_2 | 7) != 0x17) {
        uVar1 = (param_2 | 7) + 1;
      }
      uVar4 = uVar1;
      __Znwm();
      param_1[1] = param_2;
      param_1[2] = uVar1 | 0x8000000000000000;
      *param_1 = uVar4;
    }
    return param_1;
  }
  FUN_1080e3ea0();
  iVar3 = (int)param_1;
  uVar2 = iVar3 - 0x37;
  if (5 < iVar3 - 0x41U) {
    uVar2 = 0xffffffff;
  }
  if (iVar3 - 0x61U < 6) {
    uVar2 = iVar3 - 0x57;
  }
  if (iVar3 - 0x30U < 10) {
    uVar2 = iVar3 - 0x30U;
  }
  return (ulong *)(ulong)uVar2;
}



/* Entry: 1080e8088; end: 1080e80fb;  */

uint FUN_1080e8088(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 0x37;
  if (5 < param_1 - 0x41U) {
    uVar1 = 0xffffffff;
  }
  if (param_1 - 0x61U < 6) {
    uVar1 = param_1 - 0x57;
  }
  if (param_1 - 0x30U < 10) {
    uVar1 = param_1 - 0x30U;
  }
  return uVar1;
}



/* Entry: 1080e80fc; end: 1080e8207;  */

undefined8 * FUN_1080e80fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  *param_1 = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  func_0x0001003a83dc(&uStack_28,&UNK_10f47a93f);
  func_0x0001080e9938(param_1 + 4);
  func_0x0001003a8cb8(uStack_28);
  func_0x0001003a83dc(&uStack_28,&UNK_10f47a94e);
  func_0x0001080e9938(param_1 + 5);
  func_0x0001003a8cb8(uStack_28);
  param_1[0xb] = 0;
  param_1[6] = &UNK_10dd5b8b0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  func_0x0001080e9c4c(param_1[4],param_1 + 5);
  return param_1;
}



/* Entry: 1080e8208; end: 1080e82eb;  */

long * FUN_1080e8208(undefined8 *param_1,long param_2,undefined *param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long *plStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  FUN_1080e82ec(param_2 + 0x30);
  func_0x0001080e99ec();
  if ((bool)in_ZR) {
    param_3 = &UNK_10f47a95b;
    func_0x00010b99f5f8(&plStack_70,&UNK_10f47a95b);
    uStack_60 = 2;
    plStack_58 = plStack_70;
    plStack_70 = (long *)0x0;
    func_0x0001080e99b8();
    func_0x0001080e9030(&uStack_60);
    plVar1 = plStack_70;
    func_0x000104bda960();
  }
  else {
    func_0x0001080e9904(&plStack_70);
    uStack_60 = 1;
    plStack_58 = plStack_70;
    uStack_50 = uStack_68;
    func_0x0001080e99b8();
    func_0x0001080e9030(&uStack_60);
    plVar1 = (long *)0x0;
    func_0x0001078bdbb8();
  }
  func_0x0001080e98bc(uStack_48);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1080e82ec;
  plVar2 = plVar1;
  uStack_90 = param_5;
  puStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_1080e90a8();
  plVar3 = plVar1;
  FUN_1080e90cc(plVar1,param_3,plVar2,&lStack_98);
  if ((int)plVar3 == 0) {
    plVar1 = (long *)(*plVar1 + plVar1[3]);
  }
  else {
    plVar1 = (long *)(*plVar1 + lStack_98);
  }
  return plVar1;
}



/* Entry: 1080e82ec; end: 1080e835b;  */

long FUN_1080e82ec(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_1080e90a8();
  plVar2 = param_1;
  FUN_1080e90cc(param_1,param_2,plVar1,&lStack_28);
  if ((int)plVar2 == 0) {
    lStack_28 = *param_1 + param_1[3];
  }
  else {
    lStack_28 = *param_1 + lStack_28;
  }
  return lStack_28;
}



/* Entry: 1080e835c; end: 1080e85e3;  */

void FUN_1080e835c(long *param_1,ulong *param_2,undefined8 param_3,long *param_4,uint param_5,
                  uint param_6)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  double dVar16;
  float fVar17;
  long alStack_a8 [3];
  undefined8 uStack_90;
  long lStack_88;
  ulong auStack_80 [3];
  undefined8 uStack_68;
  
  lStack_88 = 0;
  lVar12 = *(long *)(*(long *)(*param_4 + 0x30) + 0x18);
  uVar3 = *(uint *)(lVar12 + 0x20);
  uVar4 = *(uint *)(lVar12 + 0x24);
  fVar17 = 1.0;
  if ((param_6 != 0 || param_5 != 0) && (fVar17 = 1.0, uVar3 != param_5 || uVar4 != param_6)) {
    uVar2 = uVar4;
    if ((int)param_6 <= (int)param_5) {
      uVar2 = uVar3;
    }
    uVar13 = param_5;
    if ((int)param_5 <= (int)param_6) {
      uVar13 = param_6;
    }
    if ((int)uVar13 <= (int)uVar2) {
      iVar5 = 1;
      do {
        iVar14 = iVar5;
        iVar5 = iVar14 << 1;
        iVar6 = 0;
        if (iVar5 != 0) {
          iVar6 = (int)uVar2 / iVar5;
        }
      } while ((int)uVar13 <= iVar6);
      dVar16 = (double)(int)uVar3 / (double)(int)uVar4;
      uVar13 = (uint)((double)(int)uVar4 / (double)iVar14);
      uVar15 = (uint)((double)(int)uVar3 / (double)iVar14);
      uVar2 = (int)(dVar16 * (double)(int)uVar13);
      if ((int)param_6 <= (int)param_5) {
        uVar2 = uVar15;
      }
      if ((int)param_6 <= (int)param_5) {
        uVar13 = (int)((double)(int)uVar15 / dVar16);
      }
      fVar17 = (float)iVar14;
      if (uVar3 != uVar2 || uVar4 != uVar13) {
        puVar9 = param_2;
        func_0x0001003a8364();
        auStack_80[1] = 0;
        uStack_68 = 0;
        auStack_80[0] = (ulong)uVar2;
        auStack_80[2] = (ulong)uVar13;
        func_0x0001003a91d4(&UNK_10f47a965);
        func_0x0001003a9204(alStack_a8);
        func_0x0001003ac750(&uStack_90,puVar9,alStack_a8);
        func_0x00010b9a6368(auStack_80,param_3,&uStack_90);
        func_0x0001003a8cb8(uStack_90);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_a8);
        puVar9 = param_2 + 6;
        puVar11 = auStack_80;
        FUN_1080e82ec(puVar9,puVar11);
        if ((ulong *)(param_2[6] + param_2[9]) == puVar9) {
          FUN_1080e9b54(alStack_a8,*param_4,auStack_80,(ulong)uVar2,(ulong)uVar13);
          uVar10 = param_2[4];
          func_0x0001080e9c4c(uVar10,alStack_a8);
          lVar12 = alStack_a8[0];
          __ZNSt3__16chrono12steady_clock3nowEv();
          *(ulong *)(lVar12 + 0x38) = uVar10;
          FUN_1080e85e4(&lStack_88,lVar12 + 0x30);
          FUN_1080e862c(param_2 + 6,auStack_80);
          FUN_1080e8654();
          lVar12 = alStack_a8[0] + 0x30;
          FUN_1080e9a14();
          param_2[1] = param_2[1] + lVar12;
          func_0x0001080e9930();
        }
        else {
          FUN_1080e869c(alStack_a8,param_2,puVar11 + 1);
          FUN_1080e8714(&lStack_88,alStack_a8);
          func_0x0001078bdbb8(alStack_a8[0]);
        }
        func_0x0001003a8cb8(auStack_80[0]);
        goto LAB_1080e8504;
      }
    }
  }
  FUN_1080e869c(auStack_80,param_2,param_4);
  FUN_1080e8714(&lStack_88,auStack_80);
  func_0x0001078bdbb8(auStack_80[0]);
LAB_1080e8504:
  if (*param_2 < param_2[1]) {
    FUN_1080e873c(param_2,1);
  }
  if ((lStack_88 != 0) && (*(long *)(lStack_88 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lStack_88 + 0x10) + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  *param_1 = lStack_88;
  *(float *)(param_1 + 1) = fVar17;
  func_0x0001078bdbb8();
  return;
}



/* Entry: 1080e85e4; end: 1080e862b;  */

void FUN_1080e85e4(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  long *unaff_x19;
  
  func_0x0001080e9974();
  if (!(bool)in_ZR) {
    lVar1 = *param_2;
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
      do {
        func_0x0001080e9918();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *unaff_x19 = lVar1;
    func_0x0001078bdbb8();
  }
  return;
}



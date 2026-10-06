/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b93e69c; end: 10b93e6db;  */

long * FUN_10b93e69c(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  FUN_10b93e704();
  func_0x00010b93f56c();
  func_0x00010b93f698();
  FUN_10b93e750();
  func_0x00010b93f500();
  return param_1;
}



/* Entry: 10b93e6dc; end: 10b93e703;  */

void FUN_10b93e6dc(void)

{
  func_0x00010b93f56c();
  func_0x00010b93f698();
  FUN_10b93e750();
  func_0x00010b93f500();
  return;
}



/* Entry: 10b93e704; end: 10b93e70f;  */

void FUN_10b93e704(void)

{
  _abort();
  FUN_10b93e734();
  return;
}



/* Entry: 10b93e710; end: 10b93e733;  */

void FUN_10b93e710(void)

{
  FUN_10b93e734();
  return;
}



/* Entry: 10b93e734; end: 10b93e74f;  */

void FUN_10b93e734(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104bfe188();
    for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
      *param_4 = *puVar1;
      *puVar1 = 0;
      param_4 = param_4 + 1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      func_0x0001080d5ad4();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
  return;
}



/* Entry: 10b93e750; end: 10b93e76f;  */

void FUN_10b93e750(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
    *param_4 = *puVar1;
    *puVar1 = 0;
    param_4 = param_4 + 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    func_0x0001080d5ad4();
  }
  return;
}



/* Entry: 10b93e770; end: 10b93e7cb;  */

void FUN_10b93e770(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x0001080d5ad4();
  }
  return;
}



/* Entry: 10b93e7cc; end: 10b93e7d3;  */

void FUN_10b93e7cc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b93f56c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001080d5ad4();
  }
  return;
}



/* Entry: 10b93e7d4; end: 10b93e877;  */

void FUN_10b93e7d4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b93f56c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001080d5ad4();
  }
  return;
}



/* Entry: 10b93e878; end: 10b93e87f;  */

void FUN_10b93e878(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b93f56c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001080d5ad4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b93e880; end: 10b93e8d7;  */

void FUN_10b93e880(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b93f56c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001080d5ad4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b93e8d8; end: 10b93e8db;  */

void FUN_10b93e8d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77ce8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b93e8dc; end: 10b93e8ef;  */

void FUN_10b93e8dc(void)

{
  func_0x00010b93e8f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b93e8f0; end: 10b93e907;  */

void FUN_10b93e8f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b93f74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b93e908; end: 10b93e91b;  */

void FUN_10b93e908(void)

{
  func_0x00010b93e924();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b93e91c; end: 10b93e92f;  */

void FUN_10b93e91c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b93f74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b93e930; end: 10b93e973;  */

void FUN_10b93e930(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x00010b93e954(&lStack_18);
  return;
}



/* Entry: 10b93e974; end: 10b93ea3b;  */

void FUN_10b93e974(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_10b93ea3c(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_10b93e9bc;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_10b93e9bc;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_10b93ea10:
    FUN_10b93ea7c(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_10b93ea10;
    }
    func_0x00010b93eba4(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_10b93ea3c(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_10b93e9bc:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 10b93ea3c; end: 10b93ea7b;  */

ulong FUN_10b93ea3c(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b93ea7c; end: 10b93ed4b;  */

void FUN_10b93ea7c(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x10;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_10b93ed4c();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_10b93ea3c(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_10b93ed6c(param_1[1] + lVar4 * 0x10,lVar5);
    }
    lVar5 = lVar5 + 0x10;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b93ed4c; end: 10b93ed6b;  */

void FUN_10b93ed4c(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_1);
  return;
}



/* Entry: 10b93ed6c; end: 10b93ed9b;  */

undefined8 FUN_10b93ed6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001080d5ad4(param_2 + 1);
  func_0x00010007e5d0(param_2);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b93ed9c; end: 10b93ede3;  */

long FUN_10b93ed9c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b93ede4();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b93ede4; end: 10b93ee63;  */

bool FUN_10b93ede4(long param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x9;
  ulong extraout_x10;
  long extraout_x11;
  long extraout_x12;
  ulong extraout_x13;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  func_0x00010b93f784();
  lVar1 = extraout_x8;
  uVar2 = extraout_x13;
  while( true ) {
    uVar2 = uVar2 & extraout_x9;
    uVar4 = *(ulong *)(extraout_x11 + uVar2);
    lVar5 = *param_2;
    for (uVar3 = (uVar4 ^ extraout_x10) + extraout_x12 & (uVar4 ^ extraout_x10 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar6 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar2 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & extraout_x9;
      *param_4 = uVar6;
      if (*(long *)(*(long *)(param_1 + 8) + uVar6 * 0x10) == lVar5) goto LAB_10b93f720;
    }
    if ((uVar4 & ~uVar4 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar2 = lVar1 + uVar2;
  }
LAB_10b93f720:
  return uVar3 != 0;
}



/* Entry: 10b93ee64; end: 10b93eed7;  */

long FUN_10b93ee64(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  long lStack_28;
  
  func_0x00010b93f56c();
  FUN_10b8be800();
  plVar1 = unaff_x20;
  FUN_10b93eed8();
  if ((int)plVar1 == 0) {
    lVar2 = *unaff_x20 + unaff_x20[3];
  }
  else {
    lVar2 = *unaff_x20 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b93eed8; end: 10b93ef53;  */

bool FUN_10b93eed8(long param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x9;
  ulong extraout_x10;
  long extraout_x11;
  long extraout_x12;
  ulong extraout_x13;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  func_0x00010b93f784();
  lVar1 = extraout_x8;
  uVar2 = extraout_x13;
  while( true ) {
    uVar2 = uVar2 & extraout_x9;
    uVar4 = *(ulong *)(extraout_x11 + uVar2);
    lVar5 = *param_2;
    for (uVar3 = (uVar4 ^ extraout_x10) + extraout_x12 & (uVar4 ^ extraout_x10 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar6 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar2 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & extraout_x9;
      *param_4 = uVar6;
      if (*(long *)(*(long *)(param_1 + 8) + uVar6 * 8) == lVar5) goto LAB_10b93f720;
    }
    if ((uVar4 & ~uVar4 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar2 = lVar1 + uVar2;
  }
LAB_10b93f720:
  return uVar3 != 0;
}



/* Entry: 10b93ef54; end: 10b93ef77;  */

void FUN_10b93ef54(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10b93ef78(&uStack_18);
  return;
}



/* Entry: 10b93ef78; end: 10b93ef7f;  */

void FUN_10b93ef78(long *param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  plVar10 = (long *)*param_2;
  plVar4 = plVar10;
  FUN_10b8be800();
  plVar5 = plVar10;
  plVar7 = param_3;
  func_0x00010b8be824();
  uVar6 = SUB81(plVar7,0);
  if (((ulong)plVar7 & 1) != 0) {
    lVar8 = plVar10[1];
    lVar9 = *param_3;
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(long *)(lVar8 + (long)plVar5 * 8) = lVar9;
    *(byte *)(*plVar10 + (long)plVar5) = (byte)plVar4 & 0x7f;
    func_0x00010b93f544();
  }
  lVar8 = plVar10[1];
  *param_1 = *plVar10 + (long)plVar5;
  param_1[1] = lVar8 + (long)plVar5 * 8;
  *(undefined1 *)(param_1 + 2) = uVar6;
  return;
}



/* Entry: 10b93ef80; end: 10b93f04f;  */

void FUN_10b93ef80(long *param_1,undefined8 *param_2,ulong param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = (long *)*param_2;
  plVar4 = plVar9;
  FUN_10b8be800();
  plVar5 = plVar9;
  func_0x00010b8be824();
  uVar6 = (undefined1)param_3;
  if ((param_3 & 1) != 0) {
    lVar7 = plVar9[1];
    lVar8 = *param_4;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(long *)(lVar7 + (long)plVar5 * 8) = lVar8;
    *(byte *)(*plVar9 + (long)plVar5) = (byte)plVar4 & 0x7f;
    func_0x00010b93f544();
  }
  lVar7 = plVar9[1];
  *param_1 = *plVar9 + (long)plVar5;
  param_1[1] = lVar7 + (long)plVar5 * 8;
  *(undefined1 *)(param_1 + 2) = uVar6;
  return;
}



/* Entry: 10b93f050; end: 10b93f053;  */

void FUN_10b93f050(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77d88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b93f054; end: 10b93f067;  */

void FUN_10b93f054(void)

{
  FUN_10b93f0b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b93f068; end: 10b93f0b3;  */

long FUN_10b93f068(long param_1)

{
  long *plVar1;
  
  FUN_10b948a20(param_1 + 0x88);
  FUN_10b9a1f08(param_1 + 0x40);
  plVar1 = (long *)(param_1 + 0x28);
  if (*plVar1 != 0) {
    func_0x00010b93abac(plVar1);
    __ZdlPv(*plVar1);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 0x18;
}



/* Entry: 10b93f0b4; end: 10b93f0c3;  */

void FUN_10b93f0b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b93f0c4; end: 10b93f11b;  */

undefined1 * FUN_10b93f0c4(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  int extraout_w11;
  undefined1 auStack_28 [16];
  undefined8 uStack_18;
  
  func_0x00010b93f470();
  func_0x00010b93f648();
  if ((bool)in_ZR) {
    func_0x00010b93f6b0();
  }
  else {
    if (extraout_x8 != 0) {
      do {
        func_0x00010b93f4b4();
      } while (extraout_w11 != 0);
    }
    func_0x00010b93f578();
    func_0x00010b93f750();
  }
  puVar1 = auStack_28;
  func_0x0001080c6234();
  func_0x00010b93f45c(uStack_18);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (*(long *)(puVar1 + 0x10) != 0) {
      func_0x000107c27b90();
    }
    return puVar1 + 8;
  }
  return puVar1;
}



/* Entry: 10b93f11c; end: 10b93f163;  */

long FUN_10b93f11c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c27b90();
  }
  return param_1 + 8;
}



/* Entry: 10b93f164; end: 10b93f203;  */

long * FUN_10b93f164(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  int extraout_w11;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010b93f470();
  lStack_38 = *param_1;
  lStack_30 = param_1[1];
  *param_1 = 0;
  uVar1 = false;
  uStack_28 = extraout_x8;
  if (lStack_38 == 1) {
    FUN_10b92dcf8(param_2[2],&lStack_30);
    uVar1 = lStack_38 == 1;
    if ((bool)uVar1) {
      func_0x00010b93f6b0(param_2[3]);
      goto LAB_10b93f1e4;
    }
  }
  if (lStack_30 != 0) {
    do {
      func_0x00010b93f4b4();
    } while (extraout_w11 != 0);
  }
  func_0x00010b93f578();
  func_0x00010b93f750();
LAB_10b93f1e4:
  plVar2 = &lStack_38;
  FUN_10b93a728(plVar2);
  func_0x00010b93f45c(uStack_28);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b93b160(plVar2 + 2);
    func_0x0001080d5efc(plVar2 + 1);
    func_0x0001080d5af4();
    return param_2;
  }
  return plVar2;
}



/* Entry: 10b93f204; end: 10b93f287;  */

undefined8 FUN_10b93f204(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b93b160(param_1 + 0x10);
  func_0x0001080d5efc(param_1 + 8);
  func_0x0001080d5af4();
  return unaff_x19;
}



/* Entry: 10b93f288; end: 10b93f2df;  */

undefined1 * FUN_10b93f288(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  int extraout_w11;
  undefined1 auStack_28 [16];
  undefined8 uStack_18;
  
  func_0x00010b93f470();
  func_0x00010b93f648();
  if ((bool)in_ZR) {
    func_0x00010b93f6b0();
  }
  else {
    if (extraout_x8 != 0) {
      do {
        func_0x00010b93f4b4();
      } while (extraout_w11 != 0);
    }
    func_0x00010b93f578();
    func_0x00010b93f750();
  }
  puVar1 = auStack_28;
  FUN_10b92b010();
  func_0x00010b93f45c(uStack_18);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (*(long *)(puVar1 + 0x10) != 0) {
      func_0x000107c27b90();
    }
    return puVar1 + 8;
  }
  return puVar1;
}



/* Entry: 10b93f2e0; end: 10b93f327;  */

long FUN_10b93f2e0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c27b90();
  }
  return param_1 + 8;
}



/* Entry: 10b93f328; end: 10b93f37b;  */

void FUN_10b93f328(long *param_1)

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
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x10;
  }
  return;
}



/* Entry: 10b93f37c; end: 10b93f3b7;  */

void FUN_10b93f37c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  long *unaff_x21;
  
  func_0x00010b93f66c();
  func_0x0001080d5a38(param_3);
  uVar2 = 0;
  unaff_x21[2] = unaff_x21[2] + -1;
  puVar3 = (undefined1 *)((long)unaff_x20 + (-8 - *unaff_x21));
  uVar5 = *(ulong *)(*unaff_x21 + ((ulong)puVar3 & unaff_x21[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *unaff_x20 & ~*unaff_x20 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)unaff_x20 = uVar4;
  *(undefined1 *)(*unaff_x21 + (unaff_x21[3] & 7U) + (unaff_x21[3] & (ulong)puVar3) + 1) = uVar4;
  unaff_x21[5] = unaff_x21[5] + uVar2;
  return;
}



/* Entry: 10b93f3b8; end: 10b93f7ab;  */

void FUN_10b93f3b8(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 10b93f7ac; end: 10b93f80b;  */

undefined8 * FUN_10b93f7ac(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_FUN_110d77e38;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110d77ed0;
  func_0x00010b8fc328(param_1 + 4);
  param_1[10] = 0;
  if (param_1[6] != 0) {
    FUN_10b93f80c(param_1 + 4);
    func_0x00010b8d0b74(param_1 + 10,param_2 + 8);
  }
  return param_1;
}



/* Entry: 10b93f80c; end: 10b93f837;  */

undefined1  [16] FUN_10b93f80c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10b93fb1c(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b93f838; end: 10b93f883;  */

undefined8 * FUN_10b93f838(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77e38;
  param_1[3] = &PTR_DAT_110d77ed0;
  FUN_10b8a1838(param_1 + 10);
  FUN_10b8f78dc(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b93f884; end: 10b93f88f;  */

undefined8 * FUN_10b93f884(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77e38;
  param_1[3] = &PTR_DAT_110d77ed0;
  FUN_10b8a1838(param_1 + 10);
  FUN_10b8f78dc(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b93f890; end: 10b93f8a3;  */

void FUN_10b93f890(void)

{
  FUN_10b93f838();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b93f8a4; end: 10b93f91f;  */

void FUN_10b93f8a4(long param_1)

{
  FUN_10b93f838(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b93f920; end: 10b93fae3;  */

void FUN_10b93f920(ulong *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uStack_58;
  long lStack_50;
  undefined2 uStack_48;
  
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (param_2 != 0) {
      uVar4 = param_2;
      FUN_10b9a5818();
      if ((uVar4 & 1) == 0) {
        FUN_10b9a5890();
        return;
      }
      if (*(long *)(param_2 + 0x10) != 0) {
        plVar5 = (long *)(*(long *)(param_2 + 0x10) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    *param_1 = param_2;
    if (param_2 != 0) {
      func_0x0001003a90c4(&stack0xffffffffffffffe0);
      return;
    }
    return;
  }
  uVar4 = param_2 + 0x20;
  FUN_10b8fc070(uVar4,lVar11 + 0x10);
  lVar6 = 0;
  uVar8 = uVar4 >> 7;
  uVar7 = *(ulong *)(param_2 + 0x38);
  while( true ) {
    uVar8 = uVar8 & uVar7;
    uVar9 = *(ulong *)(*(long *)(param_2 + 0x20) + uVar8);
    uVar10 = uVar9 ^ (uVar4 & 0x7f) * 0x101010101010101;
    for (uVar10 = uVar10 + 0xfefefefefefefeff & (uVar10 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar12 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar8 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar7;
      lVar13 = *(long *)(param_2 + 0x28);
      if (*(long *)(lVar13 + uVar12 * 0x10) == *(long *)(lVar11 + 0x10)) {
        if (uVar7 != uVar12) {
          plVar5 = (long *)*param_3;
          if (plVar5 == (long *)0x0) {
            lStack_50 = param_3[1];
            uStack_58 = 0;
            uStack_48 = (undefined2)param_3[2];
          }
          else {
            plVar1 = plVar5 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lStack_50 = param_3[1];
            uStack_48 = (undefined2)param_3[2];
            uStack_58 = 0;
            do {
              lVar11 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar11 + -1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
          plVar5 = *(long **)(lVar13 + uVar12 * 0x10 + 8);
          (**(code **)(*plVar5 + 0x40))(param_1,plVar5,&uStack_58);
          func_0x00010b8a2000(uStack_58);
          return;
        }
        goto LAB_10b93fa3c;
      }
    }
    if ((uVar9 & ~uVar9 << 6 & 0x8080808080808080) != 0) break;
    lVar6 = lVar6 + 8;
    uVar8 = lVar6 + uVar8;
  }
LAB_10b93fa3c:
  *param_1 = 0;
  return;
}



/* Entry: 10b93fae4; end: 10b93fb1b;  */

void FUN_10b93fae4(void)

{
  return;
}



/* Entry: 10b93fb1c; end: 10b93fbb3;  */

void FUN_10b93fb1c(long *param_1)

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
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x10;
  }
  return;
}



/* Entry: 10b93fbb4; end: 10b93fbb7;  */

undefined8 * FUN_10b93fbb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77f38;
  func_0x000107c278f4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b93fbb8; end: 10b93fbcb;  */

void FUN_10b93fbb8(void)

{
  func_0x00010b93fb74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b93fbcc; end: 10b93fc13;  */

undefined8 * FUN_10b93fbcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77f80;
  func_0x000104bfe1e0(param_1 + 0xc);
  func_0x000105c3d214(param_1 + 6);
  if (param_1[3] != 0) {
    func_0x00010b9406a8();
  }
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b93fc14; end: 10b93fc17;  */

undefined8 * FUN_10b93fc14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77f80;
  func_0x000104bfe1e0(param_1 + 0xc);
  func_0x000105c3d214(param_1 + 6);
  if (param_1[3] != 0) {
    func_0x00010b9406a8();
  }
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b93fc18; end: 10b93fc2b;  */

void FUN_10b93fc18(void)

{
  FUN_10b93fbcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b93fc2c; end: 10b93fceb;  */

bool FUN_10b93fc2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  func_0x00010b93fc64(lVar1);
  return *(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x48) != lVar1;
}



/* Entry: 10b93fcec; end: 10b93fd23;  */

undefined1  [16]
FUN_10b93fcec(int *param_1,long param_2,undefined8 param_3,undefined1 *param_4,undefined8 param_5)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  long **pplVar10;
  undefined ***UNRECOVERED_JUMPTABLE;
  undefined ***UNRECOVERED_JUMPTABLE_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar11;
  undefined8 extraout_x8_01;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *unaff_x19;
  undefined8 *puVar16;
  long *unaff_x21;
  undefined **unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long *plStack_348;
  undefined1 ****ppppuStack_340;
  code *pcStack_338;
  long alStack_328 [3];
  long alStack_310 [3];
  long alStack_2f8 [3];
  long *plStack_2e0;
  undefined **ppuStack_2d8;
  undefined ***pppuStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined **ppuStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined8 *puStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long *plStack_98;
  int *piStack_90;
  undefined ***pppuStack_88;
  long alStack_80 [3];
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 auStack_28 [16];
  byte bStack_18;
  
  UNRECOVERED_JUMPTABLE = (undefined ***)(*(long *)(param_1 + 0x18) + param_2 * 8);
  func_0x00010b93fc94(auStack_28);
  if ((bStack_18 & 1) != 0) {
    return auStack_28;
  }
  func_0x0001080da3e4();
  pcStack_38 = FUN_10b93fd24;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x00010b9406b4();
  uVar6 = UNRECOVERED_JUMPTABLE == (undefined ***)0x4;
  uStack_58 = extraout_x8;
  if ((UNRECOVERED_JUMPTABLE < (undefined ***)0x4) || (uVar6 = *param_1 == -0x2d04ad8, !(bool)uVar6)
     ) {
    plStack_98 = (long *)0x0;
    piStack_90 = param_1;
    pppuStack_88 = UNRECOVERED_JUMPTABLE;
    func_0x00010b9406c8(&plStack_98);
    plVar7 = plStack_98;
    if (plStack_98 == (long *)0x0) goto LAB_10b93fde4;
    UNRECOVERED_JUMPTABLE = *(undefined ****)(*plStack_98 + 0x18);
    func_0x00010b940694(uStack_58);
    if ((bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010b93fdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)();
      auVar17._8_8_ = UNRECOVERED_JUMPTABLE;
      auVar17._0_8_ = plVar7;
      return auVar17;
    }
  }
  else {
    FUN_10b9406e0(&lStack_68);
    uVar6 = lStack_68 == 1;
    if ((bool)uVar6) {
      FUN_10b99daa0(alStack_80,uStack_60);
      func_0x00010b9406c8(alStack_80);
      if (alStack_80[0] != 0) {
        func_0x00010b9406a8();
      }
    }
    else {
      *unaff_x19 = 2;
      unaff_x19[1] = uStack_60;
      uStack_60 = 0;
    }
    plVar7 = &lStack_68;
    FUN_10b940390();
LAB_10b93fde4:
    func_0x00010b940694(uStack_58);
    if ((bool)uVar6) {
      auVar18._8_8_ = UNRECOVERED_JUMPTABLE;
      auVar18._0_8_ = plVar7;
      return auVar18;
    }
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_10b93fe04;
  plVar8 = plVar7;
  ppuStack_b0 = &puStack_40;
  func_0x00010b9406b4();
  lStack_228 = plVar8[1];
  lStack_220 = lStack_228 + plVar8[2];
  uStack_128 = 0;
  puStack_150 = &UNK_10dd5b8b0;
  lStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_118 = extraout_x8_00;
  FUN_10b98eba0(&lStack_170,&lStack_228);
  uVar6 = lStack_170 == 1;
  if ((bool)uVar6) {
    unaff_x24 = 0x18;
    puVar16 = unaff_x19;
    for (unaff_x21 = plStack_168; uStack_190 = uStack_128, uStack_1a0 = uStack_138,
        uStack_1a8 = uStack_140, uStack_178 = uStack_230, uStack_180 = uStack_238,
        uStack_188 = uStack_240, uVar6 = unaff_x21 == plStack_160, !(bool)uVar6;
        unaff_x21 = unaff_x21 + 3) {
      unaff_x23 = unaff_x21[1];
      puVar16 = (undefined8 *)unaff_x21[2];
      unaff_x22 = &puStack_150;
      FUN_10b94024c(unaff_x22,unaff_x21);
      lVar11 = 0;
      uVar13 = (ulong)unaff_x22 >> 7;
      while( true ) {
        uVar13 = uVar13 & uStack_138;
        uVar14 = *(ulong *)(puStack_150 + uVar13);
        uVar15 = uVar14 ^ ((ulong)unaff_x22 & 0x7f) * 0x101010101010101;
        for (uVar15 = uVar15 + 0xfefefefefefefeff & (uVar15 ^ 0xffffffffffffffff) &
                      0x8080808080808080; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
          uVar2 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          ppuVar9 = (undefined **)
                    (uVar13 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uStack_138);
          if (*(long *)(lStack_148 + (long)ppuVar9 * 0x18) == *unaff_x21) goto LAB_10b93ff90;
        }
        if ((uVar14 & ~uVar14 << 6 & 0x8080808080808080) != 0) break;
        lVar11 = lVar11 + 8;
        uVar13 = lVar11 + uVar13;
      }
      ppuVar9 = &puStack_150;
      func_0x00010b940404(ppuVar9,unaff_x22);
      lVar11 = *unaff_x21;
      if (lVar11 != 0) {
        piVar1 = (int *)(lVar11 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar12 = (long *)(lStack_148 + (long)ppuVar9 * 0x18);
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = lVar11;
      bVar5 = (byte)unaff_x22 & 0x7f;
      puStack_150[(long)ppuVar9] = bVar5;
      puStack_150[(uStack_138 & 7) + (uStack_138 & (ulong)(ppuVar9 + -1)) + 1] = bVar5;
LAB_10b93ff90:
      lVar11 = lStack_148 + (long)ppuVar9 * 0x18;
      *(long *)(lVar11 + 8) = unaff_x23;
      *(undefined8 **)(lVar11 + 0x10) = puVar16;
      func_0x00010811ffc4(&uStack_240,unaff_x21);
    }
    lStack_1d0 = *plVar7;
    *plVar7 = 0;
    lStack_1c0 = plVar8[2];
    lStack_1c8 = plVar8[1];
    uStack_128 = 0;
    lStack_1b0 = lStack_148;
    puStack_1b8 = puStack_150;
    uStack_230 = 0;
    uStack_238 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1f0 = 0;
    ppuStack_1e8 = &PTR_FUN_110d77f80;
    puStack_218 = &UNK_10dd5b8b0;
    uStack_210 = 0;
    puStack_150 = &UNK_10dd5b8b0;
    lStack_148 = 0;
    uStack_200 = 0;
    uStack_208 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_250 = 0;
    uStack_258 = 0;
    *unaff_x19 = 1;
    UNRECOVERED_JUMPTABLE = &ppuStack_1e8;
    func_0x000105c3cef0(unaff_x19 + 1);
    FUN_10b93fbcc(&ppuStack_1e8);
    func_0x000104bfe1e0(&uStack_258);
    func_0x000105c3d214(&puStack_218);
    unaff_x19 = puVar16;
  }
  else {
    *unaff_x19 = 2;
    unaff_x19[1] = plStack_168;
    plStack_168 = (long *)0x0;
  }
  FUN_10b923ec4(&lStack_170);
  func_0x000104bfe1e0(&uStack_240);
  ppuVar9 = &puStack_150;
  func_0x000105c3d214();
  func_0x00010b940694(uStack_118);
  if ((bool)uVar6) {
    auVar19._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar19._0_8_ = ppuVar9;
    return auVar19;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_10b9400ac;
  UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
  uStack_2a0 = unaff_x24;
  lStack_298 = unaff_x23;
  ppuStack_290 = unaff_x22;
  plStack_288 = unaff_x21;
  plStack_280 = plVar7;
  puStack_278 = unaff_x19;
  pppuStack_270 = &ppuStack_b0;
  func_0x00010b9406b4();
  uVar6 = UNRECOVERED_JUMPTABLE_00 == (undefined ***)0x4;
  uStack_2a8 = extraout_x8_01;
  if ((UNRECOVERED_JUMPTABLE_00 < (undefined ***)0x4) ||
     (uVar6 = *(int *)ppuVar9 == -0x2d04ad8, !(bool)uVar6)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    plStack_2e0 = (long *)0x0;
    ppuStack_2d8 = ppuVar9;
    pppuStack_2d0 = UNRECOVERED_JUMPTABLE;
    func_0x00010b9406c8(&plStack_2e0);
    plVar7 = plStack_2e0;
    if (plStack_2e0 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(undefined ****)(*plStack_2e0 + 0x18);
      func_0x00010b940694(uStack_2a8);
      if ((bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010b9401b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE_00)();
        auVar20._8_8_ = UNRECOVERED_JUMPTABLE_00;
        auVar20._0_8_ = plVar7;
        return auVar20;
      }
      goto LAB_10b940248;
    }
  }
  else {
    FUN_10b9a25d8(alStack_2f8,param_3);
    FUN_10b99e72c(alStack_2f8,1);
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
    FUN_10b9409ec(&lStack_2b8,ppuVar9,UNRECOVERED_JUMPTABLE,param_3,param_5);
    uVar6 = lStack_2b8 == 1;
    if ((bool)uVar6) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      func_0x00010b934328(alStack_310,uStack_2b0);
      func_0x00010b9406c8(alStack_310);
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      if (alStack_310[0] != 0) {
        func_0x00010b9406a8();
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
      }
    }
    else {
      FUN_10b9406e0(&lStack_2c8,ppuVar9,UNRECOVERED_JUMPTABLE);
      uVar6 = lStack_2c8 == 1;
      if ((bool)uVar6) {
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 0;
        }
        FUN_10b99daa0(alStack_328,uStack_2c0);
        func_0x00010b9406c8(alStack_328);
        if (alStack_328[0] != 0) {
          func_0x00010b9406a8();
        }
      }
      else {
        *unaff_x19 = 2;
        unaff_x19[1] = uStack_2c0;
        uStack_2c0 = 0;
      }
      FUN_10b940390(&lStack_2c8);
    }
    func_0x00010b9403b8(&lStack_2b8);
    plVar7 = alStack_2f8;
    func_0x0001080c9d44();
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
  }
  func_0x00010b940694(uStack_2a8);
  if ((bool)uVar6) {
    auVar21._8_8_ = UNRECOVERED_JUMPTABLE_00;
    auVar21._0_8_ = plVar7;
    return auVar21;
  }
LAB_10b940248:
  ___stack_chk_fail();
  pcStack_338 = FUN_10b94024c;
  plStack_348 = plVar7 + 5;
  pplVar10 = &plStack_348;
  ppppuStack_340 = &pppuStack_270;
  FUN_10b94036c(pplVar10);
  auVar22._8_8_ = UNRECOVERED_JUMPTABLE_00;
  auVar22._0_8_ = pplVar10;
  return auVar22;
}



/* Entry: 10b93fd24; end: 10b93fe03;  */

void FUN_10b93fd24(int *param_1,undefined ***UNRECOVERED_JUMPTABLE,undefined8 param_3,
                  undefined1 *param_4,undefined8 param_5)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar11;
  undefined8 extraout_x8_01;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *unaff_x19;
  undefined8 *puVar16;
  long *unaff_x21;
  undefined **unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long *plStack_318;
  undefined1 ***pppuStack_310;
  code *pcStack_308;
  long alStack_2f8 [3];
  long alStack_2e0 [3];
  long alStack_2c8 [3];
  long *plStack_2b0;
  undefined **ppuStack_2a8;
  undefined ***pppuStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined **ppuStack_260;
  long *plStack_258;
  long *plStack_250;
  undefined8 *puStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined1 *puStack_80;
  code *pcStack_78;
  long *plStack_68;
  int *piStack_60;
  undefined ***pppuStack_58;
  long alStack_50 [3];
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b9406b4();
  uVar6 = UNRECOVERED_JUMPTABLE == (undefined ***)0x4;
  uStack_28 = extraout_x8;
  if ((UNRECOVERED_JUMPTABLE < (undefined ***)0x4) || (uVar6 = *param_1 == -0x2d04ad8, !(bool)uVar6)
     ) {
    plStack_68 = (long *)0x0;
    piStack_60 = param_1;
    pppuStack_58 = UNRECOVERED_JUMPTABLE;
    func_0x00010b9406c8(&plStack_68);
    plVar7 = plStack_68;
    if (plStack_68 == (long *)0x0) goto LAB_10b93fde4;
    UNRECOVERED_JUMPTABLE = *(undefined ****)(*plStack_68 + 0x18);
    func_0x00010b940694(uStack_28);
    if ((bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010b93fdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    FUN_10b9406e0(&lStack_38);
    uVar6 = lStack_38 == 1;
    if ((bool)uVar6) {
      FUN_10b99daa0(alStack_50,uStack_30);
      func_0x00010b9406c8(alStack_50);
      if (alStack_50[0] != 0) {
        func_0x00010b9406a8();
      }
    }
    else {
      *unaff_x19 = 2;
      unaff_x19[1] = uStack_30;
      uStack_30 = 0;
    }
    plVar7 = &lStack_38;
    FUN_10b940390();
LAB_10b93fde4:
    func_0x00010b940694(uStack_28);
    if ((bool)uVar6) {
      return;
    }
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10b93fe04;
  plVar8 = plVar7;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010b9406b4();
  lStack_1f8 = plVar8[1];
  lStack_1f0 = lStack_1f8 + plVar8[2];
  uStack_f8 = 0;
  puStack_120 = &UNK_10dd5b8b0;
  lStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_e8 = extraout_x8_00;
  FUN_10b98eba0(&lStack_140,&lStack_1f8);
  uVar6 = lStack_140 == 1;
  if ((bool)uVar6) {
    unaff_x24 = 0x18;
    puVar16 = unaff_x19;
    for (unaff_x21 = plStack_138; uStack_160 = uStack_f8, uStack_170 = uStack_108,
        uStack_178 = uStack_110, uStack_148 = uStack_200, uStack_150 = uStack_208,
        uStack_158 = uStack_210, uVar6 = unaff_x21 == plStack_130, !(bool)uVar6;
        unaff_x21 = unaff_x21 + 3) {
      unaff_x23 = unaff_x21[1];
      puVar16 = (undefined8 *)unaff_x21[2];
      unaff_x22 = &puStack_120;
      FUN_10b94024c(unaff_x22,unaff_x21);
      lVar11 = 0;
      uVar13 = (ulong)unaff_x22 >> 7;
      while( true ) {
        uVar13 = uVar13 & uStack_108;
        uVar14 = *(ulong *)(puStack_120 + uVar13);
        uVar15 = uVar14 ^ ((ulong)unaff_x22 & 0x7f) * 0x101010101010101;
        for (uVar15 = uVar15 + 0xfefefefefefefeff & (uVar15 ^ 0xffffffffffffffff) &
                      0x8080808080808080; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
          uVar2 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          ppuVar9 = (undefined **)
                    (uVar13 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uStack_108);
          if (*(long *)(lStack_118 + (long)ppuVar9 * 0x18) == *unaff_x21) goto LAB_10b93ff90;
        }
        if ((uVar14 & ~uVar14 << 6 & 0x8080808080808080) != 0) break;
        lVar11 = lVar11 + 8;
        uVar13 = lVar11 + uVar13;
      }
      ppuVar9 = &puStack_120;
      func_0x00010b940404(ppuVar9,unaff_x22);
      lVar11 = *unaff_x21;
      if (lVar11 != 0) {
        piVar1 = (int *)(lVar11 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar12 = (long *)(lStack_118 + (long)ppuVar9 * 0x18);
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = lVar11;
      bVar5 = (byte)unaff_x22 & 0x7f;
      puStack_120[(long)ppuVar9] = bVar5;
      puStack_120[(uStack_108 & 7) + (uStack_108 & (ulong)(ppuVar9 + -1)) + 1] = bVar5;
LAB_10b93ff90:
      lVar11 = lStack_118 + (long)ppuVar9 * 0x18;
      *(long *)(lVar11 + 8) = unaff_x23;
      *(undefined8 **)(lVar11 + 0x10) = puVar16;
      func_0x00010811ffc4(&uStack_210,unaff_x21);
    }
    lStack_1a0 = *plVar7;
    *plVar7 = 0;
    lStack_190 = plVar8[2];
    lStack_198 = plVar8[1];
    uStack_f8 = 0;
    lStack_180 = lStack_118;
    puStack_188 = puStack_120;
    uStack_200 = 0;
    uStack_208 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1c0 = 0;
    ppuStack_1b8 = &PTR_FUN_110d77f80;
    puStack_1e8 = &UNK_10dd5b8b0;
    uStack_1e0 = 0;
    puStack_120 = &UNK_10dd5b8b0;
    lStack_118 = 0;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_220 = 0;
    uStack_228 = 0;
    *unaff_x19 = 1;
    UNRECOVERED_JUMPTABLE = &ppuStack_1b8;
    func_0x000105c3cef0(unaff_x19 + 1);
    FUN_10b93fbcc(&ppuStack_1b8);
    func_0x000104bfe1e0(&uStack_228);
    func_0x000105c3d214(&puStack_1e8);
    unaff_x19 = puVar16;
  }
  else {
    *unaff_x19 = 2;
    unaff_x19[1] = plStack_138;
    plStack_138 = (long *)0x0;
  }
  FUN_10b923ec4(&lStack_140);
  func_0x000104bfe1e0(&uStack_210);
  ppuVar9 = &puStack_120;
  func_0x000105c3d214();
  func_0x00010b940694(uStack_e8);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_10b9400ac;
  pppuVar10 = UNRECOVERED_JUMPTABLE;
  uStack_270 = unaff_x24;
  lStack_268 = unaff_x23;
  ppuStack_260 = unaff_x22;
  plStack_258 = unaff_x21;
  plStack_250 = plVar7;
  puStack_248 = unaff_x19;
  ppuStack_240 = &puStack_80;
  func_0x00010b9406b4();
  uVar6 = pppuVar10 == (undefined ***)0x4;
  uStack_278 = extraout_x8_01;
  if ((pppuVar10 < (undefined ***)0x4) || (uVar6 = *(int *)ppuVar9 == -0x2d04ad8, !(bool)uVar6)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    plStack_2b0 = (long *)0x0;
    ppuStack_2a8 = ppuVar9;
    pppuStack_2a0 = UNRECOVERED_JUMPTABLE;
    func_0x00010b9406c8(&plStack_2b0);
    plVar7 = plStack_2b0;
    if (plStack_2b0 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plStack_2b0 + 0x18);
      func_0x00010b940694(uStack_278);
      if ((bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010b9401b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      goto LAB_10b940248;
    }
  }
  else {
    FUN_10b9a25d8(alStack_2c8,param_3);
    FUN_10b99e72c(alStack_2c8,1);
    FUN_10b9409ec(&lStack_288,ppuVar9,UNRECOVERED_JUMPTABLE,param_3,param_5);
    uVar6 = lStack_288 == 1;
    if ((bool)uVar6) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      func_0x00010b934328(alStack_2e0,uStack_280);
      func_0x00010b9406c8(alStack_2e0);
      if (alStack_2e0[0] != 0) {
        func_0x00010b9406a8();
      }
    }
    else {
      FUN_10b9406e0(&lStack_298,ppuVar9,UNRECOVERED_JUMPTABLE);
      uVar6 = lStack_298 == 1;
      if ((bool)uVar6) {
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 0;
        }
        FUN_10b99daa0(alStack_2f8,uStack_290);
        func_0x00010b9406c8(alStack_2f8);
        if (alStack_2f8[0] != 0) {
          func_0x00010b9406a8();
        }
      }
      else {
        *unaff_x19 = 2;
        unaff_x19[1] = uStack_290;
        uStack_290 = 0;
      }
      FUN_10b940390(&lStack_298);
    }
    func_0x00010b9403b8(&lStack_288);
    plVar7 = alStack_2c8;
    func_0x0001080c9d44();
  }
  func_0x00010b940694(uStack_278);
  if ((bool)uVar6) {
    return;
  }
LAB_10b940248:
  ___stack_chk_fail();
  pcStack_308 = FUN_10b94024c;
  plStack_318 = plVar7 + 5;
  pppuStack_310 = &ppuStack_240;
  FUN_10b94036c(&plStack_318);
  return;
}



/* Entry: 10b93fe04; end: 10b9400ab;  */

void FUN_10b93fe04(undefined8 *param_1,undefined ***param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long lVar10;
  undefined8 extraout_x8_00;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *unaff_x19;
  undefined8 *puVar15;
  long *unaff_x21;
  undefined **unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long *plStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  long alStack_288 [3];
  long alStack_270 [3];
  long alStack_258 [3];
  long *plStack_240;
  undefined **ppuStack_238;
  undefined ***pppuStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined **ppuStack_1f0;
  long *plStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  puVar7 = param_1;
  func_0x00010b9406b4();
  lStack_188 = puVar7[1];
  lStack_180 = lStack_188 + puVar7[2];
  uStack_88 = 0;
  puStack_b0 = &UNK_10dd5b8b0;
  lStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_78 = extraout_x8;
  FUN_10b98eba0(&lStack_d0,&lStack_188);
  uVar6 = lStack_d0 == 1;
  if ((bool)uVar6) {
    unaff_x24 = 0x18;
    puVar15 = unaff_x19;
    for (unaff_x21 = plStack_c8; uStack_f0 = uStack_88, uStack_100 = uStack_98,
        uStack_108 = uStack_a0, uStack_d8 = uStack_190, uStack_e0 = uStack_198,
        uStack_e8 = uStack_1a0, uVar6 = unaff_x21 == plStack_c0, !(bool)uVar6;
        unaff_x21 = unaff_x21 + 3) {
      unaff_x23 = unaff_x21[1];
      puVar15 = (undefined8 *)unaff_x21[2];
      unaff_x22 = &puStack_b0;
      FUN_10b94024c(unaff_x22,unaff_x21);
      lVar10 = 0;
      uVar12 = (ulong)unaff_x22 >> 7;
      while( true ) {
        uVar12 = uVar12 & uStack_98;
        uVar13 = *(ulong *)(puStack_b0 + uVar12);
        uVar14 = uVar13 ^ ((ulong)unaff_x22 & 0x7f) * 0x101010101010101;
        for (uVar14 = uVar14 + 0xfefefefefefefeff & (uVar14 ^ 0xffffffffffffffff) &
                      0x8080808080808080; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
          uVar2 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          ppuVar8 = (undefined **)
                    (uVar12 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uStack_98);
          if (*(long *)(lStack_a8 + (long)ppuVar8 * 0x18) == *unaff_x21) goto LAB_10b93ff90;
        }
        if ((uVar13 & ~uVar13 << 6 & 0x8080808080808080) != 0) break;
        lVar10 = lVar10 + 8;
        uVar12 = lVar10 + uVar12;
      }
      ppuVar8 = &puStack_b0;
      func_0x00010b940404(ppuVar8,unaff_x22);
      lVar10 = *unaff_x21;
      if (lVar10 != 0) {
        piVar1 = (int *)(lVar10 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar11 = (long *)(lStack_a8 + (long)ppuVar8 * 0x18);
      plVar11[1] = 0;
      plVar11[2] = 0;
      *plVar11 = lVar10;
      bVar5 = (byte)unaff_x22 & 0x7f;
      puStack_b0[(long)ppuVar8] = bVar5;
      puStack_b0[(uStack_98 & 7) + (uStack_98 & (ulong)(ppuVar8 + -1)) + 1] = bVar5;
LAB_10b93ff90:
      lVar10 = lStack_a8 + (long)ppuVar8 * 0x18;
      *(long *)(lVar10 + 8) = unaff_x23;
      *(undefined8 **)(lVar10 + 0x10) = puVar15;
      func_0x00010811ffc4(&uStack_1a0,unaff_x21);
    }
    uStack_130 = *param_1;
    *param_1 = 0;
    uStack_120 = puVar7[2];
    lStack_128 = puVar7[1];
    uStack_88 = 0;
    lStack_110 = lStack_a8;
    puStack_118 = puStack_b0;
    uStack_190 = 0;
    uStack_198 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_150 = 0;
    ppuStack_148 = &PTR_FUN_110d77f80;
    puStack_178 = &UNK_10dd5b8b0;
    uStack_170 = 0;
    puStack_b0 = &UNK_10dd5b8b0;
    lStack_a8 = 0;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    *unaff_x19 = 1;
    param_2 = &ppuStack_148;
    func_0x000105c3cef0(unaff_x19 + 1);
    FUN_10b93fbcc(&ppuStack_148);
    func_0x000104bfe1e0(&uStack_1b8);
    func_0x000105c3d214(&puStack_178);
    unaff_x19 = puVar15;
  }
  else {
    *unaff_x19 = 2;
    unaff_x19[1] = plStack_c8;
    plStack_c8 = (long *)0x0;
  }
  FUN_10b923ec4(&lStack_d0);
  func_0x000104bfe1e0(&uStack_1a0);
  ppuVar8 = &puStack_b0;
  func_0x000105c3d214();
  func_0x00010b940694(uStack_78);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_10b9400ac;
  pppuVar9 = param_2;
  uStack_200 = unaff_x24;
  lStack_1f8 = unaff_x23;
  ppuStack_1f0 = unaff_x22;
  plStack_1e8 = unaff_x21;
  puStack_1e0 = param_1;
  puStack_1d8 = unaff_x19;
  puStack_1d0 = &stack0xfffffffffffffff0;
  func_0x00010b9406b4();
  uVar6 = pppuVar9 == (undefined ***)0x4;
  uStack_208 = extraout_x8_00;
  if ((pppuVar9 < (undefined ***)0x4) || (uVar6 = *(int *)ppuVar8 == -0x2d04ad8, !(bool)uVar6)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    plStack_240 = (long *)0x0;
    ppuStack_238 = ppuVar8;
    pppuStack_230 = param_2;
    func_0x00010b9406c8(&plStack_240);
    plVar11 = plStack_240;
    if (plStack_240 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plStack_240 + 0x18);
      func_0x00010b940694(uStack_208);
      if ((bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010b9401b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      goto LAB_10b940248;
    }
  }
  else {
    FUN_10b9a25d8(alStack_258,param_3);
    FUN_10b99e72c(alStack_258,1);
    FUN_10b9409ec(&lStack_218,ppuVar8,param_2,param_3,param_5);
    uVar6 = lStack_218 == 1;
    if ((bool)uVar6) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      func_0x00010b934328(alStack_270,uStack_210);
      func_0x00010b9406c8(alStack_270);
      if (alStack_270[0] != 0) {
        func_0x00010b9406a8();
      }
    }
    else {
      FUN_10b9406e0(&lStack_228,ppuVar8,param_2);
      uVar6 = lStack_228 == 1;
      if ((bool)uVar6) {
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 0;
        }
        FUN_10b99daa0(alStack_288,uStack_220);
        func_0x00010b9406c8(alStack_288);
        if (alStack_288[0] != 0) {
          func_0x00010b9406a8();
        }
      }
      else {
        *unaff_x19 = 2;
        unaff_x19[1] = uStack_220;
        uStack_220 = 0;
      }
      func_0x00010b940390(&lStack_228);
    }
    func_0x00010b9403b8(&lStack_218);
    plVar11 = alStack_258;
    func_0x0001080c9d44();
  }
  func_0x00010b940694(uStack_208);
  if ((bool)uVar6) {
    return;
  }
LAB_10b940248:
  ___stack_chk_fail();
  pcStack_298 = FUN_10b94024c;
  plStack_2a8 = plVar11 + 5;
  ppuStack_2a0 = &puStack_1d0;
  FUN_10b94036c(&plStack_2a8);
  return;
}



/* Entry: 10b9400ac; end: 10b94024b;  */

void FUN_10b9400ac(int *param_1,ulong param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  long *plVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long alStack_c8 [3];
  long alStack_b0 [3];
  long alStack_98 [3];
  long *plStack_80;
  int *piStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = param_2;
  func_0x00010b9406b4();
  uVar1 = uVar3 == 4;
  uStack_48 = extraout_x8;
  if ((uVar3 < 4) || (uVar1 = *param_1 == -0x2d04ad8, !(bool)uVar1)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    plStack_80 = (long *)0x0;
    piStack_78 = param_1;
    uStack_70 = param_2;
    func_0x00010b9406c8(&plStack_80);
    plVar2 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plStack_80 + 0x18);
      func_0x00010b940694(uStack_48);
      if ((bool)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010b9401b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      goto LAB_10b940248;
    }
  }
  else {
    FUN_10b9a25d8(alStack_98,param_3);
    FUN_10b99e72c(alStack_98,1);
    FUN_10b9409ec(&lStack_58,param_1,param_2,param_3,param_5);
    uVar1 = lStack_58 == 1;
    if ((bool)uVar1) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      func_0x00010b934328(alStack_b0,uStack_50);
      func_0x00010b9406c8(alStack_b0);
      if (alStack_b0[0] != 0) {
        func_0x00010b9406a8();
      }
    }
    else {
      FUN_10b9406e0(&lStack_68,param_1,param_2);
      uVar1 = lStack_68 == 1;
      if ((bool)uVar1) {
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 0;
        }
        FUN_10b99daa0(alStack_c8,uStack_60);
        func_0x00010b9406c8(alStack_c8);
        if (alStack_c8[0] != 0) {
          func_0x00010b9406a8();
        }
      }
      else {
        *unaff_x19 = 2;
        unaff_x19[1] = uStack_60;
        uStack_60 = 0;
      }
      func_0x00010b940390(&lStack_68);
    }
    func_0x00010b9403b8(&lStack_58);
    plVar2 = alStack_98;
    func_0x0001080c9d44();
  }
  func_0x00010b940694(uStack_48);
  if ((bool)uVar1) {
    return;
  }
LAB_10b940248:
  ___stack_chk_fail();
  pcStack_d8 = FUN_10b94024c;
  plStack_e8 = plVar2 + 5;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_10b94036c(&plStack_e8);
  return;
}



/* Entry: 10b94024c; end: 10b940273;  */

void FUN_10b94024c(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_10b94036c(&lStack_18);
  return;
}



/* Entry: 10b940274; end: 10b9402c7;  */

long FUN_10b940274(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b9402c8();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b9402c8; end: 10b94036b;  */

bool FUN_10b9402c8(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar2 = 0;
  uVar5 = param_3 >> 7;
  uVar3 = param_1[3];
  lVar4 = *param_1;
  while( true ) {
    uVar5 = uVar5 & uVar3;
    uVar7 = *(ulong *)(lVar4 + uVar5);
    uVar6 = uVar7 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar8 = *param_2;
    for (uVar6 = uVar6 + 0xfefefefefefefeff & (uVar6 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar1 = uVar5 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar3;
      *param_4 = uVar1;
      if (*(long *)(param_1[1] + uVar1 * 0x18) == lVar8) goto LAB_10b940360;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar5 = lVar2 + uVar5;
  }
LAB_10b940360:
  return uVar6 != 0;
}



/* Entry: 10b94036c; end: 10b94038f;  */

void FUN_10b94036c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_2);
  return;
}



/* Entry: 10b940390; end: 10b9403df;  */

void FUN_10b940390(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
  }
  else {
    if (*param_1 != 1) {
      return;
    }
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bdb368();
  }
  return;
}



/* Entry: 10b9403e0; end: 10b9404b7;  */

undefined8 * FUN_10b9403e0(undefined8 *param_1)

{
  func_0x00010b934630(*param_1);
  return param_1;
}



/* Entry: 10b9404b8; end: 10b940693;  */

/* WARNING: Possible PIC construction at 0x00010b94066c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b940670) */
/* WARNING: Removing unreachable block (ram,0x00010b940690) */
/* WARNING: Removing unreachable block (ram,0x00010b940674) */

void FUN_10b9404b8(long *param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  long **pplVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *aplStack_78 [4];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000104bda340(*param_1,param_1[3]);
  for (uVar7 = 0; uVar7 != param_1[3]; uVar7 = uVar7 + 1) {
    if (*(char *)(*param_1 + uVar7) == -2) {
      pplVar4 = aplStack_78;
      aplStack_78[0] = param_1 + 5;
      func_0x000105c3d370(pplVar4,param_1[1] + uVar7 * 0x18);
      plVar5 = param_1;
      func_0x000105c3d124(param_1,pplVar4);
      uVar6 = param_1[3] & (ulong)pplVar4 >> 7;
      if ((((long)plVar5 - uVar6 ^ uVar7 - uVar6) & param_1[3]) < 8) {
        bVar3 = (byte)pplVar4 & 0x7f;
        *(byte *)(*param_1 + uVar7) = bVar3;
        *(byte *)(*param_1 + (param_1[3] & uVar7 - 8) + (param_1[3] & 7U) + 1) = bVar3;
      }
      else {
        cVar2 = *(char *)(*param_1 + (long)plVar5);
        bVar3 = (byte)pplVar4 & 0x7f;
        *(byte *)(*param_1 + (long)plVar5) = bVar3;
        *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)(plVar5 + -1)) + 1) = bVar3;
        if (cVar2 == -0x80) {
          func_0x00010b9406d0();
          *(undefined1 *)(*param_1 + uVar7) = 0x80;
          *(undefined1 *)(*param_1 + (param_1[3] & uVar7 - 8) + (param_1[3] & 7U) + 1) = 0x80;
        }
        else {
          func_0x00010b9406d0();
          func_0x00010b9406d0();
          func_0x00010b9406d0();
          uVar7 = uVar7 - 1;
        }
      }
    }
  }
  lVar1 = 6;
  if (uVar7 != 7) {
    lVar1 = uVar7 - (uVar7 >> 3);
  }
  param_1[5] = lVar1 - param_1[2];
  return;
}



/* Entry: 10b940694; end: 10b9406df;  */

void FUN_10b940694(void)

{
  return;
}



/* Entry: 10b9406e0; end: 10b9409eb;  */

void FUN_10b9406e0(undefined8 *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong auStack_b8 [6];
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong auStack_50 [2];
  
  uVar1 = param_2;
  func_0x0001099ef2d0();
  if (((uVar1 == param_3) && (uVar1 < 0xffffffffffffff89)) &&
     (uVar1 = param_2, func_0x0001099ef288(param_2,param_3), uVar1 < 0x8000001)) {
    func_0x000104bd9060(auStack_b8);
    func_0x00010b99da54(auStack_b8[0],uVar1);
    uVar3 = *(ulong *)(auStack_b8[0] + 0x20);
    func_0x000107c2ae6c(uVar3,*(undefined8 *)(auStack_b8[0] + 0x10),param_2,param_3);
    uVar1 = auStack_b8[0];
    if (uVar3 < 0xffffffffffffff89) {
      auStack_b8[0] = 0;
      uVar4 = 1;
    }
    else {
      func_0x000107c31084();
      func_0x0001099af018();
      auStack_b8[4] = 0;
      auStack_b8[3] = uVar3;
      func_0x000107c2793c(&UNK_10f7ce4c4);
      func_0x00010b940e00(&ppuStack_88);
      func_0x00010b940e08(&uStack_58);
      FUN_10b99f560(auStack_b8 + 3,&uStack_58);
      uVar1 = auStack_b8[3];
      auStack_b8[3] = 0;
      func_0x00010b940df8();
      func_0x000107c278f8(uStack_58);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_88);
      uVar4 = 2;
    }
    *param_1 = uVar4;
    param_1[1] = uVar1;
    func_0x000104bdb368(auStack_b8[0]);
  }
  else {
    func_0x0001099efb08();
    if (uVar1 == 0) {
      FUN_10b99f5f8(&ppuStack_88,&UNK_10f7ce4dd);
      *param_1 = 2;
      param_1[1] = ppuStack_88;
      ppuStack_88 = (undefined **)0x0;
      func_0x00010b940df8();
    }
    else {
      uVar3 = uVar1;
      func_0x0001099efb14();
      if (uVar3 < 0xffffffffffffff89) {
        ppuStack_88 = &PTR_FUN_110d7e488;
        uStack_80 = 1;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_78 = 0;
        func_0x00010b99da54(&ppuStack_88,0x20000);
        uVar3 = uStack_68;
        auStack_b8[5] = 0;
        auStack_b8[0] = uStack_68;
        auStack_b8[2] = 0;
        auStack_b8[1] = 0x20000;
        auStack_b8[3] = param_2;
        auStack_b8[4] = param_3;
        func_0x000104bd9060(&uStack_c0);
        uVar2 = 0;
        while (uVar2 < param_3) {
          uVar2 = uVar1;
          func_0x0001099efb64(uVar1,auStack_b8,auStack_b8 + 3);
          if (0xffffffffffffff88 < uVar2) {
            func_0x00010b940e18();
            func_0x000107c31084();
            func_0x00010b940e10();
            auStack_50[1] = 0;
            auStack_50[0] = uVar2;
            func_0x000107c2793c(&UNK_10f7ce51a);
            func_0x00010b940e00(auStack_e0);
            func_0x00010b940e08(&uStack_c8);
            FUN_10b99f560(auStack_50,&uStack_c8);
            *param_1 = 2;
            param_1[1] = auStack_50[0];
            auStack_50[0] = 0;
            func_0x00010b940df8();
            func_0x000107c278f8(uStack_c8);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
            goto LAB_10b9409c8;
          }
          func_0x00010b99d9f4(uStack_c0,uVar3,uVar3 + auStack_b8[2]);
          auStack_b8[2] = 0;
          uVar2 = auStack_b8[5];
        }
        func_0x000107c2ae60(uVar1);
        FUN_10b99da8c(uStack_c0);
        *param_1 = 1;
        param_1[1] = uStack_c0;
        uStack_c0 = 0;
LAB_10b9409c8:
        func_0x000104bdb368(uStack_c0);
        _free(uVar3);
      }
      else {
        func_0x00010b940e18();
        func_0x000107c31084();
        uVar1 = uVar3;
        func_0x00010b940e10();
        auStack_b8[4] = 0;
        auStack_b8[3] = uVar1;
        func_0x000107c2793c(&UNK_10f7ce4fa);
        func_0x00010b940e00(&ppuStack_88);
        func_0x000107c31080(&uStack_60,uVar3,&ppuStack_88);
        FUN_10b99f560(auStack_b8 + 3,&uStack_60);
        *param_1 = 2;
        param_1[1] = auStack_b8[3];
        auStack_b8[3] = 0;
        func_0x00010b940df8();
        func_0x000107c278f8(uStack_60);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_88);
      }
    }
  }
  return;
}



/* Entry: 10b9409ec; end: 10b940ddf;  */

/* WARNING: Removing unreachable block (ram,0x000104bda964) */
/* WARNING: Removing unreachable block (ram,0x000104bda968) */
/* WARNING: Removing unreachable block (ram,0x000104bda970) */
/* WARNING: Removing unreachable block (ram,0x000104bda978) */
/* WARNING: Removing unreachable block (ram,0x000104bda97c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b9409ec(undefined8 *param_1,uint *******param_2,uint *******param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  undefined8 *******pppppppuVar1;
  uint *******pppppppuVar2;
  uint *******pppppppuVar3;
  uint *******pppppppuVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_e8;
  undefined8 *******apppppppuStack_e0 [2];
  char cStack_c9;
  undefined8 uStack_c8;
  uint *******pppppppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 uStack_a8;
  uint *******pppppppuStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  ulong auStack_70 [3];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar3 = param_2;
  func_0x0001099ef2d0();
  if ((pppppppuVar3 == param_3) && (pppppppuVar3 < (uint *******)0xffffffffffffff89)) {
    pppppppuVar3 = param_2;
    func_0x0001099ef288(param_2,param_3);
    if (pppppppuVar3 < (uint *******)0xfffffffffffffffe) {
      if (pppppppuVar3 < (uint *******)0x8000001) {
        FUN_10b9a2460(&pppppppuStack_a0,param_4);
        puVar6 = &UNK_10f7ce5c9;
        func_0x0001080e74fc(&pppppppuStack_c0,&pppppppuStack_a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_a0);
        pppppppuVar4 = pppppppuStack_c0;
        if (-1 < (char)bStack_a9) {
          pppppppuVar4 = (uint *******)&pppppppuStack_c0;
        }
        _mkstemp();
        if ((int)pppppppuVar4 < 0) {
          func_0x000107c31084();
          pppppppuVar3 = pppppppuVar4;
          ___error();
          uVar5 = (ulong)*(uint *)pppppppuVar3;
          _strerror();
          pppppppuVar3 = (uint *******)&pppppppuStack_c0;
          func_0x000107c27e5c();
          uStack_88 = 0;
          pppppppuStack_a0 = pppppppuVar3;
          puStack_98 = puVar6;
          uStack_90 = uVar5;
          func_0x000107c2793c(&UNK_10f7ce5d1);
          func_0x000107c3173c(apppppppuStack_e0);
          func_0x000107c31080(&uStack_c8,pppppppuVar4,apppppppuStack_e0);
          FUN_10b99f560(&pppppppuStack_a0,&uStack_c8);
          FUN_10b940de0();
          func_0x000107c278f8(uStack_c8);
          pppppppuVar3 = (uint *******)apppppppuStack_e0;
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&pppppppuStack_a0,&pppppppuStack_c0);
          uStack_88 = uStack_88 & 0xffffffffffffff00;
          pppppppuVar2 = pppppppuStack_c0;
          if (-1 < (char)bStack_a9) {
            uStack_b8 = (ulong)bStack_a9;
            pppppppuVar2 = (uint *******)&pppppppuStack_c0;
          }
          func_0x00010b934360(&lStack_80,pppppppuVar4,pppppppuVar3,pppppppuVar2,uStack_b8);
          lVar7 = lStack_78;
          if (lStack_80 == 1) {
            lStack_78 = 0;
            uVar5 = *(ulong *)(lVar7 + 0x10);
            func_0x000107c2ae6c(uVar5,*(undefined8 *)(lVar7 + 0x18),param_2,param_3);
            if (uVar5 < 0xffffffffffffff89) {
              func_0x00010b934578(auStack_70,lVar7);
              if (auStack_70[0] == 1) {
                pppppppuVar3 = pppppppuStack_c0;
                if (-1 < (char)bStack_a9) {
                  pppppppuVar3 = (uint *******)&pppppppuStack_c0;
                }
                FUN_10b9a2460(apppppppuStack_e0,param_4);
                pppppppuVar1 = apppppppuStack_e0[0];
                if (-1 < cStack_c9) {
                  pppppppuVar1 = apppppppuStack_e0;
                }
                _rename(pppppppuVar3,pppppppuVar1);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                          (apppppppuStack_e0);
                if ((int)pppppppuVar3 == 0) {
                  uStack_88 = CONCAT71(uStack_88._1_7_,1);
                }
                else if (param_5 != (undefined1 *)0x0) {
                  *param_5 = 1;
                }
                *param_1 = 1;
                param_1[1] = lVar7;
                lVar7 = 0;
              }
              else {
                FUN_10b99fa70(apppppppuStack_e0,auStack_70 + 1,&UNK_10f7ce634,0x1d);
                *param_1 = 2;
                param_1[1] = apppppppuStack_e0[0];
                apppppppuStack_e0[0] = (undefined8 *******)0x0;
                func_0x00010b940df8();
              }
              func_0x0001080c6234(auStack_70);
            }
            else {
              func_0x000107c31084();
              func_0x00010b940e10();
              auStack_70[1] = 0;
              auStack_70[0] = uVar5;
              func_0x000107c2793c(&UNK_10f7ce613);
              func_0x00010b940e00(apppppppuStack_e0);
              func_0x00010b940e08(&uStack_e8);
              FUN_10b99f560(auStack_70,&uStack_e8);
              *param_1 = 2;
              param_1[1] = auStack_70[0];
              auStack_70[0] = 0;
              func_0x00010b940df8();
              func_0x000107c278f8(uStack_e8);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                        (apppppppuStack_e0);
            }
            func_0x00010b934630(lVar7);
          }
          else {
            FUN_10b99fa70(apppppppuStack_e0,&lStack_78,&UNK_10f7ce5f6,0x1c);
            *param_1 = 2;
            param_1[1] = apppppppuStack_e0[0];
            apppppppuStack_e0[0] = (undefined8 *******)0x0;
            func_0x00010b940df8();
          }
          func_0x00010b9403b8(&lStack_80);
          if ((uStack_88 & 1) == 0) {
            pppppppuVar3 = pppppppuStack_a0;
            if (-1 < (long)uStack_90) {
              pppppppuVar3 = (uint *******)&pppppppuStack_a0;
            }
            _unlink(pppppppuVar3);
          }
          pppppppuVar3 = (uint *******)&pppppppuStack_a0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppppuVar3);
      }
      else {
        func_0x000107c31084();
        puStack_98 = (undefined *)0x0;
        uStack_90 = 0x8000000;
        uStack_88 = 0;
        pppppppuStack_a0 = pppppppuVar3;
        func_0x000107c2793c(&UNK_10f7ce5a1);
        func_0x000107c3173c(&pppppppuStack_c0);
        func_0x00010b940e08(&uStack_a8);
        FUN_10b99f560(&pppppppuStack_a0,&uStack_a8);
        FUN_10b940de0();
        func_0x000107c278f8(uStack_a8);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_c0);
      goto LAB_10b940da8;
    }
    puVar6 = &UNK_10f7ce568;
  }
  else {
    puVar6 = &UNK_10f7ce53a;
  }
  FUN_10b99f5f8(&pppppppuStack_a0,puVar6);
  FUN_10b940de0();
LAB_10b940da8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    *param_1 = 2;
    param_1[1] = pppppppuStack_a0;
    return;
  }
  return;
}



/* Entry: 10b940de0; end: 10b940e23;  */

/* WARNING: Removing unreachable block (ram,0x000104bda964) */
/* WARNING: Removing unreachable block (ram,0x000104bda968) */
/* WARNING: Removing unreachable block (ram,0x000104bda970) */
/* WARNING: Removing unreachable block (ram,0x000104bda978) */
/* WARNING: Removing unreachable block (ram,0x000104bda97c) */

void FUN_10b940de0(void)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000050;
  
  *unaff_x19 = 2;
  unaff_x19[1] = in_stack_00000050;
  return;
}



/* Entry: 10b940e24; end: 10b94118b;  */

undefined8 *
FUN_10b940e24(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             long *param_5,long param_6,undefined8 *param_7,undefined1 param_8,long *param_9,
             undefined8 *param_10)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 extraout_x8_04;
  long lVar6;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  undefined8 uVar7;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000048;
  long *in_stack_00000050;
  undefined8 *apuStack_a8 [2];
  undefined8 *apuStack_98 [2];
  undefined8 *puStack_88;
  undefined8 uStack_80;
  
  puVar5 = param_2;
  func_0x00010b944c94();
  *puVar5 = &PTR_FUN_110d77fc8;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = &PTR_DAT_110d78068;
  puVar5[4] = &PTR_DAT_110d780c8;
  uStack_80 = extraout_x8;
  func_0x00010b944f04();
  func_0x00010b9214bc();
  param_2[5] = puVar5;
  param_2[6] = param_3;
  *(undefined4 *)(param_2 + 7) = param_4;
  uVar4 = 0x1a8;
  __Znwm();
  FUN_10b93b814(param_1);
  param_2[8] = uVar4;
  param_2[9] = &UNK_10dd5b8b0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[10] = 0;
  puVar5 = (undefined8 *)0xa8;
  __Znwm();
  FUN_10b8c3da4();
  param_2[0xf] = puVar5;
  lVar6 = *in_stack_00000050;
  param_2[0x10] = *param_5;
  param_2[0x11] = lVar6;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0x32aaaba7;
  param_2[0x18] = 0;
  param_2[0x17] = 0;
  param_2[0x1a] = 0;
  param_2[0x19] = 0;
  param_2[0x16] = 0;
  param_2[0x15] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = &UNK_10dd5b8b0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1d] = 0;
  uVar4 = 0;
  if (*param_5 != 0) {
    do {
      func_0x00010b944cc0();
      uVar4 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  param_2[0x22] = uVar4;
  lVar6 = *in_stack_00000020;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    do {
      func_0x00010b944d40();
      lVar6 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  param_2[0x23] = lVar6;
  uVar4 = 0;
  if (*in_stack_00000028 != 0) {
    do {
      func_0x00010b944cc0();
      uVar4 = extraout_x8_02;
    } while (extraout_w11_01 != 0);
  }
  param_2[0x24] = uVar4;
  lVar6 = *param_9;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_2[0x25] = lVar6;
  lVar6 = *in_stack_00000018;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_2[0x26] = lVar6;
  param_2[0x27] = *param_10;
  lVar6 = param_10[1];
  param_2[0x28] = lVar6;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_2[0x29] = 0;
  lVar6 = in_stack_00000030[1];
  uVar4 = *in_stack_00000030;
  param_2[0x2b] = in_stack_00000030[1];
  param_2[0x2a] = uVar4;
  if (lVar6 != 0) {
    do {
      func_0x00010b944d40();
      in_stack_00000038 = extraout_x8_03;
    } while (extraout_w11_02 != 0);
  }
  param_2[0x2c] = *param_7;
  *param_7 = 0;
  param_2[0x2d] = *in_stack_00000038;
  lVar6 = in_stack_00000038[1];
  param_2[0x2e] = lVar6;
  if (lVar6 != 0) {
    do {
      func_0x00010b944c84();
    } while (extraout_w10 != 0);
  }
  uVar4 = 0;
  if (*in_stack_00000050 != 0) {
    do {
      func_0x00010b944cc0();
      uVar4 = extraout_x8_04;
    } while (extraout_w11_03 != 0);
  }
  param_2[0x2f] = uVar4;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined1 *)((long)param_2 + 0x184) = in_stack_00000048;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x31) = 0;
  *(undefined4 *)((long)param_2 + 0x185) = 0;
  if (param_6 != 0) {
    uVar4 = param_2[8];
    uVar7 = param_2[0x22];
    FUN_10b8fc430(apuStack_98,1);
    puStack_88[2] = 0;
    *puStack_88 = &PTR_FUN_110d73e58;
    puStack_88[1] = 0;
    FUN_10b8ea810(puStack_88 + 3,param_6,uVar4,param_2 + 0xf,uVar7,param_3,param_4,in_stack_00000048
                  ,param_8,in_stack_00000040,in_stack_00000050,0);
    puVar5 = puStack_88;
    puStack_88 = (undefined8 *)0x0;
    func_0x00010b8fc414(apuStack_a8,puVar5 + 3);
    FUN_10b8fc51c(apuStack_98);
    apuStack_98[0] = apuStack_a8[0];
    FUN_10b8e665c(param_2 + 0x29,apuStack_98);
    puVar5 = apuStack_98[0];
    func_0x00010b8e8bd0(apuStack_98[0]);
  }
  func_0x00010b944c58(uStack_80);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b94123c();
    func_0x0001080d5b74(puVar5 + 0x32);
    func_0x000108129394(puVar5 + 0x2f);
    func_0x0001080d8600(puVar5 + 0x2d);
    func_0x000104bd5214(puVar5 + 0x2c);
    func_0x00010b8c5888(puVar5 + 0x2a);
    FUN_10b8fb21c(puVar5 + 0x29);
    func_0x0001080d8598(puVar5 + 0x27);
    func_0x00010b935dd4(puVar5 + 0x26);
    func_0x0001052750b0(puVar5 + 0x25);
    func_0x0001080e6aa4(puVar5 + 0x24);
    FUN_10b8a6380(puVar5 + 0x23);
    func_0x000104bd56f4(puVar5 + 0x22);
    func_0x00010b942e54(puVar5 + 0x10);
    FUN_10b8fb028(puVar5 + 0xf);
    func_0x00010b942ef4(puVar5 + 9);
    FUN_10b93dcc0(puVar5 + 8);
    FUN_10b94457c(puVar5 + 5);
    func_0x000107c278e8(puVar5 + 1);
    return puVar5;
  }
  return param_2;
}



/* Entry: 10b94118c; end: 10b941277;  */

long FUN_10b94118c(long param_1)

{
  func_0x00010b94123c();
  func_0x0001080d5b74(param_1 + 400);
  func_0x000108129394(param_1 + 0x178);
  func_0x0001080d8600(param_1 + 0x168);
  func_0x000104bd5214(param_1 + 0x160);
  func_0x00010b8c5888(param_1 + 0x150);
  FUN_10b8fb21c(param_1 + 0x148);
  func_0x0001080d8598(param_1 + 0x138);
  func_0x00010b935dd4(param_1 + 0x130);
  func_0x0001052750b0(param_1 + 0x128);
  func_0x0001080e6aa4(param_1 + 0x120);
  FUN_10b8a6380(param_1 + 0x118);
  func_0x000104bd56f4(param_1 + 0x110);
  func_0x00010b942e54(param_1 + 0x80);
  FUN_10b8fb028(param_1 + 0x78);
  func_0x00010b942ef4(param_1 + 0x48);
  FUN_10b93dcc0(param_1 + 0x40);
  FUN_10b94457c(param_1 + 0x28);
  func_0x000107c278e8(param_1 + 8);
  return param_1;
}



/* Entry: 10b941278; end: 10b94128b;  */

long FUN_10b941278(long param_1)

{
  func_0x00010b94123c();
  func_0x0001080d5b74(param_1 + 400);
  func_0x000108129394(param_1 + 0x178);
  func_0x0001080d8600(param_1 + 0x168);
  func_0x000104bd5214(param_1 + 0x160);
  func_0x00010b8c5888(param_1 + 0x150);
  FUN_10b8fb21c(param_1 + 0x148);
  func_0x0001080d8598(param_1 + 0x138);
  func_0x00010b935dd4(param_1 + 0x130);
  func_0x0001052750b0(param_1 + 0x128);
  func_0x0001080e6aa4(param_1 + 0x120);
  FUN_10b8a6380(param_1 + 0x118);
  func_0x000104bd56f4(param_1 + 0x110);
  func_0x00010b942e54(param_1 + 0x80);
  FUN_10b8fb028(param_1 + 0x78);
  func_0x00010b942ef4(param_1 + 0x48);
  FUN_10b93dcc0(param_1 + 0x40);
  FUN_10b94457c(param_1 + 0x28);
  func_0x000107c278e8(param_1 + 8);
  return param_1;
}



/* Entry: 10b94128c; end: 10b94129f;  */

void FUN_10b94128c(void)

{
  FUN_10b94118c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9412a0; end: 10b9412af;  */

void FUN_10b9412a0(long param_1)

{
  FUN_10b94118c(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9412b0; end: 10b94173b;  */

void FUN_10b9412b0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 ***pppuVar5;
  undefined8 *puVar6;
  undefined8 ***pppuVar7;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w11;
  long lVar8;
  undefined8 uVar9;
  undefined8 ***pppuVar10;
  long *plVar11;
  undefined1 auStack_a0 [16];
  undefined8 **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  undefined8 **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuVar4;
  
  if ((*(byte *)(param_1 + 0x185) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x185) = 1;
    lVar8 = *(long *)(param_1 + 0x148);
    if (lVar8 != 0) {
      func_0x0001080d5a68(&ppuStack_90,param_1);
      ppuStack_80 = (undefined8 **)0x0;
      uStack_78 = 0;
      func_0x0001080d3dcc(&ppuStack_60,&ppuStack_90);
      if (puStack_58 != (undefined8 *)0x0) {
        do {
          func_0x00010b944c84();
        } while (extraout_w10 != 0);
      }
      ppuStack_70 = (undefined8 **)0x0;
      puStack_68 = (undefined8 *)0x0;
      ppuStack_48 = (undefined8 **)uStack_78;
      ppuStack_50 = ppuStack_80;
      func_0x000107c278e8(&ppuStack_50);
      func_0x000107c278e8(&ppuStack_70);
      ppuStack_48 = (undefined8 **)puStack_88;
      ppuStack_50 = ppuStack_90;
      ppuStack_90 = (undefined8 **)0x0;
      puStack_88 = (undefined8 *)0x0;
      func_0x0001080d5ab0(&ppuStack_50);
      func_0x0001080d2668(&ppuStack_60);
      func_0x00010b8eb44c(lVar8,param_1 + 0x18,&ppuStack_80);
      func_0x000107c278e8(&ppuStack_80);
      func_0x0001080d5ab0(&ppuStack_90);
      lVar8 = *(long *)(param_1 + 0x148);
      func_0x00010b942300(&ppuStack_50,param_1);
      if (ppuStack_50 == (undefined8 **)0x0) {
        uVar3 = 0;
      }
      else {
        ppuVar4 = ppuStack_50;
        FUN_10b94d6bc();
        uVar3 = SUB81(ppuVar4,0);
      }
      func_0x00010b8fb1f8(ppuStack_50);
      *(undefined1 *)(lVar8 + 0x370) = uVar3;
    }
    func_0x0001080d5a68(auStack_a0,param_1);
    func_0x00010b8d7bb0(param_1 + 0x80,auStack_a0);
    func_0x0001080d5ab0(auStack_a0);
    *(long *)(*(long *)(param_1 + 0x78) + 0xa0) = param_1 + 0x20;
    pppuVar5 = *(undefined8 ****)(param_1 + 0x148);
    if (pppuVar5 != (undefined8 ***)0x0) {
      FUN_10b8eac40();
      if (*(long *)(param_1 + 0x120) != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x178);
        puVar6 = (undefined8 *)0xd8;
        __Znwm();
        plVar11 = puVar6 + 1;
        *plVar11 = 0;
        puVar6[2] = 0;
        *puVar6 = &PTR_DAT_110d782d8;
        ppuVar4 = (undefined8 **)(puVar6 + 3);
        func_0x00010b914eb0(ppuVar4,param_1 + 0x120,param_1 + 0x160,param_1 + 0x128,param_1 + 0x138,
                            uVar9);
        if ((puVar6[5] == 0) || (*(long *)(puVar6[5] + 8) == -1)) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = *plVar11 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            ppuStack_70 = ppuVar4;
            puStack_68 = puVar6;
            ppuStack_60 = ppuVar4;
            puStack_58 = puVar6;
          } while (cVar1 != '\0');
          do {
            func_0x00010b944d40();
          } while (extraout_w11 != 0);
          ppuStack_50 = (undefined8 **)puVar6[4];
          puVar6[4] = ppuVar4;
          puVar6[5] = puVar6;
          func_0x00010b9151dc(&ppuStack_50);
          FUN_10b9156c4(&ppuStack_60);
        }
        ppuStack_70 = (undefined8 **)0x0;
        puStack_68 = (undefined8 *)0x0;
        ppuStack_50 = ppuVar4;
        ppuStack_48 = (undefined8 **)puVar6;
        FUN_10b94173c(param_1,&ppuStack_50);
        func_0x00010b944ef0();
        pppuVar5 = &ppuStack_70;
        FUN_10b9156c4();
      }
      func_0x00010b944f14();
      pppuVar5[1] = (undefined8 **)0x0;
      *pppuVar5 = (undefined8 **)&PTR_DAT_110d78328;
      pppuVar7 = pppuVar5 + 3;
      *pppuVar7 = (undefined8 **)&PTR_FUN_110d75a60;
      pppuVar10 = pppuVar5 + 4;
      *pppuVar10 = (undefined8 **)0x0;
      pppuVar5[2] = (undefined8 **)0x0;
      pppuVar5[5] = (undefined8 **)0x0;
      pppuVar5[6] = (undefined8 **)&PTR_FUN_110d75aa0;
      ppuStack_50 = pppuVar7;
      ppuStack_48 = pppuVar5;
      do {
        func_0x00010b944c84();
      } while (extraout_w10_00 != 0);
      func_0x000107c278e4(pppuVar10,&ppuStack_50);
      func_0x00010b944e54();
      if (*pppuVar10 == (undefined8 **)0x0) {
        if (pppuVar5[5] != (undefined8 **)0x0) {
          do {
            func_0x00010b944c84();
          } while (extraout_w10_02 != 0);
        }
      }
      else {
        func_0x000107c278f0(&ppuStack_50,pppuVar10);
        if (((undefined8 ***)ppuStack_50 != (undefined8 ***)0x0) &&
           ((undefined8 ***)ppuStack_48 != (undefined8 ***)0x0)) {
          do {
            func_0x00010b944c84();
          } while (extraout_w10_01 != 0);
        }
        func_0x00010b944e54();
      }
      func_0x00010b944d78();
      func_0x00010b944ef0();
      func_0x000107c3105c(pppuVar7);
      uVar9 = *(undefined8 *)(param_1 + 0x178);
      pppuVar7 = (undefined8 ***)0x48;
      __Znwm();
      pppuVar10 = pppuVar7 + 1;
      *pppuVar10 = (undefined8 **)0x0;
      pppuVar7[2] = (undefined8 **)0x0;
      *pppuVar7 = (undefined8 **)&PTR_DAT_110d78378;
      pppuVar5 = pppuVar7 + 3;
      FUN_10b91196c(pppuVar5,param_1 + 0x118,uVar9);
      if ((pppuVar7[5] == (undefined8 **)0x0) ||
         (pppuVar7[5][1] == (undefined8 *)0xffffffffffffffff)) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
          if (bVar2) {
            *pppuVar10 = (undefined8 **)((long)*pppuVar10 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        ppuStack_50 = pppuVar5;
        ppuStack_48 = pppuVar7;
        func_0x000107c278e4(pppuVar7 + 4,&ppuStack_50);
        func_0x00010b944e54();
      }
      if (pppuVar7[4] == (undefined8 **)0x0) {
        if (pppuVar7[5] != (undefined8 **)0x0) {
          do {
            func_0x00010b944c84();
          } while (extraout_w10_04 != 0);
        }
      }
      else {
        func_0x000107c278f0(&ppuStack_50,pppuVar7 + 4);
        if (((undefined8 ***)ppuStack_50 != (undefined8 ***)0x0) &&
           ((undefined8 ***)ppuStack_48 != (undefined8 ***)0x0)) {
          do {
            func_0x00010b944c84();
          } while (extraout_w10_03 != 0);
        }
        func_0x00010b944e54();
      }
      func_0x00010b944d78();
      func_0x00010b944ef0();
      func_0x00010b911b48(pppuVar5);
      lVar8 = 0x28;
      __Znwm();
      FUN_10b91c98c();
      plVar11 = (long *)(lVar8 + 8);
      do {
        func_0x00010b944e88();
      } while (extraout_w9 != 0);
      FUN_10b944d50();
      do {
        lVar8 = *plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        func_0x00010b944cd0();
      }
      puVar6 = (undefined8 *)0x10;
      __Znwm();
      func_0x00010b944f24();
      *puVar6 = &PTR_DAT_110d76318;
      do {
        func_0x00010b944e88();
      } while (extraout_w9_00 != 0);
      FUN_10b944d50();
      do {
        lVar8 = *plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        func_0x00010b944cd0();
      }
      puVar6 = (undefined8 *)0x10;
      __Znwm();
      func_0x00010b944f24();
      *puVar6 = &PTR_FUN_110d759f0;
      do {
        func_0x00010b944e88();
      } while (extraout_w9_01 != 0);
      FUN_10b944d50();
      do {
        lVar8 = *plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
        func_0x00010b944cd0();
      }
    }
  }
  return;
}



/* Entry: 10b94173c; end: 10b941797;  */

void FUN_10b94173c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int extraout_w10;
  long lStack_30;
  long lStack_28;
  
  FUN_10b942944(&lStack_30,param_2);
  lVar1 = lStack_30;
  if (lStack_30 != 0) {
    do {
      func_0x00010b944dac();
    } while (extraout_w10 != 0);
  }
  lStack_28 = lVar1;
  FUN_10b941798(param_1,&lStack_28);
  FUN_10b8f5f88(lVar1);
  FUN_10b944684(lStack_30);
  return;
}



/* Entry: 10b941798; end: 10b94179f;  */

/* WARNING: Possible PIC construction at 0x00010b8f18bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8f19d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8f18c0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18e0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1918) */
/* WARNING: Removing unreachable block (ram,0x00010b8f195c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1930) */
/* WARNING: Removing unreachable block (ram,0x00010b8f196c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f193c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1978) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19ac) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19a0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19b0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19c8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f194c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1964) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19d0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18cc) */
/* WARNING: Removing unreachable block (ram,0x00010b8fdc78) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19d8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19ec) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1a1c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1a24) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19e4) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd444) */

void FUN_10b941798(long param_1,long *param_2,long *param_3)

{
  code cVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long *plVar4;
  long lVar5;
  code **ppcVar6;
  code *pcVar7;
  long lVar8;
  code **ppcVar9;
  undefined8 uVar10;
  long extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  long lVar11;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined1 *puStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  code **ppcStack_138;
  undefined8 uStack_130;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  long lStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lVar8 = *(long *)(param_1 + 0x148);
  plVar4 = (long *)lVar8;
  func_0x00010b8fd3f4();
  lVar11 = *param_2;
  if (lVar11 != 0) {
    do {
      func_0x00010b8fd7f4();
    } while (extraout_w10 != 0);
  }
  pcStack_68 = FUN_10b8f8a84;
  ppuStack_60 = &PTR_DAT_110d73840;
  func_0x00010b8fe2b8();
  *plVar4 = lVar8;
  if (lVar11 != 0) {
    do {
      func_0x00010b8fd7f4();
    } while (extraout_w10_00 != 0);
  }
  *(long *)((long)plVar4 + 8) = lVar11;
  ppcVar9 = &pcStack_68;
  lStack_58 = (long)plVar4;
  FUN_10b8ebbf0(lVar8);
  func_0x00010b8fd6f8(ppuStack_60);
  lVar5 = lVar11;
  FUN_10b8f5f88();
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10b8f16cc;
  lStack_90 = lVar8;
  lStack_88 = lVar11;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010b8fd430();
  lStack_e0 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010b8fdb28();
      lStack_e0 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  pcStack_d0 = *ppcVar9;
  if (pcStack_d0 != (code *)0x0) {
    pcVar7 = pcStack_d0 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar3) {
        *(int *)pcVar7 = *(int *)pcVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_c8 = FUN_10b8f8f10;
  ppuStack_c0 = &PTR_DAT_110d73860;
  uStack_b8 = 0;
  lStack_d8 = lVar5;
  if (lStack_e0 != 0) {
    do {
      func_0x00010b8fdb28();
      uStack_b8 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  lStack_b0 = lStack_d8;
  if (pcStack_d0 != (code *)0x0) {
    pcVar7 = pcStack_d0 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar3) {
        *(int *)pcVar7 = *(int *)pcVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_a8 = pcStack_d0;
  func_0x00010b8fe6bc();
  func_0x00010b8fd728(ppuStack_c0);
  FUN_10b8f2f78(&lStack_e0);
  func_0x00010b8fd3a4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_10b8f1794;
  ppuStack_f0 = &puStack_80;
  func_0x00010b8fd474();
  func_0x00010b8f1bbc(&lStack_140);
  if (lStack_140 != 0) {
    uVar10 = 0;
    ppcVar6 = ppcVar9;
    FUN_10b8e5ce4();
    pcVar7 = *ppcVar9;
    ppcStack_138 = ppcVar6;
    uStack_130 = uVar10;
    (**(code **)(*(long *)pcVar7 + 400))(pcVar7,&ppcStack_138);
    if (((ulong)pcVar7 & 1) == 0) {
      FUN_10b99f5f8(&puStack_180,&UNK_10f7cc218);
      func_0x00010b8fdab0();
      func_0x000104bda960(puStack_180);
      goto LAB_10b8f18b8;
    }
    pcVar7 = *ppcVar9;
    func_0x00010b8fdcbc();
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000107c31088(auStack_1b8,&UNK_10f686181);
    puStack_180 = auStack_1b0;
    uStack_178 = 0;
    uStack_170 = 2;
    uStack_160 = 0;
    uStack_158 = 0;
    puStack_168 = auStack_1b8;
    FUN_10b8e143c(&uStack_150,pcVar7,&ppcStack_138,&puStack_180,ppcVar9[3]);
    func_0x00010b8fdbd0();
    cVar1 = ppcVar9[3][8];
    if (((byte)cVar1 & 1) == 0) {
      func_0x00010b8fd458(*ppcVar9);
    }
    else {
      uStack_1c8 = uStack_148;
      uStack_1d0 = uStack_150;
      uStack_150 = 0;
      uStack_148 = 0;
      func_0x00010b910b80(lStack_140,&uStack_1d0);
      FUN_10b8e552c(&uStack_1d0);
    }
    FUN_10b8e552c(&uStack_150);
    if (cVar1 == (code)0x0) goto LAB_10b8f18b8;
  }
  func_0x00010b8fd458(*ppcVar9);
LAB_10b8f18b8:
  if (lStack_140 == 0) {
    return;
  }
  uStack_1d8 = 0x10b8f18c0;
  uStack_1e8 = *(undefined8 *)(lStack_140 + 0x10);
  uStack_1f0 = *(undefined8 *)(lStack_140 + 8);
  pppuStack_1e0 = &ppuStack_f0;
  func_0x0001003a90c4(&uStack_1f0);
  return;
}



/* Entry: 10b9417a0; end: 10b94185b;  */

void FUN_10b9417a0(code **param_1,code **param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  code **ppcVar2;
  code **extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  undefined8 *puVar3;
  undefined1 auStack_b8 [24];
  code *pcStack_58;
  undefined **ppuStack_50;
  code **ppcStack_48;
  code **ppcStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  ppcVar2 = param_1;
  func_0x00010b944c94();
  if (ppcVar2[0x29] == (code *)0x0) {
    param_1 = (code **)param_1[8];
    func_0x00010b944c58(extraout_x8_00);
    if ((bool)in_ZR) {
      puStack_38 = (undefined8 *)0x0;
      puStack_30 = (undefined8 *)0x0;
      uStack_28 = 0;
      func_0x00010b93f564();
      ppcVar2 = param_1 + 0x12;
      FUN_10b93da58();
      ppcStack_40 = param_2;
      while (ppcStack_48 = ppcVar2, ppcVar2 = ppcStack_48, func_0x00010b93f688(),
            ppcVar2 != extraout_x8) {
        if ((ppcStack_40[1] == (code *)0x0) || (*(long *)(ppcStack_40[1] + 8) != 1)) {
          FUN_10b93e59c(&puStack_38,ppcStack_40 + 1);
          FUN_10b93dad4(&ppcStack_48);
          ppcVar2 = ppcStack_48;
        }
        else {
          ppcVar2 = param_1 + 0x12;
          FUN_10b93da84();
          ppcStack_40 = ppcStack_48;
        }
      }
      func_0x00010b93f5a4();
      puVar1 = puStack_30;
      for (puVar3 = puStack_38; puVar3 != puVar1; puVar3 = puVar3 + 1) {
        func_0x00010b92d8f8(*puVar3);
      }
      func_0x00010b93e808(&puStack_38);
      return;
    }
  }
  else {
    uStack_28 = extraout_x8_00;
    func_0x00010b8c3698();
    if ((param_1 != (code **)0x0) && (param_1[2] != (code *)0x0)) {
      do {
        func_0x00010b944c84();
      } while (extraout_w10 != 0);
    }
    pcStack_58 = FUN_10b942f60;
    ppuStack_50 = &PTR_DAT_110d78168;
    param_2 = &pcStack_58;
    ppcStack_48 = param_1;
    FUN_10b8f26dc();
    func_0x00010b944cf8(ppuStack_50);
    func_0x000104c62570(param_1);
    func_0x00010b944c58(uStack_28);
    if ((bool)in_ZR) {
      return;
    }
  }
  ___stack_chk_fail();
  FUN_10b98c5cc(auStack_b8,param_3);
  FUN_10b9418d4(extraout_x8_01,param_1,param_2,auStack_b8,param_4,param_5,param_6);
  func_0x00010b8c2b50(auStack_b8);
  return;
}



/* Entry: 10b94185c; end: 10b9418d3;  */

void FUN_10b94185c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_58 [24];
  
  FUN_10b98c5cc(auStack_58,param_4);
  FUN_10b9418d4(param_1,param_2,param_3,auStack_58,param_5,param_6,param_7);
  func_0x00010b8c2b50(auStack_58);
  return;
}



/* Entry: 10b9418d4; end: 10b9419d3;  */

void FUN_10b9418d4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = 0;
  if (*(long *)(param_2 + 0x148) == 0) {
    uVar1 = 0;
  }
  else {
    uStack_60 = 0;
    if (*(long *)(*(long *)(param_2 + 0x148) + 0x140) != 0) {
      do {
        func_0x00010b944cc0();
        uStack_60 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x00010b8c1c74(&lStack_58,&uStack_60);
    func_0x000108100600(uStack_60);
    uVar1 = 0;
    if (lStack_58 != 0) {
      do {
        func_0x00010b944cc0();
        uVar1 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
  }
  uStack_60 = 0;
  FUN_10b8c3f18(param_1);
  func_0x000107c278f8(uStack_60);
  func_0x000108100600(uVar1);
  FUN_10b93cee4(*(undefined8 *)(param_2 + 0x40),param_4);
  func_0x000108100600(lStack_58);
  return;
}



/* Entry: 10b9419d4; end: 10b941b77;  */

void FUN_10b9419d4(long *param_1,long param_2,undefined8 param_3)

{
  long lStack_40;
  long lStack_38;
  
  FUN_10b8d77b8(&lStack_38,param_2 + 0x80);
  if (lStack_38 == 0) {
    FUN_10b8c43b4(&lStack_40,*(undefined8 *)(param_2 + 0x78),param_3);
    if (lStack_40 == 0) {
      lStack_40 = 0;
      *param_1 = 0;
    }
    else {
      func_0x00010b8d799c(param_1,param_2 + 0x80,&lStack_40,1);
    }
    func_0x000105276914(lStack_40);
  }
  else {
    *param_1 = lStack_38;
    lStack_38 = 0;
  }
  func_0x0001080d26d8(lStack_38);
  return;
}



/* Entry: 10b941b78; end: 10b941c3b;  */

undefined1 * FUN_10b941b78(long param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long lStack_80;
  undefined1 auStack_78 [80];
  undefined8 uStack_28;
  
  func_0x00010b944f50();
  func_0x00010b944c94();
  uStack_28 = extraout_x8;
  FUN_10b921244(auStack_78,*(long *)(param_1 + 0x40) + 0x50,*param_2 + 0x38);
  FUN_10b8c40e4(*(undefined8 *)(unaff_x19 + 0x78));
  FUN_10b8d77b8(&lStack_80,unaff_x19 + 0x80,*(undefined4 *)(*unaff_x20 + 0x18));
  if (lStack_80 == 0) {
    lStack_80 = 0;
  }
  else {
    FUN_10b941c3c();
  }
  func_0x0001080d26d8(lStack_80);
  puVar1 = auStack_78;
  func_0x00010b92155c();
  func_0x00010b944c58(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001052768f0(puVar1 + 0x10);
  if (*(long *)(puVar1 + 8) != 0) {
    func_0x0001003a81fc();
  }
  return puVar1;
}



/* Entry: 10b941c3c; end: 10b941ce7;  */

void FUN_10b941c3c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined8 uStack_e8;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined8 uStack_38;
  
  func_0x00010b944c94();
  uStack_38 = extraout_x8;
  func_0x00010b8d7a68(param_1 + 0x80);
  uStack_68 = 0x10b94305c;
  ppuStack_60 = &PTR_FUN_110d781a8;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  puStack_98 = &UNK_1053a6a3c;
  ppuStack_90 = &PTR_DAT_110a21c28;
  puVar3 = &uStack_68;
  ppuVar4 = &puStack_98;
  lStack_58 = param_2;
  FUN_10b8d37cc(param_2,puVar3,ppuVar4);
  func_0x00010b944ce0(ppuStack_90);
  func_0x00010b944cf8(ppuStack_60);
  func_0x00010b944c58(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  FUN_10b8a3c40(uVar2,ppuVar4);
  func_0x00010b8b46b0(puVar3 + 0x12);
  if ((puVar3[0x3a] != 0) && (lVar5 = *(long *)(puVar3[0x3a] + 0x20), lVar5 != 0)) {
    uVar1 = *(undefined4 *)((long)puVar3 + 0x1ac);
    FUN_10b8a3d20(&uStack_e8,puVar3[6],uVar2);
    func_0x00010b8c1e0c(lVar5,uVar1,&uStack_e8,param_4,0);
    func_0x000107c278f8(uStack_e8);
  }
  return;
}



/* Entry: 10b941ce8; end: 10b941d23;  */

void FUN_10b941ce8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  FUN_10b8a3c40(uVar2,param_3);
  func_0x00010b8b46b0(param_2 + 0x90);
  if ((*(long *)(param_2 + 0x1d0) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_2 + 0x1d0) + 0x20), lVar3 != 0)) {
    uVar1 = *(undefined4 *)(param_2 + 0x1ac);
    FUN_10b8a3d20(&uStack_48,*(undefined8 *)(param_2 + 0x30),uVar2);
    func_0x00010b8c1e0c(lVar3,uVar1,&uStack_48,param_4,0);
    func_0x000107c278f8(uStack_48);
  }
  return;
}



/* Entry: 10b941d24; end: 10b9420df;  */

void FUN_10b941d24(long ***param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  code *pcVar1;
  long ****pppplVar2;
  undefined1 in_ZR;
  long ****pppplVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long ****pppplVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  undefined1 auStack_120 [32];
  long ***ppplStack_100;
  long **pplStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long ***ppplStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long ***ppplStack_c0;
  code *pcStack_b8;
  byte bStack_a9;
  undefined8 auStack_a8 [2];
  long ***ppplStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long **pplStack_70;
  long **pplStack_68;
  long **pplStack_60;
  long **pplStack_58;
  long **pplStack_50;
  undefined8 uStack_48;
  
  pppplVar4 = (long ****)0x0;
  func_0x00010b944c94();
  ppplStack_d8 = (long ***)0x0;
  uStack_48 = extraout_x8;
  if (((param_5 & 1) == 0) && (*(long *)(param_2 + 0x148) != 0)) {
    FUN_10b8f4640(&ppplStack_98,*(long *)(param_2 + 0x148),param_3);
    pppplVar4 = (long ****)ppplStack_98;
    ppplStack_98 = (long ***)0x0;
    pplStack_70 = (long **)0x0;
    ppplStack_d8 = (long ***)pppplVar4;
    FUN_10b94463c(&pplStack_70);
    FUN_10b94463c(&ppplStack_98);
  }
  ppplVar6 = param_1;
  FUN_10b94a728();
  if ((int)param_3 != 0) {
    FUN_10b94a728(&pplStack_70);
    uStack_80 = 0;
    uStack_78 = 0;
    func_0x00010b8c4290(&ppplStack_98,*(undefined8 *)(param_2 + 0x78));
    pppplVar3 = (long ****)CONCAT71(uStack_8f,uStack_90);
    if ((long ****)ppplStack_98 != pppplVar3) {
      FUN_10b9430cc(ppplStack_98,pppplVar3,
                    LZCOUNT((long)pppplVar3 - (long)ppplStack_98 >> 3) << 1 ^ 0x7e,1);
      pppplVar3 = (long ****)CONCAT71(uStack_8f,uStack_90);
    }
    for (pppplVar5 = (long ****)ppplStack_98; in_ZR = pppplVar5 == pppplVar3, !(bool)in_ZR;
        pppplVar5 = pppplVar5 + 1) {
      ppplVar6 = *pppplVar5 + 7;
      FUN_10b98c88c();
      if (((ulong)ppplVar6 & 1) == 0) {
        FUN_10b98c7b8(&ppplStack_c0,*pppplVar5 + 7);
        pcVar1 = pcStack_b8;
        pppplVar2 = (long ****)ppplStack_c0;
        if (-1 < (char)bStack_a9) {
          pcVar1 = (code *)(ulong)bStack_a9;
          pppplVar2 = &ppplStack_c0;
        }
        FUN_10b9a8dd4(auStack_a8,pppplVar2,pcVar1);
        func_0x00010b9abec8(&uStack_80,auStack_a8);
        FUN_10b9a8d98(auStack_a8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_c0);
      }
    }
    func_0x000107c31088(auStack_a8,&UNK_10f7ce652);
    func_0x00010b9abf6c(&uStack_d0,&uStack_80);
    func_0x00010b9a8f84(&ppplStack_c0,&uStack_d0);
    FUN_10b9a9358(&uStack_c8,&ppplStack_c0);
    func_0x00010b94a7e8(&pplStack_70,auStack_a8,&uStack_c8);
    func_0x000107c278f8(uStack_c8);
    FUN_10b9a8d98(&ppplStack_c0);
    func_0x000104bddf60(uStack_d0);
    func_0x000107c278f8(auStack_a8[0]);
    func_0x0001080d57c4(&ppplStack_98);
    func_0x000104bddf60(uStack_80);
    if (*param_1 != (long **)0x0) {
      func_0x0001080d575c(param_1);
      __ZdlPv(*param_1);
    }
    param_1[1] = pplStack_68;
    *param_1 = pplStack_70;
    param_1[2] = pplStack_60;
    pplStack_68 = (long **)0x0;
    pplStack_60 = (long **)0x0;
    pplStack_70 = (long **)0x0;
    func_0x0001080ce688(param_1 + 3,&pplStack_58);
    ppplVar6 = &pplStack_70;
    func_0x0001080d56d0();
  }
  if (pppplVar4 != (long ****)0x0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    pplStack_70 = (long **)(ppplVar6 + 250000000);
    pppplVar3 = pppplVar4;
    FUN_10b920060(pppplVar4,&pplStack_70);
    if ((int)pppplVar3 == 0) {
      ppplStack_d8 = (long ***)0x0;
      ppplStack_98 = (long ***)(pppplVar4 + 3);
      uStack_90 = 1;
      ppplStack_c0 = (long ***)pppplVar4;
      __ZNSt3__15mutex4lockEv();
      __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE
                (pppplVar4,&ppplStack_98);
      ppplVar6 = pppplVar4[2];
      pplStack_70 = (long **)0x0;
      __ZNSt13exception_ptrD1Ev(&pplStack_70);
      if (ppplVar6 != (long ***)0x0) goto LAB_10b9420d4;
      ppplVar6 = pppplVar4[0x12];
      pplStack_60 = (long **)pppplVar4[0x14];
      pplStack_68 = (long **)pppplVar4[0x13];
      pplStack_50 = (long **)pppplVar4[0x16];
      pplStack_58 = (long **)pppplVar4[0x15];
      pppplVar4[0x12] = (long ***)0x0;
      pplStack_70 = (long **)ppplVar6;
      func_0x0001090eb46c(&ppplStack_98);
      func_0x00010b920858(&ppplStack_c0);
      in_ZR = ppplVar6 == (long ***)0x1;
      if ((bool)in_ZR) {
        FUN_10b94a838(param_1,&pplStack_68);
      }
      else {
        pppplVar4 = (long ****)&UNK_10f7ce661;
        func_0x000107c31088(&uStack_80);
        func_0x000107c31084();
        pcStack_b8 = FUN_10b8fd134;
        ppplStack_c0 = &pplStack_68;
        func_0x000107c2793c(&UNK_10f7ce669);
        func_0x000107c3173c(&ppplStack_98);
        func_0x000107c31080(auStack_a8,pppplVar4,&ppplStack_98);
        FUN_10b9a8e18(&ppplStack_c0,auStack_a8);
        FUN_10b94a754(param_1,&uStack_80,&ppplStack_c0);
        FUN_10b9a8d98(&ppplStack_c0);
        func_0x000107c278f8(auStack_a8[0]);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_98);
        func_0x000107c278f8(uStack_80);
      }
      FUN_10b8fab94(&pplStack_70);
    }
    else {
      func_0x000107c31088(&ppplStack_98,&UNK_10f7ce661);
      func_0x000107c31088(&ppplStack_c0,&UNK_10f7ce683);
      FUN_10b9a8e18(&pplStack_70,&ppplStack_c0);
      FUN_10b94a754(param_1,&ppplStack_98,&pplStack_70);
      FUN_10b9a8d98(&pplStack_70);
      func_0x000107c278f8(ppplStack_c0);
      func_0x000107c278f8(ppplStack_98);
    }
  }
  FUN_10b94463c(&ppplStack_d8);
  func_0x00010b944c58(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10b9420d4:
  __ZNSt13exception_ptrC1ERKS_();
  __ZSt17rethrow_exceptionSt13exception_ptr();
  pcStack_e8 = FUN_10b9420e0;
  ppplStack_100 = (long ***)pppplVar4;
  pplStack_f8 = (long **)param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  FUN_10b941d24(auStack_120);
  FUN_10b94aa18(extraout_x8_00,auStack_120);
  func_0x0001080d56d0(auStack_120);
  return;
}



/* Entry: 10b9420e0; end: 10b942123;  */

void FUN_10b9420e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [32];
  
  FUN_10b941d24(auStack_40,param_2,0,1,0);
  FUN_10b94aa18(param_1,auStack_40);
  func_0x0001080d56d0(auStack_40);
  return;
}



/* Entry: 10b942124; end: 10b9422db;  */

/* WARNING: Possible PIC construction at 0x00010b942190: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b942194) */
/* WARNING: Removing unreachable block (ram,0x00010b9421c4) */
/* WARNING: Removing unreachable block (ram,0x00010b9421b0) */

void FUN_10b942124(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  code **ppcVar5;
  code **ppcVar6;
  undefined8 extraout_x8;
  undefined8 uVar7;
  code *pcStack_160;
  code *pcStack_158;
  undefined8 auStack_150 [5];
  code *pcStack_128;
  long alStack_120 [5];
  code *pcStack_f8;
  undefined **ppuStack_f0;
  long *plStack_e8;
  undefined8 uStack_c8;
  code **ppcStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  long alStack_80 [3];
  code *pcStack_68;
  undefined **ppuStack_60;
  long *plStack_58;
  
  lVar2 = param_1;
  func_0x00010b944c94();
  plVar4 = alStack_80;
  lStack_88 = lVar2;
  FUN_10b943ae0();
  pcStack_68 = FUN_10b943b74;
  ppuStack_60 = &PTR_DAT_110d781c8;
  func_0x00010b944f1c();
  *plVar4 = lStack_88;
  FUN_10b943ae0(plVar4 + 1,alStack_80);
  ppcVar5 = &pcStack_68;
  ppcVar6 = &pcStack_160;
  uStack_98 = 0x10b942194;
  ppcStack_c0 = &pcStack_68;
  plStack_b8 = &lStack_88;
  plStack_b0 = plVar4;
  lStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  plStack_58 = plVar4;
  func_0x00010b944c94();
  uVar1 = *(char *)(param_1 + 0x185) == '\x01';
  uStack_c8 = extraout_x8;
  if ((bool)uVar1) {
    uVar7 = *(undefined8 *)(param_1 + 0x148);
    pcStack_160 = (code *)0x0;
    pcStack_128 = *ppcVar5;
    plVar4 = alStack_120;
    (**(code **)(ppcVar5[1] + 0x10))();
    pcStack_f8 = FUN_10b943fd8;
    ppuStack_f0 = &PTR_FUN_110d781e8;
    func_0x00010b944e64();
    lVar2 = alStack_120[0];
    *plVar4 = (long)pcStack_128;
    (**(code **)(lVar2 + 0x10))(plVar4 + 1,alStack_120);
    plStack_e8 = plVar4;
    func_0x0001080d3888(uVar7,&pcStack_160,&pcStack_f8);
    func_0x00010b944cec(ppuStack_f0);
    func_0x00010b944ce0(alStack_120[0]);
    pcVar3 = pcStack_160;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x110);
    pcStack_f8 = (code *)0x0;
    pcStack_158 = *ppcVar5;
    (**(code **)(ppcVar5[1] + 0x10))(auStack_150);
    ppcVar6 = &pcStack_f8;
    func_0x00010b94b6f8(uVar7,ppcVar6,&pcStack_158);
    func_0x00010b944cf8(auStack_150[0]);
    pcVar3 = pcStack_f8;
  }
  func_0x000105276914();
  func_0x00010b944c58(uStack_c8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  plVar4 = *(long **)(pcVar3 + 400);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b9422f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x30))(plVar4,pcVar3,ppcVar6 + 4);
    return;
  }
  return;
}



/* Entry: 10b9422dc; end: 10b942337;  */

void FUN_10b9422dc(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 400);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b9422f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,param_1,param_2 + 0x20);
    return;
  }
  return;
}



/* Entry: 10b942338; end: 10b942463;  */

void FUN_10b942338(undefined1 *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined1 in_ZR;
  int iVar7;
  long *plVar8;
  long **pplVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x20;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  long *plStack_a0;
  long *plStack_98;
  code *pcStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  undefined8 uStack_58;
  undefined1 *puVar6;
  
  pplVar9 = &plStack_a0;
  puVar11 = param_1;
  func_0x00010b944c94();
  pbVar1 = puVar11 + 0x187;
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = (byte)param_2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uStack_58 = extraout_x8;
  if ((param_2 == 0) && ((bVar2 & 1) != 0)) {
    func_0x00010b8c4290(&plStack_a0,*(undefined8 *)(param_1 + 0x78));
    for (unaff_x20 = plStack_a0; in_ZR = unaff_x20 == plStack_98, !(bool)in_ZR;
        unaff_x20 = unaff_x20 + 1) {
      iVar7 = (int)*unaff_x20;
      func_0x00010b8c252c();
      if (iVar7 != 0) {
        uVar13 = *(undefined8 *)(param_1 + 0x110);
        lVar12 = *unaff_x20;
        if ((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) {
          do {
            func_0x00010b944c84();
          } while (extraout_w10 != 0);
        }
        pcStack_88 = FUN_10b944070;
        ppuStack_80 = &PTR_FUN_110d78208;
        plVar8 = (long *)0x8;
        __Znwm();
        if ((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) {
          do {
            func_0x00010b944c84();
          } while (extraout_w10_00 != 0);
        }
        *plVar8 = lVar12;
        plStack_78 = plVar8;
        func_0x00010b94b6f8(uVar13,unaff_x20,&pcStack_88);
        (*(code *)*ppuStack_80)(&ppuStack_80);
        func_0x000105276914(lVar12);
      }
    }
    func_0x0001080d57c4();
    puVar11 = (undefined1 *)pplVar9;
  }
  func_0x00010b944c58(uStack_58);
  if (!(bool)in_ZR) {
    pcVar14 = FUN_10b942464;
    ___stack_chk_fail();
    pplVar9 = &plStack_a0;
    puVar5 = (undefined1 *)register0x00000008;
    while( true ) {
      puVar6 = (undefined1 *)pplVar9;
      *(long **)(puVar6 + -0x20) = unaff_x20;
      *(undefined1 **)(puVar6 + -0x18) = param_1;
      *(undefined1 **)(puVar6 + -0x10) = puVar5 + -0x10;
      *(code **)(puVar6 + -8) = pcVar14;
      func_0x00010b944f50();
      func_0x00010b944c94();
      *(undefined8 *)(puVar6 + -0x28) = extraout_x8_00;
      FUN_10b8c43b4(puVar6 + -0x60,*(undefined8 *)(puVar11 + 0x78));
      uVar10 = *(ulong *)(puVar6 + -0x60);
      if (((uVar10 != 0) && (func_0x00010b8c2234(), uVar10 >> 0x20 != 0)) &&
         ((param_1[0x187] & 1) == 0)) {
        uVar13 = *(undefined8 *)(param_1 + 0x110);
        lVar12 = *(long *)(puVar6 + -0x60);
        if ((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) {
          plVar8 = (long *)(*(long *)(lVar12 + 0x10) + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        *(code **)(puVar6 + -0x58) = FUN_10b9440f0;
        *(undefined ***)(puVar6 + -0x50) = &PTR_DAT_110d78228;
        param_1 = puVar6 + -0x58;
        *(long *)(puVar6 + -0x48) = lVar12;
        *(int *)(puVar6 + -0x40) = (int)uVar10;
        func_0x00010b94b6f8(uVar13,puVar6 + -0x60,puVar6 + -0x58);
        (*(code *)**(undefined8 **)(puVar6 + -0x50))(puVar6 + -0x50);
      }
      lVar12 = *(long *)(puVar6 + -0x60);
      func_0x000105276914();
      func_0x00010b944c58(*(undefined8 *)(puVar6 + -0x28));
      if ((bool)in_ZR) break;
      pcVar14 = FUN_10b942544;
      ___stack_chk_fail();
      puVar11 = (undefined1 *)(lVar12 + -0x18);
      pplVar9 = (long **)(puVar6 + -0x60);
      puVar5 = puVar6;
    }
    return;
  }
  return;
}



/* Entry: 10b942464; end: 10b942543;  */

void FUN_10b942464(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  ulong uVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  long lVar6;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b944f50();
    func_0x00010b944c94();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    FUN_10b8c43b4((undefined1 *)((long)register0x00000008 + -0x60),*(undefined8 *)(param_1 + 0x78));
    uVar4 = *(ulong *)((long)register0x00000008 + -0x60);
    if (((uVar4 != 0) && (func_0x00010b8c2234(), uVar4 >> 0x20 != 0)) &&
       ((unaff_x19[0x187] & 1) == 0)) {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x110);
      lVar6 = *(long *)((long)register0x00000008 + -0x60);
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
        plVar1 = (long *)(*(long *)(lVar6 + 0x10) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(code **)((long)register0x00000008 + -0x58) = FUN_10b9440f0;
      *(undefined ***)((long)register0x00000008 + -0x50) = &PTR_DAT_110d78228;
      unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x58);
      *(long *)((long)register0x00000008 + -0x48) = lVar6;
      *(int *)((long)register0x00000008 + -0x40) = (int)uVar4;
      func_0x00010b94b6f8(uVar5,(undefined1 *)((long)register0x00000008 + -0x60),
                          (undefined1 *)((long)register0x00000008 + -0x58));
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x50))
                ((undefined1 *)((long)register0x00000008 + -0x50));
    }
    param_1 = *(long *)((long)register0x00000008 + -0x60);
    func_0x000105276914();
    func_0x00010b944c58(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b942544;
    ___stack_chk_fail();
    param_1 = param_1 + -0x18;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  return;
}



/* Entry: 10b942544; end: 10b94254b;  */

void FUN_10b942544(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  ulong uVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  long lVar6;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    param_1 = param_1 + -0x18;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b944f50();
    func_0x00010b944c94();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    FUN_10b8c43b4((undefined1 *)((long)register0x00000008 + -0x60),*(undefined8 *)(param_1 + 0x78));
    uVar4 = *(ulong *)((long)register0x00000008 + -0x60);
    if (((uVar4 != 0) && (func_0x00010b8c2234(), uVar4 >> 0x20 != 0)) &&
       ((unaff_x19[0x187] & 1) == 0)) {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x110);
      lVar6 = *(long *)((long)register0x00000008 + -0x60);
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
        plVar1 = (long *)(*(long *)(lVar6 + 0x10) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(code **)((long)register0x00000008 + -0x58) = FUN_10b9440f0;
      *(undefined ***)((long)register0x00000008 + -0x50) = &PTR_DAT_110d78228;
      unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x58);
      *(long *)((long)register0x00000008 + -0x48) = lVar6;
      *(int *)((long)register0x00000008 + -0x40) = (int)uVar4;
      func_0x00010b94b6f8(uVar5,(undefined1 *)((long)register0x00000008 + -0x60),
                          (undefined1 *)((long)register0x00000008 + -0x58));
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x50))
                ((undefined1 *)((long)register0x00000008 + -0x50));
    }
    param_1 = *(long *)((long)register0x00000008 + -0x60);
    func_0x000105276914();
    func_0x00010b944c58(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b942544;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  return;
}



/* Entry: 10b94254c; end: 10b9426bf;  */

undefined8 * FUN_10b94254c(long *param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  long lVar5;
  undefined8 *puVar6;
  long alStack_e0 [2];
  long *plStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined8 *puStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  func_0x00010b944c94();
  uStack_48 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  plVar2 = param_1;
  FUN_10b9419d4(&puStack_b0,param_1,*(undefined4 *)(*param_2 + 0x10));
  puVar3 = puStack_b0;
  if (puStack_b0 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
    goto LAB_10b9426a4;
  }
  lVar5 = *param_2;
  alStack_e0[0] = lVar5;
  if (lVar5 == 0) {
LAB_10b9425cc:
    puVar6 = puStack_b0;
    if (puStack_b0[2] != 0) {
      do {
        func_0x00010b944c84();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    do {
      func_0x00010b944dac();
    } while (extraout_w10 != 0);
    puVar6 = puStack_b0;
    if (puStack_b0 != (undefined8 *)0x0) goto LAB_10b9425cc;
  }
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c0 = SUB81(plVar1,0);
  uStack_bf = (undefined7)((ulong)plVar1 >> 8);
  uStack_b8 = 1;
  pcStack_78 = FUN_10b944158;
  ppuStack_70 = &PTR_FUN_110d78248;
  plStack_d0 = param_1;
  func_0x00010b944e64();
  puVar4 = puVar6;
  if (lVar5 != 0) {
    do {
      func_0x00010b944dac();
      puVar4 = puStack_b0;
    } while (extraout_w10_01 != 0);
  }
  *plVar2 = lVar5;
  plVar2[1] = (long)puVar6;
  alStack_e0[1] = 0;
  plVar2[3] = CONCAT71(uStack_c7,uStack_c8);
  plVar2[2] = (long)plStack_d0;
  *(ulong *)((long)plVar2 + 0x21) = CONCAT17(uStack_b8,uStack_bf);
  *(ulong *)((long)plVar2 + 0x19) = CONCAT17(uStack_c0,uStack_c7);
  plStack_68 = plVar2;
  if ((puVar4 != (undefined8 *)0x0) && (puVar4[2] != 0)) {
    do {
      func_0x00010b944d40();
    } while (extraout_w11 != 0);
  }
  pcStack_a8 = FUN_10b944330;
  ppuStack_a0 = &PTR_DAT_110d78268;
  plStack_98 = param_1;
  FUN_10b8d37cc(puVar3,&pcStack_78,&pcStack_a8);
  func_0x00010b944cec(ppuStack_a0);
  func_0x00010b944ce0(ppuStack_70);
  FUN_10b9426c0(alStack_e0);
  puVar3 = puStack_b0;
LAB_10b9426a4:
  func_0x0001080d26d8();
  func_0x00010b944c58(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001081002dc(puVar3 + 1);
    func_0x00010b8c2b9c(*puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10b9426c0; end: 10b9426e7;  */

undefined8 * FUN_10b9426c0(undefined8 *param_1)

{
  func_0x0001081002dc(param_1 + 1);
  func_0x00010b8c2b9c(*param_1);
  return param_1;
}



/* Entry: 10b9426e8; end: 10b94277f;  */

void FUN_10b9426e8(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lStack_40;
  long lStack_38;
  
  FUN_10b8c43b4(&lStack_38,*(undefined8 *)(param_1 + 0x78),*param_2);
  if (lStack_38 == 0) {
    lStack_38 = 0;
  }
  else {
    FUN_10b8d77b8(&lStack_40,param_1 + 0x80,*(undefined4 *)(lStack_38 + 0x18));
    if (lStack_40 == 0) {
      lStack_40 = 0;
    }
    else {
      plVar1 = *(long **)(*(long *)(lStack_38 + 0xe8) + 0x10);
      (**(code **)(*plVar1 + 0x38))(plVar1,lStack_40,param_3,param_4);
    }
    func_0x0001080d26d8(lStack_40);
  }
  func_0x000105276914(lStack_38);
  return;
}



/* Entry: 10b942780; end: 10b942787;  */

void FUN_10b942780(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lStack_40;
  long lStack_38;
  
  FUN_10b8c43b4(&lStack_38,*(undefined8 *)(param_1 + 0x60),*param_2);
  if (lStack_38 == 0) {
    lStack_38 = 0;
  }
  else {
    FUN_10b8d77b8(&lStack_40,param_1 + 0x68,*(undefined4 *)(lStack_38 + 0x18));
    if (lStack_40 == 0) {
      lStack_40 = 0;
    }
    else {
      plVar1 = *(long **)(*(long *)(lStack_38 + 0xe8) + 0x10);
      (**(code **)(*plVar1 + 0x38))(plVar1,lStack_40,param_3,param_4);
    }
    func_0x0001080d26d8(lStack_40);
  }
  func_0x000105276914(lStack_38);
  return;
}



/* Entry: 10b942788; end: 10b94290f;  */

long * FUN_10b942788(undefined8 param_1,undefined8 param_2,int param_3,int param_4,long *param_5)

{
  long *plVar1;
  long lVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  int extraout_w11;
  long *unaff_x19;
  long unaff_x20;
  long *plStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  long *plStack_f0;
  long *plStack_d0;
  long lStack_c8;
  long alStack_c0 [5];
  code *pcStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined8 uStack_68;
  
  func_0x00010b944de4();
  func_0x00010b944c94();
  plStack_108 = (long *)0x0;
  uStack_68 = extraout_x8;
  if (param_4 == 0) {
    func_0x00010b8d77b8(&plStack_d0,unaff_x20 + 0x80,*(undefined4 *)(*unaff_x19 + 0x18));
  }
  else {
    func_0x00010b8d799c(&plStack_d0,unaff_x20 + 0x80);
  }
  FUN_10b8d498c(&plStack_108,&plStack_d0);
  func_0x0001080d26d8(plStack_d0);
  plStack_d0 = plStack_108;
  if ((plStack_108 != (long *)0x0) && (plStack_108[2] != 0)) {
    do {
      func_0x00010b944d40();
      plStack_d0 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  lStack_c8 = *param_5;
  plVar3 = alStack_c0;
  (**(code **)(param_5[1] + 0x10))(plVar3,param_5 + 1);
  pcStack_98 = FUN_10b9443b4;
  ppuStack_90 = &PTR_FUN_110d78288;
  func_0x00010b944f14();
  lVar2 = lStack_c8;
  plVar1 = plStack_d0;
  plStack_d0 = (long *)0x0;
  *plVar3 = (long)plVar1;
  plVar3[1] = lVar2;
  (**(code **)(alStack_c0[0] + 0x10))(plVar3 + 2,alStack_c0);
  plStack_88 = plVar3;
  FUN_10b942910(&plStack_d0);
  if ((param_3 == 0) || (in_ZR = *(char *)((long)plStack_108 + 0x1d9) == '\x01', !(bool)in_ZR)) {
    FUN_10b9443b4(&pcStack_98);
  }
  else {
    pcStack_100 = FUN_10b9443b4;
    ppuStack_f8 = &PTR_FUN_110d78288;
    plStack_88 = (long *)0x0;
    plStack_f0 = plVar3;
    func_0x00010b94b6f8(*(undefined8 *)(unaff_x20 + 0x110));
    func_0x00010b944cf8(ppuStack_f8);
  }
  FUN_10b944404(&ppuStack_90);
  plVar3 = plStack_108;
  func_0x0001080d26d8();
  func_0x00010b944c58(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    (**(code **)plVar3[2])();
    func_0x000108100e0c(plVar3);
    func_0x0001080d26d8();
    return unaff_x19;
  }
  return plVar3;
}



/* Entry: 10b942910; end: 10b94293b;  */

undefined8 FUN_10b942910(long param_1)

{
  undefined8 unaff_x19;
  
  (*(code *)**(undefined8 **)(param_1 + 0x10))();
  func_0x000108100e0c(param_1);
  func_0x0001080d26d8();
  return unaff_x19;
}



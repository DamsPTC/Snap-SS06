/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b92534c; end: 10b9253af;  */

void FUN_10b92534c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  while (param_4 = param_4 + -0x20, param_3 != param_2) {
    param_3 = param_3 + -0x20;
    FUN_10b9250e4(param_4,param_3);
  }
  func_0x00010b926048();
  return;
}



/* Entry: 10b9253b0; end: 10b9253e7;  */

undefined8 * FUN_10b9253b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x000104bd54b0(uVar1);
  }
  return param_1;
}



/* Entry: 10b9253e8; end: 10b9253f3;  */

long * FUN_10b9253e8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b92543c();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 10b9253f4; end: 10b92545b;  */

long * FUN_10b9253f4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b92543c();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 10b92545c; end: 10b925497;  */

void FUN_10b92545c(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bfe188();
  func_0x00010b9260d4();
  FUN_10b925498();
  return;
}



/* Entry: 10b925498; end: 10b925547;  */

void FUN_10b925498(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_10b9250e4(param_4,param_2);
    param_4 = param_4 + 0x20;
  }
  func_0x00010b926048();
  return;
}



/* Entry: 10b925548; end: 10b925573;  */

long * FUN_10b925548(long *param_1)

{
  FUN_10b925574();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b925574; end: 10b92557b;  */

void FUN_10b925574(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b925fa8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x00010b925040();
  }
  return;
}



/* Entry: 10b92557c; end: 10b9255af;  */

void FUN_10b92557c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b925fa8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x00010b925040();
  }
  return;
}



/* Entry: 10b9255b0; end: 10b9255df;  */

void FUN_10b9255b0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 8);
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
  *plVar4 = lVar5;
  *(long **)(param_1 + 8) = plVar4 + 1;
  return;
}



/* Entry: 10b9255e0; end: 10b925653;  */

undefined8 FUN_10b9255e0(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long extraout_x9;
  long unaff_x19;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  
  func_0x00010b926010();
  FUN_10b925654();
  func_0x00010b9260e8();
  if (param_2 != 0) {
    FUN_10b9256b0();
  }
  func_0x00010b92602c();
  if ((extraout_x9 != 0) && (*(long *)(extraout_x9 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(extraout_x9 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010b9260fc();
  FUN_10b92567c();
  uVar4 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010b92573c(auStack_58);
  return uVar4;
}



/* Entry: 10b925654; end: 10b92567b;  */

undefined8 FUN_10b925654(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3d == 0) {
    func_0x00010b926110();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_10b9256a4();
  func_0x00010b925fa8();
  func_0x00010b926074();
  FUN_10b9256ec();
  func_0x00010b925f64();
  return param_1;
}



/* Entry: 10b92567c; end: 10b9256a3;  */

void FUN_10b92567c(void)

{
  func_0x00010b925fa8();
  func_0x00010b926074();
  FUN_10b9256ec();
  func_0x00010b925f64();
  return;
}



/* Entry: 10b9256a4; end: 10b9256af;  */

void FUN_10b9256a4(void)

{
  _abort();
  FUN_10b9256d0();
  return;
}



/* Entry: 10b9256b0; end: 10b9256cf;  */

void FUN_10b9256b0(void)

{
  FUN_10b9256d0();
  return;
}



/* Entry: 10b9256d0; end: 10b9256eb;  */

void FUN_10b9256d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
      func_0x00010b924fe8();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
  return;
}



/* Entry: 10b9256ec; end: 10b92570b;  */

void FUN_10b9256ec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
    *param_4 = *puVar1;
    *puVar1 = 0;
    param_4 = param_4 + 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    func_0x00010b924fe8();
  }
  return;
}



/* Entry: 10b92570c; end: 10b925767;  */

void FUN_10b92570c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x00010b924fe8();
  }
  return;
}



/* Entry: 10b925768; end: 10b92576f;  */

void FUN_10b925768(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b925fa8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x00010b924fe8();
  }
  return;
}



/* Entry: 10b925770; end: 10b9257a3;  */

void FUN_10b925770(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b925fa8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x00010b924fe8();
  }
  return;
}



/* Entry: 10b9257a4; end: 10b9257f7;  */

void FUN_10b9257a4(long *param_1,long *param_2,long *param_3)

{
  for (; (param_1 != param_2 && (*param_1 != *param_3)); param_1 = param_1 + 1) {
  }
  return;
}



/* Entry: 10b9257f8; end: 10b92586b;  */

undefined8 FUN_10b9257f8(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long extraout_x9;
  long unaff_x19;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  
  func_0x00010b926010();
  FUN_10b92586c();
  func_0x00010b9260e8();
  if (param_2 != 0) {
    FUN_10b9258c8();
  }
  func_0x00010b92602c();
  if ((extraout_x9 != 0) && (*(long *)(extraout_x9 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(extraout_x9 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010b9260fc();
  FUN_10b925894();
  uVar4 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010b925954(auStack_58);
  return uVar4;
}



/* Entry: 10b92586c; end: 10b925893;  */

undefined8 FUN_10b92586c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3d == 0) {
    func_0x00010b926110();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_10b9258bc();
  func_0x00010b925fa8();
  func_0x00010b926074();
  FUN_10b925904();
  func_0x00010b925f64();
  return param_1;
}



/* Entry: 10b925894; end: 10b9258bb;  */

void FUN_10b925894(void)

{
  func_0x00010b925fa8();
  func_0x00010b926074();
  FUN_10b925904();
  func_0x00010b925f64();
  return;
}



/* Entry: 10b9258bc; end: 10b9258c7;  */

void FUN_10b9258bc(void)

{
  _abort();
  FUN_10b9258e8();
  return;
}



/* Entry: 10b9258c8; end: 10b9258e7;  */

void FUN_10b9258c8(void)

{
  FUN_10b9258e8();
  return;
}



/* Entry: 10b9258e8; end: 10b925903;  */

void FUN_10b9258e8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
      func_0x000104bd548c();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
  return;
}



/* Entry: 10b925904; end: 10b925923;  */

void FUN_10b925904(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
    *param_4 = *puVar1;
    *puVar1 = 0;
    param_4 = param_4 + 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    func_0x000104bd548c();
  }
  return;
}



/* Entry: 10b925924; end: 10b92597f;  */

void FUN_10b925924(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x000104bd548c();
  }
  return;
}



/* Entry: 10b925980; end: 10b925987;  */

void FUN_10b925980(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b925fa8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x000104bd548c();
  }
  return;
}



/* Entry: 10b925988; end: 10b9259bb;  */

void FUN_10b925988(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b925fa8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x000104bd548c();
  }
  return;
}



/* Entry: 10b9259bc; end: 10b925aeb;  */

void FUN_10b9259bc(long *param_1,long *param_2,ulong *param_3)

{
  int *piVar1;
  ulong *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 extraout_w8;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  long extraout_x9;
  long extraout_x10;
  long extraout_x11;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  uVar6 = *param_3;
  FUN_10b925aec();
  lVar10 = 0;
  uVar11 = uVar6 >> 7;
  lVar8 = *param_2;
  while( true ) {
    uVar11 = uVar11 & param_2[3];
    uVar14 = *(ulong *)(lVar8 + uVar11);
    uVar12 = uVar14 ^ (uVar6 & 0x7f) * 0x101010101010101;
    for (uVar12 = uVar12 + 0xfefefefefefefeff & (uVar12 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar3 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      lVar13 = param_2[1];
      plVar7 = (long *)(uVar11 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & param_2[3]);
      if (*(ulong *)(lVar13 + (long)plVar7 * 0x10) == *param_3) {
        uVar9 = 0;
        goto LAB_10b925a78;
      }
    }
    if ((uVar14 & ~uVar14 << 6 & 0x8080808080808080) != 0) break;
    lVar10 = lVar10 + 8;
    uVar11 = lVar10 + uVar11;
  }
  plVar7 = param_2;
  FUN_10b925b0c(param_2,uVar6);
  puVar2 = (ulong *)(param_2[1] + (long)plVar7 * 0x10);
  uVar11 = *param_3;
  if (uVar11 != 0) {
    piVar1 = (int *)(uVar11 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *puVar2 = uVar11;
  puVar2[1] = 0;
  *(byte *)(*param_2 + (long)plVar7) = (byte)uVar6 & 0x7f;
  func_0x00010b92608c();
  *(undefined1 *)(extraout_x9 + extraout_x10 + extraout_x11 + 1) = extraout_w8;
  lVar8 = *param_2;
  lVar13 = param_2[1];
  uVar9 = 1;
LAB_10b925a78:
  *param_1 = lVar8 + (long)plVar7;
  param_1[1] = lVar13 + (long)plVar7 * 0x10;
  *(undefined1 *)(param_1 + 2) = uVar9;
  return;
}



/* Entry: 10b925aec; end: 10b925b0b;  */

void FUN_10b925aec(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,param_1);
  return;
}



/* Entry: 10b925b0c; end: 10b925bd3;  */

void FUN_10b925b0c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_10b925bd4(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_10b925b54;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_10b925b54;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_10b925ba8:
    FUN_10b925c14(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_10b925ba8;
    }
    func_0x00010b925d1c(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_10b925bd4(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_10b925b54:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 10b925bd4; end: 10b925c13;  */

ulong FUN_10b925bd4(long param_1,ulong param_2,ulong param_3)

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



/* Entry: 10b925c14; end: 10b925ed3;  */

void FUN_10b925c14(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 extraout_w8;
  long extraout_x9;
  long extraout_x10;
  long extraout_x11;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *param_1;
  lVar4 = param_1[1];
  lVar6 = param_1[3];
  lVar7 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar2 = lVar7 + param_2 * 0x10;
  __Znwm();
  *param_1 = lVar2;
  param_1[1] = lVar2 + lVar7;
  _memset();
  lVar7 = 0;
  *(undefined1 *)(lVar2 + param_2) = 0xff;
  lVar2 = 6;
  if (param_2 != 7) {
    lVar2 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar2 - param_1[2];
  param_1[3] = param_2;
  for (; lVar6 != lVar7; lVar7 = lVar7 + 1) {
    if (-1 < *(char *)(lVar1 + lVar7)) {
      lVar2 = lVar4;
      FUN_10b925ed4();
      lVar5 = *param_1;
      lVar3 = lVar5;
      FUN_10b925bd4(lVar5,param_1[3],lVar2);
      *(byte *)(lVar5 + lVar3) = (byte)lVar2 & 0x7f;
      func_0x00010b92608c();
      *(undefined1 *)(extraout_x9 + extraout_x11 + extraout_x10 + 1) = extraout_w8;
      FUN_10b925ef4(param_1[1] + lVar3 * 0x10,lVar4);
    }
    lVar4 = lVar4 + 0x10;
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b925ed4; end: 10b925ef3;  */

void FUN_10b925ed4(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_1);
  return;
}



/* Entry: 10b925ef4; end: 10b925f0b;  */

undefined8 FUN_10b925ef4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001080cbf20(param_2 + 1);
  func_0x00010007e5d0(param_2);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b925f0c; end: 10b925f1f;  */

void FUN_10b925f0c(void)

{
  func_0x00010b925f30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b925f20; end: 10b926137;  */

void FUN_10b925f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b925f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b926138; end: 10b92656b;  */

void FUN_10b926138(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d76b50;
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
  return;
}



/* Entry: 10b92656c; end: 10b926663;  */

undefined8 *
FUN_10b92656c(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 param_4,long *param_5
             ,long *param_6,undefined4 param_7,undefined4 param_8,undefined8 param_9)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d76c58;
  uVar6 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar6;
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = *param_3;
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
  param_1[5] = lVar5;
  FUN_10b9269fc(param_1 + 6,param_4);
  lVar5 = *param_5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[8] = lVar5;
  lVar5 = *param_6;
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
  param_1[9] = lVar5;
  *(undefined4 *)(param_1 + 10) = param_7;
  *(undefined4 *)((long)param_1 + 0x54) = param_8;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  FUN_10b9a8f04(param_1 + 0x10,param_9);
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((long)param_1 + 0x92) = 0;
  return param_1;
}



/* Entry: 10b926664; end: 10b9266d7;  */

undefined8 * FUN_10b926664(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d76c58;
  FUN_10b9a8d98(param_1 + 0x10);
  func_0x0001080cb554(param_1 + 0xe);
  func_0x0001080eb314(param_1 + 0xc);
  func_0x000107c278f4(param_1 + 9);
  func_0x00010b926a68(param_1 + 8);
  FUN_10b9244a4(param_1 + 6);
  func_0x0001052768f0(param_1 + 5);
  func_0x00010b926a40(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b9266d8; end: 10b9266db;  */

undefined8 * FUN_10b9266d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d76c58;
  FUN_10b9a8d98(param_1 + 0x10);
  func_0x0001080cb554(param_1 + 0xe);
  func_0x0001080eb314(param_1 + 0xc);
  func_0x000107c278f4(param_1 + 9);
  func_0x00010b926a68(param_1 + 8);
  FUN_10b9244a4(param_1 + 6);
  func_0x0001052768f0(param_1 + 5);
  func_0x00010b926a40(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b9266dc; end: 10b9266ef;  */

void FUN_10b9266dc(void)

{
  FUN_10b926664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9266f0; end: 10b92676f;  */

void FUN_10b9266f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (__ZNSt3__119__shared_weak_count4lockEv(), lVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 != (long *)0x0) {
      FUN_10b926ab8();
      lStack_38 = param_1;
      (**(code **)(*plVar2 + 0x10))(plVar2,&lStack_38,param_2);
      FUN_10b926ae8(lStack_38);
    }
    func_0x000107c27b90(lVar1);
  }
  return;
}



/* Entry: 10b926770; end: 10b926967;  */

void FUN_10b926770(long *param_1,long *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  int iVar5;
  long **pplVar6;
  long lVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar8;
  long *plVar9;
  long *plStack_190;
  long lStack_188;
  undefined1 auStack_178 [88];
  undefined1 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long *plStack_e8;
  long lStack_e0;
  long alStack_d8 [3];
  long lStack_c0;
  long lStack_b8;
  long lStack_60;
  long alStack_58 [2];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_1;
  if ((*(byte *)((long)param_1 + 0x92) & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0x92) = 1;
    func_0x00010b8c3d48(&lStack_e0,param_1 + 5);
    plVar8 = &lStack_60;
    FUN_10b905d74(plVar8,param_1[8] + 0x28);
    iVar5 = (int)plVar8;
    if (lStack_60 == 0) {
      func_0x00010b926afc();
      if (iVar5 != 0) {
        func_0x0001080e8a3c(&lStack_c0,&UNK_10f7cdcb5);
      }
      (**(code **)(**(long **)(param_1[8] + 0x20) + 0x30))
                (alStack_d8,*(long **)(param_1[8] + 0x20),param_1 + 9);
      FUN_10b8a2ae8(&lStack_60,alStack_d8);
      func_0x000104bda914(alStack_d8);
      FUN_10b926bb4(param_1[8] + 0x28,&lStack_60);
      iVar5 = (int)&lStack_c0;
      func_0x0001080e8dd4();
    }
    in_ZR = lStack_60 == 1;
    if ((bool)in_ZR) {
      func_0x00010b926afc();
      if (iVar5 != 0) {
        FUN_10b8cbfb8(&lStack_c0,&UNK_10f7cdcd1);
      }
      plVar8 = *(long **)(param_1[8] + 0x20);
      lVar7 = param_1[10];
      uVar2 = *(undefined4 *)((long)param_1 + 0x54);
      unaff_x20 = param_1;
      FUN_10b926ab8();
      if ((unaff_x20 != (long *)0x0) && (unaff_x20[2] != 0)) {
        plVar9 = (long *)(unaff_x20[2] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plStack_e8 = unaff_x20;
      (**(code **)(*plVar8 + 0x38))
                (alStack_d8,plVar8,alStack_58,(int)lVar7,uVar2,param_1 + 0x10,&plStack_e8);
      param_2 = alStack_d8;
      func_0x0001080ebea0(param_1 + 0xc);
      func_0x0001080eb314(alStack_d8);
      func_0x0001080cb96c(plStack_e8);
      func_0x00010b926ae8(unaff_x20);
      func_0x0001080e8dd4(&lStack_c0);
    }
    else {
      lStack_c0 = 2;
      if (alStack_58[0] != 0) {
        plVar8 = (long *)(alStack_58[0] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_b8 = alStack_58[0];
      param_2 = &lStack_c0;
      (**(code **)(*param_1 + 0x20))(param_1);
      func_0x0001080cb554(&lStack_c0);
    }
    func_0x000104bda914(&lStack_60);
    plVar8 = &lStack_e0;
    func_0x00010b8c3d80();
    unaff_x19 = param_1;
  }
  func_0x00010b926b08(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pplVar6 = &plStack_190;
  pcStack_f8 = FUN_10b926968;
  uStack_118 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_188 = plVar8[0xd];
  plVar9 = (long *)plVar8[0xc];
  plVar8[0xc] = 0;
  plVar8[0xd] = 0;
  plStack_190 = plVar9;
  plStack_110 = unaff_x20;
  plStack_108 = unaff_x19;
  puStack_100 = &stack0xfffffffffffffff0;
  if (plVar9 != (long *)0x0) {
    auStack_178[0] = 0;
    uStack_120 = 0;
    func_0x000105c3b044();
    if ((int)plVar8 != 0) {
      param_2 = (long *)&UNK_10f7cdce1;
      FUN_10b8ca990(auStack_178);
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0001080e8dd4(auStack_178);
  }
  func_0x0001080eb314();
  func_0x00010b926b08(uStack_118);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *param_2;
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *pplVar6 = (long *)lVar7;
  lVar7 = param_2[1];
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pplVar6[1] = (long *)lVar7;
  return;
}



/* Entry: 10b926968; end: 10b9269fb;  */

void FUN_10b926968(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long **pplVar4;
  long lVar5;
  long *plVar6;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [88];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  pplVar4 = &plStack_a0;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = *(undefined8 *)(param_1 + 0x68);
  plVar6 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  plStack_a0 = plVar6;
  if (plVar6 != (long *)0x0) {
    auStack_88[0] = 0;
    uStack_30 = 0;
    func_0x000105c3b044();
    if ((int)param_1 != 0) {
      param_2 = (long *)&UNK_10f7cdce1;
      FUN_10b8ca990(auStack_88);
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
    func_0x0001080e8dd4(auStack_88);
  }
  func_0x0001080eb314();
  func_0x00010b926b08(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *param_2;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *pplVar4 = (long *)lVar5;
  lVar5 = param_2[1];
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
  pplVar4[1] = (long *)lVar5;
  return;
}



/* Entry: 10b9269fc; end: 10b926a3f;  */

void FUN_10b9269fc(long *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
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
  lVar5 = param_2[1];
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
  param_1[1] = lVar5;
  return;
}



/* Entry: 10b926a40; end: 10b926a8b;  */

long FUN_10b926a40(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b926a8c; end: 10b926ab7;  */

void FUN_10b926a8c(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010b926ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b926ab8; end: 10b926ae7;  */

undefined1 * FUN_10b926ab8(undefined1 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if ((param_1 != (undefined1 *)0x0) &&
     (puVar2 = param_1, FUN_10b9a5818(), ((ulong)puVar2 & 1) == 0)) {
    FUN_10b9a5890();
    if (puVar2 != (undefined1 *)0x0) {
      puVar1 = &uStack_40;
      pcStack_28 = FUN_10b926ae8;
      uStack_38 = *(undefined8 *)(puVar2 + 0x10);
      uStack_40 = *(undefined8 *)(puVar2 + 8);
      puStack_30 = &stack0xfffffffffffffff0;
      func_0x0001003a90c4(&uStack_40);
      return (undefined1 *)puVar1;
    }
    return (undefined1 *)0x0;
  }
  return param_1;
}



/* Entry: 10b926ae8; end: 10b926b5b;  */

void FUN_10b926ae8(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b926b5c; end: 10b926b9b;  */

undefined8 * FUN_10b926b5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d76ca8;
  func_0x000104bda914(param_1 + 5);
  func_0x000104bd548c(param_1 + 4);
  *param_1 = &PTR_FUN_110d7e800;
  FUN_10b9a0948();
  FUN_10b9a0a78(param_1 + 3);
  return param_1;
}



/* Entry: 10b926b9c; end: 10b926b9f;  */

undefined8 * FUN_10b926b9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d76ca8;
  func_0x000104bda914(param_1 + 5);
  func_0x000104bd548c(param_1 + 4);
  *param_1 = &PTR_FUN_110d7e800;
  FUN_10b9a0948();
  FUN_10b9a0a78(param_1 + 3);
  return param_1;
}



/* Entry: 10b926ba0; end: 10b926bb3;  */

void FUN_10b926ba0(void)

{
  FUN_10b926b5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b926bb4; end: 10b926c2f;  */

long * FUN_10b926bb4(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    func_0x000104bda914(param_1);
    lVar4 = *param_2;
    *param_1 = lVar4;
    if (lVar4 == 2) {
      lVar4 = param_2[1];
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
      param_1[1] = lVar4;
    }
    else if (lVar4 == 1) {
      FUN_10b9a8f04(param_1 + 1,param_2 + 1);
    }
  }
  return param_1;
}



/* Entry: 10b926c30; end: 10b926f33;  */

void FUN_10b926c30(undefined8 *param_1,long param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  if (*(char *)(param_3 + 8) == '\x0f') {
    FUN_10b9a94ec(&uStack_48,param_3);
    FUN_10b8a226c(param_1,&uStack_48);
    func_0x000104bddf04(uStack_48);
  }
  else {
    FUN_10b9a9358(&lStack_38,param_3);
    iVar4 = (int)&lStack_38;
    func_0x00010b927c90();
    if (iVar4 == 0) {
      plVar6 = &lStack_38;
      uVar7 = 0;
      func_0x00010b9a5ee8(plVar6);
      if ((uVar7 & 1) == 0) {
        *param_1 = 0;
      }
      else {
        FUN_10b9a6724(&uStack_48,&lStack_38,plVar6);
        FUN_10b9a68e4(&uStack_50,&uStack_48);
        func_0x00010b926d48(param_1,param_2,param_2 + 0x38,&uStack_50,&lStack_40);
        func_0x000107c278f8(uStack_50);
        func_0x00010812e450(&uStack_48);
      }
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      uStack_48 = 0;
      if (lStack_38 != 0) {
        piVar1 = (int *)(lStack_38 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_40 = lStack_38;
      FUN_10b927214(param_1,uVar5,&uStack_48);
      FUN_10b9244a4(&uStack_48);
    }
    func_0x000107c278f8(lStack_38);
  }
  return;
}



/* Entry: 10b926f34; end: 10b926f43;  */

void FUN_10b926f34(void)

{
  return;
}



/* Entry: 10b926f44; end: 10b927013;  */

undefined8 *
FUN_10b926f44(undefined8 *param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5,
             undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110d76cf0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110d76d28;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[5] = param_2[1];
  param_1[4] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b92bcf4();
    } while (extraout_w10 != 0);
  }
  lVar1 = *param_3;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010b92bc90();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[6] = lVar1;
  uVar2 = 0;
  if (*param_4 != 0) {
    do {
      func_0x00010b92bc78();
      uVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  param_1[7] = uVar2;
  lVar1 = *param_5;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010b92bc90();
      lVar1 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  param_1[8] = lVar1;
  param_1[9] = param_6;
  param_1[10] = param_7;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0xb);
  func_0x00010b92bff0();
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return param_1;
}



/* Entry: 10b927014; end: 10b9271eb;  */

undefined8 * FUN_10b927014(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_110d76cf0;
  param_1[3] = &PTR_DAT_110d76d28;
  func_0x00010b92a044(param_1[0x22]);
  plVar7 = (long *)(param_1[0x1d] + ((ulong)param_1[0x20] >> 9) * 8);
  if (param_1[0x1e] == param_1[0x1d]) {
    lVar3 = 0;
  }
  else {
    lVar3 = *plVar7 + (param_1[0x20] & 0x1ff) * 8;
  }
  func_0x00010b92a010(param_1 + 0x1c);
  do {
    lVar8 = lVar3 + -0x1000;
    do {
      if (lVar3 == param_2) {
        param_1[0x21] = 0;
        puVar4 = (undefined8 *)param_1[0x1d];
        while( true ) {
          puVar6 = (undefined8 *)param_1[0x1e];
          uVar1 = (long)puVar6 - (long)puVar4 >> 3;
          if (uVar1 < 3) break;
          __ZdlPv(*puVar4);
          puVar4 = (undefined8 *)(param_1[0x1d] + 8);
          param_1[0x1d] = puVar4;
        }
        if (uVar1 == 1) {
          uVar2 = 0x100;
        }
        else {
          if (uVar1 != 2) goto LAB_10b927110;
          uVar2 = 0x200;
        }
        param_1[0x20] = uVar2;
LAB_10b927110:
        for (; puVar4 != puVar6; puVar4 = puVar4 + 1) {
          __ZdlPv(*puVar4);
        }
        lVar3 = param_1[0x1e];
        while (lVar3 != param_1[0x1d]) {
          lVar3 = lVar3 + -8;
          param_1[0x1e] = lVar3;
        }
        if (param_1[0x1c] != 0) {
          __ZdlPv();
        }
        plVar7 = param_1 + 0x19;
        if (*plVar7 != 0) {
          FUN_10b9294f8(plVar7);
          __ZdlPv(*plVar7);
        }
        lVar3 = param_1[0x16];
        if (lVar3 != 0) {
          lVar5 = 0;
          for (lVar8 = 0; lVar8 != lVar3; lVar8 = lVar8 + 1) {
            if (-1 < *(char *)(param_1[0x13] + lVar8)) {
              func_0x00010b929604(param_1[0x14] + lVar5);
              lVar3 = param_1[0x16];
            }
            lVar5 = lVar5 + 0x18;
          }
          __ZdlPv();
          param_1[0x18] = 0;
          func_0x00010b92bff0();
        }
        __ZNSt3__115recursive_mutexD1Ev(param_1 + 0xb);
        func_0x000104bd5214(param_1 + 8);
        FUN_10b929fcc(param_1 + 7);
        FUN_10b929fa0(param_1 + 6);
        func_0x0001080d88ec(param_1 + 4);
        func_0x000107c278e8(param_1 + 1);
        return param_1;
      }
      func_0x00010b92a49c(lVar3);
      lVar3 = lVar3 + 8;
      lVar8 = lVar8 + 8;
    } while (*plVar7 != lVar8);
    plVar7 = plVar7 + 1;
    lVar3 = *plVar7;
  } while( true );
}



/* Entry: 10b9271ec; end: 10b9271f7;  */

undefined8 * FUN_10b9271ec(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_110d76cf0;
  param_1[3] = &PTR_DAT_110d76d28;
  func_0x00010b92a044(param_1[0x22]);
  plVar7 = (long *)(param_1[0x1d] + ((ulong)param_1[0x20] >> 9) * 8);
  if (param_1[0x1e] == param_1[0x1d]) {
    lVar3 = 0;
  }
  else {
    lVar3 = *plVar7 + (param_1[0x20] & 0x1ff) * 8;
  }
  func_0x00010b92a010(param_1 + 0x1c);
  do {
    lVar8 = lVar3 + -0x1000;
    do {
      if (lVar3 == param_2) {
        param_1[0x21] = 0;
        puVar4 = (undefined8 *)param_1[0x1d];
        while( true ) {
          puVar6 = (undefined8 *)param_1[0x1e];
          uVar1 = (long)puVar6 - (long)puVar4 >> 3;
          if (uVar1 < 3) break;
          __ZdlPv(*puVar4);
          puVar4 = (undefined8 *)(param_1[0x1d] + 8);
          param_1[0x1d] = puVar4;
        }
        if (uVar1 == 1) {
          uVar2 = 0x100;
        }
        else {
          if (uVar1 != 2) goto LAB_10b927110;
          uVar2 = 0x200;
        }
        param_1[0x20] = uVar2;
LAB_10b927110:
        for (; puVar4 != puVar6; puVar4 = puVar4 + 1) {
          __ZdlPv(*puVar4);
        }
        lVar3 = param_1[0x1e];
        while (lVar3 != param_1[0x1d]) {
          lVar3 = lVar3 + -8;
          param_1[0x1e] = lVar3;
        }
        if (param_1[0x1c] != 0) {
          __ZdlPv();
        }
        plVar7 = param_1 + 0x19;
        if (*plVar7 != 0) {
          FUN_10b9294f8(plVar7);
          __ZdlPv(*plVar7);
        }
        lVar3 = param_1[0x16];
        if (lVar3 != 0) {
          lVar5 = 0;
          for (lVar8 = 0; lVar8 != lVar3; lVar8 = lVar8 + 1) {
            if (-1 < *(char *)(param_1[0x13] + lVar8)) {
              func_0x00010b929604(param_1[0x14] + lVar5);
              lVar3 = param_1[0x16];
            }
            lVar5 = lVar5 + 0x18;
          }
          __ZdlPv();
          param_1[0x18] = 0;
          func_0x00010b92bff0();
        }
        __ZNSt3__115recursive_mutexD1Ev(param_1 + 0xb);
        func_0x000104bd5214(param_1 + 8);
        FUN_10b929fcc(param_1 + 7);
        FUN_10b929fa0(param_1 + 6);
        func_0x0001080d88ec(param_1 + 4);
        func_0x000107c278e8(param_1 + 1);
        return param_1;
      }
      func_0x00010b92a49c(lVar3);
      lVar3 = lVar3 + 8;
      lVar8 = lVar8 + 8;
    } while (*plVar7 != lVar8);
    plVar7 = plVar7 + 1;
    lVar3 = *plVar7;
  } while( true );
}



/* Entry: 10b9271f8; end: 10b92720b;  */

void FUN_10b9271f8(void)

{
  FUN_10b927014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b92720c; end: 10b927213;  */

void FUN_10b92720c(long param_1)

{
  FUN_10b927014(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b927214; end: 10b92749b;  */

void FUN_10b927214(long param_1)

{
  undefined8 extraout_x8;
  
  func_0x00010b92bce8();
  func_0x00010b92bc44(param_1 + 0x58);
  func_0x00010b92bd28(extraout_x8);
  func_0x00010b927250();
  func_0x00010b92bd04();
  return;
}



/* Entry: 10b92749c; end: 10b927543;  */

undefined8 * FUN_10b92749c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x00010b92bbe8();
  FUN_10b92a050(auStack_38);
  *param_1 = auStack_38[0];
  func_0x00010b92bbd4(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010b92c024();
  if (!(bool)in_ZR) {
    func_0x00010b92c004();
    func_0x00010b92a044();
  }
  return param_1;
}



/* Entry: 10b927544; end: 10b92759f;  */

void FUN_10b927544(void)

{
  long *unaff_x19;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x00010b92bea4();
  func_0x00010b92767c();
  if (*unaff_x19 == 0) {
    func_0x00010b929528(&uStack_38);
    func_0x00010b929578();
    func_0x00010b92a454(uStack_38);
    FUN_10b9295a0(unaff_x21 + 0x98);
    FUN_10b9295c4();
  }
  return;
}



/* Entry: 10b9275a0; end: 10b9276c7;  */

long * FUN_10b9275a0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  long alStack_38 [2];
  undefined8 uStack_28;
  
  func_0x00010b92bbe8();
  func_0x00010b927d30(alStack_38);
  plVar1 = alStack_38;
  func_0x00010b927cf0(&plStack_40,param_3);
  func_0x00010b92a5fc(alStack_38);
  if (*param_3 != 0) {
    FUN_10b927b4c(alStack_38,param_3);
    plVar1 = param_3;
    FUN_10b9244cc();
    FUN_10b927bf4(&plStack_40,plVar1,alStack_38);
    func_0x00010b8fc3ac(alStack_38);
  }
  FUN_10b92a810(param_1,plStack_40);
  FUN_10b92a548();
  func_0x00010b92bbd4(uStack_28);
  if ((bool)in_ZR) {
    return plStack_40;
  }
  plVar2 = plStack_40;
  ___stack_chk_fail();
  uStack_48 = 0x10b92763c;
  lVar4 = plVar1[1];
  lVar3 = *plVar1;
  *plVar1 = 0;
  plVar1[1] = 0;
  lStack_68 = plVar2[1];
  lStack_70 = *plVar2;
  plVar2[1] = lVar4;
  *plVar2 = lVar3;
  plStack_60 = param_3;
  uStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10b92a478(&lStack_70);
  return plVar2;
}



/* Entry: 10b9276c8; end: 10b927733;  */

void FUN_10b9276c8(void)

{
  undefined1 *unaff_x19;
  long alStack_48 [3];
  
  func_0x00010b92bea4();
  func_0x00010b92bda4();
  func_0x00010b92767c(alStack_48);
  if ((alStack_48[0] == 0) || (*(long *)(alStack_48[0] + 0x40) != 1)) {
    *unaff_x19 = 0;
    unaff_x19[0x20] = 0;
  }
  else {
    FUN_10b929628();
  }
  func_0x00010b92a454(alStack_48[0]);
  func_0x00010b92bf6c();
  return;
}



/* Entry: 10b927734; end: 10b9278ab;  */

void FUN_10b927734(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  long alStack_80 [5];
  undefined8 uStack_58;
  
  plVar5 = param_3;
  func_0x00010b92bce8();
  func_0x00010b92bbfc();
  uStack_88 = 1;
  lStack_90 = param_1 + 0x58;
  uStack_58 = extraout_x8;
  func_0x00010b92be08();
  func_0x00010b92bd28(&lStack_98);
  FUN_10b927544();
  if (*(int *)(lStack_98 + 0x38) == 4) {
    if ((*(long *)(lStack_98 + 0x50) == param_3[1]) &&
       (uVar4 = 1, lVar7 = lStack_98, *(char *)(lStack_98 + 0x60) == (char)param_3[3]))
    goto LAB_10b92787c;
    lVar7 = 0;
    uVar8 = 0;
    while( true ) {
      lVar6 = *(long *)(lStack_98 + 0x10);
      if ((ulong)(*(long *)(lStack_98 + 0x18) - lVar6 >> 3) <= uVar8) break;
      alStack_80[0] = 0;
      alStack_80[1] = 0;
      func_0x00010b9240ac(*(undefined8 *)(lVar6 + lVar7),alStack_80);
      func_0x0001080cb554(alStack_80);
      lVar6 = *(long *)(lVar6 + lVar7);
      *(undefined4 *)(lVar6 + 0x28) = 0;
      *(undefined1 *)(lVar6 + 0x30) = 0;
      alStack_80[0] = 0;
      plVar5 = alStack_80;
      FUN_10b9278ac();
      FUN_10b926ae8(alStack_80[0]);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    }
  }
  *(undefined8 *)(lStack_98 + 0x78) = 0;
  func_0x00010b933da0(lStack_98 + 0x68);
  lVar7 = lStack_98;
  func_0x00010b92a4bc(alStack_80,param_3);
  param_2 = alStack_80;
  func_0x00010b933a50(lVar7 + 0x40);
  FUN_10b92a4d8(alStack_80);
  *(undefined4 *)(lStack_98 + 0x38) = 4;
  uVar4 = *(long *)(lStack_98 + 0x18) == *(long *)(lStack_98 + 0x10);
  lVar7 = lStack_98;
  if (!(bool)uVar4) {
    func_0x00010b92bfb0();
    func_0x00010b92bc34();
    func_0x00010b92bdf8();
    lVar7 = lStack_98;
  }
LAB_10b92787c:
  func_0x00010b92a454(lVar7);
  func_0x00010b92be24();
  func_0x00010b92bbd4(uStack_58);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  plStack_e0 = param_3;
  lStack_d8 = param_1 + 0x58;
  FUN_10b928e70(&lStack_e8,*param_2 + 0x50);
  lVar6 = *param_2;
  lStack_f0 = *plVar5;
  if ((lStack_f0 != 0) && (*(long *)(lStack_f0 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lStack_f0 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010b924204(lVar6 + 0x50,&lStack_f0);
  func_0x0001080cb96c(lStack_f0);
  if (((lStack_e8 != 0) &&
      (lVar6 = *(long *)(lStack_e8 + 0x58) + -1, *(long *)(lStack_e8 + 0x58) = lVar6, lVar6 == 0))
     && ((*(byte *)(lStack_e8 + 0x90) & 1) == 0)) {
    *(undefined1 *)(lStack_e8 + 0x90) = 1;
    func_0x00010b928eb0(lVar7 + 0xe0,&lStack_e8);
    func_0x00010b92bf94();
  }
  lVar6 = *plVar5;
  if ((lVar6 != 0) &&
     (*(long *)(lVar6 + 0x58) = *(long *)(lVar6 + 0x58) + 1, (*(byte *)(lVar6 + 0x91) & 1) == 0)) {
    *(undefined1 *)(lVar6 + 0x91) = 1;
    func_0x00010b928fb0(lVar7 + 0xe0,plVar5);
    func_0x00010b92bf94();
  }
  FUN_10b926ae8(lStack_e8);
  return;
}



/* Entry: 10b9278ac; end: 10b927b4b;  */

void FUN_10b9278ac(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  FUN_10b928e70(&lStack_38,*param_2 + 0x50);
  lVar4 = *param_2;
  lStack_40 = *param_3;
  if ((lStack_40 != 0) && (*(long *)(lStack_40 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lStack_40 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010b924204(lVar4 + 0x50,&lStack_40);
  func_0x0001080cb96c(lStack_40);
  if (((lStack_38 != 0) &&
      (lVar4 = *(long *)(lStack_38 + 0x58) + -1, *(long *)(lStack_38 + 0x58) = lVar4, lVar4 == 0))
     && ((*(byte *)(lStack_38 + 0x90) & 1) == 0)) {
    *(undefined1 *)(lStack_38 + 0x90) = 1;
    func_0x00010b928eb0(param_1 + 0xe0,&lStack_38);
    func_0x00010b92bf94();
  }
  lVar4 = *param_3;
  if ((lVar4 != 0) &&
     (*(long *)(lVar4 + 0x58) = *(long *)(lVar4 + 0x58) + 1, (*(byte *)(lVar4 + 0x91) & 1) == 0)) {
    *(undefined1 *)(lVar4 + 0x91) = 1;
    func_0x00010b928fb0(param_1 + 0xe0,param_3);
    func_0x00010b92bf94();
  }
  FUN_10b926ae8(lStack_38);
  return;
}



/* Entry: 10b927b4c; end: 10b927bf3;  */

void FUN_10b927b4c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 extraout_x8;
  long unaff_x20;
  
  if ((bRam0000000113846818 & 1) == 0) {
    iVar1 = 0x13846818;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x113846810,&UNK_10f7cde72);
      ___cxa_guard_release(0x113846818);
    }
  }
  func_0x00010b92fb68(param_1,*param_2,0x113846810);
  func_0x00010b92fa40();
  func_0x00010b92d9c4(extraout_x8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x20 + 0x30);
  return;
}



/* Entry: 10b927bf4; end: 10b927c5b;  */

void FUN_10b927bf4(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  char cStack_38;
  
  if (*param_3 == 1) {
    FUN_10b923a2c(auStack_50,param_3[1]);
    if (cStack_38 == '\0') {
      uStack_48 = 0;
      uStack_44 = 0;
    }
    FUN_10b9296cc(auStack_50);
  }
  else {
    uStack_48 = 0;
    uStack_44 = 0;
  }
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x40) = uStack_48;
  *(undefined4 *)(lVar1 + 0x44) = uStack_44;
  return;
}



/* Entry: 10b927c5c; end: 10b927d77;  */

long * FUN_10b927c5c(long *param_1)

{
  param_1[1] = param_1[1] + 0x18;
  *param_1 = *param_1 + 1;
  FUN_10b92a500();
  return param_1;
}



/* Entry: 10b927d78; end: 10b927e6f;  */

void FUN_10b927d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  long lStack_80;
  long alStack_78 [3];
  
  func_0x00010b92bce8();
  func_0x00010b92be08();
  func_0x00010b92bd28(alStack_78);
  FUN_10b927544();
  func_0x00010b933ac0(&lStack_80,alStack_78[0]);
  func_0x00010b8c292c(lStack_80 + 0x10,param_4);
  func_0x00010b924114(lStack_80 + 0x18,param_3);
  *(undefined4 *)(lStack_80 + 0x2c) = param_5;
  *(undefined4 *)(lStack_80 + 0x34) = param_6;
  *(undefined4 *)(lStack_80 + 0x38) = param_7;
  FUN_10b9a9084(lStack_80 + 0x58,param_8);
  if (*(int *)(alStack_78[0] + 0x38) == 3) {
    *(undefined4 *)(alStack_78[0] + 0x38) = 0;
  }
  func_0x00010b92bfb0();
  func_0x00010b92bc54();
  func_0x00010b92bd04();
  FUN_10b929cd0(lStack_80);
  func_0x00010b92a454(alStack_78[0]);
  func_0x00010b92be24();
  return;
}



/* Entry: 10b927e70; end: 10b927fef;  */

void FUN_10b927e70(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  func_0x00010b92bce8();
  lStack_50 = param_1 + 0x58;
  uStack_48 = 1;
  func_0x00010b92be7c();
  func_0x00010b92bcbc(&lStack_58);
  if (lStack_58 != 0) {
    lVar2 = *(long *)(lStack_58 + 0x18) - (long)*(long **)(lStack_58 + 0x10) >> 3;
    plVar1 = *(long **)(lStack_58 + 0x10);
    do {
      if (lVar2 == 0) goto LAB_10b927ef4;
      lVar3 = *plVar1;
      lVar2 = lVar2 + -1;
      plVar1 = plVar1 + 1;
    } while (*(long *)(lVar3 + 0x18) != *param_3);
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010b924114(lVar3 + 0x18,&uStack_68);
    func_0x00010b8d1018(&uStack_68);
LAB_10b927ef4:
    lStack_50 = 0;
    uStack_48 = 0;
    func_0x00010b92bc34();
    func_0x00010b92bdf8();
  }
  func_0x00010b92be00();
  func_0x000107c2851c(&lStack_50);
  return;
}



/* Entry: 10b927ff0; end: 10b928173;  */

undefined8 FUN_10b927ff0(undefined8 param_1,long *param_2,long *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  ulong *apuStack_40 [2];
  
  func_0x00010b92bce8();
  if (((*param_2 == 0) || (*(char *)(unaff_x20 + 0x131) == '\x01')) &&
     (uVar2 = *(long *)(*param_3 + 0x18) == *(long *)(*param_3 + 0x10), (bool)uVar2)) {
    func_0x00010b92bf4c(apuStack_40);
    puVar4 = apuStack_40[0];
    FUN_10b92a478(apuStack_40);
    if (puVar4 == (ulong *)0x0) {
      FUN_10b92a8e8(unaff_x20 + 0x98);
      puVar4 = (ulong *)(unaff_x20 + 0x98);
      uVar9 = unaff_x19;
      func_0x00010b92a894();
      func_0x00010b92bfd0();
      if (!(bool)uVar2) {
        apuStack_40[0] = puVar4;
        FUN_10b927c5c(apuStack_40);
        func_0x00010b929604(uVar9);
        uVar5 = 0;
        *(long *)(unaff_x20 + 0xa8) = *(long *)(unaff_x20 + 0xa8) + -1;
        puVar6 = (undefined1 *)((long)puVar4 + (-8 - *(long *)(unaff_x20 + 0x98)));
        uVar7 = *(ulong *)(*(long *)(unaff_x20 + 0x98) +
                          ((ulong)puVar6 & *(ulong *)(unaff_x20 + 0xb0)));
        uVar2 = 0xfe;
        uVar7 = uVar7 & ~uVar7 << 6 & 0x8080808080808080;
        if ((uVar7 != 0) && (uVar8 = *puVar4 & ~*puVar4 << 6 & 0x8080808080808080, uVar8 != 0)) {
          uVar8 = uVar8 >> 7;
          uVar5 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          bVar1 = (int)((ulong)LZCOUNT(uVar7) >> 3) +
                  ((uint)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) < 8;
          uVar5 = (ulong)bVar1;
          uVar2 = 0x80;
          if (!bVar1) {
            uVar2 = 0xfe;
          }
        }
        *(undefined1 *)puVar4 = uVar2;
        *(undefined1 *)
         (*(long *)(unaff_x20 + 0x98) + (*(ulong *)(unaff_x20 + 0xb0) & 7) +
          (*(ulong *)(unaff_x20 + 0xb0) & (ulong)puVar6) + 1) = uVar2;
        *(ulong *)(unaff_x20 + 0xc0) = *(long *)(unaff_x20 + 0xc0) + uVar5;
      }
      if (*(long *)(unaff_x20 + 0x110) != 0) {
        uVar9 = unaff_x19;
        func_0x00010b9244dc();
        iVar3 = (int)uVar9;
        func_0x00010b923080();
        if (iVar3 != 0) {
          uVar9 = *(undefined8 *)(unaff_x20 + 0x110);
          func_0x00010b9244dc();
          FUN_10b922e60(uVar9,unaff_x19);
        }
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 10b928174; end: 10b9283f7;  */

code * FUN_10b928174(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  undefined1 in_ZR;
  undefined1 uVar11;
  undefined8 *puVar12;
  code *pcVar13;
  long *plVar14;
  code *pcVar15;
  undefined8 uVar16;
  long *plVar17;
  code *pcVar18;
  undefined8 extraout_x8;
  long lVar19;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long lVar20;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  code *unaff_x19;
  code **unaff_x20;
  long lVar21;
  ulong uVar22;
  code *pcStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [16];
  long lStack_1c0;
  long lStack_1b8;
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_f0 [24];
  undefined1 uStack_d8;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  long *plStack_c0;
  long lStack_a0;
  long lStack_98;
  code **ppcStack_90;
  long lStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_48;
  
  plVar14 = param_3;
  func_0x00010b92bce8();
  func_0x00010b92bbfc();
  lVar19 = *param_4;
  *(undefined4 *)(lVar19 + 0x38) = 1;
  lVar21 = *(long *)(param_1 + 0x128) + 1;
  *(long *)(param_1 + 0x128) = lVar21;
  *(long *)(lVar19 + 0x78) = lVar21;
  lVar19 = *plVar14;
  uStack_48 = extraout_x8;
  if (lVar19 == 0) {
    plVar14 = param_3;
    plVar17 = param_4;
    func_0x00010b9244dc(param_3);
    FUN_10b9a8bb4(auStack_f0,plVar14);
    uStack_d8 = 0;
    func_0x00010b92b0e4(&lStack_a0,auStack_f0);
    func_0x00010b928b80(*param_4,&lStack_a0);
    FUN_10b92a4d8(&lStack_a0);
    FUN_10b9a8cb4(auStack_f0);
    pcVar13 = unaff_x19 + 0x10;
    FUN_10b92c098(pcVar13,param_3);
  }
  else {
    func_0x00010b92ccf0();
    FUN_10b92c074();
    plVar17 = param_4;
    if ((int)lVar19 == 0) {
      unaff_x19 = unaff_x20[8];
      lVar19 = *param_3;
      if (lVar19 != 0) {
        do {
          func_0x00010b92be84();
        } while (extraout_w10_00 != 0);
      }
      lVar20 = param_3[1];
      if (lVar20 != 0) {
        piVar2 = (int *)(lVar20 + 8);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = *piVar2 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      lStack_a0 = lVar19;
      lStack_98 = lVar20;
      FUN_10b92a9f8();
      pcStack_d0 = FUN_10b929a78;
      ppuStack_c8 = &PTR_FUN_110d76da8;
      plVar14 = (long *)0x20;
      ppcStack_90 = unaff_x20;
      lStack_88 = lVar21;
      __Znwm();
      if (lVar19 != 0) {
        do {
          func_0x00010b92be84();
          lVar20 = lStack_98;
        } while (extraout_w10_01 != 0);
      }
      unaff_x20 = &pcStack_d0;
      *plVar14 = lVar19;
      if (lVar20 != 0) {
        piVar2 = (int *)(lVar20 + 8);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = *piVar2 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      plVar14[1] = lVar20;
      plVar14[2] = (long)ppcStack_90;
      ppcStack_90 = (code **)0x0;
      plVar14[3] = lStack_88;
      plStack_c0 = plVar14;
      (**(code **)(*(long *)unaff_x19 + 0x28))(unaff_x19,&pcStack_d0);
      func_0x00010b92bca0(ppuStack_c8);
      pcVar13 = (code *)&lStack_a0;
      func_0x00010b928b5c();
    }
    else {
      unaff_x19 = unaff_x20[6];
      lVar19 = *param_3;
      if (lVar19 != 0) {
        do {
          func_0x00010b92be84();
        } while (extraout_w10 != 0);
      }
      lStack_98 = 0;
      lStack_a0 = lVar19;
      if (param_3[1] != 0) {
        do {
          func_0x00010b92bd34();
          lStack_98 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      func_0x00010b927d30(&ppcStack_90);
      pcStack_78 = FUN_10b92aa28;
      ppuStack_70 = &PTR_FUN_110d76f38;
      puVar12 = (undefined8 *)0x28;
      lStack_80 = lVar21;
      __Znwm();
      uVar16 = 0;
      if (lStack_a0 != 0) {
        do {
          func_0x00010b92bc78();
          uVar16 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      unaff_x20 = &pcStack_78;
      *puVar12 = uVar16;
      uVar16 = 0;
      if (lStack_98 != 0) {
        do {
          func_0x00010b92bd34();
          uVar16 = extraout_x8_02;
        } while (extraout_w11_01 != 0);
      }
      puVar12[1] = uVar16;
      puVar12[3] = lStack_88;
      puVar12[2] = ppcStack_90;
      ppcStack_90 = (code **)0x0;
      lStack_88 = 0;
      puVar12[4] = lStack_80;
      puStack_68 = puVar12;
      FUN_10b939080(unaff_x19,lVar19 + 0x10,&pcStack_78);
      func_0x00010b92bca0(ppuStack_70);
      pcVar13 = (code *)&lStack_a0;
      func_0x00010b928b38();
    }
  }
  func_0x00010b92bbd4(uStack_48);
  if ((bool)in_ZR) {
    return pcVar13;
  }
  ___stack_chk_fail();
  func_0x00010b92bfe4();
  lVar21 = 0;
  uVar22 = 0;
  func_0x00010b92bbfc();
  pcStack_1f8 = (code *)0x0;
  uStack_160 = extraout_x8_03;
  while( true ) {
    lVar19 = *(long *)(*plVar17 + 0x10);
    uVar1 = *(long *)(*plVar17 + 0x18) - lVar19 >> 3;
    uVar11 = uVar22 == uVar1;
    if (uVar1 <= uVar22) break;
    lVar20 = *(long *)(lVar19 + lVar21);
    if (*(long *)(lVar20 + 0x18) == 0) {
      if (pcStack_1f8 == (code *)0x0) {
        func_0x00010b92bd5c();
        lVar20 = *(long *)(lVar19 + lVar21);
        goto LAB_10b928458;
      }
    }
    else {
LAB_10b928458:
      if ((*(byte *)(lVar20 + 0x30) & 1) == 0) {
        uVar8 = *(uint *)(lVar20 + 0x28);
        uVar11 = 3 < uVar8 || uVar8 == 1;
        if (3 >= uVar8 && uVar8 != 1) {
          if (pcStack_1f8 != (code *)0x0) {
            if ((*(long *)(pcStack_1f8 + 0x18) == 0) &&
               (func_0x00010b92bd5c(), pcStack_1f8 == (code *)0x0)) goto LAB_10b9284a8;
            pcVar18 = pcStack_1f8;
            func_0x00010b92bcc8();
            goto LAB_10b9284c8;
          }
          func_0x00010b92bd5c();
        }
      }
    }
    uVar22 = uVar22 + 1;
    lVar21 = lVar21 + 8;
  }
  pcVar18 = pcStack_1f8;
  if (pcStack_1f8 == (code *)0x0) {
LAB_10b9284a8:
    pcVar15 = (code *)0x0;
    goto LAB_10b9285b4;
  }
LAB_10b9284c8:
  if (*(long *)(pcVar18 + 0x18) == 0) {
LAB_10b928540:
    func_0x00010b928c14(pcVar13,*plVar17,&pcStack_1f8);
    pcVar15 = pcStack_1f8;
    goto LAB_10b9285b4;
  }
  uVar11 = *(int *)(pcVar18 + 0x28) == 3;
  pcVar15 = pcStack_1f8;
  switch(*(int *)(pcVar18 + 0x28)) {
  case 0:
    lVar21 = *plVar17;
    uVar11 = (*(uint *)(lVar21 + 0x38) & 0xfffffffe) == 2;
    if ((bool)uVar11) {
      *(undefined4 *)(pcVar18 + 0x28) = 2;
      puStack_180 = (undefined8 *)0x2;
      puStack_178 = (undefined8 *)0x0;
      if (*(long *)(lVar21 + 0x48) != 0) {
        do {
          func_0x00010b92bc78();
          puStack_178 = extraout_x8_04;
        } while (extraout_w11_02 != 0);
      }
      func_0x00010b92bf74();
      func_0x0001080cb554(&puStack_180);
      func_0x00010b92bcc8();
      pcVar15 = pcStack_1f8;
    }
    else {
      uVar16 = *(undefined8 *)(pcVar13 + 0x38);
      FUN_10b924b94(&plStack_1a8,uVar16,(undefined8 *)(lVar21 + 0x48),
                    *(undefined4 *)(pcVar18 + 0x2c));
      if (plStack_1a8 == (long *)0x0) {
        *(undefined4 *)(pcVar18 + 0x28) = 2;
        func_0x000107c31084();
        puStack_170 = (&PTR_s_bytes_110d76dc8)[*(int *)(pcVar18 + 0x2c)];
        puStack_178 = (undefined8 *)&UNK_1003ab990;
        uStack_168 = 0;
        puStack_180 = (undefined8 *)(lVar21 + 0x48);
        func_0x000107c2793c(&UNK_10f7cdddd);
        func_0x000107c3173c(&lStack_1c0);
        func_0x000107c31080(&lStack_1a0,uVar16,&lStack_1c0);
        FUN_10b99f560(&puStack_190,&lStack_1a0);
        puStack_180 = (undefined8 *)0x2;
        puStack_178 = puStack_190;
        puStack_190 = (undefined8 *)0x0;
        func_0x00010b92bf74();
        func_0x0001080cb554(&puStack_180);
        func_0x000104bda960(puStack_190);
        func_0x000107c278f8(lStack_1a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_1c0);
        func_0x00010b92bcc8();
      }
      else {
        *(undefined4 *)(pcVar18 + 0x28) = 1;
        iVar4 = *(int *)(pcVar18 + 0x34);
        iVar5 = *(int *)(pcVar18 + 0x38);
        FUN_10b9a8f04(auStack_1d0,pcVar18 + 0x58);
        plVar14 = plStack_1a8;
        (**(code **)(*plStack_1a8 + 0x28))();
        lVar19 = *plVar17;
        if ((int)plVar14 != 0) {
          lVar20 = 0;
          lVar6 = *(long *)(lVar19 + 0x10);
          lVar7 = *(long *)(lVar19 + 0x18);
code_r0x00010b928634:
          if (lVar20 != lVar7 - lVar6 >> 3) {
            lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + lVar20 * 8);
            if (lVar19 != 0) {
              do {
                func_0x00010b92be84();
              } while (extraout_w10_02 != 0);
            }
            FUN_10b928e70(&puStack_180,lVar19 + 0x50);
            if (((puStack_180 == (undefined8 *)0x0) || (*(int *)(puStack_180 + 10) != iVar4)) ||
               (*(int *)((long)puStack_180 + 0x54) != iVar5)) goto code_r0x00010b9286a8;
            puVar12 = puStack_180 + 0x10;
            FUN_10b9a9100(puVar12,auStack_1d0);
            pcVar18 = pcStack_1f8;
            if (((int)puVar12 == 0) || (*(int *)(lVar19 + 0x2c) != *(int *)(pcStack_1f8 + 0x2c)))
            goto code_r0x00010b9286a8;
            func_0x00010b92bde8();
            if (puStack_180[0xe] != 0) {
              func_0x00010b929024(pcVar18,puStack_180[0xe],puStack_180[0xf]);
              func_0x00010b92bcc8();
            }
            FUN_10b926ae8(puStack_180);
            plVar14 = (long *)(lVar19 + 8);
            do {
              uVar11 = *plVar14 + -1 == 0;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar10) {
                *plVar14 = *plVar14 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if ((bool)uVar11) {
              func_0x00010b92be2c();
            }
            goto code_r0x00010b928820;
          }
        }
        func_0x00010b933c18(&uStack_1d8,lVar19,&plStack_1a8);
        func_0x00010b927d30(&puStack_1f0,pcVar13);
        pcVar13 = pcStack_1f8;
        puVar12 = (undefined8 *)0xb0;
        __Znwm();
        plVar14 = puVar12 + 1;
        *plVar14 = 0;
        puVar12[2] = 0;
        *puVar12 = &PTR_FUN_110d76f68;
        func_0x00010b92abcc(&lStack_1c0,&puStack_1f0);
        if (lStack_1b8 != 0) {
          plVar17 = (long *)(lStack_1b8 + 0x10);
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar10) {
              *plVar17 = *plVar17 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        puVar3 = puVar12 + 3;
        uVar11 = lStack_1c0 == 0;
        uStack_188 = 0;
        puStack_190 = (undefined8 *)0x0;
        puStack_178 = (undefined8 *)0x0;
        puStack_180 = (undefined8 *)0x0;
        lStack_1a0 = 0;
        if (!(bool)uVar11) {
          lStack_1a0 = lStack_1c0 + 0x18;
        }
        lStack_198 = lStack_1b8;
        FUN_10b926a40(&puStack_180);
        FUN_10b926a40(&puStack_190);
        puStack_178 = puStack_1e8;
        puStack_180 = puStack_1f0;
        puStack_1e8 = (undefined8 *)0x0;
        puStack_1f0 = (undefined8 *)0x0;
        func_0x00010b92a5fc(&puStack_180);
        func_0x00010b92a5d8(&lStack_1c0);
        FUN_10b92656c(puVar3,&lStack_1a0,pcVar13 + 0x10,unaff_x19,&uStack_1d8,lVar21 + 0x50,iVar4,
                      iVar5,auStack_1d0);
        FUN_10b926a40(&lStack_1a0);
        if ((puVar12[5] == 0) || (uVar11 = *(long *)(puVar12[5] + 8) == -1, (bool)uVar11)) {
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar10) {
              *plVar14 = *plVar14 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          puStack_180 = puVar3;
          puStack_178 = puVar12;
          func_0x000107c278e4(puVar12 + 4,&puStack_180);
          func_0x000107c284e8(&puStack_180);
        }
        puStack_180 = puVar3;
        func_0x00010b92a5fc(&puStack_1f0);
        func_0x00010b92bde8();
        FUN_10b926ae8(puStack_180);
        FUN_10b926a8c(uStack_1d8);
code_r0x00010b928820:
        FUN_10b9a8d98(auStack_1d0);
      }
      func_0x000104bd54b0(plStack_1a8);
      pcVar15 = pcStack_1f8;
    }
    goto LAB_10b9285b4;
  case 1:
    goto LAB_10b928540;
  case 2:
    lStack_1c0 = 0;
    puStack_180 = (undefined8 *)0x0;
    if (*(long *)(pcVar18 + 0x48) != 0) {
      do {
        func_0x00010b92bc78();
        puStack_180 = extraout_x8_05;
      } while (extraout_w11_03 != 0);
    }
    puStack_178 = (undefined8 *)CONCAT71(puStack_178._1_7_,1);
    lVar21 = *plVar17;
    pcVar18 = (code *)&lStack_1c0;
    break;
  case 3:
    puStack_180 = (undefined8 *)((ulong)puStack_180 & 0xffffffffffffff00);
    puStack_178 = (undefined8 *)((ulong)puStack_178 & 0xffffffffffffff00);
    lVar21 = *plVar17;
    pcVar18 = pcVar18 + 0x48;
    break;
  default:
    goto LAB_10b9285b4;
  }
  FUN_10b928c88(unaff_x20,lVar21,&pcStack_1f8,pcVar18,&puStack_180);
  func_0x0001090e1d60(&puStack_180);
  pcVar15 = pcStack_1f8;
LAB_10b9285b4:
  FUN_10b929cd0();
  func_0x00010b92bbd4(uStack_160);
  if (!(bool)uVar11) {
    ___stack_chk_fail();
    uVar22 = *(ulong *)(pcVar15 + 8);
    if (uVar22 < *(ulong *)(pcVar15 + 0x10)) {
      FUN_10b9296ec();
      pcVar13 = (code *)(uVar22 + 0x10);
    }
    else {
      pcVar13 = pcVar15;
      func_0x00010b929710();
    }
    *(code **)(pcVar15 + 8) = pcVar13;
    return pcVar13 + -0x10;
  }
  return pcVar15;
code_r0x00010b9286a8:
  FUN_10b926ae8(puStack_180);
  plVar14 = (long *)(lVar19 + 8);
  do {
    lVar19 = *plVar14;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar10) {
      *plVar14 = lVar19 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (lVar19 + -1 == 0) {
    func_0x00010b92be2c();
  }
  lVar20 = lVar20 + 1;
  lVar19 = *plVar17;
  goto code_r0x00010b928634;
}



/* Entry: 10b9283f8; end: 10b92891f;  */

long FUN_10b9283f8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 extraout_x8;
  long lVar15;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  long lStack_d0;
  long lStack_c8;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010b92bfe4();
  lVar16 = 0;
  uVar17 = 0;
  func_0x00010b92bbfc();
  lStack_108 = 0;
  uStack_70 = extraout_x8;
  while( true ) {
    lVar18 = *(long *)(*param_4 + 0x10);
    uVar1 = *(long *)(*param_4 + 0x18) - lVar18 >> 3;
    uVar11 = uVar17 == uVar1;
    if (uVar1 <= uVar17) break;
    lVar15 = *(long *)(lVar18 + lVar16);
    if (*(long *)(lVar15 + 0x18) == 0) {
      if (lStack_108 == 0) {
        func_0x00010b92bd5c();
        lVar15 = *(long *)(lVar18 + lVar16);
        goto LAB_10b928458;
      }
    }
    else {
LAB_10b928458:
      if ((*(byte *)(lVar15 + 0x30) & 1) == 0) {
        uVar7 = *(uint *)(lVar15 + 0x28);
        uVar11 = 3 < uVar7 || uVar7 == 1;
        if (3 >= uVar7 && uVar7 != 1) {
          if (lStack_108 != 0) {
            if ((*(long *)(lStack_108 + 0x18) == 0) && (func_0x00010b92bd5c(), lStack_108 == 0))
            goto LAB_10b9284a8;
            lVar16 = lStack_108;
            func_0x00010b92bcc8();
            goto LAB_10b9284c8;
          }
          func_0x00010b92bd5c();
        }
      }
    }
    uVar17 = uVar17 + 1;
    lVar16 = lVar16 + 8;
  }
  lVar16 = lStack_108;
  if (lStack_108 == 0) {
LAB_10b9284a8:
    lVar18 = 0;
    goto LAB_10b9285b4;
  }
LAB_10b9284c8:
  if (*(long *)(lVar16 + 0x18) == 0) {
LAB_10b928540:
    func_0x00010b928c14(param_1,*param_4,&lStack_108);
    lVar18 = lStack_108;
    goto LAB_10b9285b4;
  }
  uVar11 = *(int *)(lVar16 + 0x28) == 3;
  lVar18 = lStack_108;
  switch(*(int *)(lVar16 + 0x28)) {
  case 0:
    lVar18 = *param_4;
    uVar11 = (*(uint *)(lVar18 + 0x38) & 0xfffffffe) == 2;
    if ((bool)uVar11) {
      *(undefined4 *)(lVar16 + 0x28) = 2;
      puStack_90 = (undefined8 *)0x2;
      puStack_88 = (undefined8 *)0x0;
      if (*(long *)(lVar18 + 0x48) != 0) {
        do {
          func_0x00010b92bc78();
          puStack_88 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      func_0x00010b92bf74();
      func_0x0001080cb554(&puStack_90);
      func_0x00010b92bcc8();
      lVar18 = lStack_108;
    }
    else {
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      FUN_10b924b94(&plStack_b8,uVar12,(undefined8 *)(lVar18 + 0x48),*(undefined4 *)(lVar16 + 0x2c))
      ;
      if (plStack_b8 == (long *)0x0) {
        *(undefined4 *)(lVar16 + 0x28) = 2;
        func_0x000107c31084();
        puStack_80 = (&PTR_s_bytes_110d76dc8)[*(int *)(lVar16 + 0x2c)];
        puStack_88 = (undefined8 *)&UNK_1003ab990;
        uStack_78 = 0;
        puStack_90 = (undefined8 *)(lVar18 + 0x48);
        func_0x000107c2793c(&UNK_10f7cdddd);
        func_0x000107c3173c(&lStack_d0);
        func_0x000107c31080(&lStack_b0,uVar12,&lStack_d0);
        FUN_10b99f560(&puStack_a0,&lStack_b0);
        puStack_90 = (undefined8 *)0x2;
        puStack_88 = puStack_a0;
        puStack_a0 = (undefined8 *)0x0;
        func_0x00010b92bf74();
        func_0x0001080cb554(&puStack_90);
        func_0x000104bda960(puStack_a0);
        func_0x000107c278f8(lStack_b0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_d0);
        func_0x00010b92bcc8();
      }
      else {
        *(undefined4 *)(lVar16 + 0x28) = 1;
        iVar4 = *(int *)(lVar16 + 0x34);
        iVar5 = *(int *)(lVar16 + 0x38);
        FUN_10b9a8f04(auStack_e0,lVar16 + 0x58);
        plVar13 = plStack_b8;
        (**(code **)(*plStack_b8 + 0x28))();
        lVar16 = *param_4;
        if ((int)plVar13 != 0) {
          lVar18 = 0;
          lVar15 = *(long *)(lVar16 + 0x10);
          lVar6 = *(long *)(lVar16 + 0x18);
code_r0x00010b928634:
          if (lVar18 != lVar6 - lVar15 >> 3) {
            lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + lVar18 * 8);
            if (lVar16 != 0) {
              do {
                func_0x00010b92be84();
              } while (extraout_w10 != 0);
            }
            FUN_10b928e70(&puStack_90,lVar16 + 0x50);
            if (((puStack_90 == (undefined8 *)0x0) || (*(int *)(puStack_90 + 10) != iVar4)) ||
               (*(int *)((long)puStack_90 + 0x54) != iVar5)) goto code_r0x00010b9286a8;
            puVar14 = puStack_90 + 0x10;
            FUN_10b9a9100(puVar14,auStack_e0);
            lVar10 = lStack_108;
            if (((int)puVar14 == 0) || (*(int *)(lVar16 + 0x2c) != *(int *)(lStack_108 + 0x2c)))
            goto code_r0x00010b9286a8;
            func_0x00010b92bde8();
            if (puStack_90[0xe] != 0) {
              func_0x00010b929024(lVar10,puStack_90[0xe],puStack_90[0xf]);
              func_0x00010b92bcc8();
            }
            FUN_10b926ae8(puStack_90);
            plVar13 = (long *)(lVar16 + 8);
            do {
              uVar11 = *plVar13 + -1 == 0;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar9) {
                *plVar13 = *plVar13 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if ((bool)uVar11) {
              func_0x00010b92be2c();
            }
            goto code_r0x00010b928820;
          }
        }
        func_0x00010b933c18(&uStack_e8,lVar16,&plStack_b8);
        func_0x00010b927d30(&puStack_100,param_1);
        lVar16 = lStack_108;
        puVar14 = (undefined8 *)0xb0;
        __Znwm();
        plVar13 = puVar14 + 1;
        *plVar13 = 0;
        puVar14[2] = 0;
        *puVar14 = &PTR_FUN_110d76f68;
        func_0x00010b92abcc(&lStack_d0,&puStack_100);
        if (lStack_c8 != 0) {
          plVar2 = (long *)(lStack_c8 + 0x10);
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *plVar2 = *plVar2 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        puVar3 = puVar14 + 3;
        uVar11 = lStack_d0 == 0;
        uStack_98 = 0;
        puStack_a0 = (undefined8 *)0x0;
        puStack_88 = (undefined8 *)0x0;
        puStack_90 = (undefined8 *)0x0;
        lStack_b0 = 0;
        if (!(bool)uVar11) {
          lStack_b0 = lStack_d0 + 0x18;
        }
        lStack_a8 = lStack_c8;
        FUN_10b926a40(&puStack_90);
        FUN_10b926a40(&puStack_a0);
        puStack_88 = puStack_f8;
        puStack_90 = puStack_100;
        puStack_f8 = (undefined8 *)0x0;
        puStack_100 = (undefined8 *)0x0;
        func_0x00010b92a5fc(&puStack_90);
        func_0x00010b92a5d8(&lStack_d0);
        FUN_10b92656c(puVar3,&lStack_b0,lVar16 + 0x10);
        FUN_10b926a40(&lStack_b0);
        if ((puVar14[5] == 0) || (uVar11 = *(long *)(puVar14[5] + 8) == -1, (bool)uVar11)) {
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar9) {
              *plVar13 = *plVar13 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          puStack_90 = puVar3;
          puStack_88 = puVar14;
          func_0x000107c278e4(puVar14 + 4,&puStack_90);
          func_0x000107c284e8(&puStack_90);
        }
        puStack_90 = puVar3;
        func_0x00010b92a5fc(&puStack_100);
        func_0x00010b92bde8();
        FUN_10b926ae8(puStack_90);
        FUN_10b926a8c(uStack_e8);
code_r0x00010b928820:
        FUN_10b9a8d98(auStack_e0);
      }
      func_0x000104bd54b0(plStack_b8);
      lVar18 = lStack_108;
    }
    goto LAB_10b9285b4;
  case 1:
    goto LAB_10b928540;
  case 2:
    lStack_d0 = 0;
    puStack_90 = (undefined8 *)0x0;
    if (*(long *)(lVar16 + 0x48) != 0) {
      do {
        func_0x00010b92bc78();
        puStack_90 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    puStack_88 = (undefined8 *)CONCAT71(puStack_88._1_7_,1);
    break;
  case 3:
    puStack_90 = (undefined8 *)((ulong)puStack_90 & 0xffffffffffffff00);
    puStack_88 = (undefined8 *)((ulong)puStack_88 & 0xffffffffffffff00);
    break;
  default:
    goto LAB_10b9285b4;
  }
  FUN_10b928c88();
  func_0x0001090e1d60(&puStack_90);
  lVar18 = lStack_108;
LAB_10b9285b4:
  FUN_10b929cd0();
  func_0x00010b92bbd4(uStack_70);
  if (!(bool)uVar11) {
    ___stack_chk_fail();
    uVar17 = *(ulong *)(lVar18 + 8);
    if (uVar17 < *(ulong *)(lVar18 + 0x10)) {
      FUN_10b9296ec();
      lVar16 = uVar17 + 0x10;
    }
    else {
      lVar16 = lVar18;
      func_0x00010b929710();
    }
    *(long *)(lVar18 + 8) = lVar16;
    return lVar16 + -0x10;
  }
  return lVar18;
code_r0x00010b9286a8:
  FUN_10b926ae8(puStack_90);
  plVar13 = (long *)(lVar16 + 8);
  do {
    lVar16 = *plVar13;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar9) {
      *plVar13 = lVar16 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (lVar16 + -1 == 0) {
    func_0x00010b92be2c();
  }
  lVar18 = lVar18 + 1;
  lVar16 = *param_4;
  goto code_r0x00010b928634;
}



/* Entry: 10b928920; end: 10b92895b;  */

long FUN_10b928920(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10b9296ec();
    lVar2 = uVar1 + 0x10;
  }
  else {
    lVar2 = param_1;
    func_0x00010b929710();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x10;
}



/* Entry: 10b92895c; end: 10b928abb;  */

undefined8 * FUN_10b92895c(long *param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined8 *puVar5;
  undefined8 *unaff_x20;
  long lVar6;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined1 auStack_178 [16];
  byte bStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [128];
  undefined1 auStack_b8 [88];
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010b92be10();
  func_0x00010b92bbfc();
  auStack_b8[0] = 0;
  uStack_60 = 0;
  uStack_58 = extraout_x8;
  func_0x000105c3b044();
  if ((int)param_1 != 0) {
    param_1 = (long *)auStack_b8;
    func_0x0001081287e0(param_1,&UNK_10f7cde57);
  }
  uStack_160 = *unaff_x20;
  uStack_158 = *(undefined1 *)(unaff_x20 + 1);
  *unaff_x20 = 0;
  *(undefined1 *)(unaff_x20 + 1) = 0;
  puStack_150 = auStack_138;
  uStack_140 = 8;
  uStack_148 = 0;
  func_0x00010b92bdd8();
  *param_1 = (long)&uStack_160;
  lVar1 = *(long *)(unaff_x19 + 0xd0);
  for (lVar6 = *(long *)(unaff_x19 + 200); lVar6 != lVar1; lVar6 = lVar6 + 0x10) {
    FUN_10b92c098(&puStack_150,lVar6);
  }
  FUN_10b9294f8((long *)(unaff_x19 + 200));
  do {
    func_0x00010b92c10c(auStack_178,&uStack_160);
    uVar3 = bStack_168 == 1;
    if (!(bool)uVar3) {
      FUN_10b929f80(auStack_178);
      *param_1 = 0;
      uVar2 = uVar3;
      if (*(long *)(unaff_x19 + 0x118) != 0) {
        func_0x00010b92c074(&uStack_160);
        (**(code **)(**(long **)(unaff_x19 + 0x118) + 0x18))();
        uVar2 = uVar3;
      }
      FUN_10b92c04c(&uStack_160);
      puVar4 = (undefined8 *)auStack_b8;
      func_0x0001080e8dd4();
      func_0x00010b92bbd4(uStack_58);
      uVar3 = 0;
      if ((bool)uVar2) {
        return puVar4;
      }
LAB_10b928ab8:
      ___stack_chk_fail();
      plStack_1a0 = param_1;
      func_0x00010b92bbfc();
      puVar5 = (undefined8 *)puVar4[9];
      puStack_1e0 = (undefined8 *)0x0;
      uStack_1a8 = extraout_x8_00;
      FUN_10b92a9f8();
      uStack_1d8 = 0x10b9299dc;
      ppuStack_1d0 = &PTR_FUN_110d76d88;
      puStack_1c8 = puVar4;
      func_0x00010b94b6f8(puVar5,&puStack_1e0,&uStack_1d8);
      func_0x00010b92bca0(ppuStack_1d0);
      puVar4 = puStack_1e0;
      func_0x000105276914(puStack_1e0);
      func_0x00010b92bbd4(uStack_1a8);
      if ((bool)uVar3) {
        return puVar4;
      }
      ___stack_chk_fail();
      func_0x00010b92a5fc(puVar4 + 2);
      func_0x000107c278f4(puVar4 + 1);
      func_0x0001080d5efc(puVar4);
      func_0x0001080d5af4();
      return puVar5;
    }
    puVar4 = &uStack_160;
    func_0x00010b92c088();
    if ((bStack_168 & 1) == 0) {
      func_0x0001080da3e4();
      goto LAB_10b928ab8;
    }
    func_0x00010b927f34();
    FUN_10b929f80(auStack_178);
  } while( true );
}



/* Entry: 10b928abc; end: 10b928c87;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10b928abc(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long lVar2;
  long alStack_60 [2];
  undefined **ppuStack_50;
  long lStack_48;
  undefined8 uStack_28;
  
  func_0x00010b92bbfc();
  lVar2 = *(long *)(param_1 + 0x48);
  alStack_60[0] = 0;
  uStack_28 = extraout_x8;
  FUN_10b92a9f8();
  alStack_60[1] = 0x10b9299dc;
  ppuStack_50 = &PTR_FUN_110d76d88;
  lStack_48 = param_1;
  func_0x00010b94b6f8(lVar2,alStack_60,alStack_60 + 1);
  func_0x00010b92bca0(ppuStack_50);
  lVar1 = alStack_60[0];
  func_0x000105276914(alStack_60[0]);
  func_0x00010b92bbd4(uStack_28);
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x00010b92a5fc(lVar1 + 0x10);
  func_0x000107c278f4(lVar1 + 8);
  func_0x0001080d5efc(lVar1);
  func_0x0001080d5af4();
  return lVar2;
}



/* Entry: 10b928c88; end: 10b928e6f;  */

void FUN_10b928c88(undefined8 param_1,long param_2,long *param_3,long *param_4,long param_5)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long lVar3;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  long alStack_88 [2];
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long alStack_50 [3];
  undefined8 uStack_38;
  
  func_0x00010b92bbfc();
  uStack_38 = extraout_x8;
  func_0x00010b9339b8(&lStack_68,param_2 + 0x28);
  *(undefined1 *)(*param_3 + 0x30) = 1;
  FUN_10b92c074(param_1);
  auStack_78[0] = 0;
  uStack_70 = 0;
  if (*(char *)(param_5 + 8) == '\x01') {
    FUN_10b900024(param_5);
    FUN_10b99f850(alStack_88);
    lStack_58 = 0;
    if (alStack_88[0] != 0) {
      do {
        func_0x00010b92bd34();
        lStack_58 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    alStack_50[0] = CONCAT71(alStack_50[0]._1_7_,1);
    func_0x000108107c48(auStack_78,&lStack_58);
    func_0x000108107a5c(&lStack_58);
    func_0x000107c278f8(alStack_88[0]);
  }
  lVar3 = *param_4;
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
    do {
      func_0x00010b92bcf4();
    } while (extraout_w10 != 0);
  }
  lStack_58 = lVar3;
  func_0x00010b9a8f78(alStack_88,&lStack_58);
  func_0x000104bddf04(lVar3);
  lVar3 = *param_3;
  if (((long *)*param_4 != (long *)0x0) && (*(int *)(lVar3 + 0x2c) == 0)) {
    (**(code **)(*(long *)*param_4 + 0x30))(&lStack_58);
    if (lStack_58 == 1) {
      uStack_a4 = 3;
      func_0x0001080fdd10(&uStack_a0,&uStack_a4,alStack_50);
      func_0x00010b9a8f90(auStack_98,&uStack_a0);
      FUN_10b9a9020(alStack_88,auStack_98);
      FUN_10b9a8d98(auStack_98);
      func_0x000104bdb3b0(uStack_a0);
    }
    func_0x0001080c5c8c(&lStack_58);
    lVar3 = *param_3;
  }
  plVar2 = *(long **)(lVar3 + 0x18);
  uVar1 = lStack_68 == 0;
  lStack_58 = 0;
  if (!(bool)uVar1) {
    lStack_58 = lStack_68 + 0x18;
  }
  alStack_50[0] = lStack_60;
  if (lStack_60 != 0) {
    do {
      func_0x00010b92bcf4();
    } while (extraout_w10_00 != 0);
  }
  (**(code **)(*plVar2 + 0x10))();
  func_0x0001080d58f0(&lStack_58);
  func_0x00010b92c088(param_1);
  FUN_10b9a8d98(alStack_88);
  func_0x000108107a5c(auStack_78);
  plVar2 = &lStack_68;
  FUN_10b92a478();
  func_0x00010b92bbd4(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      ___dynamic_cast(lVar3,&PTR_DAT_110d76c30,&PTR_DAT_110d76c80,0);
    }
    FUN_10b926ab8();
    *extraout_x8_01 = lVar3;
    return;
  }
  return;
}



/* Entry: 10b928e70; end: 10b9290eb;  */

void FUN_10b928e70(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    ___dynamic_cast(lVar1,&PTR_DAT_110d76c30,&PTR_DAT_110d76c80,0);
  }
  FUN_10b926ab8();
  *param_1 = lVar1;
  return;
}



/* Entry: 10b9290ec; end: 10b92914f;  */

void FUN_10b9290ec(long param_1)

{
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  func_0x00010b92bce8();
  lStack_50 = param_1 + 0x58;
  uStack_48 = 1;
  func_0x00010b92be7c();
  func_0x00010b92bcbc(&lStack_58);
  if (lStack_58 != 0) {
    func_0x00010b92bfb0();
    func_0x00010b92bc34();
    func_0x00010b92bdf8();
  }
  func_0x00010b92be00();
  func_0x00010b92be24();
  return;
}



/* Entry: 10b929150; end: 10b929293;  */

undefined8 * FUN_10b929150(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 in_ZR;
  int iVar3;
  long lVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  long lVar8;
  long lStack_e0;
  undefined1 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 uStack_c0;
  undefined1 auStack_b8 [88];
  undefined1 uStack_60;
  undefined8 uStack_58;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010b92bbfc();
  iVar3 = (int)lVar4;
  auStack_b8[0] = 0;
  uStack_60 = 0;
  uStack_58 = extraout_x8;
  func_0x000105c3b044();
  if (iVar3 != 0) {
    FUN_10b929294(auStack_b8,&UNK_10f7cde21);
  }
  lVar7 = *param_2;
  lVar4 = param_1 + 0x58;
  uStack_c0 = 1;
  lStack_c8 = lVar4;
  __ZNSt3__115recursive_mutex4lockEv(lVar4);
  func_0x00010b92767c(&lStack_d0,param_1,lVar7 + 0x30);
  if ((lStack_d0 != 0) && ((*(byte *)(*param_2 + 0x90) & 1) == 0)) {
    func_0x00010b924170(*param_2 + 0x70,param_3);
    lVar1 = *(long *)(lStack_d0 + 0x10);
    lVar2 = *(long *)(lStack_d0 + 0x18);
    for (lVar8 = 0; in_ZR = lVar2 - lVar1 >> 3 == lVar8, !(bool)in_ZR; lVar8 = lVar8 + 1) {
      lVar5 = *(long *)(*(long *)(lStack_d0 + 0x10) + lVar8 * 8);
      if (*(long *)(lVar5 + 0x50) == *param_2) {
        func_0x00010b929024(lVar5,*param_3,param_3[1]);
      }
    }
    uStack_d8 = 1;
    lStack_c8 = 0;
    uStack_c0 = 0;
    lStack_e0 = lVar4;
    func_0x00010b927998(param_1,&lStack_e0,lVar7 + 0x30);
    func_0x00010b92bd04();
  }
  func_0x00010b92a454(lStack_d0);
  func_0x00010b92bf3c();
  puVar6 = (undefined8 *)auStack_b8;
  func_0x0001080e8dd4(puVar6);
  func_0x00010b92bbd4(uStack_58);
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00010b92bce8();
  func_0x0001080e8d4c();
  func_0x00010b92bd28();
  FUN_10b929cf4();
  return param_3;
}



/* Entry: 10b929294; end: 10b9292bb;  */

void FUN_10b929294(void)

{
  func_0x00010b92bce8();
  func_0x0001080e8d4c();
  func_0x00010b92bd28();
  FUN_10b929cf4();
  return;
}



/* Entry: 10b9292bc; end: 10b9292c3;  */

undefined8 * FUN_10b9292bc(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 in_ZR;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  long lVar7;
  long lVar8;
  long lStack_e0;
  undefined1 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 uStack_c0;
  undefined1 auStack_b8 [88];
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = param_1 + -0x18;
  lVar7 = lVar6;
  func_0x00010b92bbfc();
  iVar3 = (int)lVar7;
  auStack_b8[0] = 0;
  uStack_60 = 0;
  uStack_58 = extraout_x8;
  func_0x000105c3b044();
  if (iVar3 != 0) {
    FUN_10b929294(auStack_b8,&UNK_10f7cde21);
  }
  lVar7 = *param_2;
  param_1 = param_1 + 0x40;
  uStack_c0 = 1;
  lStack_c8 = param_1;
  __ZNSt3__115recursive_mutex4lockEv(param_1);
  func_0x00010b92767c(&lStack_d0,lVar6,lVar7 + 0x30);
  if ((lStack_d0 != 0) && ((*(byte *)(*param_2 + 0x90) & 1) == 0)) {
    func_0x00010b924170(*param_2 + 0x70,param_3);
    lVar1 = *(long *)(lStack_d0 + 0x10);
    lVar2 = *(long *)(lStack_d0 + 0x18);
    for (lVar8 = 0; in_ZR = lVar2 - lVar1 >> 3 == lVar8, !(bool)in_ZR; lVar8 = lVar8 + 1) {
      lVar4 = *(long *)(*(long *)(lStack_d0 + 0x10) + lVar8 * 8);
      if (*(long *)(lVar4 + 0x50) == *param_2) {
        func_0x00010b929024(lVar4,*param_3,param_3[1]);
      }
    }
    uStack_d8 = 1;
    lStack_c8 = 0;
    uStack_c0 = 0;
    lStack_e0 = param_1;
    func_0x00010b927998(lVar6,&lStack_e0,lVar7 + 0x30);
    func_0x00010b92bd04();
  }
  func_0x00010b92a454(lStack_d0);
  func_0x00010b92bf3c();
  puVar5 = (undefined8 *)auStack_b8;
  func_0x0001080e8dd4(puVar5);
  func_0x00010b92bbd4(uStack_58);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010b92bce8();
  func_0x0001080e8d4c();
  func_0x00010b92bd28();
  FUN_10b929cf4();
  return param_3;
}



/* Entry: 10b9292c4; end: 10b929333;  */

void FUN_10b9292c4(long param_1)

{
  func_0x00010b92bc44(param_1 + 0x58);
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
  func_0x00010b92bd04();
  return;
}



/* Entry: 10b929334; end: 10b9294f7;  */

void FUN_10b929334(ulong param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  int iVar3;
  long lStack_40;
  char cStack_38;
  
  cStack_38 = '\x01';
  uVar2 = param_1;
  lStack_40 = param_1 + 0x58;
  func_0x00010b92be08();
  func_0x00010b92bdc0();
  iVar3 = *(int *)(param_1 + 0x120);
  uVar1 = iVar3 == 1;
  if ((bool)uVar1) {
    func_0x00010b92bfa4();
    if (((uint)!(bool)uVar1 & (uint)uVar2) != 0) {
      func_0x00010b92bd68();
      func_0x00010b92be08();
      if (cStack_38 == '\x01') {
        __ZNSt3__115recursive_mutex6unlockEv(lStack_40);
      }
      cStack_38 = '\x01';
      lStack_40 = param_1 + 0x58;
      func_0x00010b92bd04();
      iVar3 = *(int *)(param_1 + 0x120);
      goto LAB_10b9293bc;
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  else {
LAB_10b9293bc:
    uVar1 = iVar3 + -1 == 0;
    *(int *)(param_1 + 0x120) = iVar3 + -1;
    if (!(bool)uVar1) goto LAB_10b9293f8;
  }
  func_0x00010b92bf94();
  func_0x00010b92bfa4();
  if (!(bool)uVar1) {
    if ((uVar2 & 1) == 0) {
      func_0x000108110898(&lStack_40);
      FUN_10b928abc(param_1);
    }
    else {
      func_0x00010b92bd68();
    }
  }
LAB_10b9293f8:
  func_0x00010b92bf6c();
  return;
}



/* Entry: 10b9294f8; end: 10b9294ff;  */

void FUN_10b9294f8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b92bce8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    FUN_10b9244a4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b929500; end: 10b92959f;  */

long FUN_10b929500(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  func_0x00010b92bce8();
  FUN_10b92a8e8();
  func_0x00010b92bd28();
  plVar1 = param_1;
  FUN_10b92a90c();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b9295a0; end: 10b9295c3;  */

long FUN_10b9295a0(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b92b640(auStack_28);
  return lStack_20 + 0x10;
}



/* Entry: 10b9295c4; end: 10b929627;  */

void FUN_10b9295c4(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  func_0x00010b92c024();
  if (!(bool)in_ZR) {
    uVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010b92bc78();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *unaff_x19 = uVar1;
    func_0x00010b92a454();
  }
  return;
}



/* Entry: 10b929628; end: 10b929643;  */

void FUN_10b929628(long param_1)

{
  FUN_10b929644();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10b929644; end: 10b929667;  */

void FUN_10b929644(long param_1,long param_2)

{
  FUN_10b929668();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return;
}



/* Entry: 10b929668; end: 10b9296cb;  */

void FUN_10b929668(undefined8 *param_1,long *param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  
  uVar1 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010b92bd34();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = uVar1;
  uVar1 = 0;
  if (param_2[1] != 0) {
    do {
      func_0x00010b92bd34();
      uVar1 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  param_1[1] = uVar1;
  uVar1 = 0;
  if (param_2[2] != 0) {
    do {
      func_0x00010b92bd34();
      uVar1 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  param_1[2] = uVar1;
  return;
}



/* Entry: 10b9296cc; end: 10b9296eb;  */

void FUN_10b9296cc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c278f4();
  }
  return;
}



/* Entry: 10b9296ec; end: 10b929797;  */

void FUN_10b9296ec(long param_1)

{
  long unaff_x19;
  
  func_0x00010b92c018();
  FUN_10b9269fc();
  *(long *)(unaff_x19 + 8) = param_1 + 0x10;
  return;
}



/* Entry: 10b929798; end: 10b9297d7;  */

long * FUN_10b929798(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar3 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar3 <= param_2) {
      plVar3 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar3 = (long *)0xfffffffffffffff;
    }
    return plVar3;
  }
  FUN_10b92984c();
  func_0x00010b92bce8();
  plVar3 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_10b9298e0(plVar3,*param_1,param_1[1],lVar1);
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



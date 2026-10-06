/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081386b8; end: 108138757;  */

void FUN_1081386b8(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  undefined8 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  FUN_1080d10c8(param_1);
  lVar1 = param_2 + 0x70;
  FUN_108138588();
  lVar3 = *(long *)(param_2 + 0x70);
  lVar4 = *(long *)(param_2 + 0x88);
  lStack_40 = lVar1;
  uStack_38 = uVar2;
  while (lStack_40 != lVar3 + lVar4) {
    func_0x000108139970();
    FUN_1081385b4(&lStack_40);
  }
  lVar1 = param_2 + 0xa0;
  FUN_108138588();
  lVar3 = *(long *)(param_2 + 0xa0);
  lVar4 = *(long *)(param_2 + 0xb8);
  lStack_40 = lVar1;
  uStack_38 = uVar2;
  while (lStack_40 != lVar3 + lVar4) {
    func_0x000108139970();
    FUN_1081385b4(&lStack_40);
  }
  return;
}



/* Entry: 108138758; end: 1081387c3;  */

undefined8 FUN_108138758(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000108138788(&uStack_28);
  return param_1;
}



/* Entry: 1081387c4; end: 1081387cb;  */

void FUN_1081387c4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081398c8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_10812cc84();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1081387cc; end: 1081387ff;  */

void FUN_1081387cc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081398c8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_10812cc84();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108138800; end: 10813886b;  */

void FUN_108138800(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_10813886c(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x10;
    }
    __ZdlPv();
    func_0x00010813994c();
  }
  return;
}



/* Entry: 10813886c; end: 108138893;  */

undefined8 FUN_10813886c(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10812cc84(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 108138894; end: 1081388ff;  */

void FUN_108138894(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_10812e450(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x10;
    }
    __ZdlPv();
    func_0x00010813994c();
  }
  return;
}



/* Entry: 108138900; end: 108138923;  */

void FUN_108138900(long *param_1,long *param_2,long *param_3)

{
  for (; (param_1 != param_2 && (*param_1 != *param_3)); param_1 = param_1 + 1) {
  }
  return;
}



/* Entry: 108138924; end: 1081389db;  */

long FUN_108138924(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_1;
  FUN_1081389dc(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar5 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar4 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_108138a9c();
  }
  plStack_50 = (long *)((long)plStack_58 + (lVar1 - lVar5));
  plStack_40 = plStack_58 + (long)plVar4;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_48 = plStack_50 + 1;
  *plStack_50 = lVar5;
  FUN_108138a1c(param_1,&plStack_58);
  lVar5 = param_1[1];
  func_0x000108138b2c(&plStack_58);
  return lVar5;
}



/* Entry: 1081389dc; end: 108138a1b;  */

long * FUN_1081389dc(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar3 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar3 <= param_2) {
      plVar3 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar3 = (long *)0x1fffffffffffffff;
    }
    return plVar3;
  }
  FUN_108138a90();
  func_0x0001081398c8();
  plVar3 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_108138adc(plVar3,*param_1,param_1[1],lVar1);
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



/* Entry: 108138a1c; end: 108138a8f;  */

void FUN_108138a1c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001081398c8();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_108138adc(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 108138a90; end: 108138a9b;  */

void FUN_108138a90(void)

{
  _abort();
  FUN_108138ac0();
  return;
}



/* Entry: 108138a9c; end: 108138abf;  */

void FUN_108138a9c(void)

{
  FUN_108138ac0();
  return;
}



/* Entry: 108138ac0; end: 108138adb;  */

void FUN_108138ac0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
      FUN_10812cc84();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
  return;
}



/* Entry: 108138adc; end: 108138afb;  */

void FUN_108138adc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
    *param_4 = *puVar1;
    *puVar1 = 0;
    param_4 = param_4 + 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    FUN_10812cc84();
  }
  return;
}



/* Entry: 108138afc; end: 108138b57;  */

void FUN_108138afc(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    FUN_10812cc84();
  }
  return;
}



/* Entry: 108138b58; end: 108138b5f;  */

void FUN_108138b58(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081398c8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    FUN_10812cc84();
  }
  return;
}



/* Entry: 108138b60; end: 108138bcf;  */

void FUN_108138b60(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081398c8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    FUN_10812cc84();
  }
  return;
}



/* Entry: 108138bd0; end: 108138bf3;  */

void FUN_108138bd0(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_108138c74(&lStack_18);
  return;
}



/* Entry: 108138bf4; end: 108138c73;  */

bool FUN_108138bf4(long param_1,long *param_2,undefined8 param_3,ulong *param_4)

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
  
  func_0x000108139a24();
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
      if (*(long *)(*(long *)(param_1 + 8) + uVar6 * 0x10) == lVar5) goto LAB_1081399a8;
    }
    if ((uVar4 & ~uVar4 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar2 = lVar1 + uVar2;
  }
LAB_1081399a8:
  return uVar3 != 0;
}



/* Entry: 108138c74; end: 108138c8b;  */

void FUN_108138c74(void)

{
  func_0x000108139854();
  return;
}



/* Entry: 108138c8c; end: 108138cc7;  */

void FUN_108138c8c(int param_1)

{
  FUN_108138cec();
  if (param_1 != 0) {
    func_0x0001081399d4();
  }
  return;
}



/* Entry: 108138cc8; end: 108138ceb;  */

void FUN_108138cc8(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_108138d6c(&lStack_18);
  return;
}



/* Entry: 108138cec; end: 108138d6b;  */

bool FUN_108138cec(long param_1,long *param_2,undefined8 param_3,ulong *param_4)

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
  
  func_0x000108139a24();
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
      if (*(long *)(*(long *)(param_1 + 8) + uVar6 * 0x10) == lVar5) goto LAB_1081399a8;
    }
    if ((uVar4 & ~uVar4 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar2 = lVar1 + uVar2;
  }
LAB_1081399a8:
  return uVar3 != 0;
}



/* Entry: 108138d6c; end: 108138d83;  */

void FUN_108138d6c(void)

{
  func_0x000108139854();
  return;
}



/* Entry: 108138d84; end: 108138e13;  */

void FUN_108138d84(byte param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  
  func_0x000108139924();
  FUN_108138cc8();
  plVar4 = unaff_x20;
  plVar6 = unaff_x22;
  FUN_108138e14();
  uVar5 = SUB81(plVar6,0);
  if (((ulong)plVar6 & 1) != 0) {
    plVar6 = (long *)(unaff_x20[1] + (long)plVar4 * 0x10);
    lVar7 = *unaff_x22;
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plVar6 = lVar7;
    plVar6[1] = 0;
    *(byte *)(*unaff_x20 + (long)plVar4) = param_1 & 0x7f;
    func_0x00010813982c();
  }
  lVar7 = unaff_x20[1];
  *unaff_x19 = *unaff_x20 + (long)plVar4;
  unaff_x19[1] = lVar7 + (long)plVar4 * 0x10;
  *(undefined1 *)(unaff_x19 + 2) = uVar5;
  return;
}



/* Entry: 108138e14; end: 108138ecf;  */

undefined1  [16] FUN_108138e14(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  lVar6 = 0;
  uVar3 = param_3 >> 7;
  while( true ) {
    uVar3 = uVar3 & param_1[3];
    uVar7 = *(ulong *)(*param_1 + uVar3);
    uVar4 = uVar7 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar4 = uVar4 + 0xfefefefefefefeff & (uVar4 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar1 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      plVar5 = (long *)(uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[3]);
      if (*(long *)(param_1[1] + (long)plVar5 * 0x10) == *param_2) {
        uVar2 = 0;
        goto LAB_108138eb0;
      }
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar6 = lVar6 + 8;
    uVar3 = lVar6 + uVar3;
  }
  FUN_108138ed0(param_1,param_3);
  uVar2 = 1;
  plVar5 = param_1;
LAB_108138eb0:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = plVar5;
  return auVar8;
}



/* Entry: 108138ed0; end: 108138f4b;  */

void FUN_108138ed0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = param_1;
  FUN_108138f4c();
  lVar3 = param_1[5];
  lVar2 = *param_1;
  if (lVar3 == 0) {
    if (*(char *)(lVar2 + (long)plVar1) == -2) {
      lVar3 = 0;
    }
    else {
      func_0x000108138f98(param_1);
      plVar1 = param_1;
      FUN_108138f4c(param_1,param_2);
      lVar2 = *param_1;
      lVar3 = param_1[5];
    }
  }
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar3 - (ulong)(*(char *)(lVar2 + (long)plVar1) == -0x80);
  return;
}



/* Entry: 108138f4c; end: 108138fc7;  */

ulong FUN_108138f4c(long *param_1,ulong param_2)

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



/* Entry: 108138fc8; end: 10813908b;  */

void FUN_108138fc8(void)

{
  long **pplVar1;
  long *plVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long lVar3;
  long *plStack_58;
  
  func_0x0001081399fc();
  FUN_108139208();
  unaff_x20[3] = unaff_x22;
  for (lVar3 = 0; unaff_x24 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar3)) {
      pplVar1 = &plStack_58;
      plStack_58 = unaff_x20 + 5;
      FUN_1081392b4(pplVar1,unaff_x21);
      plVar2 = unaff_x20;
      FUN_108138f4c();
      *(byte *)(*unaff_x20 + (long)plVar2) = (byte)pplVar1 & 0x7f;
      func_0x00010813982c();
      FUN_1081392d4(unaff_x20 + 5,unaff_x20[1] + (long)plVar2 * 0x10,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x10;
  }
  if (unaff_x24 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10813908c; end: 108139207;  */

void FUN_10813908c(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long **pplVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  ulong uVar6;
  undefined1 extraout_w10;
  long extraout_x11;
  long extraout_x12;
  long *unaff_x19;
  ulong uVar7;
  long *aplStack_60 [3];
  undefined8 uStack_48;
  
  func_0x000108139874();
  plVar1 = unaff_x19 + 5;
  for (uVar7 = 0; uVar7 != unaff_x19[3]; uVar7 = uVar7 + 1) {
    if (*(char *)(*unaff_x19 + uVar7) == -2) {
      pplVar4 = aplStack_60;
      aplStack_60[0] = plVar1;
      FUN_1081392b4(aplStack_60,unaff_x19[1] + uVar7 * 0x10);
      plVar5 = unaff_x19;
      param_2 = (undefined1 *)pplVar4;
      FUN_108138f4c();
      uVar6 = unaff_x19[3] & (ulong)pplVar4 >> 7;
      if ((((long)plVar5 - uVar6 ^ uVar7 - uVar6) & unaff_x19[3]) < 8) {
        *(byte *)(*unaff_x19 + uVar7) = (byte)pplVar4 & 0x7f;
        func_0x00010813982c();
        param_1 = plVar5;
      }
      else {
        *(byte *)(*unaff_x19 + (long)plVar5) = (byte)pplVar4 & 0x7f;
        param_1 = plVar5;
        func_0x0001081399e8(*unaff_x19);
        *(undefined1 *)(extraout_x8 + extraout_x12 + extraout_x11 + 1) = extraout_w10;
        if (extraout_w9 == 0x80) {
          param_2 = (undefined1 *)(unaff_x19[1] + (long)plVar5 * 0x10);
          func_0x0001081398dc();
          *(undefined1 *)(*unaff_x19 + uVar7) = 0x80;
          func_0x000108139934(*unaff_x19);
          *(undefined1 *)(extraout_x8_00 + 1) = 0x80;
        }
        else {
          func_0x0001081398dc();
          func_0x0001081398dc();
          param_2 = (undefined1 *)(unaff_x19[1] + (long)plVar5 * 0x10);
          func_0x0001081398dc();
          uVar7 = uVar7 - 1;
        }
      }
    }
  }
  bVar3 = uVar7 == 7;
  lVar2 = 6;
  if (!bVar3) {
    lVar2 = uVar7 - (uVar7 >> 3);
  }
  unaff_x19[5] = lVar2 - unaff_x19[2];
  func_0x0001081398b4(uStack_48);
  if (bVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001081398c8();
  lVar2 = ((ulong)param_2 & 0xfffffffffffffff8) + 0x10;
  param_1 = param_1 + 5;
  FUN_108139274(param_1,lVar2 + (long)param_2 * 0x10);
  *plVar1 = (long)param_1;
  unaff_x19[6] = (long)param_1 + lVar2;
  _memset();
  *(undefined1 *)(*plVar1 + (long)unaff_x19) = 0xff;
  lVar2 = 6;
  if (unaff_x19 != (long *)0x7) {
    lVar2 = (long)unaff_x19 - ((ulong)unaff_x19 >> 3);
  }
  unaff_x19[10] = lVar2 - unaff_x19[7];
  return;
}



/* Entry: 108139208; end: 108139273;  */

void FUN_108139208(long param_1,ulong param_2)

{
  long lVar1;
  ulong unaff_x19;
  long *unaff_x20;
  
  func_0x0001081398c8();
  lVar1 = (param_2 & 0xfffffffffffffff8) + 0x10;
  param_1 = param_1 + 0x28;
  FUN_108139274(param_1,lVar1 + param_2 * 0x10);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_1 + lVar1;
  _memset();
  *(undefined1 *)(*unaff_x20 + unaff_x19) = 0xff;
  lVar1 = 6;
  if (unaff_x19 != 7) {
    lVar1 = unaff_x19 - (unaff_x19 >> 3);
  }
  unaff_x20[5] = lVar1 - unaff_x20[2];
  return;
}



/* Entry: 108139274; end: 1081392b3;  */

void FUN_108139274(undefined8 param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x000108139298(&uStack_11,param_2 + 7U >> 3);
  return;
}



/* Entry: 1081392b4; end: 1081392bb;  */

void FUN_1081392b4(undefined8 param_1,long param_2)

{
  func_0x000108139854(param_1,param_2,param_2 + 8);
  return;
}



/* Entry: 1081392bc; end: 1081392d3;  */

void FUN_1081392bc(void)

{
  func_0x000108139854();
  return;
}



/* Entry: 1081392d4; end: 1081392f3;  */

/* WARNING: Possible PIC construction at 0x00010812e464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010812e468) */

undefined8 * FUN_1081392d4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_2 = *param_3;
  *param_3 = 0;
  param_2[1] = param_3[1];
  param_3[1] = 0;
  func_0x00010007e5d0(param_3 + 1);
  func_0x0001003a8cb8();
  return param_3;
}



/* Entry: 1081392f4; end: 108139343;  */

void FUN_1081392f4(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x0001003acc00();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x10;
  }
  return;
}



/* Entry: 108139344; end: 108139537;  */

void FUN_108139344(ulong param_1)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined1 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  
  func_0x000108139924();
  FUN_108138bd0();
  lVar9 = 0;
  uVar10 = param_1 >> 7;
  lVar7 = *unaff_x20;
  while( true ) {
    uVar10 = uVar10 & unaff_x20[3];
    uVar13 = *(ulong *)(lVar7 + uVar10);
    uVar11 = uVar13 ^ (param_1 & 0x7f) * 0x101010101010101;
    for (uVar11 = uVar11 + 0xfefefefefefefeff & (uVar11 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar3 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      lVar12 = unaff_x20[1];
      plVar6 = (long *)(uVar10 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & unaff_x20[3]
                       );
      if (*(long *)(lVar12 + (long)plVar6 * 0x10) == *unaff_x22) {
        uVar8 = 0;
        goto LAB_1081393f4;
      }
    }
    if ((uVar13 & ~uVar13 << 6 & 0x8080808080808080) != 0) break;
    lVar9 = lVar9 + 8;
    uVar10 = lVar9 + uVar10;
  }
  plVar6 = unaff_x20;
  func_0x000108139468();
  plVar2 = (long *)(unaff_x20[1] + (long)plVar6 * 0x10);
  lVar9 = *unaff_x22;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plVar2 = lVar9;
  plVar2[1] = 0;
  *(byte *)(*unaff_x20 + (long)plVar6) = (byte)param_1 & 0x7f;
  func_0x00010813982c();
  lVar7 = *unaff_x20;
  lVar12 = unaff_x20[1];
  uVar8 = 1;
LAB_1081393f4:
  *unaff_x19 = lVar7 + (long)plVar6;
  unaff_x19[1] = lVar12 + (long)plVar6 * 0x10;
  *(undefined1 *)(unaff_x19 + 2) = uVar8;
  return;
}



/* Entry: 108139538; end: 108139577;  */

ulong FUN_108139538(long param_1,ulong param_2,ulong param_3)

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



/* Entry: 108139578; end: 1081397f7;  */

void FUN_108139578(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long lVar4;
  long unaff_x24;
  long lVar5;
  
  func_0x0001081399fc();
  lVar5 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar2 = lVar5 + param_2 * 0x10;
  __Znwm();
  *unaff_x20 = lVar2;
  unaff_x20[1] = lVar2 + lVar5;
  _memset();
  lVar5 = 0;
  *(undefined1 *)(lVar2 + unaff_x22) = 0xff;
  lVar2 = 6;
  if (unaff_x22 != 7) {
    lVar2 = unaff_x22 - (unaff_x22 >> 3);
  }
  unaff_x20[5] = lVar2 - unaff_x20[2];
  unaff_x20[3] = unaff_x22;
  for (; unaff_x24 != lVar5; lVar5 = lVar5 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar5)) {
      lVar2 = unaff_x21;
      FUN_1081397f8();
      lVar4 = *unaff_x20;
      lVar3 = lVar4;
      FUN_108139538(lVar4,unaff_x20[3],lVar2);
      bVar1 = (byte)lVar2 & 0x7f;
      *(byte *)(lVar4 + lVar3) = bVar1;
      *(byte *)(*unaff_x20 + (unaff_x20[3] & 7U) + (unaff_x20[3] & lVar3 - 8U) + 1) = bVar1;
      func_0x000108139818(unaff_x20[1] + lVar3 * 0x10,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x10;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1081397f8; end: 108139817;  */

void FUN_1081397f8(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,*param_1);
  return;
}



/* Entry: 108139818; end: 108139a4b;  */

undefined8 FUN_108139818(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10812cc84(param_2 + 1);
  func_0x00010007e5d0(param_2);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 108139a4c; end: 10813e507;  */

bool FUN_108139a4c(int param_1)

{
  return param_1 - 0x2000U < 0xc ||
         (((((param_1 == 0x20 || param_1 == 0x1680) || param_1 == 0x180e) || param_1 == 0x202f) ||
          param_1 == 0x205f) || param_1 == 0x3000);
}



/* Entry: 10813e508; end: 10813e83b;  */

long * FUN_10813e508(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  long *extraout_x8;
  long *plVar5;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 uVar7;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  long lStack_e0;
  undefined8 ***pppuStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  int *piStack_c0;
  long lStack_b8;
  int *piStack_b0;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined1 uStack_78;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001081405c4();
  plStack_80 = (long *)0x0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  iVar4 = (int)&plStack_90;
  plStack_90 = param_3;
  plStack_88 = param_4;
  func_0x00010b9a0624();
  FUN_10813e83c(&plStack_90);
  if (iVar4 != 0) {
    FUN_108141564(&plStack_90,param_2,param_3,param_4);
    if (plStack_90 == (long *)0x1) {
      plVar5 = plStack_88;
      if ((plStack_88 != (long *)0x0) && (plStack_88[2] != 0)) {
        do {
          func_0x00010813e8a0();
          plVar5 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      *param_1 = 1;
      param_1[1] = plVar5;
    }
    else {
      *param_1 = 2;
      uVar7 = 0;
      if (plStack_88 != (long *)0x0) {
        do {
          func_0x00010813e890();
          uVar7 = extraout_x8_01;
        } while (extraout_w11_01 != 0);
      }
      param_1[1] = uVar7;
      if (plStack_90 == (long *)0x2) {
        param_2 = plStack_88;
        func_0x000104bda960(plStack_88);
        goto LAB_10813e7f0;
      }
      if (plStack_90 != (long *)0x1) goto LAB_10813e7f0;
    }
    param_2 = plStack_88;
    func_0x00010813e86c(plStack_88);
    goto LAB_10813e7f0;
  }
  plStack_90 = (long *)0x0;
  iVar4 = (int)&plStack_90;
  plStack_88 = param_3;
  plStack_80 = param_4;
  func_0x000108143170();
  if (iVar4 == 0) {
    func_0x00010813f954(&piStack_b0,&plStack_90,1);
    if (piStack_b0 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piStack_b0,0x10);
        if (bVar2) {
          *piStack_b0 = *piStack_b0 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    piStack_c0 = piStack_b0;
    FUN_10821b4d4(&lStack_b8,&piStack_c0,0);
    func_0x0001078bddf8(&piStack_c0);
    lVar3 = lStack_b8;
    if (lStack_b8 == 0) {
      func_0x00010813fba8(&pppuStack_a8,&plStack_90,&UNK_10f47bd8e,0x18);
      uStack_d0 = uStack_a0;
      pppuStack_d8 = pppuStack_a8;
      if (-1 < (char)bStack_91) {
        uStack_d0 = (ulong)bStack_91;
        pppuStack_d8 = &pppuStack_a8;
      }
      func_0x00010b99f5a8(&uStack_c8,&pppuStack_d8);
      *param_1 = 2;
      param_1[1] = uStack_c8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_a8);
    }
    else {
      lStack_b8 = 0;
      lStack_e0 = lVar3;
      func_0x000108143c44(&pppuStack_a8,&lStack_e0);
      if ((undefined8 ****)pppuStack_a8 == (undefined8 ****)0x1) {
        uVar6 = uStack_a0;
        if ((uStack_a0 != 0) && (*(long *)(uStack_a0 + 0x10) != 0)) {
          do {
            func_0x00010813e8a0();
            uVar6 = extraout_x8_02;
          } while (extraout_w11_02 != 0);
        }
        *param_1 = 1;
        param_1[1] = uVar6;
LAB_10813e7ac:
        func_0x00010813e884(uStack_a0);
      }
      else {
        *param_1 = 2;
        uVar7 = 0;
        if (uStack_a0 != 0) {
          do {
            func_0x00010813e890();
            uVar7 = extraout_x8_04;
          } while (extraout_w11_04 != 0);
        }
        param_1[1] = uVar7;
        if ((undefined8 ****)pppuStack_a8 == (undefined8 ****)0x2) {
          func_0x000104bda960(uStack_a0);
        }
        else if ((undefined8 ****)pppuStack_a8 == (undefined8 ****)0x1) goto LAB_10813e7ac;
      }
      lVar3 = lStack_e0;
      lStack_e0 = 0;
      if (lVar3 != 0) {
        func_0x00010813e8b0();
      }
    }
    lVar3 = lStack_b8;
    lStack_b8 = 0;
    if (lVar3 != 0) {
      func_0x00010813e8b0();
    }
    func_0x0001078bddf8(&piStack_b0);
  }
  else {
    func_0x000108142d80(&pppuStack_a8,param_3,param_4);
    if ((undefined8 ****)pppuStack_a8 == (undefined8 ****)0x1) {
      uVar6 = uStack_a0;
      if ((uStack_a0 != 0) && (*(long *)(uStack_a0 + 0x10) != 0)) {
        do {
          func_0x00010813e8a0();
          uVar6 = extraout_x8_00;
        } while (extraout_w11_00 != 0);
      }
      *param_1 = 1;
      param_1[1] = uVar6;
LAB_10813e708:
      func_0x00010813e878(uStack_a0);
    }
    else {
      *param_1 = 2;
      uVar7 = 0;
      if (uStack_a0 != 0) {
        do {
          func_0x00010813e890();
          uVar7 = extraout_x8_03;
        } while (extraout_w11_03 != 0);
      }
      param_1[1] = uVar7;
      if ((undefined8 ****)pppuStack_a8 == (undefined8 ****)0x2) {
        func_0x000104bda960(uStack_a0);
      }
      else if ((undefined8 ****)pppuStack_a8 == (undefined8 ****)0x1) goto LAB_10813e708;
    }
  }
  param_2 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    (**(code **)(*plStack_90 + 0x18))();
  }
LAB_10813e7f0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_2;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 6);
  func_0x0001003b1b30(param_2 + 3);
  return param_2;
}



/* Entry: 10813e83c; end: 10813e86b;  */

long FUN_10813e83c(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  func_0x0001003b1b30(param_1 + 0x18);
  return param_1;
}



/* Entry: 10813e86c; end: 10813e8bb;  */

void FUN_10813e86c(long param_1)

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



/* Entry: 10813e8bc; end: 10813e8eb;  */

undefined8 * FUN_10813e8bc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a27030;
  FUN_1083304b8(param_1 + 3);
  return param_1;
}



/* Entry: 10813e8ec; end: 10813e8ff;  */

void FUN_10813e8ec(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = param_2 + 0x30;
  iVar3 = *(int *)(param_2 + 0x38);
  uVar5 = 2;
  uVar1 = 0;
  if (iVar3 == 6) {
    uVar1 = uVar5;
  }
  uVar2 = 5;
  if (iVar3 != 0x10) {
    uVar2 = uVar1;
  }
  uVar1 = 4;
  if (iVar3 != 0xe) {
    uVar1 = uVar2;
  }
  uVar2 = 6;
  if (iVar3 != 0x12) {
    uVar2 = uVar1;
  }
  uVar1 = 1;
  if (iVar3 != 4) {
    uVar1 = uVar2;
  }
  uVar2 = 3;
  if (iVar3 != 1) {
    uVar2 = uVar1;
  }
  if (*(int *)(param_2 + 0x3c) != 3) {
    uVar5 = (uint)(*(int *)(param_2 + 0x3c) == 2);
  }
  func_0x0001078bdb50();
  *param_1 = *(undefined8 *)(param_2 + 0x40);
  *(uint *)(param_1 + 1) = uVar2;
  *(uint *)((long)param_1 + 0xc) = uVar5;
  param_1[2] = lVar4;
  return;
}



/* Entry: 10813e900; end: 10813e93b;  */

void FUN_10813e900(long param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  func_0x000108330638(param_1 + 0x18,&uStack_50);
  func_0x000108330548(&uStack_50);
  return;
}



/* Entry: 10813e93c; end: 10813ea37;  */

void FUN_10813e93c(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  func_0x00010813f0b4(auStack_78);
  puVar2 = auStack_78;
  func_0x0001078bdb50();
  puVar1 = *(undefined1 **)(param_2 + 0x10);
  if (*(undefined1 **)(param_2 + 0x10) <= puVar2) {
    puVar1 = puVar2;
  }
  puVar3 = &uStack_60;
  FUN_108330b14(puVar3,auStack_78,puVar1);
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010b99f5f8(&uStack_80,&UNK_10f47bda7);
    uVar5 = uStack_80;
    uStack_80 = 0;
    func_0x000104bda960(0);
    uVar4 = 2;
  }
  else {
    func_0x00010813e9fc(&uStack_80,&uStack_60);
    uVar5 = uStack_80;
    uStack_80 = 0;
    FUN_1080fdf28(0);
    uVar4 = 1;
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  FUN_10810a400(auStack_78);
  FUN_108330548(&uStack_60);
  return;
}



/* Entry: 10813ea38; end: 10813ea3b;  */

undefined8 * FUN_10813ea38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a27030;
  FUN_108330548(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 10813ea3c; end: 10813ea4f;  */

void FUN_10813ea3c(void)

{
  FUN_10813ea50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10813ea50; end: 10813ea8b;  */

undefined8 * FUN_10813ea50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a27030;
  FUN_108330548(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 10813ea8c; end: 10813eaaf;  */

void FUN_10813ea8c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10813eab0(&uStack_11,param_1);
  return;
}



/* Entry: 10813eab0; end: 10813eb13;  */

void FUN_10813eab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  puVar5 = auStack_40;
  func_0x00010813eca0();
  FUN_10813eb30(auStack_40,1);
  FUN_10813eb88(lStack_30,param_3);
  lVar6 = lStack_30;
  lStack_30 = 0;
  FUN_10813eb14(param_1,lVar6 + 0x18);
  func_0x00010813ec64();
  func_0x00010813ec7c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8 = puVar5;
  extraout_x8[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_10813eb14;
    lStack_58 = extraout_x8[1];
    if (lStack_58 != 0) {
      plVar1 = (long *)(lStack_58 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_60 = puVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x0001003a8180(puVar2,&puStack_60);
    func_0x0001003a824c(&puStack_60);
    return;
  }
  return;
}



/* Entry: 10813eb14; end: 10813eb2f;  */

void FUN_10813eb14(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x0001003a8180(lVar2,&lStack_20);
    func_0x0001003a824c(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10813eb30; end: 10813eb57;  */

long FUN_10813eb30(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10813eb58();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10813eb58; end: 10813eb87;  */

undefined8 * FUN_10813eb58(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x276276276276277) {
    puVar1 = (undefined8 *)(param_2 * 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a270a8;
  param_1[1] = 0;
  FUN_10813e8bc(param_1 + 3);
  return param_1;
}



/* Entry: 10813eb88; end: 10813ebbb;  */

undefined8 * FUN_10813eb88(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a270a8;
  param_1[1] = 0;
  FUN_10813e8bc(param_1 + 3);
  return param_1;
}



/* Entry: 10813ebbc; end: 10813ebbf;  */

void FUN_10813ebbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a270a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10813ebc0; end: 10813ebd3;  */

void FUN_10813ebc0(void)

{
  func_0x00010813ebe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10813ebd4; end: 10813ebf7;  */

void FUN_10813ebd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010813ebdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10813ebf8; end: 10813ec63;  */

void FUN_10813ebf8(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x0001003a8180(param_2,&uStack_20);
    func_0x0001003a824c(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10813ec64; end: 10813ecb3;  */

void FUN_10813ec64(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10813ecb4; end: 10814055f;  */

void FUN_10813ecb4(void)

{
  return;
}



/* Entry: 108140560; end: 1081405ab;  */

undefined8 * FUN_108140560(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a271f0;
  FUN_1080cb920(param_1 + 5);
  func_0x0001078bdb94(param_1 + 4);
  func_0x000106f47184(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1081405ac; end: 1081405af;  */

undefined8 * FUN_1081405ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a271f0;
  FUN_1080cb920(param_1 + 5);
  func_0x0001078bdb94(param_1 + 4);
  func_0x000106f47184(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1081405b0; end: 108140617;  */

void FUN_1081405b0(void)

{
  FUN_108140560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108140618; end: 1081406f3;  */

void FUN_108140618(void)

{
  long unaff_x20;
  undefined4 auStack_78 [2];
  undefined2 uStack_70;
  undefined4 auStack_68 [2];
  undefined2 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  func_0x0001081411a4();
  uStack_38 = 0;
  uStack_40 = 0;
  func_0x00010b9a64d4(&uStack_58,"image");
  func_0x00010b9a8e18(auStack_50,&uStack_58);
  func_0x00010b9aa86c(&uStack_40,&DAT_10f6389e8,4,auStack_50);
  auStack_68[0] = *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x20);
  uStack_60 = 4;
  func_0x00010b9aa86c();
  auStack_78[0] = *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x24);
  uStack_70 = 4;
  func_0x00010b9aa86c();
  func_0x00010b9a8f04();
  func_0x00010b9a8d98(auStack_78);
  func_0x00010b9a8d98(auStack_68);
  func_0x00010b9a8d98(auStack_50);
  func_0x0001003a8cb8(uStack_58);
  func_0x00010b9a8d98(&uStack_40);
  return;
}



/* Entry: 1081406f4; end: 1081406ff;  */

void FUN_1081406f4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_108140788(&lStack_28,*(undefined8 *)(param_2 + 0x18),1,100);
  if (lStack_28 == 0) {
    func_0x00010b99f5f8(&uStack_40,&UNK_10f47be8f);
    func_0x000108141174();
    uVar1 = 2;
    uStack_40 = unaff_x20;
  }
  else {
    func_0x00010813f888(&uStack_40,&lStack_28);
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  param_1[1] = uStack_40;
  func_0x0001078bddf8(&lStack_28);
  return;
}



/* Entry: 108140700; end: 108140787;  */

void FUN_108140700(undefined8 *param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_108140788(&lStack_28,*(undefined8 *)(param_3 + 0x18),param_4,(int)(param_2 * 100.0));
  if (lStack_28 == 0) {
    func_0x00010b99f5f8(&uStack_40,&UNK_10f47be8f);
    func_0x000108141174();
    uVar1 = 2;
    uStack_40 = unaff_x20;
  }
  else {
    func_0x00010813f888(&uStack_40,&lStack_28);
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  param_1[1] = uStack_40;
  func_0x0001078bddf8(&lStack_28);
  return;
}



/* Entry: 108140788; end: 108140a3b;  */

void FUN_108140788(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long *unaff_x22;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  func_0x0001081411e0();
  func_0x0001081405c4();
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  (**(code **)(*unaff_x22 + 0xd0))();
  if (((ulong)unaff_x22 & 1) == 0) {
    *unaff_x19 = 0;
    goto LAB_1081408e4;
  }
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  puVar1 = &uStack_a0;
  FUN_108330de8(puVar1,&uStack_d0);
  if (((ulong)puVar1 & 1) == 0) {
    *unaff_x19 = 0;
  }
  else {
    ppuStack_f0 = &PTR_FUN_110a403f8;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    if (unaff_w21 == 2) {
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      fStack_5c = 75.0;
      if (unaff_w20 != 100) {
        fStack_5c = (float)(int)unaff_w20;
      }
      uStack_60 = (uint)(unaff_w20 == 100);
      func_0x000108141194();
      FUN_10821ab6c();
      if (((ulong)puVar1 & 1) == 0) goto LAB_1081408cc;
LAB_10814088c:
      FUN_1083a05b4(&ppuStack_f0);
    }
    else {
      if (unaff_w21 == 1) {
        uStack_60 = 0xf8;
        fStack_5c = 8.40779e-45;
        uStack_50 = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        uStack_40 = 0;
        uStack_48 = 0;
        uStack_38 = 0;
        func_0x000108141194();
        FUN_108153584();
        func_0x000108140fe4(&uStack_58);
      }
      else {
        if (unaff_w21 != 0) goto LAB_10814088c;
        fStack_5c = 0.0;
        uStack_58 = 0;
        uStack_38._0_5_ = (uint5)(uint)uStack_38;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_50 = 0;
        uStack_38 = uStack_38 & 0xffffffffffffff00;
        uStack_60 = unaff_w20;
        func_0x000108141194();
        FUN_108152258();
      }
      if (((ulong)puVar1 & 1) != 0) goto LAB_10814088c;
LAB_1081408cc:
      *unaff_x19 = 0;
    }
    FUN_1083a02a4(&ppuStack_f0);
  }
  FUN_10810a400(&uStack_c0);
LAB_1081408e4:
  FUN_108330548(&uStack_a0);
  return;
}



/* Entry: 108140a3c; end: 108140a8f;  */

long * FUN_108140a3c(long *param_1,long *param_2)

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
    FUN_1080cb940(lVar4);
  }
  return param_1;
}



/* Entry: 108140a90; end: 108140bc3;  */

void FUN_108140a90(int param_1)

{
  undefined8 ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined1 **ppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 auStack_e8 [8];
  undefined1 *puStack_e0;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 auStack_c0 [3];
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_78;
  undefined1 *puStack_70;
  undefined8 ***pppuStack_68;
  undefined8 ***pppuStack_60;
  undefined1 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long in_stack_ffffffffffffffc0;
  int *in_stack_ffffffffffffffc8;
  
  func_0x0001081411a4();
  func_0x000108143170();
  if (param_1 == 0) {
    func_0x0001081405c4();
    func_0x00010813f954(&stack0xffffffffffffffc8);
    if (in_stack_ffffffffffffffc8 != (int *)0x0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(in_stack_ffffffffffffffc8,0x10);
        if (bVar3) {
          *in_stack_ffffffffffffffc8 = *in_stack_ffffffffffffffc8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10821e62c(&stack0xffffffffffffffc0,&uStack_48,0);
    func_0x0001078bddf8(&uStack_48);
    if (in_stack_ffffffffffffffc0 == 0) {
      func_0x00010813fba8(&pppuStack_60);
      puStack_70 = puStack_58;
      pppuStack_78 = pppuStack_60;
      if (-1 < (char)uStack_50._7_1_) {
        puStack_70 = (undefined1 *)(ulong)uStack_50._7_1_;
        pppuStack_78 = &pppuStack_60;
      }
      func_0x00010b99f5a8(&pppuStack_68,&pppuStack_78);
      ppppuVar7 = (undefined8 ****)pppuStack_68;
      pppuStack_68 = (undefined8 ****)0x0;
      func_0x000104bda960(0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_60);
      uVar12 = 2;
    }
    else {
      func_0x000108119b84(&pppuStack_60,&stack0xffffffffffffffc0);
      ppppuVar7 = (undefined8 ****)pppuStack_60;
      pppuStack_60 = (undefined8 ****)0x0;
      func_0x0001078bdbb8(0);
      uVar12 = 1;
    }
    *unaff_x19 = uVar12;
    unaff_x19[1] = ppppuVar7;
    func_0x000106f47184(&stack0xffffffffffffffc0);
    func_0x0001078bddf8(&stack0xffffffffffffffc8);
    return;
  }
  ppppuVar7 = &pppuStack_60;
  func_0x0001081411e0();
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)0x1;
  func_0x00010813eda4();
  pppuStack_60 = (undefined8 ***)*plVar5;
  if (pppuStack_60 != (undefined8 ***)0x0) {
    pppuVar1 = pppuStack_60 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined8 **)((long)*pppuVar1 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000108143360(&puStack_58,unaff_x22,&pppuStack_60,unaff_x21,unaff_x20);
  FUN_1081165ec(pppuStack_60);
  uVar4 = puStack_58 == (undefined1 *)0x1;
  if ((bool)uVar4) {
    ppppuVar7 = (undefined8 ****)0x0;
    FUN_108140c9c(unaff_x19,&uStack_50);
  }
  else {
    *unaff_x19 = 2;
    unaff_x19[1] = uStack_50;
    uStack_50 = 0;
  }
  ppuVar6 = &puStack_58;
  func_0x0001080cc588();
  func_0x0001081411b8(uStack_48);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    puVar8 = auStack_c0;
    pppuStack_68 = (undefined8 ***)FUN_108140c9c;
    uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)*ppuVar6 + 0x38))(auStack_c0);
    puVar10 = (undefined1 *)ppppuVar7;
    func_0x00010813f104(&lStack_a8,ppuVar6,auStack_c0);
    iVar9 = (int)puVar10;
    uVar4 = lStack_a8 == 1;
    if ((bool)uVar4) {
      puVar8 = &uStack_a0;
      FUN_108140da4(extraout_x8,auStack_c0,puVar8);
    }
    else {
      *extraout_x8 = 2;
      extraout_x8[1] = uStack_a0;
      uStack_a0 = 0;
    }
    plVar5 = &lStack_a8;
    func_0x000108141128(plVar5);
    func_0x0001081411b8(uStack_98);
    if (!(bool)uVar4) {
      ___stack_chk_fail();
      pcStack_c8 = FUN_108140d48;
      uVar11 = 1;
      if (iVar9 == 0) {
        uVar11 = 2;
      }
      puStack_e0 = (undefined1 *)ppppuVar7;
      ppuStack_d0 = &puStack_70;
      func_0x00010813f954(auStack_e8,puVar8,uVar11);
      FUN_108140da4(extraout_x8_00,plVar5,auStack_e8);
      func_0x0001078bddf8(auStack_e8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 108140bc4; end: 108140c9b;  */

void FUN_108140bc4(void)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *unaff_x19;
  undefined1 auStack_e8 [8];
  undefined1 *puStack_e0;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 auStack_c0 [3];
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_60;
  func_0x0001081411e0();
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)0x1;
  func_0x00010813eda4();
  lStack_60 = *plVar4;
  if (lStack_60 != 0) {
    plVar4 = (long *)(lStack_60 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000108143360(&lStack_58);
  FUN_1081165ec(lStack_60);
  uVar3 = lStack_58 == 1;
  if ((bool)uVar3) {
    plVar5 = (long *)0x0;
    FUN_108140c9c(&uStack_50);
  }
  else {
    *unaff_x19 = 2;
    unaff_x19[1] = uStack_50;
    uStack_50 = 0;
  }
  plVar4 = &lStack_58;
  func_0x0001080cc588();
  func_0x0001081411b8(uStack_48);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = auStack_c0;
  pcStack_68 = FUN_108140c9c;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = &stack0xfffffffffffffff0;
  (**(code **)(*(long *)*plVar4 + 0x38))(auStack_c0);
  puVar8 = (undefined1 *)plVar5;
  func_0x00010813f104(&lStack_a8,plVar4,auStack_c0);
  iVar7 = (int)puVar8;
  uVar3 = lStack_a8 == 1;
  if ((bool)uVar3) {
    puVar6 = &uStack_a0;
    FUN_108140da4(extraout_x8,auStack_c0,puVar6);
  }
  else {
    *extraout_x8 = 2;
    extraout_x8[1] = uStack_a0;
    uStack_a0 = 0;
  }
  plVar4 = &lStack_a8;
  func_0x000108141128(plVar4);
  func_0x0001081411b8(uStack_98);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_108140d48;
  uVar9 = 1;
  if (iVar7 == 0) {
    uVar9 = 2;
  }
  puStack_e0 = (undefined1 *)plVar5;
  ppuStack_d0 = &puStack_70;
  func_0x00010813f954(auStack_e8,puVar6,uVar9);
  FUN_108140da4(extraout_x8_00,plVar4,auStack_e8);
  func_0x0001078bddf8(auStack_e8);
  return;
}



/* Entry: 108140c9c; end: 108140d47;  */

void FUN_108140c9c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 extraout_x8;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 auStack_60 [3];
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = auStack_60;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*(long *)*param_2 + 0x38))(auStack_60);
  uVar5 = param_3;
  func_0x00010813f104(&lStack_48,param_2,auStack_60);
  iVar4 = (int)uVar5;
  uVar1 = lStack_48 == 1;
  if ((bool)uVar1) {
    puVar3 = &uStack_40;
    FUN_108140da4(param_1,auStack_60,puVar3);
  }
  else {
    *param_1 = 2;
    param_1[1] = uStack_40;
    uStack_40 = 0;
  }
  plVar2 = &lStack_48;
  FUN_108141128(plVar2);
  func_0x0001081411b8(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_108140d48;
  uVar6 = 1;
  if (iVar4 == 0) {
    uVar6 = 2;
  }
  uStack_80 = param_3;
  puStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010813f954(auStack_88,puVar3,uVar6);
  FUN_108140da4(extraout_x8,plVar2,auStack_88);
  func_0x0001078bddf8(auStack_88);
  return;
}



/* Entry: 108140d48; end: 108140da3;  */

void FUN_108140d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = 1;
  if (param_4 == 0) {
    uVar1 = 2;
  }
  func_0x00010813f954(auStack_28,param_3,uVar1);
  FUN_108140da4(param_1,param_2,auStack_28);
  func_0x0001078bddf8(auStack_28);
  return;
}



/* Entry: 108140da4; end: 108140e5f;  */

void FUN_108140da4(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lStack_60;
  int *piStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x0001081411a4();
  func_0x00010813f0b4(auStack_48);
  piStack_58 = (int *)*param_2;
  if (piStack_58 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piStack_58,0x10);
      if (bVar2) {
        *piStack_58 = *piStack_58 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_1083b81f0(&lStack_50,auStack_48,&piStack_58,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001078bddf8(&piStack_58);
  if (lStack_50 == 0) {
    func_0x00010b99f5f8(&lStack_60,&UNK_10f47beba);
    func_0x000108141174();
    uVar3 = 2;
  }
  else {
    func_0x000108119b84(&lStack_60,&lStack_50);
    unaff_x20 = lStack_60;
    lStack_60 = 0;
    func_0x0001078bdbb8(0);
    uVar3 = 1;
  }
  *unaff_x19 = uVar3;
  unaff_x19[1] = unaff_x20;
  func_0x000106f47184(&lStack_50);
  FUN_10810a400(auStack_48);
  return;
}



/* Entry: 108140e60; end: 108140f83;  */

void FUN_108140e60(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int **ppiVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_c0;
  undefined8 auStack_b8 [2];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [56];
  int *piStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001081411a4();
  lVar5 = *(long *)(param_1 + 0x18);
  piStack_58 = *(int **)(lVar5 + 0x10);
  if (piStack_58 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piStack_58,0x10);
      if (bVar3) {
        *piStack_58 = *piStack_58 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_48 = *(undefined8 *)(lVar5 + 0x20);
  uStack_50 = *(undefined8 *)(lVar5 + 0x18);
  if (*(int *)(lVar5 + 0x18) == 0) {
    lStack_c0 = 0;
  }
  else {
    func_0x0001081411cc();
    lVar5 = *(long *)(unaff_x20 + 0x18);
    ppiVar4 = &piStack_58;
    func_0x0001078bdb50(ppiVar4);
    FUN_108330aac(auStack_90,lVar5 + 0x10,ppiVar4);
    FUN_10814105c(auStack_b8,(ulong)auStack_90 | 8);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    ppiVar4 = &piStack_58;
    func_0x0001078bdb50(ppiVar4);
    FUN_1083b59b0(uVar6,&piStack_58,auStack_b8[0],ppiVar4,0,0,0);
    func_0x00010813e9fc(&lStack_c0,auStack_90);
    if ((lStack_c0 != 0) && (*(long *)(lStack_c0 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_c0 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_1080fdf28(lStack_c0);
    FUN_10810a400(auStack_a8);
    FUN_108330548(auStack_90);
  }
  *unaff_x19 = lStack_c0;
  FUN_10810a400(&piStack_58);
  return;
}



/* Entry: 108140f84; end: 10814102b;  */

undefined8 FUN_108140f84(void)

{
  int iVar1;
  
  if ((bRam0000000113729ce8 & 1) == 0) {
    iVar1 = 0x13729ce8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113729ce0,"Image");
      ___cxa_guard_release(0x113729ce8);
    }
  }
  return 0x113729ce0;
}



/* Entry: 10814102c; end: 10814105b;  */

void FUN_10814102c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_2;
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
  *param_1 = piVar3;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10814105c; end: 108141127;  */

undefined8 * FUN_10814105c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_10814102c(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 108141128; end: 1081411f3;  */

void FUN_108141128(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  if (*param_1 == 1) {
    param_1 = param_1 + 1;
    func_0x0001078be09c();
    if (param_1 != (long *)0x0) {
      func_0x000106f47128();
    }
    return;
  }
  return;
}



/* Entry: 1081411f4; end: 10814120b;  */

void FUN_1081411f4(long param_1)

{
  FUN_108376ad8();
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10814120c; end: 108141277;  */

uint FUN_10814120c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 auStack_40 [2];
  
  puVar1 = param_2;
  FUN_108141278(param_2,param_1 + 0x10);
  if (((ulong)puVar1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x10) = *param_2;
    FUN_108376ad8(auStack_40);
    func_0x000108142214(param_1,auStack_40);
    FUN_10837ca5c(auStack_40[0]);
  }
  return (uint)puVar1 ^ 1;
}



/* Entry: 108141278; end: 1081412b3;  */

bool FUN_108141278(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (uVar2 == 2) break;
    uVar1 = uVar2 + 1;
  } while (ABS(*(float *)(param_1 + uVar2 * 4) - *(float *)(param_2 + uVar2 * 4)) <= 0.0001);
  return 1 < uVar2;
}



/* Entry: 1081412b4; end: 1081412e7;  */

undefined8 * FUN_1081412b4(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_110a27258;
  func_0x000108141a64(param_1 + 2);
  return param_1;
}



/* Entry: 1081412e8; end: 10814135f;  */

long * FUN_1081412e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 uStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long alStack_58 [4];
  undefined8 uStack_38;
  
  func_0x000108142014();
  uVar1 = 0x30;
  uStack_38 = extraout_x8;
  __Znwm();
  func_0x000108141a64(alStack_58,param_2);
  plVar3 = alStack_58;
  FUN_1081412b4(uVar1);
  *param_1 = uVar1;
  plVar2 = alStack_58;
  func_0x000108141abc();
  func_0x000108141fec(uStack_38);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_108141360;
  plVar2 = (long *)plVar2[5];
  uStack_80 = param_4;
  plStack_78 = plVar3;
  puStack_70 = &stack0xfffffffffffffff0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&plStack_78,&uStack_80);
    return plVar2;
  }
  FUN_108141b38();
  *plVar2 = (long)&PTR_FUN_110a272a8;
  FUN_108141b44(plVar2 + 0xc);
  func_0x00010b9a1f08(plVar2 + 3);
  func_0x0001003a81d8(plVar2 + 1);
  return plVar2;
}



/* Entry: 108141360; end: 108141397;  */

long * FUN_108141360(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  plVar1 = *(long **)(param_1 + 0x28);
  uStack_20 = param_3;
  uStack_18 = param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_18,&uStack_20);
    return plVar1;
  }
  FUN_108141b38();
  *plVar1 = (long)&PTR_FUN_110a272a8;
  FUN_108141b44(plVar1 + 0xc);
  func_0x00010b9a1f08(plVar1 + 3);
  func_0x0001003a81d8(plVar1 + 1);
  return plVar1;
}



/* Entry: 108141398; end: 1081413db;  */

undefined8 * FUN_108141398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a272a8;
  FUN_108141b44(param_1 + 0xc);
  func_0x00010b9a1f08(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1081413dc; end: 1081413df;  */

undefined8 * FUN_1081413dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a272a8;
  FUN_108141b44(param_1 + 0xc);
  func_0x00010b9a1f08(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1081413e0; end: 1081413f3;  */

void FUN_1081413e0(void)

{
  FUN_108141398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081413f4; end: 1081413fb;  */

long FUN_1081413f4(long param_1)

{
  return param_1 + 0x68;
}



/* Entry: 1081413fc; end: 10814142f;  */

undefined8 FUN_1081413fc(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x000108142060();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
  __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x18);
  return uVar1;
}



/* Entry: 108141430; end: 10814143f;  */

long FUN_108141430(long param_1)

{
  return param_1 + 0x78;
}



/* Entry: 108141440; end: 108141563;  */

void FUN_108141440(undefined8 param_1,long param_2)

{
  int aiStack_88 [2];
  undefined2 uStack_80;
  int aiStack_78 [2];
  undefined2 uStack_70;
  int aiStack_68 [2];
  undefined2 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = 0;
  func_0x00010b9a64d4(&uStack_58,&DAT_10f415e76);
  func_0x00010b9a8e18(auStack_50,&uStack_58);
  func_0x00010b9aa86c(&uStack_40,&DAT_10f6389e8,4,auStack_50);
  aiStack_68[0] = (int)*(float *)(param_2 + 0x78);
  uStack_60 = 4;
  func_0x00010b9aa86c();
  aiStack_78[0] = (int)*(float *)(param_2 + 0x7c);
  uStack_70 = 4;
  func_0x00010b9aa86c();
  aiStack_88[0] = (int)(*(double *)(param_2 + 0x68) * 1000.0);
  uStack_80 = 4;
  func_0x00010b9aa86c();
  func_0x00010b9a8f04(param_1,&uStack_40);
  func_0x00010b9a8d98(aiStack_88);
  func_0x00010b9a8d98(aiStack_78);
  func_0x00010b9a8d98(aiStack_68);
  func_0x00010b9a8d98(auStack_50);
  func_0x0001003a8cb8(uStack_58);
  func_0x00010b9a8d98(&uStack_40);
  return;
}



/* Entry: 108141564; end: 10814174b;  */

void FUN_108141564(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000108142014();
  lVar8 = *param_2;
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar8 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4 = (undefined8 *)0x10;
  uStack_48 = extraout_x8;
  __Znwm();
  *puVar4 = &PTR_FUN_110a27350;
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar8 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[1] = lVar8;
  puStack_50 = puVar4;
  FUN_1081412e8(&lStack_88,auStack_68);
  lStack_80 = lStack_88;
  lStack_88 = 0;
  uStack_90 = 0;
  FUN_1081fca48(&uStack_100,&lStack_80,0,&uStack_90);
  uStack_78 = uStack_100;
  uStack_100 = 0;
  FUN_108141888(&uStack_70,&uStack_78);
  func_0x0001081419f4(&uStack_78);
  func_0x000108141dd4(&uStack_100);
  func_0x000108141d9c(&uStack_90);
  func_0x0001081419f4(&lStack_80);
  func_0x000108141b00(&lStack_88);
  func_0x000108141abc(auStack_68);
  func_0x0001080dafac(lVar8);
  uStack_f8 = uStack_70;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_ac = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_70 = 0;
  uStack_108 = 0;
  FUN_10815b9a4(0);
  FUN_10815a63c(&lStack_88,&uStack_100,param_3,param_4);
  func_0x0001081419f4(&uStack_108);
  func_0x00010815a5d8(&uStack_100);
  if (lStack_88 == 0) {
    param_3 = (long *)&UNK_10f47bed1;
    func_0x00010b99f5f8(&uStack_100);
    uVar7 = uStack_100;
    uStack_100 = 0;
    func_0x000104bda960(0);
    uVar5 = 2;
  }
  else {
    FUN_1081418ec(&uStack_100,&lStack_88);
    uVar7 = uStack_100;
    uStack_100 = 0;
    FUN_10813e86c(0);
    uVar5 = 1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar7;
  FUN_108141b44(&lStack_88);
  puVar4 = &uStack_70;
  func_0x000108141a2c();
  func_0x000108141fec(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *puVar4 = &PTR_FUN_110a272a8;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0x32aaaba7;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  piVar6 = (int *)*param_3;
  if (piVar6 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = *piVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[0xc] = piVar6;
  puVar4[0xd] = *(undefined8 *)(*param_3 + 0x48);
  puVar4[0xe] = 0;
  uVar5 = *(undefined8 *)(*param_3 + 0x50);
  puVar4[0xf] = *(undefined8 *)(*param_3 + 0x30);
  puVar4[0x10] = uVar5;
  return;
}



/* Entry: 10814174c; end: 1081417af;  */

void FUN_10814174c(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_110a272a8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x32aaaba7;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  piVar3 = (int *)*param_2;
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
  param_1[0xc] = piVar3;
  param_1[0xd] = *(undefined8 *)(*param_2 + 0x48);
  param_1[0xe] = 0;
  uVar4 = *(undefined8 *)(*param_2 + 0x50);
  param_1[0xf] = *(undefined8 *)(*param_2 + 0x30);
  param_1[0x10] = uVar4;
  return;
}



/* Entry: 1081417b0; end: 108141887;  */

void FUN_1081417b0(undefined8 param_1,undefined8 param_2,float *param_3,double *param_4,int param_5)

{
  undefined8 uVar1;
  long unaff_x19;
  double dVar2;
  double dVar3;
  undefined1 auStack_68 [40];
  
  func_0x000108142060();
  dVar3 = *param_4;
  dVar2 = 0.0;
  if ((0.0 <= dVar3) &&
     (dVar2 = *(double *)(unaff_x19 + 0x68), dVar3 <= *(double *)(unaff_x19 + 0x68))) {
    dVar2 = dVar3;
  }
  *(double *)(unaff_x19 + 0x70) = dVar2;
  FUN_10815b330(*(undefined8 *)(unaff_x19 + 0x60),0);
  if (param_5 == 0) {
    func_0x0001081420f0(auStack_68,(param_3[2] - *param_3) / *(float *)(unaff_x19 + 0x78),
                        (param_3[3] - param_3[1]) / *(float *)(unaff_x19 + 0x7c),0,0);
    FUN_10833e2b0(param_2,auStack_68);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x60);
    param_3 = (float *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x60);
  }
  FUN_10815b198(uVar1,param_2,param_3,0);
  __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x18);
  return;
}



/* Entry: 108141888; end: 1081418eb;  */

void FUN_108141888(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_38;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x38;
    __Znwm();
    *param_2 = 0;
    lStack_38 = lVar2;
    FUN_1081fc724();
    func_0x0001081419f4(&lStack_38);
  }
  *param_1 = uVar1;
  return;
}



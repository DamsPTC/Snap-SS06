/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8dd930; end: 10b8dd9b3;  */

void FUN_10b8dd930(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  long *unaff_x20;
  byte unaff_w24;
  
  uVar2 = param_2;
  func_0x00010b8de08c();
  FUN_10b8dd84c();
  func_0x00010b8de220();
  FUN_10b8dd9b4();
  if ((uVar2 & 1) != 0) {
    FUN_10b8ddd18(unaff_x20[1] + param_1 * 0x28,param_2);
    *(byte *)(*unaff_x20 + param_1) = unaff_w24 & 0x7f;
    func_0x00010b8dde18();
  }
  lVar1 = unaff_x20[1];
  *unaff_x19 = *unaff_x20 + param_1;
  unaff_x19[1] = lVar1 + param_1 * 0x28;
  *(char *)(unaff_x19 + 2) = (char)uVar2;
  return;
}



/* Entry: 10b8dd9b4; end: 10b8dda4f;  */

undefined1  [16] FUN_10b8dd9b4(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong uVar3;
  long extraout_x9;
  long lVar4;
  ulong extraout_x10;
  ulong extraout_x11;
  long extraout_x12;
  long extraout_x13;
  long extraout_x14;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  func_0x00010b8ddf20();
  uVar5 = extraout_x8;
  lVar4 = extraout_x9;
  while( true ) {
    uVar5 = uVar5 & extraout_x10;
    uVar6 = *(ulong *)(extraout_x12 + uVar5);
    for (uVar1 = (uVar6 ^ extraout_x11) + extraout_x14 & (uVar6 ^ extraout_x11 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar1 != 0; uVar1 = uVar1 - 1 & uVar1) {
      uVar3 = (uVar1 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar5 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & extraout_x10;
      if (*(long *)(*(long *)(param_1 + 8) + uVar3 * 0x28) == extraout_x13) {
        uVar2 = 0;
        goto LAB_10b8dda30;
      }
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar4 = lVar4 + 8;
    uVar5 = lVar4 + uVar5;
  }
  FUN_10b8dda50();
  uVar2 = 1;
  uVar3 = param_1;
LAB_10b8dda30:
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = uVar3;
  return auVar7;
}



/* Entry: 10b8dda50; end: 10b8ddad7;  */

void FUN_10b8dda50(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b8ddff8();
  FUN_10b8ddad8();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(unaff_x21 + param_1) == -2) {
      lVar1 = 0;
    }
    else {
      if ((unaff_x22 == 0) || (unaff_x22 - (unaff_x22 >> 3) >> 1 < *(ulong *)(unaff_x19 + 0x10))) {
        FUN_10b8ddb08();
      }
      else {
        func_0x00010b8ddba4();
      }
      func_0x00010b8de200();
      FUN_10b8ddad8();
      lVar1 = *(long *)(unaff_x19 + 0x28);
    }
  }
  func_0x00010b8ddf70(lVar1);
  return;
}



/* Entry: 10b8ddad8; end: 10b8ddb07;  */

ulong FUN_10b8ddad8(long param_1,ulong param_2,ulong param_3)

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



/* Entry: 10b8ddb08; end: 10b8ddccb;  */

void FUN_10b8ddb08(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  
  func_0x00010b8de0fc();
  lVar2 = extraout_x8 + 0x10 + param_2 * 0x28;
  __Znwm(lVar2);
  func_0x00010b8de04c(lVar2 + extraout_x8 + 0x10);
  lVar2 = 0;
  func_0x00010b8de114();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8_00;
  }
  func_0x00010b8de1d8(uVar1);
  for (; unaff_x24 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar2)) {
      lVar3 = unaff_x21;
      FUN_10b8ddccc(unaff_x21);
      func_0x00010b8de138();
      FUN_10b8ddad8();
      func_0x00010b8ddeb0();
      FUN_10b8ddce8(extraout_x8_01 + lVar3 * 0x28,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x28;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8ddccc; end: 10b8ddce7;  */

void FUN_10b8ddccc(undefined8 *param_1)

{
  func_0x00010b8de0cc(param_1,*param_1);
  return;
}



/* Entry: 10b8ddce8; end: 10b8ddd17;  */

undefined8 FUN_10b8ddce8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  
  *param_1 = *param_2;
  *param_2 = 0;
  func_0x0001080e08ac(param_1 + 1,param_2 + 1);
  func_0x0001080e0bc0(param_2 + 1);
  func_0x00010007e5d0(param_2);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b8ddd18; end: 10b8ddd3b;  */

void FUN_10b8ddd18(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b8ddd3c(param_1,&uStack_18,&uStack_19);
  return;
}



/* Entry: 10b8ddd3c; end: 10b8ddd8f;  */

long * FUN_10b8ddd3c(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)*param_2;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  func_0x0001080e0180();
  return param_1;
}



/* Entry: 10b8ddd90; end: 10b8de233;  */

void FUN_10b8ddd90(void)

{
  return;
}



/* Entry: 10b8de234; end: 10b8de297;  */

undefined8 * FUN_10b8de234(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  func_0x0001080e0180(param_1 + 2);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0x10001;
  return param_1;
}



/* Entry: 10b8de298; end: 10b8de32b;  */

void FUN_10b8de298(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 unaff_x22;
  
  func_0x00010b8de840();
  func_0x000107c31068();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x30) = unaff_x22;
  *(undefined1 *)(param_1 + 0x48) = param_3;
  *(undefined1 *)(param_1 + 0x49) = param_4;
  *(undefined1 *)(param_1 + 0x4a) = param_5;
  return;
}



/* Entry: 10b8de32c; end: 10b8de453;  */

undefined8 FUN_10b8de32c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b8de3e4(param_1 + 0x10);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b8de454; end: 10b8de45b;  */

void FUN_10b8de454(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8de860(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x50;
    func_0x00010b8de270();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8de45c; end: 10b8de4b7;  */

void FUN_10b8de45c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8de860();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x50;
    func_0x00010b8de270();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8de4b8; end: 10b8de54b;  */

long FUN_10b8de4b8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010b8de860();
  FUN_10b8de5b0();
  FUN_10b8de694(auStack_58,param_1,(unaff_x20[1] - *unaff_x20) / 0x50,unaff_x20 + 2);
  FUN_10b8de54c(lStack_48);
  lStack_48 = lStack_48 + 0x50;
  FUN_10b8de600();
  lVar1 = unaff_x20[1];
  func_0x00010b8de7c8(auStack_58);
  return lVar1;
}



/* Entry: 10b8de54c; end: 10b8de5af;  */

long * FUN_10b8de54c(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_10b8dd210(param_1 + 2,param_2 + 2);
  lVar5 = param_2[7];
  lVar4 = param_2[6];
  uVar6 = *(undefined8 *)((long)param_2 + 0x3c);
  *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_2 + 0x44);
  *(undefined8 *)((long)param_1 + 0x3c) = uVar6;
  param_1[7] = lVar5;
  param_1[6] = lVar4;
  return param_1;
}



/* Entry: 10b8de5b0; end: 10b8de5ff;  */

long * FUN_10b8de5b0(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0x333333333333334) {
    uVar1 = (param_1[2] - *param_1) / 0x50;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x199999999999998 < uVar1) {
      plVar3 = (long *)0x333333333333333;
    }
    return plVar3;
  }
  FUN_10b8de688();
  func_0x00010b8de860();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x50) * 0x50;
  FUN_10b8de730(plVar3,*param_1,param_1[1],lVar4);
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



/* Entry: 10b8de600; end: 10b8de687;  */

void FUN_10b8de600(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010b8de860();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x50) * 0x50;
  FUN_10b8de730(param_1 + 2,*param_1,param_1[1],lVar2);
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



/* Entry: 10b8de688; end: 10b8de693;  */

long * FUN_10b8de688(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b8de6e0();
  }
  lVar1 = param_4 + param_3 * 0x50;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x50;
  return param_1;
}



/* Entry: 10b8de694; end: 10b8de703;  */

long * FUN_10b8de694(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b8de6e0();
  }
  lVar1 = param_4 + param_3 * 0x50;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x50;
  return param_1;
}



/* Entry: 10b8de704; end: 10b8de72f;  */

void FUN_10b8de704(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (0x333333333333333 < param_2) {
    func_0x000104bfe188();
    for (uVar1 = param_2; uVar1 != param_3; uVar1 = uVar1 + 0x50) {
      FUN_10b8de54c(param_4,uVar1);
      param_4 = param_4 + 0x50;
    }
    for (; param_2 != param_3; param_2 = param_2 + 0x50) {
      func_0x00010b8de270();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x50);
  return;
}



/* Entry: 10b8de730; end: 10b8de797;  */

void FUN_10b8de730(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (lVar1 = param_2; lVar1 != param_3; lVar1 = lVar1 + 0x50) {
    FUN_10b8de54c(param_4,lVar1);
    param_4 = param_4 + 0x50;
  }
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    func_0x00010b8de270();
  }
  return;
}



/* Entry: 10b8de798; end: 10b8de7f3;  */

void FUN_10b8de798(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    func_0x00010b8de270();
  }
  return;
}



/* Entry: 10b8de7f4; end: 10b8de7fb;  */

void FUN_10b8de7f4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8de860(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x50;
    func_0x00010b8de270();
  }
  return;
}



/* Entry: 10b8de7fc; end: 10b8de82f;  */

void FUN_10b8de7fc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8de860();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x50;
    func_0x00010b8de270();
  }
  return;
}



/* Entry: 10b8de830; end: 10b8de86b;  */

void FUN_10b8de830(void)

{
  return;
}



/* Entry: 10b8de86c; end: 10b8de963;  */

undefined8 * FUN_10b8de86c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  *param_1 = &PTR_DAT_110d726d0;
  param_1[1] = 1;
  uStack_40 = *(undefined1 *)(param_2 + 2);
  uStack_38 = param_2[3];
  uStack_30 = param_2[4];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_28 = 1;
  FUN_10b9a3a64(param_1 + 2,&uStack_50);
  param_1[5] = *param_3;
  (**(code **)(param_3[1] + 0x10))(param_1 + 6,param_3 + 1);
  return param_1;
}



/* Entry: 10b8de964; end: 10b8dea77;  */

undefined8 *
FUN_10b8de964(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110d740e8;
  param_1[1] = 1;
  puVar4 = param_1;
  func_0x00010b8c2aac();
  func_0x00010b8c3770();
  plVar5 = (long *)*param_2;
  if (plVar5 == (long *)0x0) {
    func_0x00010b8df75c();
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
    func_0x00010b8df75c();
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  func_0x000105276914(puVar4);
  *param_1 = &PTR_DAT_110d72728;
  param_1[2] = &PTR_DAT_110d72770;
  func_0x0001080e0b64(param_1 + 5,param_4);
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = param_3;
  return param_1;
}



/* Entry: 10b8dea78; end: 10b8dea7f;  */

long FUN_10b8dea78(long param_1)

{
  return param_1 + 0x28;
}



/* Entry: 10b8dea80; end: 10b8deb7b;  */

void FUN_10b8dea80(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long *aplStack_50 [4];
  
  if (param_5 == 0) {
    func_0x00010b8c3a74(aplStack_50,param_2 + 0x10);
  }
  else {
    func_0x00010b8c3ab0();
  }
  FUN_10b8deb7c(param_1,aplStack_50);
  plVar1 = aplStack_50[0];
  if (aplStack_50[0] != (long *)0x0) {
    (**(code **)(*aplStack_50[0] + 0x18))();
  }
  if (*param_1 == 0) {
    func_0x000107c31084();
    FUN_10b98ca00(auStack_88,*(undefined8 *)(param_2 + 0x18));
    FUN_10b8df1fc(aplStack_50,param_2 + 0x28,auStack_88);
    func_0x000107c2793c(&UNK_10f7cb888);
    func_0x000107c3173c(auStack_70);
    func_0x000107c31080(&uStack_58,plVar1,auStack_70);
    FUN_10b99f560(aplStack_50,&uStack_58);
    FUN_10b99ff08(param_4,aplStack_50);
    func_0x000104bda960(aplStack_50[0]);
    func_0x000107c278f8(uStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  }
  return;
}



/* Entry: 10b8deb7c; end: 10b8dec17;  */

void FUN_10b8deb7c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if ((lVar4 != 0) && (___dynamic_cast(lVar4,&PTR_DAT_1107e3600,&PTR_DAT_110d7ed28,0), lVar4 != 0))
  {
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
  *param_1 = lVar4;
  return;
}



/* Entry: 10b8dec18; end: 10b8ded73;  */

void FUN_10b8dec18(undefined8 *param_1,long param_2,long *param_3)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [88];
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = param_2;
  func_0x00010b8df76c();
  iVar1 = (int)lVar4;
  auStack_a8[0] = 0;
  uStack_50 = 0;
  uStack_48 = extraout_x8;
  func_0x000105c3b044();
  if (iVar1 != 0) {
    lVar4 = param_2;
    func_0x00010b8debd4(param_2);
    func_0x00010b9a7520(auStack_c8,&UNK_10f7cb8ee,0x16,lVar4);
    func_0x00010b8a6ed0(auStack_a8,auStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  }
  FUN_10b8dea80(&plStack_d0,param_2);
  if ((*(byte *)(param_3[3] + 8) & 1) == 0) {
    lVar4 = *param_3;
    *param_1 = *(undefined8 *)(lVar4 + 0x140);
    uVar6 = *(undefined8 *)(lVar4 + 0x148);
    param_1[2] = *(undefined8 *)(lVar4 + 0x150);
    param_1[1] = uVar6;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    plVar5 = (long *)(param_2 + 0x18);
    lVar4 = *plVar5;
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x118), lVar4 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar4 + 0x148);
    }
    func_0x00010b8debd4(param_2);
    FUN_10b8df048(auStack_c8,uVar6,param_2);
    plVar2 = plStack_d0;
    (**(code **)(*plStack_d0 + 0x30))();
    if ((int)plVar2 == 0) {
      func_0x00010b8df6f0();
    }
    else {
      func_0x00010b8c3d48(auStack_b0,plVar5);
      func_0x00010b8df6f0();
      func_0x00010b8c3d80(auStack_b0);
    }
    FUN_10b8df100(auStack_c8);
  }
  func_0x000104bda3ac(plStack_d0);
  puVar3 = (undefined8 *)auStack_a8;
  func_0x0001080e8dd4();
  func_0x00010b8df71c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b8de964();
  *puVar3 = &PTR_FUN_110d72798;
  puVar3[2] = &PTR_FUN_110d727e0;
  return;
}



/* Entry: 10b8ded74; end: 10b8deda3;  */

void FUN_10b8ded74(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b8de964(param_1,param_2,0,param_3);
  *param_1 = &PTR_FUN_110d72798;
  param_1[2] = &PTR_FUN_110d727e0;
  return;
}



/* Entry: 10b8deda4; end: 10b8defb3;  */

undefined1 **
FUN_10b8deda4(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4,long *param_5)

{
  undefined1 **ppuVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  long **pplVar8;
  undefined8 extraout_x8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 **ppuStack_228;
  long *plStack_220;
  undefined8 *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 uStack_1d0;
  long *aplStack_1c8 [2];
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  long *plStack_188;
  undefined1 *puStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined1 uStack_130;
  undefined1 auStack_128 [32];
  undefined1 uStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [128];
  undefined8 uStack_68;
  
  func_0x00010b8df76c();
  lStack_1b0 = param_2 + 0x28;
  uStack_1b8 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  puStack_100 = auStack_e8;
  uStack_f0 = 8;
  uStack_f8 = 0;
  uStack_68 = extraout_x8;
  func_0x00010b8df784();
  if ((int)param_2 != 0) {
    func_0x000108113490(&uStack_160,&UNK_10f7cb905);
  }
  puVar10 = (undefined1 *)0x0;
  puVar11 = (undefined1 *)param_5[2];
  do {
    uVar3 = puVar11 == puVar10;
    if ((bool)uVar3) {
      func_0x00010b8df77c();
      lStack_170 = param_5[3];
      plStack_188 = (long *)((ulong)plStack_188 & 0xffffffffffffff00);
      puStack_180 = puStack_100;
      uStack_178 = uStack_f8;
      plVar5 = (long *)*param_3;
      uStack_168 = param_4;
      (**(code **)(*plVar5 + 0x20))(aplStack_1c8,plVar5,&plStack_188);
      iVar4 = (int)plVar5;
      func_0x00010b8df784();
      if (iVar4 != 0) {
        func_0x0001080e8d4c(&uStack_160);
        uStack_160 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        puStack_148 = &UNK_10f7cb91d;
        uStack_140 = 0xd;
        uStack_138 = 0;
        uStack_130 = 0;
        FUN_10bd3f3dc(auStack_128,&UNK_10f7cb91d,0xd);
        FUN_10b9a7630(&uStack_160);
        uStack_108 = 1;
      }
      puStack_1f8 = &uStack_1b8;
      uStack_1f0 = 0;
      uStack_1e8 = 3;
      uStack_1e0 = 0;
      puStack_1d8 = (undefined1 *)0x0;
      uStack_1d0 = 0;
      pplVar8 = aplStack_1c8;
      FUN_10b900bd0(param_1,*param_5,pplVar8,&puStack_1f8,param_5[3]);
      func_0x00010b8df77c();
      FUN_10b9a8d98(aplStack_1c8);
      goto LAB_10b8def7c;
    }
    plVar5 = param_5;
    puVar7 = puVar10;
    FUN_10b8e5ce4();
    uStack_1f0 = 0;
    uStack_1e8 = 4;
    uStack_1e0 = 0;
    uStack_1d0 = 0;
    pplVar8 = &plStack_188;
    puStack_1f8 = &uStack_1b8;
    puStack_1d8 = puVar10;
    plStack_188 = plVar5;
    puStack_180 = puVar7;
    FUN_10b9018fc(aplStack_1c8,*param_5,pplVar8,&puStack_1f8,param_5[3]);
    bVar2 = *(byte *)(param_5[3] + 8);
    if ((bVar2 & 1) == 0) {
      lVar9 = *param_5;
      *param_1 = *(undefined8 *)(lVar9 + 0x140);
      uVar12 = *(undefined8 *)(lVar9 + 0x148);
      param_1[2] = *(undefined8 *)(lVar9 + 0x150);
      param_1[1] = uVar12;
      *(undefined1 *)(param_1 + 3) = 0;
    }
    else {
      pplVar8 = aplStack_1c8;
      FUN_10b8defb4(&puStack_100,pplVar8);
    }
    FUN_10b9a8d98(aplStack_1c8);
    puVar10 = puVar10 + 1;
  } while ((bVar2 & 1) != 0);
  func_0x00010b8df77c();
LAB_10b8def7c:
  ppuVar6 = &puStack_100;
  func_0x00010b8df154();
  func_0x00010b8df71c(uStack_68);
  if ((bool)uVar3) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_10b8defb4;
  ppuVar1 = (undefined1 **)(*ppuVar6 + (long)ppuVar6[1] * 0x10);
  plStack_220 = param_5;
  puStack_218 = param_1;
  puStack_210 = &stack0xfffffffffffffff0;
  if (ppuVar6[1] == ppuVar6[2]) {
    FUN_10b8df414(&ppuStack_228,ppuVar6,ppuVar1,1);
  }
  else {
    func_0x00010b9a8fa8(ppuVar1,pplVar8);
    ppuVar6[1] = ppuVar6[1] + 1;
    ppuStack_228 = ppuVar1;
  }
  return ppuStack_228;
}



/* Entry: 10b8defb4; end: 10b8df01f;  */

long FUN_10b8defb4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1 + param_1[1] * 0x10;
  if (param_1[1] == param_1[2]) {
    FUN_10b8df414(&lStack_28,param_1,lVar1,1);
  }
  else {
    func_0x00010b9a8fa8(lVar1,param_2);
    param_1[1] = param_1[1] + 1;
    lStack_28 = lVar1;
  }
  return lStack_28;
}



/* Entry: 10b8df020; end: 10b8df023;  */

undefined8 * FUN_10b8df020(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d72728;
  param_1[2] = &PTR_DAT_110d72770;
  func_0x000107c278f4(param_1 + 8);
  FUN_10b9a3d64(param_1 + 6);
  func_0x00010b8c39c8(param_1 + 2);
  return param_1;
}



/* Entry: 10b8df024; end: 10b8df037;  */

void FUN_10b8df024(void)

{
  func_0x00010b8dea24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8df038; end: 10b8df047;  */

undefined8 * FUN_10b8df038(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110d72728;
  *param_1 = &PTR_DAT_110d72770;
  func_0x000107c278f4(param_1 + 6);
  FUN_10b9a3d64(param_1 + 4);
  func_0x00010b8c39c8(param_1);
  return param_1 + -2;
}



/* Entry: 10b8df048; end: 10b8df0ff;  */

long * FUN_10b8df048(long *param_1,long param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  param_1[1] = 0;
  *param_1 = 0;
  if ((((param_2 != 0) && (*param_3 != 0)) && (*(int *)(*param_3 + 0xc) != 0)) &&
     (*(char *)(param_2 + 0x370) == '\x01')) {
    plVar4 = *(long **)(param_2 + 0x360);
    (**(code **)(*plVar4 + 0x40))();
    if ((int)plVar4 != 0) {
      *param_1 = param_2;
      lStack_40 = *param_3;
      if (lStack_40 != 0) {
        piVar1 = (int *)(lStack_40 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10b8f4bb4(auStack_38,param_2,&lStack_40);
      func_0x000107c31060(param_1 + 1,auStack_38);
      func_0x00010b8df79c();
      func_0x000107c278f8(lStack_40);
    }
  }
  return param_1;
}



/* Entry: 10b8df100; end: 10b8df1df;  */

long * FUN_10b8df100(long *param_1)

{
  long lStack_30;
  undefined1 auStack_28 [8];
  
  if (*param_1 != 0) {
    lStack_30 = param_1[1];
    param_1[1] = 0;
    FUN_10b8f4bb4(auStack_28,*param_1,&lStack_30);
    func_0x00010b8df79c();
    func_0x000107c278f8(lStack_30);
  }
  func_0x000107c278f4(param_1 + 1);
  return param_1;
}



/* Entry: 10b8df1e0; end: 10b8df1fb;  */

void FUN_10b8df1e0(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8df1fc; end: 10b8df2a3;  */

undefined8 * FUN_10b8df1fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c27e5c();
  *param_1 = param_2;
  param_1[1] = 0x10b8df238;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 10b8df2a4; end: 10b8df343;  */

undefined1 * FUN_10b8df2a4(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [8];
  long alStack_390 [20];
  undefined1 auStack_2f0 [72];
  long lStack_2a8;
  undefined1 *puStack_260;
  undefined8 uStack_258;
  undefined **ppuStack_250;
  undefined1 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [504];
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_260;
  func_0x00010b8df76c();
  puStack_248 = auStack_230;
  ppuStack_250 = &PTR_DAT_11099bc38;
  uStack_238 = 500;
  uStack_240 = 0;
  uStack_38 = extraout_x8;
  FUN_10b8df344(&ppuStack_250);
  puStack_260 = puStack_248;
  uStack_258 = uStack_240;
  func_0x000107c28388(param_1,&puStack_260);
  pppuVar1 = &ppuStack_250;
  func_0x000107c283e8();
  func_0x00010b8df71c(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  lStack_2a8 = param_3;
  func_0x000107c284f4(auStack_2f0,pppuVar1);
  func_0x000107c284ec(alStack_390,auStack_2f0);
  if (param_3 != 0) {
    lVar4 = *(long *)(alStack_390[0] + -0x18);
    func_0x00010bd490d0(auStack_3a0,&lStack_2a8);
    func_0x0001080c9df4(auStack_398,(long)alStack_390 + lVar4,auStack_3a0);
    __ZNSt3__16localeD1Ev(auStack_398);
    __ZNSt3__16localeD1Ev(auStack_3a0);
  }
  FUN_10b9a3d38(alStack_390,ppuVar3);
  func_0x000107c284fc((long)alStack_390 + *(long *)(alStack_390[0] + -0x18),5);
  func_0x000107c283e0(pppuVar1,pppuVar1[2]);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(alStack_390);
  puVar2 = auStack_2f0;
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(puVar2);
  return puVar2;
}



/* Entry: 10b8df344; end: 10b8df413;  */

void FUN_10b8df344(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  long alStack_130 [20];
  undefined1 auStack_90 [72];
  long lStack_48;
  
  lStack_48 = param_3;
  func_0x000107c284f4(auStack_90,param_1);
  func_0x000107c284ec(alStack_130,auStack_90);
  if (param_3 != 0) {
    lVar1 = *(long *)(alStack_130[0] + -0x18);
    func_0x00010bd490d0(auStack_140,&lStack_48);
    func_0x0001080c9df4(auStack_138,(long)alStack_130 + lVar1,auStack_140);
    __ZNSt3__16localeD1Ev(auStack_138);
    __ZNSt3__16localeD1Ev(auStack_140);
  }
  FUN_10b9a3d38(alStack_130,param_2);
  func_0x000107c284fc((long)alStack_130 + *(long *)(alStack_130[0] + -0x18),5);
  func_0x000107c283e0(param_1,*(undefined8 *)(param_1 + 0x10));
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(alStack_130);
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(auStack_90);
  return;
}



/* Entry: 10b8df414; end: 10b8df49f;  */

void FUN_10b8df414(long *param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_2;
  plVar1 = param_2;
  FUN_10b8df4a0(param_2,param_4);
  plVar2 = param_2;
  func_0x00010b8df508(param_2,plVar1);
  FUN_10b8df520(param_2,plVar2,plVar1,param_3,param_4,param_5);
  *param_1 = *param_2 + (param_3 - lVar3);
  return;
}



/* Entry: 10b8df4a0; end: 10b8df51f;  */

undefined8 *
FUN_10b8df4a0(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5,
             long param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  uVar2 = param_1[2];
  if ((param_2 - uVar2) + param_1[1] <= 0x7ffffffffffffff - uVar2) {
    if (uVar2 >> 0x3d == 0) {
      puVar4 = (undefined8 *)((uVar2 << 3) / 5);
    }
    else {
      puVar4 = (undefined8 *)(uVar2 << 3);
      if (4 < uVar2 >> 0x3d) {
        puVar4 = (undefined8 *)0xffffffffffffffff;
      }
    }
    puVar1 = (undefined8 *)(param_1[1] + param_2);
    if ((undefined8 *)0x7fffffffffffffe < puVar4) {
      puVar4 = (undefined8 *)0x7ffffffffffffff;
    }
    if (puVar1 <= puVar4) {
      puVar1 = puVar4;
    }
    return puVar1;
  }
  _abort();
  if (param_2 >> 0x3b == 0) {
    if (param_2 >> 0x3b == 0) {
      puVar4 = (undefined8 *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___Znwm_110352280)(puVar4);
      return puVar4;
    }
    func_0x00010772e264();
    puVar3 = param_1;
    puStack_68 = param_1;
    FUN_10b8df63c();
    func_0x00010b9a8fa8();
    FUN_10b8df63c(param_1,param_3,param_4,puVar3 + param_6 * 2);
    uStack_78 = 0;
    puStack_70 = (ulong *)0x0;
    puVar4 = &uStack_78;
    func_0x00010b8df678(puVar4);
  }
  else {
    _abort();
    uVar2 = *param_1;
    puStack_70 = param_1;
    puStack_68 = (ulong *)param_3;
    FUN_10b8df5d4();
    uStack_78 = 0;
    if (uVar2 != 0) {
      func_0x00010b8df17c(param_1,uVar2,param_1[1]);
      FUN_10b8df1e0(param_1,param_1,param_1[2]);
    }
    *param_1 = param_2;
    param_1[1] = param_1[1] + param_5;
    param_1[2] = param_3;
    puVar4 = &uStack_78;
    func_0x00010b8df6b8(puVar4);
  }
  return puVar4;
}



/* Entry: 10b8df520; end: 10b8df5b7;  */

void FUN_10b8df520(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_48;
  
  lVar1 = *param_1;
  plStack_50 = param_1;
  lStack_48 = param_3;
  FUN_10b8df5d4(param_1,lVar1,param_4,lVar1 + param_1[1] * 0x10,param_2,param_5,param_6);
  uStack_58 = 0;
  if (lVar1 != 0) {
    func_0x00010b8df17c(param_1,lVar1,param_1[1]);
    FUN_10b8df1e0(param_1,param_1,param_1[2]);
  }
  *param_1 = param_2;
  param_1[1] = param_1[1] + param_5;
  param_1[2] = param_3;
  func_0x00010b8df6b8(&uStack_58);
  return;
}



/* Entry: 10b8df5b8; end: 10b8df5d3;  */

void FUN_10b8df5b8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x00010772e264();
  lVar1 = param_1;
  lStack_58 = param_1;
  FUN_10b8df63c();
  func_0x00010b9a8fa8();
  FUN_10b8df63c(param_1,param_3,param_4,lVar1 + param_6 * 0x10);
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x00010b8df678(&uStack_68);
  return;
}



/* Entry: 10b8df5d4; end: 10b8df63b;  */

void FUN_10b8df5d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  lStack_48 = param_1;
  FUN_10b8df63c();
  func_0x00010b9a8fa8();
  FUN_10b8df63c(param_1,param_3,param_4,lVar1 + param_6 * 0x10);
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x00010b8df678(&uStack_58);
  return;
}



/* Entry: 10b8df63c; end: 10b8df6ef;  */

void FUN_10b8df63c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    func_0x00010b9a8fa8(param_4,param_2);
    param_4 = param_4 + 0x10;
  }
  return;
}



/* Entry: 10b8df6f0; end: 10b8df7a3;  */

void FUN_10b8df6f0(void)

{
  long *unaff_x21;
  
                    /* WARNING: Could not recover jumptable at 0x00010b8df70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x21 + 0x30))();
  return;
}



/* Entry: 10b8df7a4; end: 10b8e0ddf;  */

undefined8 *
FUN_10b8df7a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_a0 [48];
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  *param_1 = &PTR_DAT_110d72858;
  param_1[1] = 1;
  param_1[2] = *param_2;
  *param_2 = 0;
  plVar1 = (long *)*param_3;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  param_1[3] = plVar1;
  param_1[4] = param_4;
  func_0x00010b8dfa04();
  uStack_68 = 0;
  uStack_60 = 1;
  uStack_50 = 0;
  uStack_48 = 1;
  puStack_70 = auStack_a0;
  puStack_58 = param_1 + 2;
  FUN_10b9a3a64(param_1 + 5,&puStack_70);
  return param_1;
}



/* Entry: 10b8e0de0; end: 10b8e0ec7;  */

undefined8 *
FUN_10b8e0de0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
             int param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_48;
  
  *param_1 = &PTR_FUN_110d72af8;
  puVar1 = param_1;
  func_0x00010b8c2aac();
  func_0x00010b8c3770();
  param_1[1] = puVar1;
  FUN_10b8e0ec8(param_1 + 2,*(undefined8 *)(param_2 + 0x18));
  lVar2 = param_2;
  FUN_10b8dcc38(param_2,param_3);
  param_1[4] = lVar2;
  func_0x0001080e0b64(param_1 + 5,param_4);
  param_1[8] = 0;
  func_0x00010b949a40(param_1[1] + 0x120,param_1);
  if (param_6 != 0) {
    plVar3 = (long *)(param_5 + 0x48);
    if ((*plVar3 == 0) && (*(long **)(param_2 + 0x20) != (long *)0x0)) {
      (**(code **)(**(long **)(param_2 + 0x20) + 0x18))(&uStack_48);
      func_0x00010b900184(plVar3,&uStack_48);
      FUN_10b8e15c0(uStack_48);
    }
    func_0x00010b8e0f0c(param_1 + 8,plVar3);
  }
  return param_1;
}



/* Entry: 10b8e0ec8; end: 10b8e0f57;  */

void FUN_10b8e0ec8(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_10b8e14ec(&uStack_30);
  param_1[1] = lStack_28;
  *param_1 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x00010b8e17e0();
    } while (extraout_w10 != 0);
  }
  func_0x00010b8e1830();
  return;
}



/* Entry: 10b8e0f58; end: 10b8e10eb;  */

undefined8 * FUN_10b8e0f58(undefined8 *param_1)

{
  long *plVar1;
  long lStack_40;
  undefined1 uStack_38;
  
  *param_1 = &PTR_FUN_110d72af8;
  plVar1 = param_1 + 1;
  func_0x00010b949adc(*plVar1 + 0x120,param_1);
  lStack_40 = *plVar1 + 0x70;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  func_0x00010b8e0ff8(param_1,&lStack_40);
  func_0x0001080eb338(&lStack_40);
  func_0x00010b8e159c(param_1 + 8);
  FUN_10b9a3d64(param_1 + 6);
  func_0x00010b8e1574(param_1 + 2);
  func_0x0001052768f0(plVar1);
  return param_1;
}



/* Entry: 10b8e10ec; end: 10b8e10ef;  */

undefined8 * FUN_10b8e10ec(undefined8 *param_1)

{
  long *plVar1;
  long lStack_40;
  undefined1 uStack_38;
  
  *param_1 = &PTR_FUN_110d72af8;
  plVar1 = param_1 + 1;
  func_0x00010b949adc(*plVar1 + 0x120,param_1);
  lStack_40 = *plVar1 + 0x70;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  func_0x00010b8e0ff8(param_1,&lStack_40);
  func_0x0001080eb338(&lStack_40);
  func_0x00010b8e159c(param_1 + 8);
  FUN_10b9a3d64(param_1 + 6);
  func_0x00010b8e1574(param_1 + 2);
  func_0x0001052768f0(plVar1);
  return param_1;
}



/* Entry: 10b8e10f0; end: 10b8e1103;  */

void FUN_10b8e10f0(void)

{
  FUN_10b8e0f58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8e1104; end: 10b8e129b;  */

long * FUN_10b8e1104(void)

{
  undefined8 uStack_30;
  
  func_0x00010b8e181c();
  if (uStack_30 == (long *)0x0) {
    uStack_30 = (long *)0x1;
  }
  else {
    (**(code **)(*uStack_30 + 0x30))();
  }
  func_0x00010b8e1830();
  return uStack_30;
}



/* Entry: 10b8e129c; end: 10b8e13d3;  */

void FUN_10b8e129c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long lStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  undefined8 auStack_a8 [3];
  long alStack_90 [5];
  long lStack_61;
  undefined8 uStack_59;
  byte bStack_51;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  lVar4 = param_1;
  func_0x00010b8e1838();
  uVar5 = extraout_x9;
  uStack_38 = extraout_x8;
  FUN_10b8dcd48(&lStack_61,extraout_x9,lVar4 + 0x20);
  if ((bStack_51 & 1) == 0) {
    func_0x000107c31084();
    FUN_10b98ca00(auStack_c0,*(undefined8 *)(param_1 + 8));
    FUN_10b8e15ec(alStack_90,param_1 + 0x28,auStack_c0);
    func_0x000107c2793c(&UNK_10f7cb932);
    func_0x000107c3173c(auStack_a8);
    func_0x000107c31080(alStack_90,uVar5,auStack_a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
    if (alStack_90[0] != 0) {
      piVar1 = (int *)(alStack_90[0] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_c8 = alStack_90[0];
    FUN_10b99f6a4(auStack_a8,&lStack_c8,3);
    func_0x00010b8e11c0(param_1,param_3,auStack_a8);
    func_0x000104bda960(auStack_a8[0]);
    func_0x000107c278f8(lStack_c8);
    lStack_50 = 0;
    uStack_48 = 0;
    func_0x0001080e01a8(&lStack_50);
    func_0x000107c278f8(alStack_90[0]);
  }
  else {
    uStack_48 = uStack_59;
    lStack_50 = lStack_61;
  }
  lVar4 = lStack_50;
  uVar5 = uStack_48;
  func_0x00010b8e1808(uStack_38,lStack_50,uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_10b8e13d4;
  lStack_100 = *(long *)(lVar4 + 8) + 0x70;
  uStack_f8 = 1;
  lStack_f0 = param_1;
  uStack_e8 = param_3;
  puStack_e0 = &stack0xfffffffffffffff0;
  __ZNSt3__15mutex4lockEv();
  lStack_108 = *(long *)(lVar4 + 0x20);
  if (lStack_108 != 0) {
    *(undefined8 *)(lVar4 + 0x20) = 0;
    FUN_10b8dcc7c(uVar5,&lStack_108);
  }
  func_0x0001080eb338(&lStack_100);
  return;
}



/* Entry: 10b8e13d4; end: 10b8e1437;  */

void FUN_10b8e13d4(long param_1,undefined8 param_2)

{
  long lStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = *(long *)(param_1 + 8) + 0x70;
  uStack_28 = 1;
  __ZNSt3__15mutex4lockEv();
  lStack_38 = *(long *)(param_1 + 0x20);
  if (lStack_38 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_10b8dcc7c(param_2,&lStack_38);
  }
  func_0x0001080eb338(&lStack_30);
  return;
}



/* Entry: 10b8e1438; end: 10b8e143b;  */

/* WARNING: Possible PIC construction at 0x00010b8e0fb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8e0fb8) */

void FUN_10b8e1438(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(long **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
    func_0x00010b8e1838();
    *(undefined8 *)(puVar1 + -0x38) = extraout_x8;
    lVar3 = param_1[4];
    if (lVar3 != 0) {
      param_1[4] = 0;
      func_0x00010b8e181c();
      if (*(long *)(puVar1 + -0x80) != 0) {
        param_1 = (undefined8 *)param_1[1];
        if ((param_1 != (undefined8 *)0x0) && (param_1[2] != 0)) {
          do {
            func_0x00010b8e17e0();
          } while (extraout_w10 != 0);
        }
        func_0x0001080ea3b0(param_2);
        if ((param_1 != (undefined8 *)0x0) && (param_1[2] != 0)) {
          do {
            func_0x00010b8e17e0();
          } while (extraout_w10_00 != 0);
        }
        param_2 = (undefined8 *)(puVar1 + -0x68);
        *(undefined8 **)(puVar1 + -0x70) = param_1;
        *(code **)(puVar1 + -0x68) = FUN_10b8e14d4;
        *(undefined ***)(puVar1 + -0x60) = &PTR_DAT_110d72b48;
        *(long *)(puVar1 + -0x58) = lVar3;
        func_0x0001080d3888();
        (*(code *)**(undefined8 **)(puVar1 + -0x60))(puVar1 + -0x60);
        func_0x000105276914(*(undefined8 *)(puVar1 + -0x70));
        func_0x000105276914(param_1);
      }
      func_0x00010b8e1830();
      unaff_x19 = param_1;
      unaff_x20 = param_2;
    }
    bVar2 = lVar3 == 0;
    param_1 = (undefined8 *)(ulong)!bVar2;
    func_0x00010b8e1808(*(undefined8 *)(puVar1 + -0x38));
    if (bVar2) break;
    ___stack_chk_fail();
    param_2 = (undefined8 *)(puVar1 + -0xc0);
    *(undefined8 *)(puVar1 + -0xb0) = unaff_x22;
    *(long *)(puVar1 + -0xa8) = lVar3;
    *(undefined8 **)(puVar1 + -0xa0) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x88) = FUN_10b8e10ec;
    unaff_x29 = puVar1 + -0x90;
    unaff_x20 = param_1 + 2;
    *param_1 = &PTR_FUN_110d72af8;
    unaff_x21 = param_1 + 1;
    func_0x00010b949adc(*unaff_x21 + 0x120,param_1);
    *(long *)(puVar1 + -0xc0) = *unaff_x21 + 0x70;
    puVar1[-0xb8] = 1;
    __ZNSt3__15mutex4lockEv();
    unaff_x30 = 0x10b8e0fb8;
    puVar1 = puVar1 + -0xc0;
    unaff_x19 = param_1;
  }
  return;
}



/* Entry: 10b8e143c; end: 10b8e14d3;  */

void FUN_10b8e143c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined1 uStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  
  uStack_80 = *(undefined1 *)(param_4 + 2);
  uStack_78 = param_4[3];
  uStack_70 = param_4[4];
  uStack_88 = param_4[1];
  uStack_90 = *param_4;
  uStack_68 = 1;
  FUN_10b9a3a64(auStack_58,&uStack_90);
  uStack_91 = 1;
  FUN_10b8e1630(param_1,param_2,param_3,auStack_58,param_5,&uStack_91);
  FUN_10b9a3d64(auStack_50);
  return;
}



/* Entry: 10b8e14d4; end: 10b8e14eb;  */

int * FUN_10b8e14d4(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  lVar4 = *param_1;
  lVar2 = lVar4;
  plVar5 = (long *)(param_2 + 0x10);
  func_0x00010b8dddd0();
  uStack_38 = extraout_x8;
  FUN_10b8dcd08();
  if (lVar2 != 0) {
    plVar5 = *(long **)(param_2 + 0x10);
    FUN_10b9a57c8(lVar4 + 0xa0);
    uStack_48 = *(undefined8 *)(lVar2 + 0xc);
    uStack_50 = *(undefined8 *)(lVar2 + 4);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010b8dcf04(&uStack_68);
    func_0x00010b8ddf04(uStack_58,uStack_68);
  }
  bVar1 = lVar2 == 0;
  piVar3 = (int *)(ulong)!bVar1;
  func_0x00010b8ddd90(uStack_38);
  if (!bVar1) {
    ___stack_chk_fail();
    if ((ulong)((*(long *)(piVar3 + 0x24) - *(long *)(piVar3 + 0x22)) / 0x14) <=
        (ulong)*(uint *)((long)plVar5 + 4)) {
      return (int *)0x0;
    }
    piVar3 = (int *)(*(long *)(piVar3 + 0x22) + (ulong)*(uint *)((long)plVar5 + 4) * 0x14);
    if (*piVar3 != *(int *)plVar5) {
      piVar3 = (int *)0x0;
    }
    return piVar3;
  }
  return piVar3;
}



/* Entry: 10b8e14ec; end: 10b8e15bf;  */

void FUN_10b8e14ec(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x00010b8e17e0();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x000107c278f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        do {
          func_0x00010b8e17e0();
        } while (extraout_w10 != 0);
      }
    }
    func_0x000107c284e8(&lStack_30);
  }
  return;
}



/* Entry: 10b8e15c0; end: 10b8e15eb;  */

void FUN_10b8e15c0(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010b8e15e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8e15ec; end: 10b8e162f;  */

undefined8 * FUN_10b8e15ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c27e5c();
  *param_1 = param_2;
  param_1[1] = 0x10b8df238;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 10b8e1630; end: 10b8e1663;  */

void FUN_10b8e1630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uStack_11;
  
  FUN_10b8e1664(&uStack_11,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10b8e1664; end: 10b8e1703;  */

undefined1 *
FUN_10b8e1664(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_60;
  func_0x00010b8e1838();
  uStack_48 = extraout_x8;
  FUN_10b8e1704(auStack_60,1);
  FUN_10b8e1758(lStack_50,param_3,param_4,param_5,param_6,param_7);
  lVar1 = lStack_50;
  lStack_50 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010b8e17d0();
  func_0x00010b8e1808(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_10b8e172c();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 10b8e1704; end: 10b8e172b;  */

long FUN_10b8e1704(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b8e172c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b8e172c; end: 10b8e1757;  */

undefined8 * FUN_10b8e172c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    puVar1 = (undefined8 *)(param_2 * 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d72b78;
  param_1[1] = 0;
  func_0x00010b8e17b4(param_1 + 3);
  return param_1;
}



/* Entry: 10b8e1758; end: 10b8e178b;  */

undefined8 * FUN_10b8e1758(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d72b78;
  param_1[1] = 0;
  func_0x00010b8e17b4(param_1 + 3);
  return param_1;
}



/* Entry: 10b8e178c; end: 10b8e178f;  */

void FUN_10b8e178c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d72b78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8e1790; end: 10b8e17a3;  */

void FUN_10b8e1790(void)

{
  func_0x00010b8e17bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8e17a4; end: 10b8e188b;  */

void FUN_10b8e17a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8e17ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8e188c; end: 10b8e19c7;  */

undefined8 * FUN_10b8e188c(undefined8 *param_1,long *param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_110d72bc8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x32aaaba7;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  uVar1 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010b8e2d88();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[0xc] = uVar1;
  param_1[0xe] = CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(uVar13,
                                                  CONCAT12(uVar12,CONCAT11(uVar11,uVar10)))))));
  param_1[0xd] = CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(uVar6,CONCAT13(uVar5,CONCAT12
                                                  (uVar4,CONCAT11(uVar3,uVar2)))))));
  param_1[0x10] =
       CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(uVar13,CONCAT12(
                                                  uVar12,CONCAT11(uVar11,uVar10)))))));
  param_1[0xf] = CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(uVar6,CONCAT13(uVar5,CONCAT12
                                                  (uVar4,CONCAT11(uVar3,uVar2)))))));
  param_1[0x12] =
       CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(uVar13,CONCAT12(
                                                  uVar12,CONCAT11(uVar11,uVar10)))))));
  param_1[0x11] =
       CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(uVar6,CONCAT13(uVar5,CONCAT12(uVar4,
                                                  CONCAT11(uVar3,uVar2)))))));
  func_0x000107c31088(&uStack_28,&UNK_10f7cb990);
  func_0x000107c31034(param_1 + 0x13,&uStack_28,2);
  func_0x000107c278f8(uStack_28);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 1000000000;
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 199) = 0;
  return param_1;
}



/* Entry: 10b8e19c8; end: 10b8e19cb;  */

undefined8 * FUN_10b8e19c8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110d72bc8;
  (**(code **)(*(long *)param_1[0x13] + 0x48))();
  func_0x00010b8e2b74(param_1[0x15]);
  func_0x000104bd4728(param_1 + 0x14);
  func_0x000104bd5214(param_1 + 0x13);
  func_0x0001080c577c(param_1 + 0x10);
  plVar1 = param_1 + 0xd;
  if (*plVar1 != 0) {
    func_0x00010b8e1ea8(plVar1);
    __ZdlPv(*plVar1);
  }
  func_0x000108129394(param_1 + 0xc);
  FUN_10b9a1f08(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b8e19cc; end: 10b8e19df;  */

void FUN_10b8e19cc(void)

{
  func_0x00010b8e1938();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8e19e0; end: 10b8e1a87;  */

void FUN_10b8e19e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  
  FUN_10b8e2d28();
  if ((*(byte *)(unaff_x19 + 0xc9) & 1) == 0) {
    func_0x00010b8e1a24();
  }
  *(undefined1 *)(unaff_x19 + 0xc9) = 1;
  *(undefined8 *)(unaff_x19 + 0xb0) = param_2;
  FUN_10b8e1a88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b8e1a88; end: 10b8e1b5b;  */

void FUN_10b8e1a88(long param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  long *plVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (((*(long *)(param_1 + 0xc0) == 0) &&
      (in_ZR = 0, unaff_x19 = param_1, *(char *)(param_1 + 0xc9) == '\x01')) &&
     (in_ZR = *(char *)(param_1 + 200) == '\x01', (bool)in_ZR)) {
    plVar1 = *(long **)(param_1 + 0x98);
    func_0x00010b8e1c20(&uStack_80,param_1);
    pcStack_68 = FUN_10b8e1edc;
    ppuStack_60 = &PTR_FUN_110d72c00;
    uStack_50 = uStack_78;
    uStack_58 = uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    (**(code **)(*plVar1 + 0x30))(plVar1,&pcStack_68,*(undefined8 *)(param_1 + 0xb8));
    *(long **)(param_1 + 0xc0) = plVar1;
    (*(code *)*ppuStack_60)(&ppuStack_60);
    FUN_10b8e27c0(&uStack_80);
  }
  func_0x00010b8e2df0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8e2d28();
  *(undefined1 *)(unaff_x19 + 0xc9) = 0;
  func_0x00010b8e1b84(unaff_x19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b8e1b5c; end: 10b8e1d83;  */

void FUN_10b8e1b5c(void)

{
  long unaff_x19;
  
  FUN_10b8e2d28();
  *(undefined1 *)(unaff_x19 + 0xc9) = 0;
  func_0x00010b8e1b84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b8e1d84; end: 10b8e1deb;  */

void FUN_10b8e1d84(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x19;
  
  FUN_10b8e2d28();
  plVar1 = *(long **)(unaff_x19 + 0x68);
  while (plVar1 != *(long **)(unaff_x19 + 0x70)) {
    if (*(long *)(*plVar1 + 0x10) == param_2) {
      plVar1 = (long *)(unaff_x19 + 0x68);
      FUN_10b8e2c34();
    }
    else {
      plVar1 = plVar1 + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b8e1dec; end: 10b8e1edb;  */

void FUN_10b8e1dec(void)

{
  long unaff_x20;
  
  func_0x00010b8e2d34();
  func_0x00010b8e1c68(unaff_x20 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x20 + 0x18);
  return;
}



/* Entry: 10b8e1edc; end: 10b8e273f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b8e1edc(long param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  undefined **ppuVar4;
  undefined1 in_ZR;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  long **pplVar14;
  code *pcVar15;
  char *pcVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  double dVar28;
  long *plStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long alStack_1a0 [7];
  long *plStack_168;
  long *plStack_160;
  long **pplStack_158;
  long alStack_148 [3];
  code *pcStack_130;
  undefined **ppuStack_128;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long *plStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  lVar7 = *(long *)(param_1 + 0x18);
  if (((lVar7 != 0) && (__ZNSt3__119__shared_weak_count4lockEv(), lStack_1b8 = lVar7, lVar7 != 0))
     && (lVar23 = *(long *)(param_1 + 0x10), lStack_1c0 = lVar23, lVar23 != 0)) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x00010b8e2db0();
    plVar26 = (long *)0x0;
    plVar22 = (long *)0x0;
    plStack_1c8 = (long *)0x0;
    lVar25 = *(long *)(lVar23 + 0xb0);
    plVar12 = *(long **)(lVar23 + 0x70);
    for (plVar21 = *(long **)(lVar23 + 0x68); plVar21 != plVar12; plVar21 = plVar21 + 1) {
      lVar17 = *plVar21;
      if ((*(byte *)(lVar17 + 0x30) & 1) != 0) goto LAB_10b8e201c;
      if ((*(byte *)(lVar17 + 0x28) & 1) == 0) {
LAB_10b8e1f90:
        *(undefined1 *)(lVar17 + 0x28) = 1;
LAB_10b8e1f98:
        *(long *)(lVar17 + 0x20) = lVar7;
        *(undefined1 *)(lVar17 + 0x18) = 0;
        lVar17 = *plVar21;
        uVar24 = *(undefined8 *)(lVar17 + 0x10);
        uStack_1a8 = 0;
        plVar9 = (long *)(lVar17 + 8);
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        pcStack_c0 = (code *)0x10b8e27f4;
        ppuStack_b8 = &PTR_FUN_110d72c40;
        plVar8 = (long *)0x8;
        __Znwm();
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *plVar8 = lVar17;
        plStack_b0 = plVar8;
        func_0x0001080d3888(uVar24,&uStack_1a8,&pcStack_c0);
        func_0x00010b8e2d68();
        FUN_10b8e2b50(lVar17);
        uVar24 = uStack_1a8;
LAB_10b8e2018:
        func_0x000105276914(uVar24);
      }
      else {
        pcVar16 = (char *)(lVar17 + 0x18);
        lVar17 = *plVar21;
        if (*pcVar16 == '\x01') {
          if ((*(byte *)(lVar17 + 0x28) & 1) == 0) goto LAB_10b8e1f90;
          goto LAB_10b8e1f98;
        }
        plVar9 = *(long **)(lVar17 + 0x10);
        (**(code **)(*plVar9 + 0x50))();
        lVar17 = *plVar21;
        if (((ulong)plVar9 & 1) != 0) {
          if ((*(byte *)(lVar17 + 0x28) & 1) == 0) goto LAB_10b8e2730;
          if (lVar7 <= *(long *)(lVar17 + 0x20) + lVar25) {
            if (*(char *)(lVar23 + 0xca) != '\x01') goto LAB_10b8e201c;
            uStack_1b0 = 0;
            pcStack_c0 = FUN_10b8e28bc;
            ppuStack_b8 = &PTR_DAT_110d72c60;
            func_0x0001080d3888(*(undefined8 *)(lVar17 + 0x10),&uStack_1b0,&pcStack_c0);
            func_0x00010b8e2d68();
            uVar24 = uStack_1b0;
            goto LAB_10b8e2018;
          }
          *(undefined1 *)(lVar17 + 0x30) = 1;
          if (plVar22 < plStack_1c8) {
            *plVar22 = 0;
            plVar22[1] = 0;
            plVar27 = plVar26;
            plVar8 = plVar22;
          }
          else {
            lVar17 = (long)plVar22 - (long)plVar26 >> 4;
            uVar18 = lVar17 + 1;
            if (uVar18 >> 0x3c != 0) goto LAB_10b8e273c;
            uVar20 = (long)plStack_1c8 - (long)plVar26 >> 3;
            if (uVar20 <= uVar18) {
              uVar20 = uVar18;
            }
            if (0x7fffffffffffffef < (ulong)((long)plStack_1c8 - (long)plVar26)) {
              uVar20 = 0xfffffffffffffff;
            }
            if (uVar20 >> 0x3c != 0) goto LAB_10b8e2738;
            lVar11 = uVar20 << 4;
            __Znwm();
            plVar8 = (long *)(lVar11 + ((long)plVar22 - (long)plVar26));
            *plVar8 = 0;
            plVar8[1] = 0;
            plVar27 = plVar8 + lVar17 * -2;
            plVar9 = plVar27;
            for (plVar19 = plVar26; plVar10 = plVar26, plVar19 != plVar22; plVar19 = plVar19 + 2) {
              lVar17 = *plVar19;
              plVar9[1] = plVar19[1];
              *plVar9 = lVar17;
              *plVar19 = 0;
              plVar19[1] = 0;
              plVar9 = plVar9 + 2;
            }
            for (; plVar10 != plVar22; plVar10 = plVar10 + 2) {
              func_0x00010b8e2890();
            }
            plStack_1c8 = (long *)(lVar11 + uVar20 * 0x10);
            if (plVar26 != (long *)0x0) {
              __ZdlPv(plVar26);
            }
          }
          plVar22 = plVar8 + 2;
          plVar26 = plVar8 + 1;
          lVar17 = *plVar21;
          if (plVar26 != plVar21) {
            lVar11 = *plVar26;
            if (lVar17 != 0) {
              plVar9 = (long *)(lVar17 + 8);
              do {
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = *plVar9 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            *plVar26 = lVar17;
            FUN_10b8e2b50(lVar11);
            lVar17 = *plVar21;
          }
          plVar26 = *(long **)(lVar17 + 0x10);
          if ((plVar26 == (long *)0x0) ||
             (plVar9 = plVar26, FUN_10b9a5818(), ((ulong)plVar9 & 1) != 0)) {
            lVar17 = *plVar8;
            *plVar8 = (long)plVar26;
            FUN_10b8e2c20(lVar17);
            plVar26 = plVar27;
            goto LAB_10b8e201c;
          }
          goto LAB_10b8e2734;
        }
        if ((*(byte *)(lVar17 + 0x28) & 1) == 0) {
          *(undefined1 *)(lVar17 + 0x28) = 1;
        }
        *(long *)(lVar17 + 0x20) = lVar7;
      }
LAB_10b8e201c:
    }
    func_0x00010b8e2da8();
    dVar28 = (double)lVar25;
    _log();
    for (plVar21 = plVar26; plVar21 != plVar22; plVar21 = plVar21 + 2) {
      plVar9 = (long *)*plVar21;
      lVar7 = plVar21[1];
      (**(code **)(*plVar9 + 0x40))(&lStack_110,plVar9,2000000000);
      plStack_120 = (long *)0x0;
      lStack_118 = 0;
      pcStack_130 = (code *)0x0;
      ppuStack_128 = (undefined **)0x0;
      if ((lStack_110 == lStack_108) || (*(long *)(lStack_110 + 0x10) == 0)) {
LAB_10b8e2254:
        func_0x00010b8e2dc8();
        pcVar16 = (char *)&plStack_f0;
        func_0x000107c31060(&lStack_118);
        func_0x000107c278f8(plStack_f0);
        if (lStack_118 == 0) goto LAB_10b8e228c;
        bVar5 = *(int *)(lStack_118 + 0xc) != 0;
      }
      else {
        pcVar16 = (char *)(*(long *)(lStack_110 + 0x10) + 0x38);
        func_0x000107c31068(&lStack_118);
        if ((lStack_118 == 0) || (*(int *)(lStack_118 + 0xc) == 0)) goto LAB_10b8e2254;
LAB_10b8e228c:
        bVar5 = false;
      }
      uVar18 = 0;
      func_0x00010b8e1860();
      if (((uVar18 & 1) == 0) && ((*(byte *)(lVar7 + 0x18) & 1) != 0)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_130);
        func_0x000107c278f8(lStack_118);
        func_0x0001080d844c(&lStack_110);
        func_0x00010b8e2db0();
        *(undefined1 *)(plVar21[1] + 0x30) = 0;
        func_0x00010b8e2da8();
      }
      else {
        if (((bRam00000001137fcea8 & 1) == 0) &&
           (iVar6 = 0x137fcea8, ___cxa_guard_acquire(), iVar6 != 0)) {
          func_0x0001080df680(0x1137fcec0,&DAT_10f4ee369);
          uRam00000001137fced0 = 0x3ff0000000000000;
          func_0x0001080df680(0x1137fced8,&DAT_10f4666dc);
          uRam00000001137fcee8 = 0x408f400000000000;
          func_0x0001080df680(0x1137fcef0,&DAT_10f46635e);
          uRam00000001137fcf00 = 0x412e848000000000;
          pcVar16 = "s";
          func_0x0001080df680(0x1137fcf08);
          uRam00000001137fcf18 = 0x41cdcd6500000000;
          ___cxa_guard_release(0x1137fcea8);
        }
        if ((bRam00000001137fceb8 & 1) == 0) {
          iVar6 = 0x137fceb8;
          ___cxa_guard_acquire();
          if (iVar6 != 0) {
            dRam00000001137fceb0 = 6.907755278982137;
            ___cxa_guard_release(0x1137fceb8);
          }
        }
        if (lVar25 == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = (ulong)(dVar28 / dRam00000001137fceb0);
          if (2 < uVar18) {
            uVar18 = 3;
          }
        }
        lVar7 = uVar18 * 0x18;
        uStack_e0 = *(undefined8 *)(lVar7 + 0x1137fcec0);
        uStack_d8 = *(undefined8 *)(lVar7 + 0x1137fcec8);
        plStack_f0 = (long *)((double)lVar25 / *(double *)(lVar7 + 0x1137fced0));
        ppuStack_e8 = (undefined **)0x0;
        func_0x000107c2793c(&UNK_10f7cba46);
        func_0x000107c3173c(alStack_148);
        if ((lStack_118 == 0) || (*(int *)(lStack_118 + 0xc) == 0)) {
          plVar12 = alStack_148;
          func_0x000107c27e5c();
          plStack_160 = plVar12;
          pplStack_158 = (long **)pcVar16;
          func_0x000107c2793c(&UNK_10f7cb9ab);
          func_0x000107c3173c(&plStack_f0);
          func_0x000107c28528(&pcStack_130,&plStack_f0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_f0);
          func_0x00010b8e2dc8();
          func_0x0001080e753c(&pcStack_130,&plStack_f0);
          pplVar14 = &plStack_f0;
        }
        else {
          if (bVar5) {
            FUN_10b8a5478(&plStack_f0,&lStack_118,alStack_148);
            puVar13 = &UNK_10f7cb9ce;
          }
          else {
            FUN_10b8a5478(&plStack_f0,&lStack_118,alStack_148);
            puVar13 = &UNK_10f7cba03;
          }
          func_0x000107c2793c(puVar13);
          func_0x000107c3173c(&plStack_160);
          func_0x000107c28528(&pcStack_130,&plStack_160);
          pplVar14 = &plStack_160;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pplVar14);
        if (lStack_110 == lStack_108) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                    (&pcStack_130,&UNK_10f7cba21);
        }
        plStack_168 = (long *)0x0;
        plStack_160 = (long *)0x0;
        func_0x00010b8e2db0();
        func_0x00010b8c1ca8(&plStack_160,lVar23 + 0xa0);
        func_0x00010b8e1c68(&plStack_168,lVar23 + 0xa8);
        func_0x00010b8e2da8();
        if (plStack_160 != (long *)0x0) {
          if (lStack_118 == 0) {
            lVar7 = *plStack_160;
          }
          else {
            lVar7 = *plStack_160;
            if (*(int *)(lStack_118 + 0xc) != 0) {
              (**(code **)(lVar7 + 0x78))(plStack_160,&lStack_118);
              goto LAB_10b8e2484;
            }
          }
          (**(code **)(lVar7 + 0x80))();
        }
LAB_10b8e2484:
        uVar24 = uStack_100;
        lVar17 = lStack_108;
        lVar7 = lStack_110;
        plVar12 = plStack_120;
        ppuVar4 = ppuStack_128;
        pcVar2 = pcStack_130;
        if (plStack_168 != (long *)0x0) {
          ppuStack_128 = (undefined **)0x0;
          plStack_120 = (long *)0x0;
          pcStack_130 = (code *)0x0;
          lStack_108 = 0;
          uStack_100 = 0;
          lStack_110 = 0;
          plStack_b0 = plVar12;
          ppuStack_b8 = ppuVar4;
          pcStack_c0 = pcVar2;
          alStack_1a0[5] = 0;
          alStack_1a0[6] = 0;
          alStack_1a0[3] = 0;
          alStack_1a0[4] = 0;
          lStack_a0 = lVar17;
          lStack_a8 = lVar7;
          uStack_98 = uVar24;
          alStack_1a0[1] = 0;
          alStack_1a0[2] = 0;
          if (lStack_118 != 0) {
            piVar1 = (int *)(lStack_118 + 8);
            do {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lStack_90 = lStack_118;
          plVar12 = plStack_168;
          (**(code **)(*plStack_168 + 0x20))(plStack_168,&pcStack_c0);
          func_0x000107c278f8(lStack_90);
          func_0x0001080d844c(&lStack_a8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_c0);
          func_0x0001080d844c(alStack_1a0 + 1);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_1a0 + 4);
          if ((int)plVar12 == 1) {
            (**(code **)(*plVar9 + 0x38))(alStack_1a0);
            if (alStack_1a0[0] == 0) {
              _abort();
              goto LAB_10b8e272c;
            }
            plStack_f0 = (long *)0x10bdb3ef4;
            ppuStack_e8 = &PTR_FUN_110d72c20;
            (**(code **)(alStack_1a0[0] + 0x30))(&plStack_f0);
            (*(code *)*ppuStack_e8)(&ppuStack_e8);
            func_0x000105276914(alStack_1a0[0]);
          }
        }
        func_0x00010b8e2b74(plStack_168);
        func_0x000104bd474c(plStack_160);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_148);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_130);
        func_0x000107c278f8(lStack_118);
        func_0x0001080d844c(&lStack_110);
      }
    }
    func_0x00010b8e2db0();
    pcVar2 = *(code **)(lVar23 + 0x88);
    plStack_b0 = *(long **)(lVar23 + 0x90);
    ppuStack_b8 = *(undefined ***)(lVar23 + 0x88);
    pcStack_c0 = *(code **)(lVar23 + 0x80);
    *(undefined8 *)(lVar23 + 0x80) = 0;
    *(undefined8 *)(lVar23 + 0x88) = 0;
    *(undefined8 *)(lVar23 + 0x90) = 0;
    *(undefined8 *)(lVar23 + 0xc0) = 0;
    FUN_10b8e1a88(lVar23);
    func_0x00010b8e2da8();
    for (pcVar15 = pcStack_c0; in_ZR = pcVar15 == pcVar2, !(bool)in_ZR; pcVar15 = pcVar15 + 0x30) {
      (**(code **)pcVar15)();
    }
    func_0x0001080c577c(&pcStack_c0);
    if (plVar26 != (long *)0x0) {
      while (in_ZR = plVar22 == plVar26, !(bool)in_ZR) {
        plVar22 = plVar22 + -2;
        func_0x00010b8e2890(plVar22);
      }
      __ZdlPv(plVar26);
    }
  }
  plVar9 = &lStack_1c0;
  FUN_10b8e2740();
  func_0x00010b8e2df0(uStack_80);
  if ((bool)in_ZR) {
    return plVar9;
  }
LAB_10b8e272c:
  ___stack_chk_fail();
LAB_10b8e2730:
  func_0x0001080da3e4();
LAB_10b8e2734:
  FUN_10b9a5890();
LAB_10b8e2738:
  func_0x000104bfe188();
LAB_10b8e273c:
  func_0x00010bdb3f00();
  if (plVar9[1] != 0) {
    func_0x000107c27b90();
  }
  return plVar9;
}



/* Entry: 10b8e2740; end: 10b8e2767;  */

long FUN_10b8e2740(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b8e2768; end: 10b8e27bf;  */

long FUN_10b8e2768(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 8;
}



/* Entry: 10b8e27c0; end: 10b8e27e7;  */

long FUN_10b8e27c0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b8e27e8; end: 10b8e280b;  */

void FUN_10b8e27e8(void)

{
  return;
}



/* Entry: 10b8e280c; end: 10b8e282b;  */

void FUN_10b8e280c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b8e2b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8e282c; end: 10b8e2843;  */

void FUN_10b8e282c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8e2844; end: 10b8e28bb;  */

void FUN_10b8e2844(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d72c40;
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  uVar2 = 0;
  if (*plVar3 != 0) {
    do {
      func_0x00010b8e2d88();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *puVar1 = uVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b8e28bc; end: 10b8e28cb;  */

void FUN_10b8e28bc(void)

{
  return;
}



/* Entry: 10b8e28cc; end: 10b8e296b;  */

long FUN_10b8e28cc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_10b8e296c(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_10b8e2a34();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar3));
  plStack_40 = plStack_58 + (long)plVar2;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *param_2;
  *param_2 = 0;
  FUN_10b8e29ac(param_1,&plStack_58);
  lVar3 = param_1[1];
  func_0x00010b8e2ac4(&plStack_58);
  return lVar3;
}



/* Entry: 10b8e296c; end: 10b8e29ab;  */

long * FUN_10b8e296c(long *param_1,long *param_2)

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
  FUN_10b8e2a28();
  func_0x00010b8e2d7c();
  plVar3 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_10b8e2a74(plVar3,*param_1,param_1[1],lVar1);
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



/* Entry: 10b8e29ac; end: 10b8e2a27;  */

void FUN_10b8e29ac(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b8e2d7c();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_10b8e2a74(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 10b8e2a28; end: 10b8e2a33;  */

void FUN_10b8e2a28(void)

{
  _abort();
  FUN_10b8e2a58();
  return;
}



/* Entry: 10b8e2a34; end: 10b8e2a57;  */

void FUN_10b8e2a34(void)

{
  FUN_10b8e2a58();
  return;
}



/* Entry: 10b8e2a58; end: 10b8e2a73;  */

void FUN_10b8e2a58(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
      func_0x00010b8e2b2c();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
  return;
}



/* Entry: 10b8e2a74; end: 10b8e2a93;  */

void FUN_10b8e2a74(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
    *param_4 = *puVar1;
    *puVar1 = 0;
    param_4 = param_4 + 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    func_0x00010b8e2b2c();
  }
  return;
}



/* Entry: 10b8e2a94; end: 10b8e2aef;  */

void FUN_10b8e2a94(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x00010b8e2b2c();
  }
  return;
}



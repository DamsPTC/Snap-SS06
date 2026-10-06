/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8c0a50; end: 10b8c0a63;  */

void FUN_10b8c0a50(void)

{
  FUN_10b8c0a1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8c0a64; end: 10b8c0acf;  */

void FUN_10b8c0a64(long *param_1,long param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x21;
  long unaff_x22;
  
  lVar5 = param_2 + 0x10;
  plVar4 = param_3;
  FUN_10b8c0ad0();
  if (*(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x28) == lVar5) {
    func_0x000107c31088(&stack0xffffffffffffffd8,&UNK_10f7cb4cd);
    func_0x000107c31088(&stack0xffffffffffffffd0,&UNK_10f7cb4d5);
    if (unaff_x21 != 0) {
      piVar1 = (int *)(unaff_x21 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = unaff_x21;
    if (unaff_x22 == 0) {
      lVar5 = 0;
    }
    else {
      piVar1 = (int *)(unaff_x22 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        lVar5 = unaff_x22;
      } while (cVar2 != '\0');
    }
    param_1[1] = unaff_x22;
    param_1[2] = (long)FUN_10b8c0ba4;
    func_0x000107c278f8(lVar5);
    func_0x000107c278f8(unaff_x21);
    return;
  }
  lVar5 = plVar4[2];
  lVar6 = *param_3;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar6;
  lVar6 = plVar4[1];
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = lVar6;
  param_1[2] = lVar5;
  return;
}



/* Entry: 10b8c0ad0; end: 10b8c0ba3;  */

long FUN_10b8c0ad0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b8c0ef0();
  plVar2 = param_1;
  FUN_10b8c12e4(param_1,param_2,plVar1,&lStack_28);
  if ((int)plVar2 == 0) {
    lStack_28 = *param_1 + param_1[3];
  }
  else {
    lStack_28 = *param_1 + lStack_28;
  }
  return lStack_28;
}



/* Entry: 10b8c0ba4; end: 10b8c0bc3;  */

undefined * FUN_10b8c0ba4(undefined8 *param_1)

{
  (*(code *)*param_1)();
  return &UNK_10f7cb4cd;
}



/* Entry: 10b8c0bc4; end: 10b8c0c9b;  */

void FUN_10b8c0bc4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(*param_1 + lVar2)) {
        func_0x000107c278f4(param_1[1] + lVar3);
        lVar1 = param_1[3];
      }
      lVar3 = lVar3 + 0x10;
    }
    __ZdlPv();
    func_0x00010b8c157c();
  }
  return;
}



/* Entry: 10b8c0c9c; end: 10b8c0cc3;  */

/* WARNING: Possible PIC construction at 0x00010b8c0cb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8c0cb4) */

long FUN_10b8c0c9c(long param_1)

{
  func_0x00010007e5d0(param_1 + 8);
  func_0x0001003a8cb8();
  return param_1;
}



/* Entry: 10b8c0cc4; end: 10b8c0d5f;  */

void FUN_10b8c0cc4(undefined8 param_1,long param_2)

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
  
  func_0x00010b8c1594();
  lVar2 = extraout_x8 + 0x10 + param_2 * 0x18;
  __Znwm(lVar2);
  func_0x00010b8c1518(lVar2 + extraout_x8 + 0x10);
  lVar2 = 0;
  func_0x00010b8c1564();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8_00;
  }
  func_0x00010b8c15c4(uVar1);
  for (; unaff_x24 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar2)) {
      lVar3 = unaff_x21;
      FUN_10b8c0d90(unaff_x21);
      func_0x00010b8c154c();
      FUN_10b8c0d60();
      func_0x00010b8c13f8();
      FUN_10b8c0dac(extraout_x8_01 + lVar3 * 0x18,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x18;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8c0d60; end: 10b8c0d8f;  */

ulong FUN_10b8c0d60(long param_1,ulong param_2,ulong param_3)

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



/* Entry: 10b8c0d90; end: 10b8c0dab;  */

void FUN_10b8c0d90(undefined8 *param_1)

{
  func_0x00010b8c1544(param_1,*param_1);
  return;
}



/* Entry: 10b8c0dac; end: 10b8c0dcb;  */

/* WARNING: Possible PIC construction at 0x00010b8c0cb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8c0cb4) */

undefined8 * FUN_10b8c0dac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *param_2 = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_2[1] = 0;
  func_0x00010007e5d0(param_2 + 1);
  func_0x0001003a8cb8();
  return param_2;
}



/* Entry: 10b8c0dcc; end: 10b8c0e63;  */

void FUN_10b8c0dcc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  long lVar3;
  
  func_0x00010b8c1594();
  lVar3 = extraout_x8 + 0x10 + param_2 * 0x10;
  __Znwm(lVar3);
  func_0x00010b8c1518(lVar3 + extraout_x8 + 0x10);
  lVar3 = 0;
  func_0x00010b8c1564();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8_00;
  }
  func_0x00010b8c15c4(uVar1);
  for (; unaff_x24 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar3)) {
      lVar2 = unaff_x21;
      FUN_10b8c0e94(unaff_x21);
      func_0x00010b8c154c();
      FUN_10b8c0e64();
      func_0x00010b8c13f8();
      FUN_10b8c0edc(extraout_x8_01 + lVar2 * 0x10,unaff_x21);
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



/* Entry: 10b8c0e64; end: 10b8c0e93;  */

ulong FUN_10b8c0e64(long param_1,ulong param_2,ulong param_3)

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



/* Entry: 10b8c0e94; end: 10b8c0edb;  */

void FUN_10b8c0e94(undefined8 *param_1)

{
  func_0x00010b8c0eb8(*param_1);
  func_0x00010b8c1544();
  return;
}



/* Entry: 10b8c0edc; end: 10b8c0eef;  */

void FUN_10b8c0edc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_2[1] = 0;
  func_0x00010007e5d0(param_2 + 1);
  func_0x0001003a8cb8();
  return;
}



/* Entry: 10b8c0ef0; end: 10b8c0f2f;  */

void FUN_10b8c0ef0(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x00010b8c0f14(&lStack_18);
  return;
}



/* Entry: 10b8c0f30; end: 10b8c0fb7;  */

void FUN_10b8c0f30(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b8c14dc();
  FUN_10b8c0d60();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(unaff_x21 + param_1) == -2) {
      lVar1 = 0;
    }
    else {
      if ((unaff_x22 == 0) || (unaff_x22 - (unaff_x22 >> 3) >> 1 < *(ulong *)(unaff_x19 + 0x10))) {
        FUN_10b8c0cc4();
      }
      else {
        FUN_10b8c0fb8();
      }
      func_0x00010b8c15ec();
      FUN_10b8c0d60();
      lVar1 = *(long *)(unaff_x19 + 0x28);
    }
  }
  func_0x00010b8c145c(lVar1);
  return;
}



/* Entry: 10b8c0fb8; end: 10b8c10d7;  */

void FUN_10b8c0fb8(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  long *unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x21;
  long unaff_x22;
  ulong uVar5;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  
  func_0x00010b8c13d8();
  for (uVar5 = 0; uVar5 != unaff_x19[3]; uVar5 = uVar5 + 1) {
    uVar1 = 0xfd < *(byte *)(*unaff_x19 + uVar5);
    uVar2 = *(byte *)(*unaff_x19 + uVar5) == 0xfe;
    lVar4 = unaff_x20;
    if ((bool)uVar2) {
      FUN_10b8c0d90();
      func_0x00010b8c1528();
      FUN_10b8c0d60();
      func_0x00010b8c14fc();
      if ((bool)uVar1 && !(bool)uVar2) {
        func_0x00010b8c13a0();
        if (extraout_w9 == 0x80) {
          FUN_10b8c0dac(extraout_x8 + unaff_x20 * 0x18,extraout_x8 + uVar5 * 0x18);
          *(undefined1 *)(*unaff_x19 + uVar5) = 0x80;
          func_0x00010b8c14bc();
          *(undefined1 *)(extraout_x8_00 + 1) = 0x80;
        }
        else {
          unaff_x21 = uVar5 * 3;
          FUN_10b8c0dac(auStack_70,extraout_x8 + uVar5 * 0x18);
          lVar4 = unaff_x20 * 3;
          FUN_10b8c0dac(unaff_x19[1] + uVar5 * 0x18,unaff_x19[1] + unaff_x20 * 0x18);
          FUN_10b8c0dac(unaff_x19[1] + unaff_x20 * 0x18,auStack_70);
          uVar5 = uVar5 - 1;
        }
      }
      else {
        *(byte *)(unaff_x22 + uVar5) = (byte)unaff_x21 & 0x7f;
        func_0x00010b8c1388();
      }
    }
    unaff_x20 = lVar4;
  }
  bVar3 = uVar5 == 7;
  lVar4 = 6;
  if (!bVar3) {
    lVar4 = uVar5 - (uVar5 >> 3);
  }
  unaff_x19[5] = lVar4 - unaff_x19[2];
  func_0x00010b8c1440(uStack_58);
  if (bVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8c0eb8();
  func_0x00010b8c1544();
  return;
}



/* Entry: 10b8c10d8; end: 10b8c10f7;  */

void FUN_10b8c10d8(void)

{
  func_0x00010b8c0eb8();
  func_0x00010b8c1544();
  return;
}



/* Entry: 10b8c10f8; end: 10b8c117f;  */

void FUN_10b8c10f8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b8c14dc();
  FUN_10b8c0e64();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(unaff_x21 + param_1) == -2) {
      lVar1 = 0;
    }
    else {
      if ((unaff_x22 == 0) || (unaff_x22 - (unaff_x22 >> 3) >> 1 < *(ulong *)(unaff_x19 + 0x10))) {
        FUN_10b8c0dcc();
      }
      else {
        FUN_10b8c1180();
      }
      func_0x00010b8c15ec();
      FUN_10b8c0e64();
      lVar1 = *(long *)(unaff_x19 + 0x28);
    }
  }
  func_0x00010b8c145c(lVar1);
  return;
}



/* Entry: 10b8c1180; end: 10b8c128f;  */

long * FUN_10b8c1180(long *param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  long *unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  long unaff_x22;
  ulong uVar6;
  long lStack_98;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  
  func_0x00010b8c13d8();
  for (uVar6 = 0; uVar6 != unaff_x19[3]; uVar6 = uVar6 + 1) {
    uVar2 = 0xfd < *(byte *)(*unaff_x19 + uVar6);
    uVar3 = *(byte *)(*unaff_x19 + uVar6) == 0xfe;
    if ((bool)uVar3) {
      param_1 = (long *)(unaff_x19[1] + uVar6 * 0x10);
      FUN_10b8c0e94();
      func_0x00010b8c1528();
      FUN_10b8c0e64();
      func_0x00010b8c14fc();
      if ((bool)uVar2 && !(bool)uVar3) {
        func_0x00010b8c13a0();
        lVar1 = extraout_x8 + uVar6 * 0x10;
        if (extraout_w9 == 0x80) {
          param_1 = (long *)(extraout_x8 + unaff_x20 * 0x10);
          FUN_10b8c0edc(param_1,lVar1);
          *(undefined1 *)(*unaff_x19 + uVar6) = 0x80;
          func_0x00010b8c14bc();
          *(undefined1 *)(extraout_x8_00 + 1) = 0x80;
        }
        else {
          FUN_10b8c0edc(auStack_68,lVar1);
          FUN_10b8c0edc(unaff_x19[1] + uVar6 * 0x10,unaff_x19[1] + unaff_x20 * 0x10);
          param_1 = (long *)(unaff_x19[1] + unaff_x20 * 0x10);
          FUN_10b8c0edc(param_1,auStack_68);
          uVar6 = uVar6 - 1;
        }
      }
      else {
        *(byte *)(unaff_x22 + uVar6) = unaff_w21 & 0x7f;
        func_0x00010b8c1388();
      }
    }
  }
  bVar4 = uVar6 == 7;
  lVar1 = 6;
  if (!bVar4) {
    lVar1 = uVar6 - (uVar6 >> 3);
  }
  unaff_x19[5] = lVar1 - unaff_x19[2];
  func_0x00010b8c1440(uStack_58);
  if (bVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar5 = param_1;
  func_0x00010b8c12e4();
  if ((int)plVar5 == 0) {
    plVar5 = (long *)(*param_1 + param_1[3]);
  }
  else {
    plVar5 = (long *)(*param_1 + lStack_98);
  }
  return plVar5;
}



/* Entry: 10b8c1290; end: 10b8c12e3;  */

long FUN_10b8c1290(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b8c12e4();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b8c12e4; end: 10b8c15ff;  */

bool FUN_10b8c12e4(long *param_1,long *param_2,ulong param_3,ulong *param_4)

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
      if (*(long *)(param_1[1] + uVar1 * 0x18) == lVar8) goto LAB_10b8c137c;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar5 = lVar2 + uVar5;
  }
LAB_10b8c137c:
  return uVar6 != 0;
}



/* Entry: 10b8c1600; end: 10b8c3da3;  */

long FUN_10b8c1600(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  undefined8 uVar3;
  
  lVar1 = param_1;
  FUN_10b98c908();
  func_0x00010b8c389c();
  *(undefined8 *)(lVar1 + 0x70) = 0x32aaaba7;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined4 *)(lVar1 + 0xb8) = 0;
  lVar2 = param_7[1];
  uVar3 = *param_7;
  *(undefined8 *)(lVar1 + 200) = param_7[1];
  *(undefined8 *)(lVar1 + 0xc0) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b8c37b0();
    } while (extraout_w10 != 0);
  }
  lVar2 = param_8[1];
  uVar3 = *param_8;
  *(undefined8 *)(param_1 + 0xd8) = param_8[1];
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b8c37b0();
    } while (extraout_w10_00 != 0);
  }
  *(undefined8 *)(param_1 + 0xe0) = *param_4;
  *param_4 = 0;
  uVar3 = 0;
  if (*param_5 != 0) {
    do {
      func_0x00010b8c3858();
      uVar3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  func_0x00010b8c175c(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x118) = param_11;
  *(undefined ***)(param_1 + 0x120) = &PTR_DAT_110d788a0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined8 **)(param_1 + 0x128) = (undefined8 *)(lVar1 + 0x70);
  *(undefined **)(param_1 + 0x130) = &UNK_10dd5b8b0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined **)(param_1 + 0x170) = &UNK_10dd5b8b0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x1eb) = 0;
  *(undefined8 *)(param_1 + 0x1e3) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined1 *)(param_1 + 499) = (undefined1)param_9;
  *(undefined1 *)(param_1 + 500) = param_9._1_1_;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  func_0x000107c28144(param_1 + 0x100);
  return param_1;
}



/* Entry: 10b8c3da4; end: 10b8c3e07;  */

void FUN_10b8c3da4(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_110d71b20;
  param_1[1] = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = &UNK_10dd5b8b0;
  param_1[4] = 0;
  param_1[9] = 0x32aaaba7;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  lVar4 = *param_2;
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
  param_1[0x11] = lVar4;
  param_1[0x12] = param_3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}



/* Entry: 10b8c3e08; end: 10b8c3e53;  */

undefined8 * FUN_10b8c3e08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71b20;
  func_0x000104bd46e0(param_1 + 0x13);
  func_0x000108129394(param_1 + 0x11);
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  FUN_10b8c44a0(param_1 + 3);
  return param_1;
}



/* Entry: 10b8c3e54; end: 10b8c3e57;  */

undefined8 * FUN_10b8c3e54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71b20;
  func_0x000104bd46e0(param_1 + 0x13);
  func_0x000108129394(param_1 + 0x11);
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  FUN_10b8c44a0(param_1 + 3);
  return param_1;
}



/* Entry: 10b8c3e58; end: 10b8c3e6b;  */

void FUN_10b8c3e58(void)

{
  FUN_10b8c3e08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8c3e6c; end: 10b8c3f17;  */

void FUN_10b8c3e6c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  uStack_48 = *param_3;
  *param_3 = 0;
  func_0x00010b98c594(auStack_60);
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10b8c3f18(param_1,param_2,&uStack_48,param_4,auStack_60,&uStack_70,&uStack_80,0,param_5,
                param_6);
  func_0x0001080d26e4(&uStack_80);
  func_0x0001080d26e4(&uStack_70);
  func_0x00010b8c2b50(auStack_60);
  func_0x000108100600(uStack_48);
  return;
}



/* Entry: 10b8c3f18; end: 10b8c405b;  */

void FUN_10b8c3f18(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined8 param_10)

{
  long *plVar1;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  int iStack_58;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  *param_1 = 0;
  uStack_52 = param_9;
  uStack_51 = param_8;
  func_0x00010b8c53a4();
  iStack_58 = *(int *)(param_2 + 0x10) + 1;
  *(int *)(param_2 + 0x10) = iStack_58;
  if (*(long *)(param_2 + 0x98) == 0) {
    func_0x00010b8c0b00(auStack_70);
  }
  else {
    FUN_10b8c0a64(auStack_70,*(long *)(param_2 + 0x98),param_5);
  }
  FUN_10b8c405c(&uStack_78,&iStack_58,auStack_70,param_3,param_4,param_5,param_6,param_7,&uStack_51,
                &uStack_52,param_2 + 0x90,param_2 + 0x88,param_10);
  func_0x0001080d04a4(param_1,&uStack_78);
  func_0x000105276914(uStack_78);
  func_0x00010b8c1860(*param_1);
  FUN_10b8c40bc(param_2 + 0x18,&iStack_58);
  func_0x00010b8c292c();
  FUN_10b98c56c(auStack_70);
  func_0x00010b8c53e8();
  if (cRam00000001133fc7a8 == '\x01') {
    FUN_10b98c88c(param_5);
  }
  plVar1 = *(long **)(param_2 + 0xa0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  }
  return;
}



/* Entry: 10b8c405c; end: 10b8c40bb;  */

long FUN_10b8c405c(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = in_stack_00000010;
  uStack_48 = in_stack_00000018;
  uStack_58 = in_stack_00000008;
  uStack_60 = in_stack_00000000;
  FUN_10b8c480c(auStack_38);
  *param_1 = auStack_38[0];
  func_0x00010b8c53ac(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_10b8c40bc;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10b8c4b20(auStack_88);
  return lStack_80 + 8;
}



/* Entry: 10b8c40bc; end: 10b8c40e3;  */

long FUN_10b8c40bc(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b8c4b20(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b8c40e4; end: 10b8c40ef;  */

bool FUN_10b8c40e4(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  uStack_34 = *(undefined4 *)(*param_2 + 0x18);
  uStack_40 = 0;
  func_0x00010b8c53a4();
  lVar2 = param_1 + 0x18;
  puVar3 = &uStack_34;
  FUN_10b8c41b4(lVar2,puVar3);
  lVar1 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x30);
  if (lVar1 == lVar2) {
    func_0x00010b8c53e8();
    uVar4 = 0;
  }
  else {
    func_0x0001080d04a4(&uStack_40,puVar3 + 2);
    FUN_10b8c41e0(param_1 + 0x18,lVar2,puVar3);
    func_0x00010b8c53e8();
    func_0x00010b8c1a18(uStack_40);
    uVar4 = uStack_40;
    if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))();
      uVar4 = uStack_40;
    }
  }
  func_0x000105276914(uVar4);
  return lVar1 != lVar2;
}



/* Entry: 10b8c40f0; end: 10b8c41b3;  */

bool FUN_10b8c40f0(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  uStack_40 = 0;
  uStack_34 = param_2;
  func_0x00010b8c53a4();
  lVar2 = param_1 + 0x18;
  puVar3 = &uStack_34;
  FUN_10b8c41b4(lVar2,puVar3);
  lVar1 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x30);
  if (lVar1 == lVar2) {
    func_0x00010b8c53e8();
    uVar4 = 0;
  }
  else {
    func_0x0001080d04a4(&uStack_40,puVar3 + 2);
    FUN_10b8c41e0(param_1 + 0x18,lVar2,puVar3);
    func_0x00010b8c53e8();
    func_0x00010b8c1a18(uStack_40);
    uVar4 = uStack_40;
    if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))();
      uVar4 = uStack_40;
    }
  }
  func_0x000105276914(uVar4);
  return lVar1 != lVar2;
}



/* Entry: 10b8c41b4; end: 10b8c41df;  */

long FUN_10b8c41b4(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  long lStack_28;
  
  func_0x00010b8c53d0();
  FUN_10b8c4ba0();
  plVar1 = unaff_x20;
  FUN_10b8c5144();
  if ((int)plVar1 == 0) {
    lVar2 = *unaff_x20 + unaff_x20[3];
  }
  else {
    lVar2 = *unaff_x20 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b8c41e0; end: 10b8c4313;  */

undefined1  [16] FUN_10b8c41e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10b8c51e4(&uStack_40);
  FUN_10b8c5218(param_1,param_2,param_3);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 10b8c4314; end: 10b8c43b3;  */

void FUN_10b8c4314(long *param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uStack_24;
  
  lVar5 = param_2 + 0x18;
  puVar4 = &uStack_24;
  uStack_24 = param_3;
  func_0x00010b8c4388();
  if (*(long *)(param_2 + 0x18) + *(long *)(param_2 + 0x30) == lVar5) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(puVar4 + 2);
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
  }
  *param_1 = lVar5;
  return;
}



/* Entry: 10b8c43b4; end: 10b8c43f7;  */

void FUN_10b8c43b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x00010b8c53a4();
  FUN_10b8c4314(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x48);
  return;
}



/* Entry: 10b8c43f8; end: 10b8c449f;  */

undefined8 FUN_10b8c43f8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010b8c53a4();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x48);
  return uVar1;
}



/* Entry: 10b8c44a0; end: 10b8c451b;  */

void FUN_10b8c44a0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(*param_1 + lVar2)) {
        func_0x0001052768f0(param_1[1] + lVar3);
        lVar1 = param_1[3];
      }
      lVar3 = lVar3 + 0x10;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b8c451c; end: 10b8c4557;  */

long FUN_10b8c451c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10b8c4558();
    lVar2 = uVar1 + 8;
  }
  else {
    lVar2 = param_1;
    FUN_10b8c458c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -8;
}



/* Entry: 10b8c4558; end: 10b8c458b;  */

void FUN_10b8c4558(long param_1,long *param_2)

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



/* Entry: 10b8c458c; end: 10b8c464b;  */

long FUN_10b8c458c(long *param_1,long *param_2)

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
  FUN_10b8c464c(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar5 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar4 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_10b8c470c();
  }
  plStack_50 = (long *)((long)plStack_58 + (lVar1 - lVar5));
  plStack_40 = plStack_58 + (long)plVar4;
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar4 = (long *)(*(long *)(lVar5 + 0x10) + 8);
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
  FUN_10b8c468c(param_1,&plStack_58);
  lVar5 = param_1[1];
  func_0x00010b8c47a0(&plStack_58);
  return lVar5;
}



/* Entry: 10b8c464c; end: 10b8c468b;  */

long * FUN_10b8c464c(long *param_1,long *param_2)

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
  FUN_10b8c4700();
  func_0x00010b8c53d0();
  plVar3 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_10b8c474c(plVar3,*param_1,param_1[1],lVar1);
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



/* Entry: 10b8c468c; end: 10b8c46ff;  */

void FUN_10b8c468c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b8c53d0();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_10b8c474c(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 10b8c4700; end: 10b8c470b;  */

void FUN_10b8c4700(void)

{
  _abort();
  FUN_10b8c4730();
  return;
}



/* Entry: 10b8c470c; end: 10b8c472f;  */

void FUN_10b8c470c(void)

{
  FUN_10b8c4730();
  return;
}



/* Entry: 10b8c4730; end: 10b8c474b;  */

void FUN_10b8c4730(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
      func_0x0001052768f0();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
  return;
}



/* Entry: 10b8c474c; end: 10b8c476b;  */

void FUN_10b8c474c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
    *param_4 = *puVar1;
    *puVar1 = 0;
    param_4 = param_4 + 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    func_0x0001052768f0();
  }
  return;
}



/* Entry: 10b8c476c; end: 10b8c47cb;  */

void FUN_10b8c476c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x0001052768f0();
  }
  return;
}



/* Entry: 10b8c47cc; end: 10b8c47d3;  */

void FUN_10b8c47cc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8c53d0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001052768f0();
  }
  return;
}



/* Entry: 10b8c47d4; end: 10b8c480b;  */

void FUN_10b8c47d4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8c53d0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001052768f0();
  }
  return;
}



/* Entry: 10b8c480c; end: 10b8c485f;  */

void FUN_10b8c480c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 uStack_11;
  
  FUN_10b8c4860(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                param_10,param_11,param_12);
  return;
}



/* Entry: 10b8c4860; end: 10b8c494b;  */

void FUN_10b8c4860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined1 *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined8 uStack_68;
  
  uStack_88 = param_11;
  uStack_90 = param_10;
  uStack_98 = param_13;
  uStack_a0 = param_12;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b8c4968(auStack_80,1);
  uStack_b0 = param_14;
  uStack_c8 = uStack_88;
  uStack_d0 = uStack_90;
  uStack_b8 = uStack_98;
  uStack_c0 = uStack_a0;
  FUN_10b8c49c0(lStack_70,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  lVar6 = lStack_70;
  lStack_70 = 0;
  FUN_10b8c494c(param_1,lVar6 + 0x18);
  puVar5 = auStack_80;
  FUN_10b8c4b10();
  func_0x00010b8c53ac(uStack_68);
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
    pcStack_d8 = FUN_10b8c494c;
    lStack_e8 = extraout_x8[1];
    if (lStack_e8 != 0) {
      plVar1 = (long *)(lStack_e8 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_f0 = puVar5;
    puStack_e0 = &stack0xfffffffffffffff0;
    func_0x000107c278e4(puVar2,&puStack_f0);
    func_0x000107c284e8(&puStack_f0);
    return;
  }
  return;
}



/* Entry: 10b8c494c; end: 10b8c4967;  */

void FUN_10b8c494c(long *param_1,long param_2,long param_3)

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
    func_0x000107c278e4(lVar2,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b8c4968; end: 10b8c498f;  */

long FUN_10b8c4968(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b8c4990();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b8c4990; end: 10b8c49bf;  */

undefined8 * FUN_10b8c4990(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x7a44c6afc2dd9d) {
    puVar1 = (undefined8 *)(param_2 * 0x218);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d71b68;
  FUN_10b8c4a2c(param_1 + 3);
  return param_1;
}



/* Entry: 10b8c49c0; end: 10b8c4a03;  */

undefined8 * FUN_10b8c49c0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d71b68;
  FUN_10b8c4a2c(param_1 + 3);
  return param_1;
}



/* Entry: 10b8c4a04; end: 10b8c4a07;  */

void FUN_10b8c4a04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71b68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8c4a08; end: 10b8c4a1b;  */

void FUN_10b8c4a08(void)

{
  FUN_10b8c4a94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8c4a1c; end: 10b8c4a2b;  */

void FUN_10b8c4a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8c4a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8c4a2c; end: 10b8c4a93;  */

undefined8
FUN_10b8c4a2c(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *param_2;
  uStack_28 = *param_4;
  *param_4 = 0;
  FUN_10b8c1600(param_1,uVar1,param_3,&uStack_28);
  func_0x000108100600(uStack_28);
  return param_1;
}



/* Entry: 10b8c4a94; end: 10b8c4aa3;  */

void FUN_10b8c4a94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71b68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8c4aa4; end: 10b8c4b0f;  */

void FUN_10b8c4aa4(long param_1,long param_2,undefined8 param_3)

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
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8c4b10; end: 10b8c4b1f;  */

void FUN_10b8c4b10(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8c4b20; end: 10b8c4b9f;  */

void FUN_10b8c4b20(long *param_1,long *param_2,undefined4 *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  
  plVar2 = param_2;
  FUN_10b8c4ba0();
  plVar3 = param_2;
  puVar5 = param_3;
  func_0x00010b8c4bc4(param_2,param_3,plVar2);
  uVar4 = SUB81(puVar5,0);
  if (((ulong)puVar5 & 1) != 0) {
    lVar1 = *param_2;
    puVar5 = (undefined4 *)(param_2[1] + (long)plVar3 * 0x10);
    *puVar5 = *param_3;
    *(undefined8 *)(puVar5 + 2) = 0;
    *(byte *)(lVar1 + (long)plVar3) = (byte)plVar2 & 0x7f;
    FUN_10b8c5378();
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar3;
  param_1[1] = lVar1 + (long)plVar3 * 0x10;
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}



/* Entry: 10b8c4ba0; end: 10b8c4c97;  */

void FUN_10b8c4ba0(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x00010b8c4c80(&lStack_18);
  return;
}



/* Entry: 10b8c4c98; end: 10b8c4d13;  */

void FUN_10b8c4c98(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = param_1;
  FUN_10b8c4d14();
  lVar3 = param_1[5];
  lVar2 = *param_1;
  if (lVar3 == 0) {
    if (*(char *)(lVar2 + (long)plVar1) == -2) {
      lVar3 = 0;
    }
    else {
      func_0x00010b8c4d60(param_1);
      plVar1 = param_1;
      FUN_10b8c4d14(param_1,param_2);
      lVar2 = *param_1;
      lVar3 = param_1[5];
    }
  }
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar3 - (ulong)(*(char *)(lVar2 + (long)plVar1) == -0x80);
  return;
}



/* Entry: 10b8c4d14; end: 10b8c4d8f;  */

ulong FUN_10b8c4d14(long *param_1,ulong param_2)

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



/* Entry: 10b8c4d90; end: 10b8c4e5b;  */

void FUN_10b8c4d90(long *param_1,long param_2)

{
  long lVar1;
  long **pplVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plStack_58;
  
  lVar1 = *param_1;
  lVar4 = param_1[1];
  lVar5 = param_1[3];
  FUN_10b8c500c();
  param_1[3] = param_2;
  for (lVar6 = 0; lVar5 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(lVar1 + lVar6)) {
      pplVar2 = &plStack_58;
      plStack_58 = param_1 + 5;
      FUN_10b8c50b8(pplVar2,lVar4);
      plVar3 = param_1;
      FUN_10b8c4d14(param_1,pplVar2);
      *(byte *)(*param_1 + (long)plVar3) = (byte)pplVar2 & 0x7f;
      FUN_10b8c5378();
      FUN_10b8c50d8(param_1 + 5,param_1[1] + (long)plVar3 * 0x10,lVar4);
    }
    lVar4 = lVar4 + 0x10;
  }
  if (lVar5 != 0) {
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10b8c4e5c; end: 10b8c500b;  */

void FUN_10b8c4e5c(ulong *param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  ulong **ppuVar7;
  ulong *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong *apuStack_60 [3];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *param_1;
  puVar9 = (undefined1 *)param_1[3];
  func_0x000104bda340();
  puVar1 = param_1 + 5;
  for (uVar10 = 0; uVar10 != param_1[3]; uVar10 = uVar10 + 1) {
    if (*(char *)(*param_1 + uVar10) == -2) {
      ppuVar7 = apuStack_60;
      apuStack_60[0] = puVar1;
      FUN_10b8c50b8(apuStack_60,param_1[1] + uVar10 * 0x10);
      puVar8 = param_1;
      puVar9 = (undefined1 *)ppuVar7;
      FUN_10b8c4d14();
      uVar6 = param_1[3] & (ulong)ppuVar7 >> 7;
      if ((((long)puVar8 - uVar6 ^ uVar10 - uVar6) & param_1[3]) < 8) {
        *(byte *)(*param_1 + uVar10) = (byte)ppuVar7 & 0x7f;
        FUN_10b8c5378();
        uVar6 = (ulong)puVar8;
      }
      else {
        cVar3 = *(char *)(*param_1 + (long)puVar8);
        bVar4 = (byte)ppuVar7 & 0x7f;
        *(byte *)(*param_1 + (long)puVar8) = bVar4;
        *(byte *)(*param_1 + (param_1[3] & 7) + (param_1[3] & (long)puVar8 - 8U) + 1) = bVar4;
        if (cVar3 == -0x80) {
          puVar9 = (undefined1 *)(param_1[1] + (long)puVar8 * 0x10);
          func_0x00010b8c53c0();
          *(undefined1 *)(*param_1 + uVar10) = 0x80;
          *(undefined1 *)(*param_1 + (param_1[3] & uVar10 - 8) + (param_1[3] & 7) + 1) = 0x80;
          uVar6 = (ulong)puVar8;
        }
        else {
          uVar6 = (ulong)puVar8;
          func_0x00010b8c53c0();
          func_0x00010b8c53c0();
          puVar9 = (undefined1 *)(param_1[1] + (long)puVar8 * 0x10);
          func_0x00010b8c53c0();
          uVar10 = uVar10 - 1;
        }
      }
    }
  }
  bVar5 = uVar10 == 7;
  lVar2 = 6;
  if (!bVar5) {
    lVar2 = uVar10 - (uVar10 >> 3);
  }
  param_1[5] = lVar2 - param_1[2];
  func_0x00010b8c53ac(uStack_48);
  if (bVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8c53d0();
  lVar2 = ((ulong)puVar9 & 0xfffffffffffffff8) + 0x10;
  uVar6 = uVar6 + 0x28;
  FUN_10b8c5078(uVar6,lVar2 + (long)puVar9 * 0x10);
  *puVar1 = uVar6;
  param_1[6] = uVar6 + lVar2;
  _memset();
  *(undefined1 *)(*puVar1 + (long)param_1) = 0xff;
  lVar2 = 6;
  if (param_1 != (ulong *)0x7) {
    lVar2 = (long)param_1 - ((ulong)param_1 >> 3);
  }
  param_1[10] = lVar2 - param_1[7];
  return;
}



/* Entry: 10b8c500c; end: 10b8c5077;  */

void FUN_10b8c500c(long param_1,ulong param_2)

{
  long lVar1;
  ulong unaff_x19;
  long *unaff_x20;
  
  func_0x00010b8c53d0();
  lVar1 = (param_2 & 0xfffffffffffffff8) + 0x10;
  param_1 = param_1 + 0x28;
  FUN_10b8c5078(param_1,lVar1 + param_2 * 0x10);
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



/* Entry: 10b8c5078; end: 10b8c50b7;  */

void FUN_10b8c5078(undefined8 param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x00010b8c509c(&uStack_11,param_2 + 7U >> 3);
  return;
}



/* Entry: 10b8c50b8; end: 10b8c50bf;  */

void FUN_10b8c50b8(undefined8 param_1,long param_2)

{
  func_0x00010b8c5404(param_1,param_2,param_2 + 8);
  return;
}



/* Entry: 10b8c50c0; end: 10b8c50d7;  */

void FUN_10b8c50c0(void)

{
  func_0x00010b8c5404();
  return;
}



/* Entry: 10b8c50d8; end: 10b8c50f3;  */

void FUN_10b8c50d8(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *param_3;
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(param_3 + 2) = 0;
  func_0x00010045db50();
  func_0x000105276914();
  return;
}



/* Entry: 10b8c50f4; end: 10b8c5143;  */

long FUN_10b8c50f4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b8c5144();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b8c5144; end: 10b8c51e3;  */

bool FUN_10b8c5144(long *param_1,int *param_2,ulong param_3,ulong *param_4)

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
      if (*(int *)(param_1[1] + uVar8 * 0x10) == iVar1) goto LAB_10b8c51d8;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar5 = lVar2 + uVar5;
  }
LAB_10b8c51d8:
  return uVar6 != 0;
}



/* Entry: 10b8c51e4; end: 10b8c5217;  */

long * FUN_10b8c51e4(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  FUN_10b8c5258();
  return param_1;
}



/* Entry: 10b8c5218; end: 10b8c5257;  */

void FUN_10b8c5218(long *param_1,ulong *param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x0001052768f0(param_3 + 8);
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



/* Entry: 10b8c5258; end: 10b8c52a7;  */

void FUN_10b8c5258(long *param_1)

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



/* Entry: 10b8c52a8; end: 10b8c534b;  */

void FUN_10b8c52a8(long *param_1,ulong *param_2)

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



/* Entry: 10b8c534c; end: 10b8c5377;  */

undefined1  [16] FUN_10b8c534c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10b8c5258(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b8c5378; end: 10b8c540f;  */

void FUN_10b8c5378(void)

{
  undefined1 in_w8;
  long in_x9;
  ulong in_x10;
  ulong in_x11;
  
  *(undefined1 *)(in_x9 + (in_x11 & in_x10) + (in_x11 & 7) + 1) = in_w8;
  return;
}



/* Entry: 10b8c5410; end: 10b8c5d73;  */

undefined * FUN_10b8c5410(uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_14;
  
  if ((bRam0000000113846740 & 1) == 0) {
    func_0x00010b8c5524(0x113846740);
    bVar1 = param_1 != 0;
    param_1 = uStack_14;
    if (bVar1) {
      func_0x000107c31088(&DAT_113846738,&UNK_10f7cb539);
      ___cxa_guard_release(0x113846740);
    }
  }
  uVar3 = param_1;
  if ((bRam0000000113846750 & 1) == 0) {
    func_0x00010b8c5524(0x113846750);
    uVar3 = uStack_14;
    if (param_1 != 0) {
      func_0x000107c31088(&DAT_113846748,&UNK_10f7cb540);
      ___cxa_guard_release(0x113846750);
    }
  }
  uVar2 = uVar3;
  if ((bRam0000000113846760 & 1) == 0) {
    func_0x00010b8c5524(0x113846760);
    uVar2 = uStack_14;
    if (uVar3 != 0) {
      func_0x000107c31088(&DAT_113846758,&UNK_10f7cb54d);
      ___cxa_guard_release(0x113846760);
    }
  }
  return (&PTR_DAT_110d71ba8)[uVar2];
}



/* Entry: 10b8c5d74; end: 10b8c5d93;  */

void FUN_10b8c5d74(byte *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 != (byte *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *param_1 = *param_1 & 0xef;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if (*(long *)(param_1 + 0x2a0) != 0) {
      func_0x00010b95a904(*(long *)(param_1 + 0x2a0),param_1);
      param_1[0x2a0] = 0;
      param_1[0x2a1] = 0;
      param_1[0x2a2] = 0;
      param_1[0x2a3] = 0;
      param_1[0x2a4] = 0;
      param_1[0x2a5] = 0;
      param_1[0x2a6] = 0;
      param_1[0x2a7] = 0;
    }
    plVar1 = *(long **)(param_1 + 0x2a8);
    if (*(long *)(param_1 + 0x2b0) - (long)plVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x2b0) - (long)plVar1 >> 3;
      plVar3 = plVar1;
      do {
        *(undefined8 *)(*plVar3 + 0x2a0) = 0;
        lVar2 = lVar2 + -1;
        plVar3 = plVar3 + 1;
      } while (lVar2 != 0);
    }
    *(long **)(param_1 + 0x2b0) = plVar1;
    func_0x00010b95ae40(param_1 + 0x2a8);
    if (*(long *)(param_1 + 0x2a8) != 0) {
      *(long *)(param_1 + 0x2b0) = *(long *)(param_1 + 0x2a8);
      __ZdlPv();
    }
    lVar2 = *(long *)(param_1 + 0x138);
    param_1[0x138] = 0;
    param_1[0x139] = 0;
    param_1[0x13a] = 0;
    param_1[0x13b] = 0;
    param_1[0x13c] = 0;
    param_1[0x13d] = 0;
    param_1[0x13e] = 0;
    param_1[0x13f] = 0;
    if (lVar2 != 0) {
      func_0x00010811dd34(param_1 + 0x138);
    }
    if (*(long *)(param_1 + 0xe0) != 0) {
      *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe0);
      __ZdlPv();
    }
    if (*(long *)(param_1 + 200) != 0) {
      *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 200);
      __ZdlPv();
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
      __ZdlPv();
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10b8c5d94; end: 10b8c5ea7;  */

void FUN_10b8c5d94(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x00010b95a8c4(param_1,1);
  *(undefined8 *)(param_1 + 0x20) = 0x10b8c5dc4;
  return;
}



/* Entry: 10b8c5ea8; end: 10b8c5ef7;  */

undefined8 FUN_10b8c5ea8(void)

{
  int iVar1;
  
  if ((bRam0000000113846770 & 1) == 0) {
    iVar1 = 0x13846770;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113846768 = 0;
      ___cxa_guard_release(0x113846770);
    }
  }
  return 0x113846768;
}



/* Entry: 10b8c5ef8; end: 10b8c6003;  */

undefined8 *
FUN_10b8c5ef8(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d71cb8;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b952d98();
  }
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_3;
  param_1[7] = param_5;
  param_1[8] = 0;
  param_1[9] = &PTR_FUN_110d716d8;
  param_1[10] = param_1 + 0xd;
  param_1[0xc] = 2;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  FUN_10b8b3dc0(param_1 + 0x12,param_1);
  uVar1 = 0;
  uVar2 = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  uVar3 = NEON_fmov(0x3f800000,4);
  param_1[0x2f] = uVar3;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3d] = 0;
  uVar3 = 0;
  if (*param_4 != 0) {
    do {
      func_0x00010b8cff40();
      uVar3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[0x3e] = uVar3;
  param_1[0x43] = 0;
  param_1[0x40] = uVar2;
  param_1[0x3f] = uVar1;
  param_1[0x42] = uVar2;
  param_1[0x41] = uVar1;
  if (param_1[3] != 0) {
    FUN_10b8c5d94(param_1[3],param_1);
  }
  param_1[0x39] = param_1[0x39] | 0x20010014;
  return param_1;
}



/* Entry: 10b8c6004; end: 10b8c60d3;  */

undefined8 * FUN_10b8c6004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71cb8;
  func_0x00010b8b5444(param_1 + 0x12);
  FUN_10b8c5d74(param_1[3]);
  FUN_10b8cda48(param_1 + 8,0);
  func_0x000104bda388(param_1 + 0x43);
  func_0x000104bda388(param_1 + 0x42);
  func_0x000104bda388(param_1 + 0x41);
  func_0x000104bda388(param_1 + 0x40);
  func_0x000104bd4e40(param_1 + 0x3f);
  FUN_10b8cdc10(param_1 + 0x3e);
  func_0x00010b8a1ff4(param_1[0x3d]);
  func_0x000108105060(param_1 + 0x3c);
  func_0x0001080c5c5c(param_1 + 0x3b);
  FUN_10b8cdb24(param_1 + 0x32);
  FUN_10b8cdad0(param_1 + 0x31);
  FUN_10b8cda7c(param_1 + 0x30);
  func_0x0001080da474(param_1 + 0x25);
  FUN_10b8b3e08(param_1 + 0x12);
  FUN_10b8b998c(param_1 + 9);
  FUN_10b8cda28(param_1 + 8);
  func_0x0001081092d4(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b8c60d4; end: 10b8c60d7;  */

undefined8 * FUN_10b8c60d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71cb8;
  func_0x00010b8b5444(param_1 + 0x12);
  FUN_10b8c5d74(param_1[3]);
  FUN_10b8cda48(param_1 + 8,0);
  func_0x000104bda388(param_1 + 0x43);
  func_0x000104bda388(param_1 + 0x42);
  func_0x000104bda388(param_1 + 0x41);
  func_0x000104bda388(param_1 + 0x40);
  func_0x000104bd4e40(param_1 + 0x3f);
  FUN_10b8cdc10(param_1 + 0x3e);
  func_0x00010b8a1ff4(param_1[0x3d]);
  func_0x000108105060(param_1 + 0x3c);
  func_0x0001080c5c5c(param_1 + 0x3b);
  FUN_10b8cdb24(param_1 + 0x32);
  FUN_10b8cdad0(param_1 + 0x31);
  FUN_10b8cda7c(param_1 + 0x30);
  func_0x0001080da474(param_1 + 0x25);
  FUN_10b8b3e08(param_1 + 0x12);
  FUN_10b8b998c(param_1 + 9);
  FUN_10b8cda28(param_1 + 8);
  func_0x0001081092d4(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b8c60d8; end: 10b8c60eb;  */

void FUN_10b8c60d8(void)

{
  FUN_10b8c6004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8c60ec; end: 10b8c611f;  */

long * FUN_10b8c60ec(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  func_0x00010b8cf8a8();
  FUN_10b8c6120();
  func_0x00010b8cf8b4();
  FUN_10b8c6128();
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  plVar1 = (long *)(unaff_x20 + 0x1e0);
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar2 = 0;
    func_0x0001080d2860();
    *plVar1 = lVar2;
    func_0x0001080d2890(lVar3);
  }
  return plVar1;
}



/* Entry: 10b8c6120; end: 10b8c6127;  */

bool FUN_10b8c6120(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 1;
  lVar2 = *(long *)(param_1 + 0x1d8);
  if (lVar2 != 0) {
    func_0x00010b8cf8a8();
    if (iVar1 != 0) {
      func_0x00010b8cfb2c();
      while (param_1 = param_1 + -1, param_1 != -1) {
        func_0x00010b8cfd8c();
        FUN_10b8c685c();
        FUN_10b8c678c();
      }
    }
    func_0x00010b8cf8b4();
    FUN_10b8c688c();
    func_0x0001080da468(0);
    func_0x0001080c5c80(0);
  }
  return lVar2 != 0;
}



/* Entry: 10b8c6128; end: 10b8c61eb;  */

void FUN_10b8c6128(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x1ca) >> 1 & 1) != 0) {
    func_0x00010b8cf8a8();
    func_0x00010b8cf8c0();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x1c8);
    if (*(long *)(*(long *)(unaff_x20 + 0x18) + 0x2a0) != 0) {
      func_0x00010b952ebc();
    }
    func_0x00010b8cf8b4();
    FUN_10b8c66b8();
    FUN_10b8c8f20(uStack_38);
    *(undefined8 *)(unaff_x20 + 0x88) = 0;
    func_0x000108108ca8(unaff_x20 + 0x20);
    FUN_10b8c8fa0();
    *(ulong *)(unaff_x20 + 0x1c8) = *(ulong *)(unaff_x20 + 0x1c8) & 0xffffffffbfffffff;
    if (((uint)uVar1 >> 0x1e & 1) != 0) {
      *(uint *)(*(long *)(unaff_x20 + 0x18) + 0x28) =
           *(uint *)(*(long *)(unaff_x20 + 0x18) + 0x28) & 0xcfffffff | 0x10000000;
      FUN_10b8a3bac(*(undefined8 *)(unaff_x20 + 0x30),&UNK_10f7cb5b1,8);
      FUN_10b8b4364(unaff_x20 + 0x90);
    }
    func_0x00010b8cfc6c();
  }
  return;
}



/* Entry: 10b8c61ec; end: 10b8c6227;  */

long * FUN_10b8c61ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != param_2) {
    func_0x0001080d2860();
    *param_1 = param_2;
    func_0x0001080d2890(lVar1);
  }
  return param_1;
}



/* Entry: 10b8c6228; end: 10b8c6353;  */

void FUN_10b8c6228(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x00010b8cf8a8();
  lVar1 = *param_3;
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0xc) == 0)) {
    if ((*(byte *)(unaff_x20 + 0x1cc) >> 4 & 1) == 0) {
      return;
    }
    uStack_40 = 0;
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0xc) == 0)) {
      func_0x00010b8cfec0();
      if (lStack_38 == 0) {
        if ((*(long *)(unaff_x20 + 0x1d0) == 0) ||
           (lVar1 = *(long *)(*(long *)(unaff_x20 + 0x1d0) + 0x28), lVar1 == 0)) {
          uStack_48 = 0;
        }
        else {
          FUN_10b98b344(&uStack_48,*(undefined8 *)(lVar1 + 0xd0));
        }
      }
      else {
        uStack_48 = 0;
        if (*(long *)(lStack_38 + 0x1f0) != 0) {
          do {
            func_0x00010b8cff40();
            uStack_48 = extraout_x8;
          } while (extraout_w11 != 0);
        }
      }
      func_0x00010b8cfc6c();
      FUN_10b8c6354(&uStack_40,&uStack_48);
      func_0x00010b8a2000(uStack_48);
      uVar2 = *(ulong *)(unaff_x20 + 0x1c8) & 0xffffffefffffffff;
      goto LAB_10b8c631c;
    }
  }
  uStack_40 = 0;
  if ((*(long *)(unaff_x20 + 0x1d0) != 0) &&
     (lVar1 = *(long *)(*(long *)(unaff_x20 + 0x1d0) + 0x28), lVar1 != 0)) {
    FUN_10b98b38c(&lStack_38,*(undefined8 *)(lVar1 + 0xd0),param_3);
    FUN_10b8c6354(&uStack_40,&lStack_38);
    func_0x00010b8a2000(lStack_38);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x1c8) | 0x1000000000;
LAB_10b8c631c:
  *(ulong *)(unaff_x20 + 0x1c8) = uVar2;
  lVar1 = unaff_x20;
  func_0x00010b8c637c();
  if ((int)lVar1 != 0) {
    *(undefined1 *)(unaff_x20 + 0x121) = 1;
    func_0x00010b8cf8b4();
    FUN_10b8c63d0();
  }
  func_0x00010b8a2000(uStack_40);
  return;
}



/* Entry: 10b8c6354; end: 10b8c63af;  */

void FUN_10b8c6354(void)

{
  undefined1 in_ZR;
  
  func_0x00010b8cfcb4();
  if (!(bool)in_ZR) {
    func_0x00010b8d005c();
    func_0x00010b8a2000();
  }
  return;
}



/* Entry: 10b8c63b0; end: 10b8c63cf;  */

void FUN_10b8c63b0(long param_1,long param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x20;
  
  *(undefined1 *)(param_1 + 0x121) = 1;
  if ((param_3 != 0) && (*(long *)(param_1 + 0x1f0) != 0)) {
    lVar4 = param_1 + 0x90;
    if (*(long *)(param_1 + 0xa8) != 0) {
      func_0x00010b8b6640();
      if (*(char *)(lVar4 + 0x91) == '\x01') {
        *(undefined1 *)(unaff_x20 + 0x91) = 0;
        func_0x00010b8b664c();
        FUN_10b8b4b70();
      }
      while (*(long *)(unaff_x20 + 0x70) != 0) {
        FUN_10b8b4c50(unaff_x20 + 0x60);
        if ((*(long *)(param_2 + 8) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar4 != 0)) {
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
        lVar4 = unaff_x20 + 0x60;
        FUN_10b8b4c50();
        FUN_10b8b4c7c(unaff_x20 + 0x60,lVar4,param_2);
        func_0x00010b8b664c();
        FUN_10b8b4cc0();
        func_0x00010b8b6848();
        param_2 = lVar4;
      }
    }
    return;
  }
  return;
}



/* Entry: 10b8c63d0; end: 10b8c646b;  */

void FUN_10b8c63d0(void)

{
  undefined1 in_ZR;
  
  func_0x00010b8cfe98();
  func_0x00010b8cfb8c();
  while (func_0x00010b8cfb80(), !(bool)in_ZR) {
    func_0x00010b8cf90c();
    func_0x00010b8cf9e4();
    func_0x00010b8c6418();
    func_0x00010b8cfd2c();
  }
  return;
}



/* Entry: 10b8c646c; end: 10b8c649b;  */

void FUN_10b8c646c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x1d8);
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x18) = 0;
    if (*(long *)(lVar4 + 0x10) != 0) {
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
  }
  *param_1 = lVar4;
  return;
}



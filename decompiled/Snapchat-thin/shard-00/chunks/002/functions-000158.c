/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003b1744; end: 1003b175b;  */

void FUN_1003b1744(void)

{
  return;
}



/* Entry: 1003b175c; end: 1003b177f;  */

void FUN_1003b175c(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_1003b1780();
  FUN_1003b17a4();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1003b1780; end: 1003b17a3;  */

undefined1 * FUN_1003b1780(void)

{
  return &stack0x00000007;
}



/* Entry: 1003b17a4; end: 1003b17df;  */

undefined8 * FUN_1003b17a4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined4 *unaff_x21;
  
  FUN_1003b17e0();
  puVar1 = (undefined8 *)(param_2 * 0x10 + 0x30);
  func_0x000107c60e20();
  uVar2 = *unaff_x19;
  FUN_1003b1850();
  *puVar1 = &PTR_DAT_110d7dd58;
  puVar1[1] = extraout_x8;
  *(undefined4 *)(puVar1 + 2) = *unaff_x21;
  FUN_1003adcc0(puVar1 + 3,unaff_x20);
  unaff_x19[5] = uVar2;
  func_0x0001003b185c();
  func_0x0001003b1868();
  return unaff_x19;
}



/* Entry: 1003b17e0; end: 1003b17ef;  */

void FUN_1003b17e0(void)

{
  return;
}



/* Entry: 1003b17f0; end: 1003b184f;  */

void FUN_1003b17f0(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  FUN_1003b1850();
  *param_1 = &PTR_DAT_110d7dd58;
  param_1[1] = extraout_x8;
  *(undefined4 *)(param_1 + 2) = *param_2;
  FUN_1003adcc0(param_1 + 3,param_3);
  *(undefined8 *)(unaff_x19 + 0x28) = param_4;
  func_0x0001003b185c();
  func_0x0001003b1868();
  return;
}



/* Entry: 1003b1850; end: 1003b18af;  */

void FUN_1003b1850(void)

{
  return;
}



/* Entry: 1003b18b0; end: 1003b18d3;  */

void FUN_1003b18b0(void)

{
  FUN_1003b18d4();
  func_0x0001003b18e0();
  return;
}



/* Entry: 1003b18d4; end: 1003b1933;  */

undefined8 FUN_1003b18d4(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1003b1934; end: 1003b1953;  */

void FUN_1003b1934(long param_1)

{
  if (*(char *)(param_1 + 0x158) == '\x01') {
    FUN_1003b15e8();
  }
  return;
}



/* Entry: 1003b1954; end: 1003b1967;  */

void FUN_1003b1954(void)

{
  return;
}



/* Entry: 1003b1968; end: 1003b1987;  */

void FUN_1003b1968(long param_1)

{
  FUN_1003b1988();
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
  return;
}



/* Entry: 1003b1988; end: 1003b199f;  */

void FUN_1003b1988(long param_1,undefined2 *param_2)

{
  FUN_1003adda4();
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  FUN_1003adb50();
  return;
}



/* Entry: 1003b19a0; end: 1003b1a27;  */

bool FUN_1003b19a0(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  ulong uStack_38;
  ulong uVar8;
  
  uVar1 = *param_1 + param_1[2];
  uVar2 = *param_1 + param_1[1];
  uStack_38 = 0;
  uVar8 = uVar1;
  func_0x000107c613e8(uVar1,&uStack_38,10);
  uVar7 = (undefined4)uVar8;
  bVar4 = uStack_38 == 0;
  bVar5 = uStack_38 == uVar1;
  bVar3 = uVar2 <= uStack_38;
  bVar6 = uStack_38 == uVar2;
  if ((bVar4 || bVar5) || bVar3 && !bVar6) {
    func_0x000107c31098(param_1,&UNK_10f7d0f6c,0xd);
  }
  else {
    FUN_1003b1a4c(uStack_38 - uVar1);
    *param_2 = uVar7;
  }
  return (!bVar4 && !bVar5) && (!bVar3 || bVar6);
}



/* Entry: 1003b1a28; end: 1003b1a4b;  */

void FUN_1003b1a28(undefined8 param_1)

{
  undefined1 auStack_14 [4];
  
  FUN_1003b19a0(param_1,auStack_14);
  func_0x0001003b1a6c();
  return;
}



/* Entry: 1003b1a4c; end: 1003b1ac7;  */

void FUN_1003b1a4c(long param_1)

{
  long unaff_x19;
  
  *(long *)(unaff_x19 + 0x10) = param_1 + *(long *)(unaff_x19 + 0x10);
  return;
}



/* Entry: 1003b1ac8; end: 1003b1b27;  */

bool FUN_1003b1ac8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (uVar2 < uVar1) {
    func_0x000107c31098(param_1,&UNK_10f7d0ef8,0x26);
  }
  return uVar1 <= uVar2;
}



/* Entry: 1003b1b28; end: 1003b1b2f;  */

void FUN_1003b1b28(void)

{
  return;
}



/* Entry: 1003b1b30; end: 1003b1b4f;  */

void FUN_1003b1b30(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000104bda93c();
  }
  return;
}



/* Entry: 1003b1b50; end: 1003b1baf;  */

long * FUN_1003b1b50(long *param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
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
  FUN_1003adcc0(param_1 + 1,param_3);
  return param_1;
}



/* Entry: 1003b1bb0; end: 1003b1bcb;  */

void FUN_1003b1bb0(void)

{
  return;
}



/* Entry: 1003b1bcc; end: 1003b1c1b;  */

undefined8 FUN_1003b1bcc(void)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uStack_28;
  
  FUN_1003b1bb0();
  if ((bool)in_ZR) {
    func_0x0001008d67d4();
    FUN_1008d680c();
    unaff_x19 = uStack_28;
  }
  else {
    FUN_1003b1c30();
    *(long *)(unaff_x20 + 8) = *(long *)(unaff_x20 + 8) + 1;
  }
  return unaff_x19;
}



/* Entry: 1003b1c1c; end: 1003b1c2f;  */

undefined1  [16] FUN_1003b1c1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1 + 1;
  *param_1 = *param_2;
  auVar1._8_8_ = param_2 + 1;
  *param_2 = 0;
  return auVar1;
}



/* Entry: 1003b1c30; end: 1003b1c4f;  */

void FUN_1003b1c30(void)

{
  FUN_1003b1c1c();
  FUN_1003aef98();
  return;
}



/* Entry: 1003b1c50; end: 1003b1c5b;  */

void FUN_1003b1c50(void)

{
  return;
}



/* Entry: 1003b1c5c; end: 1003b1c83;  */

undefined8 FUN_1003b1c5c(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1003adc18(param_1 + 0x10);
  FUN_10007e5d0(param_1);
  FUN_1003a8cb8();
  return unaff_x19;
}



/* Entry: 1003b1c84; end: 1003b1cbf;  */

void FUN_1003b1c84(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
  }
  else {
    if (*param_1 != 1) {
      return;
    }
    param_1 = param_1 + 2;
    func_0x0001003adc0c();
    if (param_1 != (long *)0x0) {
      (**(code **)(*param_1 + 0x18))();
    }
  }
  return;
}



/* Entry: 1003b1cc0; end: 1003b1d2f;  */

void FUN_1003b1cc0(void)

{
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  long lStack_38;
  
  FUN_1003b1744();
  FUN_1003b1d70();
  lVar1 = 0x28;
  for (; unaff_x20 != 0; unaff_x20 = unaff_x20 + -1) {
    FUN_1003b1e38(lStack_38 + lVar1,unaff_x21 + lVar1 + -0x28);
    lVar1 = lVar1 + 0x18;
  }
  FUN_1003b1eec(&lStack_38);
  FUN_1003b1f60(&lStack_38);
  return;
}



/* Entry: 1003b1d30; end: 1003b1d6f;  */

undefined8 * FUN_1003b1d30(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar5;
  int extraout_w11;
  undefined8 *unaff_x19;
  byte *unaff_x20;
  long *unaff_x21;
  
  FUN_1003b17e0();
  puVar1 = (undefined8 *)(param_2 * 0x18 + 0x28);
  func_0x000107c60e20();
  uVar3 = (ulong)*unaff_x20;
  uVar4 = *unaff_x19;
  FUN_1003b1850();
  uVar2 = (undefined1)uVar3;
  *puVar1 = &PTR_DAT_110d7dcf8;
  puVar1[1] = extraout_x8;
  uVar5 = 0;
  if (*unaff_x21 != 0) {
    do {
      FUN_1003ada60();
      uVar2 = (undefined1)uVar3;
      uVar5 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  unaff_x19[2] = uVar5;
  *(undefined1 *)(unaff_x19 + 3) = uVar2;
  unaff_x19[4] = uVar4;
  func_0x0001003b185c();
  FUN_1003b1e18();
  return unaff_x19;
}



/* Entry: 1003b1d70; end: 1003b1db3;  */

void FUN_1003b1d70(long *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined1 uStack_21;
  
  puVar1 = &uStack_31;
  uStack_30 = param_4;
  uStack_21 = param_3;
  FUN_1003b1d30(puVar1,param_4,param_2,&uStack_21,&uStack_30);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1003b1db4; end: 1003b1e17;  */

void FUN_1003b1db4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  int extraout_w11;
  long unaff_x19;
  
  FUN_1003b1850();
  uVar1 = (undefined1)param_3;
  *param_1 = &PTR_DAT_110d7dcf8;
  param_1[1] = extraout_x8;
  uVar2 = 0;
  if (*param_2 != 0) {
    do {
      FUN_1003ada60();
      uVar1 = (undefined1)param_3;
      uVar2 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  *(undefined1 *)(unaff_x19 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x20) = param_4;
  func_0x0001003b185c();
  FUN_1003b1e18();
  return;
}



/* Entry: 1003b1e18; end: 1003b1e37;  */

void FUN_1003b1e18(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + 0x28);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
  }
  return;
}



/* Entry: 1003b1e38; end: 1003b1e5f;  */

void FUN_1003b1e38(long param_1)

{
  long unaff_x19;
  
  FUN_1003b1e60();
  FUN_1003ae7b0(param_1 + 8,unaff_x19 + 8);
  return;
}



/* Entry: 1003b1e60; end: 1003b1e6b;  */

undefined8 FUN_1003b1e60(undefined8 param_1)

{
  FUN_1003b1e6c();
  return param_1;
}



/* Entry: 1003b1e6c; end: 1003b1eaf;  */

long * FUN_1003b1e6c(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    if (*param_2 != 0) {
      do {
        FUN_1003b1ed4();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    FUN_1003a8cb8();
  }
  return param_1;
}



/* Entry: 1003b1eb0; end: 1003b1ed3;  */

undefined8 FUN_1003b1eb0(undefined8 param_1)

{
  FUN_1003b1e6c();
  return param_1;
}



/* Entry: 1003b1ed4; end: 1003b1eeb;  */

void FUN_1003b1ed4(void)

{
  bool bVar1;
  int *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1003b1eec; end: 1003b1f3b;  */

void FUN_1003b1eec(long *param_1)

{
  int extraout_w11;
  
  if (*param_1 != 0) {
    do {
      func_0x0001003b1898();
    } while (extraout_w11 != 0);
  }
  func_0x0001003adca4();
  func_0x0001003adcb0();
  return;
}



/* Entry: 1003b1f3c; end: 1003b1f5f;  */

void FUN_1003b1f3c(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000104bdc578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1003b1f60; end: 1003b1f87;  */

undefined8 * FUN_1003b1f60(undefined8 *param_1)

{
  FUN_1003b1f3c(*param_1);
  return param_1;
}



/* Entry: 1003b1f88; end: 1003b1faf;  */

undefined8 * FUN_1003b1f88(undefined8 *param_1)

{
  *param_1 = 1;
  FUN_1003aef98(param_1 + 1);
  return param_1;
}



/* Entry: 1003b1fb0; end: 1003b1fb7;  */

void FUN_1003b1fb0(void)

{
  long *plVar1;
  long unaff_x19;
  
  plVar1 = (long *)(unaff_x19 + 8);
  func_0x0001003adc0c();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return;
}



/* Entry: 1003b1fb8; end: 1003b200f;  */

void FUN_1003b1fb8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1003b1c5c(param_2);
    param_2 = param_2 + 0x18;
  }
  return;
}



/* Entry: 1003b2010; end: 1003b2033;  */

void FUN_1003b2010(void)

{
  return;
}



/* Entry: 1003b2034; end: 1003b20bb;  */

long FUN_1003b2034(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001003b2018(param_1,param_1);
  }
  return param_1;
}



/* Entry: 1003b20bc; end: 1003b20d7;  */

void FUN_1003b20bc(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1003b20d8; end: 1003b2107;  */

long FUN_1003b20d8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1003b20bc(param_1,param_1);
  }
  return param_1;
}



/* Entry: 1003b2108; end: 1003b210f;  */

void FUN_1003b2108(void)

{
  long lVar1;
  long in_x9;
  int extraout_w10;
  long *unaff_x19;
  
  lVar1 = in_x9 + 0x10;
  FUN_1003adbcc();
  if ((lVar1 != 0) && (func_0x0001003adbd8(), lVar1 != 0)) {
    do {
      FUN_1003b2154();
    } while (extraout_w10 != 0);
  }
  *unaff_x19 = lVar1;
  return;
}



/* Entry: 1003b2110; end: 1003b2153;  */

void FUN_1003b2110(long param_1)

{
  int extraout_w10;
  long *unaff_x19;
  
  FUN_1003adbcc();
  if ((param_1 != 0) && (func_0x0001003adbd8(), param_1 != 0)) {
    do {
      FUN_1003b2154();
    } while (extraout_w10 != 0);
  }
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1003b2154; end: 1003b2163;  */

void FUN_1003b2154(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1003b2164; end: 1003b21bf;  */

long FUN_1003b2164(undefined8 param_1,char *param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x19;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined1 auStack_40 [16];
  
  FUN_1003acc80();
  lVar1 = unaff_x19;
  if (*param_2 == '\f') {
    func_0x000107c30f54();
  }
  else {
    if (*param_2 != '\v') {
      return 0;
    }
    FUN_1003b21c0();
  }
  uStack_50 = 0;
  if (*(long *)(lVar1 + 0x10) != 0) {
    do {
      FUN_1003b2274();
      uStack_50 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_48 = 0xff00;
  FUN_1003ad9a4(auStack_40,&uStack_50);
  FUN_1003add54();
  func_0x0001003aef5c();
  FUN_1003a8c94(&uStack_50);
  return unaff_x19;
}



/* Entry: 1003b21c0; end: 1003b21e7;  */

void FUN_1003b21c0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR____dynamic_cast_110346c00)
              (*(long *)(param_1 + 8),&PTR_DAT_1107e3600,&PTR_DAT_110d7dac0,0);
    return;
  }
  return;
}



/* Entry: 1003b21e8; end: 1003b2273;  */

undefined8 FUN_1003b21e8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined1 auStack_40 [16];
  
  uStack_50 = 0;
  if (*param_2 != 0) {
    do {
      FUN_1003b2274();
      uStack_50 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_48 = 0xff00;
  FUN_1003ad9a4(auStack_40,&uStack_50);
  FUN_1003add54(param_1,auStack_40,param_3);
  func_0x0001003aef5c();
  FUN_1003a8c94(&uStack_50);
  return param_3;
}



/* Entry: 1003b2274; end: 1003b2293;  */

void FUN_1003b2274(void)

{
  bool bVar1;
  int *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1003b2294; end: 1003b22ef;  */

void FUN_1003b2294(long *param_1)

{
  undefined8 *puVar1;
  long in_x4;
  
  FUN_1003acf68();
  puVar1 = (undefined8 *)(in_x4 * 0x10 + 0x48);
  func_0x000107c60e20();
  FUN_1003b22f0();
  *puVar1 = &PTR_DAT_110d7bae8;
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1003b22f0; end: 1003b2377;  */

void FUN_1003b22f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_110d7bb78;
  param_1[1] = 1;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_5;
  lVar1 = 0x48;
  param_1[8] = 0;
  for (; param_5 != 0; param_5 = param_5 + -1) {
    *(undefined8 *)((long)param_1 + lVar1) = 0;
    ((undefined8 *)((long)param_1 + lVar1))[1] = 0;
    lVar1 = lVar1 + 0x10;
  }
  return;
}



/* Entry: 1003b2378; end: 1003b25ab;  */

undefined1  [16] FUN_1003b2378(byte *param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  ulong extraout_x8_03;
  undefined8 extraout_x8_04;
  ulong uVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  undefined8 extraout_x9_04;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong uVar8;
  ulong extraout_x10_03;
  undefined8 extraout_x10_04;
  long extraout_x11;
  ulong uVar9;
  undefined1 *puVar10;
  ulong unaff_x23;
  ulong uVar11;
  undefined8 unaff_x25;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 auStack_158 [5];
  undefined8 auStack_130 [5];
  undefined8 auStack_108 [5];
  undefined8 auStack_e0 [5];
  undefined8 auStack_b8 [5];
  undefined1 auStack_50 [8];
  char cStack_48;
  
  puVar10 = auStack_50;
  bVar1 = *param_1;
  uVar5 = (ulong)bVar1;
  if (bVar1 == 0x11) {
    func_0x000107c30f88(auStack_50,param_1);
    FUN_1003b2378(auStack_50);
    uVar9 = (ulong)puVar10 >> 8;
    func_0x0001003aef68();
    uVar6 = (ulong)puVar10 & 0xff0000;
    uVar7 = (ulong)puVar10 & 0xff000000;
    uVar8 = (ulong)puVar10 & 0xffffffff00000000;
    uVar5 = param_2;
    goto LAB_1003b2494;
  }
  bVar2 = param_1[1];
  uVar11 = (ulong)bVar2;
  uVar9 = (ulong)(bVar2 & 1);
  puVar10 = (undefined1 *)0x2;
  uVar6 = uVar5;
  uVar7 = uVar5;
  uVar8 = uVar5;
  switch(uVar5) {
  case 0:
    break;
  default:
    if ((bVar1 & 0xfe) != 8) {
      if (bVar1 - 10 < 7) {
        func_0x0001008d6b60();
                    /* WARNING: Could not recover jumptable at 0x0001003b253c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e5fb84b)[extraout_x11] * 4 + 0x1003b2418))();
        auVar13._8_8_ = param_2;
        auVar13._0_8_ = param_1;
        return auVar13;
      }
      func_0x000107c60ebc();
      func_0x0001003aef68();
      func_0x000107c39ff8();
      if (((uint)unaff_x27 & 0xff) < 7) {
        puVar3 = auStack_b8;
        switch(unaff_x27 & 0xff) {
        case 0:
          func_0x000107c39f4c();
        case 1:
          func_0x000107c39f48();
          auVar15._8_8_ = unaff_x28;
          auVar15._0_8_ = puVar3;
          return auVar15;
        case 3:
          puVar3 = auStack_e0;
          break;
        case 4:
          puVar3 = auStack_108;
          break;
        case 5:
          puVar3 = auStack_130;
          break;
        case 6:
          puVar3 = auStack_158;
        }
        FUN_1003b2700();
        *puVar3 = extraout_x8_04;
        puVar3[1] = 0xc0000000;
        puVar3[2] = extraout_x10_04;
        puVar3[3] = extraout_x9_04;
        puVar3[4] = unaff_x25;
        func_0x000107c61184();
        func_0x000107c6103c();
        func_0x0001003b270c();
        FUN_1003b2718(unaff_x23,uVar11);
        unaff_x27 = unaff_x23;
        unaff_x28 = uVar11;
      }
      auVar14._8_8_ = unaff_x28;
      auVar14._0_8_ = unaff_x27;
      return auVar14;
    }
    func_0x0001003adabc(auStack_50,param_1);
    bVar1 = param_1[1] >> 1 & 1;
    if (cStack_48 != '\x02') {
      bVar1 = 1;
    }
    uVar4 = 2;
    if (bVar1 == 0) {
      uVar4 = 5;
    }
    puVar10 = (undefined1 *)(ulong)uVar4;
    FUN_1003ad678();
    func_0x0001008d6b60();
    uVar6 = extraout_x8_03;
    uVar7 = extraout_x9_03;
    uVar8 = extraout_x10_03;
    break;
  case 2:
    func_0x0001008d6b60();
    uVar4 = 5;
    uVar6 = extraout_x8_02;
    uVar7 = extraout_x9_02;
    uVar8 = extraout_x10_02;
    goto code_r0x0001003b2478;
  case 3:
    func_0x0001008d6b60();
    uVar4 = 6;
    uVar6 = extraout_x8;
    uVar7 = extraout_x9;
    uVar8 = extraout_x10;
code_r0x0001003b2478:
    if ((bVar2 & 2) != 0) {
      uVar4 = 2;
    }
    puVar10 = (undefined1 *)(ulong)uVar4;
    break;
  case 4:
    func_0x0001008d6b60();
    uVar4 = 2;
    if ((bVar2 & 2) == 0) {
      uVar4 = 3;
    }
    puVar10 = (undefined1 *)(ulong)uVar4;
    uVar6 = extraout_x8_00;
    uVar7 = extraout_x9_00;
    uVar8 = extraout_x10_00;
    break;
  case 5:
    func_0x0001008d6b60();
    puVar10 = (undefined1 *)(ulong)(4 - (bVar2 & 2));
    uVar6 = extraout_x8_01;
    uVar7 = extraout_x9_01;
    uVar8 = extraout_x10_01;
    break;
  case 6:
  case 7:
  case 0xe:
    uVar7 = 0;
    goto code_r0x0001003b2490;
  case 0xd:
    uVar7 = 0x1000000;
code_r0x0001003b2490:
    puVar10 = (undefined1 *)0x2;
    uVar5 = 0;
    uVar8 = 0;
    uVar6 = 0x10000;
  }
LAB_1003b2494:
  auVar12._0_8_ = (uVar9 & 0xff) << 8 | uVar6 | (ulong)puVar10 & 0xff | uVar7 | uVar8;
  auVar12._8_8_ = uVar5;
  return auVar12;
}



/* Entry: 1003b25ac; end: 1003b25bf;  */

void FUN_1003b25ac(void)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 unaff_x25;
  byte unaff_w27;
  undefined8 in_stack_00000018;
  undefined8 auStack_108 [5];
  undefined8 auStack_e0 [5];
  undefined8 auStack_b8 [5];
  undefined8 auStack_90 [5];
  undefined8 auStack_68 [5];
  
  if (unaff_w27 < 7) {
    puVar1 = auStack_68;
    switch(unaff_w27) {
    case 0:
      func_0x000107c39f4c();
    case 1:
      func_0x000107c39f48();
      return;
    case 3:
      puVar1 = auStack_90;
      break;
    case 4:
      puVar1 = auStack_b8;
      break;
    case 5:
      puVar1 = auStack_e0;
      break;
    case 6:
      puVar1 = auStack_108;
    }
    FUN_1003b2700();
    *puVar1 = extraout_x8;
    puVar1[1] = 0xc0000000;
    puVar1[2] = extraout_x10;
    puVar1[3] = extraout_x9;
    puVar1[4] = unaff_x25;
    func_0x000107c61184();
    func_0x000107c6103c();
    func_0x0001003b270c();
    FUN_1003b2718(in_stack_00000018);
  }
  return;
}



/* Entry: 1003b25c0; end: 1003b26ff;  */

void FUN_1003b25c0(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 auStack_108 [5];
  undefined8 auStack_e0 [5];
  undefined8 auStack_b8 [5];
  undefined8 auStack_90 [5];
  undefined8 auStack_68 [5];
  
  if (param_1 < 7) {
    puVar1 = auStack_68;
    switch(param_1) {
    case 0:
      func_0x000107c39f4c();
    case 1:
      func_0x000107c39f48();
      return;
    case 3:
      puVar1 = auStack_90;
      break;
    case 4:
      puVar1 = auStack_b8;
      break;
    case 5:
      puVar1 = auStack_e0;
      break;
    case 6:
      puVar1 = auStack_108;
    }
    FUN_1003b2700();
    *puVar1 = extraout_x8;
    puVar1[1] = 0xc0000000;
    puVar1[2] = extraout_x10;
    puVar1[3] = extraout_x9;
    puVar1[4] = param_3;
    func_0x000107c61184();
    func_0x000107c6103c();
    func_0x0001003b270c();
    FUN_1003b2718(param_4);
  }
  return;
}



/* Entry: 1003b2700; end: 1003b2717;  */

void FUN_1003b2700(void)

{
  return;
}



/* Entry: 1003b2718; end: 1003b27b3;  */

undefined1 * FUN_1003b2718(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_48;
  func_0x000107c61318(puVar1,0x10,&UNK_10f7cf8f9);
  FUN_1003b27b4();
  func_0x000107c60eec();
  if (((ulong)puVar1 & 1) == 0) {
    FUN_1003b27b4();
    func_0x000107c60f04();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  func_0x000107c60e78();
  return param_1;
}



/* Entry: 1003b27b4; end: 1003b27c7;  */

void FUN_1003b27b4(void)

{
  return;
}



/* Entry: 1003b27c8; end: 1003b2a23;  */

void FUN_1003b27c8(ulong param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  byte bStack_58;
  
  ppuVar5 = &puStack_120;
  puVar2 = param_3;
  func_0x000107c613d0();
  puVar3 = (undefined2 *)(puVar2 + 5);
  func_0x000107c610a0();
  if (puVar3 == (undefined2 *)0x0) {
    func_0x000107c30e0c(&PTR____CFConstantStringClassReference_110f9e078);
code_r0x0001003b2a1c:
    func_0x000107c39f4c();
    goto LAB_1003acfa0;
  }
  *puVar3 = 0x6573;
  *(undefined1 *)(puVar3 + 1) = 0x74;
  uVar1 = *param_3;
  func_0x000107c60e84();
  *(undefined1 *)((long)puVar3 + 3) = uVar1;
  puVar6 = (undefined1 *)0x0;
  while( true ) {
    if (puVar2 <= puVar6 + 1) break;
    ((undefined1 *)((long)puVar3 + (long)puVar6))[4] = (param_3 + 1)[(long)puVar6];
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)((undefined1 *)((long)puVar3 + (long)puVar6) + 4) = 0x3a;
  puVar4 = puVar3;
  func_0x000107c612e8(puVar3);
  func_0x000107c60fd0(puVar3);
  switch(param_1 & 0xff) {
  case 0:
    goto code_r0x0001003b2a1c;
  case 1:
LAB_1003acfa0:
    func_0x000107c39f48();
    FUN_1003acf94();
    return;
  case 2:
    bStack_58 = (byte)(param_1 >> 0x10) & 1;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc0000000;
    pcStack_70 = FUN_1008e363c;
    puStack_68 = &UNK_110d7a288;
    puVar7 = &DAT_10f7cf8ef;
    ppuVar5 = &puStack_80;
    uStack_60 = param_4;
    break;
  case 3:
    FUN_1003b2700();
    uStack_a0 = 0xc0000000;
    puStack_98 = &UNK_10b9679ac;
    puStack_90 = &UNK_110d7a2a8;
    puVar7 = &DAT_10f7cf8f1;
    ppuVar5 = &puStack_a8;
    uStack_88 = param_4;
    break;
  case 4:
    FUN_1003b2700();
    uStack_c8 = 0xc0000000;
    puStack_c0 = &UNK_10b9679dc;
    puStack_b8 = &UNK_110d7a2c8;
    puVar7 = &DAT_10f7cf8f3;
    ppuVar5 = &puStack_d0;
    uStack_b0 = param_4;
    break;
  case 5:
    FUN_1003b2700();
    uStack_f0 = 0xc0000000;
    puStack_e8 = &UNK_10b967a04;
    puStack_e0 = &UNK_110d7a2e8;
    puVar7 = &DAT_10f7cf8f5;
    ppuVar5 = &puStack_f8;
    uStack_d8 = param_4;
    break;
  case 6:
    FUN_1003b2700();
    uStack_118 = 0xc0000000;
    puStack_110 = &UNK_10b967a2c;
    puStack_108 = &UNK_110d7a308;
    puVar7 = &DAT_10f7cf8f7;
    uStack_100 = param_4;
    break;
  default:
    goto LAB_1003b29f4;
  }
  func_0x000107c61184(ppuVar5);
  func_0x000107c6103c();
  func_0x0001003b270c();
  FUN_1003b2718(param_5,puVar3,puVar4,&UNK_10f7cf8e9,puVar7);
LAB_1003b29f4:
  return;
}



/* Entry: 1003b2a24; end: 1003b2a3b;  */

void FUN_1003b2a24(void)

{
  FUN_1003acf94();
  return;
}



/* Entry: 1003b2a3c; end: 1003b2aab;  */

void FUN_1003b2a3c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  FUN_1003ad420();
  FUN_1003b2aac();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) goto LAB_1003b2a68;
  func_0x0001003ad494();
  if ((bool)in_ZR) {
    lVar1 = 0;
    goto LAB_1003b2a68;
  }
  if (unaff_x22 == 0) {
    func_0x0001003ad4a0();
LAB_1003b2a8c:
    FUN_1003b2ad4();
  }
  else {
    func_0x0001003ad690();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x0001003ad6a0();
      goto LAB_1003b2a8c;
    }
    func_0x000107c30e7c();
  }
  func_0x0001003ad5b4();
  FUN_1003b2aac();
  lVar1 = *(long *)(unaff_x19 + 0x28);
LAB_1003b2a68:
  func_0x0001003ad5c8(lVar1);
  return;
}



/* Entry: 1003b2aac; end: 1003b2ad3;  */

ulong FUN_1003b2aac(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  
  lVar2 = 0;
  while (func_0x0001003ad468(lVar2), (bool)in_ZR) {
    lVar2 = extraout_x8 + 8;
    in_ZR = 1;
  }
  uVar1 = (extraout_x10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (extraout_x10 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return extraout_x9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 1003b2ad4; end: 1003b2b4f;  */

/* WARNING: Removing unreachable block (ram,0x0001003ad788) */

void FUN_1003b2ad4(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  char *unaff_x19;
  long unaff_x21;
  long unaff_x24;
  
  FUN_1003ad528();
  func_0x0001003ad53c();
  func_0x0001003ad55c();
  func_0x0001003ad574();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x0001003ad58c(uVar1);
  while (unaff_x24 != 0) {
    if (-1 < *unaff_x19) {
      lVar2 = unaff_x21;
      FUN_1008d6b74();
      func_0x0001003ad6d4();
      FUN_1003b2aac();
      func_0x0001003ad6ec();
      FUN_1008d6b90(extraout_x8_00 + lVar2 * 0x10);
    }
    FUN_1003ad77c();
  }
  return;
}



/* Entry: 1003b2b50; end: 1003b2b87;  */

void FUN_1003b2b50(void)

{
  bool bVar1;
  long *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1003b2b88; end: 1003b2c8b;  */

void FUN_1003b2b88(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  long extraout_x8;
  undefined1 uVar6;
  long extraout_x9;
  ulong extraout_x10;
  ulong extraout_x11;
  long extraout_x12;
  ulong extraout_x13;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x19;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = param_3;
  FUN_1003af450();
  bVar4 = (byte)lVar5;
  func_0x0001003af730();
  func_0x0001003af83c(*unaff_x20);
  lVar5 = extraout_x9;
  uVar7 = extraout_x13;
  while( true ) {
    uVar7 = uVar7 & extraout_x10;
    uVar9 = *(ulong *)(extraout_x8 + uVar7);
    for (uVar10 = (uVar9 ^ extraout_x11) + extraout_x12 &
                  (uVar9 ^ extraout_x11 ^ 0xffffffffffffffff) & 0x8080808080808080; uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar8 = unaff_x20[1];
      plVar3 = (long *)(uVar7 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & extraout_x10)
      ;
      if (*(long *)(lVar8 + (long)plVar3 * 0x10) == param_3) {
        uVar6 = 0;
        lVar5 = extraout_x8;
        goto LAB_1003b2c34;
      }
    }
    if ((uVar9 & ~uVar9 << 6 & 0x8080808080808080) != 0) break;
    lVar5 = lVar5 + 8;
    uVar7 = lVar5 + uVar7;
  }
  plVar3 = unaff_x20;
  FUN_1003b2c8c();
  lVar5 = *unaff_x20;
  plVar1 = (long *)(unaff_x20[1] + (long)plVar3 * 0x10);
  lVar8 = *param_4;
  *plVar1 = param_3;
  plVar1[1] = lVar8;
  *(byte *)(lVar5 + (long)plVar3) = bVar4 & 0x7f;
  func_0x0001003ad5f8();
  lVar5 = *unaff_x20;
  lVar8 = unaff_x20[1];
  uVar6 = 1;
LAB_1003b2c34:
  *unaff_x19 = lVar5 + (long)plVar3;
  unaff_x19[1] = lVar8 + (long)plVar3 * 0x10;
  *(undefined1 *)(unaff_x19 + 2) = uVar6;
  return;
}



/* Entry: 1003b2c8c; end: 1003b2cfb;  */

void FUN_1003b2c8c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  FUN_1003ad420();
  FUN_1003b2cfc();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) goto LAB_1003b2cb8;
  func_0x0001003ad494();
  if ((bool)in_ZR) {
    lVar1 = 0;
    goto LAB_1003b2cb8;
  }
  if (unaff_x22 == 0) {
    func_0x0001003ad4a0();
LAB_1003b2cdc:
    FUN_1003b2d24();
  }
  else {
    func_0x0001003ad690();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x0001003ad6a0();
      goto LAB_1003b2cdc;
    }
    func_0x000107c30e94();
  }
  func_0x0001003ad5b4();
  FUN_1003b2cfc();
  lVar1 = *(long *)(unaff_x19 + 0x28);
LAB_1003b2cb8:
  func_0x0001003ad5c8(lVar1);
  return;
}



/* Entry: 1003b2cfc; end: 1003b2d23;  */

ulong FUN_1003b2cfc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  
  lVar2 = 0;
  while (func_0x0001003ad468(lVar2), (bool)in_ZR) {
    lVar2 = extraout_x8 + 8;
    in_ZR = 1;
  }
  uVar1 = (extraout_x10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (extraout_x10 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return extraout_x9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 1003b2d24; end: 1003b2d9b;  */

/* WARNING: Removing unreachable block (ram,0x0001003ad788) */

void FUN_1003b2d24(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  char *unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x24;
  undefined8 uVar2;
  
  FUN_1003ad528();
  func_0x0001003ad53c();
  func_0x0001003ad55c();
  func_0x0001003ad574();
  uVar2 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar2 = extraout_x8;
  }
  func_0x0001003ad58c(uVar2);
  while (unaff_x24 != 0) {
    if (-1 < *unaff_x19) {
      puVar1 = unaff_x21;
      FUN_1008d6ba8();
      func_0x0001003ad6d4();
      FUN_1003b2cfc();
      func_0x0001003ad6ec();
      uVar2 = *unaff_x21;
      puVar1 = (undefined8 *)(extraout_x8_00 + (long)puVar1 * 0x10);
      puVar1[1] = unaff_x21[1];
      *puVar1 = uVar2;
    }
    FUN_1003ad77c();
  }
  return;
}



/* Entry: 1003b2d9c; end: 1003b2dd7;  */

void FUN_1003b2d9c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *in_stack_00000038;
  
  if (in_stack_00000038 == (long *)0x0) {
    return;
  }
  plVar1 = in_stack_00000038 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    FUN_1003a8364();
    FUN_1003ac8f0();
    if (in_stack_00000038 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003ac8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*in_stack_00000038 + 8))(in_stack_00000038);
      return;
    }
  }
  return;
}



/* Entry: 1003b2dd8; end: 1003b2def;  */

void FUN_1003b2dd8(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  return;
}



/* Entry: 1003b2df0; end: 1003b2e07;  */

void FUN_1003b2df0(void)

{
  return;
}



/* Entry: 1003b2e08; end: 1003b2e23;  */

long * FUN_1003b2e08(long *param_1)

{
  if (*param_1 == 1) {
    return param_1;
  }
  func_0x000107c3a0d8();
  param_1 = (long *)((long)param_1 << 3);
  func_0x000107c610a0(param_1);
  func_0x000107c60ee4();
  return param_1;
}



/* Entry: 1003b2e24; end: 1003b2e53;  */

long FUN_1003b2e24(long param_1)

{
  param_1 = param_1 << 3;
  func_0x000107c610a0(param_1);
  func_0x000107c60ee4();
  return param_1;
}



/* Entry: 1003b2e54; end: 1003b2e5b;  */

void FUN_1003b2e54(void)

{
  return;
}



/* Entry: 1003b2e5c; end: 1003b2f37;  */

void FUN_1003b2e5c(long param_1,long param_2,long param_3)

{
  undefined8 *extraout_x8;
  ulong *extraout_x8_00;
  ulong uVar1;
  int *extraout_x8_01;
  uint *extraout_x8_02;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 + 2;
  do {
    if (param_2 == lVar2) {
      return;
    }
    switch(*(undefined1 *)(param_3 + -2)) {
    case 1:
      func_0x000107c39f48();
    case 0:
      func_0x000107c39f4c();
      return;
    case 2:
      FUN_1003b2f38();
      FUN_1003b2f48(param_1,lVar2);
      break;
    case 3:
      FUN_1003b2f38();
      *(undefined8 *)(param_1 + lVar2 * 8) = *extraout_x8;
      break;
    case 4:
      FUN_1003b2f38();
      uVar1 = (ulong)(*extraout_x8_01 != 0);
      goto code_r0x0001003b2f08;
    case 5:
      FUN_1003b2f38();
      uVar1 = (ulong)*extraout_x8_02;
      goto code_r0x0001003b2f08;
    case 6:
      FUN_1003b2f38();
      uVar1 = *extraout_x8_00;
code_r0x0001003b2f08:
      *(ulong *)(param_1 + lVar2 * 8) = uVar1;
    }
    lVar2 = lVar2 + 1;
    param_3 = param_3 + 0x10;
  } while( true );
}



/* Entry: 1003b2f38; end: 1003b2f47;  */

void FUN_1003b2f38(void)

{
  return;
}



/* Entry: 1003b2f48; end: 1003b2fa7;  */

void FUN_1003b2f48(long param_1,long param_2,int param_3,long param_4)

{
  if (*(long *)(param_1 + param_2 * 8) != 0) {
    func_0x000107c607f0();
  }
  if (param_4 != 0) {
    if (param_3 == 0) {
      func_0x000107c61174(param_4);
    }
    else {
      func_0x000107c40794();
    }
  }
  *(long *)(param_1 + param_2 * 8) = param_4;
  return;
}



/* Entry: 1003b2fa8; end: 1003b2fd7;  */

void FUN_1003b2fa8(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 == 2) {
    func_0x0001003adc0c(&stack0x00000010);
    func_0x000104bda960();
    return;
  }
  if (in_stack_00000008 == 1) {
    FUN_1003b2ff8(&stack0x00000010);
    func_0x0001003b2b60();
    return;
  }
  return;
}



/* Entry: 1003b2fd8; end: 1003b2ff7;  */

void FUN_1003b2fd8(void)

{
  FUN_1003b2ff8();
  func_0x0001003b2b60();
  return;
}



/* Entry: 1003b2ff8; end: 1003b301b;  */

undefined8 FUN_1003b2ff8(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1003b301c; end: 1003b3087; +[SCWithComposerRuntimeLazyImpl automaticCreationWithValdiRuntime:initializationBlock:] */

void FUN_1003b301c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c46eac();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1003b3088; end: 1003b3137; -[SCWithComposerRuntimeLazyImpl initWithInitializationBlock:isAutoCreation:valdiRuntimeProvider:] */

undefined1 *
FUN_1003b3088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126ff418;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003b3138; end: 1003b3173;  */

void FUN_1003b3138(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003b3174; end: 1003b3343; -[SCSnapProServices initWithProfilesProvider:userProfileIdProvider:popularStatusProvider:preferencesManager:highlightsReporter:publicProfileManager:subscriptionWorkflowStarter:highlightsProvider:massSnapPostSignalService:] */

undefined1 *
FUN_1003b3174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_112704b08;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003b3344; end: 1003b33a7;  */

void FUN_1003b3344(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003b33a8; end: 1003b33c3; -[SCSnapProServices profilesProvider] */

undefined8 FUN_1003b33a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003b33c4; end: 1003b340f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b33c4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fea2a8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003b3410; end: 1003b34c7;  */

void FUN_1003b3410(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003b34c8; end: 1003b34cf;  */

void FUN_1003b34c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003b34d0; end: 1003b3523;  */

void FUN_1003b34d0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003b3524; end: 1003b3533;  */

void FUN_1003b3524(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10022c6a4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a7fb0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar8 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar8 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  uVar8 = uVar9;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003b3534; end: 1003b387b;  */

void FUN_1003b3534(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10022c6a4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a7fb0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar7 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1003b387c; end: 1003b3883;  */

void FUN_1003b387c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003b3884; end: 1003b38d7;  */

void FUN_1003b3884(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003b38d8; end: 1003b39bb; -[SCMessagingExperimentServiceProvider provide] */

void FUN_1003b38d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba438;
  func_0x000107c610f4(PTR_PTR_1126ba438);
  func_0x000107c477b0();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003b39bc; end: 1003b3a2f; -[SCMessagingExperimentServices initWithMessagingExperimentService:] */

undefined1 * FUN_1003b39bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fd9f0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



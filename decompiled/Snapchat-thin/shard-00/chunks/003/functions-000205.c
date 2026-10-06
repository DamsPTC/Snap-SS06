/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10049dc64; end: 10049dc8f;  */

long FUN_10049dc64(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049dc90; end: 10049dc97;  */

void FUN_10049dc90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049dc98; end: 10049dd47;  */

void FUN_10049dc98(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5dfc0;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049dd48);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049de48(&uStack_50);
  }
  FUN_10049de74();
  return;
}



/* Entry: 10049dd48; end: 10049de47;  */

void FUN_10049dd48(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5e000;
  puVar4[3] = &PTR_DAT_110a5e078;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110a5e050;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049de48(&uStack_50);
  return;
}



/* Entry: 10049de48; end: 10049de73;  */

long FUN_10049de48(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049de74; end: 10049de7b;  */

void FUN_10049de74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049de7c; end: 10049df33;  */

void FUN_10049de7c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5bb48;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049df34);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049e030(&uStack_50);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10049df34; end: 10049e027;  */

void FUN_10049df34(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5bb88;
  puVar4[3] = &PTR_DAT_110a5bc38;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  FUN_10049e028();
  puVar4[3] = &PTR_DAT_110a5bbd8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049e030(&uStack_50);
  return;
}



/* Entry: 10049e028; end: 10049e02f;  */

void FUN_10049e028(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049e030; end: 10049e05b;  */

long FUN_10049e030(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049e05c; end: 10049e14b;  */

void FUN_10049e05c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126e3038;
    func_0x000107c61158(PTR_PTR_1126e3038);
    uVar3 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61174(param_2);
      ppuStack_38 = &PTR_DAT_110d98ff8;
      uStack_40 = param_2;
      FUN_1000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_10049e14c);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_1000df524(&uStack_30);
      func_0x000107c61170(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_10049e250(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_10049e240();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x00010049e280();
  return;
}



/* Entry: 10049e14c; end: 10049e23f;  */

void FUN_10049e14c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110d99038;
  puVar1[3] = &PTR_DAT_110d990c0;
  puVar2 = puVar5;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar3 = puVar2;
  FUN_1000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10049e240();
    } while (extraout_w10 != 0);
  }
  func_0x000107c61174(puVar5);
  puVar1[6] = puVar5;
  func_0x000107c61108(puVar2);
  func_0x000107c61170(puVar5);
  puVar1[3] = &PTR_DAT_110d99088;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049e250(&uStack_50);
  return;
}



/* Entry: 10049e240; end: 10049e24f;  */

void FUN_10049e240(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10049e250; end: 10049e277;  */

long FUN_10049e250(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049e278; end: 10049e287;  */

void FUN_10049e278(void)

{
  return;
}



/* Entry: 10049e288; end: 10049e33f;  */

void FUN_10049e288(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5f5b8;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049e340);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049e43c(&uStack_50);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10049e340; end: 10049e43b;  */

void FUN_10049e340(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5f5f8;
  puVar4[3] = &PTR_DAT_110a5f688;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110a5f648;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049e43c(&uStack_50);
  return;
}



/* Entry: 10049e43c; end: 10049e467;  */

long FUN_10049e43c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049e468; end: 10049e46f;  */

void FUN_10049e468(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049e470; end: 10049e51b;  */

void FUN_10049e470(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5f388;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049e51c);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049e61c(&uStack_50);
  }
  FUN_10049e648();
  return;
}



/* Entry: 10049e51c; end: 10049e61b;  */

void FUN_10049e51c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5f3c8;
  puVar4[3] = &PTR_DAT_110a5f448;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110a5f418;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049e61c(&uStack_50);
  return;
}



/* Entry: 10049e61c; end: 10049e647;  */

long FUN_10049e61c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049e648; end: 10049e64f;  */

void FUN_10049e648(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049e650; end: 10049e6fb;  */

void FUN_10049e650(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5ddc0;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049e6fc);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049e7f4(&uStack_50);
  }
  func_0x00010049e824();
  return;
}



/* Entry: 10049e6fc; end: 10049e7f3;  */

void FUN_10049e6fc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5de00;
  puVar4[3] = &PTR_DAT_110a5de80;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110a5de50;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049e7f4(&uStack_50);
  return;
}



/* Entry: 10049e7f4; end: 10049e81b;  */

long FUN_10049e7f4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049e81c; end: 10049e82b;  */

void FUN_10049e81c(void)

{
  return;
}



/* Entry: 10049e82c; end: 10049e91b;  */

void FUN_10049e82c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126db3b0;
    func_0x000107c61158(PTR_PTR_1126db3b0);
    uVar3 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61174(param_2);
      ppuStack_38 = &PTR_DAT_110ab9c78;
      uStack_40 = param_2;
      FUN_1000de59c(&uStack_30,&ppuStack_38,&uStack_40,&UNK_108c48738);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_1000df524(&uStack_30);
      func_0x000107c61170(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x000107c2a850(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_10048d2b0();
        } while (extraout_w10 != 0);
      }
    }
  }
  FUN_10049e91c();
  return;
}



/* Entry: 10049e91c; end: 10049e923;  */

void FUN_10049e91c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049e924; end: 10049e9cf;  */

void FUN_10049e924(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5bf20;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049e9d0);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049ead0(&uStack_50);
  }
  FUN_10049eafc();
  return;
}



/* Entry: 10049e9d0; end: 10049eac7;  */

void FUN_10049e9d0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5bf60;
  puVar4[3] = &PTR_DAT_110a5bfe0;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  FUN_10049eac8();
  puVar4[3] = &PTR_DAT_110a5bfb0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049ead0(&uStack_50);
  return;
}



/* Entry: 10049eac8; end: 10049eacf;  */

void FUN_10049eac8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049ead0; end: 10049eafb;  */

long FUN_10049ead0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049eafc; end: 10049eb03;  */

void FUN_10049eafc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049eb04; end: 10049ebaf;  */

void FUN_10049eb04(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5eea0;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049ebb0);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049ecb0(&uStack_50);
  }
  FUN_10049ecdc();
  return;
}



/* Entry: 10049ebb0; end: 10049ecaf;  */

void FUN_10049ebb0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5eee0;
  puVar4[3] = &PTR_DAT_110a5ef60;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110a5ef30;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049ecb0(&uStack_50);
  return;
}



/* Entry: 10049ecb0; end: 10049ecdb;  */

long FUN_10049ecb0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049ecdc; end: 10049ece3;  */

void FUN_10049ecdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049ece4; end: 10049ed9b;  */

void FUN_10049ece4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5dc78;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049ed9c);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049ee98(&uStack_50);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10049ed9c; end: 10049ee97;  */

void FUN_10049ed9c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5dcb8;
  puVar4[3] = &PTR_DAT_110a5dd38;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110a5dd08;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049ee98(&uStack_50);
  return;
}



/* Entry: 10049ee98; end: 10049eec3;  */

long FUN_10049ee98(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049eec4; end: 10049f06b;  */

void FUN_10049eec4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 - 1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_10049f06c(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    func_0x000107c60e20(lVar2);
    FUN_10049f06c(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10049f06c; end: 10049f083;  */

void FUN_10049f06c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10049f084; end: 10049f2eb;  */

void FUN_10049f084(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong unaff_x24;
  long lStack_80;
  long lStack_78;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  uVar2 = param_2;
  func_0x000107c49820();
  func_0x000107c61170(param_2);
  FUN_1000de430(&lStack_80,param_3);
  FUN_10049f2ec();
  iVar9 = (int)uVar2;
  uVar12 = (ulong)iVar9;
  uVar10 = *(ulong *)(lVar11 + 0x38);
  if (uVar10 != 0) {
    uVar4 = uVar10 - 1;
    if ((uVar10 & uVar4) == 0) {
      unaff_x24 = uVar4 & uVar12;
    }
    else {
      unaff_x24 = uVar12;
      if (uVar10 <= uVar12) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar12 / uVar10;
        }
        unaff_x24 = uVar12 - uVar8 * uVar10;
      }
    }
    plVar6 = *(long **)(*(long *)(lVar11 + 0x30) + unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10049f174;
          uVar8 = plVar6[1];
          if (uVar8 != uVar12) break;
          if (*(int *)(plVar6 + 2) == iVar9) goto LAB_10049f298;
        }
        if ((uVar10 & uVar4) == 0) {
          uVar8 = uVar8 & uVar4;
        }
        else if (uVar10 <= uVar8) {
          uVar1 = 0;
          if (uVar10 != 0) {
            uVar1 = uVar8 / uVar10;
          }
          uVar8 = uVar8 - uVar1 * uVar10;
        }
      } while (uVar8 == unaff_x24);
    }
  }
LAB_10049f174:
  plVar3 = (long *)0x28;
  func_0x000107c60e20();
  plVar6 = (long *)(lVar11 + 0x40);
  uStack_58 = 1;
  *plVar3 = 0;
  plVar3[1] = uVar12;
  *(int *)(plVar3 + 2) = iVar9;
  plVar3[4] = lStack_78;
  plVar3[3] = lStack_80;
  lStack_80 = 0;
  lStack_78 = 0;
  plStack_60 = plVar6;
  if ((uVar10 == 0) ||
     (*(float *)(lVar11 + 0x50) * (float)uVar10 < (float)(*(long *)(lVar11 + 0x48) + 1))) {
    plStack_68 = plVar3;
    func_0x000107c31b94(uVar10 << 1);
    FUN_10049eec4(lVar11 + 0x30);
    uVar10 = *(ulong *)(lVar11 + 0x38);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar12;
    }
    else {
      unaff_x24 = uVar12;
      if (uVar10 <= uVar12) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar12 / uVar10;
        }
        unaff_x24 = uVar12 - uVar4 * uVar10;
      }
    }
  }
  lVar5 = *(long *)(lVar11 + 0x30);
  plVar7 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar3 = *plVar6;
    *plVar6 = (long)plVar3;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar6;
    if (*plVar3 != 0) {
      uVar12 = *(ulong *)(*plVar3 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar12 = uVar12 & uVar10 - 1;
      }
      else if (uVar10 <= uVar12) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar12 / uVar10;
        }
        uVar12 = uVar12 - uVar4 * uVar10;
      }
      *(long **)(lVar5 + uVar12 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar7;
    *plVar7 = (long)plVar3;
  }
  plStack_68 = (long *)0x0;
  *(long *)(lVar11 + 0x48) = *(long *)(lVar11 + 0x48) + 1;
  FUN_10049f2f4(&plStack_68);
LAB_10049f298:
  FUN_1000df75c(&lStack_80);
  return;
}



/* Entry: 10049f2ec; end: 10049f2f3;  */

void FUN_10049f2ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049f2f4; end: 10049f337;  */

long * FUN_10049f2f4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1000df75c(lVar1 + 0x18);
    }
    func_0x000107c60e14(lVar1);
  }
  return param_1;
}



/* Entry: 10049f338; end: 10049f353;  */

void FUN_10049f338(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10049f354; end: 10049f3af;  */

long * FUN_10049f354(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1000df75c(plVar1 + 3);
    func_0x000107c60e14(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10049f3b0; end: 10049f3b7;  */

void FUN_10049f3b0(void)

{
  undefined8 in_stack_00000148;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_stack_00000148);
  return;
}



/* Entry: 10049f3b8; end: 10049f463;  */

void FUN_10049f3b8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5c078;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049f464);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049f560(&uStack_50);
  }
  FUN_10049f58c();
  return;
}



/* Entry: 10049f464; end: 10049f557;  */

void FUN_10049f464(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5c0b8;
  puVar4[3] = &PTR_DAT_110a5c170;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  FUN_10049f558();
  puVar4[3] = &PTR_DAT_110a5c108;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049f560(&uStack_50);
  return;
}



/* Entry: 10049f558; end: 10049f55f;  */

void FUN_10049f558(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049f560; end: 10049f58b;  */

long FUN_10049f560(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049f58c; end: 10049f59b;  */

void FUN_10049f58c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049f59c; end: 10049f64b;  */

void FUN_10049f59c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a601f0;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_108650db4);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x000107c28764(&uStack_50);
  }
  FUN_10049f64c();
  return;
}



/* Entry: 10049f64c; end: 10049f653;  */

void FUN_10049f64c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049f654; end: 10049f6ff;  */

void FUN_10049f654(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5e368;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_108630cdc);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x000107c2865c(&uStack_50);
  }
  FUN_10049f700();
  return;
}



/* Entry: 10049f700; end: 10049f707;  */

void FUN_10049f700(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049f708; end: 10049f7b7;  */

void FUN_10049f708(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5e5c8;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_1086330fc);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x000107c28694(&uStack_50);
  }
  FUN_10049f7b8();
  return;
}



/* Entry: 10049f7b8; end: 10049f7bf;  */

void FUN_10049f7b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10049f7c0; end: 10049f877;  */

void FUN_10049f7c0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5e4a0;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10049f878);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10049f978(&uStack_50);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10049f878; end: 10049f977;  */

void FUN_10049f878(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5e4e0;
  puVar4[3] = &PTR_DAT_110a5e558;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110a5e530;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10049f978(&uStack_50);
  return;
}



/* Entry: 10049f978; end: 10049f9a3;  */

long FUN_10049f978(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10049f9a4; end: 10049f9bb;  */

void FUN_10049f9a4(void)

{
  return;
}



/* Entry: 10049f9bc; end: 10049ff3f;  */

void FUN_10049f9bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  long lVar5;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined1 auStack_470 [224];
  undefined8 uStack_380;
  long lStack_378;
  undefined8 *puStack_360;
  undefined8 auStack_350 [4];
  undefined8 uStack_330;
  long lStack_328;
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined8 auStack_2e8 [3];
  undefined1 uStack_2d0;
  char cStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [176];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  long lStack_118;
  int iStack_110;
  undefined4 uStack_10c;
  char cStack_100;
  ulong auStack_f8 [2];
  undefined1 auStack_e8 [232];
  
  FUN_10049f9a4();
  FUN_10007847c(auStack_318,&DAT_10f68525a);
  FUN_10049ff40(&uStack_330);
  puVar1 = auStack_350;
  FUN_1004a00c0(puVar1,param_1 + 0x80);
  func_0x0001004a01c8();
  func_0x0001004a01d0();
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_DAT_110a73df0;
  FUN_1004a01dc(puVar2,auStack_350);
  puStack_360 = puVar2;
  FUN_100100ed0(auStack_2e8);
  FUN_1004a0230(auStack_e8);
  FUN_1004a0294(in_stack_000000b0,1);
  if (in_stack_000000b0 == 0) {
    uStack_1f8 = 0;
    uStack_200 = 0;
  }
  else {
    uStack_1f8 = *(undefined8 *)(in_stack_000000b0 + 0x20);
    uStack_200 = *(undefined8 *)(in_stack_000000b0 + 0x18);
    if (*(long *)(in_stack_000000b0 + 0x20) != 0) {
      do {
        func_0x0001004a0330();
      } while (extraout_w10 != 0);
    }
  }
  func_0x0001004a0340();
  *(undefined8 *)(in_stack_000000b0 + 8) = 0;
  *(undefined8 *)(in_stack_000000b0 + 0x10) = 0;
  func_0x0001004a0348(&PTR_DAT_110a73e40);
  func_0x0001004a0354();
  FUN_1000df75c(&uStack_200);
  FUN_1000dfb94(auStack_e8);
  FUN_1000df75c(auStack_2e8);
  lStack_378 = lStack_328;
  uStack_380 = uStack_330;
  if (lStack_328 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_00 != 0);
  }
  do {
    func_0x0001004a03f4();
  } while (extraout_w9 != 0);
  do {
    func_0x0001004a03f4();
  } while (extraout_w9_00 != 0);
  func_0x0001004a0404(&uStack_200);
  uStack_130 = 0x3e800000001e;
  uStack_138 = 0xfa0000000005;
  uStack_128 = 2;
  for (lVar5 = 0; lVar5 != 0xc; lVar5 = lVar5 + 4) {
    FUN_1002a91fc(auStack_1e8,*(undefined4 *)(&UNK_10df5b9cc + lVar5));
  }
  FUN_10002b838(auStack_300,&UNK_10f4bc74a);
  func_0x0001004a5f54(auStack_f8);
  if ((auStack_f8[0] == 0) || (FUN_1004a6058(auStack_f8[0],auStack_300), (int)auStack_f8[0] == 0)) {
    FUN_1004a6074(&lStack_118);
    if ((cStack_100 == '\x01') && (lStack_118 != CONCAT44(uStack_10c,iStack_110))) {
      func_0x0001004a0404(auStack_e8);
      puVar4 = auStack_e8;
      FUN_10006369c(puVar4,lStack_118,iStack_110 - (int)lStack_118);
      if (((ulong)puVar4 & 1) == 0) {
        func_0x000107c33c84();
      }
      else {
        FUN_1004a6384();
      }
      func_0x0001004a6500();
    }
    else {
      func_0x000107c33c84();
    }
    FUN_1002a2294(&lStack_118);
  }
  else {
    func_0x000107c33c40();
    if ((auStack_f8[0] & 1) == 0) {
      func_0x000107c33c84();
    }
    else {
      puVar4 = auStack_e8;
      func_0x0001004a0404();
      func_0x000107c33b40();
      ppuVar3 = *(undefined ***)(puVar4 + 0x10);
      if (*(int *)(puVar4 + 0x1c) != 6) {
        ppuVar3 = &PTR_PTR_1134051b0;
      }
      ppuVar3 = ppuVar3 + 5;
      func_0x000107c30240(ppuVar3,&UNK_10f4bc769,0x32,auStack_e8);
      if (((ulong)ppuVar3 & 1) == 0) {
        func_0x000107c30330(&lStack_118,auStack_e8);
        func_0x000107c33b40();
        func_0x000107c60ca0(&lStack_118);
        func_0x000107c33c84();
      }
      else {
        FUN_1004a6384();
      }
      func_0x0001004a6500();
    }
  }
  FUN_1004a65f8(auStack_f8);
  func_0x000107c60ca0(auStack_300);
  puVar1 = auStack_2e8;
  if (cStack_208 == '\0') {
    puVar1 = &uStack_200;
  }
  func_0x0001004a6628(auStack_470,puVar1);
  FUN_1004a693c(auStack_2e8);
  FUN_1004a6508(&uStack_200);
  auStack_2e8[0]._0_1_ = 0;
  uStack_2d0 = 0;
  FUN_1004a6998(extraout_x8,param_1,param_4,param_5,param_6,param_7,param_8,in_stack_00000060,
                in_stack_00000068,in_stack_00000070,param_2,param_3,in_stack_00000078,&uStack_380,
                &stack0xfffffffffffffc70,in_stack_00000080,in_stack_00000088,in_stack_00000090,
                in_stack_00000098,auStack_470,in_stack_000000a0,in_stack_000000a8,in_stack_000000b8,
                in_stack_000000c0,in_stack_000000c8,in_stack_000000d8,in_stack_000000e0,auStack_2e8)
  ;
  FUN_1005f1d8c(auStack_2e8);
  FUN_1004a6508(auStack_470);
  FUN_10054f94c(&stack0xfffffffffffffb80);
  FUN_10054f94c(&stack0xfffffffffffffc70);
  FUN_10054f9c4(&uStack_380);
  func_0x0001005f1dbc(&stack0xfffffffffffffc90);
  FUN_1004a65f8(&puStack_360);
  FUN_10049d10c(auStack_350);
  func_0x0001005f1de0(&uStack_330);
  FUN_100078bd8(auStack_318);
  return;
}



/* Entry: 10049ff40; end: 10049ff5b;  */

void FUN_10049ff40(void)

{
  undefined1 uStack_11;
  
  FUN_10049ff74(&uStack_11);
  return;
}



/* Entry: 10049ff5c; end: 10049ff73;  */

void FUN_10049ff5c(void)

{
  return;
}



/* Entry: 10049ff74; end: 10049ffdb;  */

undefined1  [16] FUN_10049ff74(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10049ff5c();
  FUN_10049ffdc();
  FUN_10049fff4();
  func_0x0001004a0050(uStack_30);
  *(undefined8 *)(extraout_x8 + 0x28) = 0;
  *(undefined8 *)(extraout_x8 + 0x30) = 0;
  *(undefined8 *)(extraout_x8 + 0x20) = 0;
  *(undefined8 *)(extraout_x8 + 0x10) = 0;
  *(undefined ***)(extraout_x8 + 0x18) = &PTR_DAT_110a78930;
  func_0x0001004a005c();
  func_0x0001004a0074();
  func_0x0001004a0084(uStack_28);
  if ((bool)in_ZR) {
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  auVar1._8_8_ = 1;
  auVar1._0_8_ = auStack_40;
  return auVar1;
}



/* Entry: 10049ffdc; end: 10049fff3;  */

void FUN_10049ffdc(void)

{
  return;
}



/* Entry: 10049fff4; end: 1004a0013;  */

void FUN_10049fff4(void)

{
  func_0x00010049ffe8();
  FUN_1004a0014();
  FUN_1004a0044();
  return;
}



/* Entry: 1004a0014; end: 1004a0043;  */

void FUN_1004a0014(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 1004a0044; end: 1004a00bf;  */

void FUN_1004a0044(undefined8 param_1)

{
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 1004a00c0; end: 1004a01b3;  */

undefined8 * FUN_1004a00c0(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  bool bVar4;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  
  func_0x0001004a00ac();
  if ((bool)in_ZR) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uStack_78 = 0;
    bVar4 = uVar1 <= uVar2;
    puStack_80 = param_1;
    if (uVar2 - uVar1 != 0) {
      func_0x000107c33bbc(uVar2 - uVar1);
      if (bVar4) {
        func_0x000107c29b3c();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1004a0178);
        (*pcVar3)();
      }
      func_0x000107c29b40(param_1 + 2);
      func_0x000107c33c88();
      func_0x000107c33904(0x30);
      while (uVar1 != uVar2) {
        func_0x000107c33c04();
        func_0x000107c60c94();
        FUN_10054f8dc(param_1 + 5,uVar1 + 0x18);
        func_0x000107c33c60();
      }
      func_0x000107c33a98();
      func_0x000107c29b44();
      param_1[1] = param_1 + 2;
    }
    uStack_78 = 1;
    func_0x000107c29b48(&puStack_80);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



/* Entry: 1004a01b4; end: 1004a01db;  */

void FUN_1004a01b4(void)

{
  return;
}



/* Entry: 1004a01dc; end: 1004a022f;  */

undefined8 * FUN_1004a01dc(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x000107c29dd8(param_1);
  }
  return param_1;
}



/* Entry: 1004a0230; end: 1004a0293;  */

void FUN_1004a0230(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_30;
  undefined1 uStack_28;
  
  FUN_1000dfa80();
  lStack_30 = param_2 + 8;
  uStack_28 = 1;
  func_0x000107c60d54();
  lVar4 = *(long *)(param_2 + 0xb8);
  uVar5 = *(undefined8 *)(param_2 + 0xb0);
  param_1[1] = *(undefined8 *)(param_2 + 0xb8);
  *param_1 = uVar5;
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
  FUN_100100f40(&lStack_30);
  return;
}



/* Entry: 1004a0294; end: 1004a047b;  */

long FUN_1004a0294(long *param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 1004a047c; end: 1004a04a7;  */

undefined8 * FUN_1004a047c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110d12118;
  param_1[1] = param_2;
  func_0x0001004a040c();
  return param_1;
}



/* Entry: 1004a04a8; end: 1004a04d7;  */

void FUN_1004a04a8(void)

{
  return;
}



/* Entry: 1004a04d8; end: 1004a04ef; -[SCASnapAccessTokenFetch setGetMode:] */

void FUN_1004a04d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11102db98,4,param_3,0);
  return;
}



/* Entry: 1004a04f0; end: 1004a0543; -[SCASnapAccessTokenFetch setTrySyncFirst:] */

void FUN_1004a04f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_1110229d8,9,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1004a0544; end: 1004a054f; -[SCSnapTokenMetricsInfo requestPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a0544(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e068);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1004a0550; end: 1004a0567; -[SCASnapAccessTokenFetch setRequestPath:] */

void FUN_1004a0550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111022958,6,param_3,0);
  return;
}



/* Entry: 1004a0568; end: 1004a0573; -[SCSnapTokenMetricsInfo requestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004a0568(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e070);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1004a0574; end: 1004a0593; -[SCASnapAccessTokenFetch setRequestId:] */

void FUN_1004a0574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ec2278,0xb,param_3,0);
  return;
}



/* Entry: 1004a0594; end: 1004a062f;  */

void FUN_1004a0594(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4acfc(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  puVar2 = PTR_PTR_1126d0308;
  func_0x000107c610f8(PTR_PTR_1126d0308);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126a7008;
  func_0x000107c610f8();
  func_0x000107c4750c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1004a0630; end: 1004a06ef; -[SCSystemBlizzardImpl initWithLogger:grapheneRegistry:] */

undefined1 *
FUN_1004a0630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f4b10;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    if (*(long *)((long)puVar1 + 8) == 0) {
      func_0x000106ac838c(*(undefined8 *)((long)puVar1 + 0x10),
                          &PTR____CFConstantStringClassReference_110e6d6b8,1);
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004a06f0; end: 1004a06ff; -[SCSystemBlizzardImpl logUserExternallyTrackedEvent:] */

void FUN_1004a06f0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0b2e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_logUserTrackedEvent__11260a5a8);
    return;
  }
  return;
}



/* Entry: 1004a0700; end: 1004a070b; -[SCASnapAccessTokenFetch getEventName] */

undefined ** FUN_1004a0700(void)

{
  return &PTR____CFConstantStringClassReference_110e6e7f8;
}



/* Entry: 1004a070c; end: 1004a0903; -[SCBlizzardSamplingRateResolver _retrieveSamplingPolicySync:event:] */

void FUN_1004a070c(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = param_2 + 8;
  func_0x000107c61148();
  func_0x000107c61170();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_2;
    func_0x000107c44490(param_2);
    func_0x000107c61180();
    func_0x000106ac2c20();
  }
  else {
    puVar2 = param_2 + 8;
    func_0x000107c61148();
    puVar1 = puVar2;
    func_0x000107c4f558();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126d0598;
    func_0x000107c610f4(PTR_PTR_1126d0598);
    puVar3 = puVar1;
    func_0x000107c5dc0c(puVar1);
    func_0x000107c61180();
    func_0x000107c4636c(puVar2);
    func_0x000107c61174(0);
    func_0x000107c61170(puVar3);
    puVar3 = param_2;
    if (puVar1 == (undefined *)0x0) {
      func_0x000107c44490(param_2);
      func_0x000107c61180();
      func_0x000106ac2e84();
    }
    else {
      func_0x000107c4e500(puVar2);
      if ((((0.0 <= param_1) && (func_0x000107c4e500(puVar2), param_1 <= 1.0)) &&
          (func_0x000107c4e4fc(puVar2), 0.0 <= param_1)) &&
         (func_0x000107c4e4fc(puVar2), param_1 <= 1.0)) {
        func_0x000107c61170(puVar1);
        goto LAB_1004a08c8;
      }
      func_0x000107c44490(param_2);
      func_0x000107c61180();
      func_0x000106ac2ff8();
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(0);
  }
  func_0x000107c61170(puVar1);
  func_0x000107c3c4c4(param_2);
  func_0x000107c61180();
  puVar2 = param_2;
LAB_1004a08c8:
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004a0904; end: 1004a090b; -[SCBlizzardEventLoggerAdapter graphene] */

undefined8 FUN_1004a0904(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1004a090c; end: 1004a0aa3;  */

void FUN_1004a090c(long param_1,undefined *param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  double dVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095c3d0);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095c3d0,&uStack_80,param_3 * 100);
      puStack_68 = (undefined1 *)&uStack_80;
      FUN_10007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        func_0x000107c60e14(auStack_60[0]);
      }
    }
  }
  puVar2 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  dVar4 = *(double *)(puVar2 + 0x28);
  if (dVar4 == 0.0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  else {
    FUN_10028941c();
    ppuVar3 = &PTR____CFConstantStringClassReference_110f3ddd8;
    if (600.0 < dVar4 - *(double *)(puVar2 + 0x28)) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110f3ddb8;
    }
    func_0x000107c61174(ppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1004a0aa4; end: 1004a0b0f; -[SCSnapTokenMainAppLogger timeSinceColdStartDimensionString] */

void FUN_1004a0aa4(long param_1)

{
  undefined **ppuVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_1 + 0x28);
  if (dVar2 == 0.0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  else {
    FUN_10028941c();
    ppuVar1 = &PTR____CFConstantStringClassReference_110f3ddd8;
    if (600.0 < dVar2 - *(double *)(param_1 + 0x28)) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f3ddb8;
    }
    func_0x000107c61174(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1004a0b10; end: 1004a0e67;  */

/* WARNING: Possible PIC construction at 0x0001004a0bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004a0c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004a0c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004a0c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004a0d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004a0d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004a0d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004a0e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004a0e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004a0ee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004a0ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004a0eec) */
/* WARNING: Removing unreachable block (ram,0x0001004a0e50) */
/* WARNING: Removing unreachable block (ram,0x0001004a0e60) */
/* WARNING: Removing unreachable block (ram,0x0001004a0ebc) */
/* WARNING: Removing unreachable block (ram,0x0001004a0ee4) */
/* WARNING: Removing unreachable block (ram,0x0001004a0e40) */
/* WARNING: Removing unreachable block (ram,0x0001004a0d8c) */
/* WARNING: Removing unreachable block (ram,0x0001004a0e18) */
/* WARNING: Removing unreachable block (ram,0x0001004a0e1c) */
/* WARNING: Removing unreachable block (ram,0x0001004a0e28) */
/* WARNING: Removing unreachable block (ram,0x0001004a0e30) */
/* WARNING: Removing unreachable block (ram,0x0001004a0e38) */
/* WARNING: Removing unreachable block (ram,0x0001004a0d40) */
/* WARNING: Removing unreachable block (ram,0x0001004a0d7c) */
/* WARNING: Removing unreachable block (ram,0x0001004a0d60) */
/* WARNING: Removing unreachable block (ram,0x0001004a0d30) */
/* WARNING: Removing unreachable block (ram,0x0001004a0ca0) */
/* WARNING: Removing unreachable block (ram,0x0001004a0d08) */
/* WARNING: Removing unreachable block (ram,0x0001004a0d14) */
/* WARNING: Removing unreachable block (ram,0x0001004a0d1c) */
/* WARNING: Removing unreachable block (ram,0x0001004a0c58) */
/* WARNING: Removing unreachable block (ram,0x0001004a0c90) */
/* WARNING: Removing unreachable block (ram,0x0001004a0c78) */
/* WARNING: Removing unreachable block (ram,0x0001004a0c98) */
/* WARNING: Removing unreachable block (ram,0x0001004a0c10) */
/* WARNING: Removing unreachable block (ram,0x0001004a0c48) */
/* WARNING: Removing unreachable block (ram,0x0001004a0c30) */
/* WARNING: Removing unreachable block (ram,0x0001004a0c50) */
/* WARNING: Removing unreachable block (ram,0x0001004a0bc8) */
/* WARNING: Removing unreachable block (ram,0x0001004a0c00) */
/* WARNING: Removing unreachable block (ram,0x0001004a0be8) */
/* WARNING: Removing unreachable block (ram,0x0001004a0c08) */
/* WARNING: Removing unreachable block (ram,0x0001004a0efc) */

void FUN_1004a0b10(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110c9a1d0);
    if (((int)plVar1 != 0) && (func_0x000107c61174(param_2), param_5 = param_2, param_2 != 0)) {
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1004a0e68; end: 1004a0f43;  */

/* WARNING: Possible PIC construction at 0x0001004a0ee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004a0ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004a0eec) */
/* WARNING: Removing unreachable block (ram,0x0001004a0efc) */

void FUN_1004a0e68(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  if (param_2 != 0) {
    FUN_1004a0f44(param_2,param_3,param_4,param_5,param_6,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1004a0f44; end: 1004a1297;  */

/* WARNING: Removing unreachable block (ram,0x0001004a1258) */

void FUN_1004a0f44(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *unaff_x25;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110c9a220);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f6ed215;
      }
      else {
        puVar2 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_b8,puVar2);
      func_0x000107c61174(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f6ed215;
      }
      else {
        func_0x000107c61178(param_3);
        puVar2 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_a0,puVar2);
      func_0x000107c61174(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f6ed215;
      }
      else {
        func_0x000107c61178(param_4);
        puVar2 = param_4;
        func_0x000107c3ac4c(param_4);
      }
      func_0x000107c61170(param_4);
      FUN_10002b838(auStack_88,puVar2);
      func_0x000107c61174(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f6ed215;
      }
      else {
        func_0x000107c61178(param_5);
        puVar2 = param_5;
        func_0x000107c3ac4c(param_5);
      }
      func_0x000107c61170(param_5);
      FUN_10002b838(auStack_70,puVar2);
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      FUN_10007e1e8(&uStack_d8,auStack_b8,&lStack_58,4);
      unaff_x25 = &uStack_d8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110c9a220,&uStack_d8,param_6);
      puStack_c0 = unaff_x25;
      FUN_10007e5dc(&puStack_c0);
      lVar3 = 0;
      do {
        if ((&cStack_59)[lVar3] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar3));
        }
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != -0x60);
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  puVar2 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    func_0x000107c61170(param_5);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_b8);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
    func_0x000107c60bd8();
                    /* WARNING: Could not recover jumptable at 0x0001004a12a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar2 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1004a1298; end: 1004a12a7;  */

void FUN_1004a1298(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001004a12a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,1);
  return;
}



/* Entry: 1004a12a8; end: 1004a13bf;  */

/* WARNING: Possible PIC construction at 0x0001004a139c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004a1380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004a1394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004a13a0) */
/* WARNING: Removing unreachable block (ram,0x0001004a1384) */

void FUN_1004a12a8(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c6071c();
  param_1 = param_1 - *(double *)(param_2 + 0x38);
  puVar2 = (undefined *)(param_2 + 0x30);
  func_0x000107c61148();
  if (puVar2 != (undefined *)0x0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x000107c3e344();
    if ((iVar1 != 0) && (*(long *)(puVar2 + 0x10) != 0)) {
      func_0x000107c3b698(param_1,puVar2);
      goto code_r0x000107c61170;
    }
  }
  puVar3 = PTR_PTR_1126b4ea8;
  func_0x000107c610f4(PTR_PTR_1126b4ea8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d954(param_1 * 1000.0);
  func_0x000107c61180();
  func_0x000107c48354(puVar3);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1004a13c0; end: 1004a13c7; -[SCNGrpcAuthContextRequest attestationRequired] */

undefined1 FUN_1004a13c0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1004a13c8; end: 1004a15ff; -[SCNGrpcAuthContext initWithRequest:withAccessToken:isOAuthToken:authTokenErrorCode:argosTokenErrorCode:argosLatencyInMs:authLatencyInMs:attestationHeaders:] */

undefined8
FUN_1004a13c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             int param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
             ,undefined8 param_10)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar2 = PTR_PTR_1126b4ea0;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_5 == 0) {
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_4);
    func_0x000107c610f4(puVar2);
    ppuVar3 = &PTR____CFConstantStringClassReference_110dad998;
    func_0x000107c4c10c(&PTR____CFConstantStringClassReference_110dad998);
    func_0x000107c61180();
    ppuVar5 = param_4;
    ppuVar1 = ppuVar3;
  }
  else {
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_4);
    func_0x000107c51804(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110ee6078);
    func_0x000107c61180();
    func_0x000107c61170(param_4);
    puVar2 = PTR_PTR_1126b4ea0;
    func_0x000107c610f4(PTR_PTR_1126b4ea0);
    ppuVar3 = &PTR____CFConstantStringClassReference_110deec58;
    func_0x000107c4c10c(&PTR____CFConstantStringClassReference_110deec58);
    func_0x000107c61180();
    param_4 = ppuVar1;
    ppuVar5 = ppuVar3;
  }
  func_0x000107c4706c(puVar2,param_2,ppuVar3,param_4);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(ppuVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f4();
  func_0x000107c47b54();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_10860ad34;
  puStack_70 = &UNK_110882060;
  puStack_68 = puVar4;
  func_0x000107c61174();
  func_0x000107c429c4(param_10,param_2,&puStack_88);
  func_0x000107c61170(param_10);
  func_0x000107c46cc0(param_1,param_2,puVar4,param_6,param_7,param_8,param_9);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(puStack_68);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  return param_1;
}



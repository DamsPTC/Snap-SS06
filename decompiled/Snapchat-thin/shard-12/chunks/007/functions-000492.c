/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096cefcc; end: 1096cf013;  */

void FUN_1096cefcc(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096cf014; end: 1096cf06b;  */

undefined8 * FUN_1096cf014(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096cf06c; end: 1096cf0c3;  */

void FUN_1096cf06c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b076d0;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096cf0c4; end: 1096cf10f;  */

void FUN_1096cf0c4(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096ce07c(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096cf110; end: 1096cf13f;  */

bool FUN_1096cf110(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b076d0,0);
  return param_1 != 0;
}



/* Entry: 1096cf140; end: 1096cf15b;  */

void FUN_1096cf140(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096cf15c; end: 1096cf1a3;  */

void FUN_1096cf15c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096cf1a4; end: 1096cf1fb;  */

undefined8 * FUN_1096cf1a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096cf1fc; end: 1096cf253;  */

void FUN_1096cf1fc(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b076e8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096cf254; end: 1096cf31f;  */

void FUN_1096cf254(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuStack_40;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)0x28;
  _malloc();
  *(undefined4 *)(puVar1 + 3) = 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[4] = &PTR_DAT_110b00de0;
  ppuStack_40 = &PTR_FUN_110b076a0;
  func_0x000107c34ef0();
  _realloc();
  *(undefined4 *)(puVar1 + 3) = 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar2 = puVar1 + 4;
  *puVar2 = &PTR_DAT_110b00de0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puStack_38 = puVar2;
  FUN_1096ce07c();
  *puVar2 = &PTR_FUN_110b07a98;
  param_1[1] = puStack_38;
  *param_1 = ppuStack_40;
  ppuStack_40 = &PTR_FUN_110b01d60;
  puStack_38 = (undefined8 *)0x0;
  func_0x000107c2acd4(&ppuStack_40);
  return;
}



/* Entry: 1096cf320; end: 1096cf34f;  */

bool FUN_1096cf320(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b076e8,0);
  return param_1 != 0;
}



/* Entry: 1096cf350; end: 1096cf36b;  */

void FUN_1096cf350(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096cf36c; end: 1096cf3b3;  */

void FUN_1096cf36c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096cf3b4; end: 1096cf40b;  */

undefined8 * FUN_1096cf3b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096cf40c; end: 1096cf463;  */

void FUN_1096cf40c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110afd8f0;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096cf464; end: 1096cf4bf;  */

void FUN_1096cf464(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  ppuStack_30 = (undefined **)0x0;
  uStack_28 = 0;
  func_0x000107c2acec(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = &PTR_FUN_110afd8b8;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096cf4c0; end: 1096cf4ef;  */

bool FUN_1096cf4c0(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110afd8f0,0);
  return param_1 != 0;
}



/* Entry: 1096cf4f0; end: 1096cf50b;  */

void FUN_1096cf4f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096cf50c; end: 1096cf553;  */

void FUN_1096cf50c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096cf554; end: 1096cf5ab;  */

undefined8 * FUN_1096cf554(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096cf5ac; end: 1096cf603;  */

void FUN_1096cf5ac(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b05948;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096cf604; end: 1096cf65f;  */

void FUN_1096cf604(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  ppuStack_30 = (undefined **)0x0;
  uStack_28 = 0;
  func_0x000107c2acec(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = &PTR_FUN_110b05928;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096cf660; end: 1096cf68f;  */

bool FUN_1096cf660(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b05948,0);
  return param_1 != 0;
}



/* Entry: 1096cf690; end: 1096cf6e3;  */

long FUN_1096cf690(long param_1)

{
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096cf6e4; end: 1096cf737;  */

void FUN_1096cf6e4(long param_1)

{
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096cf738; end: 1096cf857;  */

void FUN_1096cf738(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined **appuStack_60 [2];
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar3 = appuStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x28))(appuStack_60,param_2,param_1);
  ___dynamic_cast(appuStack_60,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0);
  if (pppuVar3 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  lVar4 = *(long *)((long)pppuVar3 + 8);
  if (lVar4 != 0) {
    piVar8 = (int *)(lVar4 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_48 = param_3[1];
  param_3[1] = lVar4;
  *param_3 = &PTR_FUN_110b051b8;
  ppuStack_50 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_50);
  appuStack_60[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_60);
  lVar4 = param_2[1] + -0x20;
  puVar7 = puRam000000011382aa08;
  func_0x0001096966c0();
  puVar5 = (undefined8 *)(ulong)(lVar4 == 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar7 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  *puVar5 = &PTR_FUN_110b01d60;
  puVar5[1] = 0;
  puVar6 = puVar7;
  ___dynamic_cast(puVar7,&PTR_DAT_110b01d40,&PTR_DAT_110b056d8,0);
  if (puVar6 != (undefined8 *)0x0 && puVar7[1] != 0) {
    func_0x000107c2acd4(puVar5);
    uVar9 = *puVar7;
    puVar5[1] = puVar7[1];
    *puVar5 = uVar9;
    if (puVar5[1] != 0) {
      piVar8 = (int *)(puVar5[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 1096cf858; end: 1096cf8ef;  */

void FUN_1096cf858(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110b01d60;
  param_1[1] = 0;
  puVar3 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110b056d8,0);
  if (puVar3 != (undefined8 *)0x0 && param_2[1] != 0) {
    func_0x000107c2acd4(param_1);
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    if (param_1[1] != 0) {
      piVar4 = (int *)(param_1[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 1096cf8f0; end: 1096cf923;  */

long FUN_1096cf8f0(long param_1)

{
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096cf924; end: 1096cf957;  */

void FUN_1096cf924(long param_1)

{
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096cf958; end: 1096cf9e3;  */

undefined8 * FUN_1096cf958(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b07b00;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x10);
  *puVar1 = &PTR_FUN_110b07c28;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096cf9e4; end: 1096cfa1b;  */

void FUN_1096cf9e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)*(float *)(*(long *)(param_1 + 8) + 0xc) +
          (double)*(float *)(*(long *)(param_1 + 8) + 8) * *(double *)(param_4 + 0x20);
  dVar3 = 1.0;
  if (dVar1 <= 1.0) {
    dVar3 = dVar1;
  }
  dVar2 = 0.0;
  if (0.0 <= dVar1) {
    dVar2 = dVar3;
  }
  *(double *)(param_4 + 0x20) = dVar2;
  return;
}



/* Entry: 1096cfa1c; end: 1096cfaef;  */

void FUN_1096cfa1c(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 8,4,1);
                    /* WARNING: Could not recover jumptable at 0x0001096cfa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0xc,4,1);
  return;
}



/* Entry: 1096cfaf0; end: 1096cfb23;  */

undefined8 * FUN_1096cfaf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096cfb24; end: 1096cfb57;  */

void FUN_1096cfb24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096cfb58; end: 1096cfb73;  */

void FUN_1096cfb58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096cfb74; end: 1096cfbbb;  */

void FUN_1096cfb74(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096cfbbc; end: 1096cfc13;  */

undefined8 * FUN_1096cfbbc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096cfc14; end: 1096cfc6b;  */

void FUN_1096cfc14(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b07b38;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096cfc6c; end: 1096cfcb7;  */

void FUN_1096cfc6c(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096cf958(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096cfcb8; end: 1096cfce7;  */

bool FUN_1096cfcb8(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b07b38,0);
  return param_1 != 0;
}



/* Entry: 1096cfce8; end: 1096cfcef;  */

void FUN_1096cfce8(void)

{
  return;
}



/* Entry: 1096cfcf0; end: 1096cfd6b;  */

undefined8 * FUN_1096cfcf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b07c90;
  param_1[1] = puVar1;
  FUN_1096cfd6c(param_1);
  return param_1;
}



/* Entry: 1096cfd6c; end: 1096cfe87;  */

void FUN_1096cfd6c(undefined8 *param_1)

{
  func_0x000107c2acd0(param_1,0xd0);
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[0x19] = 0;
  *param_1 = &PTR_DAT_110b00de0;
  *(undefined4 *)(param_1 + 1) = 4;
  FUN_1096b9ea0(param_1 + 2);
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0xffffffff3f800000;
  func_0x000107c2ace8(param_1 + 0x10);
  param_1[0x14] = 0x3f80000000000000;
  param_1[0x13] = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *param_1 = &PTR_FUN_110b08088;
  return;
}



/* Entry: 1096cfe88; end: 1096cfedb;  */

void FUN_1096cfe88(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uStack_30;
  long lStack_28;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&uStack_30;
  plVar1 = (long *)(*(long *)(param_1 + 8) + 200);
  if (*plVar1 != -1) {
    ppuStack_20 = &puStack_18;
    uStack_30 = param_2;
    lStack_28 = param_1;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(plVar1,&ppuStack_20,FUN_1096d2828);
  }
  return;
}



/* Entry: 1096cfedc; end: 1096d0a63;  */

void FUN_1096cfedc(undefined8 param_1,float param_2,long param_3,long *param_4,undefined8 *param_5,
                  long param_6)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  undefined ***pppuVar10;
  int *piVar11;
  undefined8 *puVar12;
  float *pfVar13;
  ulong uVar14;
  long *extraout_x8;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  float *pfVar22;
  undefined **ppuVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float *pfStack_210;
  float *pfStack_208;
  float *pfStack_1f8;
  float *pfStack_1f0;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  float afStack_1c8 [2];
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  byte *pbStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  long lStack_168;
  float *apfStack_160 [2];
  undefined1 auStack_150 [32];
  undefined **ppuStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined **ppuStack_110;
  long lStack_108;
  undefined1 uStack_f1;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  float *pfStack_d0;
  long lStack_c8;
  int *piStack_c0;
  int *piStack_b8;
  byte bStack_a8;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_4;
  (**(code **)(*param_4 + 0x30))();
  if ((int)plVar9 != *(int *)(*(long *)(*(long *)(*(long *)(param_3 + 8) + 0xa8) + 0x18) + 8)) {
    puStack_180 = &UNK_10f57d92b;
    uStack_178 = &UNK_10f57d9ad;
    uStack_170 = 0x65;
    FUN_109699380(&puStack_180);
  }
  puVar12 = param_5;
  ___dynamic_cast(param_5,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x000107c2acdc();
  }
  lStack_108 = puVar12[1];
  if (lStack_108 != 0) {
    piVar11 = (int *)(lStack_108 + -8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar6) {
        *piVar11 = *piVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppuStack_110 = &PTR_FUN_110b051b8;
  puVar12 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 8) + 0xa8) + 0x18);
  iVar4 = *(int *)((long)puVar12 + 4);
  uVar17 = *puVar12;
  FUN_1096d423c(&ppuStack_130,*(long *)(param_3 + 8) + 0x28,&ppuStack_110,uVar17);
  lVar16 = *(long *)(param_3 + 8);
  if (*(long *)(lVar16 + 0xc0) != 0) {
    FUN_1096ba1fc(&pfStack_1f8,&ppuStack_110);
    func_0x00010742a308(&pfStack_1f8,
                        *(undefined4 *)
                         (*(long *)(*(long *)(*(long *)(param_3 + 8) + 0xc0) + 0x18) + 8));
    pfStack_210 = (float *)((long)&MACH_HEADER.magic + 1);
    func_0x000109d0f600(&puStack_180,
                        *(undefined8 *)(*(long *)(*(long *)(param_3 + 8) + 0xc0) + 0x18),
                        &pfStack_210,pfStack_1f8);
    FUN_1096d0a64(&lStack_1c0,*(undefined8 *)(*(long *)(param_3 + 8) + 0xc0));
    FUN_1096c9300(&ppuStack_f0,lStack_1c0,&puStack_180);
    uStack_170 = uStack_e0;
    uStack_178 = uStack_e8;
    lStack_168 = lStack_d8;
    func_0x0001093783c0(apfStack_160,&pfStack_d0);
    func_0x00010937843c(auStack_150,&piStack_c0);
    func_0x000105675c90(&ppuStack_f0);
    pfVar13 = apfStack_160[0];
    lVar16 = lStack_1c0;
    lStack_1c0 = 0;
    if (lVar16 != 0) {
      do {
        bVar3 = *uStack_1b8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(uStack_1b8,0x10);
        if (bVar6) {
          *uStack_1b8 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while ((cVar5 != '\0') || ((bVar3 & 1) != 0));
      pbVar2 = uStack_1b8 + 8;
      if (*(long *)(uStack_1b8 + 0x10) != 0) {
        pbVar2 = (byte *)(*(long *)(uStack_1b8 + 0x10) + 0x10);
      }
      *(long *)pbVar2 = lVar16;
      *(long *)(uStack_1b8 + 0x10) = lVar16;
      *uStack_1b8 = 0;
    }
    fVar28 = *apfStack_160[0];
    fVar24 = apfStack_160[0][1];
    ___sincosf_stret();
    _expf();
    lVar16 = 0;
    param_2 = fVar28 * param_2;
    fVar25 = fVar28 * fVar24;
    uVar26 = *(undefined8 *)(pfVar13 + 2);
    uVar27 = NEON_rev64(uVar26,4);
    uStack_1b8 = (byte *)CONCAT44(-(fVar28 * fVar24),param_2);
    lStack_1c0 = CONCAT44(-(float)((ulong)uVar26 >> 0x20) * param_2 +
                          fVar25 * (float)((ulong)uVar27 >> 0x20),
                          -(float)uVar26 * param_2 + -(fVar28 * fVar24) * (float)uVar27);
    uStack_1b0 = CONCAT44(param_2,fVar25);
    do {
      *(float *)((long)&lStack_1c0 + lVar16) =
           (1.0 / (fVar25 * fVar25 + param_2 * param_2)) * *(float *)((long)&lStack_1c0 + lVar16);
      lVar16 = lVar16 + 4;
    } while (lVar16 != 0x18);
    lVar16 = 0;
    ppuStack_f0 = ppuStack_130;
    uStack_e8 = (undefined *)0x0;
    uStack_e0 = 0;
    do {
      lVar19 = 0;
      bVar6 = true;
      do {
        bVar7 = bVar6;
        lVar20 = 0;
        pfVar13 = (float *)((long)&ppuStack_f0 + lVar19 * 4 + lVar16 * 8);
        fVar24 = *pfVar13;
        bVar6 = true;
        do {
          bVar8 = bVar6;
          fVar24 = fVar24 + *(float *)((long)&uStack_128 + lVar19 * 4 + lVar20 * 8) *
                            *(float *)((long)&lStack_1c0 + lVar20 * 4 + lVar16 * 8);
          lVar20 = 1;
          bVar6 = false;
        } while (bVar8);
        *pfVar13 = fVar24;
        lVar19 = 1;
        bVar6 = false;
      } while (bVar7);
      lVar16 = lVar16 + 1;
    } while (lVar16 != 3);
    uStack_128 = uStack_e8;
    ppuStack_130 = ppuStack_f0;
    lStack_120 = uStack_e0;
    func_0x000105675c90(&puStack_180);
    if (pfStack_1f8 != (float *)0x0) {
      pfStack_1f0 = pfStack_1f8;
      __ZdlPv();
    }
    lVar16 = *(long *)(param_3 + 8);
  }
  FUN_1096d472c(&puStack_190,lVar16 + 0x28,param_4,&ppuStack_130,uVar17);
  uStack_198 = 0x100000001;
  func_0x000109d0f600(&puStack_180,*(undefined8 *)(*(long *)(*(long *)(param_3 + 8) + 0xa8) + 0x18),
                      &uStack_198,*puStack_190);
  uStack_1b8 = (byte *)0x0;
  lStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3f800000;
  ppuStack_f0 = *(undefined ***)(*(long *)(*(long *)(param_3 + 8) + 0xa8) + 0x30);
  plVar9 = &lStack_1c0;
  FUN_10937a098(plVar9,ppuStack_f0,&UNK_10dd5b8f9,&ppuStack_f0,&pfStack_1f8);
  puVar15 = uStack_178;
  plVar9[7] = uStack_170;
  plVar9[6] = (long)puVar15;
  plVar9[8] = lStack_168;
  func_0x0001093783c0(plVar9 + 9,apfStack_160);
  func_0x00010937843c(plVar9 + 0xb,auStack_150);
  lVar16 = *(long *)(*(long *)(param_3 + 8) + 0xa8);
  lVar19 = *(long *)(*(long *)(param_3 + 8) + 0xb0);
  if (lVar16 != lVar19) {
    do {
      FUN_1096d0a64(&pfStack_1f8,lVar16);
      FUN_1096c9398(&ppuStack_f0,pfStack_1f8,&lStack_1c0);
      func_0x0001093f2488(&lStack_1c0,&ppuStack_f0);
      func_0x000109379fe8(&ppuStack_f0);
      pfVar13 = pfStack_1f8;
      pfStack_1f8 = (float *)0x0;
      if (pfVar13 != (float *)0x0) {
        do {
          fVar24 = *pfStack_1f0;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pfStack_1f0,0x10);
          if (bVar6) {
            *(byte *)pfStack_1f0 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while ((cVar5 != '\0') || (((uint)fVar24 & 1) != 0));
        pfVar22 = pfStack_1f0 + 2;
        if (*(long *)(pfStack_1f0 + 4) != 0) {
          pfVar22 = (float *)(*(long *)(pfStack_1f0 + 4) + 0x10);
        }
        *(float **)pfVar22 = pfVar13;
        *(float **)(pfStack_1f0 + 4) = pfVar13;
        *(byte *)pfStack_1f0 = 0;
      }
      lVar16 = lVar16 + 0x90;
    } while (lVar16 != lVar19);
    lVar19 = *(long *)(*(long *)(param_3 + 8) + 0xb0);
  }
  ppuStack_f0 = *(undefined ***)(lVar19 + -0x48);
  plVar9 = &lStack_1c0;
  FUN_10937a098(plVar9,ppuStack_f0,&UNK_10dd5b8f9,&ppuStack_f0,&pfStack_1f8);
  uStack_170 = plVar9[7];
  uStack_178 = (undefined *)plVar9[6];
  lStack_168 = plVar9[8];
  func_0x0001093783c0(apfStack_160,plVar9 + 9);
  func_0x00010937843c(auStack_150,plVar9 + 0xb);
  lVar16 = *(long *)(param_3 + 8);
  FUN_1096d4aac(&pfStack_1f8,(float)iVar4 / (float)uStack_178._4_4_,*(undefined4 *)(lVar16 + 0x74),
                *(undefined4 *)(lVar16 + 0x20),apfStack_160[0],(ulong)uStack_178 & 0xffffffff,
                uStack_178._4_4_,uStack_170 & 0xffffffff,*(undefined4 *)(lVar16 + 0xc),
                *(int *)(lVar16 + 8) < 4);
  for (pfVar13 = pfStack_1f8; pfVar13 != pfStack_1f0; pfVar13 = pfVar13 + 2) {
    *(ulong *)pfVar13 =
         CONCAT44((float)((ulong)ppuStack_130 >> 0x20) +
                  (float)((ulong)uStack_128 >> 0x20) * *pfVar13 +
                  (float)((ulong)lStack_120 >> 0x20) * pfVar13[1],
                  SUB84(ppuStack_130,0) + SUB84(uStack_128,0) * *pfVar13 +
                  (float)lStack_120 * pfVar13[1]);
  }
  lVar16 = *(long *)(param_3 + 8);
  if (param_5[1] != *(long *)(lVar16 + 0x18)) {
    func_0x000107c2acd4(param_5);
    uVar26 = *(undefined8 *)(lVar16 + 0x10);
    param_5[1] = *(undefined8 *)(lVar16 + 0x18);
    *param_5 = uVar26;
    if (param_5[1] != 0) {
      piVar11 = (int *)(param_5[1] + -8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar6) {
          *piVar11 = *piVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  FUN_1096c0b60(param_5,(ulong)((long)pfStack_1f0 - (long)pfStack_1f8) >> 3 & 0xffffffff);
  uStack_e8 = uStack_128;
  ppuStack_f0 = ppuStack_130;
  uStack_e0 = lStack_120;
  lVar16 = param_5[1] + -0x20;
  func_0x0001096966c0(lVar16,puRam0000000113735cc0);
  puVar12 = puRam0000000113735cc0;
  if ((lVar16 == 0) || (puVar21 = *(undefined8 **)(lVar16 + 8), puVar21 == (undefined8 *)0x0)) {
    lVar16 = param_5[1];
    puVar21 = puRam0000000113735cc0;
    (**(code **)*puRam0000000113735cc0)();
    lVar16 = lVar16 + -0x20;
    FUN_109696718(lVar16,puVar12);
    *(undefined8 **)(lVar16 + 8) = puVar21;
  }
  puVar21[1] = uStack_e8;
  *puVar21 = ppuStack_f0;
  puVar21[2] = uStack_e0;
  puVar21[3] = uVar17;
  plVar9 = &lStack_1c0;
  FUN_10937a848(plVar9,&UNK_10dfde748);
  if (plVar9 == (long *)0x0) {
    pfVar13 = afStack_1c8;
  }
  else {
    ppuStack_f0 = (undefined **)&UNK_10dfde748;
    plVar9 = &lStack_1c0;
    FUN_10937a098(plVar9,&UNK_10dfde748,&UNK_10dd5b8f9,&ppuStack_f0,&pfStack_210);
    pfVar13 = (float *)plVar9[9];
  }
  *(double *)(param_6 + 0x20) = (double)*pfVar13;
  plVar9 = &lStack_1c0;
  FUN_10937a848(plVar9,&UNK_10dfde760);
  if (plVar9 != (long *)0x0) {
    ppuStack_f0 = (undefined **)&UNK_10dfde760;
    plVar9 = &lStack_1c0;
    FUN_10937a098(plVar9,&UNK_10dfde760,&UNK_10dd5b8f9,&ppuStack_f0,&pfStack_210);
    FUN_1096d6480(param_5,0x11382aab0,plVar9 + 5);
  }
  plVar9 = &lStack_1c0;
  FUN_10937a848(plVar9,&UNK_10dfde778);
  if (plVar9 == (long *)0x0) {
    FUN_1096969b8(param_5,0x113735cb8);
  }
  else {
    pfStack_210 = (float *)&UNK_10dfde778;
    plVar9 = &lStack_1c0;
    FUN_10937a098(plVar9,&UNK_10dfde778,&UNK_10dd5b8f9,&pfStack_210,&uStack_f1);
    uStack_e0 = plVar9[7];
    uStack_e8 = (undefined *)plVar9[6];
    lStack_d8 = plVar9[8];
    ppuStack_f0 = &PTR_DAT_1108a5c28;
    lStack_c8 = plVar9[10];
    pfStack_d0 = (float *)plVar9[9];
    if (plVar9[10] != 0) {
      plVar1 = (long *)(plVar9[10] + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_109407928(&piStack_c0,plVar9 + 0xb);
    pfVar13 = pfStack_d0;
    if ((bStack_a8 & 1) == 0) {
      uVar14 = (ulong)(uint)((int)uStack_e0 * uStack_e0._4_4_ * uStack_e8._4_4_ * (int)uStack_e8);
    }
    else {
      uVar14 = 1;
      for (; piStack_c0 != piStack_b8; piStack_c0 = piStack_c0 + 1) {
        uVar14 = (ulong)(uint)(*piStack_c0 * (int)uVar14);
      }
    }
    fVar24 = (float)uStack_128;
    fVar28 = uStack_128._4_4_;
    FUN_109367d10(&pfStack_210,uVar14);
    if ((int)uVar14 != 0) {
      pfVar22 = pfStack_210;
      do {
        fVar25 = *pfVar13;
        _expf();
        *pfVar22 = SQRT(fVar28 * fVar28 + fVar24 * fVar24) * fVar25;
        uVar14 = uVar14 - 1;
        pfVar13 = pfVar13 + 1;
        pfVar22 = pfVar22 + 1;
      } while (uVar14 != 0);
    }
    lVar16 = param_5[1] + -0x20;
    func_0x0001096966c0(lVar16,puRam0000000113735cb8);
    puVar12 = puRam0000000113735cb8;
    if ((lVar16 == 0) || (*(undefined1 **)(lVar16 + 8) == (undefined1 *)0x0)) {
      lVar16 = param_5[1];
      puVar21 = puRam0000000113735cb8;
      (**(code **)*puRam0000000113735cb8)();
      lVar16 = lVar16 + -0x20;
      FUN_109696718(lVar16,puVar12);
      *(undefined8 **)(lVar16 + 8) = puVar21;
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
      FUN_1092cc0dc(puVar21,pfStack_210,pfStack_208,(long)pfStack_208 - (long)pfStack_210 >> 2);
    }
    else if ((float **)*(undefined1 **)(lVar16 + 8) != &pfStack_210) {
      FUN_10942bf40();
    }
    if (pfStack_210 != (float *)0x0) {
      pfStack_208 = pfStack_210;
      __ZdlPv();
    }
    func_0x000105675c90(&ppuStack_f0);
  }
  puVar21 = puStack_1d8;
  puVar12 = puStack_1e0;
  func_0x000107c2acf0(&ppuStack_f0);
  ppuStack_f0 = &PTR_FUN_110b057c8;
  for (; puVar12 != puVar21; puVar12 = (undefined8 *)((long)puVar12 + 0xc)) {
    pfStack_210 = (float *)((ulong)pfStack_210 & 0xffffffffffffff00);
    FUN_109697f7c(uStack_e8 + 8,*(undefined8 *)(uStack_e8 + 0x10),0xc,&pfStack_210);
    lVar16 = *(long *)(uStack_e8 + 8) +
             (long)(int)((ulong)(long)(*(int *)(uStack_e8 + 0x10) - (int)*(long *)(uStack_e8 + 8)) /
                        0xc) * 0xc;
    uVar17 = *puVar12;
    *(undefined4 *)(lVar16 + -4) = *(undefined4 *)(puVar12 + 1);
    *(undefined8 *)(lVar16 + -0xc) = uVar17;
  }
  FUN_1096bbf7c(param_5,0x11382aa78,&ppuStack_f0);
  ppuStack_f0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_f0);
  if (puStack_1e0 != (undefined8 *)0x0) {
    puStack_1d8 = puStack_1e0;
    __ZdlPv();
  }
  if (pfStack_1f8 != (float *)0x0) {
    pfStack_1f0 = pfStack_1f8;
    __ZdlPv();
  }
  func_0x000109379fe8(&lStack_1c0);
  func_0x000105675c90(&puStack_180);
  puVar12 = puStack_190;
  puStack_190 = (undefined8 *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    do {
      bVar3 = *pbStack_188;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbStack_188,0x10);
      if (bVar6) {
        *pbStack_188 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar3 & 1) != 0));
    pbVar2 = pbStack_188 + 8;
    if (*(long *)(pbStack_188 + 0x10) != 0) {
      pbVar2 = (byte *)(*(long *)(pbStack_188 + 0x10) + 0x18);
    }
    *(undefined8 **)pbVar2 = puVar12;
    *(undefined8 **)(pbStack_188 + 0x10) = puVar12;
    *pbStack_188 = 0;
  }
  ppuStack_110 = &PTR_FUN_110b01d60;
  pppuVar10 = &ppuStack_110;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105675c90(&ppuStack_f0);
  FUN_1096d0b00(&pfStack_1f8);
  func_0x000109379fe8(&lStack_1c0);
  func_0x000105675c90(&puStack_180);
  puVar12 = puStack_190;
  puStack_190 = (undefined8 *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    do {
      bVar3 = *pbStack_188;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbStack_188,0x10);
      if (bVar6) {
        *pbStack_188 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar3 & 1) != 0));
    pbVar2 = pbStack_188 + 8;
    if (*(long *)(pbStack_188 + 0x10) != 0) {
      pbVar2 = (byte *)(*(long *)(pbStack_188 + 0x10) + 0x18);
    }
    *(undefined8 **)pbVar2 = puVar12;
    *(undefined8 **)(pbStack_188 + 0x10) = puVar12;
    *pbStack_188 = 0;
  }
  FUN_109696618(&ppuStack_110);
  __Unwind_Resume();
  ppuVar23 = pppuVar10[0x11];
  do {
    puVar15 = *ppuVar23;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
    if (bVar6) {
      *(byte *)ppuVar23 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while ((cVar5 != '\0') || (((ulong)puVar15 & 1) != 0));
  puVar15 = ppuVar23[1];
  if (puVar15 == (undefined *)0x0) {
    *(byte *)ppuVar23 = 0;
    lVar16 = 0x18;
    __Znwm();
    FUN_1096c8da0();
    *(undefined8 *)(lVar16 + 0x10) = 0;
    *extraout_x8 = lVar16;
    extraout_x8[1] = (long)ppuVar23;
  }
  else {
    *extraout_x8 = (long)puVar15;
    extraout_x8[1] = (long)ppuVar23;
    puVar18 = *(undefined **)(puVar15 + 0x10);
    ppuVar23[1] = puVar18;
    *(undefined8 *)(puVar15 + 0x10) = 0;
    if (puVar18 == (undefined *)0x0) {
      ppuVar23[2] = (undefined *)0x0;
    }
    *(byte *)ppuVar23 = 0;
  }
  return;
}



/* Entry: 1096d0a64; end: 1096d0aff;  */

void FUN_1096d0a64(long *param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  
  pbVar6 = *(byte **)(param_2 + 0x88);
  do {
    bVar1 = *pbVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar6,0x10);
    if (bVar3) {
      *pbVar6 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while ((cVar2 != '\0') || ((bVar1 & 1) != 0));
  lVar4 = *(long *)(pbVar6 + 8);
  if (lVar4 == 0) {
    *pbVar6 = 0;
    lVar4 = 0x18;
    __Znwm();
    FUN_1096c8da0();
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *param_1 = lVar4;
    param_1[1] = (long)pbVar6;
  }
  else {
    *param_1 = lVar4;
    param_1[1] = (long)pbVar6;
    lVar5 = *(long *)(lVar4 + 0x10);
    *(long *)(pbVar6 + 8) = lVar5;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    if (lVar5 == 0) {
      pbVar6[0x10] = 0;
      pbVar6[0x11] = 0;
      pbVar6[0x12] = 0;
      pbVar6[0x13] = 0;
      pbVar6[0x14] = 0;
      pbVar6[0x15] = 0;
      pbVar6[0x16] = 0;
      pbVar6[0x17] = 0;
    }
    *pbVar6 = 0;
  }
  return;
}



/* Entry: 1096d0b00; end: 1096d0b3f;  */

long * FUN_1096d0b00(long *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096d0b40; end: 1096d0f83;  */

void FUN_1096d0b40(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined **appuStack_50 [2];
  
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 8,4,1);
  lVar10 = *(long *)(param_1 + 8);
  if (*(int *)(lVar10 + 8) < 3) {
    puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0xa8) + 0x30);
    puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0xa8) + 0x48);
    uVar9 = puVar6[1];
    puVar2 = (undefined8 *)*puVar6;
    if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar6 + 0x17);
      puVar2 = puVar6;
    }
    FUN_109697928(appuStack_50,puVar2,uVar9);
    FUN_109697ca4(param_2,appuStack_50);
    appuStack_50[0] = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(appuStack_50);
    uVar9 = puVar11[1];
    puVar2 = (undefined8 *)*puVar11;
    if (-1 < (char)*(byte *)((long)puVar11 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar11 + 0x17);
      puVar2 = puVar11;
    }
    FUN_109697928(appuStack_50,puVar2,uVar9);
    FUN_109697ca4(param_2,appuStack_50);
    appuStack_50[0] = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(appuStack_50);
    (**(code **)(*param_2 + 0x48))
              (param_2,*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0xa8) + 0x18),4,1);
    (**(code **)(*param_2 + 0x48))
              (param_2,*(long *)(*(long *)(*(long *)(param_1 + 8) + 0xa8) + 0x18) + 8,4,1);
    FUN_1096d3bbc(appuStack_50,*(undefined4 *)(*(long *)(param_1 + 8) + 0xc));
    FUN_109697ca4(param_2,appuStack_50);
    appuStack_50[0] = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(appuStack_50);
    (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0x74,4,1);
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0xa8);
    uVar9 = puVar6[1];
    puVar2 = (undefined8 *)*puVar6;
    if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)puVar6 + 0x17);
      puVar2 = puVar6;
    }
    FUN_109697928(appuStack_50,puVar2,uVar9);
    FUN_109697ca4(param_2,appuStack_50);
    appuStack_50[0] = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(appuStack_50);
    (**(code **)(*param_3 + 0x20))(param_3,param_2,*(long *)(param_1 + 8) + 0x10);
    lVar10 = *(long *)(param_1 + 8);
    if (*(int *)(lVar10 + 8) != 2) {
      return;
    }
    goto LAB_1096d0f18;
  }
  uVar8 = (*(long *)(lVar10 + 0xb0) - *(long *)(lVar10 + 0xa8) >> 4) * -0x71c71c71c71c71c7;
  uVar9 = uVar8;
  if (0x7f < uVar8) {
    do {
      appuStack_50[0] = (undefined **)(CONCAT71(appuStack_50[0]._1_7_,(char)uVar9) | 0x80);
      (**(code **)(*param_2 + 0x48))(param_2,appuStack_50,1,1);
      uVar8 = uVar9 >> 7;
      uVar7 = uVar9 >> 0xe;
      uVar9 = uVar8;
    } while (uVar7 != 0);
  }
  appuStack_50[0] = (undefined **)CONCAT71(appuStack_50[0]._1_7_,(char)uVar8);
  (**(code **)(*param_2 + 0x48))(param_2,appuStack_50,1,1);
  lVar1 = *(long *)(lVar10 + 0xb0);
  for (lVar10 = *(long *)(lVar10 + 0xa8); lVar10 != lVar1; lVar10 = lVar10 + 0x90) {
    FUN_1096c86b0(param_2,lVar10);
  }
  lVar10 = *(long *)(param_1 + 8);
  iVar4 = *(int *)(lVar10 + 8);
  if (5 < iVar4) {
    appuStack_50[0] = (undefined **)CONCAT71(appuStack_50[0]._1_7_,*(long *)(lVar10 + 0xc0) != 0);
    (**(code **)(*param_2 + 0x48))(param_2,appuStack_50,1,1);
    if ((char)appuStack_50[0] == '\x01') {
      FUN_1096c86b0(param_2,*(undefined8 *)(*(long *)(param_1 + 8) + 0xc0));
    }
    lVar10 = *(long *)(param_1 + 8);
    iVar4 = *(int *)(lVar10 + 8);
  }
  if (iVar4 < 5) {
    pcVar5 = *(code **)(*param_2 + 0x48);
    lVar10 = lVar10 + 0x74;
    uVar3 = 4;
LAB_1096d0ec0:
    (*pcVar5)(param_2,lVar10,uVar3,1);
  }
  else {
    (**(code **)(*param_2 + 0x48))(param_2,lVar10 + 0x70,4,1);
    (**(code **)(*param_2 + 0x48))(param_2,lVar10 + 0x74,4,1);
    (**(code **)(*param_2 + 0x48))(param_2,lVar10 + 0x78,4,1);
    if (*(int *)(lVar10 + 0x70) == 1) {
      FUN_109697ca4(param_2,lVar10 + 0x80);
      pcVar5 = *(code **)(*param_2 + 0x48);
      lVar10 = lVar10 + 0x90;
      uVar3 = 0x18;
      goto LAB_1096d0ec0;
    }
  }
  FUN_1096d3bbc(appuStack_50,*(undefined4 *)(*(long *)(param_1 + 8) + 0xc));
  FUN_109697ca4(param_2,appuStack_50);
  appuStack_50[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_50);
  (**(code **)(*param_3 + 0x20))(param_3,param_2,*(long *)(param_1 + 8) + 0x10);
  lVar10 = *(long *)(param_1 + 8);
LAB_1096d0f18:
  (**(code **)(*param_2 + 0x48))(param_2,lVar10 + 0x20,4,1);
  return;
}



/* Entry: 1096d0f84; end: 1096d144f;  */

void FUN_1096d0f84(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  uint uStack_5c;
  undefined4 auStack_58 [2];
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 8,4,1);
  lVar8 = *(long *)(param_1 + 8);
  if (*(int *)(lVar8 + 8) < 3) {
    FUN_1096d1450(lVar8 + 0xa8,1);
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0xa8);
    FUN_1095649e4(lVar8 + 0x30,1);
    FUN_1095649e4(lVar8 + 0x48,1);
    if (((ulong)plVar9 & 0xffffffff) == 1) {
      plVar9 = param_2;
      FUN_1096caa6c(param_2,auStack_58,*(undefined8 *)(lVar8 + 0x30),*(undefined8 *)(lVar8 + 0x48));
      uStack_5c = 0;
      auStack_58[0] = 0;
      if (((((int)plVar9 == 0) ||
           (plVar9 = param_2, (**(code **)(*param_2 + 0x40))(param_2,auStack_58,4,1),
           (int)plVar9 != 1)) ||
          (plVar9 = param_2, (**(code **)(*param_2 + 0x40))(param_2,&uStack_5c,4,1),
          (int)plVar9 != 1)) ||
         ((plVar9 = param_2, FUN_1096d3d40(param_2,*(long *)(param_1 + 8) + 0xc), (int)plVar9 == 0
          || (plVar9 = param_2,
             (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 0x74,4,1),
             (int)plVar9 != 1)))) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = param_2;
        FUN_1096d1700(param_2,lVar8);
      }
    }
    else {
      plVar9 = (long *)0x0;
      uStack_5c = 0;
      auStack_58[0] = 0;
    }
    FUN_1096c8c6c(lVar8 + 0x18,1);
    puVar6 = *(undefined4 **)(lVar8 + 0x18);
    *puVar6 = auStack_58[0];
    puVar6[1] = auStack_58[0];
    puVar6[2] = uStack_5c;
    puVar6[3] = 1;
    if (((ulong)plVar9 & 1) == 0) {
      return;
    }
    goto LAB_1096d11cc;
  }
  if ((((ulong)plVar9 & 0xffffffff) == 1) &&
     (plVar9 = param_2, (**(code **)(*param_2 + 0x40))(param_2,auStack_58,1,1), (int)plVar9 == 1)) {
    uVar7 = 0;
    uVar10 = 0;
    do {
      uVar7 = ((ulong)(byte)auStack_58[0] & 0x7f) << (uVar10 & 0x3f) | uVar7;
      if (-1 < (char)(byte)auStack_58[0]) {
        FUN_1096d1450(lVar8 + 0xa8,uVar7);
        lVar3 = *(long *)(lVar8 + 0xa8);
        lVar8 = *(long *)(lVar8 + 0xb0);
        goto LAB_1096d12ec;
      }
      uVar10 = uVar10 + 7;
      plVar9 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,auStack_58,1,1);
    } while ((int)plVar9 == 1);
  }
LAB_1096d1138:
  lVar8 = *(long *)(param_1 + 8);
  if (*(int *)(lVar8 + 8) < 6) {
    return;
  }
LAB_1096d1148:
  uVar1 = 0;
LAB_1096d114c:
  if (4 < *(int *)(lVar8 + 8)) {
    if (uVar1 == 0) {
      return;
    }
    goto LAB_1096d122c;
  }
  if (uVar1 == 0) {
    return;
  }
LAB_1096d115c:
  pcVar5 = *(code **)(*param_2 + 0x40);
  lVar8 = lVar8 + 0x74;
  uVar4 = 4;
LAB_1096d1170:
  plVar9 = param_2;
  (*pcVar5)(param_2,lVar8,uVar4,1);
  if ((int)plVar9 != 1) {
    return;
  }
  goto LAB_1096d1180;
LAB_1096d12ec:
  if (lVar3 == lVar8) goto LAB_1096d130c;
  plVar9 = param_2;
  FUN_1096c88b0(param_2,lVar3);
  if (((ulong)plVar9 & 1) == 0) goto LAB_1096d1138;
  lVar3 = lVar3 + 0x90;
  goto LAB_1096d12ec;
LAB_1096d130c:
  lVar8 = *(long *)(param_1 + 8);
  if (5 < *(int *)(lVar8 + 8)) {
    uStack_5c = uStack_5c & 0xffffff00;
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&uStack_5c,1,1);
    uVar1 = (uint)(((ulong)plVar9 & 0xffffffff) == 1);
    lVar8 = *(long *)(param_1 + 8);
    if ((char)uStack_5c == '\x01') {
      puVar2 = (undefined8 *)0x90;
      __Znwm();
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      puVar2[0xf] = 0;
      puVar2[0xe] = 0;
      puVar2[0x11] = 0;
      puVar2[0x10] = 0;
      func_0x000107c2ace8(puVar2 + 0xf);
      puVar2[0x11] = 0;
      lVar3 = *(long *)(lVar8 + 0xc0);
      *(undefined8 **)(lVar8 + 0xc0) = puVar2;
      if (lVar3 != 0) {
        FUN_1096d2edc();
      }
      lVar8 = *(long *)(param_1 + 8);
      if (((ulong)plVar9 & 0xffffffff) != 1) goto LAB_1096d1148;
      plVar9 = param_2;
      FUN_1096c88b0(param_2,*(undefined8 *)(lVar8 + 0xc0));
      uVar1 = (uint)plVar9;
      lVar8 = *(long *)(param_1 + 8);
    }
    goto LAB_1096d114c;
  }
  if (*(int *)(lVar8 + 8) != 5) goto LAB_1096d115c;
LAB_1096d122c:
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,lVar8 + 0x70,4,1);
  if ((int)plVar9 != 1) {
    return;
  }
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,lVar8 + 0x74,4,1);
  if ((int)plVar9 != 1) {
    return;
  }
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,lVar8 + 0x78,4,1);
  if (*(int *)(lVar8 + 0x70) == 1 && ((ulong)plVar9 & 0xffffffff) == 1) {
    plVar9 = param_2;
    FUN_109697d7c(param_2,lVar8 + 0x80);
    if ((int)plVar9 == 0) {
      return;
    }
    pcVar5 = *(code **)(*param_2 + 0x40);
    lVar8 = lVar8 + 0x90;
    uVar4 = 0x18;
    goto LAB_1096d1170;
  }
  if (*(int *)(lVar8 + 0x70) == 1) {
    return;
  }
  if (((ulong)plVar9 & 0xffffffff) != 1) {
    return;
  }
LAB_1096d1180:
  plVar9 = param_2;
  FUN_1096d3d40(param_2,*(long *)(param_1 + 8) + 0xc);
  if ((int)plVar9 == 0) {
    return;
  }
LAB_1096d11cc:
  plVar9 = param_2;
  FUN_1096cf738(param_2,param_3,*(long *)(param_1 + 8) + 0x10);
  if ((1 < *(int *)(*(long *)(param_1 + 8) + 8)) && (((ulong)plVar9 & 1) != 0)) {
    (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 0x20,4,1);
  }
  return;
}



/* Entry: 1096d1450; end: 1096d16ff;  */

long ****** FUN_1096d1450(long ******param_1,undefined8 *param_2)

{
  long *****ppppplVar1;
  long *****ppppplVar2;
  uint uVar3;
  bool bVar4;
  long ******pppppplVar5;
  long ******pppppplVar6;
  long ******pppppplVar7;
  long ******pppppplVar8;
  long lVar9;
  undefined8 *puVar10;
  long *****ppppplVar11;
  long lVar12;
  long *****ppppplVar13;
  long ****pppplVar14;
  long *****ppppplVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long ****pppplVar19;
  byte bStack_b1;
  long lStack_b0;
  long *****ppppplStack_a8;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long *****ppppplStack_78;
  long ****pppplStack_70;
  long *****ppppplStack_68;
  long *****ppppplStack_60;
  long *****ppppplStack_58;
  
  ppppplVar11 = *param_1;
  pppppplVar8 = (long ******)param_1[1];
  lVar17 = (long)pppppplVar8 - (long)ppppplVar11;
  lVar12 = lVar17 >> 4;
  bVar4 = param_2 < (undefined8 *)(lVar12 * -0x71c71c71c71c71c7);
  uVar18 = (long)param_2 + lVar12 * 0x71c71c71c71c71c7;
  if (bVar4 || uVar18 == 0) {
    pppppplVar5 = param_1;
    if (bVar4) {
      while (pppppplVar8 != (long ******)(ppppplVar11 + (long)param_2 * 0x12)) {
        pppppplVar8 = pppppplVar8 + -0x12;
        pppppplVar5 = pppppplVar8;
        FUN_1096ca794(pppppplVar8);
      }
      param_1[1] = ppppplVar11 + (long)param_2 * 0x12;
    }
  }
  else if ((ulong)(((long)param_1[2] - (long)pppppplVar8 >> 4) * -0x71c71c71c71c71c7) < uVar18) {
    if ((undefined8 *)0x1c71c71c71c71c7 < param_2) {
      pppppplVar5 = param_1;
      FUN_1096ca618();
      ppppplStack_68 = (long *****)pppppplVar8;
      FUN_1096d1e58(&ppppplStack_78);
      pppppplVar6 = pppppplVar5;
      __Unwind_Resume();
      pcStack_88 = FUN_1096d1700;
      pppppplVar7 = pppppplVar6;
      lStack_b0 = lVar17;
      ppppplStack_a8 = (long *****)pppppplVar5;
      ppppplStack_a0 = (long *****)pppppplVar8;
      ppppplStack_98 = (long *****)param_1;
      puStack_90 = &stack0xfffffffffffffff0;
      (*(code *)(*pppppplVar6)[8])();
      if ((int)pppppplVar7 == 1) {
        uVar16 = 0;
        uVar18 = 0;
        do {
          uVar16 = ((ulong)bStack_b1 & 0x7f) << (uVar18 & 0x3f) | uVar16;
          if (-1 < (char)bStack_b1) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (param_2,uVar16,0);
            puVar10 = (undefined8 *)*param_2;
            uVar3 = (uint)param_2[1];
            if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
              puVar10 = param_2;
              uVar3 = (uint)*(byte *)((long)param_2 + 0x17);
            }
            (*(code *)(*pppppplVar6)[8])(pppppplVar6,puVar10,1,(long)(int)uVar3);
            return (long ******)(ulong)((uint)pppppplVar6 == uVar3);
          }
          uVar18 = uVar18 + 7;
          pppppplVar8 = pppppplVar6;
          (*(code *)(*pppppplVar6)[8])(pppppplVar6,&bStack_b1,1,1);
        } while ((int)pppppplVar8 == 1);
      }
      return (long ******)0x0;
    }
    lVar9 = (long)param_1[2] - (long)ppppplVar11 >> 4;
    puVar10 = (undefined8 *)(lVar9 * 0x1c71c71c71c71c72);
    if (puVar10 < param_2 || (long)puVar10 - (long)param_2 == 0) {
      puVar10 = param_2;
    }
    if (0xe38e38e38e38e2 < (ulong)(lVar9 * -0x71c71c71c71c71c7)) {
      puVar10 = (undefined8 *)0x1c71c71c71c71c7;
    }
    pppppplVar8 = param_1;
    ppppplStack_58 = (long *****)param_1;
    FUN_1096ca62c();
    lVar17 = (long)pppppplVar8 + lVar17;
    lVar9 = (long)param_2 * 0x90 + lVar12 * -0x10;
    lVar12 = lVar17;
    ppppplStack_78 = (long *****)pppppplVar8;
    pppplStack_70 = (long ****)lVar17;
    ppppplStack_60 = (long *****)(pppppplVar8 + (long)puVar10 * 0x12);
    do {
      FUN_1096ca674(lVar12);
      lVar12 = lVar12 + 0x90;
      lVar9 = lVar9 + -0x90;
    } while (lVar9 != 0);
    ppppplVar15 = *param_1;
    ppppplVar2 = param_1[1];
    ppppplVar1 = (long *****)((long)ppppplVar15 + (lVar17 - (long)ppppplVar2));
    ppppplVar11 = ppppplVar15;
    ppppplVar13 = ppppplVar1;
    if (ppppplVar2 != ppppplVar15) {
      do {
        pppplVar19 = ppppplVar11[1];
        pppplVar14 = *ppppplVar11;
        ppppplVar13[2] = ppppplVar11[2];
        ppppplVar13[1] = pppplVar19;
        *ppppplVar13 = pppplVar14;
        ppppplVar11[1] = (long ****)0x0;
        ppppplVar11[2] = (long ****)0x0;
        *ppppplVar11 = (long ****)0x0;
        ppppplVar13[3] = (long ****)0x0;
        ppppplVar13[4] = (long ****)0x0;
        ppppplVar13[5] = (long ****)0x0;
        pppplVar14 = ppppplVar11[3];
        ppppplVar13[4] = ppppplVar11[4];
        ppppplVar13[3] = pppplVar14;
        ppppplVar13[5] = ppppplVar11[5];
        ppppplVar11[3] = (long ****)0x0;
        ppppplVar11[4] = (long ****)0x0;
        ppppplVar11[5] = (long ****)0x0;
        ppppplVar13[6] = (long ****)0x0;
        ppppplVar13[7] = (long ****)0x0;
        ppppplVar13[8] = (long ****)0x0;
        pppplVar14 = ppppplVar11[6];
        ppppplVar13[7] = ppppplVar11[7];
        ppppplVar13[6] = pppplVar14;
        ppppplVar13[8] = ppppplVar11[8];
        ppppplVar11[6] = (long ****)0x0;
        ppppplVar11[7] = (long ****)0x0;
        ppppplVar11[8] = (long ****)0x0;
        ppppplVar13[9] = (long ****)0x0;
        ppppplVar13[10] = (long ****)0x0;
        ppppplVar13[0xb] = (long ****)0x0;
        pppplVar14 = ppppplVar11[9];
        ppppplVar13[10] = ppppplVar11[10];
        ppppplVar13[9] = pppplVar14;
        ppppplVar13[0xb] = ppppplVar11[0xb];
        ppppplVar11[9] = (long ****)0x0;
        ppppplVar11[10] = (long ****)0x0;
        ppppplVar11[0xb] = (long ****)0x0;
        ppppplVar13[0xc] = (long ****)0x0;
        ppppplVar13[0xd] = (long ****)0x0;
        ppppplVar13[0xe] = (long ****)0x0;
        pppplVar14 = ppppplVar11[0xc];
        ppppplVar13[0xd] = ppppplVar11[0xd];
        ppppplVar13[0xc] = pppplVar14;
        ppppplVar13[0xe] = ppppplVar11[0xe];
        ppppplVar11[0xc] = (long ****)0x0;
        ppppplVar11[0xd] = (long ****)0x0;
        ppppplVar11[0xe] = (long ****)0x0;
        ppppplVar13[0xf] = (long ****)&PTR_FUN_110b01d60;
        pppplVar14 = ppppplVar11[0xf];
        ppppplVar13[0x10] = ppppplVar11[0x10];
        ppppplVar13[0xf] = pppplVar14;
        ppppplVar13[0xf] = (long ****)&PTR_FUN_110b00af0;
        pppplVar14 = ppppplVar11[0x11];
        ppppplVar11[0x10] = (long ****)0x0;
        ppppplVar11[0x11] = (long ****)0x0;
        ppppplVar13[0x11] = pppplVar14;
        ppppplVar11 = ppppplVar11 + 0x12;
        ppppplVar13 = ppppplVar13 + 0x12;
      } while (ppppplVar11 != ppppplVar2);
      do {
        FUN_1096ca794(ppppplVar15);
        ppppplVar15 = ppppplVar15 + 0x12;
      } while (ppppplVar15 != ppppplVar2);
      ppppplVar15 = *param_1;
    }
    *param_1 = ppppplVar1;
    param_1[1] = (long *****)(lVar17 + uVar18 * 0x90);
    ppppplStack_60 = param_1[2];
    param_1[2] = (long *****)(pppppplVar8 + (long)puVar10 * 0x12);
    pppppplVar5 = &ppppplStack_78;
    ppppplStack_78 = ppppplVar15;
    pppplStack_70 = (long ****)ppppplVar15;
    ppppplStack_68 = ppppplVar15;
    FUN_1096d1e58(pppppplVar5);
  }
  else {
    pppppplVar6 = pppppplVar8 + uVar18 * 0x12;
    lVar17 = (long)param_2 * 0x90 + lVar12 * -0x10;
    do {
      pppppplVar5 = pppppplVar8;
      FUN_1096ca674(pppppplVar8);
      pppppplVar8 = pppppplVar8 + 0x12;
      lVar17 = lVar17 + -0x90;
    } while (lVar17 != 0);
    param_1[1] = (long *****)pppppplVar6;
  }
  return pppppplVar5;
}



/* Entry: 1096d1700; end: 1096d17e3;  */

bool FUN_1096d1700(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  byte bStack_31;
  
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x40))(param_1,&bStack_31,1,1);
  if ((int)plVar3 == 1) {
    uVar4 = 0;
    uVar5 = 0;
    do {
      uVar4 = ((ulong)bStack_31 & 0x7f) << (uVar5 & 0x3f) | uVar4;
      if (-1 < (char)bStack_31) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_2,uVar4,0);
        puVar1 = (undefined8 *)*param_2;
        uVar2 = (uint)param_2[1];
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          puVar1 = param_2;
          uVar2 = (uint)*(byte *)((long)param_2 + 0x17);
        }
        (**(code **)(*param_1 + 0x40))(param_1,puVar1,1,(long)(int)uVar2);
        return (uint)param_1 == uVar2;
      }
      uVar5 = uVar5 + 7;
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x40))(param_1,&bStack_31,1,1);
    } while ((int)plVar3 == 1);
  }
  return false;
}



/* Entry: 1096d17e4; end: 1096d1d37;  */

void FUN_1096d17e4(undefined8 *param_1,double *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  double *pdVar5;
  long lVar6;
  long *plVar7;
  undefined ***pppuVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c0;
  double dStack_b8;
  undefined **appuStack_b0 [2];
  undefined **ppuStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  double dStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1096cfcf0(&ppuStack_80);
  pdVar5 = param_2;
  FUN_1096a7580(param_2,0x113735ce0);
  *(undefined4 *)(lStack_78 + 8) = *(undefined4 *)pdVar5;
  pdVar5 = param_2;
  func_0x0001096b50e4(param_2,0x113735ce8);
  dStack_88 = pdVar5[1];
  if (dStack_88 != 0.0) {
    piVar12 = (int *)((long)dStack_88 + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = *piVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_90 = &PTR_FUN_110b00af0;
  uVar4 = SUB84(&ppuStack_90,0);
  FUN_1096d39e0();
  *(undefined4 *)(lStack_78 + 0xc) = uVar4;
  ppuStack_90 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_90);
  lVar6 = (long)param_2[1] + -0x20;
  func_0x0001096966c0(lVar6,plRam0000000113735cd8);
  if ((lVar6 == 0) || (plVar7 = *(long **)(lVar6 + 8), plVar7 == (long *)0x0)) {
    plVar7 = plRam0000000113735cd8;
    (**(code **)(*plRam0000000113735cd8 + 0x30))();
  }
  lStack_98 = plVar7[1];
  if (lStack_98 == 0) {
    ppuStack_a0 = &PTR_FUN_110b01738;
  }
  else {
    piVar12 = (int *)(lStack_98 + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = *piVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppuStack_a0 = &PTR_FUN_110b01738;
    if (lStack_98 != 0) {
      FUN_1096d3e0c(lStack_78 + 0x28,&ppuStack_a0);
    }
  }
  pdVar5 = param_2;
  func_0x0001096c1e64(param_2,0x113735cd0);
  *(float *)(lStack_78 + 0x20) = (float)*pdVar5;
  pdVar5 = param_2;
  func_0x0001096b50e4(param_2,0x113735cf0);
  dStack_b8 = pdVar5[1];
  if (dStack_b8 != 0.0) {
    piVar12 = (int *)((long)dStack_b8 + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = *piVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_c0 = &PTR_FUN_110b00af0;
  FUN_1096973b4(appuStack_b0,&ppuStack_c0);
  pppuVar8 = appuStack_b0;
  ___dynamic_cast(pppuVar8,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0);
  if (pppuVar8 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  ppuVar19 = pppuVar8[1];
  if (ppuVar19 != (undefined **)0x0) {
    ppuVar13 = ppuVar19 + -1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
      if (bVar3) {
        *(int *)ppuVar13 = *(int *)ppuVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_d8 = *(undefined **)(lStack_78 + 0x18);
  *(undefined ***)(lStack_78 + 0x18) = ppuVar19;
  *(undefined ***)(lStack_78 + 0x10) = &PTR_FUN_110b051b8;
  ppuStack_e0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_e0);
  appuStack_b0[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_b0);
  ppuStack_c0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_c0);
  puVar11 = (undefined8 *)0x113735cc8;
  FUN_1096d1d38(param_2);
  FUN_1096c9b68(&ppuStack_e0);
  lVar6 = lStack_78;
  plVar7 = (long *)(lStack_78 + 0xa8);
  lVar18 = *plVar7;
  if (lVar18 != 0) {
    lVar15 = *(long *)(lStack_78 + 0xb0);
    lVar9 = lVar18;
    if (lVar15 != lVar18) {
      do {
        lVar15 = lVar15 + -0x90;
        FUN_1096ca794(lVar15);
      } while (lVar15 != lVar18);
      lVar9 = *plVar7;
    }
    *(long *)(lVar6 + 0xb0) = lVar18;
    __ZdlPv(lVar9);
    *plVar7 = 0;
    *(undefined8 *)(lVar6 + 0xb0) = 0;
    *(undefined8 *)(lVar6 + 0xb8) = 0;
  }
  *(undefined **)(lVar6 + 0xb0) = puStack_d8;
  *(undefined ***)(lVar6 + 0xa8) = ppuStack_e0;
  *(undefined8 *)(lVar6 + 0xb8) = uStack_d0;
  puStack_d8 = (undefined *)0x0;
  uStack_d0 = 0;
  ppuStack_e0 = (undefined **)0x0;
  appuStack_b0[0] = (undefined **)&ppuStack_e0;
  FUN_1096ca724(appuStack_b0);
  puVar16 = *(undefined8 **)(lStack_78 + 0xa8);
  if (1 < (ulong)((*(long *)(lStack_78 + 0xb0) - (long)puVar16 >> 4) * -0x71c71c71c71c71c7)) {
    plVar7 = (long *)puVar16[9];
    if (*(char *)((long)plVar7 + 0x17) < '\0') {
      if (plVar7[1] != 9) goto LAB_1096d1c60;
      plVar7 = (long *)*plVar7;
    }
    else if (*(char *)((long)plVar7 + 0x17) != '\t') goto LAB_1096d1c60;
    if (*plVar7 == 0x726f66736e617274 && (char)plVar7[1] == 'm') {
      if (*(int *)(lStack_78 + 8) < 6) {
        ppuStack_e0 = (undefined **)&UNK_10f57da82;
        puStack_d8 = &UNK_10f57d9ad;
        uStack_d0 = 0x12a;
        FUN_109699380(&ppuStack_e0);
        puVar16 = *(undefined8 **)(lStack_78 + 0xa8);
      }
      lVar6 = lStack_78;
      puVar10 = (undefined8 *)0x90;
      __Znwm();
      uVar20 = puVar16[1];
      uVar14 = *puVar16;
      puVar10[2] = puVar16[2];
      puVar10[1] = uVar20;
      *puVar10 = uVar14;
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
      uVar14 = puVar16[3];
      puVar10[4] = puVar16[4];
      puVar10[3] = uVar14;
      puVar10[5] = puVar16[5];
      puVar16[3] = 0;
      puVar16[4] = 0;
      puVar16[5] = 0;
      uVar14 = puVar16[6];
      puVar10[7] = puVar16[7];
      puVar10[6] = uVar14;
      puVar10[8] = puVar16[8];
      puVar16[6] = 0;
      puVar16[7] = 0;
      puVar16[8] = 0;
      uVar14 = puVar16[9];
      puVar10[10] = puVar16[10];
      puVar10[9] = uVar14;
      puVar10[0xb] = puVar16[0xb];
      puVar16[9] = 0;
      puVar16[10] = 0;
      puVar16[0xb] = 0;
      uVar14 = puVar16[0xc];
      puVar10[0xd] = puVar16[0xd];
      puVar10[0xc] = uVar14;
      puVar10[0xe] = puVar16[0xe];
      puVar16[0xc] = 0;
      puVar16[0xd] = 0;
      puVar16[0xe] = 0;
      uVar14 = puVar16[0xf];
      puVar10[0x10] = puVar16[0x10];
      puVar10[0xf] = uVar14;
      puVar10[0xf] = &PTR_FUN_110b00af0;
      uVar14 = puVar16[0x11];
      puVar16[0x10] = 0;
      puVar16[0x11] = 0;
      puVar10[0x11] = uVar14;
      lVar18 = *(long *)(lVar6 + 0xc0);
      *(undefined8 **)(lVar6 + 0xc0) = puVar10;
      if (lVar18 != 0) {
        FUN_1096d2edc(lVar18);
        lVar6 = lStack_78;
      }
      puVar16 = *(undefined8 **)(lVar6 + 0xa8);
      puVar10 = *(undefined8 **)(lVar6 + 0xb0);
      puVar17 = puVar16;
      if (puVar16 + 0x12 != puVar10) {
        do {
          puVar16 = puVar17 + 0x12;
          puVar11 = puVar16;
          func_0x0001096d1ea4(puVar17);
          puVar1 = puVar17 + 0x24;
          puVar17 = puVar16;
        } while (puVar1 != puVar10);
        puVar10 = *(undefined8 **)(lVar6 + 0xb0);
      }
      while (puVar10 != puVar16) {
        puVar10 = puVar10 + -0x12;
        FUN_1096ca794(puVar10);
      }
      *(undefined8 **)(lVar6 + 0xb0) = puVar16;
    }
  }
LAB_1096d1c60:
  param_1[1] = lStack_78;
  *param_1 = ppuStack_80;
  lStack_78 = 0;
  ppuStack_a0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_a0);
  ppuStack_80 = &PTR_FUN_110b01d60;
  pppuVar8 = &ppuStack_80;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_109696618(&ppuStack_a0);
  FUN_109696618(&ppuStack_80);
  __Unwind_Resume();
  ppuVar19 = pppuVar8[1] + -4;
  func_0x0001096966c0(ppuVar19,*puVar11);
  if ((ppuVar19 != (undefined **)0x0) && (ppuVar19[1] != (undefined *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096d1d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar11 + 0x30))();
  return;
}



/* Entry: 1096d1d38; end: 1096d1d87;  */

void FUN_1096d1d38(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096d1d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x30))();
  return;
}



/* Entry: 1096d1d88; end: 1096d1dbb;  */

undefined8 * FUN_1096d1d88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096d1dbc; end: 1096d1def;  */

void FUN_1096d1dbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096d1df0; end: 1096d1e23;  */

undefined8 * FUN_1096d1df0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096d1e24; end: 1096d1e57;  */

void FUN_1096d1e24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096d1e58; end: 1096d2047;  */

long * FUN_1096d1e58(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x90;
    FUN_1096ca794();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096d2048; end: 1096d205b;  */

void FUN_1096d2048(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x18);
  return;
}



/* Entry: 1096d205c; end: 1096d208b;  */

void FUN_1096d205c(undefined8 param_1,long *param_2)

{
  if (*param_2 != 0) {
    param_2[1] = *param_2;
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096d208c; end: 1096d20db;  */

void FUN_1096d208c(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0x31;
  __Znam();
  lVar6 = 0x18;
  pcVar4 = (char *)(lVar3 + 1);
  do {
    bVar2 = *param_3;
    cVar5 = '0';
    cVar1 = '0';
    if (9 < (bVar2 & 0xf)) {
      cVar1 = '7';
    }
    pcVar4[-1] = cVar1 + (bVar2 & 0xf);
    if (0x9f < bVar2) {
      cVar5 = '7';
    }
    *pcVar4 = cVar5 + (bVar2 >> 4);
    lVar6 = lVar6 + -1;
    pcVar4 = pcVar4 + 2;
    param_3 = param_3 + 1;
  } while (lVar6 != 0);
  *(undefined1 *)(lVar3 + 0x30) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096d20dc; end: 1096d2133;  */

void FUN_1096d20dc(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b07cc8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096d2134; end: 1096d213f;  */

void FUN_1096d2134(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1096d2140; end: 1096d218b;  */

void FUN_1096d2140(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096cfcf0(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096d218c; end: 1096d21bb;  */

bool FUN_1096d218c(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b07cc8,0);
  return param_1 != 0;
}



/* Entry: 1096d21bc; end: 1096d2247;  */

void FUN_1096d21bc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = lVar2 - lVar1 >> 2;
  if (lVar3 != 0) {
    FUN_1092cc154(param_2,lVar3);
    lVar3 = param_2[1];
    lVar2 = lVar2 - lVar1;
    if (lVar2 != 0) {
      _memmove(lVar3,lVar1,lVar2);
    }
    param_2[1] = lVar3 + lVar2;
  }
  return;
}



/* Entry: 1096d2248; end: 1096d229f;  */

void FUN_1096d2248(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b07cc8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096d22a0; end: 1096d22e3;  */

void FUN_1096d22a0(undefined8 *param_1)

{
  param_1[2] = 0x3f80000000000000;
  param_1[3] = 0;
  param_1[1] = 0x3f800000;
  *param_1 = 0;
  return;
}



/* Entry: 1096d22e4; end: 1096d232b;  */

void FUN_1096d22e4(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096d232c; end: 1096d2383;  */

undefined8 * FUN_1096d232c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096d2384; end: 1096d23db;  */

void FUN_1096d2384(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b07cc8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096d23dc; end: 1096d23f7;  */

void FUN_1096d23dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096d23f8; end: 1096d243f;  */

void FUN_1096d23f8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096d2440; end: 1096d2497;  */

undefined8 * FUN_1096d2440(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096d2498; end: 1096d24ef;  */

void FUN_1096d2498(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b07d20;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096d24f0; end: 1096d2567;  */

void FUN_1096d24f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  param_1[1] = puVar1;
  *param_1 = &PTR_FUN_110b07cf0;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096d2568; end: 1096d2597;  */

bool FUN_1096d2568(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b07d20,0);
  return param_1 != 0;
}



/* Entry: 1096d2598; end: 1096d25ff;  */

long FUN_1096d2598(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (lVar1 != 0) {
    FUN_1096d2edc();
  }
  lStack_28 = param_1 + 0xa8;
  FUN_1096ca724(&lStack_28);
  FUN_1096d2768(param_1 + 0x28);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096d2600; end: 1096d266b;  */

void FUN_1096d2600(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (lVar1 != 0) {
    FUN_1096d2edc();
  }
  lStack_28 = param_1 + 0xa8;
  FUN_1096ca724(&lStack_28);
  FUN_1096d2768(param_1 + 0x28);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  __ZdlPv(param_1);
  return;
}



/* Entry: 1096d266c; end: 1096d2767;  */

long FUN_1096d266c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 8);
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)plVar1[3];
    if (*plVar1 != 0) {
      plVar1[1] = *plVar1;
      __ZdlPv();
    }
    __ZdlPv(plVar1);
    plVar1 = plVar2;
  }
  return param_1;
}



/* Entry: 1096d2768; end: 1096d2827;  */

long FUN_1096d2768(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  plVar1 = *(long **)(param_1 + 0x38);
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)plVar1[3];
    if (*plVar1 != 0) {
      plVar1[1] = *plVar1;
      __ZdlPv();
    }
    __ZdlPv(plVar1);
    plVar1 = plVar2;
  }
  plVar1 = *(long **)(param_1 + 0x20);
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)plVar1[3];
    if (*plVar1 != 0) {
      plVar1[1] = *plVar1;
      __ZdlPv();
    }
    __ZdlPv(plVar1);
    plVar1 = plVar2;
  }
  plVar1 = *(long **)(param_1 + 8);
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)plVar1[3];
    if (*plVar1 != 0) {
      plVar1[1] = *plVar1;
      __ZdlPv();
    }
    __ZdlPv(plVar1);
    plVar1 = plVar2;
  }
  return param_1;
}



/* Entry: 1096d2828; end: 1096d2edb;  */

void FUN_1096d2828(undefined8 *param_1)

{
  byte *pbVar1;
  undefined ***pppuVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  undefined ***pppuVar10;
  undefined1 *puVar11;
  undefined ***pppuVar12;
  undefined **ppuVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  undefined **ppuVar23;
  undefined ***pppuStack_118;
  long lStack_110;
  undefined ***pppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar20 = *(long **)*param_1;
  lVar9 = *plVar20;
  lVar4 = plVar20[1];
  func_0x000109693fa4(lVar9,0x11382aa68);
  lVar9 = *(long *)(lVar9 + 8);
  if (lVar9 != 0) {
    piVar14 = (int *)(lVar9 + -8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar6) {
        *piVar14 = *piVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppuStack_a0 = &PTR_FUN_110b00af0;
  lVar18 = *(long *)(*(long *)(lVar4 + 8) + 0xb0);
  lStack_98 = lVar9;
  for (lVar22 = *(long *)(*(long *)(lVar4 + 8) + 0xa8); lVar22 != lVar18; lVar22 = lVar22 + 0x90) {
    if (*(long *)(lVar22 + 0x80) != lVar9) {
      func_0x000107c2acd4(lVar22 + 0x78);
      *(long *)(lVar22 + 0x80) = lStack_98;
      *(undefined ***)(lVar22 + 0x78) = ppuStack_a0;
      if (*(long *)(lVar22 + 0x80) != 0) {
        piVar14 = (int *)(*(long *)(lVar22 + 0x80) + -8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar6) {
            *piVar14 = *piVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  lVar9 = *plVar20;
  FUN_1096e699c(lVar9,0x11382ab08);
  lStack_a8 = *(long *)(lVar9 + 8);
  if (lStack_a8 != 0) {
    piVar14 = (int *)(lStack_a8 + -8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar6) {
        *piVar14 = *piVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppuStack_b0 = &PTR_FUN_110b01738;
  func_0x000107c2ace8(&ppuStack_c0);
  if (lStack_a8 != 0) {
    func_0x000107c2ace8(&ppuStack_d0);
    if (*(char *)(lStack_c8 + 0x1f) < '\0') {
      *(undefined8 *)(lStack_c8 + 0x10) = 7;
      puVar15 = *(undefined4 **)(lStack_c8 + 8);
    }
    else {
      puVar15 = (undefined4 *)(lStack_c8 + 8);
      *(undefined1 *)(lStack_c8 + 0x1f) = 7;
    }
    *(undefined4 *)((long)puVar15 + 3) = 0x646e656b;
    *puVar15 = 0x6b636142;
    *(undefined1 *)((long)puVar15 + 7) = 0;
    ppuStack_e8 = &PTR_FUN_110b01d60;
    ppuStack_e0 = (undefined **)0x0;
    pppuVar10 = &ppuStack_b0;
    func_0x00010969564c(pppuVar10,&ppuStack_d0,&ppuStack_e8);
    if ((int)pppuVar10 == 0) {
      ppuStack_e8 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_e8);
      ppuStack_d0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_d0);
    }
    else {
      pppuVar10 = &ppuStack_e8;
      ___dynamic_cast(pppuVar10,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
      if (pppuVar10 == (undefined ***)0x0) {
        func_0x000107c2acdc();
      }
      ppuVar13 = pppuVar10[1];
      if (ppuVar13 != (undefined **)0x0) {
        ppuVar16 = ppuVar13 + -1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
          if (bVar6) {
            *(int *)ppuVar16 = *(int *)ppuVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppuStack_88 = ppuStack_b8;
      ppuStack_c0 = &PTR_FUN_110b00af0;
      ppuStack_90 = &PTR_FUN_110b01d60;
      ppuStack_b8 = ppuVar13;
      func_0x000107c2acd4(&ppuStack_90);
      ppuStack_e8 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_e8);
      ppuStack_d0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_d0);
      FUN_1096c96e0(&ppuStack_e8,&ppuStack_c0);
      pppuVar10 = *(undefined ****)(*(long *)(lVar4 + 8) + 0xa8);
      pppuVar12 = *(undefined ****)(*(long *)(lVar4 + 8) + 0xb0);
      if (pppuVar10 != pppuVar12) {
        pppuVar10 = pppuVar10 + 0xc;
        do {
          ppuVar16 = ppuStack_e0;
          ppuVar13 = ppuStack_e8;
          if (pppuVar10 != &ppuStack_e8) {
            uVar21 = (long)ppuStack_e0 - (long)ppuStack_e8;
            ppuVar17 = pppuVar10[2];
            ppuVar23 = *pppuVar10;
            if ((ulong)((long)ppuVar17 - (long)ppuVar23) < uVar21) {
              if (ppuVar23 != (undefined **)0x0) {
                pppuVar10[1] = ppuVar23;
                __ZdlPv(ppuVar23);
                ppuVar17 = (undefined **)0x0;
                *pppuVar10 = (undefined **)0x0;
                pppuVar10[1] = (undefined **)0x0;
                pppuVar10[2] = (undefined **)0x0;
              }
              uVar19 = (long)uVar21 >> 2;
              if (uVar19 >> 0x3e != 0) {
                FUN_10937df9c();
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1096d2e14);
                (*pcVar8)();
              }
              uVar3 = (long)ppuVar17 >> 1;
              if ((ulong)((long)ppuVar17 >> 1) <= uVar19) {
                uVar3 = uVar19;
              }
              if ((undefined **)0x7ffffffffffffffb < ppuVar17) {
                uVar3 = 0x3fffffffffffffff;
              }
              FUN_10938ca34(pppuVar10,uVar3);
              ppuVar23 = pppuVar10[1];
LAB_1096d2b14:
              if (ppuVar16 != ppuVar13) {
                _memmove(ppuVar23,ppuVar13,uVar21);
              }
              ppuVar23 = (undefined **)((long)ppuVar23 + uVar21);
            }
            else {
              ppuVar17 = pppuVar10[1];
              uVar19 = (long)ppuVar17 - (long)ppuVar23;
              if (uVar21 <= uVar19) goto LAB_1096d2b14;
              if (ppuVar17 != ppuVar23) {
                _memmove(ppuVar23,ppuStack_e8,uVar19);
                ppuVar17 = pppuVar10[1];
              }
              lVar9 = (long)ppuVar16 - (long)((long)ppuVar13 + uVar19);
              if (lVar9 != 0) {
                _memmove(ppuVar17,(byte *)((long)ppuVar13 + uVar19),lVar9);
              }
              ppuVar23 = (undefined **)((long)ppuVar17 + lVar9);
            }
            pppuVar10[1] = ppuVar23;
          }
          pppuVar2 = pppuVar10 + 6;
          pppuVar10 = pppuVar10 + 0x12;
        } while (pppuVar2 != pppuVar12);
      }
      if (ppuStack_e8 != (undefined **)0x0) {
        ppuStack_e0 = ppuStack_e8;
        __ZdlPv();
      }
    }
  }
  ppuStack_c0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_c0);
  if (lStack_a8 != 0) {
    FUN_109697928(&ppuStack_e8,&UNK_10f57da5a,0x18);
    pppuVar10 = &ppuStack_b0;
    FUN_109695448(pppuVar10,&ppuStack_e8,&ppuStack_90);
    ppuStack_e8 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_e8);
    if ((int)pppuVar10 != 0) {
      *(float *)(*(long *)(lVar4 + 8) + 0x20) = (float)(double)ppuStack_90;
    }
    if (lStack_a8 != 0) {
      func_0x000107c2ace8(&ppuStack_e8);
      if ((char)*(byte *)((long)ppuStack_e0 + 0x1f) < '\0') {
        ppuStack_e0[2] = (undefined *)0xb;
        ppuVar13 = (undefined **)ppuStack_e0[1];
      }
      else {
        ppuVar13 = ppuStack_e0 + 1;
        *(byte *)((long)ppuStack_e0 + 0x1f) = 0xb;
      }
      pbVar1 = (byte *)((long)ppuVar13 + 7);
      pbVar1[0] = 99;
      pbVar1[1] = 0x74;
      pbVar1[2] = 0x6f;
      pbVar1[3] = 0x72;
      *ppuVar13 = (undefined *)0x636146656c616353;
      *(byte *)((long)ppuVar13 + 0xb) = 0;
      pppuVar10 = &ppuStack_b0;
      FUN_109695448(pppuVar10,&ppuStack_e8,&ppuStack_90);
      ppuStack_e8 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_e8);
      if ((int)pppuVar10 != 0) {
        *(float *)(*(long *)(lVar4 + 8) + 0x74) = (float)(double)ppuStack_90;
      }
    }
  }
  lVar18 = *(long *)(lVar4 + 8);
  lVar9 = *(long *)(lVar18 + 0xa8);
  lVar22 = *(long *)(lVar18 + 0xb0);
  if (lVar9 != lVar22) {
    do {
      puVar11 = (undefined1 *)0x18;
      __Znwm();
      *puVar11 = 0;
      *(undefined8 *)(puVar11 + 8) = 0;
      *(undefined8 *)(puVar11 + 0x10) = 0;
      lVar18 = *(long *)(lVar9 + 0x88);
      *(undefined1 **)(lVar9 + 0x88) = puVar11;
      if (lVar18 != 0) {
        FUN_1096ca830(lVar9 + 0x88);
      }
      FUN_1096d0a64(&ppuStack_e8,lVar9);
      ppuVar13 = ppuStack_e8;
      ppuStack_e8 = (undefined **)0x0;
      if (ppuVar13 != (undefined **)0x0) {
        do {
          puVar7 = *ppuStack_e0;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuStack_e0,0x10);
          if (bVar6) {
            *(byte *)ppuStack_e0 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while ((cVar5 != '\0') || (((ulong)puVar7 & 1) != 0));
        ppuVar16 = ppuStack_e0 + 1;
        if (ppuStack_e0[2] != (undefined *)0x0) {
          ppuVar16 = (undefined **)(ppuStack_e0[2] + 0x10);
        }
        *ppuVar16 = (undefined *)ppuVar13;
        ppuStack_e0[2] = (undefined *)ppuVar13;
        *(byte *)ppuStack_e0 = 0;
      }
      lVar9 = lVar9 + 0x90;
    } while (lVar9 != lVar22);
    lVar18 = *(long *)(lVar4 + 8);
  }
  lVar9 = *(long *)(lVar18 + 0xc0);
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x80) != lStack_98) {
      func_0x000107c2acd4(lVar9 + 0x78);
      *(long *)(lVar9 + 0x80) = lStack_98;
      *(undefined ***)(lVar9 + 0x78) = ppuStack_a0;
      if (*(long *)(lVar9 + 0x80) != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0x80) + -8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar6) {
            *piVar14 = *piVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    lVar18 = *(long *)(*(long *)(lVar4 + 8) + 0xc0);
    puVar11 = (undefined1 *)0x18;
    __Znwm();
    *puVar11 = 0;
    *(undefined8 *)(puVar11 + 8) = 0;
    *(undefined8 *)(puVar11 + 0x10) = 0;
    lVar9 = *(long *)(lVar18 + 0x88);
    *(undefined1 **)(lVar18 + 0x88) = puVar11;
    if (lVar9 != 0) {
      FUN_1096ca830(lVar18 + 0x88);
      lVar18 = *(long *)(*(long *)(lVar4 + 8) + 0xc0);
    }
    FUN_1096d0a64(&ppuStack_90,lVar18);
    ppuVar13 = ppuStack_90;
    ppuStack_90 = (undefined **)0x0;
    if (ppuVar13 != (undefined **)0x0) {
      do {
        puVar7 = *ppuStack_88;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuStack_88,0x10);
        if (bVar6) {
          *(byte *)ppuStack_88 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while ((cVar5 != '\0') || (((ulong)puVar7 & 1) != 0));
      ppuVar16 = ppuStack_88 + 1;
      if (ppuStack_88[2] != (undefined *)0x0) {
        ppuVar16 = (undefined **)(ppuStack_88[2] + 0x10);
      }
      *ppuVar16 = (undefined *)ppuVar13;
      ppuStack_88[2] = (undefined *)ppuVar13;
      *(byte *)ppuStack_88 = 0;
    }
  }
  ppuStack_b0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_b0);
  ppuStack_a0 = &PTR_FUN_110b01d60;
  pppuVar10 = &ppuStack_a0;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_109696618(&ppuStack_c0);
    FUN_109696618(&ppuStack_b0);
    FUN_109696618(&ppuStack_a0);
    pppuVar12 = pppuVar10;
    __Unwind_Resume();
    pcStack_f8 = FUN_1096d2edc;
    ppuVar13 = pppuVar12[0x11];
    lStack_110 = lVar22;
    pppuStack_108 = pppuVar10;
    puStack_100 = &stack0xfffffffffffffff0;
    pppuVar12[0x11] = (undefined **)0x0;
    if (ppuVar13 != (undefined **)0x0) {
      FUN_1096ca830();
    }
    pppuVar12[0xf] = &PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    if (pppuVar12[0xc] != (undefined **)0x0) {
      pppuVar12[0xd] = pppuVar12[0xc];
      __ZdlPv();
    }
    pppuStack_118 = pppuVar12 + 9;
    func_0x000104c607c8(&pppuStack_118);
    pppuStack_118 = pppuVar12 + 6;
    func_0x000104c607c8(&pppuStack_118);
    if (pppuVar12[3] != (undefined **)0x0) {
      pppuVar12[4] = pppuVar12[3];
      __ZdlPv();
    }
    if (*(char *)((long)pppuVar12 + 0x17) < '\0') {
      __ZdlPv(*pppuVar12);
    }
    __ZdlPv(pppuVar12);
    return;
  }
  return;
}



/* Entry: 1096d2edc; end: 1096d2f7f;  */

void FUN_1096d2edc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  lVar1 = param_1[0x11];
  param_1[0x11] = 0;
  if (lVar1 != 0) {
    FUN_1096ca830();
  }
  param_1[0xf] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  puStack_28 = param_1 + 9;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 6;
  func_0x000104c607c8(&puStack_28);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  __ZdlPv(param_1);
  return;
}



/* Entry: 1096d2f80; end: 1096d2f87;  */

void FUN_1096d2f80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096d2f88; end: 1096d2fb7;  */

void FUN_1096d2f88(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096d2fb8; end: 1096d3013;  */

void FUN_1096d2fb8(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0x21;
  __Znam();
  lVar6 = 0x10;
  pcVar4 = (char *)(lVar3 + 1);
  do {
    bVar2 = *param_3;
    cVar5 = '0';
    cVar1 = '0';
    if (9 < (bVar2 & 0xf)) {
      cVar1 = '7';
    }
    pcVar4[-1] = cVar1 + (bVar2 & 0xf);
    if (0x9f < bVar2) {
      cVar5 = '7';
    }
    *pcVar4 = cVar5 + (bVar2 >> 4);
    lVar6 = lVar6 + -1;
    pcVar4 = pcVar4 + 2;
    param_3 = param_3 + 1;
  } while (lVar6 != 0);
  *(undefined1 *)(lVar3 + 0x20) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096d3014; end: 1096d303f;  */

void FUN_1096d3014(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b07d20;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096d3040; end: 1096d3127;  */

void FUN_1096d3040(undefined8 *param_1,undefined8 *param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar2 = 0x10b02870;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == param_2[1]) {
    FUN_1096d318c("",0);
    func_0x000107c2accc();
    iVar2 = 0x10b02870;
    func_0x00010969659c(&ppuStack_50);
    uVar3 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar3;
    func_0x000107c2acd4();
    param_2 = pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume();
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000107c2acec();
  *param_2 = &PTR_FUN_110b02898;
  return;
}



/* Entry: 1096d3128; end: 1096d314b;  */

void FUN_1096d3128(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107c2acec();
  *param_1 = &PTR_FUN_110b02898;
  return;
}



/* Entry: 1096d314c; end: 1096d318b;  */

void FUN_1096d314c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_110b01d60;
  uVar4 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar4;
  if (param_2[1] != 0) {
    piVar3 = (int *)(param_2[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_2 = &PTR_FUN_110b02898;
  return;
}



/* Entry: 1096d318c; end: 1096d322b;  */

void FUN_1096d318c(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  _malloc();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  func_0x000107c2accc();
  func_0x000107c2ace0();
  if (puVar1 != (undefined1 *)0x0) {
    _free();
  }
  return;
}



/* Entry: 1096d322c; end: 1096d3247;  */

void FUN_1096d322c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096d3248; end: 1096d328f;  */

void FUN_1096d3248(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096d3290; end: 1096d32ff;  */

undefined8 * FUN_1096d3290(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096d3300; end: 1096d3357;  */

void FUN_1096d3300(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b02870;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096d3358; end: 1096d33b3;  */

void FUN_1096d3358(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  ppuStack_30 = (undefined **)0x0;
  uStack_28 = 0;
  func_0x000107c2acec(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = &PTR_FUN_110b02898;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096d33b4; end: 1096d33e3;  */

bool FUN_1096d33b4(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b02870,0);
  return param_1 != 0;
}



/* Entry: 1096d33e4; end: 1096d3403;  */

void FUN_1096d33e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(8);
  return;
}



/* Entry: 1096d3404; end: 1096d3447;  */

bool FUN_1096d3404(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c058);
  return (int)plVar1 == 1;
}



/* Entry: 1096d3448; end: 1096d347f;  */

undefined8 FUN_1096d3448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



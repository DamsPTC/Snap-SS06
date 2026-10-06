/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109693f20; end: 109693f53;  */

undefined8 * FUN_109693f20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 109693f54; end: 109693ff3;  */

void FUN_109693f54(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000109693fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x30))();
  return;
}



/* Entry: 109693ff4; end: 1096940e7;  */

void FUN_109693ff4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar3,*param_2);
  if ((lVar3 == 0) || (puVar5 = *(undefined8 **)(lVar3 + 8), puVar5 == (undefined8 *)0x0)) {
    param_2 = (undefined8 *)*param_2;
    lVar3 = *(long *)(param_1 + 8) + -0x20;
    puVar5 = param_2;
    (**(code **)*param_2)();
    FUN_109696718(lVar3,param_2);
    *(undefined8 **)(lVar3 + 8) = puVar5;
    *puVar5 = &PTR_FUN_110b01d60;
    uVar6 = *param_3;
    puVar5[1] = param_3[1];
    *puVar5 = uVar6;
    if (puVar5[1] != 0) {
      piVar4 = (int *)(puVar5[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *puVar5 = &PTR_FUN_110b00af0;
  }
  else if (puVar5[1] != param_3[1]) {
    func_0x000107c2acd4(puVar5);
    uVar6 = *param_3;
    puVar5[1] = param_3[1];
    *puVar5 = uVar6;
    if (puVar5[1] != 0) {
      piVar4 = (int *)(puVar5[1] + -8);
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



/* Entry: 1096940e8; end: 109694137;  */

void FUN_1096940e8(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000109694134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x30))();
  return;
}



/* Entry: 109694138; end: 10969416b;  */

void FUN_109694138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10969416c; end: 10969419f;  */

undefined8 * FUN_10969416c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096941a0; end: 1096941d3;  */

void FUN_1096941a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096941d4; end: 1096941db;  */

void FUN_1096941d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096941dc; end: 10969420b;  */

void FUN_1096941dc(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 10969420c; end: 10969424f;  */

void FUN_10969420c(undefined8 param_1,undefined8 param_2,byte *param_3)

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



/* Entry: 109694250; end: 10969427b;  */

void FUN_109694250(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b00f60;
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



/* Entry: 10969427c; end: 109694363;  */

void FUN_10969427c(undefined8 *param_1,undefined1 *param_2)

{
  undefined ***pppuVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *extraout_x8;
  undefined8 uVar4;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar3 = 0x10afd8d8;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    func_0x000107c2acb8("",0);
    func_0x000107c2accc();
    iVar3 = 0x10afd8d8;
    func_0x00010969659c(&ppuStack_50);
    uVar4 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar4;
    func_0x000107c2acd4();
    param_2 = (undefined1 *)pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume(param_2);
  pcStack_58 = FUN_109694364;
  puVar2 = (undefined8 *)0x28;
  puStack_70 = param_2;
  puStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  _malloc();
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 3) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = &PTR_DAT_110b00de0;
  }
  extraout_x8[1] = puVar2;
  *extraout_x8 = &PTR_FUN_110b01050;
  ppuStack_80 = &PTR_FUN_110b01d60;
  uStack_78 = 0;
  func_0x000107c2acd4(&ppuStack_80);
  return;
}



/* Entry: 109694364; end: 1096943db;  */

void FUN_109694364(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b01050;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096943dc; end: 10969440f;  */

undefined8 * FUN_1096943dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 109694410; end: 109694443;  */

void FUN_109694410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109694444; end: 109694473;  */

bool FUN_109694444(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b00f60,0);
  return param_1 != 0;
}



/* Entry: 109694474; end: 1096944d3;  */

undefined8 * FUN_109694474(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b01468;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_DAT_110b01c70;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096944d4; end: 10969451b;  */

void FUN_1096944d4(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 10969451c; end: 109694573;  */

undefined8 * FUN_10969451c(undefined8 *param_1)

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



/* Entry: 109694574; end: 1096945cb;  */

void FUN_109694574(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110afd8d8;
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



/* Entry: 1096945cc; end: 109694617;  */

void FUN_1096945cc(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  func_0x000107c2acec(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 109694618; end: 109694647;  */

bool FUN_109694618(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110afd8d8,0);
  return param_1 != 0;
}



/* Entry: 109694648; end: 10969465b;  */

void FUN_109694648(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 10969465c; end: 10969468b;  */

void FUN_10969465c(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 10969468c; end: 1096946c7;  */

void FUN_10969468c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar4;
  if (param_1[1] != 0) {
    piVar3 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00af0;
  return;
}



/* Entry: 1096946c8; end: 109694727;  */

undefined8 FUN_1096946c8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_3[1] != param_2[1]) {
    func_0x000107c2acd4(param_3);
    uVar4 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar4;
    if (param_3[1] != 0) {
      piVar3 = (int *)(param_3[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return 1;
}



/* Entry: 109694728; end: 109694753;  */

undefined8 FUN_109694728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109694754; end: 10969477f;  */

void FUN_109694754(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b00f60;
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



/* Entry: 109694780; end: 109694867;  */

undefined8 * FUN_109694780(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  int iVar3;
  undefined8 uVar4;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar2 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar3 = 0x10b00b10;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == param_2[1]) {
    func_0x000107c2acbc("",0);
    func_0x000107c2accc();
    iVar3 = 0x10b00b10;
    func_0x00010969659c(&ppuStack_50);
    uVar4 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar4;
    func_0x000107c2acd4();
    param_2 = pppuVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_2;
  }
  ___stack_chk_fail();
  if (iVar3 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume();
  *param_2 = &PTR_FUN_110b01d60;
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
  *param_2 = &PTR_FUN_110b00af0;
  param_2[1] = puVar1;
  puVar1 = param_2;
  func_0x000100033474(param_2,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_2;
}



/* Entry: 109694868; end: 1096948c7;  */

undefined8 * FUN_109694868(undefined8 *param_1)

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



/* Entry: 1096948c8; end: 10969490f;  */

void FUN_1096948c8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 109694910; end: 109694967;  */

undefined8 * FUN_109694910(undefined8 *param_1)

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



/* Entry: 109694968; end: 1096949bf;  */

void FUN_109694968(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b00b10;
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



/* Entry: 1096949c0; end: 109694a0b;  */

void FUN_1096949c0(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  func_0x000107c2ace8(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 109694a0c; end: 109694a3b;  */

bool FUN_109694a0c(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
  return param_1 != 0;
}



/* Entry: 109694a3c; end: 109694ac3;  */

void FUN_109694a3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 109694ac4; end: 109694b1b;  */

void FUN_109694ac4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b00f60;
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



/* Entry: 109694b1c; end: 109694b2b;  */

void FUN_109694b1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 109694b2c; end: 109694b5b;  */

void FUN_109694b2c(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 109694b5c; end: 109694b6b;  */

void FUN_109694b5c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  ___dynamic_cast(param_3,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
  if (param_3 == (undefined8 *)0x0) {
    func_0x000107c2acdc();
  }
  uVar4 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar4;
  if (param_1[1] != 0) {
    piVar3 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00af0;
  return;
}



/* Entry: 109694b6c; end: 109694bcb;  */

undefined8 FUN_109694b6c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_3[1] != param_2[1]) {
    func_0x000107c2acd4(param_3);
    uVar4 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar4;
    if (param_3[1] != 0) {
      piVar3 = (int *)(param_3[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return 1;
}



/* Entry: 109694bcc; end: 109694bf7;  */

undefined8 FUN_109694bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109694bf8; end: 109694c23;  */

void FUN_109694bf8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b00f60;
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



/* Entry: 109694c24; end: 109694d0b;  */

void FUN_109694c24(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  int *piVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar3 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  ppuVar4 = &PTR_DAT_110b01d40;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == param_2[1]) {
    FUN_109694d40("",0);
    func_0x000107c2accc();
    ppuVar4 = &PTR_DAT_110b01d40;
    func_0x00010969659c(&ppuStack_50);
    uVar7 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar7;
    func_0x000107c2acd4();
    param_2 = pppuVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar4 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume();
  *ppuVar4 = (undefined *)&PTR_FUN_110b01d60;
  puVar6 = (undefined *)*param_2;
  ppuVar4[1] = (undefined *)param_2[1];
  *ppuVar4 = puVar6;
  if (ppuVar4[1] != (undefined *)0x0) {
    piVar5 = (int *)(ppuVar4[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}



/* Entry: 109694d0c; end: 109694d3f;  */

void FUN_109694d0c(undefined8 *param_1,undefined8 *param_2)

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
  return;
}



/* Entry: 109694d40; end: 109694ddf;  */

void FUN_109694d40(void)

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



/* Entry: 109694de0; end: 109694dfb;  */

void FUN_109694de0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 109694dfc; end: 109694e43;  */

void FUN_109694dfc(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 109694e44; end: 109694eaf;  */

undefined8 * FUN_109694e44(undefined8 *param_1)

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



/* Entry: 109694eb0; end: 109694f07;  */

void FUN_109694eb0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b01d40;
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



/* Entry: 109694f08; end: 109694f23;  */

undefined8 FUN_109694f08(void)

{
  return 1;
}



/* Entry: 109694f24; end: 109694f53;  */

void FUN_109694f24(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 109694f54; end: 109694fa3;  */

void FUN_109694f54(undefined8 param_1,undefined8 param_2,byte *param_3)

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



/* Entry: 109694fa4; end: 109694fcf;  */

void FUN_109694fa4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b00f60;
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



/* Entry: 109694fd0; end: 1096950b7;  */

void FUN_109694fd0(undefined8 *param_1,undefined8 *param_2)

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
  iVar2 = 0x10b01618;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == param_2[1]) {
    func_0x000107c2acc0("",0);
    func_0x000107c2accc();
    iVar2 = 0x10b01618;
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
  *param_2 = &PTR_FUN_110b01708;
  return;
}



/* Entry: 1096950b8; end: 1096950db;  */

void FUN_1096950b8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107c2acec();
  *param_1 = &PTR_FUN_110b01708;
  return;
}



/* Entry: 1096950dc; end: 109695137;  */

void FUN_1096950dc(undefined8 *param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_110b01708;
  return;
}



/* Entry: 109695138; end: 10969517f;  */

void FUN_109695138(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 109695180; end: 1096951d7;  */

undefined8 * FUN_109695180(undefined8 *param_1)

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



/* Entry: 1096951d8; end: 10969522f;  */

void FUN_1096951d8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b01618;
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



/* Entry: 109695230; end: 10969528b;  */

void FUN_109695230(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  ppuStack_30 = (undefined **)0x0;
  uStack_28 = 0;
  func_0x000107c2acec(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = &PTR_FUN_110b01708;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 10969528c; end: 1096952bb;  */

bool FUN_10969528c(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b01618,0);
  return param_1 != 0;
}



/* Entry: 1096952bc; end: 109695447;  */

undefined *** FUN_1096952bc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  int *piVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2ace8(&ppuStack_80);
  ppuStack_60 = &PTR_FUN_110b01d60;
  uStack_58 = 0;
  uVar3 = param_1;
  puVar6 = param_2;
  func_0x00010969564c();
  if ((int)uVar3 == 0) {
    ppuStack_60 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_60);
    pppuVar9 = (undefined ***)0x0;
  }
  else {
    pppuVar9 = &ppuStack_60;
    ___dynamic_cast(pppuVar9,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
    if (pppuVar9 == (undefined ***)0x0) {
      func_0x000107c2acdc();
    }
    ppuVar4 = pppuVar9[1];
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar7 = ppuVar4 + -1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar2) {
          *(int *)ppuVar7 = *(int *)ppuVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppuStack_80 = &PTR_FUN_110b00af0;
    ppuStack_68 = ppuStack_78;
    ppuStack_70 = &PTR_FUN_110b01d60;
    ppuStack_78 = ppuVar4;
    func_0x000107c2acd4(&ppuStack_70);
    ppuStack_60 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_60);
    ppuVar4 = ppuStack_78 + 1;
    if (*(char *)((long)ppuStack_78 + 0x1f) < '\0') {
      ppuVar4 = (undefined **)*ppuVar4;
    }
    puVar6 = (undefined8 *)&UNK_10f57c051;
    uStack_90 = param_3;
    _sscanf(ppuVar4);
    pppuVar9 = (undefined ***)(ulong)((int)ppuVar4 == 1);
  }
  ppuStack_80 = &PTR_FUN_110b01d60;
  pppuVar5 = &ppuStack_80;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar9;
  }
  ___stack_chk_fail();
  if ((int)puVar6 != 0) {
    func_0x000104bd46a0();
    FUN_10969664c(&ppuStack_60);
    FUN_109696618(&ppuStack_80);
  }
  pppuVar9 = pppuVar5;
  __Unwind_Resume();
  ppuStack_c0 = &PTR_FUN_110b01d60;
  pcStack_98 = FUN_109695448;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = param_1;
  puStack_b0 = param_2;
  pppuStack_a8 = pppuVar5;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107c2ace8(&ppuStack_110);
  ppuStack_f0 = &PTR_FUN_110b01d60;
  uStack_e8 = 0;
  func_0x00010969564c(pppuVar9,puVar6,&ppuStack_f0);
  if ((int)pppuVar9 == 0) {
    ppuStack_f0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_f0);
    pppuVar9 = (undefined ***)0x0;
  }
  else {
    pppuVar9 = &ppuStack_f0;
    ___dynamic_cast(pppuVar9,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
    if (pppuVar9 == (undefined ***)0x0) {
      func_0x000107c2acdc();
    }
    ppuVar4 = pppuVar9[1];
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar7 = ppuVar4 + -1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar2) {
          *(int *)ppuVar7 = *(int *)ppuVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppuStack_110 = &PTR_FUN_110b00af0;
    ppuStack_f8 = ppuStack_108;
    ppuStack_100 = &PTR_FUN_110b01d60;
    ppuStack_108 = ppuVar4;
    func_0x000107c2acd4(&ppuStack_100);
    ppuStack_f0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_f0);
    ppuVar4 = ppuStack_108 + 1;
    if (*(char *)((long)ppuStack_108 + 0x1f) < '\0') {
      ppuVar4 = (undefined **)*ppuVar4;
    }
    puVar6 = (undefined8 *)&UNK_10f57c058;
    _sscanf(ppuVar4);
    pppuVar9 = (undefined ***)(ulong)((int)ppuVar4 == 1);
  }
  ppuStack_110 = &PTR_FUN_110b01d60;
  pppuVar5 = &ppuStack_110;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppuVar9;
  }
  ___stack_chk_fail();
  if ((int)puVar6 != 0) {
    func_0x000104bd46a0();
    FUN_10969664c(&ppuStack_f0);
    FUN_109696618(&ppuStack_110);
  }
  __Unwind_Resume();
  ppuVar4 = pppuVar5[1];
  if (ppuVar4 < pppuVar5[2]) {
    *ppuVar4 = (undefined *)&PTR_FUN_110b01d60;
    puVar10 = (undefined *)*puVar6;
    ppuVar4[1] = (undefined *)puVar6[1];
    *ppuVar4 = puVar10;
    if (ppuVar4[1] != (undefined *)0x0) {
      piVar8 = (int *)(ppuVar4[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppuVar9 = (undefined ***)(ppuVar4 + 2);
    *ppuVar4 = (undefined *)&PTR_FUN_110b01738;
  }
  else {
    pppuVar9 = pppuVar5;
    FUN_10969579c();
  }
  pppuVar5[1] = (undefined **)pppuVar9;
  return pppuVar9;
}



/* Entry: 109695448; end: 1096955d3;  */

undefined *** FUN_109695448(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  int *piVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2ace8(&ppuStack_80);
  ppuStack_60 = &PTR_FUN_110b01d60;
  uStack_58 = 0;
  func_0x00010969564c(param_1,param_2,&ppuStack_60);
  if ((int)param_1 == 0) {
    ppuStack_60 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_60);
    pppuVar7 = (undefined ***)0x0;
  }
  else {
    pppuVar7 = &ppuStack_60;
    ___dynamic_cast(pppuVar7,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
    if (pppuVar7 == (undefined ***)0x0) {
      func_0x000107c2acdc();
    }
    ppuVar3 = pppuVar7[1];
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar5 = ppuVar3 + -1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar2) {
          *(int *)ppuVar5 = *(int *)ppuVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppuStack_80 = &PTR_FUN_110b00af0;
    ppuStack_68 = ppuStack_78;
    ppuStack_70 = &PTR_FUN_110b01d60;
    ppuStack_78 = ppuVar3;
    func_0x000107c2acd4(&ppuStack_70);
    ppuStack_60 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_60);
    ppuVar3 = ppuStack_78 + 1;
    if (*(char *)((long)ppuStack_78 + 0x1f) < '\0') {
      ppuVar3 = (undefined **)*ppuVar3;
    }
    param_2 = (undefined8 *)&UNK_10f57c058;
    _sscanf(ppuVar3);
    pppuVar7 = (undefined ***)(ulong)((int)ppuVar3 == 1);
  }
  ppuStack_80 = &PTR_FUN_110b01d60;
  pppuVar4 = &ppuStack_80;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
    FUN_10969664c(&ppuStack_60);
    FUN_109696618(&ppuStack_80);
  }
  __Unwind_Resume();
  ppuVar3 = pppuVar4[1];
  if (ppuVar3 < pppuVar4[2]) {
    *ppuVar3 = (undefined *)&PTR_FUN_110b01d60;
    puVar8 = (undefined *)*param_2;
    ppuVar3[1] = (undefined *)param_2[1];
    *ppuVar3 = puVar8;
    if (ppuVar3[1] != (undefined *)0x0) {
      piVar6 = (int *)(ppuVar3[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppuVar7 = (undefined ***)(ppuVar3 + 2);
    *ppuVar3 = (undefined *)&PTR_FUN_110b01738;
  }
  else {
    pppuVar7 = pppuVar4;
    FUN_10969579c();
  }
  pppuVar4[1] = (undefined **)pppuVar7;
  return pppuVar7;
}



/* Entry: 1096955d4; end: 109695733;  */

void FUN_1096955d4(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    *puVar3 = &PTR_FUN_110b01d60;
    uVar6 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar6;
    if (puVar3[1] != 0) {
      piVar5 = (int *)(puVar3[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puVar4 = puVar3 + 2;
    *puVar3 = &PTR_FUN_110b01738;
  }
  else {
    puVar4 = param_1;
    FUN_10969579c();
  }
  param_1[1] = puVar4;
  return;
}



/* Entry: 109695734; end: 109695767;  */

undefined8 * FUN_109695734(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 109695768; end: 10969579b;  */

void FUN_109695768(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10969579c; end: 109695903;  */

long * FUN_10969579c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  long *plStack_58;
  
  puVar11 = (undefined8 *)*param_1;
  puVar12 = (undefined8 *)param_1[1];
  lVar13 = (long)puVar12 - (long)puVar11 >> 4;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar9 = param_1[2] - (long)puVar11 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)puVar11)) {
      uVar9 = 0xfffffffffffffff;
    }
    plStack_58 = param_1;
    if (uVar9 == 0) {
      lVar5 = 0;
    }
    else {
      if (uVar9 >> 0x3c != 0) goto LAB_1096958fc;
      lVar5 = uVar9 << 4;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar5 + ((long)puVar12 - (long)puVar11));
    uVar14 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar14;
    if (puVar2[1] != 0) {
      piVar7 = (int *)(puVar2[1] + -8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = *piVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar11 = (undefined8 *)*param_1;
      puVar12 = (undefined8 *)param_1[1];
      lVar13 = (long)puVar12 - (long)puVar11 >> 4;
    }
    *puVar2 = &PTR_FUN_110b01738;
    puVar8 = puVar11;
    puVar10 = puVar2 + lVar13 * -2;
    if (puVar11 != puVar12) {
      do {
        uVar14 = *puVar8;
        puVar10[1] = puVar8[1];
        *puVar10 = uVar14;
        puVar8[1] = 0;
        *puVar10 = &PTR_FUN_110b01738;
        puVar8 = puVar8 + 2;
        puVar10 = puVar10 + 2;
      } while (puVar8 != puVar12);
      do {
        *puVar11 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(puVar11);
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar12);
      puVar11 = (undefined8 *)*param_1;
    }
    *param_1 = (long)(puVar2 + lVar13 * -2);
    param_1[1] = (long)(puVar2 + 2);
    lStack_60 = param_1[2];
    param_1[2] = lVar5 + uVar9 * 0x10;
    puStack_78 = puVar11;
    puStack_70 = puVar11;
    puStack_68 = puVar11;
    FUN_109695918(&puStack_78);
    return puVar2 + 2;
  }
  FUN_109695904();
LAB_1096958fc:
  func_0x000104c4f740();
  func_0x000104bd46a0();
  plVar6 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar13 = plVar6[1];
  lVar5 = plVar6[2];
  while (lVar5 != lVar13) {
    *(undefined8 *)(lVar5 + -0x10) = &PTR_FUN_110b01d60;
    plVar6[2] = lVar5 + -0x10;
    func_0x000107c2acd4();
    lVar5 = plVar6[2];
  }
  if (*plVar6 != 0) {
    __ZdlPv();
  }
  return plVar6;
}



/* Entry: 109695904; end: 109695917;  */

long * FUN_109695904(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    *(undefined8 *)(lVar3 + -0x10) = &PTR_FUN_110b01d60;
    plVar2[2] = lVar3 + -0x10;
    func_0x000107c2acd4();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 109695918; end: 10969597b;  */

long * FUN_109695918(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    *(undefined8 *)(lVar2 + -0x10) = &PTR_FUN_110b01d60;
    param_1[2] = lVar2 + -0x10;
    func_0x000107c2acd4();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10969597c; end: 109695997;  */

void FUN_10969597c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 109695998; end: 1096959df;  */

void FUN_109695998(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096959e0; end: 109695a37;  */

undefined8 * FUN_1096959e0(undefined8 *param_1)

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



/* Entry: 109695a38; end: 109695a8f;  */

void FUN_109695a38(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b01758;
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



/* Entry: 109695a90; end: 109695adb;  */

void FUN_109695a90(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  func_0x000107c2acc8(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 109695adc; end: 109695b0b;  */

bool FUN_109695adc(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b01758,0);
  return param_1 != 0;
}



/* Entry: 109695b0c; end: 109695b6b;  */

long FUN_109695b0c(long param_1)

{
  FUN_109695b6c(param_1 + 0x20);
  FUN_109695be8(param_1 + 8);
  return param_1;
}



/* Entry: 109695b6c; end: 109695be7;  */

long * FUN_109695b6c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    plVar1[4] = (long)&PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    plVar1[2] = (long)&PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109695be8; end: 109695c63;  */

void FUN_109695be8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar2 = puVar2 + -2;
      *puVar2 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 109695c64; end: 109695d77;  */

long FUN_109695c64(long *param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar6 = *(long *)(param_2 + 8);
  uVar5 = (ulong)*(char *)(lVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    pcVar2 = *(char **)(lVar6 + 8);
    uVar5 = *(ulong *)(lVar6 + 0x10);
  }
  else {
    pcVar2 = (char *)(lVar6 + 8);
  }
  if ((int)uVar5 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar5 = uVar5 & 0x7fffffff;
    do {
      uVar7 = (long)*pcVar2 + uVar7 * 0xe000f7b;
      uVar5 = uVar5 - 1;
      pcVar2 = pcVar2 + 1;
    } while (uVar5 != 0);
  }
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar8 = uVar5 - 1;
    if ((uVar5 & uVar8) == 0) {
      uVar9 = uVar8 & uVar7;
    }
    else {
      uVar9 = uVar7;
      if (uVar5 <= uVar7) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar7 / uVar5;
        }
        uVar9 = uVar7 - uVar9 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar3[1];
        if (uVar4 == uVar7) {
          lVar6 = (long)(plVar3 + 2);
          FUN_109697c4c(lVar6,param_2);
          if ((int)lVar6 == 0) {
            return (long)plVar3;
          }
        }
        else {
          if ((uVar5 & uVar8) == 0) {
            uVar4 = uVar4 & uVar8;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar9) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109695d78; end: 1096961df;  */

undefined1  [16] FUN_109695d78(long *param_1,long param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong unaff_x26;
  ulong uVar20;
  undefined1 auVar21 [16];
  
  lVar14 = *(long *)(param_2 + 8);
  uVar12 = (ulong)*(char *)(lVar14 + 0x1f);
  if ((long)uVar12 < 0) {
    pcVar7 = *(char **)(lVar14 + 8);
    uVar12 = *(ulong *)(lVar14 + 0x10);
  }
  else {
    pcVar7 = (char *)(lVar14 + 8);
  }
  if ((int)uVar12 < 1) {
    uVar19 = 0;
  }
  else {
    uVar19 = 0;
    uVar12 = uVar12 & 0x7fffffff;
    do {
      uVar19 = (long)*pcVar7 + uVar19 * 0xe000f7b;
      uVar12 = uVar12 - 1;
      pcVar7 = pcVar7 + 1;
    } while (uVar12 != 0);
  }
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar20 = uVar12 - 1;
    if ((uVar12 & uVar20) == 0) {
      unaff_x26 = uVar20 & uVar19;
    }
    else {
      unaff_x26 = uVar19;
      if (uVar12 <= uVar19) {
        uVar9 = 0;
        if (uVar12 != 0) {
          uVar9 = uVar19 / uVar12;
        }
        unaff_x26 = uVar19 - uVar9 * uVar12;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar18 = (long *)*puVar8; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
        uVar9 = plVar18[1];
        if (uVar9 == uVar19) {
          plVar13 = plVar18 + 2;
          FUN_109697c4c(plVar13,param_2);
          if ((int)plVar13 == 0) {
            uVar6 = 0;
            goto LAB_10969615c;
          }
        }
        else {
          if ((uVar12 & uVar20) == 0) {
            uVar9 = uVar9 & uVar20;
          }
          else if (uVar12 <= uVar9) {
            uVar11 = 0;
            if (uVar12 != 0) {
              uVar11 = uVar9 / uVar12;
            }
            uVar9 = uVar9 - uVar11 * uVar12;
          }
          if (uVar9 != unaff_x26) break;
        }
      }
    }
  }
  plVar18 = (long *)0x30;
  __Znwm();
  *plVar18 = 0;
  plVar18[1] = uVar19;
  lVar14 = *param_3;
  plVar18[3] = param_3[1];
  plVar18[2] = lVar14;
  if (plVar18[3] != 0) {
    piVar10 = (int *)(plVar18[3] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar18[2] = (long)&PTR_FUN_110b00af0;
  lVar14 = *param_4;
  plVar18[5] = param_4[1];
  plVar18[4] = lVar14;
  if (plVar18[5] != 0) {
    piVar10 = (int *)(plVar18[5] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((uVar12 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar12))
  goto LAB_1096960e4;
  uVar20 = 1;
  if (2 < uVar12) {
    uVar20 = (ulong)((uVar12 & uVar12 - 1) != 0);
  }
  uVar20 = uVar20 | uVar12 << 1;
  uVar12 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar20 <= uVar12) {
    uVar20 = uVar12;
  }
  if (uVar20 - 1 == 0) {
    uVar20 = 2;
  }
  else if ((uVar20 & uVar20 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar12 = param_1[1];
  if (uVar12 < uVar20) {
LAB_109695f6c:
    if (uVar20 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1096961c8);
      (*pcVar4)();
    }
    lVar14 = uVar20 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar14;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    uVar12 = 0;
    param_1[1] = uVar20;
    do {
      *(undefined8 *)(*param_1 + uVar12 * 8) = 0;
      uVar12 = uVar12 + 1;
    } while (uVar20 != uVar12);
    plVar13 = (long *)param_1[2];
    uVar12 = uVar20;
    if (plVar13 != (long *)0x0) {
      uVar9 = plVar13[1];
      uVar11 = uVar20 - 1;
      if ((uVar20 & uVar11) == 0) {
        uVar9 = uVar9 & uVar11;
      }
      else if (uVar20 <= uVar9) {
        uVar17 = 0;
        if (uVar20 != 0) {
          uVar17 = uVar9 / uVar20;
        }
        uVar9 = uVar9 - uVar17 * uVar20;
      }
      *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
      plVar15 = (long *)*plVar13;
      while (plVar15 != (long *)0x0) {
        uVar17 = plVar15[1];
        if ((uVar20 & uVar11) == 0) {
          uVar17 = uVar17 & uVar11;
        }
        else if (uVar20 <= uVar17) {
          uVar3 = 0;
          if (uVar20 != 0) {
            uVar3 = uVar17 / uVar20;
          }
          uVar17 = uVar17 - uVar3 * uVar20;
        }
        plVar16 = plVar15;
        if (uVar17 != uVar9) {
          lVar14 = *param_1;
          if (*(long *)(lVar14 + uVar17 * 8) == 0) {
            *(long **)(lVar14 + uVar17 * 8) = plVar13;
            uVar9 = uVar17;
          }
          else {
            *plVar13 = *plVar15;
            *plVar15 = **(undefined8 **)(lVar14 + uVar17 * 8);
            **(long **)(lVar14 + uVar17 * 8) = (long)plVar15;
            plVar16 = plVar13;
          }
        }
        plVar13 = plVar16;
        plVar15 = (long *)*plVar16;
      }
    }
  }
  else if (uVar20 < uVar12) {
    uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar12 < 3) || ((uVar12 & uVar12 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar9) {
      uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
    }
    if (uVar20 <= uVar9) {
      uVar20 = uVar9;
    }
    if (uVar20 < uVar12) {
      if (uVar20 != 0) goto LAB_109695f6c;
      lVar14 = *param_1;
      *param_1 = 0;
      if (lVar14 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      uVar12 = 0;
    }
    else {
      uVar12 = param_1[1];
    }
  }
  if ((uVar12 & uVar12 - 1) == 0) {
    unaff_x26 = uVar12 - 1 & uVar19;
  }
  else {
    unaff_x26 = uVar19;
    if (uVar12 <= uVar19) {
      uVar20 = 0;
      if (uVar12 != 0) {
        uVar20 = uVar19 / uVar12;
      }
      unaff_x26 = uVar19 - uVar20 * uVar12;
    }
  }
LAB_1096960e4:
  lVar14 = *param_1;
  plVar13 = *(long **)(lVar14 + unaff_x26 * 8);
  if (plVar13 == (long *)0x0) {
    plVar13 = param_1 + 2;
    *plVar18 = *plVar13;
    *plVar13 = (long)plVar18;
    *(long **)(lVar14 + unaff_x26 * 8) = plVar13;
    if (*plVar18 != 0) {
      uVar19 = *(ulong *)(*plVar18 + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        uVar19 = uVar19 & uVar12 - 1;
      }
      else if (uVar12 <= uVar19) {
        uVar20 = 0;
        if (uVar12 != 0) {
          uVar20 = uVar19 / uVar12;
        }
        uVar19 = uVar19 - uVar20 * uVar12;
      }
      *(long **)(*param_1 + uVar19 * 8) = plVar18;
    }
  }
  else {
    *plVar18 = *plVar13;
    *plVar13 = (long)plVar18;
  }
  param_1[3] = param_1[3] + 1;
  uVar6 = 1;
LAB_10969615c:
  auVar21._8_8_ = uVar6;
  auVar21._0_8_ = plVar18;
  return auVar21;
}



/* Entry: 1096961e0; end: 10969622b;  */

void FUN_1096961e0(ulong param_1,long param_2)

{
  if ((param_1 & 1) != 0) {
    *(undefined ***)(param_2 + 0x20) = &PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    *(undefined ***)(param_2 + 0x10) = &PTR_FUN_110b01d60;
    func_0x000107c2acd4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10969622c; end: 1096962ef;  */

void FUN_10969622c(undefined8 param_1,byte *param_2,ulong param_3)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  char cVar7;
  ulong uVar8;
  
  uVar3 = (param_3 & 0xffffffff) << 1;
  lVar4 = (long)(int)((uint)uVar3 | 1);
  __Znam();
  if (0 < (int)param_3) {
    uVar8 = param_3 & 0xffffffff;
    pcVar6 = (char *)(lVar4 + 1);
    do {
      bVar2 = *param_2;
      cVar7 = '0';
      cVar1 = '0';
      if (9 < (bVar2 & 0xf)) {
        cVar1 = '7';
      }
      pcVar6[-1] = cVar1 + (bVar2 & 0xf);
      if (0x9f < bVar2) {
        cVar7 = '7';
      }
      *pcVar6 = cVar7 + (bVar2 >> 4);
      uVar8 = uVar8 - 1;
      pcVar6 = pcVar6 + 2;
      param_2 = param_2 + 1;
    } while (uVar8 != 0);
  }
  *(undefined1 *)(lVar4 + (-(param_3 >> 0x1f & 1) & 0xfffffffe00000000 | uVar3)) = 0;
  lVar5 = lVar4;
  _strlen(lVar4);
  FUN_109697928(param_1,lVar4,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar4);
  return;
}



/* Entry: 1096962f0; end: 10969638f;  */

undefined8 FUN_1096962f0(long param_1,byte *param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  ulong uVar6;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(char *)(lVar3 + 0x1f) < 0) {
    if (param_3 << 1 != *(int *)(lVar3 + 0x10)) {
      return 0;
    }
    lVar3 = *(long *)(lVar3 + 8);
  }
  else {
    if (param_3 << 1 != (int)*(char *)(lVar3 + 0x1f)) {
      return 0;
    }
    lVar3 = lVar3 + 8;
  }
  if (0 < (int)param_3) {
    pcVar4 = (char *)(lVar3 + 1);
    uVar6 = (ulong)param_3;
    do {
      bVar2 = pcVar4[-1];
      cVar5 = -0x37;
      if (0x46 < bVar2) {
        cVar5 = -0x57;
      }
      cVar1 = -0x30;
      if ('9' < (char)bVar2) {
        cVar1 = cVar5;
      }
      cVar5 = '\0';
      if ('9' < *pcVar4) {
        cVar5 = '\t';
      }
      *param_2 = cVar1 + bVar2 | (cVar5 + *pcVar4) * '\x10';
      pcVar4 = pcVar4 + 2;
      uVar6 = uVar6 - 1;
      param_2 = param_2 + 1;
    } while (uVar6 != 0);
  }
  return 1;
}



/* Entry: 109696390; end: 109696617;  */

void FUN_109696390(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
  if (param_2 == (undefined8 *)0x0) {
    func_0x000107c2acdc();
  }
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  if (param_1[1] != 0) {
    piVar3 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00af0;
  return;
}



/* Entry: 109696618; end: 10969664b;  */

undefined8 * FUN_109696618(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 10969664c; end: 10969667f;  */

undefined8 * FUN_10969664c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 109696680; end: 1096966b3;  */

void FUN_109696680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096966b4; end: 109696717;  */

void FUN_1096966b4(void)

{
  return;
}



/* Entry: 109696718; end: 109696763;  */

ulong * FUN_109696718(long *param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  if (*(uint *)(param_1 + 1) <= (uint)(((int)param_1[2] + *(int *)((long)param_1 + 0xc)) * 3)) {
    FUN_109698c9c(param_1,*(uint *)(param_1 + 1) + 2);
  }
  uVar6 = (uint)(param_2 >> 3) & 0xfffffffe;
  uVar3 = uVar6 | 2;
  lVar4 = *param_1;
  do {
    uVar2 = uVar6 & *(uint *)(param_1 + 1);
    uVar5 = *(ulong *)(lVar4 + (ulong)uVar2 * 8);
    uVar6 = uVar2 + uVar3;
  } while (1 < uVar5);
  puVar1 = (ulong *)(lVar4 + (ulong)uVar2 * 8);
  *(ulong *)((long)param_1 + 0xc) =
       CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20) - (int)uVar5,
                (int)*(undefined8 *)((long)param_1 + 0xc) + 1);
  *puVar1 = param_2;
  *(undefined8 *)(lVar4 + (ulong)(uVar2 + 1) * 8) = 0;
  return puVar1;
}



/* Entry: 109696764; end: 1096967f3;  */

void FUN_109696764(undefined8 param_1,long *param_2,ulong *param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_3;
  (**(code **)(*plVar1 + 0x58))();
  if (((ulong)plVar1 & 1) == 0) {
    lVar2 = param_2[1] + -0x20;
    func_0x0001096966c0(lVar2,*param_3);
    if (lVar2 == 0) {
      param_2 = (long *)*param_3;
      (**(code **)(*param_2 + 0x30))();
    }
    else {
      param_2 = *(long **)(lVar2 + 8);
    }
    lVar2 = 0x10;
  }
  else {
    lVar2 = 0x18;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096967f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_3 + lVar2))(param_1,(long *)*param_3,param_2);
  return;
}



/* Entry: 1096967f4; end: 1096969b7;  */

void FUN_1096967f4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined **ppuStack_70;
  long lStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  plVar3 = (long *)*param_2;
  (**(code **)(*plVar3 + 0x58))();
  if ((int)plVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010969685c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,param_3,param_1);
    return;
  }
  lVar7 = *(long *)(param_1 + 8) + -0x20;
  lVar4 = lVar7;
  func_0x0001096966c0(lVar7,*param_2);
  if (lVar4 != 0) {
    puVar8 = *(undefined8 **)(lVar4 + 8);
    goto LAB_1096968c4;
  }
  pcVar5 = (code *)*param_2;
  (**(code **)(*(long *)pcVar5 + 0x48))();
  if (pcVar5 == (code *)0x0) {
    (**(code **)(*(long *)*param_2 + 0x78))(&ppuStack_60);
    func_0x000107c2accc();
    func_0x00010969659c(&ppuStack_70);
    ppuStack_70 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_70);
    ppuStack_60 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_60);
    if (lStack_58 != lStack_68) {
      return;
    }
    puVar8 = (undefined8 *)*param_2;
    (**(code **)*puVar8)();
    if (puVar8 == (undefined8 *)0x0) goto LAB_109696898;
    *puVar8 = &PTR_FUN_110b01d60;
    uVar9 = *param_3;
    puVar8[1] = param_3[1];
    *puVar8 = uVar9;
    if (puVar8[1] != 0) {
      piVar6 = (int *)(puVar8[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  else {
LAB_109696898:
    puVar8 = (undefined8 *)*param_2;
    (**(code **)*puVar8)();
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    (*pcVar5)();
  }
  FUN_109696718(lVar7,*param_2);
  *(undefined8 **)(lVar7 + 8) = puVar8;
LAB_1096968c4:
  (**(code **)(*(long *)*param_2 + 0x20))((long *)*param_2,param_3,puVar8);
  return;
}



/* Entry: 1096969b8; end: 109696a1f;  */

bool FUN_1096969b8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + -0x20);
  puVar3 = puVar4;
  func_0x0001096966c0(puVar4,*param_2);
  if (puVar3 != (undefined8 *)0x0) {
    plVar1 = (long *)*puVar3;
    uVar2 = puVar3[1];
    FUN_109696a20(puVar4,puVar3);
    (**(code **)(*plVar1 + 8))(plVar1,uVar2);
  }
  return puVar3 != (undefined8 *)0x0;
}



/* Entry: 109696a20; end: 109696a63;  */

void FUN_109696a20(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 1;
    iVar2 = *(int *)((long)param_1 + 0xc);
    *(ulong *)((long)param_1 + 0xc) =
         CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20) + 1,
                  (int)*(undefined8 *)((long)param_1 + 0xc) + -1);
    if (iVar2 - 2U < *(uint *)(param_1 + 1) >> 3) {
      lVar7 = *param_1;
      lVar4 = param_1[1];
      uVar3 = (*(uint *)(param_1 + 1) + 2 >> 2) * 2;
      lVar5 = 1;
      _calloc(1,(ulong)uVar3 << 3);
      *param_1 = lVar5;
      *(uint *)(param_1 + 1) = uVar3 - 2;
      if (*(int *)((long)param_1 + 0xc) != 0) {
        *(undefined4 *)((long)param_1 + 0xc) = 0;
        if ((int)lVar4 != -2) {
          uVar8 = 0;
          do {
            puVar1 = (ulong *)(lVar7 + uVar8 * 8);
            if (1 < *puVar1) {
              uVar9 = puVar1[1];
              plVar6 = param_1;
              FUN_109698c48();
              plVar6[1] = uVar9;
            }
            uVar3 = (int)uVar8 + 2;
            uVar8 = (ulong)uVar3;
          } while (uVar3 < (int)lVar4 + 2U);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(lVar7);
      return;
    }
  }
  return;
}



/* Entry: 109696a64; end: 109696b6b;  */

void FUN_109696a64(long *param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  
  plVar3 = (long *)*param_3;
  (**(code **)(*plVar3 + 0x58))();
  if ((int)plVar3 == 0) {
    lVar4 = *(long *)(param_2 + 8) + -0x20;
    func_0x0001096966c0(lVar4,*param_3);
    if ((lVar4 == 0) || (plVar3 = *(long **)(lVar4 + 8), plVar3 == (long *)0x0)) {
      param_3 = (long *)*param_3;
      (**(code **)(*param_3 + 0x30))();
      if (param_3 == (long *)0x0) {
        *param_1 = (long)&PTR_FUN_110b01d60;
        param_1[1] = 0;
      }
      else {
        lVar4 = *param_3;
        param_1[1] = param_3[1];
        *param_1 = lVar4;
        if (param_1[1] != 0) {
          piVar5 = (int *)(param_1[1] + -8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar2) {
              *piVar5 = *piVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
    }
    else {
      lVar4 = *plVar3;
      param_1[1] = plVar3[1];
      *param_1 = lVar4;
      if (param_1[1] != 0) {
        piVar5 = (int *)(param_1[1] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
  }
  else {
    *param_1 = (long)&PTR_FUN_110b01d60;
    param_1[1] = 0;
    (**(code **)(*(long *)*param_3 + 0x60))((long *)*param_3,param_2,param_1);
  }
  return;
}



/* Entry: 109696b6c; end: 109696d0f;  */

void FUN_109696b6c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  plVar3 = (long *)*param_2;
  (**(code **)(*plVar3 + 0x58))();
  if ((int)plVar3 == 0) {
    lVar4 = *(long *)(param_1 + 8) + -0x20;
    func_0x0001096966c0();
    if ((lVar4 == 0) || (puVar6 = *(undefined8 **)(lVar4 + 8), puVar6 == (undefined8 *)0x0)) {
      param_2 = (undefined8 *)*param_2;
      lVar4 = *(long *)(param_1 + 8) + -0x20;
      puVar6 = param_2;
      (**(code **)*param_2)();
      FUN_109696718(lVar4,param_2);
      *(undefined8 **)(lVar4 + 8) = puVar6;
      *puVar6 = &PTR_FUN_110b01d60;
      uVar7 = *param_3;
      puVar6[1] = param_3[1];
      *puVar6 = uVar7;
      if (puVar6[1] != 0) {
        piVar5 = (int *)(puVar6[1] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    else if (puVar6[1] != param_3[1]) {
      func_0x000107c2acd4(puVar6);
      uVar7 = *param_3;
      puVar6[1] = param_3[1];
      *puVar6 = uVar7;
      if (puVar6[1] != 0) {
        piVar5 = (int *)(puVar6[1] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000109696bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x68))((long *)*param_2,param_1,param_3);
  return;
}



/* Entry: 109696d10; end: 10969709f;  */

undefined ********
FUN_109696d10(undefined8 *param_1,undefined8 *param_2,undefined ****param_3,undefined ****param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  undefined *******pppppppuVar5;
  undefined *****pppppuVar6;
  undefined ********ppppppppuVar7;
  undefined ********ppppppppuVar8;
  undefined ********ppppppppuVar9;
  int iVar10;
  undefined ****ppppuVar11;
  undefined *puVar12;
  undefined ******ppppppuVar13;
  undefined ****ppppuVar14;
  undefined ********ppppppppuVar15;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined ****unaff_x22;
  long lVar16;
  undefined ****unaff_x23;
  undefined ****unaff_x24;
  ulong uVar17;
  undefined ******ppppppuVar18;
  undefined ******ppppppuStack_170;
  undefined ******ppppppuStack_168;
  undefined ******ppppppuStack_160;
  undefined ******ppppppuStack_158;
  undefined *******apppppppuStack_148 [2];
  char cStack_131;
  long lStack_118;
  undefined ***pppuStack_110;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined *******pppppppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 *puStack_c8;
  undefined **appuStack_c0 [2];
  undefined ******ppppppuStack_b0;
  undefined *****pppppuStack_a8;
  undefined ***pppuStack_a0;
  undefined ***pppuStack_98;
  undefined ******ppppppuStack_90;
  undefined *****pppppuStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuStack_a8 = (undefined *****)param_2[1];
  ppppppuStack_b0 = (undefined ******)*param_2;
  if ((undefined ******)pppppuStack_a8 != (undefined ******)0x0) {
    ppppppuVar18 = (undefined ******)(pppppuStack_a8 + -1);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar18,0x10);
      if (bVar4) {
        *(int *)ppppppuVar18 = *(int *)ppppppuVar18 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    cVar2 = *(char *)param_3;
    unaff_x23 = param_3;
    if (cVar2 != '\0') {
      unaff_x20 = &PTR_DAT_110b01d40;
      unaff_x21 = &PTR_DAT_110afd8d8;
      unaff_x22 = (undefined ****)0x11382a930;
      ppppuVar11 = param_3;
      puStack_c8 = param_1;
LAB_109696da0:
      if (cVar2 == '[') {
        pppppppuVar5 = &ppppppuStack_b0;
        param_3 = (undefined ****)unaff_x20;
        param_4 = (undefined ****)unaff_x21;
        ___dynamic_cast();
        if (pppppppuVar5 == (undefined *******)0x0) {
          func_0x000107c2acdc();
        }
        ppppppuVar18 = pppppppuVar5[1];
        pppppuStack_88 = (undefined *****)ppppppuVar18;
        if (ppppppuVar18 != (undefined ******)0x0) {
          ppppppuVar13 = ppppppuVar18 + -1;
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
            if (bVar4) {
              *(int *)ppppppuVar13 = *(int *)ppppppuVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        unaff_x24 = (undefined ****)0x0;
        ppppppuStack_90 = (undefined ******)&PTR_FUN_110b01468;
        for (unaff_x23 = (undefined ****)((long)ppppuVar11 + 2);
            *(char *)((long)unaff_x23 + -1) != '\0';
            unaff_x23 = (undefined ****)((long)unaff_x23 + 1)) {
          if (*(char *)((long)unaff_x23 + -1) == ']') {
            pppppuVar6 = ppppppuVar18[1];
            if (0 < (int)((ulong)((long)ppppppuVar18[2] - (long)pppppuVar6) >> 4)) {
              uVar17 = 0;
              goto LAB_109696e9c;
            }
            break;
          }
          unaff_x24 = (undefined ****)((long)unaff_x24 + 1);
        }
        unaff_x23 = (undefined ****)0x0;
        goto LAB_109696f54;
      }
      pppuStack_a0 = (undefined ***)0x0;
      func_0x000107c2accc();
      func_0x00010969659c(appuStack_c0);
      unaff_x23 = (undefined ****)appuStack_c0;
      param_4 = &pppuStack_a0;
      FUN_1096970a0();
      appuStack_c0[0] = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(appuStack_c0);
      if (unaff_x23 == (undefined ****)0x0) goto LAB_109697034;
      param_3 = &pppuStack_a0;
      FUN_109696a64(&ppppppuStack_90,&ppppppuStack_b0);
      pppppuVar6 = pppppuStack_88;
      pppppuStack_88 = pppppuStack_a8;
      pppppuStack_a8 = pppppuVar6;
      ppppppuStack_b0 = ppppppuStack_90;
      ppppppuStack_90 = (undefined ******)&PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppppppuStack_90);
      goto LAB_109696f64;
    }
  }
LAB_109696fe4:
  param_1[1] = pppppuStack_a8;
  *param_1 = ppppppuStack_b0;
  pppppuStack_a8 = (undefined *****)0x0;
  ppppuVar11 = param_3;
LAB_109696ff0:
  ppppppuStack_b0 = (undefined ******)&PTR_FUN_110b01d60;
  ppppppppuVar15 = (undefined ********)&ppppppuStack_b0;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppppppppuVar15;
  }
  ___stack_chk_fail();
  FUN_109693f20(&ppppppuStack_90);
  FUN_10969664c(&ppppppuStack_b0);
  __Unwind_Resume(ppppppppuVar15);
  ppppppppuVar7 = ppppppppuVar15;
  func_0x000104bd46a0();
  ppppppppuVar8 = (undefined ********)&ppppppuStack_170;
  ppppppppuVar9 = (undefined ********)&ppppppuStack_170;
  pcStack_d8 = FUN_1096970a0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)ppppuVar11;
  pppuStack_110 = (undefined ***)unaff_x24;
  pppuStack_108 = (undefined ***)unaff_x23;
  pppuStack_100 = (undefined ***)unaff_x22;
  ppuStack_f8 = unaff_x21;
  ppuStack_f0 = unaff_x20;
  pppppppuStack_e8 = (undefined *******)ppppppppuVar15;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (bVar1 != 0x28) {
    lVar16 = 0;
    while( true ) {
      uVar3 = bVar1 - 0x29;
      if ((uVar3 < 0x33) && ((1L << ((ulong)uVar3 & 0x3f) & 0x4000000000021U) != 0)) {
        FUN_1092b29f8(apppppppuStack_148,ppppuVar11,(long)ppppuVar11 + lVar16,lVar16);
        ppppppppuVar15 = (undefined ********)apppppppuStack_148[0];
        if (-1 < cStack_131) {
          ppppppppuVar15 = apppppppuStack_148;
        }
        iVar10 = (int)ppppppppuVar15;
        FUN_10969777c(&ppppppuStack_160);
        *param_4 = (undefined ***)ppppppuStack_160;
        ppppppppuVar15 = (undefined ********)((long)ppppuVar11 + lVar16);
        ppppppppuVar9 = ppppppppuVar7;
        if (*(char *)ppppppppuVar15 == '.') {
          ppppppppuVar15 = (undefined ********)((long)ppppppppuVar15 + 1);
        }
        goto LAB_109697294;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((long)ppppuVar11 + lVar16 + 1);
      lVar16 = lVar16 + 1;
    }
    ppppuVar14 = ppppuVar11;
    FUN_10969777c(apppppppuStack_148);
    iVar10 = (int)ppppuVar14;
    *param_4 = (undefined ***)apppppppuStack_148[0];
    ppppppppuVar15 = (undefined ********)((long)ppppuVar11 + lVar16);
LAB_1096972c4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      if ((iVar10 != 0) && (func_0x000104bd46a0(), cStack_131 < '\0')) {
        __ZdlPv(apppppppuStack_148[0]);
      }
      __Unwind_Resume();
      *ppppppppuVar7 = (undefined *******)&PTR_FUN_110b01d60;
      func_0x000107c2acd4();
      return ppppppppuVar7;
    }
    return ppppppppuVar15;
  }
  puVar12 = &UNK_10f57c08a;
  ppppppppuVar15 = apppppppuStack_148;
  func_0x000107c31940();
  lVar16 = (long)ppppuVar11 + 2;
  while( true ) {
    iVar10 = (int)puVar12;
    cVar2 = *(char *)(lVar16 + -1);
    if (cVar2 == '\0') goto LAB_109697290;
    if ((cVar2 == '.') || (cVar2 == '[')) break;
    puVar12 = (undefined *)(ulong)(uint)(int)cVar2;
    ppppppppuVar15 = apppppppuStack_148;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
    if (*(char *)(lVar16 + -1) == ':') {
      ppppppppuVar15 = apppppppuStack_148;
      puVar12 = (undefined *)0x3a;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
    }
    lVar16 = lVar16 + 1;
  }
  ppppppppuVar15 = (undefined ********)apppppppuStack_148[0];
  if (-1 < cStack_131) {
    ppppppppuVar15 = apppppppuStack_148;
  }
  FUN_1096977e4(&ppppppuStack_160,ppppppppuVar15);
  pppppppuVar5 = ppppppppuVar7[1];
  ppppppppuVar7[1] = (undefined *******)ppppppuStack_158;
  ppppppuStack_158 = (undefined ******)pppppppuVar5;
  *ppppppppuVar7 = (undefined *******)ppppppuStack_160;
  ppppppuStack_160 = (undefined ******)&PTR_FUN_110b01d60;
  ppppppppuVar15 = (undefined ********)&ppppppuStack_160;
  func_0x000107c2acd4();
  FUN_1096978cc();
  if (ppppppppuVar7[1] == pppppppuRam000000011382a970) goto LAB_109697290;
  ppppppuStack_168 = (undefined ******)ppppppppuVar7[1];
  if ((undefined *******)ppppppuStack_168 != (undefined *******)0x0) {
    pppppppuVar5 = (undefined *******)(ppppppuStack_168 + -1);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
      if (bVar4) {
        *(int *)pppppppuVar5 = *(int *)pppppppuVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppppppuStack_170 = (undefined ******)&PTR_FUN_110b00f28;
  FUN_1096970a0(&ppppppuStack_170,lVar16,param_4);
  iVar10 = (int)lVar16;
  ppppppuStack_170 = (undefined ******)&PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  ppppppppuVar15 = ppppppppuVar8;
  if (ppppppppuVar8 != (undefined ********)0x0) {
    ppppppppuVar15 = ppppppppuVar9;
    if (*(char *)ppppppppuVar8 == ')') {
      ppppppppuVar15 = (undefined ********)((long)ppppppppuVar8 + 1);
      if (*(char *)ppppppppuVar15 == '.') {
        ppppppppuVar15 = (undefined ********)((long)ppppppppuVar8 + 2);
      }
    }
    else {
LAB_109697290:
      ppppppppuVar9 = ppppppppuVar15;
      ppppppppuVar15 = (undefined ********)0x0;
    }
  }
LAB_109697294:
  ppppppppuVar7 = ppppppppuVar9;
  if (cStack_131 < '\0') {
    ppppppppuVar7 = (undefined ********)apppppppuStack_148[0];
    __ZdlPv();
  }
  goto LAB_1096972c4;
LAB_109696e9c:
  pppppuVar6 = pppppuVar6 + uVar17 * 2;
  if (pppppuVar6[1] == (undefined ****)0x0) goto LAB_109696f1c;
  param_3 = unaff_x22;
  func_0x000109693fa4();
  pppuStack_98 = (undefined ***)pppppuVar6[1];
  pppuStack_a0 = (undefined ***)*pppppuVar6;
  if ((undefined ****)pppuStack_98 != (undefined ****)0x0) {
    ppppuVar14 = (undefined ****)(pppuStack_98 + -1);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuVar14,0x10);
      if (bVar4) {
        *(int *)ppppuVar14 = *(int *)ppppuVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppppuVar14 = (undefined ****)(long)*(char *)((long)pppuStack_98 + 0x1f);
  if ((long)ppppuVar14 < 0) {
    iVar10 = (int)pppuStack_98[1];
    ppppuVar14 = (undefined ****)pppuStack_98[2];
  }
  else {
    iVar10 = (int)pppuStack_98 + 8;
  }
  if (ppppuVar14 == unaff_x24) {
    param_3 = (undefined ****)((long)ppppuVar11 + 1);
    param_4 = unaff_x24;
    _memcmp();
    bVar4 = iVar10 == 0;
  }
  else {
    bVar4 = false;
  }
  pppuStack_a0 = (undefined ***)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&pppuStack_a0);
  param_1 = puStack_c8;
  if (!bVar4) goto LAB_109696f1c;
  pppppuVar6 = ppppppuVar18[1] + (uVar17 & 0xffffffff) * 2;
  if (pppppuStack_a8 != (undefined *****)pppppuVar6[1]) {
    func_0x000107c2acd4(&ppppppuStack_b0);
    pppppuStack_a8 = (undefined *****)pppppuVar6[1];
    ppppppuStack_b0 = (undefined ******)*pppppuVar6;
    if ((undefined ******)pppppuStack_a8 != (undefined ******)0x0) {
      ppppppuVar18 = (undefined ******)(pppppuStack_a8 + -1);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar18,0x10);
        if (bVar4) {
          *(int *)ppppppuVar18 = *(int *)ppppppuVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (*(char *)unaff_x23 == '.') {
    unaff_x23 = (undefined ****)((long)unaff_x23 + 1);
  }
  goto LAB_109696f54;
LAB_109696f1c:
  uVar17 = uVar17 + 1;
  pppppuVar6 = ppppppuVar18[1];
  if ((long)(int)((ulong)((long)ppppppuVar18[2] - (long)pppppuVar6) >> 4) <= (long)uVar17)
  goto code_r0x000109696f34;
  goto LAB_109696e9c;
code_r0x000109696f34:
  param_1 = puStack_c8;
  unaff_x23 = (undefined ****)0x0;
LAB_109696f54:
  ppppppuStack_90 = (undefined ******)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppppppuStack_90);
  ppppuVar11 = param_3;
  if (unaff_x23 == (undefined ****)0x0) {
LAB_109697034:
    *param_1 = &PTR_FUN_110b01d60;
    param_1[1] = 0;
    goto LAB_109696ff0;
  }
LAB_109696f64:
  cVar2 = *(char *)unaff_x23;
  if ((cVar2 == '\0') ||
     (ppppuVar11 = unaff_x23, (undefined ******)pppppuStack_a8 == (undefined ******)0x0))
  goto LAB_109696fe4;
  goto LAB_109696da0;
}



/* Entry: 1096970a0; end: 10969734b;  */

undefined ***** FUN_1096970a0(undefined *****param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined *****pppppuVar5;
  undefined *****pppppuVar6;
  int iVar7;
  undefined *puVar8;
  byte *pbVar9;
  undefined *****pppppuVar10;
  long lVar11;
  undefined ****ppppuVar12;
  undefined ***pppuStack_a0;
  undefined ***pppuStack_98;
  undefined ***pppuStack_90;
  undefined ***pppuStack_88;
  undefined ****appppuStack_78 [2];
  char cStack_61;
  long lStack_48;
  
  pppppuVar5 = (undefined *****)&pppuStack_a0;
  pppppuVar6 = (undefined *****)&pppuStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *param_2;
  if (bVar1 != 0x28) {
    lVar11 = 0;
    while( true ) {
      uVar4 = bVar1 - 0x29;
      if ((uVar4 < 0x33) && ((1L << ((ulong)uVar4 & 0x3f) & 0x4000000000021U) != 0)) {
        FUN_1092b29f8(appppuStack_78,param_2,param_2 + lVar11,lVar11);
        pppppuVar6 = (undefined *****)appppuStack_78[0];
        if (-1 < cStack_61) {
          pppppuVar6 = appppuStack_78;
        }
        iVar7 = (int)pppppuVar6;
        FUN_10969777c(&pppuStack_90);
        *param_3 = (long)pppuStack_90;
        pppppuVar10 = (undefined *****)(param_2 + lVar11);
        pppppuVar6 = param_1;
        if (*(byte *)pppppuVar10 == 0x2e) {
          pppppuVar10 = (undefined *****)((long)pppppuVar10 + 1);
        }
        goto LAB_109697294;
      }
      if (bVar1 == 0) break;
      bVar1 = param_2[lVar11 + 1];
      lVar11 = lVar11 + 1;
    }
    pbVar9 = param_2;
    FUN_10969777c(appppuStack_78);
    iVar7 = (int)pbVar9;
    *param_3 = (long)appppuStack_78[0];
    pppppuVar10 = (undefined *****)(param_2 + lVar11);
LAB_1096972c4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      if ((iVar7 != 0) && (func_0x000104bd46a0(), cStack_61 < '\0')) {
        __ZdlPv(appppuStack_78[0]);
      }
      __Unwind_Resume();
      *param_1 = (undefined ****)&PTR_FUN_110b01d60;
      func_0x000107c2acd4();
      return param_1;
    }
    return pppppuVar10;
  }
  puVar8 = &UNK_10f57c08a;
  pppppuVar10 = appppuStack_78;
  func_0x000107c31940();
  param_2 = param_2 + 2;
  while( true ) {
    iVar7 = (int)puVar8;
    bVar1 = param_2[-1];
    if (bVar1 == 0) goto LAB_109697290;
    if ((bVar1 == 0x2e) || (bVar1 == 0x5b)) break;
    puVar8 = (undefined *)(ulong)(uint)(int)(char)bVar1;
    pppppuVar10 = appppuStack_78;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
    if (param_2[-1] == 0x3a) {
      pppppuVar10 = appppuStack_78;
      puVar8 = (undefined *)0x3a;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
    }
    param_2 = param_2 + 1;
  }
  pppppuVar10 = (undefined *****)appppuStack_78[0];
  if (-1 < cStack_61) {
    pppppuVar10 = appppuStack_78;
  }
  FUN_1096977e4(&pppuStack_90,pppppuVar10);
  ppppuVar12 = param_1[1];
  param_1[1] = (undefined ****)pppuStack_88;
  *param_1 = (undefined ****)pppuStack_90;
  pppuStack_90 = (undefined ***)&PTR_FUN_110b01d60;
  pppppuVar10 = (undefined *****)&pppuStack_90;
  pppuStack_88 = (undefined ***)ppppuVar12;
  func_0x000107c2acd4();
  FUN_1096978cc();
  if (param_1[1] == ppppuRam000000011382a970) goto LAB_109697290;
  pppuStack_98 = (undefined ***)param_1[1];
  if ((undefined ****)pppuStack_98 != (undefined ****)0x0) {
    ppppuVar12 = (undefined ****)(pppuStack_98 + -1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppuVar12,0x10);
      if (bVar3) {
        *(int *)ppppuVar12 = *(int *)ppppuVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pppuStack_a0 = (undefined ***)&PTR_FUN_110b00f28;
  FUN_1096970a0(&pppuStack_a0,param_2,param_3);
  iVar7 = (int)param_2;
  pppuStack_a0 = (undefined ***)&PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  pppppuVar10 = pppppuVar5;
  if (pppppuVar5 != (undefined *****)0x0) {
    pppppuVar10 = pppppuVar6;
    if (*(byte *)pppppuVar5 == 0x29) {
      pppppuVar10 = (undefined *****)((long)pppppuVar5 + 1);
      if (*(byte *)pppppuVar10 == 0x2e) {
        pppppuVar10 = (undefined *****)((long)pppppuVar5 + 2);
      }
    }
    else {
LAB_109697290:
      pppppuVar6 = pppppuVar10;
      pppppuVar10 = (undefined *****)0x0;
    }
  }
LAB_109697294:
  param_1 = pppppuVar6;
  if (cStack_61 < '\0') {
    param_1 = (undefined *****)appppuStack_78[0];
    __ZdlPv();
  }
  goto LAB_1096972c4;
}



/* Entry: 10969734c; end: 10969737f;  */

undefined8 * FUN_10969734c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 109697380; end: 1096973b3;  */

undefined8 * FUN_109697380(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096c40e8; end: 1096c418f;  */

void FUN_1096c40e8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar6 = puVar5;
  if (param_2 != 0) {
    puVar6 = puVar5 + param_2 * 3;
    puVar3 = param_1;
    do {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      func_0x000107c2acdc();
      *puVar5 = &PTR_FUN_110b01d60;
      uVar7 = *puVar3;
      puVar5[1] = puVar3[1];
      *puVar5 = uVar7;
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
      *puVar5 = &PTR_FUN_110b051b8;
      puVar5[2] = 0xffffffff;
      puVar5 = puVar5 + 3;
    } while (puVar5 != puVar6);
  }
  param_1[1] = puVar6;
  return;
}



/* Entry: 1096c4190; end: 1096c41ff;  */

void FUN_1096c4190(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096c4200; end: 1096c4257;  */

void FUN_1096c4200(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b06228;
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



/* Entry: 1096c4258; end: 1096c426b;  */

void FUN_1096c4258(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x18);
  return;
}



/* Entry: 1096c426c; end: 1096c4293;  */

void FUN_1096c426c(undefined8 param_1,long param_2)

{
  FUN_1096c4350(*(undefined8 *)(param_2 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096c4294; end: 1096c42e3;  */

void FUN_1096c4294(undefined8 param_1,undefined8 param_2,byte *param_3)

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



/* Entry: 1096c42e4; end: 1096c433b;  */

void FUN_1096c42e4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b06228;
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



/* Entry: 1096c433c; end: 1096c434f;  */

void FUN_1096c433c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  return;
}



/* Entry: 1096c4350; end: 1096c4387;  */

void FUN_1096c4350(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1096c4350(*param_1);
    FUN_1096c4350(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1096c4388; end: 1096c4517;  */

void FUN_1096c4388(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  plVar10 = param_2 + 1;
  *plVar10 = 0;
  param_2[2] = 0;
  *param_2 = plVar10;
  plVar11 = (long *)*param_1;
  if (plVar11 == param_1 + 1) {
    return;
  }
  plVar7 = (long *)0x0;
  plVar5 = plVar10;
  do {
    iVar1 = *(int *)((long)plVar11 + 0x1c);
    plVar6 = plVar10;
    plVar9 = plVar10;
    plVar8 = plVar10;
    if (plVar5 == plVar10) {
LAB_1096c4468:
      if (plVar7 != (long *)0x0) {
        plVar9 = plVar6 + 1;
        plVar8 = plVar6;
      }
      if (*plVar9 == 0) goto LAB_1096c4480;
    }
    else {
      plVar5 = plVar10;
      plVar2 = plVar7;
      if (plVar7 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar5[2];
          bVar3 = (long *)*plVar6 == plVar5;
          plVar5 = plVar6;
        } while (bVar3);
        if (*(int *)((long)plVar6 + 0x1c) < iVar1) goto LAB_1096c4468;
      }
      else {
        do {
          plVar6 = plVar2;
          plVar2 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
        if (*(int *)((long)plVar6 + 0x1c) < iVar1) goto LAB_1096c4468;
        do {
          while (plVar8 = plVar7, *(int *)((long)plVar8 + 0x1c) <= iVar1) {
            if (iVar1 <= *(int *)((long)plVar8 + 0x1c)) goto LAB_1096c44ac;
            plVar7 = (long *)plVar8[1];
            if ((long *)plVar8[1] == (long *)0x0) {
              plVar9 = plVar8 + 1;
              goto LAB_1096c4480;
            }
          }
          plVar7 = (long *)*plVar8;
          plVar9 = plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
LAB_1096c4480:
      lVar4 = 0x30;
      __Znwm();
      uVar13 = *(undefined8 *)((long)plVar11 + 0x24);
      uVar12 = *(undefined8 *)((long)plVar11 + 0x1c);
      *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)((long)plVar11 + 0x2c);
      *(undefined8 *)(lVar4 + 0x24) = uVar13;
      *(undefined8 *)(lVar4 + 0x1c) = uVar12;
      FUN_1096c4518(param_2,plVar8,plVar9,lVar4);
    }
LAB_1096c44ac:
    plVar5 = (long *)plVar11[1];
    plVar7 = plVar11;
    if ((long *)plVar11[1] == (long *)0x0) {
      do {
        plVar11 = (long *)plVar7[2];
        bVar3 = (long *)*plVar11 != plVar7;
        plVar7 = plVar11;
      } while (bVar3);
    }
    else {
      do {
        plVar11 = plVar5;
        plVar5 = (long *)*plVar11;
      } while ((long *)*plVar11 != (long *)0x0);
    }
    if (plVar11 == param_1 + 1) {
      return;
    }
    plVar5 = (long *)*param_2;
    plVar7 = (long *)param_2[1];
  } while( true );
}



/* Entry: 1096c4518; end: 1096c456b;  */

void FUN_1096c4518(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1096c456c; end: 1096c459f;  */

long FUN_1096c456c(long param_1)

{
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096c45a0; end: 1096c45d3;  */

void FUN_1096c45a0(long param_1)

{
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096c45d4; end: 1096c45db;  */

void FUN_1096c45d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096c45dc; end: 1096c460b;  */

void FUN_1096c45dc(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096c460c; end: 1096c465f;  */

void FUN_1096c460c(undefined8 param_1,undefined8 param_2,byte *param_3)

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



/* Entry: 1096c4660; end: 1096c468b;  */

void FUN_1096c4660(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b06228;
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



/* Entry: 1096c468c; end: 1096c47c7;  */

void FUN_1096c468c(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  int iVar3;
  undefined8 uVar4;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 *puStack_48;
  long lStack_28;
  
  pppuVar2 = &ppuStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar3 = 0x10b065d8;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    uStack_50 = 0;
    ppuStack_60 = &PTR_FUN_110b06600;
    uStack_58 = 0;
    puVar1 = (undefined1 *)0x1;
    _malloc();
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puStack_48 = puVar1;
    func_0x000107c2accc();
    func_0x000107c2ace0();
    if (puStack_48 != (undefined1 *)0x0) {
      _free();
    }
    func_0x000107c2accc();
    iVar3 = 0x10b065d8;
    func_0x00010969659c(&ppuStack_60);
    uVar4 = param_1[1];
    param_1[1] = uStack_58;
    *param_1 = ppuStack_60;
    ppuStack_60 = &PTR_FUN_110b01d60;
    uStack_58 = uVar4;
    func_0x000107c2acd4(&ppuStack_60);
    param_2 = (undefined1 *)pppuVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 != 0) {
    func_0x000104bd46a0(param_2);
    FUN_109696618(param_1);
  }
  __Unwind_Resume(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096c47c8; end: 1096c47e3;  */

void FUN_1096c47c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096c47e4; end: 1096c482b;  */

void FUN_1096c47e4(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096c482c; end: 1096c4897;  */

undefined8 * FUN_1096c482c(undefined8 *param_1)

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



/* Entry: 1096c4898; end: 1096c48ef;  */

void FUN_1096c4898(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b065d8;
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



/* Entry: 1096c48f0; end: 1096c491f;  */

bool FUN_1096c48f0(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b065d8,0);
  return param_1 != 0;
}



/* Entry: 1096c4920; end: 1096c4927;  */

void FUN_1096c4920(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x18);
  return;
}



/* Entry: 1096c4928; end: 1096c495f;  */

void FUN_1096c4928(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x000107c2ad04(&uStack_28);
  _free(param_2);
  return;
}



/* Entry: 1096c4960; end: 1096c49bb;  */

void FUN_1096c4960(undefined8 param_1,undefined8 param_2,byte *param_3)

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



/* Entry: 1096c49bc; end: 1096c4a13;  */

void FUN_1096c49bc(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b06228;
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



/* Entry: 1096c4a14; end: 1096c4a6b;  */

void FUN_1096c4a14(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1096c4a6c; end: 1096c4aaf;  */

bool FUN_1096c4a6c(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c051);
  return (int)plVar1 == 1;
}



/* Entry: 1096c4ab0; end: 1096c4ae7;  */

undefined8 FUN_1096c4ab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096c4ae8; end: 1096c4b3f;  */

void FUN_1096c4ae8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b06228;
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



/* Entry: 1096c4b40; end: 1096c4dcf;  */

undefined1  [16] FUN_1096c4b40(long *param_1,long *param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  plVar10 = (long *)*param_1;
  plVar4 = param_1;
  if ((long *)((param_1[2] - (long)plVar10 >> 3) * -0x5555555555555555) < param_4) {
    plVar10 = param_1;
    plVar7 = param_2;
    plVar8 = param_4;
    FUN_1096c3b60();
    if ((long *)0xaaaaaaaaaaaaaaa < param_4) {
      FUN_1096c3bd8();
      func_0x000104bd46a0();
      plVar4 = plVar10 + 1;
      plVar11 = plVar4;
      if ((long *)*plVar4 != (long *)0x0) {
        plVar3 = (long *)*plVar4;
        do {
          while (plVar4 = plVar3, *(int *)((long)plVar4 + 0x1c) <= (int)*plVar7) {
            if ((int)*plVar7 <= *(int *)((long)plVar4 + 0x1c)) {
              uVar5 = 0;
              goto LAB_1096c4e80;
            }
            plVar3 = (long *)plVar4[1];
            if ((long *)plVar4[1] == (long *)0x0) {
              plVar11 = plVar4 + 1;
              goto LAB_1096c4e38;
            }
          }
          plVar3 = (long *)*plVar4;
          plVar11 = plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
LAB_1096c4e38:
      plVar7 = (long *)0x30;
      __Znwm();
      *(undefined4 *)((long)plVar7 + 0x1c) = *(undefined4 *)*plVar8;
      plVar7[5] = 0;
      plVar7[4] = 0x3f800000;
      FUN_1096c4518(plVar10,plVar4,plVar11,plVar7);
      uVar5 = 1;
      plVar4 = plVar7;
LAB_1096c4e80:
      auVar13._8_8_ = uVar5;
      auVar13._0_8_ = plVar4;
      return auVar13;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    plVar8 = (long *)(lVar6 * 0x5555555555555556);
    if (plVar8 < param_4 || (long)plVar8 - (long)param_4 == 0) {
      plVar8 = param_4;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      plVar8 = (long *)0xaaaaaaaaaaaaaaa;
    }
    FUN_1096c4038(param_1,plVar8);
    plVar7 = (long *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 3) {
      *plVar7 = (long)&PTR_FUN_110b01d60;
      lVar6 = *param_2;
      plVar7[1] = param_2[1];
      *plVar7 = lVar6;
      if (plVar7[1] != 0) {
        piVar9 = (int *)(plVar7[1] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *plVar7 = (long)&PTR_FUN_110b051b8;
      plVar7[2] = param_2[2];
      plVar7 = plVar7 + 3;
    }
  }
  else {
    plVar7 = (long *)param_1[1];
    plVar8 = param_2;
    if (param_4 <= (long *)(((long)plVar7 - (long)plVar10 >> 3) * -0x5555555555555555)) {
      if (param_2 != param_3) {
        do {
          if (plVar10[1] != plVar8[1]) {
            plVar4 = plVar10;
            func_0x000107c2acd4(plVar10);
            lVar6 = *plVar8;
            plVar10[1] = plVar8[1];
            *plVar10 = lVar6;
            if (plVar10[1] != 0) {
              piVar9 = (int *)(plVar10[1] + -8);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                if (bVar2) {
                  *piVar9 = *piVar9 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
          }
          plVar10[2] = plVar8[2];
          plVar8 = plVar8 + 3;
          plVar10 = plVar10 + 3;
        } while (plVar8 != param_3);
        plVar7 = (long *)param_1[1];
        plVar8 = param_2;
      }
      while (plVar7 != plVar10) {
        plVar7 = plVar7 + -3;
        *plVar7 = (long)&PTR_FUN_110b01d60;
        plVar4 = plVar7;
        func_0x000107c2acd4(plVar7);
      }
      param_1[1] = (long)plVar10;
      goto LAB_1096c4db4;
    }
    plVar11 = (long *)((long)param_2 + ((long)plVar7 - (long)plVar10));
    if (plVar7 != plVar10) {
      do {
        if (plVar10[1] != plVar8[1]) {
          plVar4 = plVar10;
          func_0x000107c2acd4(plVar10);
          lVar6 = *plVar8;
          plVar10[1] = plVar8[1];
          *plVar10 = lVar6;
          if (plVar10[1] != 0) {
            piVar9 = (int *)(plVar10[1] + -8);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar2) {
                *piVar9 = *piVar9 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
        }
        plVar10[2] = plVar8[2];
        plVar8 = plVar8 + 3;
        plVar10 = plVar10 + 3;
      } while (plVar8 != plVar11);
      plVar7 = (long *)param_1[1];
      plVar8 = param_2;
    }
    for (; plVar11 != param_3; plVar11 = plVar11 + 3) {
      *plVar7 = (long)&PTR_FUN_110b01d60;
      lVar6 = *plVar11;
      plVar7[1] = plVar11[1];
      *plVar7 = lVar6;
      if (plVar7[1] != 0) {
        piVar9 = (int *)(plVar7[1] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *plVar7 = (long)&PTR_FUN_110b051b8;
      plVar7[2] = plVar11[2];
      plVar7 = plVar7 + 3;
    }
  }
  param_1[1] = (long)plVar7;
LAB_1096c4db4:
  auVar12._8_8_ = plVar8;
  auVar12._0_8_ = plVar4;
  return auVar12;
}



/* Entry: 1096c4dd0; end: 1096c4e97;  */

undefined1  [16] FUN_1096c4dd0(long param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, *(int *)((long)plVar3 + 0x1c) <= *param_2) {
        if (*param_2 <= *(int *)((long)plVar3 + 0x1c)) {
          uVar2 = 0;
          goto LAB_1096c4e80;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_1096c4e38;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_1096c4e38:
  plVar1 = (long *)0x30;
  __Znwm();
  *(undefined4 *)((long)plVar1 + 0x1c) = *(undefined4 *)*param_4;
  plVar1[5] = 0;
  plVar1[4] = 0x3f800000;
  FUN_1096c4518(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_1096c4e80:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 1096c4e98; end: 1096c4f13;  */

undefined8 * FUN_1096c4e98(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b06880;
  param_1[1] = puVar1;
  FUN_1096c4f14(param_1);
  return param_1;
}



/* Entry: 1096c4f14; end: 1096c4fd7;  */

void FUN_1096c4f14(undefined8 *param_1)

{
  func_0x000107c2acd0(param_1,0x60);
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_DAT_110b00de0;
  FUN_1096b6920(param_1 + 1);
  FUN_1096b81dc(param_1 + 3);
  FUN_1096b81dc(param_1 + 5);
  FUN_1096b81dc(param_1 + 7);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_110b06a80;
  return;
}



/* Entry: 1096c4fd8; end: 1096c502f;  */

undefined8 FUN_1096c4fd8(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uStack_30;
  long lStack_28;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&uStack_30;
  plVar1 = (long *)(*(long *)(param_1 + 8) + 0x58);
  if (*plVar1 != -1) {
    ppuStack_20 = &puStack_18;
    uStack_30 = param_2;
    lStack_28 = param_1;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(plVar1,&ppuStack_20,FUN_1096c5bfc);
  }
  return 1;
}



/* Entry: 1096c5030; end: 1096c571b;  */

bool FUN_1096c5030(int *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined **ppuStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined4 *puStack_98;
  undefined4 *puStack_90;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  plVar9 = param_2;
  FUN_1096e4e0c(param_2,0x11382aac8);
  piVar11 = param_1;
  FUN_1096ae760(param_1,0x11382aad0);
  iVar4 = *piVar11;
  FUN_1096e5140(&puStack_98,param_1);
  lVar14 = (long)puStack_90 - (long)puStack_98;
  if (lVar14 == 0x10) {
    lVar2 = plVar9[1];
    for (lVar1 = *plVar9; lVar1 != lVar2; lVar1 = lVar1 + 0x50) {
      lVar16 = *(long *)(*(long *)(lVar1 + 0x10) + 8);
      if ((iVar4 < (int)((ulong)(*(long *)(*(long *)(lVar1 + 0x10) + 0x10) - lVar16) >> 4)) &&
         (lVar16 = lVar16 + (long)iVar4 * 0x10, *(long *)(lVar16 + 8) != 0)) {
        ___dynamic_cast(lVar16,&PTR_DAT_110b01d40,&PTR_DAT_110b053a0,0);
        if (lVar16 == 0) {
          ppuStack_80 = (undefined **)&UNK_10f57d0c1;
          puStack_78 = &UNK_10f57d0c5;
          uStack_70 = 0x55;
          FUN_109699380(&ppuStack_80);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1096c5640);
          (*pcVar8)();
        }
        lStack_a8 = *(long *)(lVar16 + 8);
        if (lStack_a8 != 0) {
          piVar11 = (int *)(lStack_a8 + -8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar6) {
              *piVar11 = *piVar11 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppuStack_b0 = &PTR_FUN_110b05358;
        FUN_1096c100c(&ppuStack_80,&ppuStack_b0);
        lStack_b8 = *(long *)(lStack_a8 + 0x10);
        if (lStack_b8 != 0) {
          piVar11 = (int *)(lStack_b8 + -8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar6) {
              *piVar11 = *piVar11 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppuStack_c0 = &PTR_FUN_110b04b98;
        lStack_c8 = *(long *)(lStack_b8 + 0x48);
        if (lStack_c8 != 0) {
          piVar11 = (int *)(lStack_c8 + -8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar6) {
              *piVar11 = *piVar11 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppuStack_d0 = &PTR_FUN_110b04dd8;
        FUN_1096ba870(&ppuStack_e0);
        FUN_1096ba9b0(&ppuStack_e0,*(long *)(param_1 + 2) + 8);
        FUN_1096baa30(&ppuStack_b0);
        lVar16 = lStack_a8;
        FUN_1096baa30(&ppuStack_e0);
        uVar21 = *(undefined8 *)(lVar16 + 0x48);
        uVar20 = *(undefined8 *)(lVar16 + 0x40);
        uVar19 = *(undefined8 *)(lVar16 + 0x58);
        uVar18 = *(undefined8 *)(lVar16 + 0x50);
        uVar22 = *(undefined8 *)(lVar16 + 0x30);
        *(undefined8 *)(lStack_d8 + 0x38) = *(undefined8 *)(lVar16 + 0x38);
        *(undefined8 *)(lStack_d8 + 0x30) = uVar22;
        *(undefined8 *)(lStack_d8 + 0x48) = uVar21;
        *(undefined8 *)(lStack_d8 + 0x40) = uVar20;
        *(undefined8 *)(lStack_d8 + 0x58) = uVar19;
        *(undefined8 *)(lStack_d8 + 0x50) = uVar18;
        FUN_1096baa30(&ppuStack_b0);
        puVar15 = *(undefined4 **)(lStack_a8 + 0x18);
        FUN_1096baa30(&ppuStack_e0);
        FUN_1096baa30(&ppuStack_e0);
        lVar16 = lStack_a8;
        uVar13 = *(long *)(lStack_d8 + 0x20) - (long)*(undefined4 **)(lStack_d8 + 0x18);
        if (0 < (int)(uVar13 >> 2)) {
          lVar17 = (long)(uVar13 * 0x40000000) >> 0x20;
          puVar12 = *(undefined4 **)(lStack_d8 + 0x18);
          do {
            *puVar12 = *puVar15;
            lVar17 = lVar17 + -1;
            puVar12 = puVar12 + 1;
            puVar15 = puVar15 + 1;
          } while (lVar17 != 0);
        }
        FUN_1096baa30(&ppuStack_e0);
        uVar18 = *(undefined8 *)(lVar16 + 0x60);
        *(undefined8 *)(lStack_d8 + 0x68) = *(undefined8 *)(lVar16 + 0x68);
        *(undefined8 *)(lStack_d8 + 0x60) = uVar18;
        puStack_e8 = puStack_78;
        if (puStack_78 != (undefined *)0x0) {
          piVar11 = (int *)(puStack_78 + -8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar6) {
              *piVar11 = *piVar11 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppuStack_f0 = &PTR_FUN_110b05018;
        lVar16 = *(long *)(param_1 + 2);
        FUN_1096b9498(&ppuStack_f0);
        puVar7 = puStack_e8;
        if (*(long *)(puStack_e8 + 0x10) != *(long *)(lVar16 + 0x20)) {
          func_0x000107c2acd4(puStack_e8 + 8);
          uVar18 = *(undefined8 *)(lVar16 + 0x18);
          *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)(lVar16 + 0x20);
          *(undefined8 *)(puVar7 + 8) = uVar18;
          if (*(long *)(puVar7 + 0x10) != 0) {
            piVar11 = (int *)(*(long *)(puVar7 + 0x10) + -8);
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
        FUN_1096b9498(&ppuStack_f0);
        FUN_1096b5198(puStack_e8 + 0x18,0x7a4);
        FUN_1096b9358(&ppuStack_100);
        lVar17 = *(long *)(param_1 + 2);
        FUN_1096b9498(&ppuStack_100);
        lVar16 = lStack_f8;
        if (*(long *)(lStack_f8 + 0x10) != *(long *)(lVar17 + 0x30)) {
          func_0x000107c2acd4(lStack_f8 + 8);
          uVar18 = *(undefined8 *)(lVar17 + 0x28);
          *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar17 + 0x30);
          *(undefined8 *)(lVar16 + 8) = uVar18;
          if (*(long *)(lVar16 + 0x10) != 0) {
            piVar11 = (int *)(*(long *)(lVar16 + 0x10) + -8);
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
        FUN_1096b9498(&ppuStack_100);
        FUN_1096b5198(lStack_f8 + 0x18,0x118);
        FUN_1096baa30(&ppuStack_b0);
        lVar16 = lStack_a8;
        FUN_1096b9498(&ppuStack_100);
        uVar21 = *(undefined8 *)(lVar16 + 0x48);
        uVar20 = *(undefined8 *)(lVar16 + 0x40);
        uVar19 = *(undefined8 *)(lVar16 + 0x58);
        uVar18 = *(undefined8 *)(lVar16 + 0x50);
        uVar22 = *(undefined8 *)(lVar16 + 0x30);
        *(undefined8 *)(lStack_f8 + 0x38) = *(undefined8 *)(lVar16 + 0x38);
        *(undefined8 *)(lStack_f8 + 0x30) = uVar22;
        *(undefined8 *)(lStack_f8 + 0x48) = uVar21;
        *(undefined8 *)(lStack_f8 + 0x40) = uVar20;
        *(undefined8 *)(lStack_f8 + 0x58) = uVar19;
        *(undefined8 *)(lStack_f8 + 0x50) = uVar18;
        FUN_1096b9498(&ppuStack_80);
        lVar16 = *(long *)(puStack_78 + 0x18);
        lVar10 = *(long *)(puStack_78 + 0x20);
        FUN_1096b9498(&ppuStack_80);
        lVar17 = *(long *)(puStack_78 + 0x18);
        lVar3 = *(long *)(puStack_78 + 0x20);
        FUN_1096b9498(&ppuStack_100);
        lVar16 = lVar16 + (long)((int)((ulong)(lVar10 - lVar16) >> 2) * -0x55555555) * 0xc + -0x1a40
        ;
        lVar17 = (lVar17 + (long)((int)((ulong)(lVar3 - lVar17) >> 2) * -0x55555555) * 0xc + -0xd20)
                 - lVar16;
        if (lVar17 != 0) {
          _memmove(*(undefined8 *)(lStack_f8 + 0x18),lVar16,lVar17);
        }
        FUN_1096b9358(&ppuStack_110);
        lVar17 = *(long *)(param_1 + 2);
        FUN_1096b9498(&ppuStack_110);
        lVar16 = lStack_108;
        if (*(long *)(lStack_108 + 0x10) != *(long *)(lVar17 + 0x40)) {
          func_0x000107c2acd4(lStack_108 + 8);
          uVar18 = *(undefined8 *)(lVar17 + 0x38);
          *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar17 + 0x40);
          *(undefined8 *)(lVar16 + 8) = uVar18;
          if (*(long *)(lVar16 + 0x10) != 0) {
            piVar11 = (int *)(*(long *)(lVar16 + 0x10) + -8);
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
        FUN_1096b9498(&ppuStack_110);
        FUN_1096b5198(lStack_108 + 0x18,0x118);
        FUN_1096baa30(&ppuStack_b0);
        lVar16 = lStack_a8;
        FUN_1096b9498(&ppuStack_110);
        uVar21 = *(undefined8 *)(lVar16 + 0x48);
        uVar20 = *(undefined8 *)(lVar16 + 0x40);
        uVar19 = *(undefined8 *)(lVar16 + 0x58);
        uVar18 = *(undefined8 *)(lVar16 + 0x50);
        uVar22 = *(undefined8 *)(lVar16 + 0x30);
        *(undefined8 *)(lStack_108 + 0x38) = *(undefined8 *)(lVar16 + 0x38);
        *(undefined8 *)(lStack_108 + 0x30) = uVar22;
        *(undefined8 *)(lStack_108 + 0x48) = uVar21;
        *(undefined8 *)(lStack_108 + 0x40) = uVar20;
        *(undefined8 *)(lStack_108 + 0x58) = uVar19;
        *(undefined8 *)(lStack_108 + 0x50) = uVar18;
        FUN_1096b9498(&ppuStack_80);
        lVar16 = *(long *)(puStack_78 + 0x18);
        lVar10 = *(long *)(puStack_78 + 0x20);
        FUN_1096b9498(&ppuStack_80);
        lVar17 = *(long *)(puStack_78 + 0x18);
        lVar3 = *(long *)(puStack_78 + 0x20);
        FUN_1096b9498(&ppuStack_110);
        lVar10 = lVar16 + (long)((int)((ulong)(lVar10 - lVar16) >> 2) * -0x55555555) * 0xc + -0xd20;
        lVar16 = (lVar17 + (long)((int)((ulong)(lVar3 - lVar17) >> 2) * -0x55555555) * 0xc) - lVar10
        ;
        if (lVar16 != 0) {
          _memmove(*(undefined8 *)(lStack_108 + 0x18),lVar10,lVar16);
        }
        FUN_1096e4d6c(lVar1,*puStack_98,&ppuStack_e0);
        FUN_1096e4d6c(lVar1,puStack_98[1],&ppuStack_f0);
        FUN_1096e4d6c(lVar1,puStack_98[2],&ppuStack_100);
        FUN_1096e4d6c(lVar1,puStack_98[3],&ppuStack_110);
        ppuStack_110 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_110);
        ppuStack_100 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_100);
        ppuStack_f0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_f0);
        ppuStack_e0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_e0);
        ppuStack_d0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_d0);
        ppuStack_c0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_c0);
        ppuStack_80 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_80);
        ppuStack_b0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_b0);
      }
    }
    FUN_1096b52d0(param_2,0x11382aa70,*(long *)(param_1 + 2) + 0x48);
  }
  else {
    ppuStack_80 = (undefined **)&DAT_10f6842c6;
    puStack_78 = &UNK_10f57d24e;
    uStack_70 = 0x9000000bd;
    FUN_1096993dc(&ppuStack_80,&UNK_10f57d2ec);
  }
  if (puStack_98 != (undefined4 *)0x0) {
    puStack_90 = puStack_98;
    __ZdlPv();
  }
  return lVar14 == 0x10;
}



/* Entry: 1096c571c; end: 1096c574f;  */

undefined8 * FUN_1096c571c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096c5750; end: 1096c5783;  */

void FUN_1096c5750(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096c5784; end: 1096c5793;  */

void FUN_1096c5784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096c5794; end: 1096c57c3;  */

void FUN_1096c5794(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096c57c4; end: 1096c57d3;  */

void FUN_1096c57c4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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



/* Entry: 1096c57d4; end: 1096c5833;  */

undefined8 FUN_1096c57d4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

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



/* Entry: 1096c5834; end: 1096c585f;  */

undefined8 FUN_1096c5834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096c5860; end: 1096c588b;  */

void FUN_1096c5860(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b068c8;
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



/* Entry: 1096c588c; end: 1096c5973;  */

void FUN_1096c588c(undefined8 *param_1,undefined1 *param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined8 *extraout_x8;
  undefined8 uVar3;
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
  iVar2 = 0x10b01d40;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    FUN_109694d40("",0);
    func_0x000107c2accc();
    iVar2 = 0x10b01d40;
    func_0x00010969659c(&ppuStack_50);
    uVar3 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar3;
    func_0x000107c2acd4();
    param_2 = (undefined1 *)pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume(param_2);
  pcStack_58 = FUN_1096c5974;
  puStack_70 = param_2;
  puStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_1096c4e98(&ppuStack_80);
  extraout_x8[1] = uStack_78;
  *extraout_x8 = ppuStack_80;
  ppuStack_80 = &PTR_FUN_110b01d60;
  uStack_78 = 0;
  func_0x000107c2acd4(&ppuStack_80);
  return;
}



/* Entry: 1096c5974; end: 1096c59bf;  */

void FUN_1096c5974(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096c4e98(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096c59c0; end: 1096c59ef;  */

bool FUN_1096c59c0(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b068c8,0);
  return param_1 != 0;
}



/* Entry: 1096c59f0; end: 1096c5a0b;  */

void FUN_1096c59f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096c5a0c; end: 1096c5a53;  */

void FUN_1096c5a0c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096c5a54; end: 1096c5aab;  */

undefined8 * FUN_1096c5a54(undefined8 *param_1)

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



/* Entry: 1096c5aac; end: 1096c5b03;  */

void FUN_1096c5aac(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b068c8;
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



/* Entry: 1096c5b04; end: 1096c5b7f;  */

long FUN_1096c5b04(long param_1)

{
  FUN_1096b63f8(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x38) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4((undefined8 *)(param_1 + 0x38));
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096c5b80; end: 1096c5bfb;  */

void FUN_1096c5b80(long param_1)

{
  FUN_1096b63f8(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x38) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4((undefined8 *)(param_1 + 0x38));
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096c5bfc; end: 1096c6adf;  */

void FUN_1096c5bfc(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined4 *puVar10;
  undefined ***pppuVar11;
  undefined *****pppppuVar12;
  int iVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined ****ppppuVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined **ppuVar20;
  int *piVar21;
  ulong uVar22;
  undefined4 *puVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  undefined **ppuVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  float fVar31;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined **appuStack_140 [2];
  undefined ****ppppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  long lStack_118;
  undefined ****ppppuStack_108;
  long lStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined ***pppuStack_e0;
  undefined ****ppppuStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  pppuVar9 = &ppuStack_150;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *(long *)(*(long *)*param_1 + 8);
  FUN_1096b5094(lVar25,0x113735c40);
  func_0x000107c2acdc();
  FUN_1096b5c80(&pppuStack_e0);
  puStack_148 = (undefined *)ppppuStack_d8;
  if (ppppuStack_d8 != (undefined ****)0x0) {
    piVar14 = (int *)((long)ppppuStack_d8 + -8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = *piVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_150 = &PTR_FUN_110b04b98;
  pppuStack_e0 = (undefined ***)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&pppuStack_e0);
  if (puStack_148 == (undefined *)0x0) {
    pppuStack_e0 = (undefined ***)&UNK_10f57d388;
    ppppuStack_d8 = (undefined ****)&UNK_10f57d24e;
    puStack_d0 = (undefined *)0xae;
    FUN_109699380(&pppuStack_e0);
  }
  puVar6 = puStack_148;
  lVar27 = *(long *)(lVar25 + 8);
  iVar26 = *(int *)(puStack_148 + 0x10);
  FUN_1096b8a3c(&ppuStack_f8,puStack_148 + 0x40);
  FUN_1096b7d10(ppuStack_f0 + 10,6);
  func_0x000108a5942c(ppuStack_f0 + 0xd,7);
  ppuStack_68 = (undefined **)0x10101010101;
  uStack_60 = (ulong)uStack_60._4_4_ << 0x20;
  FUN_1096b8330(&pppuStack_e0,puVar6 + 0x40,0xc,&ppuStack_68);
  ppuVar20 = ppuStack_f0;
  ppuVar28 = ppuStack_f0 + 4;
  puVar6 = *ppuVar28;
  if (puVar6 != (undefined *)0x0) {
    ppuStack_f0[5] = puVar6;
    __ZdlPv();
    *ppuVar28 = (undefined *)0x0;
    ppuVar20[5] = (undefined *)0x0;
    ppuVar20[6] = (undefined *)0x0;
  }
  ppuVar20[5] = (undefined *)ppppuStack_d8;
  ppuVar20[4] = (undefined *)pppuStack_e0;
  ppuVar20[6] = puStack_d0;
  FUN_1096b9118(ppuStack_f0 + 7,0x545);
  puVar15 = (undefined8 *)ppuStack_f0[7];
  lVar19 = 0x2908;
  puVar17 = puVar15;
  do {
    fVar31 = (float)*puVar17;
    *puVar17 = CONCAT44(fRam0000000113735c5c +
                        fVar31 * fRam0000000113735c54 +
                        (float)((ulong)*puVar17 >> 0x20) * fRam0000000113735c50,
                        fRam0000000113735c58 +
                        -*(float *)((long)puVar17 + 4) * fRam0000000113735c54 +
                        fVar31 * fRam0000000113735c50);
    lVar19 = lVar19 + -8;
    puVar17 = puVar17 + 1;
  } while (lVar19 != 0);
  lVar19 = 0x120;
  puVar17 = puVar15 + 0x521;
  do {
    fVar31 = (float)*puVar17;
    *puVar17 = CONCAT44(fRam0000000113735c6c +
                        fVar31 * fRam0000000113735c64 +
                        (float)((ulong)*puVar17 >> 0x20) * fRam0000000113735c60,
                        fRam0000000113735c68 +
                        -*(float *)((long)puVar17 + 4) * fRam0000000113735c64 +
                        fVar31 * fRam0000000113735c60);
    lVar19 = lVar19 + -8;
    puVar17 = puVar17 + 1;
  } while (lVar19 != 0);
  FUN_1096b72bc(&ppuStack_68,3,0x545,iVar26,0x38);
  FUN_1096aa8bc(&ppppuStack_108,iVar26 + 0x38,0xfcf);
  puVar6 = puStack_148 + 0x18;
  ___dynamic_cast(puVar6,&PTR_DAT_110b01d40,&PTR_DAT_110b03458,0);
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c2acdc();
  }
  lStack_118 = *(long *)(puVar6 + 8);
  if (lStack_118 != 0) {
    piVar14 = (int *)(lStack_118 + -8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = *piVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_120 = &PTR_FUN_110b033c0;
  lVar19 = (*(long *)(lStack_100 + 0x20) - (long)*(undefined4 **)(lStack_100 + 0x18)) * 0x40000000
           >> 0x20;
  if (0 < lVar19) {
    puVar23 = *(undefined4 **)(lStack_100 + 0x18);
    puVar7 = *(undefined4 **)(lStack_118 + 0x18);
    do {
      *puVar23 = *puVar7;
      lVar19 = lVar19 + -1;
      puVar23 = puVar23 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar19 != 0);
  }
  uVar2 = *(uint *)(lStack_100 + 8);
  if (0 < (int)uVar2) {
    lVar19 = 0;
    uVar22 = 0;
    puVar23 = *(undefined4 **)(lStack_100 + 0x10);
    lVar24 = *(long *)(lStack_118 + 0x10);
    uVar3 = *(uint *)(lStack_100 + 0xc);
    do {
      if (0 < (int)uVar3) {
        puVar7 = (undefined4 *)(lVar24 + lVar19 * *(int *)(lStack_118 + 0xc));
        puVar10 = puVar23;
        uVar18 = (ulong)uVar3;
        do {
          *puVar10 = *puVar7;
          uVar18 = uVar18 - 1;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar18 != 0);
      }
      uVar22 = uVar22 + 1;
      puVar23 = puVar23 + (int)uVar3;
      lVar19 = lVar19 + 4;
    } while (uVar22 != uVar2);
  }
  *(undefined4 *)(lStack_100 + 0x30) = 1;
  FUN_1096aaa40(&ppppuStack_130,&ppppuStack_108);
  pppppuVar12 = &ppppuStack_130;
  ___dynamic_cast(pppppuVar12,&PTR_DAT_110b01d40,&PTR_DAT_110b03458,0);
  if (pppppuVar12 == (undefined *****)0x0) {
    func_0x000107c2acdc();
  }
  pppuStack_e0 = (undefined ***)&PTR_FUN_110b01d60;
  ppppuStack_d8 = pppppuVar12[1];
  if (ppppuStack_d8 != (undefined ****)0x0) {
    ppppuVar16 = ppppuStack_d8 + -1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppuVar16,0x10);
      if (bVar5) {
        *(int *)ppppuVar16 = *(int *)ppppuVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pppuStack_e0 = (undefined ***)&PTR_FUN_110b033c0;
  FUN_1096b73f0(&ppuStack_68,&pppuStack_e0);
  pppuStack_e0 = (undefined ***)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&pppuStack_e0);
  ppppuStack_130 = (undefined ****)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppppuStack_130);
  lVar19 = *(long *)(puStack_148 + 0x28);
  ppppuStack_d8 = (undefined ****)0x0;
  puStack_d0 = (undefined *)0x0;
  pppuStack_e0 = (undefined ***)0x0;
  FUN_1096c6ae0(&pppuStack_e0,lVar19,
                lVar19 + ((*(long *)(puStack_148 + 0x30) - lVar19) * 0x10000000 >> 0x20) * 0x10,
                (*(long *)(puStack_148 + 0x30) - lVar19) * 0x10000000 >> 0x20);
  lVar19 = uStack_60;
  FUN_1096b78b0(uStack_60 + 0x28);
  *(undefined *****)(lVar19 + 0x30) = ppppuStack_d8;
  *(undefined ****)(lVar19 + 0x28) = pppuStack_e0;
  *(undefined **)(lVar19 + 0x38) = puStack_d0;
  ppppuStack_d8 = (undefined ****)0x0;
  puStack_d0 = (undefined *)0x0;
  pppuStack_e0 = (undefined ***)0x0;
  FUN_1096b8ba0(appuStack_140,&ppuStack_f8);
  pppuVar8 = appuStack_140;
  ___dynamic_cast(pppuVar8,&PTR_DAT_110b01d40,&PTR_DAT_110b04e38,0);
  if (pppuVar8 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  lVar19 = uStack_60;
  ppuStack_128 = pppuVar8[1];
  if (ppuStack_128 != (undefined **)0x0) {
    ppuVar20 = ppuStack_128 + -1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
      if (bVar5) {
        *(int *)ppuVar20 = *(int *)ppuVar20 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppppuStack_130 = (undefined ****)&PTR_FUN_110b04dd8;
  if (*(undefined ***)(uStack_60 + 0x48) != ppuStack_128) {
    func_0x000107c2acd4(uStack_60 + 0x40);
    *(undefined ***)(lVar19 + 0x48) = ppuStack_128;
    *(undefined *****)(lVar19 + 0x40) = ppppuStack_130;
    if (*(long *)(lVar19 + 0x48) != 0) {
      piVar14 = (int *)(*(long *)(lVar19 + 0x48) + -8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = *piVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  ppppuStack_130 = (undefined ****)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppppuStack_130);
  appuStack_140[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_140);
  FUN_1096b7480(appuStack_140,&ppuStack_68);
  pppuVar8 = appuStack_140;
  ___dynamic_cast(pppuVar8,&PTR_DAT_110b01d40,&PTR_DAT_110b04bf8,0);
  if (pppuVar8 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  ppuVar20 = pppuVar8[1];
  if (ppuVar20 != (undefined **)0x0) {
    ppuVar28 = ppuVar20 + -1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar28,0x10);
      if (bVar5) {
        *(int *)ppuVar28 = *(int *)ppuVar28 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_128 = *(undefined ***)(lVar27 + 0x10);
  *(undefined ***)(lVar27 + 0x10) = ppuVar20;
  *(undefined ***)(lVar27 + 8) = &PTR_FUN_110b04b98;
  ppppuStack_130 = (undefined ****)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppppuStack_130);
  appuStack_140[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_140);
  ppppuStack_130 = &pppuStack_e0;
  FUN_1096b7bf0(&ppppuStack_130);
  ppuStack_120 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_120);
  ppppuStack_108 = (undefined ****)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppppuStack_108);
  ppuStack_68 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_68);
  ppuStack_f8 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_f8);
  puVar6 = puStack_148;
  lVar27 = *(long *)(lVar25 + 8);
  FUN_1096b8a3c(&ppuStack_f8,puStack_148 + 0x40);
  FUN_1096b9118(ppuStack_f0 + 7,0x7a4);
  FUN_1096b7d10(ppuStack_f0 + 10,10);
  func_0x000108a5942c(ppuStack_f0 + 0xd,0xb);
  ppuStack_68 = (undefined **)0x101010101010101;
  uStack_60 = CONCAT44(uStack_60._4_4_,0x101);
  FUN_1096b8330(&pppuStack_e0,puVar6 + 0x40,0xc,&ppuStack_68);
  ppuVar20 = ppuStack_f0;
  ppuVar28 = ppuStack_f0 + 4;
  puVar6 = *ppuVar28;
  if (puVar6 != (undefined *)0x0) {
    ppuStack_f0[5] = puVar6;
    __ZdlPv();
    *ppuVar28 = (undefined *)0x0;
    ppuVar20[5] = (undefined *)0x0;
    ppuVar20[6] = (undefined *)0x0;
  }
  ppuVar20[5] = (undefined *)ppppuStack_d8;
  ppuVar20[4] = (undefined *)pppuStack_e0;
  ppuVar20[6] = puStack_d0;
  FUN_1096b8ba0(&ppuStack_68,&ppuStack_f8);
  pppuVar8 = &ppuStack_68;
  ___dynamic_cast(pppuVar8,&PTR_DAT_110b01d40,&PTR_DAT_110b04e38,0);
  if (pppuVar8 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  ppuVar20 = pppuVar8[1];
  if (ppuVar20 != (undefined **)0x0) {
    ppuVar28 = ppuVar20 + -1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar28,0x10);
      if (bVar5) {
        *(int *)ppuVar28 = *(int *)ppuVar28 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppppuStack_d8 = *(undefined *****)(lVar27 + 0x20);
  *(undefined ***)(lVar27 + 0x20) = ppuVar20;
  *(undefined ***)(lVar27 + 0x18) = &PTR_FUN_110b04dd8;
  pppuStack_e0 = (undefined ***)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&pppuStack_e0);
  ppuStack_68 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_68);
  ppuStack_f8 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_f8);
  puVar6 = puStack_148;
  lVar19 = *(long *)(lVar25 + 8);
  FUN_1096b88e8(&ppuStack_f8);
  lVar27 = *(long *)(*(long *)(puVar6 + 0x48) + 0x38);
  FUN_1096ba550(ppuStack_f0 + 7,lVar27 + 0x3d20,lVar27 + 0x45e0,0x118);
  ppuStack_68 = (undefined **)0x0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0x10000);
  FUN_1096b8330(&pppuStack_e0,puVar6 + 0x40,0xc,&ppuStack_68);
  ppuVar20 = ppuStack_f0;
  ppuVar28 = ppuStack_f0 + 4;
  puVar6 = *ppuVar28;
  if (puVar6 != (undefined *)0x0) {
    ppuStack_f0[5] = puVar6;
    __ZdlPv();
    *ppuVar28 = (undefined *)0x0;
    ppuVar20[5] = (undefined *)0x0;
    ppuVar20[6] = (undefined *)0x0;
  }
  ppuVar20[5] = (undefined *)ppppuStack_d8;
  ppuVar20[4] = (undefined *)pppuStack_e0;
  ppuVar20[6] = puStack_d0;
  piVar1 = (int *)ppuStack_f0[5];
  piVar14 = (int *)ppuStack_f0[4];
  for (piVar21 = piVar14; piVar21 != piVar1; piVar21 = piVar21 + 1) {
    *piVar21 = *piVar21 + -0x7a4;
  }
  ppuStack_68 = (undefined **)(((ulong)((long)piVar1 - (long)piVar14) >> 2) << 0x20);
  ppppuStack_d8 = (undefined ****)0x0;
  puStack_d0 = (undefined *)0x0;
  pppuStack_e0 = (undefined ***)0x0;
  FUN_1092d1c20(&pppuStack_e0,&ppuStack_68,&uStack_60,2);
  ppuVar20 = ppuStack_f0;
  ppuVar28 = ppuStack_f0 + 0xd;
  puVar6 = *ppuVar28;
  if (puVar6 != (undefined *)0x0) {
    ppuStack_f0[0xe] = puVar6;
    __ZdlPv();
    *ppuVar28 = (undefined *)0x0;
    ppuVar20[0xe] = (undefined *)0x0;
    ppuVar20[0xf] = (undefined *)0x0;
  }
  ppuVar20[0xe] = (undefined *)ppppuStack_d8;
  ppuVar20[0xd] = (undefined *)pppuStack_e0;
  ppuVar20[0xf] = puStack_d0;
  func_0x000107c2ace8(&ppuStack_68);
  if (*(char *)(uStack_60 + 0x1f) < '\0') {
    *(undefined8 *)(uStack_60 + 0x10) = 8;
    puVar17 = *(undefined8 **)(uStack_60 + 8);
  }
  else {
    puVar17 = (undefined8 *)(uStack_60 + 8);
    *(undefined1 *)(uStack_60 + 0x1f) = 8;
  }
  *puVar17 = 0x7261457468676952;
  *(undefined1 *)(puVar17 + 1) = 0;
  pppuStack_e0 = (undefined ***)0x0;
  ppppuStack_d8 = (undefined ****)0x0;
  puStack_d0 = (undefined *)0x0;
  FUN_1096c6ae0(&pppuStack_e0,&ppuStack_68,&lStack_58,1);
  ppuVar20 = ppuStack_f0;
  FUN_1096b78b0(ppuStack_f0 + 10);
  ppuVar20[0xb] = (undefined *)ppppuStack_d8;
  ppuVar20[10] = (undefined *)pppuStack_e0;
  ppuVar20[0xc] = puStack_d0;
  ppppuStack_d8 = (undefined ****)0x0;
  puStack_d0 = (undefined *)0x0;
  pppuStack_e0 = (undefined ***)0x0;
  ppppuStack_108 = &pppuStack_e0;
  FUN_1096b7bf0(&ppppuStack_108);
  ppuStack_68 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_68);
  FUN_1096b8ba0(&ppuStack_68,&ppuStack_f8);
  pppuVar8 = &ppuStack_68;
  ___dynamic_cast(pppuVar8,&PTR_DAT_110b01d40,&PTR_DAT_110b04e38,0);
  if (pppuVar8 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  ppuVar20 = pppuVar8[1];
  if (ppuVar20 != (undefined **)0x0) {
    ppuVar28 = ppuVar20 + -1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar28,0x10);
      if (bVar5) {
        *(int *)ppuVar28 = *(int *)ppuVar28 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppppuStack_d8 = *(undefined *****)(lVar19 + 0x30);
  *(undefined ***)(lVar19 + 0x30) = ppuVar20;
  *(undefined ***)(lVar19 + 0x28) = &PTR_FUN_110b04dd8;
  pppuStack_e0 = (undefined ***)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&pppuStack_e0);
  ppuStack_68 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_68);
  FUN_1096b8b38(&ppuStack_f8);
  func_0x000107c2ace8(&pppuStack_e0);
  if (*(char *)((long)ppppuStack_d8 + 0x1f) < '\0') {
    *(undefined8 *)((long)ppppuStack_d8 + 0x10) = 7;
    puVar23 = *(undefined4 **)((long)ppppuStack_d8 + 8);
  }
  else {
    puVar23 = (undefined4 *)((long)ppppuStack_d8 + 8);
    *(undefined1 *)((long)ppppuStack_d8 + 0x1f) = 7;
  }
  *(undefined4 *)((long)puVar23 + 3) = 0x72614574;
  *puVar23 = 0x7466654c;
  *(undefined1 *)((long)puVar23 + 7) = 0;
  puVar17 = (undefined8 *)ppuStack_f0[10];
  uVar30 = puVar17[1];
  puVar17[1] = ppppuStack_d8;
  *puVar17 = pppuStack_e0;
  pppuStack_e0 = (undefined ***)&PTR_FUN_110b01d60;
  ppppuStack_d8 = (undefined ****)uVar30;
  func_0x000107c2acd4(&pppuStack_e0);
  FUN_1096b8ba0(&ppuStack_68,&ppuStack_f8);
  pppuVar8 = &ppuStack_68;
  ___dynamic_cast(pppuVar8,&PTR_DAT_110b01d40,&PTR_DAT_110b04e38,0);
  if (pppuVar8 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  ppuVar20 = pppuVar8[1];
  if (ppuVar20 != (undefined **)0x0) {
    ppuVar28 = ppuVar20 + -1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar28,0x10);
      if (bVar5) {
        *(int *)ppuVar28 = *(int *)ppuVar28 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppppuStack_d8 = *(undefined *****)(lVar19 + 0x40);
  *(undefined ***)(lVar19 + 0x40) = ppuVar20;
  *(undefined ***)(lVar19 + 0x38) = &PTR_FUN_110b04dd8;
  pppuStack_e0 = (undefined ***)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&pppuStack_e0);
  ppuStack_68 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_68);
  ppuStack_f8 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_f8);
  lVar25 = *(long *)(lVar25 + 8);
  FUN_1096b61cc(&pppuStack_e0,&ppuStack_f8);
  func_0x0001096b5134(lVar25 + 0x48,&pppuStack_e0);
  ppppuVar16 = ppppuStack_d8;
  if (ppppuStack_d8 != (undefined ****)0x0) {
    pppuVar8 = (undefined ***)(ppppuStack_d8 + 1);
    do {
      ppuVar20 = *pppuVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar5) {
        *pppuVar8 = (undefined **)((long)ppuVar20 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar20 == (undefined **)0x0) {
      (*(code *)(*ppppuStack_d8)[2])(ppppuStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar16);
    }
  }
  lVar27 = *(long *)(lVar25 + 0x48);
  *(undefined4 *)(lVar27 + 0x30) = 3;
  if (*(long *)(lVar27 + 0x58) != *(long *)(lVar25 + 0x20)) {
    func_0x000107c2acd4(lVar27 + 0x50);
    uVar30 = *(undefined8 *)(lVar25 + 0x18);
    *(undefined8 *)(lVar27 + 0x58) = *(undefined8 *)(lVar25 + 0x20);
    *(undefined8 *)(lVar27 + 0x50) = uVar30;
    if (*(long *)(lVar27 + 0x58) != 0) {
      piVar14 = (int *)(*(long *)(lVar27 + 0x58) + -8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = *piVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  lVar27 = *(long *)(puStack_148 + 0x48);
  iVar26 = 0;
  if (lVar27 != 0) {
    iVar26 = (int)((ulong)(*(long *)(lVar27 + 0x10) - *(long *)(lVar27 + 8)) >> 2);
  }
  FUN_1096b5198(*(long *)(lVar25 + 0x48) + 0x38,(long)*(int *)(puStack_148 + 0xc) + (long)iVar26);
  FUN_109367d10(&pppuStack_e0,
                (long)*(int *)(puStack_148 + 0x14) + (long)*(int *)(puStack_148 + 0x10));
  lVar27 = *(long *)(puStack_148 + 0x48);
  iVar26 = 0;
  if (lVar27 != 0) {
    iVar26 = (int)((ulong)(*(long *)(lVar27 + 0x10) - *(long *)(lVar27 + 8)) >> 2);
  }
  uVar22 = (long)*(int *)(puStack_148 + 0xc) + (long)iVar26;
  iVar26 = (int)uVar22;
  if (iVar26 != 0x9d4) {
    ppuStack_f8 = (undefined **)&UNK_10f57d39e;
    ppuStack_f0 = (undefined **)&UNK_10f57d24e;
    uStack_e8 = 0x8f;
    FUN_109699380(&ppuStack_f8);
  }
  FUN_109367d10(&ppuStack_f8,uVar22 * 3);
  pppppuVar12 = (undefined *****)(uVar22 * 3 & 0xffffffff);
  pppuVar8 = pppuStack_e0;
  FUN_1096b6a28(&ppuStack_150,(ulong)((long)ppppuStack_d8 - (long)pppuStack_e0) >> 2 & 0xffffffff,
                pppuStack_e0,pppppuVar12,ppuStack_f8);
  FUN_1096b5198(*(long *)(lVar25 + 0x48) + 0x38,(long)iVar26);
  if (0 < iVar26) {
    lVar27 = 0;
    uVar22 = uVar22 & 0xffffffff;
    do {
      uVar29 = *(undefined4 *)((undefined8 *)((long)ppuStack_f8 + lVar27) + 1);
      puVar17 = (undefined8 *)(*(long *)(*(long *)(lVar25 + 0x48) + 0x38) + lVar27);
      *puVar17 = *(undefined8 *)((long)ppuStack_f8 + lVar27);
      *(undefined4 *)(puVar17 + 1) = uVar29;
      lVar27 = lVar27 + 0xc;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  lVar24 = *(long *)(lVar25 + 0x48);
  lVar19 = *(long *)(*(long *)(lVar25 + 0x10) + 0x48);
  lVar27 = *(long *)(lVar19 + 0x38);
  uVar22 = *(long *)(lVar19 + 0x40) - lVar27;
  FUN_1096b5544(lVar24 + 0x60,(long)(uVar22 * 0x20000000) >> 0x20);
  if (0 < (int)(uVar22 >> 3)) {
    uVar18 = 0;
    do {
      *(undefined8 *)(*(long *)(lVar24 + 0x60) + uVar18 * 8) = *(undefined8 *)(lVar27 + uVar18 * 8);
      uVar18 = uVar18 + 1;
    } while ((uVar22 >> 3 & 0x7fffffff) != uVar18);
  }
  lVar19 = *(long *)(lVar25 + 0x48);
  lVar27 = *(long *)(*(long *)(lVar25 + 0x20) + 0x38);
  uVar22 = *(long *)(*(long *)(lVar25 + 0x20) + 0x40) - lVar27;
  FUN_1096b5544(lVar19 + 0x78,(long)(uVar22 * 0x20000000) >> 0x20);
  if (0 < (int)(uVar22 >> 3)) {
    uVar18 = 0;
    do {
      *(undefined8 *)(*(long *)(lVar19 + 0x78) + uVar18 * 8) = *(undefined8 *)(lVar27 + uVar18 * 8);
      uVar18 = uVar18 + 1;
    } while ((uVar22 >> 3 & 0x7fffffff) != uVar18);
  }
  lVar19 = *(long *)(lVar25 + 0x48);
  lVar27 = *(long *)(*(long *)(lVar25 + 0x30) + 0x38);
  uVar22 = *(long *)(*(long *)(lVar25 + 0x30) + 0x40) - lVar27;
  FUN_1096b5544(lVar19 + 0x90,(long)(uVar22 * 0x20000000) >> 0x20);
  if (0 < (int)(uVar22 >> 3)) {
    uVar18 = 0;
    do {
      *(undefined8 *)(*(long *)(lVar19 + 0x90) + uVar18 * 8) = *(undefined8 *)(lVar27 + uVar18 * 8);
      uVar18 = uVar18 + 1;
    } while ((uVar22 >> 3 & 0x7fffffff) != uVar18);
  }
  lVar19 = *(long *)(lVar25 + 0x48);
  lVar27 = *(long *)(*(long *)(lVar25 + 0x40) + 0x38);
  uVar22 = *(long *)(*(long *)(lVar25 + 0x40) + 0x40) - lVar27;
  pppuVar11 = (undefined ***)((long)(uVar22 * 0x20000000) >> 0x20);
  FUN_1096b5544(lVar19 + 0xa8);
  if (0 < (int)(uVar22 >> 3)) {
    uVar18 = 0;
    do {
      *(undefined8 *)(*(long *)(lVar19 + 0xa8) + uVar18 * 8) = *(undefined8 *)(lVar27 + uVar18 * 8);
      uVar18 = uVar18 + 1;
    } while ((uVar22 >> 3 & 0x7fffffff) != uVar18);
  }
  lVar27 = *(long *)(puStack_148 + 0x28);
  ppppuStack_108 = (undefined ****)((ulong)ppppuStack_108 & 0xffffffff00000000);
  iVar26 = (int)((ulong)(*(long *)(puStack_148 + 0x30) - lVar27) >> 4);
  if (0 < iVar26) {
    iVar13 = 0;
    do {
      lVar19 = *(long *)(lVar27 + (long)iVar13 * 0x10 + 8);
      uStack_60 = (long)*(char *)(lVar19 + 0x1f);
      if (uStack_60 < 0) {
        ppuStack_68 = *(undefined ***)(lVar19 + 8);
        uStack_60 = *(long *)(lVar19 + 0x10);
      }
      else {
        ppuStack_68 = (undefined **)(lVar19 + 8);
      }
      lVar19 = *(long *)(lVar25 + 0x48) + 8;
      pppuVar11 = &ppuStack_68;
      pppuVar8 = &ppuStack_68;
      pppppuVar12 = &ppppuStack_108;
      FUN_1096b6450();
      if (((ulong)pppuVar11 & 1) == 0) {
        *(int *)(lVar19 + 0x20) = (int)ppppuStack_108;
      }
      iVar13 = (int)ppppuStack_108 + 1;
      ppppuStack_108 = (undefined ****)CONCAT44(ppppuStack_108._4_4_,iVar13);
    } while (iVar13 < iVar26);
  }
  if (ppuStack_f8 != (undefined **)0x0) {
    ppuStack_f0 = ppuStack_f8;
    __ZdlPv();
  }
  if (pppuStack_e0 != (undefined ***)0x0) {
    ppppuStack_d8 = (undefined ****)pppuStack_e0;
    __ZdlPv();
  }
  ppuStack_150 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_109696618(&ppppuStack_130);
  FUN_10969664c(appuStack_140);
  ppppuStack_130 = &pppuStack_e0;
  FUN_1096b7bf0(&ppppuStack_130);
  FUN_109696618(&ppuStack_120);
  FUN_109696618(&ppppuStack_108);
  FUN_109696618(&ppuStack_68);
  FUN_109696618(&ppuStack_f8);
  FUN_109696618(&ppuStack_150);
  __Unwind_Resume();
  if (pppppuVar12 != (undefined *****)0x0) {
    FUN_1096b7924();
    puVar17 = *(undefined8 **)((long)pppuVar9 + 8);
    for (; pppuVar11 != pppuVar8; pppuVar11 = pppuVar11 + 2) {
      *puVar17 = &PTR_FUN_110b01d60;
      ppuVar20 = *pppuVar11;
      puVar17[1] = pppuVar11[1];
      *puVar17 = ppuVar20;
      if (puVar17[1] != 0) {
        piVar14 = (int *)(puVar17[1] + -8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar5) {
            *piVar14 = *piVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *puVar17 = &PTR_FUN_110b00af0;
      puVar17 = puVar17 + 2;
    }
    *(undefined8 **)((long)pppuVar9 + 8) = puVar17;
  }
  return;
}



/* Entry: 1096c6ae0; end: 1096c6b93;  */

void FUN_1096c6ae0(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    FUN_1096b7924(param_1,param_4);
    puVar3 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      *puVar3 = &PTR_FUN_110b01d60;
      uVar5 = *param_2;
      puVar3[1] = param_2[1];
      *puVar3 = uVar5;
      if (puVar3[1] != 0) {
        piVar4 = (int *)(puVar3[1] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *puVar3 = &PTR_FUN_110b00af0;
      puVar3 = puVar3 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar3;
  }
  return;
}



/* Entry: 1096c6b94; end: 1096c6be3;  */

void FUN_1096c6b94(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096c6be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x30))();
  return;
}



/* Entry: 1096c6be4; end: 1096c6c7f;  */

undefined8 * FUN_1096c6be4(long param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (puVar2 = *(undefined8 **)(lVar1 + 8), puVar2 != (undefined8 *)0x0)) {
    func_0x0001096c6e18(puVar2,param_3);
    return puVar2;
  }
  puVar4 = (undefined8 *)*param_2;
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  puVar2 = puVar4;
  (**(code **)*puVar4)();
  FUN_109696718(lVar1,puVar4);
  *(undefined8 **)(lVar1 + 8) = puVar2;
  plVar3 = (long *)(param_3 + 0x18);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    plVar3 = puVar2 + 3;
  }
  else {
    if (lVar1 == param_3) {
      puVar2[3] = puVar2;
      (**(code **)(*(long *)*plVar3 + 0x18))((long *)*plVar3,puVar2);
      return puVar2;
    }
    puVar2[3] = lVar1;
  }
  *plVar3 = 0;
  return puVar2;
}



/* Entry: 1096c6c80; end: 1096c6c93;  */

void FUN_1096c6c80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x20);
  return;
}



/* Entry: 1096c6c94; end: 1096c6cdb;  */

void FUN_1096c6c94(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == param_2) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_1096c6ccc;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1096c6ccc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096c6cdc; end: 1096c6d13;  */

void FUN_1096c6cdc(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0x41;
  __Znam();
  lVar6 = 0x20;
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
  *(undefined1 *)(lVar3 + 0x40) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096c6d14; end: 1096c6d6b;  */

void FUN_1096c6d14(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b06ae8;
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



/* Entry: 1096c6d6c; end: 1096c6d73;  */

void FUN_1096c6d6c(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1096c6d74; end: 1096c6da3;  */

bool FUN_1096c6d74(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b06ae8,0xfffffffffffffffe);
  return param_1 != 0;
}



/* Entry: 1096c6da4; end: 1096c6db3;  */

long FUN_1096c6da4(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else if (plVar1 == param_1) {
    *(long *)(param_2 + 0x18) = param_2;
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_2 + 0x18) = plVar1;
  }
  return param_2;
}



/* Entry: 1096c6db4; end: 1096c6ea3;  */

long FUN_1096c6db4(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 1096c6ea4; end: 1096c6f07;  */

long FUN_1096c6ea4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 1096c6f08; end: 1096c71ef;  */

undefined8 * FUN_1096c6f08(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plStack_a0;
  long *plStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar5 = (undefined8 *)0x28;
  _malloc();
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 3) = 1;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    puVar5 = puVar5 + 4;
    *puVar5 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00e00;
  param_1[1] = puVar5;
  lVar8 = 0xa0;
  puVar5 = param_1;
  func_0x000107c2acd0();
  puVar5[2] = 0;
  puVar5[3] = 0x32aaaba7;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0x3cb0b1bb;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0x13] = 0;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110b06e30;
  puVar5[1] = 0;
  __ZNSt3__16thread20hardware_concurrencyEv();
  uVar1 = (uint)puVar5;
  if ((int)param_2 <= (int)(uint)puVar5) {
    uVar1 = param_2;
  }
  if ((int)uVar1 < 2) {
    uVar1 = 1;
  }
  uVar13 = (ulong)uVar1;
  lVar10 = param_1[1];
  plVar14 = (long *)(lVar10 + 0x88);
  lVar15 = *plVar14;
  if ((ulong)(*(long *)(lVar10 + 0x98) - lVar15 >> 3) < uVar13) {
    lVar10 = *(long *)(lVar10 + 0x90);
    uVar6 = uVar13;
    plStack_68 = plVar14;
    FUN_1096c7658();
    lStack_80 = uVar6 + (lVar10 - lVar15);
    lStack_70 = uVar6 + lVar8 * 8;
    uStack_88 = uVar6;
    lStack_78 = lStack_80;
    func_0x000107313d70(plVar14,&uStack_88);
    func_0x000107313f64(&uStack_88);
    lVar10 = param_1[1];
  }
  uStack_90 = lVar10 + 8;
  plStack_98 = (long *)0x0;
  *(undefined1 *)(lVar10 + 0x10) = 0;
  lVar8 = param_1[1];
  plStack_a0 = (long *)0x0;
  plVar7 = (long *)0x818;
  __Znwm();
  plVar16 = plVar7 + 1;
  *plVar16 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110b06e98;
  plVar14 = plVar7 + 3;
  puVar9 = (ulong *)0x800;
  _bzero(plVar14);
  *(long **)(lVar8 + 8) = plVar14;
  plStack_a0 = plVar14;
  plStack_98 = plVar7;
  do {
    lVar8 = param_1[1];
    uVar6 = *(ulong *)(lVar8 + 0x90);
    if (uVar6 < *(ulong *)(lVar8 + 0x98)) {
      puVar9 = &uStack_90;
      FUN_1096c768c(uVar6,puVar9,&plStack_a0);
      lVar10 = uVar6 + 8;
      *(long *)(lVar8 + 0x90) = lVar10;
    }
    else {
      plVar14 = (long *)(lVar8 + 0x88);
      lVar10 = uVar6 - *plVar14;
      uVar6 = (lVar10 >> 3) + 1;
      if (uVar6 >> 0x3d != 0) {
        FUN_1096c7644();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1096c7198);
        (*pcVar4)();
      }
      uVar11 = *(ulong *)(lVar8 + 0x98) - *plVar14;
      uVar12 = (long)uVar11 >> 2;
      if (uVar12 <= uVar6) {
        uVar12 = uVar6;
      }
      if (0x7ffffffffffffff7 < uVar11) {
        uVar12 = 0x1fffffffffffffff;
      }
      plStack_68 = plVar14;
      if (uVar12 == 0) {
        puVar9 = (ulong *)0x0;
      }
      else {
        FUN_1096c7658();
      }
      lStack_80 = uVar12 + lVar10;
      lStack_70 = uVar12 + (long)puVar9 * 8;
      uStack_88 = uVar12;
      lStack_78 = lStack_80;
      FUN_1096c768c(lStack_80,&uStack_90,&plStack_a0);
      lStack_78 = lStack_78 + 8;
      puVar9 = &uStack_88;
      func_0x000107313d70(plVar14);
      lVar10 = *(long *)(lVar8 + 0x90);
      func_0x000107313f64(&uStack_88);
    }
    *(long *)(lVar8 + 0x90) = lVar10;
    uVar1 = (int)uVar13 - 1;
    uVar13 = (ulong)uVar1;
  } while (uVar1 != 0);
  do {
    lVar8 = *plVar16;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar3) {
      *plVar16 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  return param_1;
}



/* Entry: 1096c71f0; end: 1096c757f;  */

void FUN_1096c71f0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar12 = *(long *)(param_1 + 8);
  __ZNSt3__15mutex4lockEv(lVar12 + 0x18);
  lVar13 = *(long *)(param_1 + 8);
  lVar14 = *(long *)(lVar13 + 8);
  piVar2 = (int *)(lVar14 + 0x7e8);
  do {
    iVar4 = *piVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = iVar4 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar4 < 0x7e) {
    plVar1 = (long *)(lVar14 + (long)iVar4 * 0x10);
    *plVar1 = param_2;
    plVar1[1] = param_3;
    piVar2 = (int *)(lVar14 + 0x7e4);
    do {
      while (*piVar2 != iVar4) {
        ClearExclusiveLocal();
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    lStack_80 = 0;
    plStack_78 = (long *)0x0;
    plVar7 = (long *)0x818;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110b06e98;
    plVar1 = plVar7 + 3;
    _bzero(plVar1,0x800);
    while( true ) {
      if (plVar7 != (long *)0x0) {
        plVar11 = plVar7 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar11 = (long *)(lVar14 + 0x7f0);
      lStack_70 = 0;
      plStack_68 = (long *)0x0;
      plVar8 = plVar11;
      __ZNSt3__112__get_sp_mutEPKv(plVar11);
      __ZNSt3__18__sp_mut4lockEv();
      plVar3 = plStack_78;
      plVar10 = *(long **)(lVar14 + 0x7f8);
      if (plVar10 == plStack_78) {
        lStack_70 = *plVar11;
        *plVar11 = 0;
        *(undefined8 *)(lVar14 + 0x7f8) = 0;
        FUN_1096c7b4c(plVar11,plVar1,plVar7);
        plVar11 = plVar10;
      }
      else {
        plStack_78 = (long *)0x0;
        lStack_70 = lStack_80;
        FUN_1096c7b4c(&lStack_80,*plVar11,plVar10);
        plVar11 = plVar3;
      }
      plStack_68 = plVar11;
      __ZNSt3__18__sp_mut6unlockEv(plVar8);
      if (plVar11 != (long *)0x0) {
        plVar8 = plVar11 + 1;
        do {
          lVar14 = *plVar8;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      if (plVar7 != (long *)0x0) {
        plVar11 = plVar7 + 1;
        do {
          lVar14 = *plVar11;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar11 = plStack_78;
      lVar14 = lStack_80;
      if (plVar10 == plVar3) {
        plVar11 = plVar7 + 0x100;
        do {
          iVar4 = (int)*plVar11;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *(int *)plVar11 = iVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 < 0x7e) {
          plVar1[(long)iVar4 * 2] = param_2;
          (plVar1 + (long)iVar4 * 2)[1] = param_3;
          piVar2 = (int *)((long)plVar7 + 0x7fc);
          do {
            while (*piVar2 != iVar4) {
              ClearExclusiveLocal();
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar4 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *(long **)(lVar13 + 8) = plVar1;
        goto LAB_1096c74a0;
      }
      piVar2 = (int *)(lStack_80 + 0x7e8);
      do {
        iVar4 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 < 0x7e) break;
      lStack_80 = 0;
      plStack_78 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        plVar3 = plVar11 + 1;
        do {
          lVar9 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
    }
    plVar1 = (long *)(lStack_80 + (long)iVar4 * 0x10);
    *plVar1 = param_2;
    plVar1[1] = param_3;
    piVar2 = (int *)(lStack_80 + 0x7e4);
    do {
      while (*piVar2 != iVar4) {
        ClearExclusiveLocal();
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_1096c74a0:
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar14 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar7 = plStack_78 + 1;
      do {
        lVar14 = *plVar7;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  __ZNSt3__118condition_variable10notify_oneEv(*(long *)(param_1 + 8) + 0x58);
  __ZNSt3__15mutex6unlockEv(lVar12 + 0x18);
  return;
}



/* Entry: 1096c7580; end: 1096c75db;  */

void FUN_1096c7580(undefined8 *param_1,undefined4 *param_2)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096a7580(param_2,0x113735c98);
  FUN_1096c6f08(&ppuStack_30,*param_2);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096c75dc; end: 1096c760f;  */

undefined8 * FUN_1096c75dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096c7610; end: 1096c7643;  */

void FUN_1096c7610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096c7644; end: 1096c7657;  */

void FUN_1096c7644(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puStack_68;
  
  puVar5 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar5 >> 0x3d == 0) {
    __Znwm((long)puVar5 << 3);
    return;
  }
  func_0x000104c4f740();
  uVar6 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar7 = (undefined8 *)0x20;
  __Znwm();
  uVar8 = *param_2;
  *puVar7 = uVar6;
  puVar7[1] = uVar8;
  lVar9 = param_3[1];
  uVar6 = *param_3;
  puVar7[3] = param_3[1];
  puVar7[2] = uVar6;
  if (lVar9 != 0) {
    plVar1 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_68 = puVar7;
  _pthread_create(puVar5,0,FUN_1096c7774);
  if ((int)puVar5 == 0) {
    puStack_68 = (undefined8 *)0x0;
    FUN_1096c7aa4(&puStack_68);
    return;
  }
  __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1096c7740);
  (*pcVar4)();
}



/* Entry: 1096c7658; end: 1096c768b;  */

void FUN_1096c7658(ulong param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puStack_58;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  uVar5 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar6 = (undefined8 *)0x20;
  __Znwm();
  uVar7 = *param_2;
  *puVar6 = uVar5;
  puVar6[1] = uVar7;
  lVar8 = param_3[1];
  uVar5 = *param_3;
  puVar6[3] = param_3[1];
  puVar6[2] = uVar5;
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
  puStack_58 = puVar6;
  _pthread_create(param_1,0,FUN_1096c7774);
  if ((int)param_1 == 0) {
    puStack_58 = (undefined8 *)0x0;
    FUN_1096c7aa4(&puStack_58);
    return;
  }
  __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1096c7740);
  (*pcVar4)();
}



/* Entry: 1096c768c; end: 1096c7773;  */

void FUN_1096c768c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puStack_38;
  
  uVar5 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar6 = (undefined8 *)0x20;
  __Znwm();
  uVar7 = *param_2;
  *puVar6 = uVar5;
  puVar6[1] = uVar7;
  lVar8 = param_3[1];
  uVar5 = *param_3;
  puVar6[3] = param_3[1];
  puVar6[2] = uVar5;
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
  puStack_38 = puVar6;
  _pthread_create(param_1,0,FUN_1096c7774);
  if ((int)param_1 == 0) {
    puStack_38 = (undefined8 *)0x0;
    FUN_1096c7aa4(&puStack_38);
    return;
  }
  __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1096c7740);
  (*pcVar4)();
}



/* Entry: 1096c7774; end: 1096c7aa3;  */

/* WARNING: Removing unreachable block (ram,0x0001096c77f4) */
/* WARNING: Removing unreachable block (ram,0x0001096c78c4) */

undefined8 FUN_1096c7774(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 unaff_x20;
  code *pcVar11;
  long *plVar12;
  undefined8 *puStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  byte bStack_58;
  long lStack_50;
  long *plStack_48;
  
  puVar7 = param_1;
  puStack_78 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  uVar8 = *param_1;
  *param_1 = 0;
  _pthread_setspecific(*puVar7,uVar8);
  plStack_68 = (long *)param_1[3];
  lStack_70 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
LAB_1096c77b8:
  piVar1 = (int *)(lStack_70 + 0x7e0);
  iVar6 = *piVar1;
  while (iVar6 < *(int *)(lStack_70 + 0x7e4)) {
    while (*piVar1 == iVar6) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        puVar7 = (undefined8 *)(lStack_70 + (long)iVar6 * 0x10);
        (*(code *)*puVar7)(puVar7[1]);
        goto LAB_1096c77b8;
      }
    }
    ClearExclusiveLocal();
    iVar6 = *piVar1;
  }
  if (0x7d < *(int *)(lStack_70 + 0x7e0)) goto code_r0x0001096c7820;
  goto LAB_1096c7864;
code_r0x0001096c7820:
  FUN_1096c7aec(&lStack_50,lStack_70 + 0x7f0);
  plVar12 = plStack_48;
  lVar10 = lStack_50;
  if (lStack_50 != 0) {
    FUN_1096c7b4c(&lStack_70,lStack_50,plStack_48);
  }
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (lVar10 == 0) {
LAB_1096c7864:
    *(undefined1 *)(param_1[1] + 8) = 0;
    lStack_60 = param_1[1] + 0x10;
    bStack_58 = 1;
    __ZNSt3__15mutex4lockEv();
    plVar12 = (long *)param_1[1];
LAB_1096c7888:
    do {
      while( true ) {
        piVar1 = (int *)(lStack_70 + 0x7e0);
        iVar6 = *piVar1;
        while (iVar6 < *(int *)(lStack_70 + 0x7e4)) {
          while (*piVar1 == iVar6) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar6 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              puVar7 = (undefined8 *)(lStack_70 + (long)iVar6 * 0x10);
              pcVar11 = (code *)*puVar7;
              unaff_x20 = puVar7[1];
              goto LAB_1096c79a4;
            }
          }
          ClearExclusiveLocal();
          iVar6 = *piVar1;
        }
        if (*(int *)(lStack_70 + 0x7e0) < 0x7e) goto LAB_1096c7934;
        FUN_1096c7aec(&lStack_50,lStack_70 + 0x7f0);
        plVar2 = plStack_48;
        lVar10 = lStack_50;
        if (lStack_50 != 0) {
          FUN_1096c7b4c(&lStack_70,lStack_50,plStack_48);
        }
        if (plVar2 == (long *)0x0) break;
        plVar3 = plVar2 + 1;
        do {
          lVar9 = *plVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 != 0) break;
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        if (lVar10 == 0) goto LAB_1096c7934;
      }
    } while (lVar10 != 0);
LAB_1096c7934:
    if (*plVar12 != 0) {
      __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(plVar12 + 10,&lStack_60);
      goto LAB_1096c7888;
    }
    pcVar11 = (code *)0x0;
LAB_1096c79a4:
    if ((bStack_58 & 1) == 0) {
      __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f406df1);
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1096c7a54);
      (*pcVar11)();
    }
    __ZNSt3__15mutex6unlockEv(lStack_60);
    plVar12 = plStack_68;
    bStack_58 = '\0';
    if (pcVar11 == (code *)0x0) {
      if (plStack_68 != (long *)0x0) {
        plVar2 = plStack_68 + 1;
        do {
          lVar10 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      FUN_1096c7aa4(&puStack_78);
      return 0;
    }
    (*pcVar11)(unaff_x20);
    if (bStack_58 == '\x01') {
      __ZNSt3__15mutex6unlockEv(lStack_60);
    }
  }
  goto LAB_1096c77b8;
}



/* Entry: 1096c7aa4; end: 1096c7aeb;  */

long * FUN_1096c7aa4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001096c7bc0(lVar1 + 0x10);
    FUN_1094a35b0(lVar1,0);
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1096c7aec; end: 1096c7b4b;  */

void FUN_1096c7aec(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 1096c7b4c; end: 1096c7c17;  */

undefined8 * FUN_1096c7b4c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1096c7c18; end: 1096c7c1f;  */

void FUN_1096c7c18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096c7c20; end: 1096c7c4f;  */

void FUN_1096c7c20(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096c7c50; end: 1096c7c93;  */

void FUN_1096c7c50(undefined8 param_1,undefined8 param_2,byte *param_3)

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



/* Entry: 1096c7c94; end: 1096c7cbf;  */

void FUN_1096c7c94(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b00e20;
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



/* Entry: 1096c7cc0; end: 1096c7dfb;  */

void FUN_1096c7cc0(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  int iVar3;
  undefined8 *extraout_x8;
  undefined8 uVar4;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined8 *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 *puStack_48;
  long lStack_28;
  
  pppuVar2 = &ppuStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar3 = 0x10b00e20;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    uStack_50 = 0;
    ppuStack_60 = &PTR_DAT_110b06d68;
    uStack_58 = 0;
    puVar1 = (undefined1 *)0x1;
    _malloc();
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puStack_48 = puVar1;
    func_0x000107c2accc();
    func_0x000107c2ace0();
    if (puStack_48 != (undefined1 *)0x0) {
      _free();
    }
    func_0x000107c2accc();
    iVar3 = 0x10b00e20;
    func_0x00010969659c(&ppuStack_60);
    uVar4 = param_1[1];
    param_1[1] = uStack_58;
    *param_1 = ppuStack_60;
    ppuStack_60 = &PTR_FUN_110b01d60;
    uStack_58 = uVar4;
    func_0x000107c2acd4();
    param_2 = (undefined1 *)pppuVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  puVar1 = param_2;
  __Unwind_Resume(param_2);
  pcStack_68 = FUN_1096c7dfc;
  puStack_80 = param_2;
  puStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  __ZNSt3__16thread20hardware_concurrencyEv();
  FUN_1096c6f08(&ppuStack_90,puVar1);
  extraout_x8[1] = uStack_88;
  *extraout_x8 = ppuStack_90;
  ppuStack_90 = &PTR_FUN_110b01d60;
  uStack_88 = 0;
  func_0x000107c2acd4(&ppuStack_90);
  return;
}



/* Entry: 1096c7dfc; end: 1096c7e4f;  */

void FUN_1096c7dfc(undefined8 *param_1,undefined8 param_2)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  __ZNSt3__16thread20hardware_concurrencyEv();
  FUN_1096c6f08(&ppuStack_30,param_2);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096c7e50; end: 1096c7e7f;  */

bool FUN_1096c7e50(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b00e20,0);
  return param_1 != 0;
}



/* Entry: 1096c7e80; end: 1096c7ea7;  */

undefined8 * FUN_1096c7e80(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plStack_a0;
  long *plStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  puVar8 = param_1;
  __ZNSt3__16thread20hardware_concurrencyEv();
  *param_1 = &PTR_FUN_110b01d60;
  puVar5 = (undefined8 *)0x28;
  _malloc();
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 3) = 1;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    puVar5 = puVar5 + 4;
    *puVar5 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00e00;
  param_1[1] = puVar5;
  lVar9 = 0xa0;
  puVar5 = param_1;
  func_0x000107c2acd0();
  puVar5[2] = 0;
  puVar5[3] = 0x32aaaba7;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0x3cb0b1bb;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0x13] = 0;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110b06e30;
  puVar5[1] = 0;
  __ZNSt3__16thread20hardware_concurrencyEv();
  uVar1 = (uint)puVar5;
  if ((int)(uint)puVar8 <= (int)(uint)puVar5) {
    uVar1 = (uint)puVar8;
  }
  if ((int)uVar1 < 2) {
    uVar1 = 1;
  }
  uVar14 = (ulong)uVar1;
  lVar11 = param_1[1];
  plVar15 = (long *)(lVar11 + 0x88);
  lVar16 = *plVar15;
  if ((ulong)(*(long *)(lVar11 + 0x98) - lVar16 >> 3) < uVar14) {
    lVar11 = *(long *)(lVar11 + 0x90);
    uVar6 = uVar14;
    plStack_68 = plVar15;
    FUN_1096c7658();
    lStack_80 = uVar6 + (lVar11 - lVar16);
    lStack_70 = uVar6 + lVar9 * 8;
    uStack_88 = uVar6;
    lStack_78 = lStack_80;
    func_0x000107313d70(plVar15,&uStack_88);
    func_0x000107313f64(&uStack_88);
    lVar11 = param_1[1];
  }
  uStack_90 = lVar11 + 8;
  plStack_98 = (long *)0x0;
  *(undefined1 *)(lVar11 + 0x10) = 0;
  lVar9 = param_1[1];
  plStack_a0 = (long *)0x0;
  plVar7 = (long *)0x818;
  __Znwm();
  plVar17 = plVar7 + 1;
  *plVar17 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110b06e98;
  plVar15 = plVar7 + 3;
  puVar10 = (ulong *)0x800;
  _bzero(plVar15);
  *(long **)(lVar9 + 8) = plVar15;
  plStack_a0 = plVar15;
  plStack_98 = plVar7;
  do {
    lVar9 = param_1[1];
    uVar6 = *(ulong *)(lVar9 + 0x90);
    if (uVar6 < *(ulong *)(lVar9 + 0x98)) {
      puVar10 = &uStack_90;
      FUN_1096c768c(uVar6,puVar10,&plStack_a0);
      lVar11 = uVar6 + 8;
      *(long *)(lVar9 + 0x90) = lVar11;
    }
    else {
      plVar15 = (long *)(lVar9 + 0x88);
      lVar11 = uVar6 - *plVar15;
      uVar6 = (lVar11 >> 3) + 1;
      if (uVar6 >> 0x3d != 0) {
        FUN_1096c7644();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1096c7198);
        (*pcVar4)();
      }
      uVar12 = *(ulong *)(lVar9 + 0x98) - *plVar15;
      uVar13 = (long)uVar12 >> 2;
      if (uVar13 <= uVar6) {
        uVar13 = uVar6;
      }
      if (0x7ffffffffffffff7 < uVar12) {
        uVar13 = 0x1fffffffffffffff;
      }
      plStack_68 = plVar15;
      if (uVar13 == 0) {
        puVar10 = (ulong *)0x0;
      }
      else {
        FUN_1096c7658();
      }
      lStack_80 = uVar13 + lVar11;
      lStack_70 = uVar13 + (long)puVar10 * 8;
      uStack_88 = uVar13;
      lStack_78 = lStack_80;
      FUN_1096c768c(lStack_80,&uStack_90,&plStack_a0);
      lStack_78 = lStack_78 + 8;
      puVar10 = &uStack_88;
      func_0x000107313d70(plVar15);
      lVar11 = *(long *)(lVar9 + 0x90);
      func_0x000107313f64(&uStack_88);
    }
    *(long *)(lVar9 + 0x90) = lVar11;
    uVar1 = (int)uVar14 - 1;
    uVar14 = (ulong)uVar1;
  } while (uVar1 != 0);
  do {
    lVar9 = *plVar17;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *plVar17 = lVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  return param_1;
}



/* Entry: 1096c7ea8; end: 1096c7f03;  */

void FUN_1096c7ea8(undefined8 *param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_110b00e00;
  return;
}



/* Entry: 1096c7f04; end: 1096c7f4b;  */

void FUN_1096c7f04(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096c7f4c; end: 1096c7fbb;  */

undefined8 * FUN_1096c7f4c(undefined8 *param_1)

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



/* Entry: 1096c7fbc; end: 1096c8063;  */

void FUN_1096c7fbc(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b00e20;
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



/* Entry: 1096c8064; end: 1096c811f;  */

long * FUN_1096c8064(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  do {
    lVar4 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 != 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 2);
    __ZNSt3__118condition_variable10notify_allEv(param_1 + 10);
    __ZNSt3__15mutex6unlockEv(param_1 + 2);
    lVar5 = param_1[0x11];
    for (lVar4 = param_1[0x10]; lVar4 != lVar5; lVar4 = lVar4 + 8) {
      __ZNSt3__16thread4joinEv(lVar4);
    }
  }
  lVar4 = param_1[0x10];
  if (lVar4 != 0) {
    lVar3 = param_1[0x11];
    lVar5 = lVar4;
    if (lVar3 != lVar4) {
      do {
        lVar3 = lVar3 + -8;
        __ZNSt3__16threadD1Ev();
      } while (lVar3 != lVar4);
      lVar5 = param_1[0x10];
    }
    param_1[0x11] = lVar4;
    __ZdlPv(lVar5);
  }
  __ZNSt3__118condition_variableD1Ev(param_1 + 10);
  __ZNSt3__15mutexD1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 1096c8120; end: 1096c812f;  */

void FUN_1096c8120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b06e98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1096c8130; end: 1096c814f;  */

void FUN_1096c8130(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b06e98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096c8150; end: 1096c817b;  */

long FUN_1096c8150(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x810);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 0x808;
}



/* Entry: 1096c817c; end: 1096c81bf;  */

bool FUN_1096c817c(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c051);
  return (int)plVar1 == 1;
}



/* Entry: 1096c81c0; end: 1096c81df;  */

undefined8 FUN_1096c81c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096c81e0; end: 1096c8237;  */

void FUN_1096c81e0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b06c78;
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



/* Entry: 1096c8238; end: 1096c82af;  */

void FUN_1096c8238(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b06c48;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096c82b0; end: 1096c82df;  */

bool FUN_1096c82b0(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b06c78,0);
  return param_1 != 0;
}



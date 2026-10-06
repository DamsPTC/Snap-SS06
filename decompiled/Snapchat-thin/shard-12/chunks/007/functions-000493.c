/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096d3480; end: 1096d34d7;  */

void FUN_1096d3480(undefined8 *param_1,long param_2)

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



/* Entry: 1096d34d8; end: 1096d34df;  */

void FUN_1096d34d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096d34e0; end: 1096d3517;  */

void FUN_1096d34e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096d3518; end: 1096d3573;  */

void FUN_1096d3518(undefined8 param_1,undefined8 param_2,byte *param_3)

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



/* Entry: 1096d3574; end: 1096d359f;  */

void FUN_1096d3574(undefined8 *param_1,long param_2)

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



/* Entry: 1096d35a0; end: 1096d3687;  */

undefined8 * FUN_1096d35a0(undefined8 *param_1,undefined8 *param_2)

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
  iVar3 = 0x10b01758;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == param_2[1]) {
    func_0x000107c2acc4("",0);
    func_0x000107c2accc();
    iVar3 = 0x10b01758;
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
  *param_2 = &PTR_FUN_110b01738;
  param_2[1] = puVar1;
  puVar1 = param_2;
  func_0x000100033474(param_2,0x48);
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 8) = 0x3f800000;
  *puVar1 = &PTR_FUN_110b01848;
  return param_2;
}



/* Entry: 1096d3688; end: 1096d36f7;  */

undefined8 * FUN_1096d3688(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b01738;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x48);
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 8) = 0x3f800000;
  *puVar1 = &PTR_FUN_110b01848;
  return param_1;
}



/* Entry: 1096d36f8; end: 1096d373b;  */

bool FUN_1096d36f8(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c051);
  return (int)plVar1 == 1;
}



/* Entry: 1096d373c; end: 1096d3767;  */

undefined8 FUN_1096d373c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096d3768; end: 1096d37bf;  */

void FUN_1096d3768(undefined8 *param_1,long param_2)

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



/* Entry: 1096d37c0; end: 1096d37d3;  */

void FUN_1096d37c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096d37d4; end: 1096d3803;  */

void FUN_1096d37d4(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096d3804; end: 1096d383f;  */

void FUN_1096d3804(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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



/* Entry: 1096d3840; end: 1096d389f;  */

undefined8 FUN_1096d3840(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

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



/* Entry: 1096d38a0; end: 1096d38cb;  */

undefined8 FUN_1096d38a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096d38cc; end: 1096d38f7;  */

void FUN_1096d38cc(undefined8 *param_1,long param_2)

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



/* Entry: 1096d38f8; end: 1096d39df;  */

undefined1 * FUN_1096d38f8(undefined8 *param_1,undefined1 *param_2)

{
  undefined ***pppuVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar3 = 0x10b00b10;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    func_0x000107c2acbc("",0);
    func_0x000107c2accc();
    iVar3 = 0x10b00b10;
    func_0x00010969659c(&ppuStack_50);
    uVar6 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar6;
    func_0x000107c2acd4();
    param_2 = (undefined1 *)pppuVar1;
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
  func_0x000107c2ace8(&ppuStack_98);
  if (*(char *)((long)puStack_90 + 0x1f) < '\0') {
    *(undefined8 *)((long)puStack_90 + 0x10) = 7;
    puVar4 = *(undefined4 **)((long)puStack_90 + 8);
  }
  else {
    puVar4 = (undefined4 *)((long)puStack_90 + 8);
    *(undefined1 *)((long)puStack_90 + 0x1f) = 7;
  }
  *(undefined4 *)((long)puVar4 + 3) = 0x656c6261;
  *puVar4 = 0x61736944;
  *(undefined1 *)((long)puVar4 + 7) = 0;
  puVar2 = param_2;
  FUN_109697c4c(param_2,&ppuStack_98);
  ppuStack_98 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_98);
  if ((int)puVar2 != 0) {
    func_0x000107c2ace8(&ppuStack_98);
    if (*(char *)((long)puStack_90 + 0x1f) < '\0') {
      *(undefined8 *)((long)puStack_90 + 0x10) = 6;
      puVar4 = *(undefined4 **)((long)puStack_90 + 8);
    }
    else {
      puVar4 = (undefined4 *)((long)puStack_90 + 8);
      *(undefined1 *)((long)puStack_90 + 0x1f) = 6;
    }
    *(undefined2 *)(puVar4 + 1) = 0x656c;
    *puVar4 = 0x706d6953;
    *(undefined1 *)((long)puVar4 + 6) = 0;
    puVar2 = param_2;
    FUN_109697c4c(param_2,&ppuStack_98);
    ppuStack_98 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_98);
    if ((int)puVar2 == 0) {
      return (undefined1 *)0x1;
    }
    func_0x000107c2ace8(&ppuStack_98);
    if (*(char *)((long)puStack_90 + 0x1f) < '\0') {
      *(undefined8 *)((long)puStack_90 + 0x10) = 10;
      puVar5 = *(undefined8 **)((long)puStack_90 + 8);
    }
    else {
      puVar5 = (undefined8 *)((long)puStack_90 + 8);
      *(undefined1 *)((long)puStack_90 + 0x1f) = 10;
    }
    *(undefined2 *)(puVar5 + 1) = 0x6c65;
    *puVar5 = 0x6e6e616843726550;
    *(undefined1 *)((long)puVar5 + 10) = 0;
    FUN_109697c4c(param_2,&ppuStack_98);
    ppuStack_98 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_98);
    if ((int)param_2 == 0) {
      return (undefined1 *)0x2;
    }
    ppuStack_98 = (undefined **)&UNK_10f57dbf4;
    puStack_90 = &UNK_10f57dbfa;
    uStack_88 = 0x27;
    FUN_1096993dc(&ppuStack_98,&UNK_10f57dca7);
  }
  return (undefined1 *)0x0;
}



/* Entry: 1096d39e0; end: 1096d3bbb;  */

undefined8 FUN_1096d39e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined **ppuStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c2ace8(&ppuStack_48);
  if (*(char *)((long)puStack_40 + 0x1f) < '\0') {
    *(undefined8 *)((long)puStack_40 + 0x10) = 7;
    puVar2 = *(undefined4 **)((long)puStack_40 + 8);
  }
  else {
    puVar2 = (undefined4 *)((long)puStack_40 + 8);
    *(undefined1 *)((long)puStack_40 + 0x1f) = 7;
  }
  *(undefined4 *)((long)puVar2 + 3) = 0x656c6261;
  *puVar2 = 0x61736944;
  *(undefined1 *)((long)puVar2 + 7) = 0;
  uVar1 = param_1;
  FUN_109697c4c(param_1,&ppuStack_48);
  ppuStack_48 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_48);
  if ((int)uVar1 != 0) {
    func_0x000107c2ace8(&ppuStack_48);
    if (*(char *)((long)puStack_40 + 0x1f) < '\0') {
      *(undefined8 *)((long)puStack_40 + 0x10) = 6;
      puVar2 = *(undefined4 **)((long)puStack_40 + 8);
    }
    else {
      puVar2 = (undefined4 *)((long)puStack_40 + 8);
      *(undefined1 *)((long)puStack_40 + 0x1f) = 6;
    }
    *(undefined2 *)(puVar2 + 1) = 0x656c;
    *puVar2 = 0x706d6953;
    *(undefined1 *)((long)puVar2 + 6) = 0;
    uVar1 = param_1;
    FUN_109697c4c(param_1,&ppuStack_48);
    ppuStack_48 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_48);
    if ((int)uVar1 == 0) {
      return 1;
    }
    func_0x000107c2ace8(&ppuStack_48);
    if (*(char *)((long)puStack_40 + 0x1f) < '\0') {
      *(undefined8 *)((long)puStack_40 + 0x10) = 10;
      puVar3 = *(undefined8 **)((long)puStack_40 + 8);
    }
    else {
      puVar3 = (undefined8 *)((long)puStack_40 + 8);
      *(undefined1 *)((long)puStack_40 + 0x1f) = 10;
    }
    *(undefined2 *)(puVar3 + 1) = 0x6c65;
    *puVar3 = 0x6e6e616843726550;
    *(undefined1 *)((long)puVar3 + 10) = 0;
    FUN_109697c4c(param_1,&ppuStack_48);
    ppuStack_48 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_48);
    if ((int)param_1 == 0) {
      return 2;
    }
    ppuStack_48 = (undefined **)&UNK_10f57dbf4;
    puStack_40 = &UNK_10f57dbfa;
    uStack_38 = 0x27;
    FUN_1096993dc(&ppuStack_48,&UNK_10f57dca7);
  }
  return 0;
}



/* Entry: 1096d3bbc; end: 1096d3d3f;  */

void FUN_1096d3bbc(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 2) {
    func_0x000107c2ace8(param_1);
    lVar3 = *(long *)(param_1 + 8);
    if (*(char *)(lVar3 + 0x1f) < '\0') {
      *(undefined8 *)(lVar3 + 0x10) = 10;
      puVar1 = *(undefined8 **)(lVar3 + 8);
    }
    else {
      puVar1 = (undefined8 *)(lVar3 + 8);
      *(undefined1 *)(lVar3 + 0x1f) = 10;
    }
    *(undefined2 *)(puVar1 + 1) = 0x6c65;
    *puVar1 = 0x6e6e616843726550;
    *(undefined1 *)((long)puVar1 + 10) = 0;
  }
  else if (param_2 == 1) {
    func_0x000107c2ace8(param_1);
    lVar3 = *(long *)(param_1 + 8);
    if (*(char *)(lVar3 + 0x1f) < '\0') {
      *(undefined8 *)(lVar3 + 0x10) = 6;
      puVar2 = *(undefined4 **)(lVar3 + 8);
    }
    else {
      puVar2 = (undefined4 *)(lVar3 + 8);
      *(undefined1 *)(lVar3 + 0x1f) = 6;
    }
    *(undefined2 *)(puVar2 + 1) = 0x656c;
    *puVar2 = 0x706d6953;
    *(undefined1 *)((long)puVar2 + 6) = 0;
  }
  else if (param_2 == 0) {
    func_0x000107c2ace8(param_1);
    lVar3 = *(long *)(param_1 + 8);
    if (*(char *)(lVar3 + 0x1f) < '\0') {
      *(undefined8 *)(lVar3 + 0x10) = 7;
      puVar2 = *(undefined4 **)(lVar3 + 8);
    }
    else {
      puVar2 = (undefined4 *)(lVar3 + 8);
      *(undefined1 *)(lVar3 + 0x1f) = 7;
    }
    *(undefined4 *)((long)puVar2 + 3) = 0x656c6261;
    *puVar2 = 0x61736944;
    *(undefined1 *)((long)puVar2 + 7) = 0;
  }
  else {
    puStack_38 = &UNK_10f57dbf4;
    puStack_30 = &UNK_10f57dbfa;
    uStack_28 = 0x34;
    FUN_1096993dc(&puStack_38,&UNK_10f57dcbf);
    func_0x000107c2ace8(param_1);
    lVar3 = *(long *)(param_1 + 8);
    if (*(char *)(lVar3 + 0x1f) < '\0') {
      *(undefined8 *)(lVar3 + 0x10) = 0;
      puVar4 = *(undefined1 **)(lVar3 + 8);
    }
    else {
      puVar4 = (undefined1 *)(lVar3 + 8);
      *(undefined1 *)(lVar3 + 0x1f) = 0;
    }
    *puVar4 = 0;
  }
  return;
}



/* Entry: 1096d3d40; end: 1096d3e0b;  */

undefined8 FUN_1096d3d40(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined **ppuStack_40;
  long lStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  uVar3 = SUB84(&ppuStack_40,0);
  func_0x000107c2ace8(&ppuStack_30);
  FUN_109697d7c(param_1,&ppuStack_30);
  lStack_38 = lStack_28;
  if (lStack_28 != 0) {
    piVar4 = (int *)(lStack_28 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_40 = &PTR_FUN_110b00af0;
  FUN_1096d39e0();
  *param_2 = uVar3;
  ppuStack_40 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  ppuStack_30 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_30);
  return param_1;
}



/* Entry: 1096d3e0c; end: 1096d423b;  */

void FUN_1096d3e0c(undefined8 param_1,float param_2,float param_3,float param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte bVar2;
  undefined *puVar3;
  short *psVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  byte *pbVar13;
  undefined **ppuVar14;
  long *plVar15;
  undefined **ppuVar16;
  long *plVar17;
  float *pfVar18;
  float *pfVar19;
  uint uVar20;
  int *piVar21;
  undefined8 *extraout_x8;
  undefined4 *puVar22;
  long lVar23;
  undefined8 *extraout_x8_00;
  short *psVar24;
  uint uVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  byte *pbVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 *puVar33;
  long *plVar34;
  byte *pbVar35;
  uint uVar36;
  float fVar37;
  undefined **ppuVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  undefined *puStack_1c0;
  undefined *puStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float *pfStack_198;
  float *pfStack_190;
  undefined8 uStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  float fStack_160;
  undefined8 uStack_15c;
  float fStack_154;
  undefined8 uStack_150;
  float afStack_148 [4];
  long lStack_138;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  undefined **ppuStack_98;
  long lStack_90;
  double dStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  short *psVar25;
  
  puVar33 = &uStack_b0;
  ppuVar16 = (undefined **)&uStack_b0;
  puVar10 = &uStack_b0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2ace8(&uStack_b0);
  if (*(char *)(uStack_a8 + 0x1f) < '\0') {
    *(undefined8 *)(uStack_a8 + 0x10) = 7;
    puVar22 = *(undefined4 **)(uStack_a8 + 8);
  }
  else {
    puVar22 = (undefined4 *)(uStack_a8 + 8);
    *(undefined1 *)(uStack_a8 + 0x1f) = 7;
  }
  *(undefined4 *)((long)puVar22 + 3) = 0x6e6f6973;
  *puVar22 = 0x73726556;
  *(undefined1 *)((long)puVar22 + 7) = 0;
  FUN_1096952bc(param_6,&uStack_b0,param_5 + 0x48);
  uStack_b0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&uStack_b0);
  FUN_109697928(&uStack_b0,&UNK_10f57dcd7,0x18);
  FUN_1096952bc(param_6,&uStack_b0,param_5 + 0x50);
  uStack_b0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&uStack_b0);
  FUN_109697928(&ppuStack_80,&UNK_10f57dcf0,0x1c);
  uStack_b0 = &PTR_FUN_110b01d60;
  uStack_a8 = 0;
  uVar39 = param_6;
  func_0x00010969564c(param_6,&ppuStack_80,&uStack_b0);
  if ((int)uVar39 != 0) {
    param_8 = 0;
    ___dynamic_cast(&uStack_b0,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10);
    if (puVar33 == (undefined8 *)0x0) {
      func_0x000107c2acdc();
    }
    lVar23 = *(long *)((long)puVar33 + 8);
    if (lVar23 != 0) {
      piVar21 = (int *)(lVar23 + -8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar7) {
          *piVar21 = *piVar21 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    lStack_68 = *(long *)(param_5 + 0x60);
    param_2 = (float)*(undefined8 *)(param_5 + 0x58);
    *(long *)(param_5 + 0x60) = lVar23;
    *(undefined ***)(param_5 + 0x58) = &PTR_FUN_110b00af0;
    ppuStack_70 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_70);
  }
  uStack_b0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&uStack_b0);
  ppuStack_80 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_80);
  func_0x000107c2ace8(&uStack_b0);
  if (*(char *)(uStack_a8 + 0x1f) < '\0') {
    *(undefined8 *)(uStack_a8 + 0x10) = 0xb;
    puVar33 = *(undefined8 **)(uStack_a8 + 8);
  }
  else {
    puVar33 = (undefined8 *)(uStack_a8 + 8);
    *(undefined1 *)(uStack_a8 + 0x1f) = 0xb;
  }
  *(undefined4 *)((long)puVar33 + 7) = 0x726f7463;
  *puVar33 = 0x636146656c616353;
  *(undefined1 *)((long)puVar33 + 0xb) = 0;
  FUN_109695448(param_6,&uStack_b0,&dStack_88);
  uStack_b0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&uStack_b0);
  ppuVar38 = (undefined **)(ulong)(uint)(float)dStack_88;
  *(float *)(param_5 + 0x4c) = (float)dStack_88;
  func_0x000107c2ace8(&ppuStack_80);
  func_0x000107c2ace8(&ppuStack_98);
  if (*(char *)(lStack_90 + 0x1f) < '\0') {
    *(undefined8 *)(lStack_90 + 0x10) = 9;
    puVar33 = *(undefined8 **)(lStack_90 + 8);
  }
  else {
    puVar33 = (undefined8 *)(lStack_90 + 8);
    *(undefined1 *)(lStack_90 + 0x1f) = 9;
  }
  *(undefined2 *)(puVar33 + 1) = 0x6d;
  *puVar33 = 0x726f66736e617254;
  uStack_b0 = &PTR_FUN_110b01d60;
  uStack_a8 = 0;
  ppuVar14 = (undefined **)&ppuStack_98;
  func_0x00010969564c();
  if ((int)param_6 != 0) {
    ppuVar14 = &PTR_DAT_110b01d40;
    ppuVar16 = &PTR_DAT_110b00b10;
    param_8 = 0;
    ___dynamic_cast();
    if (puVar10 == (undefined8 *)0x0) {
      func_0x000107c2acdc();
    }
    param_2 = ppuStack_80._0_4_;
    lVar23 = *(long *)((long)puVar10 + 8);
    if (lVar23 != 0) {
      piVar21 = (int *)(lVar23 + -8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar7) {
          *piVar21 = *piVar21 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    ppuVar38 = &PTR_FUN_110b00af0;
    ppuStack_80 = &PTR_FUN_110b00af0;
    lStack_68 = lStack_78;
    ppuStack_70 = &PTR_FUN_110b01d60;
    lStack_78 = lVar23;
    func_0x000107c2acd4(&ppuStack_70);
  }
  uStack_b0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&uStack_b0);
  ppuStack_98 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_98);
  fVar47 = SUB84(ppuVar38,0);
  if (*(char *)(lStack_78 + 0x1f) < '\0') {
    if (*(int *)(lStack_78 + 0x10) != 0) goto LAB_1096d4108;
  }
  else if (*(char *)(lStack_78 + 0x1f) != '\0') {
LAB_1096d4108:
    FUN_1096e8ffc(&ppuStack_80);
    lVar23 = 0;
    fVar43 = param_2 * param_4;
    fVar41 = param_4 * fVar47;
    param_4 = 1.0;
    uStack_b0 = (undefined **)CONCAT44(-fVar41 + param_2 * param_3,-(param_3 * fVar47) - fVar43);
    uStack_a8 = CONCAT44(-param_2,fVar47);
    param_3 = 1.0 / (param_2 * param_2 + fVar47 * fVar47);
    fStack_a0 = param_2;
    fStack_9c = fVar47;
    do {
      *(float *)((long)&uStack_b0 + lVar23) = param_3 * *(float *)((long)&uStack_b0 + lVar23);
      lVar23 = lVar23 + 4;
    } while (lVar23 != 0x18);
    *(long *)(param_5 + 0x70) = uStack_a8;
    *(undefined ***)(param_5 + 0x68) = uStack_b0;
    *(ulong *)(param_5 + 0x78) = CONCAT44(fStack_9c,fStack_a0);
    ppuVar38 = uStack_b0;
  }
  fVar47 = SUB84(ppuVar38,0);
  ppuStack_80 = &PTR_FUN_110b01d60;
  pppuVar11 = &ppuStack_80;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar14 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(&uStack_b0);
  }
  __Unwind_Resume();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = *(undefined **)((long)ppuVar14[1] + 0x18);
  uVar32 = (ulong)((long)*(undefined **)((long)ppuVar14[1] + 0x20) - (long)puVar3) >> 3 & 0xffffffff
  ;
  fVar43 = -0.5;
  if (uVar32 == 0) {
    fVar41 = 1.0;
    fVar44 = -0.5;
  }
  else {
    uVar31 = *(uint *)(pppuVar11 + 10);
    if (uVar31 != 0xffffffff) {
      uVar32 = (ulong)uVar31;
      fVar43 = -0.5;
      fVar41 = 1.0;
      fVar44 = -0.5;
      if (uVar31 == 0) goto LAB_1096d43f0;
    }
    func_0x000107c2ace8(&uStack_150);
    lVar23 = CONCAT44(afStack_148[1],afStack_148[0]);
    if (*(char *)(lVar23 + 0x1f) < '\0') {
      *(undefined8 *)(lVar23 + 0x10) = 7;
      puVar22 = *(undefined4 **)(lVar23 + 8);
    }
    else {
      puVar22 = (undefined4 *)(lVar23 + 8);
      *(undefined1 *)(lVar23 + 0x1f) = 7;
    }
    *(undefined4 *)((long)puVar22 + 3) = 0x38366465;
    *puVar22 = 0x65786946;
    *(undefined1 *)((long)puVar22 + 7) = 0;
    pppuVar12 = pppuVar11 + 0xb;
    FUN_109697c4c(pppuVar12,&uStack_150);
    if ((int)pppuVar12 == 0) {
      FUN_1096994f0(uVar32,puVar3);
    }
    else {
      uVar32 = -(uVar32 >> 0x1f) & 0xfffffff800000000 | uVar32 << 3;
      pfVar18 = (float *)(puVar3 + 4);
      fVar47 = 3.4028235e+38;
      param_4 = -3.4028235e+38;
      param_3 = param_4;
      param_2 = fVar47;
      do {
        fVar41 = pfVar18[-1];
        fVar43 = param_4;
        if ((!NAN(fVar41)) && (fVar44 = *pfVar18, !NAN(fVar44))) {
          fVar37 = fVar41;
          if (fVar47 <= fVar41) {
            fVar37 = fVar47;
          }
          fVar45 = fVar44;
          if (param_2 <= fVar44) {
            fVar45 = param_2;
          }
          if (fVar41 <= param_3) {
            fVar41 = param_3;
          }
          param_3 = fVar41;
          fVar43 = fVar44;
          fVar47 = fVar37;
          param_2 = fVar45;
          if (fVar44 <= param_4) {
            fVar43 = param_4;
          }
        }
        param_4 = fVar43;
        pfVar18 = pfVar18 + 2;
        uVar32 = uVar32 - 8;
      } while (uVar32 != 0);
      param_3 = param_3 - fVar47;
      param_4 = param_4 - param_2;
    }
    uStack_150 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&uStack_150);
    fVar43 = param_2 + (param_3 - param_4) * -0.5;
    fVar41 = param_3;
    fVar44 = fVar47;
    if (param_3 < param_4) {
      fVar43 = param_2;
      fVar41 = param_4;
      fVar44 = fVar47 + (param_4 - param_3) * -0.5;
    }
  }
LAB_1096d43f0:
  fVar47 = *(float *)((long)pppuVar11 + 0x4c);
  puStack_1a8 = *(undefined **)((long)ppuVar14[1] + 8);
  puStack_1c0 = *(undefined **)((long)ppuVar14[1] + 0x10);
  fStack_1a0 = -(float)((ulong)puStack_1a8 >> 0x20);
  fStack_19c = SUB84(puStack_1a8,0);
  if (*(int *)(pppuVar11 + 9) == 1) {
    lVar23 = 0;
    uStack_150 = (undefined **)puStack_1c0;
    afStack_148[0] = 0.0;
    afStack_148[1] = 0.0;
    afStack_148[2] = 0.0;
    afStack_148[3] = 0.0;
    do {
      lVar27 = 0;
      bVar7 = true;
      do {
        bVar8 = bVar7;
        lVar28 = 0;
        fVar37 = afStack_148[lVar23 * 2 + lVar27 + -2];
        bVar7 = true;
        do {
          bVar9 = bVar7;
          fVar37 = fVar37 + *(float *)((long)&puStack_1a8 + lVar27 * 4 + lVar28 * 8) *
                            *(float *)((long)pppuVar11 + lVar28 * 4 + lVar23 * 8 + 0x68);
          lVar28 = 1;
          bVar7 = false;
        } while (bVar9);
        afStack_148[lVar23 * 2 + lVar27 + -2] = fVar37;
        lVar27 = 1;
        bVar7 = false;
      } while (bVar8);
      lVar23 = lVar23 + 1;
    } while (lVar23 != 3);
    fStack_1a0 = afStack_148[2];
    fStack_19c = afStack_148[3];
    puStack_1a8 = (undefined *)CONCAT44(afStack_148[1],afStack_148[0]);
    puStack_1c0 = (undefined *)uStack_150;
  }
  fVar45 = fStack_19c;
  fVar37 = fStack_1a0;
  puVar3 = puStack_1a8;
  uStack_150 = (undefined **)0x0;
  afStack_148[0] = (float)(int)ppuVar16 + -1.0;
  afStack_148[3] = (float)(int)((ulong)ppuVar16 >> 0x20) + -1.0;
  afStack_148[1] = 0.0;
  afStack_148[2] = 0.0;
  uStack_178 = 0;
  uStack_170 = 0;
  pbStack_180 = (byte *)0x0;
  FUN_1096d5310(&pbStack_180,&uStack_150,&lStack_138);
  afStack_148[1] = fVar41 * (1.0 - fVar47) * 0.5;
  afStack_148[2] = fVar44 + afStack_148[1];
  afStack_148[1] = fVar43 + afStack_148[1];
  fVar41 = fVar41 * fVar47;
  uStack_150 = (undefined **)CONCAT44(afStack_148[1],afStack_148[2]);
  afStack_148[0] = fVar41 + afStack_148[2];
  afStack_148[3] = fVar41 + afStack_148[1];
  pfStack_190 = (float *)0x0;
  uStack_188 = 0;
  pfStack_198 = (float *)0x0;
  plVar17 = &lStack_138;
  FUN_1096d5310(&pfStack_198,&uStack_150);
  pbVar13 = pbStack_180;
  for (pfVar18 = pfStack_198; pfVar18 != pfStack_190; pfVar18 = pfVar18 + 2) {
    *(ulong *)pfVar18 =
         CONCAT44((float)((ulong)puStack_1c0 >> 0x20) + (float)((ulong)puVar3 >> 0x20) * *pfVar18 +
                  fVar45 * pfVar18[1],
                  SUB84(puStack_1c0,0) + SUB84(puVar3,0) * *pfVar18 + fVar37 * pfVar18[1]);
  }
  lVar23 = 0;
  uVar39 = *(undefined8 *)pfStack_198;
  fVar47 = (float)((ulong)uVar39 >> 0x20);
  afStack_148[2] = (float)*(undefined8 *)(pfStack_198 + 4) - (float)uVar39;
  afStack_148[3] = (float)((ulong)*(undefined8 *)(pfStack_198 + 4) >> 0x20) - fVar47;
  afStack_148[0] = (float)*(undefined8 *)(pfStack_198 + 2) - (float)uVar39;
  afStack_148[1] = (float)((ulong)*(undefined8 *)(pfStack_198 + 2) >> 0x20) - fVar47;
  uVar40 = *(undefined8 *)pbStack_180;
  uVar42 = NEON_rev64(uVar40,4);
  fVar44 = *(float *)(pbStack_180 + 0x14) - (float)uVar42;
  fVar43 = (float)((ulong)uVar42 >> 0x20);
  fVar37 = *(float *)(pbStack_180 + 8) - fVar43;
  fStack_154 = fVar37;
  uVar46 = NEON_rev64(*(undefined8 *)(pbStack_180 + 0xc),4);
  fVar45 = (float)uVar46 - (float)uVar40;
  fVar47 = (float)((ulong)uVar40 >> 0x20);
  fVar41 = (float)((ulong)uVar46 >> 0x20) - fVar47;
  uStack_168 = CONCAT44(fVar37 * -fVar47 + fVar41 * fVar43,
                        fVar44 * -(float)uVar40 + fVar45 * (float)uVar42);
  fStack_160 = fVar44;
  fVar41 = -fVar41;
  uStack_15c = NEON_rev64(CONCAT44(fVar41,-fVar45),4);
  do {
    *(float *)((long)&uStack_168 + lVar23) =
         (1.0 / (fVar45 * fVar41 + fVar44 * fVar37)) * *(float *)((long)&uStack_168 + lVar23);
    lVar23 = lVar23 + 4;
  } while (lVar23 != 0x18);
  lVar23 = 0;
  *extraout_x8 = uVar39;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  do {
    lVar27 = 0;
    bVar7 = true;
    do {
      bVar8 = bVar7;
      lVar28 = 0;
      pfVar18 = (float *)((long)extraout_x8 + lVar27 * 4 + lVar23 * 8);
      fVar47 = *pfVar18;
      plVar29 = (long *)0x1;
      do {
        plVar15 = plVar29;
        fVar47 = fVar47 + afStack_148[lVar28 * 2 + lVar27] *
                          *(float *)((long)&uStack_168 + lVar28 * 4 + lVar23 * 8);
        lVar28 = 1;
        plVar29 = (long *)0x0;
      } while ((int)plVar15 != 0);
      *pfVar18 = fVar47;
      lVar27 = 1;
      bVar7 = false;
    } while (bVar8);
    lVar23 = lVar23 + 1;
  } while (lVar23 != 3);
  __ZdlPv();
  __ZdlPv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    if (((int)plVar15 != 0) && (func_0x000104bd46a0(), pbStack_180 != (byte *)0x0)) {
      __ZdlPv();
    }
    __Unwind_Resume();
    do {
      bVar2 = *pbVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
      if (bVar7) {
        *pbVar13 = 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while ((cVar6 != '\0') || ((bVar2 & 1) != 0));
    pbVar35 = pbVar13 + 8;
    plVar29 = *(long **)pbVar35;
    if (plVar29 == (long *)0x0) {
      *pbVar13 = 0;
      plVar29 = (long *)0x20;
      __Znwm();
      plVar29[1] = 0;
      *plVar29 = 0;
      plVar29[3] = 0;
      plVar29[2] = 0;
    }
    else {
      lVar23 = plVar29[3];
      *(long *)pbVar35 = lVar23;
      plVar29[3] = 0;
      if (lVar23 == 0) {
        pbVar13[0x10] = 0;
        pbVar13[0x11] = 0;
        pbVar13[0x12] = 0;
        pbVar13[0x13] = 0;
        pbVar13[0x14] = 0;
        pbVar13[0x15] = 0;
        pbVar13[0x16] = 0;
        pbVar13[0x17] = 0;
      }
      *pbVar13 = 0;
    }
    plVar34 = plVar15;
    (**(code **)(*plVar15 + 0x30))(plVar15);
    uVar31 = (uint)param_8;
    uVar36 = (uint)((ulong)param_8 >> 0x20);
    iVar5 = uVar36 * uVar31;
    func_0x000108a3c9d0(plVar29,(long)((int)plVar34 * iVar5));
    pbVar1 = pbVar13 + 0x18;
    do {
      bVar2 = *pbVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar7) {
        *pbVar1 = 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while ((cVar6 != '\0') || ((bVar2 & 1) != 0));
    puVar33 = *(undefined8 **)(pbVar13 + 0x20);
    if (puVar33 == (undefined8 *)0x0) {
      *pbVar1 = 0;
      puVar33 = (undefined8 *)0x20;
      __Znwm();
      puVar33[1] = 0;
      *puVar33 = 0;
      puVar33[3] = 0;
      puVar33[2] = 0;
      *extraout_x8_00 = puVar33;
      extraout_x8_00[1] = pbVar1;
    }
    else {
      *extraout_x8_00 = puVar33;
      extraout_x8_00[1] = pbVar1;
      lVar23 = puVar33[3];
      *(long *)(pbVar13 + 0x20) = lVar23;
      puVar33[3] = 0;
      if (lVar23 == 0) {
        pbVar13[0x28] = 0;
        pbVar13[0x29] = 0;
        pbVar13[0x2a] = 0;
        pbVar13[0x2b] = 0;
        pbVar13[0x2c] = 0;
        pbVar13[0x2d] = 0;
        pbVar13[0x2e] = 0;
        pbVar13[0x2f] = 0;
      }
      *pbVar1 = 0;
    }
    plVar34 = plVar15;
    (**(code **)(*plVar15 + 0x30))(plVar15);
    func_0x00010742a308(puVar33,(long)((int)plVar34 * iVar5));
    pbVar1 = pbVar13 + 0x30;
    do {
      bVar2 = *pbVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar7) {
        *pbVar1 = 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while ((cVar6 != '\0') || ((bVar2 & 1) != 0));
    pbVar30 = pbVar13 + 0x38;
    plVar34 = *(long **)pbVar30;
    if (plVar34 == (long *)0x0) {
      *pbVar1 = 0;
      plVar34 = (long *)0x20;
      __Znwm();
      plVar34[1] = 0;
      *plVar34 = 0;
      plVar34[3] = 0;
      plVar34[2] = 0;
    }
    else {
      lVar23 = plVar34[3];
      *(long *)pbVar30 = lVar23;
      plVar34[3] = 0;
      if (lVar23 == 0) {
        pbVar13[0x40] = 0;
        pbVar13[0x41] = 0;
        pbVar13[0x42] = 0;
        pbVar13[0x43] = 0;
        pbVar13[0x44] = 0;
        pbVar13[0x45] = 0;
        pbVar13[0x46] = 0;
        pbVar13[0x47] = 0;
      }
      *pbVar1 = 0;
    }
    FUN_1096b9118(plVar34,(long)iVar5);
    pfVar18 = (float *)*plVar34;
    if (0 < (int)uVar36) {
      uVar20 = 0;
      do {
        if (0 < (int)uVar31) {
          uVar26 = 0;
          pfVar19 = pfVar18;
          do {
            pfVar18 = pfVar19 + 2;
            *pfVar19 = (float)uVar26;
            pfVar19[1] = (float)uVar20;
            uVar26 = uVar26 + 1;
            pfVar19 = pfVar18;
          } while (uVar31 != uVar26);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar36);
      pfVar18 = (float *)*plVar34;
    }
    (**(code **)(*plVar15 + 0x40))
              (plVar15,(ulong)(plVar34[1] - (long)pfVar18) >> 3 & 0xffffffff,pfVar18,plVar17,
               (ulong)(plVar29[1] - *plVar29) >> 1 & 0xffffffff);
    psVar4 = (short *)plVar29[1];
    if ((short *)*plVar29 != psVar4) {
      psVar24 = (short *)*plVar29;
      pfVar18 = *(float **)*extraout_x8_00;
      do {
        psVar25 = psVar24 + 1;
        *pfVar18 = (float)(int)*psVar24 / 255.0;
        psVar24 = psVar25;
        pfVar18 = pfVar18 + 1;
      } while (psVar25 != psVar4);
    }
    do {
      bVar2 = *pbVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar7) {
        *pbVar1 = 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while ((cVar6 != '\0') || ((bVar2 & 1) != 0));
    if (*(long *)(pbVar13 + 0x40) != 0) {
      pbVar30 = (byte *)(*(long *)(pbVar13 + 0x40) + 0x18);
    }
    *(long **)pbVar30 = plVar34;
    *(long **)(pbVar13 + 0x40) = plVar34;
    pbVar13[0x30] = 0;
    do {
      bVar2 = *pbVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
      if (bVar7) {
        *pbVar13 = 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while ((cVar6 != '\0') || ((bVar2 & 1) != 0));
    if (*(long *)(pbVar13 + 0x10) != 0) {
      pbVar35 = (byte *)(*(long *)(pbVar13 + 0x10) + 0x18);
    }
    *(long **)pbVar35 = plVar29;
    *(long **)(pbVar13 + 0x10) = plVar29;
    *pbVar13 = 0;
    return;
  }
  return;
}



/* Entry: 1096d423c; end: 1096d472b;  */

void FUN_1096d423c(undefined8 *param_1,float param_2,float param_3,float param_4,float param_5,
                  long param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  byte *pbVar1;
  byte bVar2;
  short *psVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 *extraout_x8;
  short *psVar17;
  uint uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  byte *pbVar23;
  uint uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long *plVar27;
  byte *pbVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  undefined8 uStack_110;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  float *pfStack_e8;
  float *pfStack_e0;
  undefined8 uStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  undefined8 uStack_ac;
  float fStack_a4;
  undefined8 uStack_a0;
  float afStack_98 [4];
  long lStack_88;
  short *psVar18;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(*(long *)(param_7 + 8) + 0x18);
  uVar25 = (ulong)(*(long *)(*(long *)(param_7 + 8) + 0x20) - lVar16) >> 3 & 0xffffffff;
  fVar31 = -0.5;
  if (uVar25 == 0) {
    fVar34 = 1.0;
    fVar36 = -0.5;
  }
  else {
    uVar24 = *(uint *)(param_6 + 0x50);
    if (uVar24 != 0xffffffff) {
      uVar25 = (ulong)uVar24;
      fVar31 = -0.5;
      fVar34 = 1.0;
      fVar36 = -0.5;
      if (uVar24 == 0) goto LAB_1096d43f0;
    }
    func_0x000107c2ace8(&uStack_a0);
    lVar20 = CONCAT44(afStack_98[1],afStack_98[0]);
    if (*(char *)(lVar20 + 0x1f) < '\0') {
      *(undefined8 *)(lVar20 + 0x10) = 7;
      puVar15 = *(undefined4 **)(lVar20 + 8);
    }
    else {
      puVar15 = (undefined4 *)(lVar20 + 8);
      *(undefined1 *)(lVar20 + 0x1f) = 7;
    }
    *(undefined4 *)((long)puVar15 + 3) = 0x38366465;
    *puVar15 = 0x65786946;
    *(undefined1 *)((long)puVar15 + 7) = 0;
    lVar20 = param_6 + 0x58;
    FUN_109697c4c(lVar20,&uStack_a0);
    if ((int)lVar20 == 0) {
      FUN_1096994f0(uVar25,lVar16);
    }
    else {
      uVar25 = -(uVar25 >> 0x1f) & 0xfffffff800000000 | uVar25 << 3;
      pfVar12 = (float *)(lVar16 + 4);
      param_2 = 3.4028235e+38;
      param_5 = -3.4028235e+38;
      param_4 = param_5;
      param_3 = param_2;
      do {
        fVar34 = pfVar12[-1];
        fVar31 = param_5;
        if ((!NAN(fVar34)) && (fVar36 = *pfVar12, !NAN(fVar36))) {
          fVar39 = fVar34;
          if (param_2 <= fVar34) {
            fVar39 = param_2;
          }
          fVar30 = fVar36;
          if (param_3 <= fVar36) {
            fVar30 = param_3;
          }
          if (fVar34 <= param_4) {
            fVar34 = param_4;
          }
          param_4 = fVar34;
          fVar31 = fVar36;
          param_2 = fVar39;
          param_3 = fVar30;
          if (fVar36 <= param_5) {
            fVar31 = param_5;
          }
        }
        param_5 = fVar31;
        pfVar12 = pfVar12 + 2;
        uVar25 = uVar25 - 8;
      } while (uVar25 != 0);
      param_4 = param_4 - param_2;
      param_5 = param_5 - param_3;
    }
    uStack_a0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&uStack_a0);
    fVar31 = param_3 + (param_4 - param_5) * -0.5;
    fVar34 = param_4;
    fVar36 = param_2;
    if (param_4 < param_5) {
      fVar31 = param_3;
      fVar34 = param_5;
      fVar36 = param_2 + (param_5 - param_4) * -0.5;
    }
  }
LAB_1096d43f0:
  fVar39 = *(float *)(param_6 + 0x4c);
  uStack_f8 = *(undefined8 *)(*(long *)(param_7 + 8) + 8);
  uStack_110 = *(undefined8 *)(*(long *)(param_7 + 8) + 0x10);
  fStack_f0 = -(float)((ulong)uStack_f8 >> 0x20);
  fStack_ec = (float)uStack_f8;
  if (*(int *)(param_6 + 0x48) == 1) {
    lVar16 = 0;
    uStack_a0 = (undefined **)uStack_110;
    afStack_98[0] = 0.0;
    afStack_98[1] = 0.0;
    afStack_98[2] = 0.0;
    afStack_98[3] = 0.0;
    do {
      lVar20 = 0;
      bVar6 = true;
      do {
        bVar7 = bVar6;
        lVar21 = 0;
        fVar30 = afStack_98[lVar16 * 2 + lVar20 + -2];
        bVar6 = true;
        do {
          bVar8 = bVar6;
          fVar30 = fVar30 + *(float *)((long)&uStack_f8 + lVar20 * 4 + lVar21 * 8) *
                            *(float *)(param_6 + 0x68 + lVar16 * 8 + lVar21 * 4);
          lVar21 = 1;
          bVar6 = false;
        } while (bVar8);
        afStack_98[lVar16 * 2 + lVar20 + -2] = fVar30;
        lVar20 = 1;
        bVar6 = false;
      } while (bVar7);
      lVar16 = lVar16 + 1;
    } while (lVar16 != 3);
    fStack_f0 = afStack_98[2];
    fStack_ec = afStack_98[3];
    uStack_f8 = CONCAT44(afStack_98[1],afStack_98[0]);
    uStack_110 = uStack_a0;
  }
  fVar37 = fStack_ec;
  fVar30 = fStack_f0;
  uVar32 = uStack_f8;
  uStack_a0 = (undefined **)0x0;
  afStack_98[0] = (float)(int)param_8 + -1.0;
  afStack_98[3] = (float)(int)((ulong)param_8 >> 0x20) + -1.0;
  afStack_98[1] = 0.0;
  afStack_98[2] = 0.0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  pbStack_d0 = (byte *)0x0;
  FUN_1096d5310(&pbStack_d0,&uStack_a0,&lStack_88);
  afStack_98[1] = fVar34 * (1.0 - fVar39) * 0.5;
  afStack_98[2] = fVar36 + afStack_98[1];
  afStack_98[1] = fVar31 + afStack_98[1];
  fVar34 = fVar34 * fVar39;
  uStack_a0 = (undefined **)CONCAT44(afStack_98[1],afStack_98[2]);
  afStack_98[0] = fVar34 + afStack_98[2];
  afStack_98[3] = fVar34 + afStack_98[1];
  pfStack_e0 = (float *)0x0;
  uStack_d8 = 0;
  pfStack_e8 = (float *)0x0;
  plVar11 = &lStack_88;
  FUN_1096d5310(&pfStack_e8,&uStack_a0);
  pbVar9 = pbStack_d0;
  for (pfVar12 = pfStack_e8; pfVar12 != pfStack_e0; pfVar12 = pfVar12 + 2) {
    *(ulong *)pfVar12 =
         CONCAT44((float)((ulong)uStack_110 >> 0x20) + (float)((ulong)uVar32 >> 0x20) * *pfVar12 +
                  fVar37 * pfVar12[1],
                  (float)uStack_110 + (float)uVar32 * *pfVar12 + fVar30 * pfVar12[1]);
  }
  lVar16 = 0;
  uVar32 = *(undefined8 *)pfStack_e8;
  fVar31 = (float)((ulong)uVar32 >> 0x20);
  afStack_98[2] = (float)*(undefined8 *)(pfStack_e8 + 4) - (float)uVar32;
  afStack_98[3] = (float)((ulong)*(undefined8 *)(pfStack_e8 + 4) >> 0x20) - fVar31;
  afStack_98[0] = (float)*(undefined8 *)(pfStack_e8 + 2) - (float)uVar32;
  afStack_98[1] = (float)((ulong)*(undefined8 *)(pfStack_e8 + 2) >> 0x20) - fVar31;
  uVar33 = *(undefined8 *)pbStack_d0;
  uVar35 = NEON_rev64(uVar33,4);
  fVar39 = *(float *)(pbStack_d0 + 0x14) - (float)uVar35;
  fVar34 = (float)((ulong)uVar35 >> 0x20);
  fVar30 = *(float *)(pbStack_d0 + 8) - fVar34;
  fStack_a4 = fVar30;
  uVar38 = NEON_rev64(*(undefined8 *)(pbStack_d0 + 0xc),4);
  fVar37 = (float)uVar38 - (float)uVar33;
  fVar31 = (float)((ulong)uVar33 >> 0x20);
  fVar36 = (float)((ulong)uVar38 >> 0x20) - fVar31;
  uStack_b8 = CONCAT44(fVar30 * -fVar31 + fVar36 * fVar34,
                       fVar39 * -(float)uVar33 + fVar37 * (float)uVar35);
  fStack_b0 = fVar39;
  fVar36 = -fVar36;
  uStack_ac = NEON_rev64(CONCAT44(fVar36,-fVar37),4);
  do {
    *(float *)((long)&uStack_b8 + lVar16) =
         (1.0 / (fVar37 * fVar36 + fVar39 * fVar30)) * *(float *)((long)&uStack_b8 + lVar16);
    lVar16 = lVar16 + 4;
  } while (lVar16 != 0x18);
  lVar16 = 0;
  *param_1 = uVar32;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    lVar20 = 0;
    bVar6 = true;
    do {
      bVar7 = bVar6;
      lVar21 = 0;
      pfVar12 = (float *)((long)param_1 + lVar20 * 4 + lVar16 * 8);
      fVar31 = *pfVar12;
      plVar22 = (long *)0x1;
      do {
        plVar10 = plVar22;
        fVar31 = fVar31 + afStack_98[lVar21 * 2 + lVar20] *
                          *(float *)((long)&uStack_b8 + lVar21 * 4 + lVar16 * 8);
        lVar21 = 1;
        plVar22 = (long *)0x0;
      } while ((int)plVar10 != 0);
      *pfVar12 = fVar31;
      lVar20 = 1;
      bVar6 = false;
    } while (bVar7);
    lVar16 = lVar16 + 1;
  } while (lVar16 != 3);
  __ZdlPv();
  __ZdlPv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    if (((int)plVar10 != 0) && (func_0x000104bd46a0(), pbStack_d0 != (byte *)0x0)) {
      __ZdlPv();
    }
    __Unwind_Resume();
    do {
      bVar2 = *pbVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar9,0x10);
      if (bVar6) {
        *pbVar9 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar2 & 1) != 0));
    pbVar28 = pbVar9 + 8;
    plVar22 = *(long **)pbVar28;
    if (plVar22 == (long *)0x0) {
      *pbVar9 = 0;
      plVar22 = (long *)0x20;
      __Znwm();
      plVar22[1] = 0;
      *plVar22 = 0;
      plVar22[3] = 0;
      plVar22[2] = 0;
    }
    else {
      lVar16 = plVar22[3];
      *(long *)pbVar28 = lVar16;
      plVar22[3] = 0;
      if (lVar16 == 0) {
        pbVar9[0x10] = 0;
        pbVar9[0x11] = 0;
        pbVar9[0x12] = 0;
        pbVar9[0x13] = 0;
        pbVar9[0x14] = 0;
        pbVar9[0x15] = 0;
        pbVar9[0x16] = 0;
        pbVar9[0x17] = 0;
      }
      *pbVar9 = 0;
    }
    plVar27 = plVar10;
    (**(code **)(*plVar10 + 0x30))(plVar10);
    uVar24 = (uint)param_9;
    uVar29 = (uint)((ulong)param_9 >> 0x20);
    iVar4 = uVar29 * uVar24;
    func_0x000108a3c9d0(plVar22,(long)((int)plVar27 * iVar4));
    pbVar1 = pbVar9 + 0x18;
    do {
      bVar2 = *pbVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar2 & 1) != 0));
    puVar26 = *(undefined8 **)(pbVar9 + 0x20);
    if (puVar26 == (undefined8 *)0x0) {
      *pbVar1 = 0;
      puVar26 = (undefined8 *)0x20;
      __Znwm();
      puVar26[1] = 0;
      *puVar26 = 0;
      puVar26[3] = 0;
      puVar26[2] = 0;
      *extraout_x8 = puVar26;
      extraout_x8[1] = pbVar1;
    }
    else {
      *extraout_x8 = puVar26;
      extraout_x8[1] = pbVar1;
      lVar16 = puVar26[3];
      *(long *)(pbVar9 + 0x20) = lVar16;
      puVar26[3] = 0;
      if (lVar16 == 0) {
        pbVar9[0x28] = 0;
        pbVar9[0x29] = 0;
        pbVar9[0x2a] = 0;
        pbVar9[0x2b] = 0;
        pbVar9[0x2c] = 0;
        pbVar9[0x2d] = 0;
        pbVar9[0x2e] = 0;
        pbVar9[0x2f] = 0;
      }
      *pbVar1 = 0;
    }
    plVar27 = plVar10;
    (**(code **)(*plVar10 + 0x30))(plVar10);
    func_0x00010742a308(puVar26,(long)((int)plVar27 * iVar4));
    pbVar1 = pbVar9 + 0x30;
    do {
      bVar2 = *pbVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar2 & 1) != 0));
    pbVar23 = pbVar9 + 0x38;
    plVar27 = *(long **)pbVar23;
    if (plVar27 == (long *)0x0) {
      *pbVar1 = 0;
      plVar27 = (long *)0x20;
      __Znwm();
      plVar27[1] = 0;
      *plVar27 = 0;
      plVar27[3] = 0;
      plVar27[2] = 0;
    }
    else {
      lVar16 = plVar27[3];
      *(long *)pbVar23 = lVar16;
      plVar27[3] = 0;
      if (lVar16 == 0) {
        pbVar9[0x40] = 0;
        pbVar9[0x41] = 0;
        pbVar9[0x42] = 0;
        pbVar9[0x43] = 0;
        pbVar9[0x44] = 0;
        pbVar9[0x45] = 0;
        pbVar9[0x46] = 0;
        pbVar9[0x47] = 0;
      }
      *pbVar1 = 0;
    }
    FUN_1096b9118(plVar27,(long)iVar4);
    pfVar12 = (float *)*plVar27;
    if (0 < (int)uVar29) {
      uVar14 = 0;
      do {
        if (0 < (int)uVar24) {
          uVar19 = 0;
          pfVar13 = pfVar12;
          do {
            pfVar12 = pfVar13 + 2;
            *pfVar13 = (float)uVar19;
            pfVar13[1] = (float)uVar14;
            uVar19 = uVar19 + 1;
            pfVar13 = pfVar12;
          } while (uVar24 != uVar19);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar29);
      pfVar12 = (float *)*plVar27;
    }
    (**(code **)(*plVar10 + 0x40))
              (plVar10,(ulong)(plVar27[1] - (long)pfVar12) >> 3 & 0xffffffff,pfVar12,plVar11,
               (ulong)(plVar22[1] - *plVar22) >> 1 & 0xffffffff);
    psVar3 = (short *)plVar22[1];
    if ((short *)*plVar22 != psVar3) {
      psVar17 = (short *)*plVar22;
      pfVar12 = *(float **)*extraout_x8;
      do {
        psVar18 = psVar17 + 1;
        *pfVar12 = (float)(int)*psVar17 / 255.0;
        psVar17 = psVar18;
        pfVar12 = pfVar12 + 1;
      } while (psVar18 != psVar3);
    }
    do {
      bVar2 = *pbVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar2 & 1) != 0));
    if (*(long *)(pbVar9 + 0x40) != 0) {
      pbVar23 = (byte *)(*(long *)(pbVar9 + 0x40) + 0x18);
    }
    *(long **)pbVar23 = plVar27;
    *(long **)(pbVar9 + 0x40) = plVar27;
    pbVar9[0x30] = 0;
    do {
      bVar2 = *pbVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar9,0x10);
      if (bVar6) {
        *pbVar9 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar2 & 1) != 0));
    if (*(long *)(pbVar9 + 0x10) != 0) {
      pbVar28 = (byte *)(*(long *)(pbVar9 + 0x10) + 0x18);
    }
    *(long **)pbVar28 = plVar22;
    *(long **)(pbVar9 + 0x10) = plVar22;
    *pbVar9 = 0;
    return;
  }
  return;
}



/* Entry: 1096d472c; end: 1096d4aab;  */

void FUN_1096d472c(undefined8 *param_1,byte *param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte *pbVar1;
  byte bVar2;
  short *psVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  long lVar10;
  short *psVar11;
  uint uVar13;
  long *plVar14;
  byte *pbVar15;
  uint uVar16;
  undefined8 *puVar17;
  long *plVar18;
  byte *pbVar19;
  uint uVar20;
  short *psVar12;
  
  do {
    bVar2 = *param_2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar6) {
      *param_2 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while ((cVar5 != '\0') || ((bVar2 & 1) != 0));
  pbVar19 = param_2 + 8;
  plVar14 = *(long **)pbVar19;
  if (plVar14 == (long *)0x0) {
    *param_2 = 0;
    plVar14 = (long *)0x20;
    __Znwm();
    plVar14[1] = 0;
    *plVar14 = 0;
    plVar14[3] = 0;
    plVar14[2] = 0;
  }
  else {
    lVar10 = plVar14[3];
    *(long *)pbVar19 = lVar10;
    plVar14[3] = 0;
    if (lVar10 == 0) {
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
    }
    *param_2 = 0;
  }
  plVar18 = param_3;
  (**(code **)(*param_3 + 0x30))(param_3);
  uVar16 = (uint)param_5;
  uVar20 = (uint)((ulong)param_5 >> 0x20);
  iVar4 = uVar20 * uVar16;
  func_0x000108a3c9d0(plVar14,(long)((int)plVar18 * iVar4));
  pbVar1 = param_2 + 0x18;
  do {
    bVar2 = *pbVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while ((cVar5 != '\0') || ((bVar2 & 1) != 0));
  puVar17 = *(undefined8 **)(param_2 + 0x20);
  if (puVar17 == (undefined8 *)0x0) {
    *pbVar1 = 0;
    puVar17 = (undefined8 *)0x20;
    __Znwm();
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    *param_1 = puVar17;
    param_1[1] = pbVar1;
  }
  else {
    *param_1 = puVar17;
    param_1[1] = pbVar1;
    lVar10 = puVar17[3];
    *(long *)(param_2 + 0x20) = lVar10;
    puVar17[3] = 0;
    if (lVar10 == 0) {
      param_2[0x28] = 0;
      param_2[0x29] = 0;
      param_2[0x2a] = 0;
      param_2[0x2b] = 0;
      param_2[0x2c] = 0;
      param_2[0x2d] = 0;
      param_2[0x2e] = 0;
      param_2[0x2f] = 0;
    }
    *pbVar1 = 0;
  }
  plVar18 = param_3;
  (**(code **)(*param_3 + 0x30))(param_3);
  func_0x00010742a308(puVar17,(long)((int)plVar18 * iVar4));
  pbVar1 = param_2 + 0x30;
  do {
    bVar2 = *pbVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while ((cVar5 != '\0') || ((bVar2 & 1) != 0));
  pbVar15 = param_2 + 0x38;
  plVar18 = *(long **)pbVar15;
  if (plVar18 == (long *)0x0) {
    *pbVar1 = 0;
    plVar18 = (long *)0x20;
    __Znwm();
    plVar18[1] = 0;
    *plVar18 = 0;
    plVar18[3] = 0;
    plVar18[2] = 0;
  }
  else {
    lVar10 = plVar18[3];
    *(long *)pbVar15 = lVar10;
    plVar18[3] = 0;
    if (lVar10 == 0) {
      param_2[0x40] = 0;
      param_2[0x41] = 0;
      param_2[0x42] = 0;
      param_2[0x43] = 0;
      param_2[0x44] = 0;
      param_2[0x45] = 0;
      param_2[0x46] = 0;
      param_2[0x47] = 0;
    }
    *pbVar1 = 0;
  }
  FUN_1096b9118(plVar18,(long)iVar4);
  pfVar7 = (float *)*plVar18;
  if (0 < (int)uVar20) {
    uVar9 = 0;
    do {
      if (0 < (int)uVar16) {
        uVar13 = 0;
        pfVar8 = pfVar7;
        do {
          pfVar7 = pfVar8 + 2;
          *pfVar8 = (float)uVar13;
          pfVar8[1] = (float)uVar9;
          uVar13 = uVar13 + 1;
          pfVar8 = pfVar7;
        } while (uVar16 != uVar13);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar20);
    pfVar7 = (float *)*plVar18;
  }
  (**(code **)(*param_3 + 0x40))
            (param_3,(ulong)(plVar18[1] - (long)pfVar7) >> 3 & 0xffffffff,pfVar7,param_4,
             (ulong)(plVar14[1] - *plVar14) >> 1 & 0xffffffff);
  psVar3 = (short *)plVar14[1];
  if ((short *)*plVar14 != psVar3) {
    psVar11 = (short *)*plVar14;
    pfVar7 = *(float **)*param_1;
    do {
      psVar12 = psVar11 + 1;
      *pfVar7 = (float)(int)*psVar11 / 255.0;
      psVar11 = psVar12;
      pfVar7 = pfVar7 + 1;
    } while (psVar12 != psVar3);
  }
  do {
    bVar2 = *pbVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while ((cVar5 != '\0') || ((bVar2 & 1) != 0));
  if (*(long *)(param_2 + 0x40) != 0) {
    pbVar15 = (byte *)(*(long *)(param_2 + 0x40) + 0x18);
  }
  *(long **)pbVar15 = plVar18;
  *(long **)(param_2 + 0x40) = plVar18;
  param_2[0x30] = 0;
  do {
    bVar2 = *param_2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar6) {
      *param_2 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while ((cVar5 != '\0') || ((bVar2 & 1) != 0));
  if (*(long *)(param_2 + 0x10) != 0) {
    pbVar19 = (byte *)(*(long *)(param_2 + 0x10) + 0x18);
  }
  *(long **)pbVar19 = plVar14;
  *(long **)(param_2 + 0x10) = plVar14;
  *param_2 = 0;
  return;
}



/* Entry: 1096d4aac; end: 1096d530f;  */

void FUN_1096d4aac(undefined8 *param_1,float param_2,float param_3,float param_4,long param_5,
                  uint param_6,uint param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  float *pfVar6;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  undefined8 *puVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int iStack_140;
  float *pfStack_f0;
  float *pfStack_e8;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  
  if (param_9 == 0) {
    iStack_140 = 1;
    iVar7 = param_8;
  }
  else if (param_9 == 2) {
    iVar7 = param_8 / 3;
    iStack_140 = 3;
  }
  else if (param_9 == 1) {
    iVar7 = param_8 + -2;
    iStack_140 = 1;
  }
  else {
    puStack_c0 = &UNK_10f57dbf4;
    puStack_b8 = &UNK_10f57dbfa;
    uStack_b0 = 0xa6;
    FUN_1096993dc(&puStack_c0,&UNK_10f57dcbf);
    iStack_140 = 0;
    iVar7 = 0;
  }
  lVar23 = (long)iVar7;
  FUN_1096a5c58(&puStack_c0,lVar23);
  FUN_1094cca1c(&lStack_d8,lVar23);
  FUN_109367d10(&pfStack_f0,lVar23);
  if (0 < iVar7) {
    iVar19 = 0;
    lVar24 = 0;
    param_3 = (1.0 / (float)(int)param_6) / param_3;
    param_3 = param_3 * param_3;
    fVar32 = 0.0;
    if (param_10 == 0) {
      fVar32 = -3.4028235e+38;
    }
    iVar1 = param_8 * param_6;
    do {
      fVar31 = 0.0;
      fVar35 = 0.0;
      fVar33 = 0.0;
      fVar34 = 0.0;
      fVar36 = 0.0;
      fVar37 = 0.0;
      fVar27 = fVar32;
      if (0 < (int)param_7) {
        uVar8 = 0;
        iVar12 = iVar19;
        do {
          uVar26 = (ulong)param_6;
          iVar13 = iVar12;
          fVar35 = fVar27;
          if (0 < (int)param_6) {
            do {
              fVar27 = *(float *)(param_5 + (long)iVar13 * 4);
              if (fVar27 <= fVar35) {
                fVar27 = fVar35;
              }
              iVar13 = iVar13 + param_8;
              uVar26 = uVar26 - 1;
              fVar35 = fVar27;
            } while (uVar26 != 0);
          }
          uVar8 = uVar8 + 1;
          iVar12 = iVar12 + iVar1;
        } while (uVar8 != param_7);
        uVar8 = 0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        fVar31 = 0.0;
        fVar36 = 0.0;
        fVar37 = 0.0;
        iVar20 = iVar19;
        iVar12 = iStack_140 + iVar7 * iStack_140;
        iVar13 = iVar7 * iStack_140;
        do {
          if (0 < (int)param_6) {
            iVar25 = 0;
            uVar26 = 0;
            fVar2 = (float)(uVar8 & 0xffffffff) + 0.5;
            if (param_10 == 0) {
              fVar2 = (float)(uVar8 & 0xffffffff);
            }
            do {
              pfVar11 = (float *)(param_5 + (long)(iVar20 + iVar25) * 4);
              fVar28 = *pfVar11 - fVar27;
              _expf();
              fVar29 = (float)(uVar26 & 0xffffffff) + 0.5;
              if (param_10 == 0) {
                fVar29 = (float)(uVar26 & 0xffffffff);
              }
              if (param_9 == 2) {
                pfVar9 = pfVar11 + 1;
                pfVar11 = pfVar11 + 2;
LAB_1096d4d44:
                fVar29 = fVar29 + *pfVar9;
                fVar30 = fVar2 + *pfVar11;
              }
              else {
                fVar30 = fVar2;
                if (param_9 == 1) {
                  pfVar9 = (float *)(param_5 + (long)(iVar13 + iVar25) * 4);
                  pfVar11 = (float *)(param_5 + (long)(iVar12 + iVar25) * 4);
                  goto LAB_1096d4d44;
                }
              }
              fVar36 = fVar36 + (fVar29 * fVar29 + 0.0) * fVar28;
              fVar37 = fVar37 + (fVar30 * fVar30 + 0.0) * fVar28;
              fVar31 = fVar31 + fVar28 * (fVar29 * fVar30 + 0.0);
              fVar33 = fVar33 + fVar29 * fVar28;
              fVar34 = fVar34 + fVar30 * fVar28;
              fVar35 = fVar35 + fVar28;
              uVar26 = uVar26 + 1;
              iVar25 = iVar25 + param_8;
            } while (param_6 != uVar26);
          }
          uVar8 = uVar8 + 1;
          iVar12 = iVar12 + iVar1;
          iVar13 = iVar13 + iVar1;
          iVar20 = iVar20 + iVar1;
        } while (uVar8 != param_7);
      }
      fVar35 = 1.0 / fVar35;
      *(ulong *)(puStack_c0 + lVar24 * 8) =
           CONCAT44(fVar34 * fVar35 * param_2,fVar33 * fVar35 * param_2);
      puVar10 = (undefined8 *)(lStack_d8 + lVar24 * 0xc);
      *puVar10 = CONCAT44(fVar37 * fVar35 * param_3,fVar36 * fVar35 * param_3);
      *(float *)(puVar10 + 1) = param_3 * fVar31 * fVar35;
      if (0.0 <= fVar27) {
        fVar27 = -fVar27;
        _expf();
        fVar27 = 1.0 / (fVar27 + 1.0);
      }
      else {
        _expf();
        fVar27 = 1.0 - 1.0 / (fVar27 + 1.0);
      }
      pfStack_f0[lVar24] = fVar27;
      lVar24 = lVar24 + 1;
      iVar19 = iVar19 + iStack_140;
    } while (lVar24 != lVar23);
  }
  uVar22 = (uint)((float)iVar7 * param_4 + 0.5);
  uVar8 = (ulong)uVar22;
  pfVar11 = pfStack_f0 + (int)uVar22;
  pfVar9 = pfStack_f0;
  pfVar16 = pfStack_e8;
joined_r0x0001096d4e78:
  while( true ) {
    pfVar3 = pfVar16;
    if (pfVar11 == pfVar3) goto LAB_1096d4e7c;
    uVar26 = (long)pfVar3 - (long)pfVar9 >> 2;
    if (uVar26 < 2) goto LAB_1096d4e7c;
    if (uVar26 == 3) {
      fVar35 = pfVar9[1];
      fVar32 = pfVar3[-1];
      fVar27 = fVar35;
      if (fVar32 < fVar35) {
        fVar27 = fVar32;
        fVar32 = fVar35;
      }
      pfVar3[-1] = fVar27;
      pfVar9[1] = fVar32;
      fVar35 = pfVar3[-1];
      fVar32 = *pfVar9;
      fVar27 = fVar35;
      if (fVar32 < fVar35) {
        fVar27 = fVar32;
        fVar32 = fVar35;
      }
      pfVar3[-1] = fVar27;
      fVar27 = pfVar9[1];
      if (fVar32 <= fVar27) {
        *pfVar9 = fVar27;
        fVar27 = fVar32;
      }
      pfVar9[1] = fVar27;
      goto LAB_1096d4e7c;
    }
    if (uVar26 == 2) {
      fVar32 = *pfVar9;
      if (fVar32 < pfVar3[-1]) {
        *pfVar9 = pfVar3[-1];
        pfVar3[-1] = fVar32;
      }
      goto LAB_1096d4e7c;
    }
    if ((long)uVar26 < 8) break;
    pfVar15 = pfVar9 + ((ulong)((long)pfVar3 - (long)pfVar9) >> 3);
    pfVar18 = pfVar3 + -1;
    fVar35 = *pfVar18;
    fVar31 = *pfVar15;
    fVar27 = fVar31;
    fVar32 = fVar35;
    if (fVar35 < fVar31) {
      fVar27 = fVar35;
      fVar32 = fVar31;
    }
    *pfVar18 = fVar27;
    *pfVar15 = fVar32;
    fVar33 = *pfVar18;
    fVar34 = *pfVar9;
    fVar27 = fVar33;
    fVar32 = fVar34;
    if (fVar34 < fVar33) {
      fVar27 = fVar34;
      fVar32 = fVar33;
    }
    *pfVar18 = fVar27;
    fVar36 = *pfVar15;
    fVar27 = fVar36;
    if (fVar32 <= fVar36) {
      *pfVar9 = fVar36;
      fVar27 = fVar32;
    }
    uVar14 = (uint)(fVar33 <= fVar34);
    if (fVar32 <= fVar36) {
      uVar14 = 1;
    }
    *pfVar15 = fVar27;
    if (fVar31 <= fVar35) {
      uVar14 = 1;
    }
    fVar32 = *pfVar9;
    pfVar16 = pfVar18;
    if (fVar32 <= fVar27) {
      do {
        pfVar16 = pfVar16 + -1;
        if (pfVar16 == pfVar9) {
          pfVar16 = pfVar9 + 1;
          pfVar15 = pfVar16;
          if (fVar32 <= *pfVar18) goto LAB_1096d5120;
          goto LAB_1096d5164;
        }
      } while (*pfVar16 <= fVar27);
      *pfVar9 = *pfVar16;
      *pfVar16 = fVar32;
      bVar5 = uVar14 != 0;
      uVar14 = 1;
      pfVar18 = pfVar16;
      if (bVar5) {
        uVar14 = 2;
      }
    }
    pfVar17 = pfVar9 + 1;
    pfVar6 = pfVar17;
    pfVar4 = pfVar15;
    pfVar16 = pfVar17;
    if (pfVar17 < pfVar18) {
      while( true ) {
        pfVar15 = pfVar4;
        do {
          pfVar16 = pfVar6;
          pfVar6 = pfVar16 + 1;
          fVar32 = *pfVar16;
        } while (*pfVar15 < fVar32);
        do {
          pfVar18 = pfVar18 + -1;
        } while (*pfVar18 <= *pfVar15);
        if (pfVar18 <= pfVar16) break;
        *pfVar16 = *pfVar18;
        *pfVar18 = fVar32;
        uVar14 = uVar14 + 1;
        pfVar4 = pfVar18;
        if (pfVar16 != pfVar15) {
          pfVar4 = pfVar15;
        }
      }
    }
    if (pfVar16 != pfVar15) {
      fVar32 = *pfVar16;
      if (fVar32 < *pfVar15) {
        *pfVar16 = *pfVar15;
        *pfVar15 = fVar32;
        uVar14 = uVar14 + 1;
      }
    }
    if (pfVar16 == pfVar11) goto LAB_1096d4e7c;
    if (uVar14 == 0) {
      pfVar15 = pfVar16;
      if (pfVar11 < pfVar16) {
        do {
          if (pfVar17 == pfVar16) goto LAB_1096d4e7c;
          pfVar15 = pfVar17 + -1;
          fVar32 = *pfVar17;
          pfVar17 = pfVar17 + 1;
        } while (fVar32 <= *pfVar15);
      }
      else {
        do {
          pfVar18 = pfVar15 + 1;
          if (pfVar18 == pfVar3) goto LAB_1096d4e7c;
          fVar32 = *pfVar15;
          pfVar15 = pfVar18;
        } while (*pfVar18 <= fVar32);
      }
    }
    if (pfVar16 <= pfVar11) {
      pfVar9 = pfVar16 + 1;
      pfVar16 = pfVar3;
    }
  }
  while (pfVar11 = pfVar9, pfVar3 + -1 != pfVar11) {
    pfVar9 = pfVar11 + 1;
    if ((pfVar3 != pfVar11) && (pfVar9 != pfVar3)) {
      fVar27 = *pfVar11;
      pfVar16 = pfVar11;
      pfVar15 = pfVar9;
      fVar32 = fVar27;
      do {
        pfVar17 = pfVar15 + 1;
        pfVar18 = pfVar15;
        fVar35 = *pfVar15;
        if (*pfVar15 <= fVar32) {
          pfVar18 = pfVar16;
          fVar35 = fVar32;
        }
        fVar32 = fVar35;
        pfVar16 = pfVar18;
        pfVar15 = pfVar17;
      } while (pfVar17 != pfVar3);
      if (pfVar18 != pfVar11) {
        *pfVar11 = *pfVar18;
        *pfVar18 = fVar27;
      }
    }
  }
LAB_1096d4e7c:
  fVar32 = 0.0;
  pfVar11 = pfStack_f0;
  if (0 < (int)uVar22) {
    do {
      fVar32 = fVar32 + *pfVar11;
      uVar8 = uVar8 - 1;
      pfVar11 = pfVar11 + 1;
    } while (uVar8 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1096d53a0(param_1,puStack_c0,puStack_b8,(long)puStack_b8 - (long)puStack_c0 >> 3);
  lVar24 = lStack_d8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar23 = lStack_d0 - lStack_d8;
  if (lVar23 != 0) {
    FUN_1094ccab4(param_1 + 3,(lVar23 >> 2) * -0x5555555555555555);
    lVar21 = param_1[4];
    _memmove(lVar21,lVar24,lVar23);
    param_1[4] = lVar21 + lVar23;
  }
  *(float *)(param_1 + 6) = fVar32 / (float)(int)uVar22;
  if (pfStack_f0 != (float *)0x0) {
    pfStack_e8 = pfStack_f0;
    __ZdlPv();
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  if (puStack_c0 != (undefined *)0x0) {
    puStack_b8 = puStack_c0;
    __ZdlPv();
  }
  return;
LAB_1096d5120:
  if (pfVar15 == pfVar18) goto LAB_1096d4e7c;
  fVar27 = *pfVar15;
  if (fVar27 < fVar32) goto LAB_1096d515c;
  pfVar15 = pfVar15 + 1;
  goto LAB_1096d5120;
LAB_1096d515c:
  pfVar16 = pfVar15 + 1;
  *pfVar15 = *pfVar18;
  *pfVar18 = fVar27;
LAB_1096d5164:
  if (pfVar16 == pfVar18) goto LAB_1096d4e7c;
  while( true ) {
    do {
      pfVar15 = pfVar16;
      pfVar16 = pfVar15 + 1;
      fVar32 = *pfVar15;
    } while (*pfVar9 <= fVar32);
    do {
      pfVar18 = pfVar18 + -1;
    } while (*pfVar18 < *pfVar9);
    if (pfVar18 <= pfVar15) break;
    *pfVar15 = *pfVar18;
    *pfVar18 = fVar32;
  }
  pfVar9 = pfVar15;
  pfVar16 = pfVar3;
  if (pfVar11 < pfVar15) goto LAB_1096d4e7c;
  goto joined_r0x0001096d4e78;
}



/* Entry: 1096d5310; end: 1096d539f;  */

void FUN_1096d5310(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0x18;
  __Znwm();
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar2 + 0x18;
  if (param_2 != param_3) {
    lVar1 = ((param_3 - param_2) - 8U & 0xfffffffffffffff8) + 8;
    _memcpy(lVar2,param_2,lVar1);
    lVar2 = lVar2 + lVar1;
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1096d53a0; end: 1096d5417;  */

void FUN_1096d53a0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1096a5ccc(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1096d5418; end: 1096d559b;  */

undefined8 * FUN_1096d5418(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b085a0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,200);
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110b00de0;
  FUN_1096b6920(puVar1 + 3);
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0x13] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  func_0x000107c2ace8(puVar1 + 0x14);
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *puVar1 = &PTR_FUN_110b08720;
  return param_1;
}



/* Entry: 1096d559c; end: 1096d55ef;  */

void FUN_1096d559c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lStack_30;
  undefined8 uStack_28;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&lStack_30;
  plVar1 = (long *)(*(long *)(param_1 + 8) + 0xb8);
  if (*plVar1 != -1) {
    ppuStack_20 = &puStack_18;
    lStack_30 = param_1;
    uStack_28 = param_2;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(plVar1,&ppuStack_20,FUN_1096d6a2c);
  }
  return;
}



/* Entry: 1096d55f0; end: 1096d6277;  */

void FUN_1096d55f0(undefined8 *param_1,long param_2,float *param_3,long param_4,long param_5)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  int *piVar15;
  long *plVar16;
  undefined **ppuVar17;
  undefined8 *puVar18;
  long *plVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  undefined **unaff_x27;
  float fVar26;
  float fVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined **ppuStack_258;
  long *plStack_250;
  float *pfStack_228;
  float *pfStack_220;
  undefined8 uStack_218;
  undefined **ppuStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long alStack_1e8 [5];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  int iStack_128;
  float fStack_124;
  int iStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  float fStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  int *piStack_100;
  int *piStack_f8;
  byte bStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(*(long *)(param_4 + 8) + 8);
  if ((lVar11 == 0) ||
     (___dynamic_cast(lVar11,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0), lVar11 == 0)) {
    func_0x000107c2acdc();
  }
  lStack_148 = *(long *)(lVar11 + 8);
  piVar15 = (int *)(lStack_148 + -8);
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
    if (bVar8) {
      *piVar15 = *piVar15 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  ppuStack_150 = &PTR_FUN_110b051b8;
  fVar30 = *(float *)(lStack_148 + 8);
  fVar32 = *(float *)(lStack_148 + 0xc);
  fVar35 = *(float *)(lStack_148 + 0x10);
  fVar36 = *(float *)(lStack_148 + 0x14);
  FUN_1096a5b40(param_3,0x11382aa18);
  fVar26 = 1.0 / (fVar32 * fVar32 + fVar30 * fVar30);
  fVar34 = -(fVar32 * fVar26);
  fVar30 = fVar30 * fVar26;
  fVar26 = fVar30;
  _hypotf(fVar30,fVar34);
  fVar29 = *param_3;
  fVar32 = param_3[1];
  fVar33 = param_3[2];
  fVar37 = param_3[3];
  lVar11 = *(long *)(param_2 + 8);
  lStack_168 = 0;
  uStack_160 = 0;
  lStack_170 = 0;
  iVar5 = *(int *)(lVar11 + 8);
  FUN_1096ba1fc(&uStack_130,&ppuStack_150);
  iVar6 = *(int *)(lVar11 + 0x14);
  lStack_168 = CONCAT44(fStack_124,iStack_128);
  lStack_170 = CONCAT44(uStack_130._4_4_,(float)uStack_130);
  if (iVar6 == 0x56) {
    *(undefined8 *)(lStack_170 + 0x288) = *(undefined8 *)(lStack_170 + 0x318);
    *(undefined8 *)(lStack_170 + 0x280) = *(undefined8 *)(lStack_170 + 0x310);
    *(undefined8 *)(lStack_170 + 0x298) = *(undefined8 *)(lStack_170 + 0x328);
    *(undefined8 *)(lStack_170 + 0x290) = *(undefined8 *)(lStack_170 + 800);
    *(undefined8 *)(lStack_170 + 0x2a8) = *(undefined8 *)(lStack_170 + 0x338);
    *(undefined8 *)(lStack_170 + 0x2a0) = *(undefined8 *)(lStack_170 + 0x330);
    *(undefined8 *)(lStack_170 + 0x248) = *(undefined8 *)(lStack_170 + 0x2d8);
    *(undefined8 *)(lStack_170 + 0x240) = *(undefined8 *)(lStack_170 + 0x2d0);
    *(undefined8 *)(lStack_170 + 600) = *(undefined8 *)(lStack_170 + 0x2e8);
    *(undefined8 *)(lStack_170 + 0x250) = *(undefined8 *)(lStack_170 + 0x2e0);
    *(undefined8 *)(lStack_170 + 0x268) = *(undefined8 *)(lStack_170 + 0x2f8);
    *(undefined8 *)(lStack_170 + 0x260) = *(undefined8 *)(lStack_170 + 0x2f0);
    *(undefined8 *)(lStack_170 + 0x278) = *(undefined8 *)(lStack_170 + 0x308);
    *(undefined8 *)(lStack_170 + 0x270) = *(undefined8 *)(lStack_170 + 0x300);
    *(undefined8 *)(lStack_170 + 0x228) = *(undefined8 *)(lStack_170 + 0x2b8);
    *(undefined8 *)(lStack_170 + 0x220) = *(undefined8 *)(lStack_170 + 0x2b0);
    *(undefined8 *)(lStack_170 + 0x238) = *(undefined8 *)(lStack_170 + 0x2c8);
    *(undefined8 *)(lStack_170 + 0x230) = *(undefined8 *)(lStack_170 + 0x2c0);
  }
  func_0x00010742a308(&lStack_170,(long)iVar6 << 1);
  if (iVar5 != 0) {
    lVar12 = lStack_148 + -0x20;
    func_0x0001096966c0(lVar12,plRam000000011382aab0);
    if ((lVar12 == 0) || (plVar16 = *(long **)(lVar12 + 8), plVar16 == (long *)0x0)) {
      plVar16 = plRam000000011382aab0;
      (**(code **)(*plRam000000011382aab0 + 0x30))();
    }
    unaff_x27 = &PTR_DAT_1108a5c28;
    iStack_120 = (int)plVar16[2];
    iStack_11c = (int)((ulong)plVar16[2] >> 0x20);
    iStack_128 = (int)plVar16[1];
    fStack_124 = (float)((ulong)plVar16[1] >> 0x20);
    uStack_130._0_4_ = 5.457339e-29;
    uStack_130._4_4_ = 1;
    uStack_118 = (undefined4)plVar16[3];
    fStack_114 = (float)((ulong)plVar16[3] >> 0x20);
    uStack_108 = plVar16[5];
    uStack_110 = (undefined4)plVar16[4];
    uStack_10c = (undefined4)((ulong)plVar16[4] >> 0x20);
    if (plVar16[5] != 0) {
      plVar19 = (long *)(plVar16[5] + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar8) {
          *plVar19 = *plVar19 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    FUN_109407928(&piStack_100,plVar16 + 6);
    if ((bStack_e8 & 1) == 0) {
      uVar25 = (ulong)(uint)(iStack_120 * iStack_11c * (int)fStack_124 * iStack_128);
    }
    else {
      uVar25 = 1;
      for (; piStack_100 != piStack_f8; piStack_100 = piStack_100 + 1) {
        uVar25 = (ulong)(uint)(*piStack_100 * (int)uVar25);
      }
    }
    lVar12 = *(long *)(param_5 + 0x18);
    if (lVar12 != 0) {
      fVar31 = *(float *)(*(long *)(param_2 + 8) + 0xc0);
      if (1e-06 < fVar31) {
        lVar24 = lVar12 + 0x28;
        alStack_1e8[0] = *(long *)(param_2 + 8);
        FUN_1096bd5b4(lVar24,alStack_1e8);
        if (lVar24 == 0) {
          plVar16 = (long *)0x68;
          __Znwm();
          plVar19 = plVar16 + 1;
          *plVar19 = 0;
          plVar16[2] = 0;
          *plVar16 = (long)&PTR_FUN_110b08788;
          ppuStack_258 = (undefined **)(plVar16 + 3);
          *ppuStack_258 = (undefined *)&PTR_DAT_1108a5c28;
          plVar16[10] = 0;
          plVar16[9] = 0;
          plVar16[0xc] = 0;
          plVar16[0xb] = 0;
          plVar16[4] = 0;
          plVar16[5] = 0;
          plVar16[6] = 0x100000001;
          plVar16[7] = 0;
          plVar16[8] = 0;
          *(undefined1 *)(plVar16 + 9) = 0;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar8) {
              *plVar19 = *plVar19 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          uStack_d8 = (undefined8 *)alStack_1e8[0];
          uStack_1a0 = 0;
          plStack_198 = (long *)0x0;
          plStack_250 = plVar16;
          uStack_d0 = ppuStack_258;
          uStack_c8 = plVar16;
          FUN_1096bd704(lVar12 + 0x28,&uStack_d8,&uStack_d8);
          plVar16 = uStack_c8;
          if (uStack_c8 != (long *)0x0) {
            plVar19 = uStack_c8 + 1;
            do {
              lVar12 = *plVar19;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar8) {
                *plVar19 = lVar12 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
            }
          }
          plVar16 = plStack_198;
          if (plStack_198 != (long *)0x0) {
            plVar19 = plStack_198 + 1;
            do {
              lVar12 = *plVar19;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar8) {
                *plVar19 = lVar12 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_198 + 0x10))(plStack_198);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
            }
          }
          plVar16 = plStack_250;
          unaff_x27 = ppuStack_258;
          if (plStack_250 != (long *)0x0) {
            plVar19 = plStack_250 + 1;
            do {
              lVar12 = *plVar19;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar8) {
                *plVar19 = lVar12 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_250 + 0x10))(plStack_250);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
            }
          }
        }
        else {
          unaff_x27 = *(undefined ***)(lVar24 + 0x18);
        }
        ppuVar17 = unaff_x27 + 1;
        if ((((*(int *)ppuVar17 == 0) && (*(int *)((long)unaff_x27 + 0xc) == 0)) &&
            (*(int *)((long)unaff_x27 + 0x14) == 0)) && (*(int *)(unaff_x27 + 2) == 0)) {
          unaff_x27[3] = (undefined *)CONCAT44(fStack_114,uStack_118);
          unaff_x27[2] = (undefined *)CONCAT44(iStack_11c,iStack_120);
          *ppuVar17 = (undefined *)CONCAT44(fStack_124,iStack_128);
          func_0x0001093783c0(unaff_x27 + 4,&uStack_110);
          func_0x00010937843c(unaff_x27 + 6,&piStack_100);
        }
        else {
          if (0 < (int)uVar25) {
            pfVar20 = (float *)unaff_x27[4];
            pfVar21 = (float *)CONCAT44(uStack_10c,uStack_110);
            uVar28 = uVar25;
            do {
              *pfVar20 = (1.0 - fVar31) * *pfVar21 + fVar31 * *pfVar20;
              uVar28 = uVar28 - 1;
              pfVar20 = pfVar20 + 1;
              pfVar21 = pfVar21 + 1;
            } while (uVar28 != 0);
          }
          uStack_118 = SUB84(unaff_x27[3],0);
          fStack_114 = (float)((ulong)unaff_x27[3] >> 0x20);
          iStack_120 = (int)unaff_x27[2];
          iStack_11c = (int)((ulong)unaff_x27[2] >> 0x20);
          iStack_128 = (int)*ppuVar17;
          fStack_124 = (float)((ulong)*ppuVar17 >> 0x20);
          func_0x0001093783c0(&uStack_110);
          func_0x00010937843c(&piStack_100,unaff_x27 + 6);
        }
      }
    }
    if (0 < (int)uVar25) {
      lVar12 = 0;
      do {
        FUN_1092c9a40(&lStack_170,CONCAT44(uStack_10c,uStack_110) + lVar12);
        lVar12 = lVar12 + 4;
      } while (uVar25 << 2 != lVar12);
    }
    func_0x000105675c90(&uStack_130);
  }
  fVar29 = fVar26 * fVar29;
  uStack_130._0_4_ = 1.0 / fVar29;
  FUN_10939f5b4(&lStack_170,&uStack_130);
  fVar27 = (fVar36 * fVar34 - fVar35 * fVar30) + -(fVar37 * fVar34) + fVar30 * fVar33;
  fVar31 = fVar27;
  _atan2f(fVar27,fVar29);
  uStack_130._0_4_ = fVar31;
  FUN_10939f5b4(&lStack_170,&uStack_130);
  fVar33 = (-(fVar30 * fVar36) - fVar35 * fVar34) + fVar34 * fVar33 + fVar30 * fVar37;
  fVar30 = fVar33;
  _atan2f(fVar33,fVar26 * fVar32);
  uStack_130._0_4_ = fVar30;
  FUN_10939f5b4(&lStack_170,&uStack_130);
  piVar15 = *(int **)(lVar11 + 0x40);
  if ((ulong)(uint)(piVar15[2] * piVar15[3] * piVar15[1] * *piVar15) != lStack_168 - lStack_170 >> 2
     ) {
    uStack_130._0_4_ = 1.0643024e-29;
    uStack_130._4_4_ = 1;
    iStack_128 = 0xf57dd17;
    fStack_124 = 1.4013e-45;
    iStack_120 = 0xae;
    iStack_11c = 0;
    FUN_109699380(&uStack_130);
  }
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_180 = 0x3f800000;
  puVar18 = *(undefined8 **)(*(long *)(param_2 + 8) + 0x58);
  if (*(char *)((long)puVar18 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_1c0,*puVar18,puVar18[1]);
  }
  else {
    uStack_1b8 = puVar18[1];
    uStack_1c0 = *puVar18;
    lStack_1b0 = puVar18[2];
  }
  lVar11 = lStack_170;
  uVar25 = lStack_168 - lStack_170;
  alStack_1e8[0] = 0x100000001;
  _memset_pattern16(&uStack_d8,&UNK_10dfd94a0,0x10);
  ppuStack_258 = (undefined **)CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d0);
  plStack_250 = (long *)(uVar25 >> 2 & 0xffffffff | (long)uStack_d8 << 0x20);
  func_0x000109d0f600(&uStack_130,&ppuStack_258,alStack_1e8,lVar11);
  uStack_d8 = &uStack_1c0;
  puVar18 = &uStack_1a0;
  FUN_10937a098(puVar18,&uStack_1c0,&UNK_10dd5b8f9,&uStack_d8,&ppuStack_258);
  uVar9 = CONCAT44(fStack_124,iStack_128);
  puVar18[7] = CONCAT44(iStack_11c,iStack_120);
  puVar18[6] = uVar9;
  puVar18[8] = CONCAT44(fStack_114,uStack_118);
  func_0x0001093783c0(puVar18 + 9,&uStack_110);
  func_0x00010937843c(puVar18 + 0xb,&piStack_100);
  func_0x000105675c90(&uStack_130);
  FUN_1096d0a64(&uStack_130,*(long *)(param_2 + 8) + 0x28);
  FUN_1096c9398(alStack_1e8,CONCAT44(uStack_130._4_4_,(float)uStack_130),&uStack_1a0);
  lVar11 = CONCAT44(uStack_130._4_4_,(float)uStack_130);
  uStack_130._0_4_ = 0.0;
  uStack_130._4_4_ = 0;
  if (lVar11 != 0) {
    pbVar10 = (byte *)CONCAT44(fStack_124,iStack_128);
    do {
      bVar4 = *pbVar10;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pbVar10,0x10);
      if (bVar8) {
        *pbVar10 = 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while ((cVar7 != '\0') || ((bVar4 & 1) != 0));
    pbVar1 = pbVar10 + 8;
    if (*(long *)(pbVar10 + 0x10) != 0) {
      pbVar1 = (byte *)(*(long *)(pbVar10 + 0x10) + 0x10);
    }
    *(long *)pbVar1 = lVar11;
    *(long *)(pbVar10 + 0x10) = lVar11;
    *pbVar10 = 0;
  }
  puVar18 = *(undefined8 **)(*(long *)(param_2 + 8) + 0x70);
  if (*(char *)((long)puVar18 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_200,*puVar18,puVar18[1]);
  }
  else {
    uStack_1f8 = puVar18[1];
    uStack_200 = *puVar18;
    lStack_1f0 = puVar18[2];
  }
  uStack_130 = &uStack_200;
  plVar16 = alStack_1e8;
  FUN_10937a098(plVar16,&uStack_200,&UNK_10dd5b8f9,&uStack_130,&uStack_d8);
  lVar24 = plVar16[9];
  FUN_1096ba870(&ppuStack_210);
  FUN_1096ba9b0(&ppuStack_210,*(long *)(param_2 + 8) + 0x18);
  lVar12 = *(long *)(param_2 + 8);
  lVar11 = *(long *)(lVar12 + 0x20);
  pfStack_220 = (float *)0x0;
  uStack_218 = 0;
  pfStack_228 = (float *)0x0;
  FUN_1093c71a0(&pfStack_228,lVar24,
                lVar24 + ((long)*(int *)(lVar11 + 0x14) + (long)*(int *)(lVar11 + 0x10)) * 4);
  lVar12 = *(long *)(lVar12 + 0x20);
  iVar5 = *(int *)(lVar12 + 0x10);
  lVar11 = (long)iVar5;
  pfVar20 = pfStack_228;
  if (0 < iVar5) {
    do {
      fVar26 = *pfVar20;
      _expf();
      fVar26 = fVar26 + 1.0;
      _logf();
      *pfVar20 = fVar26;
      lVar11 = lVar11 + -1;
      pfVar20 = pfVar20 + 1;
    } while (lVar11 != 0);
  }
  iVar6 = *(int *)(lVar12 + 0x14);
  FUN_1096baa30(&ppuStack_210);
  pfVar20 = (float *)(lVar24 + (long)(iVar6 + iVar5) * 4);
  uVar25 = *(long *)(lStack_208 + 0x20) - (long)*(float **)(lStack_208 + 0x18);
  if (0 < (int)(uVar25 >> 2)) {
    lVar11 = (long)(uVar25 * 0x40000000) >> 0x20;
    pfVar21 = *(float **)(lStack_208 + 0x18);
    pfVar22 = pfStack_228;
    do {
      *pfVar21 = *pfVar22;
      lVar11 = lVar11 + -1;
      pfVar21 = pfVar21 + 1;
      pfVar22 = pfVar22 + 1;
    } while (lVar11 != 0);
  }
  lVar11 = 0;
  fStack_114 = 0.0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  fStack_124 = 0.0;
  iStack_120 = 0;
  uStack_130._4_4_ = 0;
  iStack_128 = 0;
  uStack_130._0_4_ = 1.0;
  iStack_11c = 0x3f800000;
  uStack_108 = 0x3f800000;
  fVar26 = *pfVar20;
  fVar32 = pfVar20[1];
  fVar30 = pfVar20[2];
  fVar34 = 1.0 / SQRT(fVar26 * fVar26 + fVar32 * fVar32 + fVar30 * fVar30);
  fVar26 = fVar26 * fVar34;
  fVar32 = fVar32 * fVar34;
  fVar30 = fVar30 * fVar34;
  uStack_d8 = (undefined8 *)CONCAT44(fVar32,fVar26);
  fVar34 = pfVar20[5] * fVar30 + pfVar20[3] * fVar26 + pfVar20[4] * fVar32;
  fVar35 = pfVar20[3] - fVar26 * fVar34;
  fVar36 = pfVar20[4] - fVar32 * fVar34;
  fVar37 = pfVar20[5] - fVar30 * fVar34;
  fVar34 = 1.0 / SQRT(fVar37 * fVar37 + fVar35 * fVar35 + fVar36 * fVar36);
  fVar35 = fVar35 * fVar34;
  fVar36 = fVar36 * fVar34;
  fVar37 = fVar37 * fVar34;
  uStack_d0 = (undefined **)CONCAT44(fVar35,fVar30);
  uStack_c8 = (long *)CONCAT44(fVar37,fVar36);
  fVar34 = -(fVar37 * fVar26) + fVar35 * fVar30;
  fStack_c0 = -(fVar36 * fVar30) + fVar37 * fVar32;
  fStack_bc = fVar34;
  fStack_b8 = -(fVar35 * fVar32) + fVar36 * fVar26;
  puVar18 = &uStack_130;
  do {
    lVar24 = 0;
    lVar12 = 0;
    puVar23 = puVar18;
    do {
      puVar2 = (undefined4 *)((long)&uStack_d0 + lVar12 * 0xc);
      if ((int)lVar11 != 2) {
        puVar2 = (undefined4 *)((long)&uStack_d8 + lVar24);
      }
      puVar3 = (undefined4 *)((long)&uStack_d8 + lVar12 * 0xc + 4);
      if ((int)lVar11 != 1) {
        puVar3 = puVar2;
      }
      *(undefined4 *)puVar23 = *puVar3;
      lVar12 = lVar12 + 1;
      lVar24 = lVar24 + 0xc;
      puVar23 = (undefined8 *)((long)puVar23 + 4);
    } while (lVar24 != 0x24);
    lVar11 = lVar11 + 1;
    puVar18 = puVar18 + 2;
  } while (lVar11 != 3);
  fVar32 = pfVar20[6];
  fVar30 = pfVar20[7];
  fVar35 = pfVar20[8];
  fVar26 = pfVar20[9];
  _expf();
  lVar11 = 0;
  puVar18 = &uStack_130;
  do {
    lVar12 = 0;
    do {
      fVar36 = fVar26 * *(float *)((long)puVar18 + lVar12);
      *(float *)((long)puVar18 + lVar12) = fVar36;
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0xc);
    lVar11 = lVar11 + 1;
    puVar18 = puVar18 + 2;
  } while (lVar11 != 3);
  fVar26 = 0.0;
  uStack_d8 = (undefined8 *)0xc0d0ae3000000000;
  uStack_d0 = (undefined **)CONCAT44(uStack_d0._4_4_,0xc096a6a8);
  FUN_109699d9c(&uStack_130,&uStack_d8);
  _expf();
  fStack_124 = ((fVar30 - fVar27) / fVar32) * 10.0 + fVar26;
  fStack_114 = fVar36 - ((fVar35 - fVar33) / fVar32) * 10.0;
  uStack_108 = CONCAT44(fVar34 - (fVar29 / fVar32) * 10.0,(undefined4)uStack_108);
  uVar28 = *(ulong *)(lStack_148 + 8);
  uVar25 = uVar28;
  _hypotf(uVar28,uVar28 >> 0x20);
  uStack_140 = CONCAT44((float)(uVar28 >> 0x20) / (float)uVar25,(float)uVar28 / (float)uVar25);
  uStack_138 = 0;
  FUN_1096b9e2c(&ppuStack_258,&uStack_140);
  FUN_1096b985c(&uStack_d8,&ppuStack_258,&uStack_130);
  FUN_1096baa30(&ppuStack_210);
  *(undefined ***)(lStack_208 + 0x38) = uStack_d0;
  *(undefined8 **)(lStack_208 + 0x30) = uStack_d8;
  *(ulong *)(lStack_208 + 0x48) = CONCAT44(fStack_bc,fStack_c0);
  *(long **)(lStack_208 + 0x40) = uStack_c8;
  *(undefined8 *)(lStack_208 + 0x58) = uStack_b0;
  *(ulong *)(lStack_208 + 0x50) = CONCAT44(uStack_b4,fStack_b8);
  func_0x000107c2acec(param_1);
  *param_1 = &PTR_FUN_110afd8b8;
  pppuVar14 = &ppuStack_210;
  FUN_1096985c0(param_1[1] + 8);
  if (pfStack_228 != (float *)0x0) {
    pfStack_220 = pfStack_228;
    __ZdlPv();
  }
  ppuStack_210 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_210);
  if (lStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  func_0x000109379fe8(alStack_1e8);
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  func_0x000109379fe8(&uStack_1a0);
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  ppuStack_150 = &PTR_FUN_110b01d60;
  pppuVar13 = &ppuStack_150;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  FUN_1092bc814(unaff_x27 + 1);
  FUN_1092bc814(&uStack_1a0);
  FUN_1096d6c54(&ppuStack_258);
  func_0x000105675c90(&uStack_130);
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  FUN_109696618(&ppuStack_150);
  __Unwind_Resume();
  (*(code *)(*pppuVar14)[9])(pppuVar14,pppuVar13[1] + 1,4,1);
  FUN_1096c86b0(pppuVar14,pppuVar13[1] + 5);
  (*(code *)(*pppuVar14)[9])(pppuVar14,(long)pppuVar13[1] + 0xc,4,1);
  (*(code *)(*pppuVar14)[9])(pppuVar14,pppuVar13[1] + 2,4,1);
  (*(code *)(*pppuVar14)[9])(pppuVar14,(long)pppuVar13[1] + 0x14,4,1);
  if (1 < *(uint *)(pppuVar13[1] + 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001096d634c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*pppuVar14)[9])(pppuVar14,pppuVar13[1] + 0x18,4,1);
    return;
  }
  return;
}



/* Entry: 1096d6278; end: 1096d647f;  */

void FUN_1096d6278(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 8,4,1);
  FUN_1096c86b0(param_2,*(long *)(param_1 + 8) + 0x28);
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0xc,4,1);
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0x10,4,1);
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0x14,4,1);
  if (1 < *(uint *)(*(long *)(param_1 + 8) + 8)) {
                    /* WARNING: Could not recover jumptable at 0x0001096d634c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0xc0,4,1);
    return;
  }
  return;
}



/* Entry: 1096d6480; end: 1096d658f;  */

void FUN_1096d6480(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  
  lVar6 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar6,*param_2);
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 8), lVar6 == 0)) {
    param_2 = (undefined8 *)*param_2;
    lVar6 = *(long *)(param_1 + 8) + -0x20;
    puVar7 = param_2;
    (**(code **)*param_2)();
    FUN_109696718(lVar6,param_2);
    *(undefined8 **)(lVar6 + 8) = puVar7;
    *puVar7 = &PTR_DAT_1108a5c28;
    uVar12 = *(undefined8 *)(param_3 + 0x18);
    uVar16 = *(undefined8 *)(param_3 + 8);
    puVar7[2] = *(undefined8 *)(param_3 + 0x10);
    puVar7[1] = uVar16;
    puVar7[3] = uVar12;
    lVar6 = *(long *)(param_3 + 0x28);
    uVar12 = *(undefined8 *)(param_3 + 0x20);
    puVar7[5] = *(undefined8 *)(param_3 + 0x28);
    puVar7[4] = uVar12;
    if (lVar6 != 0) {
      plVar15 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *plVar15 = *plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_109407928(puVar7 + 6,param_3 + 0x30);
    return;
  }
  uVar16 = *(undefined8 *)(param_3 + 0x10);
  uVar12 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(lVar6 + 0x10) = uVar16;
  *(undefined8 *)(lVar6 + 8) = uVar12;
  func_0x0001093783c0(lVar6 + 0x20,param_3 + 0x20);
  plVar15 = (long *)(lVar6 + 0x30);
  plVar14 = (long *)(param_3 + 0x30);
  cVar3 = *(char *)(lVar6 + 0x48);
  if (cVar3 == *(char *)(param_3 + 0x48)) {
    if ((plVar15 != plVar14) && (cVar3 != '\0')) {
      lVar1 = *plVar14;
      lVar2 = *(long *)(param_3 + 0x38);
      uVar9 = lVar2 - lVar1 >> 2;
      uVar11 = *(ulong *)(lVar6 + 0x40);
      plVar14 = (long *)*plVar15;
      if ((ulong)((long)(uVar11 - (long)plVar14) >> 2) < uVar9) {
        plVar5 = plVar15;
        lVar8 = lVar1;
        lVar13 = lVar2;
        uVar10 = uVar9;
        if (plVar14 != (long *)0x0) {
          *(long **)(lVar6 + 0x38) = plVar14;
          __ZdlPv();
          uVar11 = 0;
          *plVar15 = 0;
          *(undefined8 *)(lVar6 + 0x38) = 0;
          *(undefined8 *)(lVar6 + 0x40) = 0;
          plVar5 = plVar14;
        }
        if (uVar9 >> 0x3e != 0) {
          FUN_109231bc0();
          if (uVar10 != 0) {
            FUN_109265f60();
            lVar6 = plVar5[1];
            lVar13 = lVar13 - lVar8;
            if (lVar13 != 0) {
              _memmove(lVar6,lVar8,lVar13);
            }
            plVar5[1] = lVar6 + lVar13;
          }
          return;
        }
        uVar10 = (long)uVar11 >> 1;
        if ((ulong)((long)uVar11 >> 1) <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7ffffffffffffffb < uVar11) {
          uVar10 = 0x3fffffffffffffff;
        }
        FUN_109265f60(plVar15,uVar10);
        lVar13 = *(long *)(lVar6 + 0x38);
        lVar2 = lVar2 - lVar1;
        if (lVar2 != 0) {
          _memmove(lVar13,lVar1,lVar2);
        }
        lVar13 = lVar13 + lVar2;
      }
      else {
        plVar15 = *(long **)(lVar6 + 0x38);
        if ((ulong)((long)plVar15 - (long)plVar14 >> 2) < uVar9) {
          lVar13 = lVar1 + ((long)plVar15 - (long)plVar14);
          if (plVar15 != plVar14) {
            _memmove(plVar14,lVar1);
            plVar15 = *(long **)(lVar6 + 0x38);
          }
          lVar2 = lVar2 - lVar13;
          if (lVar2 != 0) {
            _memmove(plVar15,lVar13,lVar2);
          }
          lVar13 = (long)plVar15 + lVar2;
        }
        else {
          lVar2 = lVar2 - lVar1;
          if (lVar2 != 0) {
            _memmove(plVar14,lVar1,lVar2);
          }
          lVar13 = (long)plVar14 + lVar2;
        }
      }
      *(long *)(lVar6 + 0x38) = lVar13;
      return;
    }
  }
  else if (cVar3 == '\0') {
    *plVar15 = 0;
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *(undefined8 *)(lVar6 + 0x40) = 0;
    FUN_109378600(plVar15,*plVar14,*(long *)(param_3 + 0x38),
                  *(long *)(param_3 + 0x38) - *plVar14 >> 2);
    *(undefined1 *)(lVar6 + 0x48) = 1;
  }
  else {
    if (*plVar15 != 0) {
      *(long *)(lVar6 + 0x38) = *plVar15;
      __ZdlPv();
    }
    *(undefined1 *)(lVar6 + 0x48) = 0;
  }
  return;
}



/* Entry: 1096d6590; end: 1096d66cb;  */

void FUN_1096d6590(undefined8 *param_1,double *param_2)

{
  long lVar1;
  double *pdVar2;
  undefined8 auStack_60 [3];
  undefined **ppuStack_48;
  long lStack_40;
  undefined1 *puStack_38;
  
  FUN_1096d5418(&ppuStack_48);
  lVar1 = lStack_40;
  pdVar2 = param_2;
  FUN_1096a7580(param_2,0x113735d00);
  *(undefined4 *)(lVar1 + 8) = *(undefined4 *)pdVar2;
  FUN_1096d1d38(param_2,0x113735cf8);
  FUN_1096c9b68(auStack_60);
  func_0x0001096d1ea4(lVar1 + 0x28,auStack_60[0]);
  pdVar2 = param_2;
  FUN_1096a7580(param_2,0x113735d08);
  *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)pdVar2;
  pdVar2 = param_2;
  FUN_1096a7580(param_2,0x113735d10);
  *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)pdVar2;
  pdVar2 = param_2;
  FUN_1096a7580(param_2,0x113735d18);
  *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)pdVar2;
  func_0x0001096c1e64(param_2,0x113735d20);
  *(float *)(lVar1 + 0xc0) = (float)*param_2;
  param_1[1] = lStack_40;
  *param_1 = ppuStack_48;
  lStack_40 = 0;
  puStack_38 = (undefined1 *)auStack_60;
  FUN_1096ca724(&puStack_38);
  ppuStack_48 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_48);
  return;
}



/* Entry: 1096d66cc; end: 1096d66ff;  */

undefined8 * FUN_1096d66cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096d6700; end: 1096d6733;  */

void FUN_1096d6700(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096d6734; end: 1096d6767;  */

undefined8 * FUN_1096d6734(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096d6768; end: 1096d679b;  */

void FUN_1096d6768(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096d679c; end: 1096d67b7;  */

void FUN_1096d679c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096d67b8; end: 1096d67ff;  */

void FUN_1096d67b8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096d6800; end: 1096d6857;  */

undefined8 * FUN_1096d6800(undefined8 *param_1)

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



/* Entry: 1096d6858; end: 1096d68af;  */

void FUN_1096d6858(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b085d8;
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



/* Entry: 1096d68b0; end: 1096d68fb;  */

void FUN_1096d68b0(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096d5418(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096d68fc; end: 1096d692b;  */

bool FUN_1096d68fc(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b085d8,0);
  return param_1 != 0;
}



/* Entry: 1096d692c; end: 1096d697b;  */

long FUN_1096d692c(long param_1)

{
  FUN_1096d697c(param_1 + 8);
  return param_1;
}



/* Entry: 1096d697c; end: 1096d6a2b;  */

long FUN_1096d697c(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  *(long *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
    FUN_1096ca830();
  }
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x80);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x68;
  func_0x000104c607c8(&lStack_28);
  lStack_28 = param_1 + 0x50;
  func_0x000104c607c8(&lStack_28);
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096d6a2c; end: 1096d6c53;  */

undefined *** FUN_1096d6a2c(undefined8 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined **ppuVar14;
  long lStack_a0;
  byte *pbStack_98;
  undefined **appuStack_90 [2];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = **(long **)*param_1;
  lVar8 = (*(long **)*param_1)[1];
  func_0x000109693fa4(lVar8,0x11382aa68);
  lVar8 = *(long *)(lVar8 + 8);
  if (lVar8 != 0) {
    piVar9 = (int *)(lVar8 + -8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar4) {
        *piVar9 = *piVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar10 = *(long *)(lVar13 + 8);
  uStack_68 = *(undefined8 *)(lVar10 + 0xa8);
  *(long *)(lVar10 + 0xa8) = lVar8;
  *(undefined ***)(lVar10 + 0xa0) = &PTR_FUN_110b00af0;
  ppuStack_70 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_70);
  lVar10 = *(long *)(lVar13 + 8);
  puVar5 = (undefined1 *)0x18;
  __Znwm();
  *puVar5 = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  lVar8 = *(long *)(lVar10 + 0xb0);
  *(long *)(lVar10 + 0xb0) = (long)puVar5;
  if (lVar8 != 0) {
    FUN_1096ca830();
    lVar10 = *(long *)(lVar13 + 8);
  }
  FUN_1096d0a64(&lStack_a0,lVar10 + 0x28);
  lVar8 = lStack_a0;
  lStack_a0 = 0;
  if (lVar8 != 0) {
    do {
      bVar2 = *pbStack_98;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbStack_98,0x10);
      if (bVar4) {
        *pbStack_98 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while ((cVar3 != '\0') || ((bVar2 & 1) != 0));
    pbVar1 = pbStack_98 + 8;
    if (*(long *)(pbStack_98 + 0x10) != 0) {
      pbVar1 = (byte *)(*(long *)(pbStack_98 + 0x10) + 0x10);
    }
    *(long *)pbVar1 = lVar8;
    *(long *)(pbStack_98 + 0x10) = lVar8;
    *pbStack_98 = 0;
  }
  lVar13 = *(long *)(lVar13 + 8);
  FUN_1096b72bc(&ppuStack_70,3,1,*(undefined4 *)(lVar13 + 0xc),*(undefined4 *)(lVar13 + 0x10));
  FUN_1096b7480(appuStack_90,&ppuStack_70);
  iVar7 = 0x10b01d40;
  pppuVar6 = appuStack_90;
  ___dynamic_cast(pppuVar6,&PTR_DAT_110b01d40,&PTR_DAT_110b04bf8,0);
  if (pppuVar6 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  ppuVar14 = pppuVar6[1];
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar11 = ppuVar14 + -1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar4) {
        *(int *)ppuVar11 = *(int *)ppuVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_78 = *(undefined8 *)(lVar13 + 0x20);
  *(undefined ***)(lVar13 + 0x20) = ppuVar14;
  *(undefined ***)(lVar13 + 0x18) = &PTR_FUN_110b04b98;
  ppuStack_80 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_80);
  appuStack_90[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_90);
  ppuStack_70 = &PTR_FUN_110b01d60;
  pppuVar6 = &ppuStack_70;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (iVar7 != 0) {
      func_0x000104bd46a0();
    }
    __Unwind_Resume();
    ppuVar14 = pppuVar6[1];
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar11 = ppuVar14 + 1;
      do {
        puVar12 = *ppuVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar4) {
          *ppuVar11 = puVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(*ppuVar14 + 0x10))(ppuVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
      }
    }
    return pppuVar6;
  }
  return pppuVar6;
}



/* Entry: 1096d6c54; end: 1096d6cab;  */

long FUN_1096d6c54(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 1096d6cac; end: 1096d6cbb;  */

void FUN_1096d6cac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b08788;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1096d6cbc; end: 1096d6cdb;  */

void FUN_1096d6cbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b08788;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096d6cdc; end: 1096d6cfb;  */

undefined8 * FUN_1096d6cdc(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1108a5c28;
  if ((*(char *)(param_1 + 0x60) == '\x01') && (*(long *)(param_1 + 0x48) != 0)) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  func_0x000105675a70(param_1 + 0x38);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096d6cfc; end: 1096d6d2b;  */

void FUN_1096d6cfc(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096d6d2c; end: 1096d6d7b;  */

void FUN_1096d6d2c(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0xa1;
  __Znam();
  lVar6 = 0x50;
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
  *(undefined1 *)(lVar3 + 0xa0) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096d6d7c; end: 1096d6dd3;  */

void FUN_1096d6d7c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b085d8;
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



/* Entry: 1096d6dd4; end: 1096d6dff;  */

void FUN_1096d6dd4(undefined8 *param_1)

{
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108a5c28;
  param_1[3] = 0x100000001;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



/* Entry: 1096d6e00; end: 1096d6e7f;  */

void FUN_1096d6e00(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_2 = &PTR_DAT_1108a5c28;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar6;
  param_2[1] = uVar5;
  lVar4 = *(long *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar5;
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
  FUN_109407928(param_2 + 6,param_1 + 0x30);
  return;
}



/* Entry: 1096d6e80; end: 1096d6e87;  */

void FUN_1096d6e80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096d6e88; end: 1096d6eb7;  */

void FUN_1096d6e88(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096d6eb8; end: 1096d6efb;  */

void FUN_1096d6eb8(undefined8 param_1,undefined8 param_2,byte *param_3)

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



/* Entry: 1096d6efc; end: 1096d6f27;  */

void FUN_1096d6efc(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b08630;
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



/* Entry: 1096d6f28; end: 1096d700f;  */

void FUN_1096d6f28(undefined8 *param_1,undefined1 *param_2)

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
  iVar3 = 0x10b02870;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    FUN_1096d318c("",0);
    func_0x000107c2accc();
    iVar3 = 0x10b02870;
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
  pcStack_58 = FUN_1096d7010;
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
  *extraout_x8 = &PTR_FUN_110b08600;
  ppuStack_80 = &PTR_FUN_110b01d60;
  uStack_78 = 0;
  func_0x000107c2acd4(&ppuStack_80);
  return;
}



/* Entry: 1096d7010; end: 1096d7087;  */

void FUN_1096d7010(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b08600;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096d7088; end: 1096d70b7;  */

bool FUN_1096d7088(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b08630,0);
  return param_1 != 0;
}



/* Entry: 1096d70b8; end: 1096d70e3;  */

void FUN_1096d70b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(4);
  return;
}



/* Entry: 1096d70e4; end: 1096d7127;  */

bool FUN_1096d70e4(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c051);
  return (int)plVar1 == 1;
}



/* Entry: 1096d7128; end: 1096d7153;  */

undefined8 FUN_1096d7128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096d7154; end: 1096d71ab;  */

void FUN_1096d7154(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b08630;
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



/* Entry: 1096d71ac; end: 1096d71d7;  */

void FUN_1096d71ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(8);
  return;
}



/* Entry: 1096d71d8; end: 1096d721b;  */

bool FUN_1096d71d8(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c058);
  return (int)plVar1 == 1;
}



/* Entry: 1096d721c; end: 1096d7247;  */

undefined8 FUN_1096d721c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096d7248; end: 1096d729f;  */

void FUN_1096d7248(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b08630;
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



/* Entry: 1096d72a0; end: 1096d7397;  */

undefined8 * FUN_1096d72a0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b09130;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,400);
  puVar1[0x31] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x30] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x26] = 0;
  puVar1[0x25] = 0;
  puVar1[0x28] = 0;
  puVar1[0x27] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  *puVar1 = &PTR_DAT_110b00de0;
  FUN_1096da0c0();
  *puVar1 = &PTR_FUN_110b08ce0;
  return param_1;
}



/* Entry: 1096d7398; end: 1096d73eb;  */

void FUN_1096d7398(long param_1)

{
  long *plVar1;
  long lStack_28;
  undefined8 **ppuStack_20;
  long *plStack_18;
  
  plVar1 = (long *)(*(long *)(param_1 + 8) + 0x188);
  if (*plVar1 != -1) {
    plStack_18 = &lStack_28;
    ppuStack_20 = &plStack_18;
    lStack_28 = param_1;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(plVar1,&ppuStack_20,FUN_1096da3d4);
  }
  return;
}



/* Entry: 1096d73ec; end: 1096d744f;  */

void FUN_1096d73ec(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lStack_40;
  undefined8 uStack_38;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  FUN_1096d7398();
  plVar1 = (long *)(*(long *)(param_1 + 8) + 0x180);
  if (*plVar1 != -1) {
    ppuStack_30 = &puStack_28;
    lStack_40 = param_1;
    uStack_38 = param_2;
    puStack_28 = (undefined1 *)&lStack_40;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(plVar1,&ppuStack_30,FUN_1096da51c);
  }
  return;
}



/* Entry: 1096d7450; end: 1096d7b87;  */

/* WARNING: Removing unreachable block (ram,0x0001096d75d8) */

void FUN_1096d7450(undefined8 *param_1,long param_2,float *param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined **appuStack_1a8 [2];
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  long lStack_178;
  undefined ***pppuStack_170;
  undefined ***pppuStack_168;
  long lStack_160;
  long lStack_158;
  undefined ***apppuStack_150 [2];
  undefined1 auStack_140 [32];
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long alStack_100 [2];
  undefined1 auStack_f0 [32];
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined **ppuStack_b0;
  long lStack_a8;
  
  FUN_1096d7398();
  lVar13 = *(long *)(param_4 + 8);
  lVar12 = *(long *)(lVar13 + 8);
  if ((lVar12 == 0) ||
     (lVar6 = lVar12, ___dynamic_cast(lVar12,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0), lVar6 == 0))
  {
LAB_1096d7a3c:
    puStack_120 = &UNK_10f57d0c1;
    puStack_118 = &UNK_10f57d0c5;
    uStack_110 = 0x55;
    FUN_109699380(&puStack_120);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1096d7a64);
    (*pcVar5)();
  }
  lVar7 = lVar12 + 0x10;
  ___dynamic_cast(lVar7,&PTR_DAT_110b01d40,&PTR_DAT_110b053a0,0);
  if (lVar7 == 0) goto LAB_1096d7a3c;
  lVar8 = lVar7;
  if (2 < (int)((ulong)(*(long *)(lVar13 + 0x10) - lVar12) >> 4)) {
    lVar8 = lVar12 + 0x20;
    ___dynamic_cast(lVar8,&PTR_DAT_110b01d40,&PTR_DAT_110b05060,0);
    if (lVar8 != 0) goto LAB_1096d7520;
  }
  func_0x000107c2acdc();
LAB_1096d7520:
  lStack_a8 = *(long *)(lVar8 + 8);
  if (lStack_a8 != 0) {
    piVar9 = (int *)(lStack_a8 + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = *piVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_b0 = &PTR_FUN_110b05018;
  FUN_1096ba1fc(&lStack_c8,lVar6);
  lVar12 = lStack_c8;
  if (0x2b0 < (ulong)(lStack_c0 - lStack_c8)) {
    lVar13 = lStack_c8 + 0x220;
    lVar8 = lStack_c0 - (lStack_c8 + 0x2b0);
    if (lVar8 != 0) {
      _memmove(lVar13,lStack_c8 + 0x2b0,lVar8);
    }
    lStack_c0 = lVar13 + lVar8;
  }
  if ((*(int *)(*(long *)(*(long *)(param_2 + 8) + 0xf0) + 8) == 0xa7) &&
     (lStack_c0 - lVar12 == 0x2b0)) {
    lVar13 = lStack_c0;
    if (lVar12 + 0x2a0 != lStack_c0) {
      lVar13 = lVar12 + 0x2a0;
    }
    lVar8 = lVar12 + 0x268;
    if (lVar13 != lVar8) {
      _memmove(lVar12 + 600,lVar8,lVar13 - lVar8);
    }
    lStack_c0 = lVar12 + 600 + (lVar13 - lVar8);
  }
  lVar12 = *(long *)(lVar6 + 8);
  fVar24 = *(float *)(lVar12 + 8);
  fVar18 = *(float *)(lVar12 + 0xc);
  fVar16 = *(float *)(lVar12 + 0x10);
  fVar14 = *(float *)(lVar12 + 0x14);
  FUN_1096a5b40(param_3,0x11382aa18);
  fVar23 = 1.0 / (fVar18 * fVar18 + fVar24 * fVar24);
  fVar19 = -(fVar18 * fVar23);
  fVar21 = fVar24 * fVar23;
  fVar18 = fVar21;
  _hypotf(fVar21,fVar19);
  fVar15 = *param_3;
  fVar17 = param_3[1];
  fVar25 = param_3[2];
  fVar22 = param_3[3];
  puStack_120._0_4_ = 1.0 / (fVar18 * fVar15);
  FUN_10939f5b4(&lStack_c8,&puStack_120);
  fVar23 = fVar14 * fVar19 + fVar16 * -(fVar24 * fVar23) + -(fVar22 * fVar19) + fVar21 * fVar25;
  _atan2f(fVar23,fVar18 * fVar15);
  puStack_120._0_4_ = fVar23;
  FUN_10939f5b4(&lStack_c8,&puStack_120);
  fVar14 = (-(fVar21 * fVar14) - fVar16 * fVar19) + fVar19 * fVar25 + fVar21 * fVar22;
  _atan2f(fVar14,fVar18 * fVar17);
  puStack_120 = (undefined *)CONCAT44(puStack_120._4_4_,fVar14);
  FUN_10939f5b4(&lStack_c8,&puStack_120);
  uStack_d0 = 0x100000001;
  func_0x000109d0f600(&puStack_120,*(undefined8 *)(*(long *)(param_2 + 8) + 0xf0),&uStack_d0,
                      lStack_c8);
  FUN_1096d0a64(&ppuStack_198,*(long *)(param_2 + 8) + 0xd8);
  FUN_1096c9300(&pppuStack_170,ppuStack_198,&puStack_120);
  uStack_110 = lStack_160;
  puStack_118 = (undefined *)pppuStack_168;
  uStack_108 = lStack_158;
  func_0x0001093783c0(alStack_100,apppuStack_150);
  func_0x00010937843c(auStack_f0,auStack_140);
  func_0x000105675c90(&pppuStack_170);
  ppuVar10 = ppuStack_198;
  ppuStack_198 = (undefined **)0x0;
  if (ppuVar10 != (undefined **)0x0) {
    do {
      puVar4 = *ppuStack_190;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuStack_190,0x10);
      if (bVar3) {
        *(byte *)ppuStack_190 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while ((cVar2 != '\0') || (((ulong)puVar4 & 1) != 0));
    ppuVar11 = ppuStack_190 + 1;
    if (ppuStack_190[2] != (undefined *)0x0) {
      ppuVar11 = (undefined **)(ppuStack_190[2] + 0x10);
    }
    *ppuVar11 = (undefined *)ppuVar10;
    ppuStack_190[2] = (undefined *)ppuVar10;
    *(byte *)ppuStack_190 = 0;
  }
  lStack_178 = *(long *)(lVar7 + 8);
  if (lStack_178 != 0) {
    piVar9 = (int *)(lStack_178 + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = *piVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_180 = &PTR_FUN_110b05358;
  FUN_1096ba9b0(&ppuStack_180,*(long *)(param_2 + 8) + 200);
  FUN_1096baa30(&ppuStack_180);
  uVar1 = *(uint *)(*(long *)(lStack_178 + 0x10) + 0x14);
  if (0 < (int)uVar1) {
    lVar12 = 0;
    do {
      uVar20 = *(undefined4 *)(alStack_100[0] + lVar12);
      FUN_1096baa30(&ppuStack_180);
      *(undefined4 *)
       (*(long *)(lStack_178 + 0x18) +
        (long)(int)((ulong)(*(long *)(lStack_178 + 0x20) - *(long *)(lStack_178 + 0x18)) >> 2) * 4 +
        (long)*(int *)(*(long *)(lStack_178 + 0x10) + 0x14) * -4 + lVar12) = uVar20;
      lVar12 = lVar12 + 4;
    } while ((ulong)uVar1 * 4 - lVar12 != 0);
  }
  FUN_1096bad98(&ppuStack_198,&ppuStack_180);
  apppuStack_150[0] = &ppuStack_b0;
  lVar12 = *(long *)(param_2 + 8);
  pppuStack_170 = &ppuStack_198;
  pppuStack_168 = &ppuStack_180;
  lStack_160 = param_2;
  lStack_158 = lVar7;
  FUN_1096d7b88(appuStack_1a8,&pppuStack_170,
                (ulong)(*(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x28)) >> 2 & 0xffffffff,
                *(long *)(lVar12 + 0x28),
                (ulong)(*(long *)(lVar12 + 0x78) - *(long *)(lVar12 + 0x70)) >> 2 & 0xffffffff,
                *(long *)(lVar12 + 0x70),*(long *)(lVar12 + 0xd0) + 0x40);
  ppuVar10 = ppuStack_198;
  ppuVar11 = ppuStack_190;
  if (*(char *)(*(long *)(param_2 + 8) + 0x168) != '\x01') {
    if (0 < (int)uVar1) {
      lVar12 = 0;
      lVar13 = (ulong)uVar1 * 4;
      do {
        uVar20 = *(undefined4 *)(alStack_100[0] + lVar13 + lVar12);
        FUN_1096baa30(&ppuStack_180);
        *(undefined4 *)
         (*(long *)(lStack_178 + 0x18) +
          (long)(int)((ulong)(*(long *)(lStack_178 + 0x20) - *(long *)(lStack_178 + 0x18)) >> 2) * 4
          + (long)*(int *)(*(long *)(lStack_178 + 0x10) + 0x14) * -4 + lVar12) = uVar20;
        lVar12 = lVar12 + 4;
      } while (lVar13 - lVar12 != 0);
    }
    FUN_1096bad98(&ppuStack_1c0,&ppuStack_180);
    if (ppuStack_198 != (undefined **)0x0) {
      ppuStack_190 = ppuStack_198;
      __ZdlPv();
    }
    ppuStack_198 = ppuStack_1c0;
    uStack_188 = uStack_1b0;
    ppuStack_190 = ppuStack_1b8;
    ppuVar10 = ppuStack_1c0;
    ppuVar11 = ppuStack_1b8;
  }
  for (; ppuVar10 != ppuVar11; ppuVar10 = (undefined **)((long)ppuVar10 + 0xc)) {
    *(float *)ppuVar10 = -*(float *)ppuVar10;
  }
  lVar12 = *(long *)(param_2 + 8);
  FUN_1096d7b88(&ppuStack_1c0,&pppuStack_170,
                (ulong)(*(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40)) >> 2 & 0xffffffff,
                *(long *)(lVar12 + 0x40),
                (ulong)(*(long *)(lVar12 + 0x90) - *(long *)(lVar12 + 0x88)) >> 2 & 0xffffffff,
                *(long *)(lVar12 + 0x88),lVar12 + 0x170);
  func_0x000107c2acec(param_1);
  *param_1 = &PTR_FUN_110afd8b8;
  FUN_1096985c0(param_1[1] + 8,&ppuStack_1c0);
  FUN_1096985c0(param_1[1] + 8,appuStack_1a8);
  ppuStack_1c0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_1c0);
  appuStack_1a8[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_1a8);
  if (ppuStack_198 != (undefined **)0x0) {
    ppuStack_190 = ppuStack_198;
    __ZdlPv();
  }
  ppuStack_180 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_180);
  func_0x000105675c90(&puStack_120);
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  ppuStack_b0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_b0);
  return;
}



/* Entry: 1096d7b88; end: 1096d7eb7;  */

void FUN_1096d7b88(long param_1,undefined8 *param_2,undefined8 param_3,uint *param_4,
                  undefined8 param_5,int *param_6,undefined8 *param_7)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 *extraout_x8;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 *puVar10;
  float *pfVar11;
  ulong uVar12;
  undefined8 *puVar13;
  uint *puVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined **ppuStack_130;
  long lStack_128;
  undefined **ppuStack_118;
  long lStack_110;
  undefined **ppuStack_108;
  long lStack_100;
  float *pfStack_f8;
  float *pfStack_f0;
  undefined **appuStack_e0 [2];
  long lStack_d0;
  ulong uStack_c8;
  uint *puStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = param_2[2];
  lVar20 = *(long *)*param_2;
  lVar16 = ((long *)*param_2)[1];
  FUN_1096b9358();
  FUN_1096b9498();
  uVar19 = (lVar16 - lVar20 >> 2) * -0x5555555555555555;
  iVar18 = (int)uVar19;
  FUN_1096b5198(*(long *)(param_1 + 8) + 0x18,(long)iVar18);
  FUN_1096b9498(param_1);
  lVar20 = *(long *)(param_1 + 8);
  if (*(long *)(lVar20 + 0x10) != param_7[1]) {
    func_0x000107c2acd4(lVar20 + 8);
    uVar23 = *param_7;
    *(undefined8 *)(lVar20 + 0x10) = param_7[1];
    *(undefined8 *)(lVar20 + 8) = uVar23;
    if (*(long *)(lVar20 + 0x10) != 0) {
      piVar4 = (int *)(*(long *)(lVar20 + 0x10) + -8);
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
  lVar16 = *(long *)(param_2[1] + 8);
  FUN_1096b9498(param_1);
  lVar20 = *(long *)(param_1 + 8);
  uVar24 = *(undefined8 *)(lVar16 + 0x38);
  uVar23 = *(undefined8 *)(lVar16 + 0x30);
  uVar29 = *(undefined8 *)(lVar16 + 0x40);
  uVar27 = *(undefined8 *)(lVar16 + 0x58);
  uVar26 = *(undefined8 *)(lVar16 + 0x50);
  *(undefined8 *)(lVar20 + 0x48) = *(undefined8 *)(lVar16 + 0x48);
  *(undefined8 *)(lVar20 + 0x40) = uVar29;
  *(undefined8 *)(lVar20 + 0x58) = uVar27;
  *(undefined8 *)(lVar20 + 0x50) = uVar26;
  *(undefined8 *)(lVar20 + 0x38) = uVar24;
  *(undefined8 *)(lVar20 + 0x30) = uVar23;
  lVar16 = *(long *)(param_2[1] + 8);
  FUN_1096b9498(param_1);
  lVar20 = *(long *)(param_1 + 8);
  uVar23 = *(undefined8 *)(lVar16 + 0x60);
  *(undefined8 *)(lVar20 + 0x68) = *(undefined8 *)(lVar16 + 0x68);
  *(undefined8 *)(lVar20 + 0x60) = uVar23;
  uVar21 = *(long *)(*(long *)(lVar17 + 8) + 0x18) - *(long *)(*(long *)(lVar17 + 8) + 0x10);
  uVar3 = (long)(uVar21 * 0x40000000) >> 0x20;
  FUN_1094cca1c(&lStack_90);
  uVar22 = uVar21 >> 2 & 0x7fffffff;
  iVar15 = (int)(uVar21 >> 2);
  if (0 < iVar15) {
    lVar20 = 0;
    puVar14 = param_4;
    uVar6 = uVar22;
    do {
      lVar16 = *(long *)(param_2[3] + 8);
      param_4 = puVar14 + 1;
      uVar3 = (ulong)*puVar14;
      FUN_1096b6ad4(lVar16 + 8,uVar3,
                    (ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >> 2 & 0xffffffff,
                    *(long *)(lVar16 + 0x18),3,&uStack_78);
      *(undefined8 *)(lStack_90 + lVar20) = uStack_78;
      *(undefined4 *)((undefined8 *)(lStack_90 + lVar20) + 1) = uStack_70;
      lVar20 = lVar20 + 0xc;
      uVar6 = uVar6 - 1;
      puVar14 = param_4;
    } while (uVar6 != 0);
  }
  FUN_1096b9498(param_1);
  lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x18);
  if (0 < iVar18) {
    uVar6 = 0;
    do {
      if (iVar15 < 1) {
        uVar23 = 0;
        fVar25 = 0.0;
      }
      else {
        puVar10 = (undefined8 *)(*(long *)*param_2 + uVar6 * 0xc);
        lVar16 = *(long *)(lVar17 + 8);
        uVar24 = *puVar10;
        pfVar5 = (float *)(lStack_90 + 8);
        uVar23 = 0;
        fVar25 = 0.0;
        piVar4 = *(int **)(lVar16 + 0x10);
        pfVar11 = (float *)(*(long *)(lVar16 + 0xa0) +
                           (long)(*(int *)(lVar16 + 0xc0) * (int)uVar6) * 4);
        uVar12 = uVar22;
        do {
          puVar13 = (undefined8 *)(*(long *)*param_2 + (long)*piVar4 * 0xc);
          fVar28 = *pfVar11;
          uVar29 = *puVar13;
          uVar23 = CONCAT44((float)((ulong)uVar23 >> 0x20) +
                            (((float)((ulong)uVar24 >> 0x20) - (float)((ulong)uVar29 >> 0x20)) +
                            (float)((ulong)*(undefined8 *)(pfVar5 + -2) >> 0x20)) * fVar28,
                            (float)uVar23 +
                            (((float)uVar24 - (float)uVar29) + (float)*(undefined8 *)(pfVar5 + -2))
                            * fVar28);
          fVar25 = fVar25 + ((*(float *)(puVar10 + 1) - *(float *)(puVar13 + 1)) + *pfVar5) * fVar28
          ;
          pfVar5 = pfVar5 + 3;
          uVar12 = uVar12 - 1;
          piVar4 = piVar4 + 1;
          pfVar11 = pfVar11 + 1;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)(lVar20 + uVar6 * 0xc);
      *puVar10 = uVar23;
      *(float *)(puVar10 + 1) = fVar25;
      uVar6 = uVar6 + 1;
    } while (uVar6 != (uVar19 & 0x7fffffff));
  }
  if (*(long *)(param_2[4] + 8) != 0) {
    piVar4 = *(int **)(*(long *)(lVar17 + 8) + 0x58);
    uVar19 = *(long *)(*(long *)(lVar17 + 8) + 0x60) - (long)piVar4;
    if (0 < (int)(uVar19 >> 2)) {
      lVar16 = *(long *)(*(long *)(param_2[4] + 8) + 0x18);
      uVar19 = uVar19 >> 2 & 0x7fffffff;
      do {
        puVar10 = (undefined8 *)(lVar16 + (long)*param_6 * 0xc);
        uVar23 = *puVar10;
        puVar13 = (undefined8 *)(lVar20 + (long)*piVar4 * 0xc);
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
        *puVar13 = uVar23;
        uVar19 = uVar19 - 1;
        piVar4 = piVar4 + 1;
        param_6 = param_6 + 1;
      } while (uVar19 != 0);
    }
  }
  lVar20 = lStack_90;
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (lStack_90 != 0) {
      lStack_88 = lStack_90;
      __ZdlPv();
    }
    FUN_109696618(param_1);
    __Unwind_Resume();
    pcStack_98 = FUN_1096d7eb8;
    lStack_d0 = lVar17;
    uStack_c8 = uVar21 >> 2;
    puStack_c0 = param_4;
    lStack_b8 = param_1;
    puStack_b0 = param_2;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_1096d7398();
    FUN_1096ba870(appuStack_e0);
    FUN_1096ba9b0();
    FUN_1096bad98(&pfStack_f8,appuStack_e0);
    FUN_1096b9358(&ppuStack_108);
    FUN_1096b9614(&ppuStack_108,
                  (int)((ulong)((long)pfStack_f0 - (long)pfStack_f8) >> 2) * -0x55555555);
    lVar17 = *(long *)(*(long *)(lVar20 + 8) + 0xd0);
    FUN_1096b9498(&ppuStack_108);
    lVar16 = lStack_100;
    pfVar5 = pfStack_f8;
    if (*(long *)(lStack_100 + 0x10) != *(long *)(lVar17 + 0x48)) {
      func_0x000107c2acd4(lStack_100 + 8);
      uVar23 = *(undefined8 *)(lVar17 + 0x40);
      *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar17 + 0x48);
      *(undefined8 *)(lVar16 + 8) = uVar23;
      pfVar5 = pfStack_f8;
      if (*(long *)(lVar16 + 0x10) != 0) {
        piVar4 = (int *)(*(long *)(lVar16 + 0x10) + -8);
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
    for (; pfVar5 != pfStack_f0; pfVar5 = pfVar5 + 3) {
      *pfVar5 = -*pfVar5;
    }
    FUN_1096b9358(&ppuStack_118);
    FUN_1096b9614(&ppuStack_118,
                  (int)((ulong)((long)pfStack_f0 - (long)pfStack_f8) >> 2) * -0x55555555);
    lVar17 = *(long *)(lVar20 + 8);
    FUN_1096b9498(&ppuStack_118);
    lVar16 = lStack_110;
    if (*(long *)(lStack_110 + 0x10) != *(long *)(lVar17 + 0x178)) {
      func_0x000107c2acd4(lStack_110 + 8);
      uVar23 = *(undefined8 *)(lVar17 + 0x170);
      *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar17 + 0x178);
      *(undefined8 *)(lVar16 + 8) = uVar23;
      if (*(long *)(lVar16 + 0x10) != 0) {
        piVar4 = (int *)(*(long *)(lVar16 + 0x10) + -8);
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
    if (*(long *)(uVar3 + 8) != 0) {
      lVar16 = *(long *)(uVar3 + 8);
      if (lVar16 != 0) {
        piVar4 = (int *)(lVar16 + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppuStack_130 = &PTR_FUN_110b05018;
      lStack_128 = lVar16;
      FUN_1096b9498(&ppuStack_118);
      lVar17 = *(long *)(lVar20 + 8);
      uVar19 = *(long *)(lVar17 + 0x60) - (long)*(int **)(lVar17 + 0x58);
      if (0 < (int)(uVar19 >> 2)) {
        lVar7 = *(long *)(lStack_110 + 0x18);
        lVar8 = *(long *)(lVar16 + 0x18);
        uVar19 = uVar19 >> 2 & 0x7fffffff;
        piVar4 = *(int **)(lVar17 + 0x58);
        piVar9 = *(int **)(lVar17 + 0x88);
        do {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar9 * 0xc);
          uVar23 = *puVar10;
          puVar13 = (undefined8 *)(lVar7 + (long)*piVar4 * 0xc);
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
          *puVar13 = uVar23;
          uVar19 = uVar19 - 1;
          piVar4 = piVar4 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar19 != 0);
      }
      FUN_1096b9498(&ppuStack_108);
      lVar20 = *(long *)(lVar20 + 8);
      uVar19 = *(long *)(lVar20 + 0x60) - (long)*(int **)(lVar20 + 0x58);
      if (0 < (int)(uVar19 >> 2)) {
        lVar17 = *(long *)(lStack_100 + 0x18);
        lVar16 = *(long *)(lVar16 + 0x18);
        uVar19 = uVar19 >> 2 & 0x7fffffff;
        piVar4 = *(int **)(lVar20 + 0x58);
        piVar9 = *(int **)(lVar20 + 0x70);
        do {
          puVar10 = (undefined8 *)(lVar16 + (long)*piVar9 * 0xc);
          uVar23 = *puVar10;
          puVar13 = (undefined8 *)(lVar17 + (long)*piVar4 * 0xc);
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
          *puVar13 = uVar23;
          uVar19 = uVar19 - 1;
          piVar4 = piVar4 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar19 != 0);
      }
      ppuStack_130 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_130);
    }
    extraout_x8[1] = lStack_110;
    *extraout_x8 = ppuStack_118;
    if (extraout_x8[1] != 0) {
      piVar4 = (int *)(extraout_x8[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *extraout_x8 = &PTR_FUN_110b05018;
    extraout_x8[3] = lStack_100;
    extraout_x8[2] = ppuStack_108;
    if (extraout_x8[3] != 0) {
      piVar4 = (int *)(extraout_x8[3] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    extraout_x8[2] = &PTR_FUN_110b05018;
    ppuStack_118 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_118);
    ppuStack_108 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_108);
    if (pfStack_f8 != (float *)0x0) {
      pfStack_f0 = pfStack_f8;
      __ZdlPv();
    }
    appuStack_e0[0] = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(appuStack_e0);
    return;
  }
  return;
}



/* Entry: 1096d7eb8; end: 1096d8223;  */

void FUN_1096d7eb8(undefined8 *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined **ppuStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  float *pfStack_68;
  float *pfStack_60;
  undefined **appuStack_50 [2];
  
  FUN_1096d7398();
  FUN_1096ba870(appuStack_50);
  FUN_1096ba9b0();
  FUN_1096bad98(&pfStack_68,appuStack_50);
  FUN_1096b9358(&ppuStack_78);
  FUN_1096b9614(&ppuStack_78,(int)((ulong)((long)pfStack_60 - (long)pfStack_68) >> 2) * -0x55555555)
  ;
  lVar13 = *(long *)(*(long *)(param_2 + 8) + 0xd0);
  FUN_1096b9498(&ppuStack_78);
  lVar7 = lStack_70;
  pfVar4 = pfStack_68;
  if (*(long *)(lStack_70 + 0x10) != *(long *)(lVar13 + 0x48)) {
    func_0x000107c2acd4(lStack_70 + 8);
    uVar12 = *(undefined8 *)(lVar13 + 0x40);
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar13 + 0x48);
    *(undefined8 *)(lVar7 + 8) = uVar12;
    pfVar4 = pfStack_68;
    if (*(long *)(lVar7 + 0x10) != 0) {
      piVar3 = (int *)(*(long *)(lVar7 + 0x10) + -8);
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
  for (; pfVar4 != pfStack_60; pfVar4 = pfVar4 + 3) {
    *pfVar4 = -*pfVar4;
  }
  FUN_1096b9358(&ppuStack_88);
  FUN_1096b9614(&ppuStack_88,(int)((ulong)((long)pfStack_60 - (long)pfStack_68) >> 2) * -0x55555555)
  ;
  lVar13 = *(long *)(param_2 + 8);
  FUN_1096b9498(&ppuStack_88);
  lVar7 = lStack_80;
  if (*(long *)(lStack_80 + 0x10) != *(long *)(lVar13 + 0x178)) {
    func_0x000107c2acd4(lStack_80 + 8);
    uVar12 = *(undefined8 *)(lVar13 + 0x170);
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar13 + 0x178);
    *(undefined8 *)(lVar7 + 8) = uVar12;
    if (*(long *)(lVar7 + 0x10) != 0) {
      piVar3 = (int *)(*(long *)(lVar7 + 0x10) + -8);
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
  if (*(long *)(param_3 + 8) != 0) {
    lVar7 = *(long *)(param_3 + 8);
    if (lVar7 != 0) {
      piVar3 = (int *)(lVar7 + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppuStack_a0 = &PTR_FUN_110b05018;
    lStack_98 = lVar7;
    FUN_1096b9498(&ppuStack_88);
    lVar13 = *(long *)(param_2 + 8);
    uVar9 = *(long *)(lVar13 + 0x60) - (long)*(int **)(lVar13 + 0x58);
    if (0 < (int)(uVar9 >> 2)) {
      lVar5 = *(long *)(lStack_80 + 0x18);
      lVar6 = *(long *)(lVar7 + 0x18);
      uVar9 = uVar9 >> 2 & 0x7fffffff;
      piVar3 = *(int **)(lVar13 + 0x58);
      piVar8 = *(int **)(lVar13 + 0x88);
      do {
        puVar10 = (undefined8 *)(lVar6 + (long)*piVar8 * 0xc);
        uVar12 = *puVar10;
        puVar11 = (undefined8 *)(lVar5 + (long)*piVar3 * 0xc);
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
        *puVar11 = uVar12;
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 1;
        piVar8 = piVar8 + 1;
      } while (uVar9 != 0);
    }
    FUN_1096b9498(&ppuStack_78);
    lVar13 = *(long *)(param_2 + 8);
    uVar9 = *(long *)(lVar13 + 0x60) - (long)*(int **)(lVar13 + 0x58);
    if (0 < (int)(uVar9 >> 2)) {
      lVar5 = *(long *)(lStack_70 + 0x18);
      lVar7 = *(long *)(lVar7 + 0x18);
      uVar9 = uVar9 >> 2 & 0x7fffffff;
      piVar3 = *(int **)(lVar13 + 0x58);
      piVar8 = *(int **)(lVar13 + 0x70);
      do {
        puVar10 = (undefined8 *)(lVar7 + (long)*piVar8 * 0xc);
        uVar12 = *puVar10;
        puVar11 = (undefined8 *)(lVar5 + (long)*piVar3 * 0xc);
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
        *puVar11 = uVar12;
        uVar9 = uVar9 - 1;
        piVar3 = piVar3 + 1;
        piVar8 = piVar8 + 1;
      } while (uVar9 != 0);
    }
    ppuStack_a0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_a0);
  }
  param_1[1] = lStack_80;
  *param_1 = ppuStack_88;
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
  *param_1 = &PTR_FUN_110b05018;
  param_1[3] = lStack_70;
  param_1[2] = ppuStack_78;
  if (param_1[3] != 0) {
    piVar3 = (int *)(param_1[3] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[2] = &PTR_FUN_110b05018;
  ppuStack_88 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_88);
  ppuStack_78 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_78);
  if (pfStack_68 != (float *)0x0) {
    pfStack_60 = pfStack_68;
    __ZdlPv();
  }
  appuStack_50[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_50);
  return;
}



/* Entry: 1096d8224; end: 1096d891f;  */

void FUN_1096d8224(long param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  byte bStack_51;
  
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 8,8,1);
  FUN_1096c86b0(param_2,*(long *)(param_1 + 8) + 0xd8);
  lVar5 = *(long *)(param_1 + 8);
  uVar8 = *(long *)(lVar5 + 0x18) - *(long *)(lVar5 + 0x10) >> 2;
  uVar2 = uVar8;
  if (0x7f < uVar8) {
    do {
      plStack_70 = (long *)(CONCAT71(plStack_70._1_7_,(char)uVar2) | 0x80);
      (**(code **)(*param_2 + 0x48))(param_2,&plStack_70,1,1);
      uVar8 = uVar2 >> 7;
      uVar4 = uVar2 >> 0xe;
      uVar2 = uVar8;
    } while (uVar4 != 0);
  }
  plStack_70 = (long *)CONCAT71(plStack_70._1_7_,(char)uVar8);
  (**(code **)(*param_2 + 0x48))(param_2,&plStack_70,1,1);
  (**(code **)(*param_2 + 0x48))
            (param_2,*(long *)(lVar5 + 0x10),4,
             (*(long *)(lVar5 + 0x18) - *(long *)(lVar5 + 0x10)) * 0x40000000 >> 0x20);
  lVar5 = *(long *)(param_1 + 8);
  uVar8 = *(long *)(lVar5 + 0x30) - *(long *)(lVar5 + 0x28) >> 2;
  uVar2 = uVar8;
  if (0x7f < uVar8) {
    do {
      plStack_70 = (long *)(CONCAT71(plStack_70._1_7_,(char)uVar2) | 0x80);
      (**(code **)(*param_2 + 0x48))(param_2,&plStack_70,1,1);
      uVar8 = uVar2 >> 7;
      uVar4 = uVar2 >> 0xe;
      uVar2 = uVar8;
    } while (uVar4 != 0);
  }
  plStack_70 = (long *)CONCAT71(plStack_70._1_7_,(char)uVar8);
  (**(code **)(*param_2 + 0x48))(param_2,&plStack_70,1,1);
  (**(code **)(*param_2 + 0x48))
            (param_2,*(long *)(lVar5 + 0x28),4,
             (*(long *)(lVar5 + 0x30) - *(long *)(lVar5 + 0x28)) * 0x40000000 >> 0x20);
  lVar5 = *(long *)(param_1 + 8);
  uVar8 = *(long *)(lVar5 + 0x48) - *(long *)(lVar5 + 0x40) >> 2;
  uVar2 = uVar8;
  if (0x7f < uVar8) {
    do {
      plStack_70 = (long *)(CONCAT71(plStack_70._1_7_,(char)uVar2) | 0x80);
      (**(code **)(*param_2 + 0x48))(param_2,&plStack_70,1,1);
      uVar8 = uVar2 >> 7;
      uVar4 = uVar2 >> 0xe;
      uVar2 = uVar8;
    } while (uVar4 != 0);
  }
  plStack_70 = (long *)CONCAT71(plStack_70._1_7_,(char)uVar8);
  (**(code **)(*param_2 + 0x48))(param_2,&plStack_70,1,1);
  (**(code **)(*param_2 + 0x48))
            (param_2,*(long *)(lVar5 + 0x40),4,
             (*(long *)(lVar5 + 0x48) - *(long *)(lVar5 + 0x40)) * 0x40000000 >> 0x20);
  lVar5 = *(long *)(param_1 + 8);
  uVar8 = *(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58) >> 2;
  uVar2 = uVar8;
  if (0x7f < uVar8) {
    do {
      plStack_70 = (long *)(CONCAT71(plStack_70._1_7_,(char)uVar2) | 0x80);
      (**(code **)(*param_2 + 0x48))(param_2,&plStack_70,1,1);
      uVar8 = uVar2 >> 7;
      uVar4 = uVar2 >> 0xe;
      uVar2 = uVar8;
    } while (uVar4 != 0);
  }
  plStack_70 = (long *)CONCAT71(plStack_70._1_7_,(char)uVar8);
  (**(code **)(*param_2 + 0x48))(param_2,&plStack_70,1,1);
  (**(code **)(*param_2 + 0x48))
            (param_2,*(long *)(lVar5 + 0x58),4,
             (*(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58)) * 0x40000000 >> 0x20);
  lVar5 = *(long *)(param_1 + 8);
  uVar8 = *(long *)(lVar5 + 0x78) - *(long *)(lVar5 + 0x70) >> 2;
  uVar2 = uVar8;
  if (0x7f < uVar8) {
    do {
      plStack_70 = (long *)(CONCAT71(plStack_70._1_7_,(char)uVar2) | 0x80);
      (**(code **)(*param_2 + 0x48))(param_2,&plStack_70,1,1);
      uVar8 = uVar2 >> 7;
      uVar4 = uVar2 >> 0xe;
      uVar2 = uVar8;
    } while (uVar4 != 0);
  }
  plStack_70 = (long *)CONCAT71(plStack_70._1_7_,(char)uVar8);
  (**(code **)(*param_2 + 0x48))(param_2,&plStack_70,1,1);
  (**(code **)(*param_2 + 0x48))
            (param_2,*(long *)(lVar5 + 0x70),4,
             (*(long *)(lVar5 + 0x78) - *(long *)(lVar5 + 0x70)) * 0x40000000 >> 0x20);
  lVar5 = *(long *)(param_1 + 8);
  uVar8 = *(long *)(lVar5 + 0x90) - *(long *)(lVar5 + 0x88) >> 2;
  uVar2 = uVar8;
  if (0x7f < uVar8) {
    do {
      plStack_70 = (long *)(CONCAT71(plStack_70._1_7_,(char)uVar2) | 0x80);
      (**(code **)(*param_2 + 0x48))(param_2,&plStack_70,1,1);
      uVar8 = uVar2 >> 7;
      uVar4 = uVar2 >> 0xe;
      uVar2 = uVar8;
    } while (uVar4 != 0);
  }
  plStack_70 = (long *)CONCAT71(plStack_70._1_7_,(char)uVar8);
  (**(code **)(*param_2 + 0x48))(param_2,&plStack_70,1,1);
  lVar12 = *(long *)(lVar5 + 0x88);
  (**(code **)(*param_2 + 0x48))
            (param_2,lVar12,4,(*(long *)(lVar5 + 0x90) - lVar12) * 0x40000000 >> 0x20);
  lVar5 = *(long *)(param_1 + 8);
  if (*(long *)(lVar5 + 8) == 0) {
    iVar3 = *(int *)(lVar5 + 0xb8);
    plVar9 = (long *)(long)iVar3;
    plStack_68 = (long *)0x0;
    plStack_60 = (long *)0x0;
    plStack_70 = (long *)0x0;
    if (iVar3 == 0) {
      plVar10 = (long *)0x0;
      plVar6 = (long *)0x0;
    }
    else {
      if (iVar3 < 0) {
        FUN_1096d9c08();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1096d88f8);
        (*pcVar1)();
      }
      FUN_1096d9c1c();
      plStack_60 = plVar9 + lVar12 * 3;
      plStack_70 = plVar9;
      _bzero();
      plVar10 = plVar9 + (((long)iVar3 * 0x18 - 0x18U) / 0x18) * 3 + 3;
      lVar5 = *(long *)(param_1 + 8);
      plVar6 = plVar9;
      plStack_68 = plVar10;
      if (0 < *(int *)(lVar5 + 0xb8)) {
        lVar12 = 0;
        do {
          lVar11 = *(long *)(lVar5 + 0xa0) + (long)(*(int *)(lVar5 + 0xc0) * (int)lVar12) * 4;
          FUN_10942bf40(plVar9,lVar11,lVar11 + (long)*(int *)(lVar5 + 0xbc) * 4);
          lVar12 = lVar12 + 1;
          lVar5 = *(long *)(param_1 + 8);
          plVar9 = plVar9 + 3;
          plVar6 = plStack_70;
        } while (lVar12 < *(int *)(lVar5 + 0xb8));
      }
    }
    uVar8 = ((long)plVar10 - (long)plVar6 >> 3) * -0x5555555555555555;
    uVar2 = uVar8;
    if (0x7f < uVar8) {
      do {
        bStack_51 = (byte)uVar2 | 0x80;
        (**(code **)(*param_2 + 0x48))(param_2,&bStack_51,1,1);
        uVar8 = uVar2 >> 7;
        uVar4 = uVar2 >> 0xe;
        uVar2 = uVar8;
      } while (uVar4 != 0);
    }
    bStack_51 = (byte)uVar8;
    (**(code **)(*param_2 + 0x48))(param_2,&bStack_51,1,1);
    for (; plVar6 != plVar10; plVar6 = plVar6 + 3) {
      uVar8 = plVar6[1] - *plVar6 >> 2;
      uVar2 = uVar8;
      if (0x7f < uVar8) {
        do {
          bStack_51 = (byte)uVar2 | 0x80;
          (**(code **)(*param_2 + 0x48))(param_2,&bStack_51,1,1);
          uVar8 = uVar2 >> 7;
          uVar4 = uVar2 >> 0xe;
          uVar2 = uVar8;
        } while (uVar4 != 0);
      }
      bStack_51 = (byte)uVar8;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_51,1,1);
      (**(code **)(*param_2 + 0x48))(param_2,*plVar6,4,(plVar6[1] - *plVar6) * 0x40000000 >> 0x20);
    }
    FUN_1096d9c60(&plStack_70);
  }
  else {
    plStack_70._0_4_ = *(undefined4 *)(lVar5 + 0xb8);
    (**(code **)(*param_2 + 0x48))(param_2,&plStack_70,4,1);
    plStack_70 = (long *)CONCAT44(plStack_70._4_4_,*(undefined4 *)(lVar5 + 0xbc));
    (**(code **)(*param_2 + 0x48))(param_2,&plStack_70,4,1);
    iVar3 = *(int *)(lVar5 + 0xb8);
    if (0 < iVar3) {
      iVar7 = 0;
      uVar2 = (ulong)*(uint *)(lVar5 + 0xbc);
      do {
        if (0 < (int)uVar2) {
          lVar11 = 0;
          lVar12 = 0;
          do {
            (**(code **)(*param_2 + 0x48))
                      (param_2,*(long *)(lVar5 + 0xa0) + (long)(iVar7 * *(int *)(lVar5 + 0xc0)) * 4
                               + lVar11,4,1);
            lVar12 = lVar12 + 1;
            uVar2 = (ulong)*(int *)(lVar5 + 0xbc);
            lVar11 = lVar11 + 4;
          } while (lVar12 < (long)uVar2);
          iVar3 = *(int *)(lVar5 + 0xb8);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
    }
    (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0x168,1,1);
  }
  (**(code **)(*param_3 + 0x20))(param_3,param_2,*(long *)(param_1 + 8) + 200);
  return;
}



/* Entry: 1096d8920; end: 1096d919f;  */

void FUN_1096d8920(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  undefined ***pppuVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined **ppuVar15;
  int iVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  uint uStack_a4;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 8,8,1);
  if ((int)plVar9 != 1) goto LAB_1096d8c60;
  plVar9 = param_2;
  FUN_1096c88b0(param_2,*(long *)(param_1 + 8) + 0xd8);
  iVar21 = 0;
  if ((int)plVar9 != 0) {
    lVar17 = *(long *)(param_1 + 8);
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_a0,1,1);
    if ((int)plVar9 == 1) {
      uVar14 = 0;
      uVar22 = 0;
      do {
        uVar14 = ((ulong)ppuStack_a0 & 0x7f) << (uVar22 & 0x3f) | uVar14;
        if (-1 < (char)ppuStack_a0) {
          func_0x000108a5942c(lVar17 + 0x10,uVar14);
          uVar22 = *(long *)(lVar17 + 0x18) - *(long *)(lVar17 + 0x10);
          plVar9 = param_2;
          (**(code **)(*param_2 + 0x40))
                    (param_2,*(long *)(lVar17 + 0x10),4,(long)(uVar22 * 0x40000000) >> 0x20);
          if ((int)plVar9 == (int)(uVar22 >> 2)) {
            lVar17 = *(long *)(param_1 + 8);
            plVar9 = param_2;
            (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_a0,1,1);
            if ((int)plVar9 == 1) {
              uVar14 = 0;
              uVar22 = 0;
              goto LAB_1096d8a70;
            }
          }
          break;
        }
        plVar9 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_a0,1,1);
        uVar22 = uVar22 + 7;
      } while ((int)plVar9 == 1);
    }
    goto LAB_1096d8c60;
  }
  goto LAB_1096d8c64;
  while( true ) {
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_a0,1,1);
    uVar22 = uVar22 + 7;
    if ((int)plVar9 != 1) break;
LAB_1096d8a70:
    uVar14 = ((ulong)ppuStack_a0 & 0x7f) << (uVar22 & 0x3f) | uVar14;
    if (-1 < (char)ppuStack_a0) {
      func_0x000108a5942c(lVar17 + 0x28,uVar14);
      uVar22 = *(long *)(lVar17 + 0x30) - *(long *)(lVar17 + 0x28);
      plVar9 = param_2;
      (**(code **)(*param_2 + 0x40))
                (param_2,*(long *)(lVar17 + 0x28),4,(long)(uVar22 * 0x40000000) >> 0x20);
      if ((int)plVar9 == (int)(uVar22 >> 2)) {
        lVar17 = *(long *)(param_1 + 8);
        plVar9 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_a0,1,1);
        if ((int)plVar9 == 1) {
          uVar14 = 0;
          uVar22 = 0;
          goto LAB_1096d8b18;
        }
      }
      break;
    }
  }
  goto LAB_1096d8c60;
  while( true ) {
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_a0,1,1);
    uVar22 = uVar22 + 7;
    if ((int)plVar9 != 1) break;
LAB_1096d8b18:
    uVar14 = ((ulong)ppuStack_a0 & 0x7f) << (uVar22 & 0x3f) | uVar14;
    if (-1 < (char)ppuStack_a0) {
      func_0x000108a5942c(lVar17 + 0x40,uVar14);
      uVar22 = *(long *)(lVar17 + 0x48) - *(long *)(lVar17 + 0x40);
      plVar9 = param_2;
      (**(code **)(*param_2 + 0x40))
                (param_2,*(long *)(lVar17 + 0x40),4,(long)(uVar22 * 0x40000000) >> 0x20);
      if ((int)plVar9 == (int)(uVar22 >> 2)) {
        lVar17 = *(long *)(param_1 + 8);
        plVar9 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_a0,1,1);
        if ((int)plVar9 == 1) {
          uVar14 = 0;
          uVar22 = 0;
          goto LAB_1096d8bc0;
        }
      }
      break;
    }
  }
  goto LAB_1096d8c60;
  while( true ) {
    uVar14 = 0;
    uVar22 = 0;
    while( true ) {
      uVar14 = ((ulong)ppuStack_a0 & 0x7f) << (uVar22 & 0x3f) | uVar14;
      if (-1 < (char)ppuStack_a0) break;
      plVar9 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_a0,1,1);
      uVar22 = uVar22 + 7;
      if ((int)plVar9 != 1) goto LAB_1096d8e34;
    }
    func_0x00010742a308(ppuVar19,uVar14);
    ppuVar20 = ppuVar19 + 3;
    uVar22 = (long)ppuVar19[1] - (long)*ppuVar19;
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,*ppuVar19,4,(long)(uVar22 * 0x40000000) >> 0x20);
    if ((int)plVar9 != (int)(uVar22 >> 2)) goto LAB_1096d8e34;
    ppuVar19 = ppuVar20;
    if (ppuVar20 == ppuVar18) break;
LAB_1096d8ee0:
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_a0,1,1);
    if ((int)plVar9 != 1) goto LAB_1096d8e34;
  }
LAB_1096d8f98:
  lVar17 = ((long)ppuVar18 - (long)ppuVar15 >> 3) * -0x5555555555555555;
  iVar21 = (int)((ulong)((long)ppuVar15[1] - (long)*ppuVar15) >> 2);
  uVar2 = iVar21 + 6;
  if (-4 < iVar21) {
    uVar2 = iVar21 + 3;
  }
  iVar16 = (int)lVar17;
  FUN_1096ac994(&ppuStack_a0,(long)(int)((uVar2 & 0xfffffffc) * iVar16));
  lVar23 = *(long *)(param_1 + 8);
  lVar11 = *(long *)(lVar23 + 0xa0);
  if (lVar11 != 0) {
    *(long *)(lVar23 + 0xa8) = lVar11;
    _free(*(undefined8 *)(lVar11 + -8));
    *(long *)(lVar23 + 0xa0) = 0;
    *(undefined8 *)(lVar23 + 0xa8) = 0;
    *(undefined8 *)(lVar23 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar23 + 0xa8) = uStack_98;
  *(undefined ***)(lVar23 + 0xa0) = ppuStack_a0;
  *(undefined8 *)(lVar23 + 0xb0) = uStack_90;
  *(int *)(lVar23 + 0xb8) = iVar16;
  *(int *)(lVar23 + 0xbc) = iVar21;
  *(uint *)(lVar23 + 0xc0) = uVar2 & 0xfffffffc;
  if (ppuVar18 != ppuVar15) {
    lVar11 = 0;
    puVar3 = *ppuVar15;
    puVar4 = ppuVar15[1];
    uVar22 = (long)puVar4 - (long)puVar3 >> 2;
    if (uVar22 < 2) {
      uVar22 = 1;
    }
    do {
      if (puVar4 != puVar3) {
        puVar12 = (undefined4 *)ppuVar15[lVar11 * 3];
        puVar13 = (undefined4 *)
                  (*(long *)(*(long *)(param_1 + 8) + 0xa0) +
                  (long)(*(int *)(*(long *)(param_1 + 8) + 0xc0) * (int)lVar11) * 4);
        uVar14 = uVar22;
        do {
          *puVar13 = *puVar12;
          uVar14 = uVar14 - 1;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        } while (uVar14 != 0);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != lVar17);
  }
  FUN_1096d9c60(&ppuStack_c0);
  goto LAB_1096d9094;
  while( true ) {
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_a0,1,1);
    uVar22 = uVar22 + 7;
    if ((int)plVar9 != 1) break;
LAB_1096d8bc0:
    uVar14 = ((ulong)ppuStack_a0 & 0x7f) << (uVar22 & 0x3f) | uVar14;
    if (-1 < (char)ppuStack_a0) {
      func_0x000108a5942c(lVar17 + 0x58,uVar14);
      uVar22 = *(long *)(lVar17 + 0x60) - *(long *)(lVar17 + 0x58);
      plVar9 = param_2;
      (**(code **)(*param_2 + 0x40))
                (param_2,*(long *)(lVar17 + 0x58),4,(long)(uVar22 * 0x40000000) >> 0x20);
      if ((int)plVar9 == (int)(uVar22 >> 2)) {
        plVar9 = param_2;
        FUN_1096d91a0(param_2,*(long *)(param_1 + 8) + 0x70);
        iVar21 = 0;
        if ((int)plVar9 != 0) {
          plVar9 = param_2;
          FUN_1096d91a0(param_2,*(long *)(param_1 + 8) + 0x88);
          iVar21 = (int)plVar9;
        }
        goto LAB_1096d8c64;
      }
      break;
    }
  }
LAB_1096d8c60:
  iVar21 = 0;
LAB_1096d8c64:
  lVar17 = *(long *)(param_1 + 8);
  if (*(long *)(lVar17 + 8) == 0) {
    ppuStack_c0 = (undefined **)0x0;
    ppuStack_b8 = (undefined **)0x0;
    ppuStack_b0 = (undefined **)0x0;
    if (iVar21 != 0) {
      pppuVar10 = &ppuStack_a0;
      plVar9 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,pppuVar10,1,1);
      if ((int)plVar9 == 1) {
        ppuVar18 = (undefined **)0x0;
        uVar22 = 0;
        do {
          ppuVar18 = (undefined **)
                     (((ulong)ppuStack_a0 & 0x7f) << (uVar22 & 0x3f) | (ulong)ppuVar18);
          if (-1 < (char)ppuStack_a0) {
            if (ppuVar18 == (undefined **)0x0) {
              ppuVar18 = (undefined **)0x0;
              ppuVar15 = (undefined **)0x0;
              goto LAB_1096d8f98;
            }
            if ((undefined **)0xaaaaaaaaaaaaaaa < ppuVar18) goto LAB_1096d9158;
            ppuVar15 = ppuVar18;
            FUN_1096d9c1c();
            _bzero();
            ppuVar18 = ppuVar15 + (((long)ppuVar18 * 0x18 - 0x18U) / 0x18) * 3 + 3;
            ppuStack_b0 = ppuVar15 + (long)pppuVar10 * 3;
            ppuVar19 = ppuVar15;
            ppuStack_c0 = ppuVar15;
            ppuStack_b8 = ppuVar18;
            goto LAB_1096d8ee0;
          }
          pppuVar10 = &ppuStack_a0;
          plVar9 = param_2;
          (**(code **)(*param_2 + 0x40))(param_2,pppuVar10,1,1);
          uVar22 = uVar22 + 7;
        } while ((int)plVar9 == 1);
      }
    }
LAB_1096d8e34:
    FUN_1096d9c60(&ppuStack_c0);
  }
  else if (((iVar21 != 0) &&
           (plVar9 = param_2, (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_c0,4,1),
           (int)plVar9 == 1)) &&
          (plVar9 = param_2, (**(code **)(*param_2 + 0x40))(param_2,&uStack_a4,4,1),
          uVar2 = uStack_a4, (int)plVar9 == 1)) {
    iVar21 = (int)ppuStack_c0;
    uVar1 = uStack_a4 + 6;
    if (-4 < (int)uStack_a4) {
      uVar1 = uStack_a4 + 3;
    }
    FUN_1096ac994(&ppuStack_a0,(long)(int)((uVar1 & 0xfffffffc) * (int)ppuStack_c0));
    uVar7 = uStack_98;
    ppuVar18 = ppuStack_a0;
    lVar11 = *(long *)(lVar17 + 0xa0);
    if (lVar11 != 0) {
      *(long *)(lVar17 + 0xa8) = lVar11;
      _free(*(undefined8 *)(lVar11 + -8));
    }
    *(undefined8 *)(lVar17 + 0xa8) = uVar7;
    *(undefined ***)(lVar17 + 0xa0) = ppuVar18;
    *(undefined8 *)(lVar17 + 0xb0) = uStack_90;
    *(int *)(lVar17 + 0xb8) = iVar21;
    *(uint *)(lVar17 + 0xbc) = uVar2;
    *(uint *)(lVar17 + 0xc0) = uVar1 & 0xfffffffc;
    if (0 < (int)ppuStack_c0) {
      iVar21 = 0;
      uVar22 = (ulong)uStack_a4;
      iVar16 = (int)ppuStack_c0;
      do {
        if (0 < (int)uVar22) {
          lVar23 = 0;
          lVar11 = 0;
          do {
            plVar9 = param_2;
            (**(code **)(*param_2 + 0x40))
                      (param_2,*(long *)(lVar17 + 0xa0) +
                               (long)(iVar21 * *(int *)(lVar17 + 0xc0)) * 4 + lVar23,4,1);
            if ((int)plVar9 != 1) goto LAB_1096d8e40;
            lVar11 = lVar11 + 1;
            uVar22 = (ulong)(int)uStack_a4;
            lVar23 = lVar23 + 4;
          } while (lVar11 < (long)uVar22);
          iVar16 = (int)ppuStack_c0;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar16);
    }
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 0x168,1,1);
    if ((int)plVar9 == 1) {
LAB_1096d9094:
      (**(code **)(*param_3 + 0x28))(&ppuStack_c0,param_3,param_2);
      pppuVar10 = &ppuStack_c0;
      ___dynamic_cast(pppuVar10,&PTR_DAT_110b01d40,&PTR_DAT_110b04bf8,0);
      if (pppuVar10 == (undefined ***)0x0) {
        func_0x000107c2acdc();
      }
      ppuVar18 = pppuVar10[1];
      if (ppuVar18 != (undefined **)0x0) {
        ppuVar15 = ppuVar18 + -1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
          if (bVar6) {
            *(int *)ppuVar15 = *(int *)ppuVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lVar17 = *(long *)(param_1 + 8);
      uStack_98 = *(undefined8 *)(lVar17 + 0xd0);
      *(undefined ***)(lVar17 + 0xd0) = ppuVar18;
      *(undefined ***)(lVar17 + 200) = &PTR_FUN_110b04b98;
      ppuStack_a0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_a0);
      ppuStack_c0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_c0);
      func_0x0001096966c0(param_3[1] + -0x20,uRam000000011382aa08);
    }
  }
LAB_1096d8e40:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_1096d9158:
  FUN_1096d9c08();
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1096d9160);
  (*pcVar8)();
}



/* Entry: 1096d91a0; end: 1096d9273;  */

bool FUN_1096d91a0(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bStack_31;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x40))(param_1,&bStack_31,1,1);
  if ((int)plVar1 == 1) {
    uVar2 = 0;
    uVar3 = 0;
    do {
      uVar2 = ((ulong)bStack_31 & 0x7f) << (uVar3 & 0x3f) | uVar2;
      if (-1 < (char)bStack_31) {
        func_0x000108a5942c(param_2,uVar2);
        uVar3 = param_2[1] - *param_2;
        (**(code **)(*param_1 + 0x40))(param_1,*param_2,4,(long)(uVar3 * 0x40000000) >> 0x20);
        return (int)param_1 == (int)(uVar3 >> 2);
      }
      uVar3 = uVar3 + 7;
      plVar1 = param_1;
      (**(code **)(*param_1 + 0x40))(param_1,&bStack_31,1,1);
    } while ((int)plVar1 == 1);
  }
  return false;
}



/* Entry: 1096d9274; end: 1096d9a83;  */

void FUN_1096d9274(undefined8 *param_1,double *param_2)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *****pppppuVar4;
  double *pdVar5;
  long lVar6;
  undefined ****ppppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  uint *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  uint *puVar19;
  undefined8 *puVar20;
  undefined **ppuVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  float *pfVar28;
  ulong uVar29;
  undefined **ppuVar30;
  float fVar31;
  undefined ***pppuVar32;
  undefined *puVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  double dVar38;
  undefined **appuStack_198 [2];
  undefined8 ****ppppuStack_188;
  ulong uStack_180;
  byte bStack_171;
  undefined ***pppuStack_170;
  undefined ***pppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined **ppuStack_138;
  ulong uStack_130;
  uint *puStack_128;
  uint uStack_11c;
  long lStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined **appuStack_e0 [2];
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1096d72a0(&ppuStack_d0);
  lVar18 = lStack_c8;
  pdVar5 = param_2;
  FUN_1096a7580(param_2,0x113735d30);
  iVar25 = *(int *)pdVar5;
  *(long *)(lVar18 + 8) = (long)iVar25;
  if (iVar25 == 0) {
    ppuStack_c0 = (undefined **)&UNK_10f57dfae;
    puStack_b8 = &UNK_10f57dfc1;
    uStack_b0 = 0x11e;
    FUN_1096993dc(&ppuStack_c0,&UNK_10f57e063);
  }
  FUN_1096d1d38(param_2,0x113735d28);
  FUN_1096c9b68(&ppuStack_c0);
  func_0x0001096d1ea4(lVar18 + 0xd8,ppuStack_c0);
  pppuStack_f8 = &ppuStack_c0;
  FUN_1096ca724(&pppuStack_f8);
  pdVar5 = param_2;
  func_0x0001096b50e4(param_2,0x113735d38);
  FUN_1096d9a84(&ppuStack_c0,pdVar5);
  lVar6 = *(long *)(lVar18 + 0x10);
  if (lVar6 != 0) {
    *(long *)(lVar18 + 0x18) = lVar6;
    __ZdlPv();
    *(long *)(lVar18 + 0x10) = 0;
    *(undefined8 *)(lVar18 + 0x18) = 0;
    *(undefined8 *)(lVar18 + 0x20) = 0;
  }
  *(undefined **)(lVar18 + 0x18) = puStack_b8;
  *(undefined ***)(lVar18 + 0x10) = ppuStack_c0;
  *(undefined8 *)(lVar18 + 0x20) = uStack_b0;
  pdVar5 = param_2;
  func_0x0001096b50e4(param_2,0x113735d40);
  FUN_1096d9a84(&ppuStack_c0,pdVar5);
  lVar6 = *(long *)(lVar18 + 0x28);
  if (lVar6 != 0) {
    *(long *)(lVar18 + 0x30) = lVar6;
    __ZdlPv();
    *(long *)(lVar18 + 0x28) = 0;
    *(undefined8 *)(lVar18 + 0x30) = 0;
    *(undefined8 *)(lVar18 + 0x38) = 0;
  }
  *(undefined **)(lVar18 + 0x30) = puStack_b8;
  *(undefined ***)(lVar18 + 0x28) = ppuStack_c0;
  *(undefined8 *)(lVar18 + 0x38) = uStack_b0;
  pdVar5 = param_2;
  func_0x0001096b50e4(param_2,0x113735d48);
  FUN_1096d9a84(&ppuStack_c0,pdVar5);
  lVar6 = *(long *)(lVar18 + 0x40);
  if (lVar6 != 0) {
    *(long *)(lVar18 + 0x48) = lVar6;
    __ZdlPv();
    *(long *)(lVar18 + 0x40) = 0;
    *(undefined8 *)(lVar18 + 0x48) = 0;
    *(undefined8 *)(lVar18 + 0x50) = 0;
  }
  *(undefined **)(lVar18 + 0x48) = puStack_b8;
  *(undefined ***)(lVar18 + 0x40) = ppuStack_c0;
  *(undefined8 *)(lVar18 + 0x50) = uStack_b0;
  pdVar5 = param_2;
  func_0x0001096b50e4(param_2,0x113735d50);
  FUN_1096d9a84(&ppuStack_c0,pdVar5);
  lVar6 = *(long *)(lVar18 + 0x58);
  if (lVar6 != 0) {
    *(long *)(lVar18 + 0x60) = lVar6;
    __ZdlPv();
    *(long *)(lVar18 + 0x58) = 0;
    *(undefined8 *)(lVar18 + 0x60) = 0;
    *(undefined8 *)(lVar18 + 0x68) = 0;
  }
  *(undefined **)(lVar18 + 0x60) = puStack_b8;
  *(undefined ***)(lVar18 + 0x58) = ppuStack_c0;
  *(undefined8 *)(lVar18 + 0x68) = uStack_b0;
  pdVar5 = param_2;
  func_0x0001096b50e4(param_2,0x113735d58);
  FUN_1096d9a84(&ppuStack_c0,pdVar5);
  lVar6 = *(long *)(lVar18 + 0x70);
  if (lVar6 != 0) {
    *(long *)(lVar18 + 0x78) = lVar6;
    __ZdlPv();
    *(long *)(lVar18 + 0x70) = 0;
    *(undefined8 *)(lVar18 + 0x78) = 0;
    *(undefined8 *)(lVar18 + 0x80) = 0;
  }
  *(undefined **)(lVar18 + 0x78) = puStack_b8;
  *(undefined ***)(lVar18 + 0x70) = ppuStack_c0;
  *(undefined8 *)(lVar18 + 0x80) = uStack_b0;
  pdVar5 = param_2;
  func_0x0001096b50e4(param_2,0x113735d60);
  FUN_1096d9a84(&ppuStack_c0,pdVar5);
  lVar6 = *(long *)(lVar18 + 0x88);
  if (lVar6 != 0) {
    *(long *)(lVar18 + 0x90) = lVar6;
    __ZdlPv();
    *(long *)(lVar18 + 0x88) = 0;
    *(undefined8 *)(lVar18 + 0x90) = 0;
    *(undefined8 *)(lVar18 + 0x98) = 0;
  }
  *(undefined **)(lVar18 + 0x90) = puStack_b8;
  *(undefined ***)(lVar18 + 0x88) = ppuStack_c0;
  *(undefined8 *)(lVar18 + 0x98) = uStack_b0;
  func_0x0001096b50e4(param_2,0x113735d68);
  FUN_1096973b4(&pppuStack_f8);
  ppppuVar7 = &pppuStack_f8;
  ___dynamic_cast(ppppuVar7,&PTR_DAT_110b01d40,&PTR_DAT_110b04bf8,0);
  if (ppppuVar7 == (undefined ****)0x0) {
    func_0x000107c2acdc();
  }
  pppuVar32 = ppppuVar7[1];
  if (pppuVar32 != (undefined ***)0x0) {
    pppuVar8 = pppuVar32 + -1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar3) {
        *(int *)pppuVar8 = *(int *)pppuVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_b8 = *(undefined **)(lVar18 + 0xd0);
  *(undefined ****)(lVar18 + 0xd0) = pppuVar32;
  *(undefined ***)(lVar18 + 200) = &PTR_FUN_110b04b98;
  ppuStack_c0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_c0);
  pppuStack_f8 = (undefined ***)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&pppuStack_f8);
  pdVar5 = param_2;
  FUN_10969e0b4(param_2,0x113735d70);
  *(undefined1 *)(lVar18 + 0x168) = *(undefined1 *)pdVar5;
  lVar6 = *(long *)(lVar18 + 0x30) - *(long *)(lVar18 + 0x28);
  if (lVar6 != *(long *)(lVar18 + 0x18) - *(long *)(lVar18 + 0x10)) {
    ppuStack_c0 = (undefined **)&UNK_10f57e07c;
    puStack_b8 = &UNK_10f57dfc1;
    uStack_b0 = 0x128;
    FUN_109699380(&ppuStack_c0);
    lVar6 = *(long *)(lVar18 + 0x18) - *(long *)(lVar18 + 0x10);
  }
  if (*(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x40) != lVar6) {
    ppuStack_c0 = (undefined **)&UNK_10f57e0bb;
    puStack_b8 = &UNK_10f57dfc1;
    uStack_b0 = 0x129;
    FUN_109699380(&ppuStack_c0);
  }
  lVar6 = *(long *)(lVar18 + 0x78) - *(long *)(lVar18 + 0x70);
  if (lVar6 != *(long *)(lVar18 + 0x60) - *(long *)(lVar18 + 0x58)) {
    ppuStack_c0 = (undefined **)&UNK_10f57e0fb;
    puStack_b8 = &UNK_10f57dfc1;
    uStack_b0 = 0x12a;
    FUN_109699380(&ppuStack_c0);
    lVar6 = *(long *)(lVar18 + 0x60) - *(long *)(lVar18 + 0x58);
  }
  if (*(long *)(lVar18 + 0x90) - *(long *)(lVar18 + 0x88) != lVar6) {
    ppuStack_c0 = (undefined **)&UNK_10f57e139;
    puStack_b8 = &UNK_10f57dfc1;
    uStack_b0 = 299;
    FUN_109699380(&ppuStack_c0);
  }
  FUN_1096ba870(appuStack_e0);
  FUN_1096ba9b0(appuStack_e0,lVar18 + 200);
  FUN_1096baba8(&pppuStack_f8,appuStack_e0);
  pppuVar8 = pppuStack_f0;
  pppuVar32 = pppuStack_f8;
  lVar6 = *(long *)(lVar18 + 0x10);
  lVar10 = *(long *)(lVar18 + 0x18);
  func_0x0001096c1e64(param_2,0x113735d78);
  uVar23 = ((long)pppuVar8 - (long)pppuVar32 >> 2) * -0x5555555555555555;
  uVar29 = lVar10 - lVar6;
  uVar27 = uVar29 >> 2;
  dVar38 = *param_2;
  iVar25 = (int)uVar27;
  uVar24 = iVar25 + 6;
  if (-4 < iVar25) {
    uVar24 = iVar25 + 3;
  }
  uVar24 = uVar24 & 0xfffffffc;
  iVar22 = (int)uVar23;
  lVar6 = (long)(int)(uVar24 * iVar22);
  puStack_150 = param_1;
  FUN_1096ac994(&ppuStack_c0,lVar6);
  uVar35 = uStack_b0;
  lVar10 = *(long *)(lVar18 + 0xa0);
  ppuVar21 = ppuStack_c0;
  puVar33 = puStack_b8;
  if (lVar10 != 0) {
    *(long *)(lVar18 + 0xa8) = lVar10;
    puStack_108 = puStack_b8;
    ppuStack_110 = ppuStack_c0;
    _free(*(undefined8 *)(lVar10 + -8));
    *(undefined8 *)(lVar18 + 0xa0) = 0;
    *(undefined8 *)(lVar18 + 0xa8) = 0;
    *(undefined8 *)(lVar18 + 0xb0) = 0;
    ppuVar21 = ppuStack_110;
    puVar33 = puStack_108;
  }
  pppuVar32 = pppuStack_f8;
  *(undefined **)(lVar18 + 0xa8) = puVar33;
  *(undefined ***)(lVar18 + 0xa0) = ppuVar21;
  *(undefined8 *)(lVar18 + 0xb0) = uVar35;
  *(int *)(lVar18 + 0xb8) = iVar22;
  *(int *)(lVar18 + 0xbc) = iVar25;
  *(uint *)(lVar18 + 0xc0) = uVar24;
  if (0 < iVar22) {
    iVar25 = 0;
    ppuVar30 = (undefined **)0x0;
    puVar19 = *(uint **)(lVar18 + 0x10);
    puVar1 = *(uint **)(lVar18 + 0x18);
    uVar29 = uVar29 >> 2 & 0x7fffffff;
    ppuStack_110 = (undefined **)(uVar23 & 0x7fffffff);
    lStack_140 = uVar29 - 1;
    puStack_148 = (undefined *)((long)ppuVar21 + 4);
    ppuStack_138 = ppuVar21;
    uStack_130 = uVar27;
    puStack_128 = puVar19;
    uStack_11c = uVar24;
    do {
      pfVar11 = (float *)((long)ppuVar21 + (long)iVar25 * 4);
      uVar26 = (uint)uVar27;
      puVar15 = puVar19;
      if (puVar19 == puVar1) {
LAB_1096d97dc:
        if (puVar15 == puVar1) goto LAB_1096d9814;
        if (0 < (int)uVar26) {
          uVar16 = (ulong)((long)puVar15 - (long)puVar19) >> 2 & 0xffffffff;
          uVar23 = uVar29;
          do {
            fVar31 = 1.0;
            if (uVar16 != 0) {
              fVar31 = 0.0;
            }
            *pfVar11 = fVar31;
            uVar16 = uVar16 - 1;
            uVar23 = uVar23 - 1;
            pfVar11 = pfVar11 + 1;
          } while (uVar23 != 0);
        }
      }
      else {
        do {
          if (ppuVar30 == (undefined **)(ulong)*puVar15) goto LAB_1096d97dc;
          puVar15 = puVar15 + 1;
        } while (puVar15 != puVar1);
LAB_1096d9814:
        if (0 < (int)uVar26) {
          puVar17 = (undefined8 *)((long)pppuVar32 + (long)ppuVar30 * 0xc);
          uVar27 = uVar29;
          do {
            puVar20 = (undefined8 *)((long)pppuVar32 + (long)(int)*puVar19 * 0xc);
            fVar31 = *(float *)(puVar17 + 1) - *(float *)(puVar20 + 1);
            uVar35 = *puVar17;
            uVar37 = *puVar20;
            fVar34 = (float)uVar35 - (float)uVar37;
            fVar36 = (float)((ulong)uVar35 >> 0x20) - (float)((ulong)uVar37 >> 0x20);
            *pfVar11 = -(SQRT(fVar34 * fVar34 + fVar36 * fVar36 + fVar31 * fVar31) * (float)dVar38);
            uVar27 = uVar27 - 1;
            pfVar11 = pfVar11 + 1;
            puVar19 = puVar19 + 1;
          } while (uVar27 != 0);
        }
        lStack_118 = (long)(int)(uVar24 * (int)ppuVar30);
        pfVar11 = (float *)((long)ppuVar21 + lStack_118 * 4);
        fVar31 = *pfVar11;
        pfVar13 = pfVar11;
        uVar27 = uVar29;
        pfVar14 = pfVar11;
        if (1 < uVar26) {
          pfVar12 = (float *)(puStack_148 + lStack_118 * 4);
          lVar18 = lStack_140;
          do {
            fVar34 = *pfVar12;
            if (*pfVar12 <= fVar31) {
              fVar34 = fVar31;
            }
            fVar31 = fVar34;
            lVar18 = lVar18 + -1;
            pfVar12 = pfVar12 + 1;
          } while (lVar18 != 0);
        }
        do {
          *pfVar14 = *pfVar13 - fVar31;
          uVar27 = uVar27 - 1;
          pfVar13 = pfVar13 + 1;
          pfVar14 = pfVar14 + 1;
          pfVar12 = pfVar11;
          pfVar28 = pfVar11;
          uVar23 = uVar29;
        } while (uVar27 != 0);
        do {
          fVar31 = *pfVar12;
          _expf();
          *pfVar28 = fVar31;
          uVar23 = uVar23 - 1;
          pfVar12 = pfVar12 + 1;
          pfVar28 = pfVar28 + 1;
        } while (uVar23 != 0);
        fVar31 = *pfVar11;
        uVar23 = uVar29;
        pfVar13 = pfVar11;
        if (1 < (uint)uStack_130) {
          pfVar14 = (float *)(puStack_148 + lStack_118 * 4);
          lVar18 = lStack_140;
          do {
            fVar31 = fVar31 + *pfVar14;
            lVar18 = lVar18 + -1;
            pfVar14 = pfVar14 + 1;
          } while (lVar18 != 0);
        }
        do {
          *pfVar11 = *pfVar13 / fVar31;
          uVar23 = uVar23 - 1;
          pfVar11 = pfVar11 + 1;
          puVar19 = puStack_128;
          ppuVar21 = ppuStack_138;
          uVar27 = uStack_130;
          pfVar13 = pfVar13 + 1;
          uVar24 = uStack_11c;
        } while (uVar23 != 0);
      }
      ppuVar30 = (undefined **)((long)ppuVar30 + 1);
      iVar25 = iVar25 + uVar24;
    } while (ppuVar30 != ppuStack_110);
  }
  puStack_150[1] = lStack_c8;
  *puStack_150 = ppuStack_d0;
  lStack_c8 = 0;
  if (pppuVar32 != (undefined ***)0x0) {
    pppuStack_f0 = pppuVar32;
    __ZdlPv(pppuVar32);
  }
  appuStack_e0[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_e0);
  ppuStack_d0 = &PTR_FUN_110b01d60;
  pppuVar8 = &ppuStack_d0;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    FUN_109696618(&ppuStack_d0);
    pppuVar9 = pppuVar8;
    __Unwind_Resume(pppuVar8);
    pppuStack_170 = pppuVar32;
    pcStack_158 = FUN_1096d9a84;
    pppuStack_168 = pppuVar8;
    puStack_160 = &stack0xfffffffffffffff0;
    FUN_1096c9958(&ppppuStack_188,lVar6);
    pppppuVar4 = (undefined8 *****)ppppuStack_188;
    if (-1 < (char)bStack_171) {
      uStack_180 = (ulong)bStack_171;
      pppppuVar4 = &ppppuStack_188;
    }
    FUN_109697928(appuStack_198,pppppuVar4,uStack_180);
    FUN_1096e8bf4(pppuVar9,appuStack_198);
    appuStack_198[0] = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(appuStack_198);
    if ((char)bStack_171 < '\0') {
      __ZdlPv(ppppuStack_188);
    }
    return;
  }
  return;
}



/* Entry: 1096d9a84; end: 1096d9b37;  */

void FUN_1096d9a84(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined **appuStack_48 [2];
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  FUN_1096c9958(&ppuStack_38,param_2);
  pppuVar1 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar1 = &ppuStack_38;
  }
  FUN_109697928(appuStack_48,pppuVar1,uStack_30);
  FUN_1096e8bf4(param_1,appuStack_48);
  appuStack_48[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_48);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  return;
}



/* Entry: 1096d9b38; end: 1096d9b6b;  */

undefined8 * FUN_1096d9b38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096d9b6c; end: 1096d9b9f;  */

void FUN_1096d9b6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096d9ba0; end: 1096d9bd3;  */

undefined8 * FUN_1096d9ba0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096d9bd4; end: 1096d9c07;  */

void FUN_1096d9bd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096d9c08; end: 1096d9c1b;  */

void FUN_1096d9c08(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)puVar1 * 0x18);
    return;
  }
  func_0x000104c4f740();
  plVar4 = (long *)*puVar1;
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)puVar1[1];
  plVar2 = plVar4;
  if (plVar3 != plVar4) {
    do {
      plVar2 = plVar3 + -3;
      if (*plVar2 != 0) {
        plVar3[-2] = *plVar2;
        __ZdlPv();
      }
      plVar3 = plVar2;
    } while (plVar2 != plVar4);
    plVar2 = (long *)*puVar1;
  }
  puVar1[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 1096d9c1c; end: 1096d9c5f;  */

void FUN_1096d9c1c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)param_1 * 0x18);
    return;
  }
  func_0x000104c4f740();
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 1096d9c60; end: 1096d9cd3;  */

void FUN_1096d9c60(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -3;
      if (*plVar1 != 0) {
        plVar2[-2] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 1096d9cd4; end: 1096d9d73;  */

undefined8 * FUN_1096d9cd4(undefined8 *param_1)

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
  return param_1;
}



/* Entry: 1096d9d74; end: 1096d9d8f;  */

void FUN_1096d9d74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096d9d90; end: 1096d9dd7;  */

void FUN_1096d9d90(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096d9dd8; end: 1096d9e2f;  */

undefined8 * FUN_1096d9dd8(undefined8 *param_1)

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



/* Entry: 1096d9e30; end: 1096d9e87;  */

void FUN_1096d9e30(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b09168;
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



/* Entry: 1096d9e88; end: 1096d9ed3;  */

void FUN_1096d9e88(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096d72a0(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096d9ed4; end: 1096d9f03;  */

bool FUN_1096d9ed4(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b09168,0);
  return param_1 != 0;
}



/* Entry: 1096d9f04; end: 1096d9f1f;  */

void FUN_1096d9f04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096d9f20; end: 1096d9f67;  */

void FUN_1096d9f20(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096d9f68; end: 1096d9fbf;  */

undefined8 * FUN_1096d9f68(undefined8 *param_1)

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



/* Entry: 1096d9fc0; end: 1096da017;  */

void FUN_1096d9fc0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b08b28;
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



/* Entry: 1096da018; end: 1096da08f;  */

void FUN_1096da018(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b08af8;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096da090; end: 1096da0bf;  */

bool FUN_1096da090(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b08b28,0);
  return param_1 != 0;
}



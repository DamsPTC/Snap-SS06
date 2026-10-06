/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096b73f0; end: 1096b747f;  */

void FUN_1096b73f0(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  int iVar4;
  long lVar5;
  undefined8 *extraout_x8;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuStack_90;
  long lStack_88;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar3 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1096b8168(&ppuStack_50,param_2);
  iVar4 = (int)param_2;
  lVar5 = *(long *)(param_1 + 8);
  uVar8 = *(undefined8 *)(lVar5 + 0x20);
  *(undefined8 *)(lVar5 + 0x20) = uStack_48;
  *(undefined ***)(lVar5 + 0x18) = ppuStack_50;
  ppuStack_50 = &PTR_FUN_110b01d60;
  uStack_48 = uVar8;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  FUN_1096b6920(&ppuStack_90);
  lVar5 = lStack_88;
  lVar7 = *(long *)((long)pppuVar3 + 8);
  uVar8 = *(undefined8 *)(lVar7 + 8);
  *(undefined8 *)(lStack_88 + 0x10) = *(undefined8 *)(lVar7 + 0x10);
  *(undefined8 *)(lStack_88 + 8) = uVar8;
  if (*(long *)(lStack_88 + 0x20) != *(long *)(lVar7 + 0x20)) {
    func_0x000107c2acd4(lStack_88 + 0x18);
    uVar8 = *(undefined8 *)(lVar7 + 0x18);
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar7 + 0x20);
    *(undefined8 *)(lVar5 + 0x18) = uVar8;
    if (*(long *)(lVar5 + 0x20) != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0x20) + -8);
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
  if (lVar5 != lVar7) {
    FUN_1096b767c(lVar5 + 0x28,*(long *)(lVar7 + 0x28),*(long *)(lVar7 + 0x30),
                  *(long *)(lVar7 + 0x30) - *(long *)(lVar7 + 0x28) >> 4);
  }
  if (*(long *)(lVar5 + 0x48) != *(long *)(lVar7 + 0x48)) {
    func_0x000107c2acd4(lVar5 + 0x40);
    uVar8 = *(undefined8 *)(lVar7 + 0x40);
    *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(lVar7 + 0x48);
    *(undefined8 *)(lVar5 + 0x40) = uVar8;
    if (*(long *)(lVar5 + 0x48) != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0x48) + -8);
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
  extraout_x8[1] = lStack_88;
  *extraout_x8 = ppuStack_90;
  if (extraout_x8[1] != 0) {
    piVar6 = (int *)(extraout_x8[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_90 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_90);
  return;
}



/* Entry: 1096b7480; end: 1096b75ab;  */

void FUN_1096b7480(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuStack_40;
  long lStack_38;
  
  FUN_1096b6920(&ppuStack_40);
  lVar3 = lStack_38;
  lVar5 = *(long *)(param_2 + 8);
  uVar6 = *(undefined8 *)(lVar5 + 8);
  *(undefined8 *)(lStack_38 + 0x10) = *(undefined8 *)(lVar5 + 0x10);
  *(undefined8 *)(lStack_38 + 8) = uVar6;
  if (*(long *)(lStack_38 + 0x20) != *(long *)(lVar5 + 0x20)) {
    func_0x000107c2acd4(lStack_38 + 0x18);
    uVar6 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar3 + 0x18) = uVar6;
    if (*(long *)(lVar3 + 0x20) != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0x20) + -8);
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
  if (lVar3 != lVar5) {
    FUN_1096b767c(lVar3 + 0x28,*(long *)(lVar5 + 0x28),*(long *)(lVar5 + 0x30),
                  *(long *)(lVar5 + 0x30) - *(long *)(lVar5 + 0x28) >> 4);
  }
  if (*(long *)(lVar3 + 0x48) != *(long *)(lVar5 + 0x48)) {
    func_0x000107c2acd4(lVar3 + 0x40);
    uVar6 = *(undefined8 *)(lVar5 + 0x40);
    *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar5 + 0x48);
    *(undefined8 *)(lVar3 + 0x40) = uVar6;
    if (*(long *)(lVar3 + 0x48) != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0x48) + -8);
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
  param_1[1] = lStack_38;
  *param_1 = ppuStack_40;
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
  ppuStack_40 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  return;
}



/* Entry: 1096b75ac; end: 1096b75df;  */

undefined8 * FUN_1096b75ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096b75e0; end: 1096b7613;  */

void FUN_1096b75e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096b7614; end: 1096b7647;  */

undefined8 * FUN_1096b7614(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096b7648; end: 1096b767b;  */

void FUN_1096b7648(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096b767c; end: 1096b78af;  */

void FUN_1096b767c(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar8 = (undefined8 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar8 >> 4) < param_4) {
    plVar3 = param_1;
    FUN_1096b78b0();
    if (param_4 >> 0x3c != 0) {
      FUN_1096b795c();
      puVar8 = (undefined8 *)*plVar3;
      if (puVar8 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)plVar3[1];
        puVar4 = puVar8;
        if (puVar5 != puVar8) {
          do {
            puVar5 = puVar5 + -2;
            (**(code **)*puVar5)(puVar5);
          } while (puVar5 != puVar8);
          puVar4 = (undefined8 *)*plVar3;
        }
        plVar3[1] = (long)puVar8;
        __ZdlPv(puVar4);
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
      }
      return;
    }
    uVar6 = param_1[2] - *param_1 >> 3;
    if (uVar6 <= param_4) {
      uVar6 = param_4;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar6 = 0xfffffffffffffff;
    }
    FUN_1096b7924(param_1,uVar6);
    puVar5 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      *puVar5 = &PTR_FUN_110b01d60;
      uVar9 = *param_2;
      puVar5[1] = param_2[1];
      *puVar5 = uVar9;
      if (puVar5[1] != 0) {
        piVar7 = (int *)(puVar5[1] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = *piVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *puVar5 = &PTR_FUN_110b00af0;
      puVar5 = puVar5 + 2;
    }
  }
  else {
    puVar5 = (undefined8 *)param_1[1];
    if (param_4 <= (ulong)((long)puVar5 - (long)puVar8 >> 4)) {
      if (param_2 != param_3) {
        do {
          if (puVar8[1] != param_2[1]) {
            func_0x000107c2acd4(puVar8);
            uVar9 = *param_2;
            puVar8[1] = param_2[1];
            *puVar8 = uVar9;
            if (puVar8[1] != 0) {
              piVar7 = (int *)(puVar8[1] + -8);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
                if (bVar2) {
                  *piVar7 = *piVar7 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
          }
          param_2 = param_2 + 2;
          puVar8 = puVar8 + 2;
        } while (param_2 != param_3);
        puVar5 = (undefined8 *)param_1[1];
      }
      while (puVar5 != puVar8) {
        puVar5 = puVar5 + -2;
        (**(code **)*puVar5)(puVar5);
      }
      param_1[1] = (long)puVar8;
      return;
    }
    puVar4 = (undefined8 *)((long)param_2 + ((long)puVar5 - (long)puVar8));
    if (puVar5 != puVar8) {
      do {
        if (puVar8[1] != param_2[1]) {
          func_0x000107c2acd4(puVar8);
          uVar9 = *param_2;
          puVar8[1] = param_2[1];
          *puVar8 = uVar9;
          if (puVar8[1] != 0) {
            piVar7 = (int *)(puVar8[1] + -8);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar2) {
                *piVar7 = *piVar7 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
        }
        param_2 = param_2 + 2;
        puVar8 = puVar8 + 2;
      } while (param_2 != puVar4);
      puVar5 = (undefined8 *)param_1[1];
    }
    for (; puVar4 != param_3; puVar4 = puVar4 + 2) {
      *puVar5 = &PTR_FUN_110b01d60;
      uVar9 = *puVar4;
      puVar5[1] = puVar4[1];
      *puVar5 = uVar9;
      if (puVar5[1] != 0) {
        piVar7 = (int *)(puVar5[1] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = *piVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *puVar5 = &PTR_FUN_110b00af0;
      puVar5 = puVar5 + 2;
    }
  }
  param_1[1] = (long)puVar5;
  return;
}



/* Entry: 1096b78b0; end: 1096b7923;  */

void FUN_1096b78b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[1];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -2;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar3;
    __ZdlPv(puVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1096b7924; end: 1096b795b;  */

void FUN_1096b7924(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    FUN_1096b7970();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    return;
  }
  FUN_1096b795c();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096b795c; end: 1096b796f;  */

void FUN_1096b795c(undefined8 param_1,ulong param_2)

{
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096b7970; end: 1096b79a3;  */

void FUN_1096b7970(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096b79a4; end: 1096b79bf;  */

void FUN_1096b79a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096b79c0; end: 1096b7a07;  */

void FUN_1096b79c0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096b7a08; end: 1096b7a5f;  */

undefined8 * FUN_1096b7a08(undefined8 *param_1)

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



/* Entry: 1096b7a60; end: 1096b7ab7;  */

void FUN_1096b7a60(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b04bf8;
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



/* Entry: 1096b7ab8; end: 1096b7b03;  */

void FUN_1096b7ab8(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096b6920(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096b7b04; end: 1096b7b33;  */

bool FUN_1096b7b04(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b04bf8,0);
  return param_1 != 0;
}



/* Entry: 1096b7b34; end: 1096b7b8f;  */

long FUN_1096b7b34(long param_1)

{
  long lStack_28;
  
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  lStack_28 = param_1 + 0x28;
  FUN_1096b7bf0(&lStack_28);
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096b7b90; end: 1096b7bef;  */

void FUN_1096b7b90(long param_1)

{
  long lStack_28;
  
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  lStack_28 = param_1 + 0x28;
  FUN_1096b7bf0(&lStack_28);
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  __ZdlPv(param_1);
  return;
}



/* Entry: 1096b7bf0; end: 1096b7c7b;  */

void FUN_1096b7bf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)*puVar3;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)puVar3[1];
  puVar1 = puVar4;
  if (puVar2 != puVar4) {
    do {
      puVar2 = puVar2 + -2;
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar4);
    puVar1 = *(undefined8 **)*param_1;
  }
  puVar3[1] = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1096b7c7c; end: 1096b7d0f;  */

void FUN_1096b7c7c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110b01d60;
  param_1[1] = 0;
  puVar3 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110b03440,0);
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



/* Entry: 1096b7d10; end: 1096b7d9b;  */

long **** FUN_1096b7d10(long ****param_1,ulong param_2)

{
  long ***ppplVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  long ***ppplVar5;
  long ***ppplVar6;
  ulong uVar7;
  long **pplVar8;
  ulong uVar9;
  ulong uVar10;
  long ***ppplVar11;
  long lVar12;
  long ***ppplVar13;
  long ****pppplVar14;
  long lVar15;
  long ***ppplStack_58;
  long **pplStack_50;
  long **pplStack_48;
  long ***ppplStack_40;
  long ***ppplStack_38;
  
  pppplVar4 = (long ****)param_1[1];
  uVar9 = (long)pppplVar4 - (long)*param_1 >> 4;
  if (param_2 <= uVar9) {
    pppplVar3 = param_1;
    if (param_2 < uVar9) {
      pppplVar14 = (long ****)(*param_1 + param_2 * 2);
      while (pppplVar4 != pppplVar14) {
        pppplVar4 = pppplVar4 + -2;
        pppplVar3 = pppplVar4;
        (*(code *)**pppplVar4)(pppplVar4);
      }
      param_1[1] = (long ***)pppplVar14;
    }
    return pppplVar3;
  }
  param_2 = param_2 - uVar9;
  pppplVar4 = (long ****)param_1[1];
  if ((ulong)((long)param_1[2] - (long)pppplVar4 >> 4) < param_2) {
    ppplVar13 = (long ***)((long)pppplVar4 - (long)*param_1);
    uVar9 = param_2 + ((long)ppplVar13 >> 4);
    if (uVar9 >> 0x3c != 0) {
      pppplVar4 = param_1;
      FUN_1096b795c();
      param_1[1] = ppplVar13;
      __Unwind_Resume();
      ppplVar13 = pppplVar4[1];
      ppplVar6 = pppplVar4[2];
      while (ppplVar6 != ppplVar13) {
        pplVar8 = ppplVar6[-2];
        pppplVar4[2] = ppplVar6 + -2;
        (*(code *)*pplVar8)();
        ppplVar6 = pppplVar4[2];
      }
      if (*pppplVar4 != (long ***)0x0) {
        __ZdlPv();
      }
      return pppplVar4;
    }
    uVar7 = (long)param_1[2] - (long)*param_1;
    uVar10 = (long)uVar7 >> 3;
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar10 = 0xfffffffffffffff;
    }
    ppplStack_38 = (long ***)param_1;
    if (uVar10 == 0) {
      pppplVar4 = (long ****)0x0;
    }
    else {
      pppplVar4 = param_1;
      FUN_1096b7970();
    }
    lVar15 = (long)pppplVar4 + (long)ppplVar13;
    ppplStack_40 = (long ***)(pppplVar4 + uVar10 * 2);
    ppplVar13 = (long ***)(lVar15 + param_2 * 0x10);
    lVar12 = param_2 * 0x10;
    ppplStack_58 = (long ***)pppplVar4;
    pplStack_50 = (long **)lVar15;
    pplStack_48 = (long **)lVar15;
    do {
      func_0x000107c2ace8(lVar15);
      lVar15 = lVar15 + 0x10;
      lVar12 = lVar12 + -0x10;
    } while (lVar12 != 0);
    ppplVar5 = *param_1;
    ppplVar2 = param_1[1];
    ppplVar1 = (long ***)((long)pplStack_50 + ((long)ppplVar5 - (long)ppplVar2));
    ppplVar6 = ppplVar5;
    ppplVar11 = ppplVar1;
    pplStack_48 = (long **)ppplVar13;
    if ((long)ppplVar5 - (long)ppplVar2 != 0) {
      do {
        *ppplVar11 = (long **)&PTR_FUN_110b01d60;
        pplVar8 = *ppplVar6;
        ppplVar11[1] = ppplVar6[1];
        *ppplVar11 = pplVar8;
        ppplVar6[1] = (long **)0x0;
        *ppplVar11 = (long **)&PTR_FUN_110b00af0;
        ppplVar6 = ppplVar6 + 2;
        ppplVar11 = ppplVar11 + 2;
      } while (ppplVar6 != ppplVar2);
      do {
        ppplVar13 = ppplVar5 + 2;
        (*(code *)**ppplVar5)(ppplVar5);
        ppplVar5 = ppplVar13;
      } while (ppplVar13 != ppplVar2);
      ppplVar5 = *param_1;
    }
    *param_1 = ppplVar1;
    param_1[1] = (long ***)pplStack_48;
    ppplVar13 = param_1[2];
    param_1[2] = ppplStack_40;
    pppplVar3 = &ppplStack_58;
    ppplStack_58 = ppplVar5;
    pplStack_50 = (long **)ppplVar5;
    pplStack_48 = (long **)ppplVar5;
    ppplStack_40 = ppplVar13;
    FUN_1096b7f3c(pppplVar3);
  }
  else {
    pppplVar3 = param_1;
    pppplVar14 = pppplVar4;
    if (param_2 != 0) {
      lVar15 = param_2 * 0x10;
      pppplVar14 = pppplVar4 + param_2 * 2;
      do {
        pppplVar3 = pppplVar4;
        func_0x000107c2ace8(pppplVar4);
        pppplVar4 = pppplVar4 + 2;
        lVar15 = lVar15 + -0x10;
      } while (lVar15 != 0);
    }
    param_1[1] = (long ***)pppplVar14;
  }
  return pppplVar3;
}



/* Entry: 1096b7d9c; end: 1096b7f3b;  */

long **** FUN_1096b7d9c(long ****param_1,ulong param_2)

{
  ulong uVar1;
  long ***ppplVar2;
  long ***ppplVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  ulong uVar8;
  long **pplVar9;
  ulong uVar10;
  long ***ppplVar11;
  long lVar12;
  long ***ppplVar13;
  long ****pppplVar14;
  long lVar15;
  long ***ppplStack_58;
  long **pplStack_50;
  long **pplStack_48;
  long ***ppplStack_40;
  long ***ppplStack_38;
  
  pppplVar5 = (long ****)param_1[1];
  if ((ulong)((long)param_1[2] - (long)pppplVar5 >> 4) < param_2) {
    ppplVar13 = (long ***)((long)pppplVar5 - (long)*param_1);
    uVar1 = param_2 + ((long)ppplVar13 >> 4);
    if (uVar1 >> 0x3c != 0) {
      pppplVar5 = param_1;
      FUN_1096b795c();
      param_1[1] = ppplVar13;
      __Unwind_Resume();
      ppplVar13 = pppplVar5[1];
      ppplVar7 = pppplVar5[2];
      while (ppplVar7 != ppplVar13) {
        pplVar9 = ppplVar7[-2];
        pppplVar5[2] = ppplVar7 + -2;
        (*(code *)*pplVar9)();
        ppplVar7 = pppplVar5[2];
      }
      if (*pppplVar5 != (long ***)0x0) {
        __ZdlPv();
      }
      return pppplVar5;
    }
    uVar8 = (long)param_1[2] - (long)*param_1;
    uVar10 = (long)uVar8 >> 3;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar10 = 0xfffffffffffffff;
    }
    ppplStack_38 = (long ***)param_1;
    if (uVar10 == 0) {
      pppplVar5 = (long ****)0x0;
    }
    else {
      pppplVar5 = param_1;
      FUN_1096b7970();
    }
    lVar15 = (long)pppplVar5 + (long)ppplVar13;
    ppplStack_40 = (long ***)(pppplVar5 + uVar10 * 2);
    ppplVar13 = (long ***)(lVar15 + param_2 * 0x10);
    lVar12 = param_2 << 4;
    ppplStack_58 = (long ***)pppplVar5;
    pplStack_50 = (long **)lVar15;
    pplStack_48 = (long **)lVar15;
    do {
      func_0x000107c2ace8(lVar15);
      lVar15 = lVar15 + 0x10;
      lVar12 = lVar12 + -0x10;
    } while (lVar12 != 0);
    ppplVar6 = *param_1;
    ppplVar3 = param_1[1];
    ppplVar2 = (long ***)((long)pplStack_50 + ((long)ppplVar6 - (long)ppplVar3));
    ppplVar7 = ppplVar6;
    ppplVar11 = ppplVar2;
    pplStack_48 = (long **)ppplVar13;
    if ((long)ppplVar6 - (long)ppplVar3 != 0) {
      do {
        *ppplVar11 = (long **)&PTR_FUN_110b01d60;
        pplVar9 = *ppplVar7;
        ppplVar11[1] = ppplVar7[1];
        *ppplVar11 = pplVar9;
        ppplVar7[1] = (long **)0x0;
        *ppplVar11 = (long **)&PTR_FUN_110b00af0;
        ppplVar7 = ppplVar7 + 2;
        ppplVar11 = ppplVar11 + 2;
      } while (ppplVar7 != ppplVar3);
      do {
        ppplVar13 = ppplVar6 + 2;
        (*(code *)**ppplVar6)(ppplVar6);
        ppplVar6 = ppplVar13;
      } while (ppplVar13 != ppplVar3);
      ppplVar6 = *param_1;
    }
    *param_1 = ppplVar2;
    param_1[1] = (long ***)pplStack_48;
    ppplVar13 = param_1[2];
    param_1[2] = ppplStack_40;
    pppplVar4 = &ppplStack_58;
    ppplStack_58 = ppplVar6;
    pplStack_50 = (long **)ppplVar6;
    pplStack_48 = (long **)ppplVar6;
    ppplStack_40 = ppplVar13;
    FUN_1096b7f3c(pppplVar4);
  }
  else {
    pppplVar4 = param_1;
    pppplVar14 = pppplVar5;
    if (param_2 != 0) {
      lVar15 = param_2 << 4;
      pppplVar14 = pppplVar5 + param_2 * 2;
      do {
        pppplVar4 = pppplVar5;
        func_0x000107c2ace8(pppplVar5);
        pppplVar5 = pppplVar5 + 2;
        lVar15 = lVar15 + -0x10;
      } while (lVar15 != 0);
    }
    param_1[1] = (long ***)pppplVar14;
  }
  return pppplVar4;
}



/* Entry: 1096b7f3c; end: 1096b7f8b;  */

long * FUN_1096b7f3c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x10);
    param_1[2] = (long)(lVar2 + -0x10);
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096b7f8c; end: 1096b80ab;  */

ulong FUN_1096b7f8c(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int *piVar8;
  long lStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **appuStack_60 [2];
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  undefined8 uVar7;
  
  pppuVar3 = appuStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x28))(appuStack_60,param_2,param_1);
  ___dynamic_cast(appuStack_60,&PTR_DAT_110b01d40,&PTR_DAT_110b04e38,0);
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
  *param_3 = &PTR_FUN_110b04dd8;
  ppuStack_50 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_50);
  appuStack_60[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_60);
  lVar4 = param_2[1] + -0x20;
  uVar7 = uRam000000011382aa08;
  func_0x0001096966c0();
  iVar6 = (int)uVar7;
  uVar5 = (ulong)(lVar4 == 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if (iVar6 != 0) {
      func_0x000104bd46a0();
    }
    __Unwind_Resume();
    ppuStack_80 = &PTR_FUN_110b01d60;
    pcStack_68 = FUN_1096b80ac;
    *(undefined ***)(uVar5 + 0x40) = &PTR_FUN_110b01d60;
    plStack_78 = param_2;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x000107c2acd4();
    lStack_88 = uVar5 + 0x28;
    FUN_1096b7bf0(&lStack_88);
    *(undefined ***)(uVar5 + 0x18) = &PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    return uVar5;
  }
  return uVar5;
}



/* Entry: 1096b80ac; end: 1096b8107;  */

long FUN_1096b80ac(long param_1)

{
  long lStack_28;
  
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  lStack_28 = param_1 + 0x28;
  FUN_1096b7bf0(&lStack_28);
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096b8108; end: 1096b8167;  */

void FUN_1096b8108(long param_1)

{
  long lStack_28;
  
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  lStack_28 = param_1 + 0x28;
  FUN_1096b7bf0(&lStack_28);
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  __ZdlPv(param_1);
  return;
}



/* Entry: 1096b8168; end: 1096b81db;  */

void FUN_1096b8168(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_110b01d60;
  param_1[1] = 0;
  if (param_2[1] != 0) {
    func_0x000107c2acd4(param_1);
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
  }
  return;
}



/* Entry: 1096b81dc; end: 1096b8257;  */

undefined8 * FUN_1096b81dc(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b04dd8;
  param_1[1] = puVar1;
  FUN_1096b8258(param_1);
  return param_1;
}



/* Entry: 1096b8258; end: 1096b832f;  */

void FUN_1096b8258(undefined8 *param_1)

{
  undefined4 uStack_3c;
  undefined1 auStack_38 [8];
  
  func_0x000107c2acd0(param_1,0x80);
  *param_1 = &PTR_DAT_110b00de0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  uStack_3c = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  FUN_1092d1c20(param_1 + 0xd,&uStack_3c,auStack_38,1);
  *param_1 = &PTR_FUN_110b04f40;
  return;
}



/* Entry: 1096b8330; end: 1096b83e3;  */

void FUN_1096b8330(undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0 < (int)param_3) {
    uVar5 = 0;
    do {
      if (*(char *)(param_4 + uVar5) == '\x01') {
        lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x20);
        piVar1 = (int *)(*(long *)(*(long *)(param_2 + 8) + 0x68) + uVar5 * 4);
        lVar2 = (long)*piVar1;
        lVar3 = (long)piVar1[1];
        FUN_109430af8(param_1,param_1[1],lVar4 + lVar2 * 4,lVar4 + lVar3 * 4,
                      lVar3 * 4 + lVar2 * -4 >> 2);
      }
      uVar5 = uVar5 + 1;
    } while ((param_3 & 0x7fffffff) != uVar5);
  }
  return;
}



/* Entry: 1096b83e4; end: 1096b88e7;  */

void FUN_1096b83e4(long param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  byte bStack_45;
  undefined1 uStack_44;
  byte bStack_43;
  undefined1 uStack_42;
  byte bStack_41;
  
  uStack_48 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_48,1,1);
  FUN_109682c20(param_2,&uStack_47,*(long *)(param_1 + 8) + 8,*(long *)(param_1 + 8) + 0x20);
  lVar10 = *(long *)(param_1 + 8);
  uVar6 = *(long *)(lVar10 + 0x40) - *(long *)(lVar10 + 0x38) >> 3;
  uVar8 = uVar6;
  if (0x7f < uVar6) {
    do {
      bStack_43 = (byte)uVar8 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_43,1,1);
      uVar6 = uVar8 >> 7;
      uVar5 = uVar8 >> 0xe;
      uVar8 = uVar6;
    } while (uVar5 != 0);
  }
  uStack_44 = (undefined1)uVar6;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_44,1,1);
  lVar2 = *(long *)(lVar10 + 0x40);
  for (lVar7 = *(long *)(lVar10 + 0x38); lVar7 != lVar2; lVar7 = lVar7 + 8) {
    (**(code **)(*param_2 + 0x48))(param_2,lVar7,8,1);
  }
  uVar6 = *(long *)(lVar10 + 0x58) - *(long *)(lVar10 + 0x50) >> 4;
  uVar8 = uVar6;
  if (0x7f < uVar6) {
    do {
      bStack_41 = (byte)uVar8 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
      uVar6 = uVar8 >> 7;
      uVar5 = uVar8 >> 0xe;
      uVar8 = uVar6;
    } while (uVar5 != 0);
  }
  uStack_42 = (undefined1)uVar6;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_42,1,1);
  lVar7 = *(long *)(lVar10 + 0x58);
  for (lVar10 = *(long *)(lVar10 + 0x50); lVar10 != lVar7; lVar10 = lVar10 + 0x10) {
    FUN_109697ca4(param_2,lVar10);
  }
  lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  iVar4 = (int)((ulong)(*(long *)(*(long *)(param_1 + 8) + 0x70) - lVar10) >> 2);
  iVar3 = iVar4 + -1;
  if (iVar3 != 0) {
    puVar1 = (uint *)(lVar10 + (long)iVar4 * 4);
    puVar9 = puVar1 + -(long)iVar3;
    do {
      uVar6 = (ulong)(int)*puVar9;
      uVar8 = uVar6;
      if (0x7f < *puVar9) {
        do {
          bStack_45 = (byte)uVar8 | 0x80;
          (**(code **)(*param_2 + 0x48))(param_2,&bStack_45,1,1);
          uVar6 = uVar8 >> 7;
          uVar5 = uVar8 >> 0xe;
          uVar8 = uVar6;
        } while (uVar5 != 0);
      }
      uStack_46 = (undefined1)uVar6;
      (**(code **)(*param_2 + 0x48))(param_2,&uStack_46,1,1);
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
  }
  return;
}



/* Entry: 1096b88e8; end: 1096b8963;  */

undefined8 * FUN_1096b88e8(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b04e08;
  param_1[1] = puVar1;
  FUN_1096b8964(param_1);
  return param_1;
}



/* Entry: 1096b8964; end: 1096b8a3b;  */

void FUN_1096b8964(undefined8 *param_1)

{
  undefined4 uStack_3c;
  undefined1 auStack_38 [8];
  
  func_0x000107c2acd0(param_1,0x80);
  *param_1 = &PTR_DAT_110b00de0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  uStack_3c = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  FUN_1092d1c20(param_1 + 0xd,&uStack_3c,auStack_38,1);
  *param_1 = &PTR_FUN_110b04fa8;
  return;
}



/* Entry: 1096b8a3c; end: 1096b8b37;  */

undefined8 * FUN_1096b8a3c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
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
  *param_1 = &PTR_FUN_110b04e08;
  param_1[1] = puVar1;
  FUN_1096b8964(param_1);
  lVar3 = *(long *)(param_2 + 8);
  lVar2 = param_1[1];
  if (lVar2 != lVar3) {
    FUN_10928555c(lVar2 + 8,*(long *)(lVar3 + 8),*(long *)(lVar3 + 0x10),
                  *(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 8) >> 2);
    FUN_10928555c(lVar2 + 0x20,*(long *)(lVar3 + 0x20),*(long *)(lVar3 + 0x28),
                  *(long *)(lVar3 + 0x28) - *(long *)(lVar3 + 0x20) >> 2);
    FUN_1096b8d6c(lVar2 + 0x38,*(long *)(lVar3 + 0x38),*(long *)(lVar3 + 0x40),
                  *(long *)(lVar3 + 0x40) - *(long *)(lVar3 + 0x38) >> 3);
    FUN_1096b767c(lVar2 + 0x50,*(long *)(lVar3 + 0x50),*(long *)(lVar3 + 0x58),
                  *(long *)(lVar3 + 0x58) - *(long *)(lVar3 + 0x50) >> 4);
    FUN_10928555c(lVar2 + 0x68,*(long *)(lVar3 + 0x68),*(long *)(lVar3 + 0x70),
                  *(long *)(lVar3 + 0x70) - *(long *)(lVar3 + 0x68) >> 2);
  }
  return param_1;
}



/* Entry: 1096b8b38; end: 1096b8b9f;  */

void FUN_1096b8b38(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  float *pfVar3;
  undefined4 uVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar5 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(lVar5 + 0x20);
  uVar8 = *(long *)(lVar5 + 0x28) - lVar2;
  if (0 < (int)(uVar8 >> 2)) {
    uVar7 = 0;
    do {
      puVar1 = (undefined4 *)(lVar2 + uVar7 * 4);
      uVar4 = *puVar1;
      *puVar1 = puVar1[2];
      puVar1[2] = uVar4;
      uVar7 = uVar7 + 3;
    } while (uVar7 < (uVar8 >> 2 & 0x7fffffff));
  }
  pfVar3 = *(float **)(lVar5 + 0x40);
  for (pfVar6 = *(float **)(lVar5 + 0x38); pfVar6 != pfVar3; pfVar6 = pfVar6 + 2) {
    *pfVar6 = 1.0 - *pfVar6;
  }
  return;
}



/* Entry: 1096b8ba0; end: 1096b8c9b;  */

void FUN_1096b8ba0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined **ppuStack_40;
  long lStack_38;
  
  FUN_1096b81dc(&ppuStack_40);
  lVar3 = lStack_38;
  lVar5 = *(long *)(param_2 + 8);
  if (lStack_38 != lVar5) {
    FUN_10928555c(lStack_38 + 8,*(long *)(lVar5 + 8),*(long *)(lVar5 + 0x10),
                  *(long *)(lVar5 + 0x10) - *(long *)(lVar5 + 8) >> 2);
    FUN_10928555c(lVar3 + 0x20,*(long *)(lVar5 + 0x20),*(long *)(lVar5 + 0x28),
                  *(long *)(lVar5 + 0x28) - *(long *)(lVar5 + 0x20) >> 2);
    FUN_1096b8d6c(lVar3 + 0x38,*(long *)(lVar5 + 0x38),*(long *)(lVar5 + 0x40),
                  *(long *)(lVar5 + 0x40) - *(long *)(lVar5 + 0x38) >> 3);
    FUN_1096b767c(lVar3 + 0x50,*(long *)(lVar5 + 0x50),*(long *)(lVar5 + 0x58),
                  *(long *)(lVar5 + 0x58) - *(long *)(lVar5 + 0x50) >> 4);
    FUN_10928555c(lVar3 + 0x68,*(long *)(lVar5 + 0x68),*(long *)(lVar5 + 0x70),
                  *(long *)(lVar5 + 0x70) - *(long *)(lVar5 + 0x68) >> 2);
  }
  param_1[1] = lStack_38;
  *param_1 = ppuStack_40;
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
  ppuStack_40 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  return;
}



/* Entry: 1096b8c9c; end: 1096b8ccf;  */

undefined8 * FUN_1096b8c9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096b8cd0; end: 1096b8d03;  */

void FUN_1096b8cd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096b8d04; end: 1096b8d37;  */

undefined8 * FUN_1096b8d04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096b8d38; end: 1096b8d6b;  */

void FUN_1096b8d38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096b8d6c; end: 1096b8e93;  */

void FUN_1096b8d6c(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = param_1[2];
  lVar5 = *param_1;
  if ((ulong)((long)(uVar3 - lVar5) >> 3) < param_4) {
    if (lVar5 != 0) {
      param_1[1] = lVar5;
      __ZdlPv(lVar5);
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3d != 0) {
      FUN_1096a5d04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__malloc_11034c5e8)(1);
      return;
    }
    uVar2 = (long)uVar3 >> 2;
    if ((ulong)((long)uVar3 >> 2) <= param_4) {
      uVar2 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar2 = 0x1fffffffffffffff;
    }
    FUN_1096a5ccc(param_1,uVar2);
    lVar4 = param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar4,param_2,param_3);
    }
    lVar4 = lVar4 + param_3;
  }
  else {
    lVar4 = param_1[1];
    if ((ulong)(lVar4 - lVar5 >> 3) < param_4) {
      lVar1 = param_2 + (lVar4 - lVar5);
      if (lVar4 != lVar5) {
        _memmove(lVar5,param_2);
        lVar4 = param_1[1];
      }
      param_3 = param_3 - lVar1;
      if (param_3 != 0) {
        _memmove(lVar4,lVar1,param_3);
      }
      lVar4 = lVar4 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        _memmove(lVar5,param_2,param_3);
      }
      lVar4 = lVar5 + param_3;
    }
  }
  param_1[1] = lVar4;
  return;
}



/* Entry: 1096b8e94; end: 1096b8eaf;  */

void FUN_1096b8e94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096b8eb0; end: 1096b8ef7;  */

void FUN_1096b8eb0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096b8ef8; end: 1096b8f4f;  */

undefined8 * FUN_1096b8ef8(undefined8 *param_1)

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



/* Entry: 1096b8f50; end: 1096b8fa7;  */

void FUN_1096b8f50(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b04e38;
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



/* Entry: 1096b8fa8; end: 1096b8ff3;  */

void FUN_1096b8fa8(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096b81dc(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096b8ff4; end: 1096b9023;  */

bool FUN_1096b8ff4(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b04e38,0);
  return param_1 != 0;
}



/* Entry: 1096b9024; end: 1096b9117;  */

long FUN_1096b9024(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x50;
  FUN_1096b7bf0(&lStack_28);
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096b9118; end: 1096b9147;  */

long * FUN_1096b9118(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plStack_78;
  ulong uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  uVar5 = param_1[1] - *param_1 >> 3;
  if (param_2 <= uVar5) {
    if (param_2 < uVar5) {
      param_1[1] = *param_1 + param_2 * 8;
    }
    return param_1;
  }
  param_2 = param_2 - uVar5;
  plVar2 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar2 >> 3) < param_2) {
    lVar7 = *param_1;
    lVar9 = (long)plVar2 - lVar7;
    lVar10 = lVar9 >> 3;
    uVar5 = param_2 + lVar10;
    if (uVar5 >> 0x3d != 0) {
      plVar2 = param_1;
      FUN_1096a5d04();
      pcStack_58 = FUN_1096b9264;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      if (plVar2[0xd] != 0) {
        plVar2[0xe] = plVar2[0xd];
        __ZdlPv();
      }
      plStack_78 = plVar2 + 10;
      FUN_1096b7bf0(&plStack_78);
      if (plVar2[7] != 0) {
        plVar2[8] = plVar2[7];
        __ZdlPv();
      }
      if (plVar2[4] != 0) {
        plVar2[5] = plVar2[4];
        __ZdlPv();
      }
      if (plVar2[1] != 0) {
        plVar2[2] = plVar2[1];
        __ZdlPv();
      }
      return plVar2;
    }
    uVar4 = param_1[2] - lVar7;
    uVar6 = (long)uVar4 >> 2;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
      lVar8 = lVar9;
    }
    else {
      plVar2 = param_1;
      FUN_1096a5d18();
      lVar7 = *param_1;
      lVar10 = param_1[1] - lVar7 >> 3;
      lVar8 = param_1[1] - lVar7;
    }
    lVar9 = (long)plVar2 + lVar9;
    _bzero(lVar9,param_2 * 8);
    lVar10 = lVar9 + lVar10 * -8;
    _memcpy(lVar10,lVar7,lVar8);
    plVar3 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = lVar9 + param_2 * 8;
    param_1[2] = (long)(plVar2 + uVar6);
    plVar1 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar3;
    }
  }
  else {
    plVar1 = param_1;
    if (param_2 != 0) {
      plVar1 = plVar2;
      _bzero(plVar2,param_2 * 8);
      plVar2 = plVar2 + param_2;
    }
    param_1[1] = (long)plVar2;
  }
  return plVar1;
}



/* Entry: 1096b9148; end: 1096b9263;  */

long * FUN_1096b9148(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plStack_78;
  ulong uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  plVar3 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar3 >> 3) < param_2) {
    lVar7 = *param_1;
    lVar9 = (long)plVar3 - lVar7;
    lVar10 = lVar9 >> 3;
    uVar1 = param_2 + lVar10;
    if (uVar1 >> 0x3d != 0) {
      plVar3 = param_1;
      FUN_1096a5d04();
      pcStack_58 = FUN_1096b9264;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      if (plVar3[0xd] != 0) {
        plVar3[0xe] = plVar3[0xd];
        __ZdlPv();
      }
      plStack_78 = plVar3 + 10;
      FUN_1096b7bf0(&plStack_78);
      if (plVar3[7] != 0) {
        plVar3[8] = plVar3[7];
        __ZdlPv();
      }
      if (plVar3[4] != 0) {
        plVar3[5] = plVar3[4];
        __ZdlPv();
      }
      if (plVar3[1] != 0) {
        plVar3[2] = plVar3[1];
        __ZdlPv();
      }
      return plVar3;
    }
    uVar5 = param_1[2] - lVar7;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
      lVar8 = lVar9;
    }
    else {
      plVar3 = param_1;
      FUN_1096a5d18();
      lVar7 = *param_1;
      lVar10 = param_1[1] - lVar7 >> 3;
      lVar8 = param_1[1] - lVar7;
    }
    lVar9 = (long)plVar3 + lVar9;
    _bzero(lVar9,param_2 << 3);
    lVar10 = lVar9 + lVar10 * -8;
    _memcpy(lVar10,lVar7,lVar8);
    plVar4 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = lVar9 + param_2 * 8;
    param_1[2] = (long)(plVar3 + uVar6);
    plVar2 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar4;
    }
  }
  else {
    plVar2 = param_1;
    if (param_2 != 0) {
      plVar2 = plVar3;
      _bzero(plVar3,param_2 << 3);
      plVar3 = plVar3 + param_2;
    }
    param_1[1] = (long)plVar3;
  }
  return plVar2;
}



/* Entry: 1096b9264; end: 1096b9357;  */

long FUN_1096b9264(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x50;
  FUN_1096b7bf0(&lStack_28);
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096b9358; end: 1096b93d3;  */

undefined8 * FUN_1096b9358(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b05018;
  param_1[1] = puVar1;
  FUN_1096b93d4(param_1);
  return param_1;
}



/* Entry: 1096b93d4; end: 1096b9497;  */

void FUN_1096b93d4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  func_0x000107c2acd0(param_1,0x70);
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_DAT_110b00de0;
  puVar3 = param_1;
  func_0x000107c2acdc();
  param_1[1] = &PTR_FUN_110b01d60;
  uVar5 = *puVar3;
  param_1[2] = puVar3[1];
  param_1[1] = uVar5;
  if (param_1[2] != 0) {
    piVar4 = (int *)(param_1[2] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_110b05150;
  param_1[1] = &PTR_FUN_110b04dd8;
  return;
}



/* Entry: 1096b9498; end: 1096b95f3;  */

void FUN_1096b9498(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((param_1[1] == 0) || (*(int *)(param_1[1] + -8) != 1)) {
    FUN_1096b9358(&ppuStack_58);
    lStack_38 = lStack_50 + -0x20;
    lStack_40 = param_1[1] + -0x20;
    ppuStack_48 = &PTR_DAT_110b01b50;
    func_0x000109696c8c(param_1,&ppuStack_48);
    lVar3 = lStack_50;
    lVar5 = param_1[1];
    if (*(long *)(lStack_50 + 0x10) != *(long *)(lVar5 + 0x10)) {
      func_0x000107c2acd4(lStack_50 + 8);
      uVar6 = *(undefined8 *)(lVar5 + 8);
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar5 + 0x10);
      *(undefined8 *)(lVar3 + 8) = uVar6;
      if (*(long *)(lVar3 + 0x10) != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0x10) + -8);
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
    if (lVar3 != lVar5) {
      FUN_1096b993c(lVar3 + 0x18,*(long *)(lVar5 + 0x18),*(long *)(lVar5 + 0x20),
                    (*(long *)(lVar5 + 0x20) - *(long *)(lVar5 + 0x18) >> 2) * -0x5555555555555555);
    }
    uVar7 = *(undefined8 *)(lVar5 + 0x38);
    uVar6 = *(undefined8 *)(lVar5 + 0x30);
    uVar9 = *(undefined8 *)(lVar5 + 0x48);
    uVar8 = *(undefined8 *)(lVar5 + 0x40);
    uVar10 = *(undefined8 *)(lVar5 + 0x50);
    uVar12 = *(undefined8 *)(lVar5 + 0x68);
    uVar11 = *(undefined8 *)(lVar5 + 0x60);
    *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)(lVar5 + 0x58);
    *(undefined8 *)(lVar3 + 0x50) = uVar10;
    *(undefined8 *)(lVar3 + 0x68) = uVar12;
    *(undefined8 *)(lVar3 + 0x60) = uVar11;
    *(undefined8 *)(lVar3 + 0x38) = uVar7;
    *(undefined8 *)(lVar3 + 0x30) = uVar6;
    *(undefined8 *)(lVar3 + 0x48) = uVar9;
    *(undefined8 *)(lVar3 + 0x40) = uVar8;
    if (param_1[1] != lStack_50) {
      func_0x000107c2acd4(param_1);
      param_1[1] = lStack_50;
      *param_1 = ppuStack_58;
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
    ppuStack_58 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_58);
  }
  return;
}



/* Entry: 1096b95f4; end: 1096b9613;  */

int FUN_1096b95f4(long param_1)

{
  return (int)((ulong)(*(long *)(*(long *)(param_1 + 8) + 0x20) -
                      *(long *)(*(long *)(param_1 + 8) + 0x18)) >> 2) * -0x55555555;
}



/* Entry: 1096b9614; end: 1096b966b;  */

void FUN_1096b9614(long param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  FUN_1096b9498();
  lVar5 = *(long *)(param_1 + 8);
  lVar1 = (long)param_2 * 2 + (long)param_2;
  puVar2 = (undefined8 *)((long)param_3 + lVar1 * 4);
  uVar4 = lVar1 * -0x5555555555555555;
  puVar8 = (undefined8 *)(lVar5 + 0x18);
  lVar6 = *(long *)(lVar5 + 0x28);
  puVar11 = (undefined8 *)*puVar8;
  if ((ulong)((lVar6 - (long)puVar11 >> 2) * -0x5555555555555555) < uVar4) {
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined8 **)(lVar5 + 0x20) = puVar11;
      __ZdlPv(puVar11);
      lVar6 = 0;
      *puVar8 = 0;
      *(undefined8 *)(lVar5 + 0x20) = 0;
      *(undefined8 *)(lVar5 + 0x28) = 0;
    }
    if (0x1555555555555555 < uVar4) {
      FUN_1094ccafc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__malloc_11034c5e8)(1);
      return;
    }
    uVar10 = (lVar6 >> 2) * 0x5555555555555556;
    if (uVar10 < uVar4 || uVar10 + lVar1 * 0x5555555555555555 == 0) {
      uVar10 = uVar4;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar6 >> 2) * -0x5555555555555555)) {
      uVar10 = 0x1555555555555555;
    }
    FUN_1094ccab4(puVar8,uVar10);
    puVar7 = *(undefined8 **)(lVar5 + 0x20);
    for (; param_3 != puVar2; param_3 = (undefined8 *)((long)param_3 + 0xc)) {
      uVar9 = *param_3;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar7 = uVar9;
      puVar7 = (undefined8 *)((long)puVar7 + 0xc);
    }
  }
  else {
    puVar8 = *(undefined8 **)(lVar5 + 0x20);
    if ((ulong)(((long)puVar8 - (long)puVar11 >> 2) * -0x5555555555555555) < uVar4) {
      puVar3 = (undefined8 *)((long)param_3 + ((long)puVar8 - (long)puVar11));
      puVar7 = puVar8;
      if (puVar8 != puVar11) {
        _memmove(puVar11,param_3);
        puVar8 = *(undefined8 **)(lVar5 + 0x20);
        puVar7 = puVar8;
      }
      for (; puVar3 != puVar2; puVar3 = (undefined8 *)((long)puVar3 + 0xc)) {
        uVar9 = *puVar3;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar3 + 1);
        *puVar8 = uVar9;
        puVar8 = (undefined8 *)((long)puVar8 + 0xc);
        puVar7 = (undefined8 *)((long)puVar7 + 0xc);
      }
    }
    else {
      lVar1 = (long)puVar2 - (long)param_3;
      if (lVar1 != 0) {
        _memmove(puVar11,param_3,lVar1);
      }
      puVar7 = (undefined8 *)((long)puVar11 + lVar1);
    }
  }
  *(undefined8 **)(lVar5 + 0x20) = puVar7;
  return;
}



/* Entry: 1096b966c; end: 1096b9683;  */

undefined4 FUN_1096b966c(long param_1,int param_2)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float afStack_c [3];
  
  pfVar5 = (float *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)param_2 * 0xc);
  lVar1 = *(long *)(param_1 + 8) + 0x30;
  lVar7 = 0;
  afStack_c[1] = 0.0;
  afStack_c[2] = 0.0;
  afStack_c[0] = 0.0;
  lVar8 = lVar1;
  do {
    lVar9 = 0;
    iVar6 = (int)lVar7;
    pfVar3 = afStack_c + 2;
    if (iVar6 == 1) {
      pfVar3 = afStack_c + 1;
    }
    pfVar2 = afStack_c;
    if (iVar6 != 2) {
      pfVar2 = pfVar3;
    }
    *pfVar2 = *(float *)(lVar1 + lVar7 * 0x10 + 0xc);
    do {
      pfVar3 = pfVar5;
      if ((int)lVar9 == 1) {
        pfVar3 = pfVar5 + 1;
      }
      pfVar2 = pfVar5 + 2;
      if ((int)lVar9 != 2) {
        pfVar2 = pfVar3;
      }
      pfVar3 = afStack_c + 2;
      if (iVar6 == 1) {
        pfVar3 = afStack_c + 1;
      }
      pfVar4 = afStack_c;
      if (iVar6 != 2) {
        pfVar4 = pfVar3;
      }
      *pfVar4 = *pfVar4 + *pfVar2 * *(float *)(lVar8 + lVar9 * 4);
      lVar9 = lVar9 + 1;
    } while (lVar9 != 3);
    lVar7 = lVar7 + 1;
    lVar8 = lVar8 + 0x10;
  } while (lVar7 != 3);
  return afStack_c[2];
}



/* Entry: 1096b9684; end: 1096b9733;  */

void FUN_1096b9684(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = param_5;
  (**(code **)(*param_5 + 0x28))();
  FUN_1094cca1c(param_1,(long)(int)plVar2);
  lVar3 = 0;
  for (lVar4 = 0; plVar2 = param_5, (**(code **)(*param_5 + 0x28))(), lVar4 < (int)plVar2;
      lVar4 = lVar4 + 1) {
    FUN_109699d9c(param_5[1] + 0x30,*(long *)(param_5[1] + 0x18) + lVar3);
    puVar1 = (undefined4 *)(*param_1 + lVar3);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    lVar3 = lVar3 + 0xc;
  }
  return;
}



/* Entry: 1096b9734; end: 1096b985b;  */

float FUN_1096b9734(float param_1,undefined8 param_2,float param_3,long param_4,int param_5)

{
  FUN_109699d9c(*(long *)(param_4 + 8) + 0x30,
                *(long *)(*(long *)(param_4 + 8) + 0x18) + (long)param_5 * 0xc);
  return (float)*(undefined8 *)(*(long *)(param_4 + 8) + 0x60) * -param_1 * (1.0 / param_3) +
         (float)*(undefined8 *)(*(long *)(param_4 + 8) + 0x68);
}



/* Entry: 1096b985c; end: 1096b98cb;  */

void FUN_1096b985c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  lVar1 = 0;
  lVar2 = param_2;
  do {
    lVar3 = 0;
    lVar4 = param_3;
    do {
      fVar6 = 0.0;
      if (lVar3 == 3) {
        fVar6 = *(float *)(param_2 + lVar1 * 0x10 + 0xc);
      }
      lVar5 = 0;
      do {
        fVar6 = fVar6 + *(float *)(lVar4 + lVar5 * 4) * *(float *)(lVar2 + lVar5);
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0xc);
      *(float *)(param_1 + lVar1 * 0x10 + lVar3 * 4) = fVar6;
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 4;
    } while (lVar3 != 4);
    lVar1 = lVar1 + 1;
    lVar2 = lVar2 + 0x10;
  } while (lVar1 != 3);
  return;
}



/* Entry: 1096b98cc; end: 1096b98ff;  */

undefined8 * FUN_1096b98cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096b9900; end: 1096b9933;  */

void FUN_1096b9900(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096b9934; end: 1096b993b;  */

undefined8 FUN_1096b9934(void)

{
  return 3;
}



/* Entry: 1096b993c; end: 1096b9c0b;  */

void FUN_1096b993c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  lVar5 = param_1[2];
  puVar11 = (undefined8 *)*param_1;
  if ((ulong)((lVar5 - (long)puVar11 >> 2) * -0x5555555555555555) < param_4) {
    puVar3 = param_1;
    puVar12 = param_2;
    puVar4 = param_3;
    uVar9 = param_4;
    if (puVar11 != (undefined8 *)0x0) {
      param_1[1] = puVar11;
      __ZdlPv();
      lVar5 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar3 = puVar11;
    }
    if (0x1555555555555555 < param_4) {
      FUN_1094ccafc();
      lVar5 = puVar3[2];
      puVar11 = (undefined8 *)*puVar3;
      if ((ulong)((lVar5 - (long)puVar11 >> 2) * -0x5555555555555555) < uVar9) {
        if (puVar11 != (undefined8 *)0x0) {
          puVar3[1] = puVar11;
          __ZdlPv(puVar11);
          lVar5 = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
        }
        if (0x1555555555555555 < uVar9) {
          FUN_1094ccafc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__malloc_11034c5e8)(1);
          return;
        }
        uVar10 = (lVar5 >> 2) * 0x5555555555555556;
        if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
          uVar10 = uVar9;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar5 >> 2) * -0x5555555555555555)) {
          uVar10 = 0x1555555555555555;
        }
        FUN_1094ccab4(puVar3,uVar10);
        puVar6 = (undefined8 *)puVar3[1];
        for (; puVar12 != puVar4; puVar12 = (undefined8 *)((long)puVar12 + 0xc)) {
          uVar8 = *puVar12;
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar12 + 1);
          *puVar6 = uVar8;
          puVar6 = (undefined8 *)((long)puVar6 + 0xc);
        }
      }
      else {
        puVar7 = (undefined8 *)puVar3[1];
        if ((ulong)(((long)puVar7 - (long)puVar11 >> 2) * -0x5555555555555555) < uVar9) {
          puVar1 = (undefined8 *)((long)puVar12 + ((long)puVar7 - (long)puVar11));
          puVar6 = puVar7;
          if (puVar7 != puVar11) {
            _memmove(puVar11,puVar12);
            puVar7 = (undefined8 *)puVar3[1];
            puVar6 = puVar7;
          }
          for (; puVar1 != puVar4; puVar1 = (undefined8 *)((long)puVar1 + 0xc)) {
            uVar8 = *puVar1;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar1 + 1);
            *puVar7 = uVar8;
            puVar7 = (undefined8 *)((long)puVar7 + 0xc);
            puVar6 = (undefined8 *)((long)puVar6 + 0xc);
          }
        }
        else {
          lVar5 = (long)puVar4 - (long)puVar12;
          if (lVar5 != 0) {
            _memmove(puVar11,puVar12,lVar5);
          }
          puVar6 = (undefined8 *)((long)puVar11 + lVar5);
        }
      }
      puVar3[1] = puVar6;
      return;
    }
    uVar9 = (lVar5 >> 2) * 0x5555555555555556;
    if (uVar9 < param_4 || uVar9 - param_4 == 0) {
      uVar9 = param_4;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar5 >> 2) * -0x5555555555555555)) {
      uVar9 = 0x1555555555555555;
    }
    FUN_1094ccab4(param_1,uVar9);
    lVar5 = param_1[1];
    lVar2 = (long)param_3 - (long)param_2;
    if (lVar2 != 0) {
      _memmove(lVar5,param_2,lVar2);
    }
    lVar5 = lVar5 + lVar2;
  }
  else {
    puVar12 = (undefined8 *)param_1[1];
    if ((ulong)(((long)puVar12 - (long)puVar11 >> 2) * -0x5555555555555555) < param_4) {
      lVar2 = (long)param_2 + ((long)puVar12 - (long)puVar11);
      if (puVar12 != puVar11) {
        _memmove(puVar11,param_2);
        puVar12 = (undefined8 *)param_1[1];
      }
      lVar5 = (long)param_3 - lVar2;
      if (lVar5 != 0) {
        _memmove(puVar12,lVar2,lVar5);
      }
      lVar5 = (long)puVar12 + lVar5;
    }
    else {
      lVar5 = (long)param_3 - (long)param_2;
      if (lVar5 != 0) {
        _memmove(puVar11,param_2,lVar5);
      }
      lVar5 = (long)puVar11 + lVar5;
    }
  }
  param_1[1] = lVar5;
  return;
}



/* Entry: 1096b9c0c; end: 1096b9c27;  */

void FUN_1096b9c0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096b9c28; end: 1096b9c6f;  */

void FUN_1096b9c28(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096b9c70; end: 1096b9cc7;  */

undefined8 * FUN_1096b9c70(undefined8 *param_1)

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



/* Entry: 1096b9cc8; end: 1096b9d1f;  */

void FUN_1096b9cc8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b05060;
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



/* Entry: 1096b9d20; end: 1096b9d6b;  */

void FUN_1096b9d20(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096b9358(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096b9d6c; end: 1096b9d9b;  */

bool FUN_1096b9d6c(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b05060,0);
  return param_1 != 0;
}



/* Entry: 1096b9d9c; end: 1096b9de3;  */

long FUN_1096b9d9c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096b9de4; end: 1096b9e2b;  */

void FUN_1096b9de4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096b9e2c; end: 1096b9e9f;  */

void FUN_1096b9e2c(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  
  uVar3 = *param_2;
  fVar4 = (float)param_2[1];
  uVar5 = param_2[2];
  fVar1 = (float)param_2[3];
  uVar2 = uVar3;
  _hypotf(uVar3,fVar4);
  *param_1 = uVar3;
  param_1[1] = fVar4;
  param_1[2] = 0;
  param_1[3] = uVar5;
  param_1[4] = -fVar4;
  param_1[5] = uVar3;
  param_1[6] = 0;
  param_1[7] = -fVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = uVar2;
  param_1[0xb] = 0;
  return;
}



/* Entry: 1096b9ea0; end: 1096b9f43;  */

undefined8 * FUN_1096b9ea0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b051b8;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x30);
  *(undefined4 *)(puVar1 + 1) = 0x3f800000;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined4 *)((long)puVar1 + 0x2c) = 0;
  *puVar1 = &PTR_FUN_110b052f0;
  return param_1;
}



/* Entry: 1096b9f44; end: 1096b9f57;  */

ulong FUN_1096b9f44(long param_1)

{
  return (ulong)(*(long *)(*(long *)(param_1 + 8) + 0x20) - *(long *)(*(long *)(param_1 + 8) + 0x18)
                ) >> 3;
}



/* Entry: 1096b9f58; end: 1096ba05b;  */

void FUN_1096b9f58(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  long lStack_30;
  long lStack_28;
  
  if ((param_1[1] == 0) || (*(int *)(param_1[1] + -8) != 1)) {
    FUN_1096b9ea0(&ppuStack_48);
    lStack_28 = lStack_40 + -0x20;
    lStack_30 = param_1[1] + -0x20;
    ppuStack_38 = &PTR_DAT_110b01b50;
    func_0x000109696c8c(param_1,&ppuStack_38);
    lVar4 = param_1[1];
    uVar5 = *(undefined8 *)(lVar4 + 8);
    *(undefined8 *)(lStack_40 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
    *(undefined8 *)(lStack_40 + 8) = uVar5;
    if (lStack_40 != lVar4) {
      FUN_1096b8d6c(lStack_40 + 0x18,*(long *)(lVar4 + 0x18),*(long *)(lVar4 + 0x20),
                    *(long *)(lVar4 + 0x20) - *(long *)(lVar4 + 0x18) >> 3);
    }
    if (param_1[1] != lStack_40) {
      func_0x000107c2acd4(param_1);
      param_1[1] = lStack_40;
      *param_1 = ppuStack_48;
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
    }
    ppuStack_48 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_48);
  }
  return;
}



/* Entry: 1096ba05c; end: 1096ba0d3;  */

void FUN_1096ba05c(void)

{
  return;
}



/* Entry: 1096ba0d4; end: 1096ba117;  */

void FUN_1096ba0d4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  
  FUN_1096a5c58(param_1,(*(long *)(*(long *)(param_2 + 8) + 0x20) -
                        *(long *)(*(long *)(param_2 + 8) + 0x18)) * 0x20000000 >> 0x20);
  lVar2 = *(long *)(param_2 + 8);
  uVar3 = *(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18);
  if (0 < (int)(uVar3 >> 3)) {
    uVar3 = uVar3 >> 3 & 0x7fffffff;
    pfVar4 = (float *)(*(long *)(lVar2 + 0x18) + 4);
    puVar1 = (undefined8 *)*param_1;
    do {
      fVar5 = (float)*(undefined8 *)(pfVar4 + -1);
      *puVar1 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) +
                         fVar5 * *(float *)(lVar2 + 0xc) +
                         (float)((ulong)*(undefined8 *)(pfVar4 + -1) >> 0x20) *
                         *(float *)(lVar2 + 8),
                         (float)*(undefined8 *)(lVar2 + 0x10) +
                         -*pfVar4 * *(float *)(lVar2 + 0xc) + fVar5 * *(float *)(lVar2 + 8));
      pfVar4 = pfVar4 + 2;
      uVar3 = uVar3 - 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 1096ba118; end: 1096ba173;  */

void FUN_1096ba118(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18);
  if (0 < (int)(uVar2 >> 3)) {
    uVar2 = uVar2 >> 3 & 0x7fffffff;
    pfVar3 = (float *)(*(long *)(lVar1 + 0x18) + 4);
    do {
      fVar4 = (float)*(undefined8 *)(pfVar3 + -1);
      *param_3 = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20) +
                          fVar4 * *(float *)(lVar1 + 0xc) +
                          (float)((ulong)*(undefined8 *)(pfVar3 + -1) >> 0x20) *
                          *(float *)(lVar1 + 8),
                          (float)*(undefined8 *)(lVar1 + 0x10) +
                          -*pfVar3 * *(float *)(lVar1 + 0xc) + fVar4 * *(float *)(lVar1 + 8));
      pfVar3 = pfVar3 + 2;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 1096ba174; end: 1096ba1fb;  */

void FUN_1096ba174(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = param_2[1];
  fVar8 = (float)((ulong)*param_2 >> 0x20);
  fVar7 = (float)*param_2;
  fVar3 = *(float *)(lVar1 + 8);
  fVar4 = *(float *)(lVar1 + 0xc);
  fVar5 = *(float *)(lVar1 + 0x10);
  fVar6 = *(float *)(lVar1 + 0x14);
  FUN_1096b9f58();
  lVar1 = *(long *)(param_1 + 8);
  *(ulong *)(lVar1 + 8) = CONCAT44(fVar7 * fVar4 + fVar8 * fVar3,-fVar8 * fVar4 + fVar7 * fVar3);
  *(ulong *)(lVar1 + 0x10) =
       CONCAT44((float)((ulong)uVar2 >> 0x20) + fVar7 * fVar6 + fVar8 * fVar5,
                (float)uVar2 + -fVar8 * fVar6 + fVar7 * fVar5);
  return;
}



/* Entry: 1096ba1fc; end: 1096ba273;  */

void FUN_1096ba1fc(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_109367d10(param_1,(*(long *)(*(long *)(param_2 + 8) + 0x20) -
                        *(long *)(*(long *)(param_2 + 8) + 0x18)) * 0x40000000 >> 0x20 &
                        0xfffffffffffffffe);
  lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x18);
  uVar2 = *(long *)(*(long *)(param_2 + 8) + 0x20) - lVar1;
  if (0 < (int)(uVar2 >> 3)) {
    uVar2 = uVar2 >> 3 & 0x7fffffff;
    puVar3 = (undefined4 *)(*param_1 + 4);
    puVar4 = (undefined4 *)(lVar1 + 4);
    do {
      puVar3[-1] = puVar4[-1];
      *puVar3 = *puVar4;
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 2;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 1096ba274; end: 1096ba27b;  */

undefined8 FUN_1096ba274(void)

{
  return 2;
}



/* Entry: 1096ba27c; end: 1096ba4e7;  */

bool FUN_1096ba27c(long param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  int iStack_34;
  
  lVar4 = *(long *)(param_1 + 8);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,lVar4 + 8,8,1);
  if (((((int)plVar2 == 1) &&
       (plVar2 = param_2, (**(code **)(*param_2 + 0x40))(param_2,lVar4 + 0x10,8,1), (int)plVar2 == 1
       )) && (plVar2 = param_2, (**(code **)(*param_2 + 0x40))(param_2,auStack_38,4,1),
             (int)plVar2 == 1)) &&
     (plVar2 = param_2, (**(code **)(*param_2 + 0x40))(param_2,auStack_3c,4,1), (int)plVar2 == 1)) {
    lVar4 = *(long *)(param_1 + 8);
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&iStack_34,4,1);
    bVar1 = false;
    if (((int)plVar2 == 1) && (-1 < iStack_34)) {
      FUN_1096b9118(lVar4 + 0x18);
      lVar3 = *(long *)(lVar4 + 0x18);
      if (lVar3 == *(long *)(lVar4 + 0x20)) {
        bVar1 = true;
      }
      else {
        do {
          plVar2 = param_2;
          (**(code **)(*param_2 + 0x40))(param_2,lVar3,8,1);
          bVar1 = ((ulong)plVar2 & 0xffffffff) == 1;
          if (!bVar1) {
            return bVar1;
          }
          lVar3 = lVar3 + 8;
        } while (lVar3 != *(long *)(lVar4 + 0x20));
      }
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1096ba4e8; end: 1096ba51b;  */

undefined8 * FUN_1096ba4e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096ba51c; end: 1096ba54f;  */

void FUN_1096ba51c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096ba550; end: 1096ba67f;  */

void FUN_1096ba550(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar3 = param_1[2];
  puVar7 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar3 - (long)puVar7) >> 3) < param_4) {
    if (puVar7 != (undefined8 *)0x0) {
      param_1[1] = puVar7;
      __ZdlPv(puVar7);
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3d != 0) {
      FUN_1096a5d04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__malloc_11034c5e8)(1);
      return;
    }
    uVar1 = (long)uVar3 >> 2;
    if ((ulong)((long)uVar3 >> 2) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar1 = 0x1fffffffffffffff;
    }
    FUN_1096a5ccc(param_1,uVar1);
    puVar4 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar4 = *param_2;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    puVar5 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar5 - (long)puVar7 >> 3) < param_4) {
      puVar6 = (undefined8 *)((long)param_2 + ((long)puVar5 - (long)puVar7));
      puVar4 = puVar5;
      if (puVar5 != puVar7) {
        _memmove(puVar7,param_2);
        puVar5 = (undefined8 *)param_1[1];
        puVar4 = puVar5;
      }
      for (; puVar6 != param_3; puVar6 = puVar6 + 1) {
        *puVar5 = *puVar6;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    else {
      lVar2 = (long)param_3 - (long)param_2;
      if (lVar2 != 0) {
        _memmove(puVar7,param_2,lVar2);
      }
      puVar4 = (undefined8 *)((long)puVar7 + lVar2);
    }
  }
  param_1[1] = puVar4;
  return;
}



/* Entry: 1096ba680; end: 1096ba69b;  */

void FUN_1096ba680(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096ba69c; end: 1096ba6e3;  */

void FUN_1096ba69c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096ba6e4; end: 1096ba73b;  */

undefined8 * FUN_1096ba6e4(undefined8 *param_1)

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



/* Entry: 1096ba73c; end: 1096ba793;  */

void FUN_1096ba73c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b05200;
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



/* Entry: 1096ba794; end: 1096ba7df;  */

void FUN_1096ba794(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096b9ea0(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096ba7e0; end: 1096ba80f;  */

bool FUN_1096ba7e0(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0);
  return param_1 != 0;
}



/* Entry: 1096ba810; end: 1096ba86f;  */

long FUN_1096ba810(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096ba870; end: 1096ba8eb;  */

undefined8 * FUN_1096ba870(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b05358;
  param_1[1] = puVar1;
  FUN_1096ba8ec(param_1);
  return param_1;
}



/* Entry: 1096ba8ec; end: 1096ba9af;  */

void FUN_1096ba8ec(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  func_0x000107c2acd0(param_1,0x70);
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_DAT_110b00de0;
  puVar3 = param_1;
  func_0x000107c2acdc();
  param_1[1] = &PTR_FUN_110b01d60;
  uVar5 = *puVar3;
  param_1[2] = puVar3[1];
  param_1[1] = uVar5;
  if (param_1[2] != 0) {
    piVar4 = (int *)(param_1[2] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_110b05490;
  param_1[1] = &PTR_FUN_110b04b98;
  return;
}



/* Entry: 1096ba9b0; end: 1096baa2f;  */

void FUN_1096ba9b0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  
  FUN_1096baa30();
  lVar11 = *(long *)(param_1 + 8);
  if (*(long *)(lVar11 + 0x10) != param_2[1]) {
    func_0x000107c2acd4(lVar11 + 8);
    uVar12 = *param_2;
    *(undefined8 *)(lVar11 + 0x10) = param_2[1];
    *(undefined8 *)(lVar11 + 8) = uVar12;
    if (*(long *)(lVar11 + 0x10) != 0) {
      piVar8 = (int *)(*(long *)(lVar11 + 0x10) + -8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  lVar9 = *(long *)(param_1 + 8);
  uVar1 = (long)*(int *)(param_2[1] + 0x14) + (long)*(int *)(param_2[1] + 0x10);
  lVar11 = *(long *)(lVar9 + 0x18);
  uVar10 = *(long *)(lVar9 + 0x20) - lVar11 >> 2;
  uVar5 = uVar10 <= uVar1;
  uVar6 = uVar1 == uVar10;
  if ((bool)uVar5 && !(bool)uVar6) {
    func_0x00010742b258((long *)(lVar9 + 0x18),uVar1 - uVar10);
    func_0x00010742bae4();
    if ((bool)uVar5 && !(bool)uVar6) {
      func_0x00010742be60();
      func_0x0001073b5434();
      func_0x00010742b52c();
      func_0x0001073b531c(auStack_58);
      puVar4 = puStack_48;
      for (lVar11 = unaff_x20 << 2; lVar11 != 0; lVar11 = lVar11 + -4) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      puStack_48 = puStack_48 + unaff_x20;
      func_0x00010742bb50();
      func_0x0001073b52fc();
      func_0x0001073b5364(auStack_58);
      return;
    }
    puVar7 = *(undefined4 **)(unaff_x19 + 8);
    puVar4 = puVar7;
    for (lVar11 = unaff_x20 << 2; lVar11 != 0; lVar11 = lVar11 + -4) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 **)(unaff_x19 + 8) = puVar7 + unaff_x20;
    return;
  }
  if (uVar1 < uVar10) {
    *(ulong *)(lVar9 + 0x20) = lVar11 + uVar1 * 4;
  }
  return;
}



/* Entry: 1096baa30; end: 1096bab7f;  */

void FUN_1096baa30(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((param_1[1] == 0) || (*(int *)(param_1[1] + -8) != 1)) {
    FUN_1096ba870(&ppuStack_58);
    lStack_38 = lStack_50 + -0x20;
    lStack_40 = param_1[1] + -0x20;
    ppuStack_48 = &PTR_DAT_110b01b50;
    func_0x000109696c8c(param_1,&ppuStack_48);
    lVar3 = lStack_50;
    lVar5 = param_1[1];
    if (*(long *)(lStack_50 + 0x10) != *(long *)(lVar5 + 0x10)) {
      func_0x000107c2acd4(lStack_50 + 8);
      uVar6 = *(undefined8 *)(lVar5 + 8);
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar5 + 0x10);
      *(undefined8 *)(lVar3 + 8) = uVar6;
      if (*(long *)(lVar3 + 0x10) != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0x10) + -8);
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
    if (lVar3 != lVar5) {
      FUN_10942bf40(lVar3 + 0x18,*(long *)(lVar5 + 0x18),*(long *)(lVar5 + 0x20),
                    *(long *)(lVar5 + 0x20) - *(long *)(lVar5 + 0x18) >> 2);
    }
    uVar7 = *(undefined8 *)(lVar5 + 0x38);
    uVar6 = *(undefined8 *)(lVar5 + 0x30);
    uVar9 = *(undefined8 *)(lVar5 + 0x48);
    uVar8 = *(undefined8 *)(lVar5 + 0x40);
    uVar10 = *(undefined8 *)(lVar5 + 0x50);
    uVar12 = *(undefined8 *)(lVar5 + 0x68);
    uVar11 = *(undefined8 *)(lVar5 + 0x60);
    *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)(lVar5 + 0x58);
    *(undefined8 *)(lVar3 + 0x50) = uVar10;
    *(undefined8 *)(lVar3 + 0x68) = uVar12;
    *(undefined8 *)(lVar3 + 0x60) = uVar11;
    *(undefined8 *)(lVar3 + 0x38) = uVar7;
    *(undefined8 *)(lVar3 + 0x30) = uVar6;
    *(undefined8 *)(lVar3 + 0x48) = uVar9;
    *(undefined8 *)(lVar3 + 0x40) = uVar8;
    if (param_1[1] != lStack_50) {
      func_0x000107c2acd4(param_1);
      param_1[1] = lStack_50;
      *param_1 = ppuStack_58;
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
    ppuStack_58 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_58);
  }
  return;
}



/* Entry: 1096bab80; end: 1096baba7;  */

int FUN_1096bab80(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  lVar3 = *(long *)(lVar2 + 0x48);
  iVar1 = 0;
  if (lVar3 != 0) {
    iVar1 = (int)((ulong)(*(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 8)) >> 2);
  }
  return iVar1 + *(int *)(lVar2 + 0xc);
}



/* Entry: 1096baba8; end: 1096baccf;  */

void FUN_1096baba8(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  long param_5)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  long lStack_40;
  
  lVar3 = *(long *)(*(long *)(param_5 + 8) + 0x10);
  lVar4 = *(long *)(lVar3 + 0x48);
  iVar2 = 0;
  if (lVar4 != 0) {
    iVar2 = (int)((ulong)(*(long *)(lVar4 + 0x10) - *(long *)(lVar4 + 8)) >> 2);
  }
  uVar5 = (long)*(int *)(lVar3 + 0xc) + (long)iVar2;
  FUN_109367d10(&lStack_48,uVar5 * 3);
  lVar3 = *(long *)(param_5 + 8);
  FUN_1096b6a28(lVar3 + 8,
                (ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 2 & 0xffffffff,
                *(long *)(lVar3 + 0x18),(ulong)(lStack_40 - lStack_48) >> 2 & 0xffffffff);
  FUN_1094cca1c(param_1,(long)(int)uVar5);
  if (0 < (int)uVar5) {
    lVar3 = 0;
    uVar5 = uVar5 & 0xffffffff;
    do {
      uVar6 = *(undefined4 *)((undefined8 *)(lStack_48 + lVar3) + 1);
      uVar7 = *(undefined8 *)(lStack_48 + lVar3);
      uStack_58 = uVar7;
      uStack_50 = uVar6;
      FUN_109699d9c(*(long *)(param_5 + 8) + 0x30,&uStack_58);
      puVar1 = (undefined4 *)(*param_1 + lVar3);
      *puVar1 = uVar6;
      puVar1[1] = (int)uVar7;
      puVar1[2] = param_4;
      lVar3 = lVar3 + 0xc;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  return;
}



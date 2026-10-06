/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a087d8c; end: 10a087dc7;  */

void FUN_10a087d8c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&puStack_30,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_28,&puStack_30,*puVar1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_30);
  FUN_10a087cac(*puVar1,&puStack_30,&puStack_28,param_1 + 0x20);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a087dc8; end: 10a087f9f;  */

void FUN_10a087dc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(&ppuStack_70,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_a8,&ppuStack_70,*param_1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_b0);
  plVar2 = (long *)*param_1;
  FUN_10a07aef4(auStack_90,plVar2,param_2);
  FUN_10a07aef4(aiStack_80,plVar2,param_3);
  uStack_48 = 2;
  puStack_50 = auStack_90;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_70 = &puStack_a8;
  ppuStack_58 = &puStack_50;
  plStack_68 = plVar2;
  puStack_60 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar1)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x20);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10a087fa0; end: 10a087fdf;  */

void FUN_10a087fa0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_70,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_a8,&ppuStack_70,*puVar1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_b0);
  plVar3 = (long *)*puVar1;
  FUN_10a07aef4(auStack_90,plVar3,param_1 + 0x20);
  FUN_10a07aef4(aiStack_80,plVar3,param_1 + 0x28);
  uStack_48 = 2;
  puStack_50 = auStack_90;
  (**(code **)(*plVar3 + 0x58))(plVar3);
  ppuStack_70 = &puStack_a8;
  ppuStack_58 = &puStack_50;
  plStack_68 = plVar3;
  puStack_60 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar2 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar2)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar2) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar2))();
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != -0x20);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10a087fe0; end: 10a0881b7;  */

void FUN_10a087fe0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(&ppuStack_70,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_a8,&ppuStack_70,*param_1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_b0);
  plVar2 = (long *)*param_1;
  FUN_10a0881b8(auStack_90,plVar2,param_2);
  FUN_10a07a354(aiStack_80,plVar2,param_3);
  uStack_48 = 2;
  puStack_50 = auStack_90;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_70 = &puStack_a8;
  ppuStack_58 = &puStack_50;
  plStack_68 = plVar2;
  puStack_60 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar1)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x20);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10a0881b8; end: 10a088277;  */

void FUN_10a0881b8(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_40 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110b9fbb0;
    lVar3 = *param_3;
    *(int *)(plStack_40 + 2) = (int)param_3[1];
    plStack_40[1] = lVar3;
    plStack_38 = plVar2;
    FUN_10a065450(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a088274);
  (*pcVar1)();
}



/* Entry: 10a088278; end: 10a0882bf;  */

void FUN_10a088278(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_70,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_a8,&ppuStack_70,*puVar1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_b0);
  plVar3 = (long *)*puVar1;
  FUN_10a0881b8(auStack_90,plVar3,param_1 + 0x20);
  FUN_10a07a354(aiStack_80,plVar3,param_1 + 0x2c);
  uStack_48 = 2;
  puStack_50 = auStack_90;
  (**(code **)(*plVar3 + 0x58))(plVar3);
  ppuStack_70 = &puStack_a8;
  ppuStack_58 = &puStack_50;
  plStack_68 = plVar3;
  puStack_60 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar2 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar2)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar2) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar2))();
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != -0x20);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10a0882c0; end: 10a088453;  */

void FUN_10a0882c0(undefined8 *param_1,int *param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  aiStack_70[0] = 3;
  puStack_68 = (undefined8 *)(double)*param_2;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a088454; end: 10a08848f;  */

void FUN_10a088454(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  aiStack_70[0] = 3;
  puStack_68 = (undefined8 *)(double)*(int *)(param_1 + 0x20);
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a088490; end: 10a08869b;  */

void FUN_10a088490(undefined8 *param_1,undefined8 param_2,int *param_3,long *param_4,int *param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  int aiStack_d0 [2];
  undefined8 *puStack_c8;
  undefined8 *apuStack_c0 [2];
  undefined4 uStack_b0;
  double dStack_a8;
  undefined4 uStack_a0;
  double dStack_98;
  int aiStack_90 [2];
  double dStack_88;
  undefined8 **ppuStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined8 ***pppuStack_68;
  undefined8 **ppuStack_60;
  undefined8 uStack_58;
  
  func_0x000109884c0c(apuStack_c0,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_d8,apuStack_c0,*param_1);
  if (apuStack_c0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_c0[0])();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_e0);
  plVar2 = (long *)*param_1;
  FUN_10a07aef4(apuStack_c0,plVar2,param_2);
  uStack_b0 = 3;
  dStack_a8 = (double)*param_3;
  dStack_98 = (double)*param_4;
  uStack_a0 = 3;
  aiStack_90[0] = 3;
  dStack_88 = (double)*param_5;
  uStack_58 = 4;
  ppuStack_60 = apuStack_c0;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_80 = &puStack_d8;
  pppuStack_68 = &ppuStack_60;
  plStack_78 = plVar2;
  puStack_70 = (undefined1 *)&puStack_e0;
  func_0x0001098960c0(aiStack_d0);
  if ((3 < aiStack_d0[0]) && (puStack_c8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_c8)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_90 + lVar1)) &&
       (*(undefined8 **)((long)&dStack_88 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&dStack_88 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x40);
  if (puStack_e0 != (undefined8 *)0x0) {
    (**(code **)*puStack_e0)();
  }
  if (puStack_d8 != (undefined8 *)0x0) {
    (**(code **)*puStack_d8)();
  }
  return;
}



/* Entry: 10a08869c; end: 10a0886eb;  */

void FUN_10a08869c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  int aiStack_d0 [2];
  undefined8 *puStack_c8;
  undefined8 *apuStack_c0 [2];
  undefined4 uStack_b0;
  double dStack_a8;
  undefined4 uStack_a0;
  double dStack_98;
  int aiStack_90 [2];
  double dStack_88;
  undefined8 **ppuStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined8 ***pppuStack_68;
  undefined8 **ppuStack_60;
  undefined8 uStack_58;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(apuStack_c0,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_d8,apuStack_c0,*puVar1);
  if (apuStack_c0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_c0[0])();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_e0);
  plVar3 = (long *)*puVar1;
  FUN_10a07aef4(apuStack_c0,plVar3,param_1 + 0x20);
  uStack_b0 = 3;
  dStack_a8 = (double)*(int *)(param_1 + 0x28);
  dStack_98 = (double)*(long *)(param_1 + 0x30);
  uStack_a0 = 3;
  aiStack_90[0] = 3;
  dStack_88 = (double)*(int *)(param_1 + 0x38);
  uStack_58 = 4;
  ppuStack_60 = apuStack_c0;
  (**(code **)(*plVar3 + 0x58))(plVar3);
  ppuStack_80 = &puStack_d8;
  pppuStack_68 = &ppuStack_60;
  plStack_78 = plVar3;
  puStack_70 = (undefined1 *)&puStack_e0;
  func_0x0001098960c0(aiStack_d0);
  if ((3 < aiStack_d0[0]) && (puStack_c8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_c8)();
  }
  lVar2 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_90 + lVar2)) &&
       (*(undefined8 **)((long)&dStack_88 + lVar2) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&dStack_88 + lVar2))();
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != -0x40);
  if (puStack_e0 != (undefined8 *)0x0) {
    (**(code **)*puStack_e0)();
  }
  if (puStack_d8 != (undefined8 *)0x0) {
    (**(code **)*puStack_d8)();
  }
  return;
}



/* Entry: 10a0886ec; end: 10a088743;  */

long FUN_10a0886ec(long param_1)

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



/* Entry: 10a088744; end: 10a0888af;  */

ulong FUN_10a088744(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long *plStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 auStack_38 [24];
  
  if ((int)param_2 != 0) {
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
              ((long)param_1 + *(long *)(*param_1 + -0x18));
    (**(code **)(*param_1 + 0x68))(param_1,2);
  }
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x80))();
  if ((int)plVar2 == 2) {
    plVar2 = (long *)param_1[0x13];
    if (plVar2 == (long *)0x0) {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x88))();
      if (*plVar2 == 0) {
        plStack_70 = param_1;
        FUN_10a0888b0(auStack_68,&plStack_70);
        FUN_109feb280(auStack_50,&UNK_10f633748,auStack_68);
        FUN_10a012db0(auStack_38,auStack_50,&UNK_10f633762);
        if (cStack_39 < '\0') {
          __ZdlPv(auStack_50[0]);
        }
        if (cStack_51 < '\0') {
          __ZdlPv(auStack_68[0]);
        }
        FUN_10a0edf4c(auStack_38);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a088868);
        (*pcVar1)();
      }
      uVar3 = 0;
      plVar2 = (long *)0x2;
    }
    else {
      FUN_10a088744(plVar2,param_2);
      uVar3 = (ulong)plVar2 & 0xffffffff00000000;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 | (ulong)plVar2 & 0xffffffff;
}



/* Entry: 10a0888b0; end: 10a0888df;  */

/* WARNING: Possible PIC construction at 0x00010ad044a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad044a4) */
/* WARNING: Removing unreachable block (ram,0x00010ad044c8) */

ulong * FUN_10a0888b0(ulong *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                     long param_5)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((long *)*param_2 == (long *)0x0) {
    puVar5 = (ulong *)&UNK_10f6337b7;
    FUN_10a00946c();
    puVar6 = puVar5;
    if (param_5 != 0) {
      FUN_10a088950();
      puVar4 = (undefined8 *)puVar5[1];
      for (; param_3 != param_4; param_3 = param_3 + 1) {
        *puVar4 = *param_3;
        puVar4 = puVar4 + 1;
      }
      puVar5[1] = (ulong)puVar4;
    }
    return puVar6;
  }
  puVar5 = (ulong *)(*(ulong *)(*(long *)(*(long *)*param_2 + -8) + 8) & 0x7fffffffffffffff);
  puVar1 = &stack0xfffffffffffffff0;
  if (puVar5 == (ulong *)0x0) {
    puVar5 = (ulong *)&UNK_10f6a2cf4;
  }
  else {
    ___cxa_demangle(puVar5,0,0,&stack0xffffffffffffffcc);
    unaff_x30 = 0x10ad044a4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_1;
    unaff_x20 = puVar5;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar6 = puVar5;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar6) {
    func_0x000107c2b040();
    *(ulong **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar6 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar6 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar5 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar5;
      }
    }
    return puVar6;
  }
  if (puVar6 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar6;
    puVar3 = param_1;
    if (puVar6 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar2 = (ulong *)0x19;
    if (((ulong)puVar6 | 7) != 0x17) {
      puVar2 = (ulong *)(((ulong)puVar6 | 7) + 1);
    }
    puVar3 = puVar2;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar6;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,puVar5,puVar6);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar6) = 0;
  return param_1;
}



/* Entry: 10a0888e0; end: 10a08894f;  */

void FUN_10a0888e0(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a088950(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a088950; end: 10a088987;  */

void FUN_10a088950(long *param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  
  if (param_2 >> 0x3d == 0) {
    plVar6 = param_1;
    FUN_10a08899c();
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar6;
    param_1[2] = (long)(plVar6 + param_2);
    return;
  }
  FUN_10a088988();
  puVar5 = &UNK_10f6334ac;
  FUN_109ffde64();
  if (param_2 >> 0x3d != 0) {
    func_0x000109ffded8();
    if ((puVar5[0xa8] & 1) == 0) {
      *(undefined8 *)(puVar5 + 0x88) = *(undefined8 *)(puVar5 + 0x90);
      FUN_10a05730c(puVar5 + 0x98,puVar5 + 0x88,puVar5 + 0x80);
      *(long *)(puVar5 + 0x90) = *(long *)(puVar5 + 0x98);
      plVar6 = (long *)(*(long *)(puVar5 + 0x98) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((uint)*(undefined8 *)(*(long *)(puVar5 + 0x90) + 0x10) >> 1 & 1) == 0) {
        puVar5[0xa8] = 1;
        lVar9 = *(long *)(puVar5 + 0x90);
        plVar6 = (long *)(lVar9 + 0x10);
        uStack_88 = *(undefined8 *)(puVar5 + 0x18);
        do {
          lVar8 = *plVar6;
          if (lVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              uStack_98 = 0;
              puStack_90 = puVar5;
              func_0x000109d1b588(lVar9 + 0x18,&uStack_98);
              *(undefined8 *)(lVar9 + 0x10) = 0;
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar8 >> 1 & 1) == 0);
      }
    }
    plVar6 = *(long **)(puVar5 + 0x90);
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = *(long **)(puVar5 + 0x98);
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    if (((uint)*(undefined8 *)(*(long *)(puVar5 + 0x88) + 0x10) >> 1 & 1) == 0) {
      lVar9 = *(long *)(puVar5 + 0x80);
      *(long *)(puVar5 + 0xa0) = lVar9;
      *(undefined8 *)(puVar5 + 0x80) = 0;
      if (((uint)*(undefined8 *)(lVar9 + 0x10) >> 5 & 1) == 0) {
        func_0x0001092af8bc(puVar5 + 0xa0);
        if ((*(byte *)(*(long *)(puVar5 + 0xa0) + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a088cfc);
          (*pcVar4)();
        }
        FUN_10a0560a4(puVar5 + 0x48,*(long *)(puVar5 + 0xa0) + 0x98);
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(&uStack_98,*(long *)(puVar5 + 0xa0) + 0x90);
        FUN_10a056190(puVar5 + 0x60,&uStack_98);
        __ZNSt13exception_ptrD1Ev(&uStack_98);
      }
      plVar6 = *(long **)(puVar5 + 0xa0);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
    }
    func_0x0001092ba100(puVar5 + 0x10);
    plVar6 = *(long **)(puVar5 + 0x88);
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    func_0x000109d1a1d0(puVar5 + 0x10);
    if ((3 < *(int *)(puVar5 + 0x68)) && (*(undefined8 **)(puVar5 + 0x70) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(puVar5 + 0x70))();
    }
    if ((3 < *(int *)(puVar5 + 0x50)) && (*(undefined8 **)(puVar5 + 0x58) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(puVar5 + 0x58))();
    }
    plVar6 = *(long **)(puVar5 + 0x80);
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    __ZdlPv(puVar5);
    return;
  }
  __Znwm(param_2 << 3);
  return;
}



/* Entry: 10a088988; end: 10a08899b;  */

void FUN_10a088988(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar5 = &UNK_10f6334ac;
  FUN_109ffde64();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  if ((puVar5[0xa8] & 1) == 0) {
    *(undefined8 *)(puVar5 + 0x88) = *(undefined8 *)(puVar5 + 0x90);
    FUN_10a05730c(puVar5 + 0x98,puVar5 + 0x88,puVar5 + 0x80);
    *(long *)(puVar5 + 0x90) = *(long *)(puVar5 + 0x98);
    plVar6 = (long *)(*(long *)(puVar5 + 0x98) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(puVar5 + 0x90) + 0x10) >> 1 & 1) == 0) {
      puVar5[0xa8] = 1;
      lVar9 = *(long *)(puVar5 + 0x90);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_68 = *(undefined8 *)(puVar5 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_78 = 0;
            puStack_70 = puVar5;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_78);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar6 = *(long **)(puVar5 + 0x90);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(puVar5 + 0x98);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if (((uint)*(undefined8 *)(*(long *)(puVar5 + 0x88) + 0x10) >> 1 & 1) == 0) {
    lVar9 = *(long *)(puVar5 + 0x80);
    *(long *)(puVar5 + 0xa0) = lVar9;
    *(undefined8 *)(puVar5 + 0x80) = 0;
    if (((uint)*(undefined8 *)(lVar9 + 0x10) >> 5 & 1) == 0) {
      func_0x0001092af8bc(puVar5 + 0xa0);
      if ((*(byte *)(*(long *)(puVar5 + 0xa0) + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a088cfc);
        (*pcVar4)();
      }
      FUN_10a0560a4(puVar5 + 0x48,*(long *)(puVar5 + 0xa0) + 0x98);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_78,*(long *)(puVar5 + 0xa0) + 0x90);
      FUN_10a056190(puVar5 + 0x60,&uStack_78);
      __ZNSt13exception_ptrD1Ev(&uStack_78);
    }
    plVar6 = *(long **)(puVar5 + 0xa0);
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
  }
  func_0x0001092ba100(puVar5 + 0x10);
  plVar6 = *(long **)(puVar5 + 0x88);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  func_0x000109d1a1d0(puVar5 + 0x10);
  if ((3 < *(int *)(puVar5 + 0x68)) && (*(undefined8 **)(puVar5 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(puVar5 + 0x70))();
  }
  if ((3 < *(int *)(puVar5 + 0x50)) && (*(undefined8 **)(puVar5 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(puVar5 + 0x58))();
  }
  plVar6 = *(long **)(puVar5 + 0x80);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  __ZdlPv(puVar5);
  return;
}



/* Entry: 10a08899c; end: 10a0889cf;  */

void FUN_10a08899c(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x90);
    FUN_10a05730c(param_1 + 0x98,param_1 + 0x88,param_1 + 0x80);
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x98);
    plVar5 = (long *)(*(long *)(param_1 + 0x98) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar8 = *(long *)(param_1 + 0x90);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_58 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_68 = 0;
            lStack_60 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_68);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x90);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x98);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 1 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0xa0) = lVar8;
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (((uint)*(undefined8 *)(lVar8 + 0x10) >> 5 & 1) == 0) {
      func_0x0001092af8bc(param_1 + 0xa0);
      if ((*(byte *)(*(long *)(param_1 + 0xa0) + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a088cfc);
        (*pcVar4)();
      }
      FUN_10a0560a4(param_1 + 0x48,*(long *)(param_1 + 0xa0) + 0x98);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_68,*(long *)(param_1 + 0xa0) + 0x90);
      FUN_10a056190(param_1 + 0x60,&uStack_68);
      __ZNSt13exception_ptrD1Ev(&uStack_68);
    }
    plVar5 = *(long **)(param_1 + 0xa0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 0x88);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a0889d0; end: 10a088ddb;  */

void FUN_10a0889d0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x90);
    FUN_10a05730c(param_1 + 0x98,param_1 + 0x88,param_1 + 0x80);
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x98);
    plVar5 = (long *)(*(long *)(param_1 + 0x98) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar8 = *(long *)(param_1 + 0x90);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x90);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x98);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 1 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0xa0) = lVar8;
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (((uint)*(undefined8 *)(lVar8 + 0x10) >> 5 & 1) == 0) {
      func_0x0001092af8bc(param_1 + 0xa0);
      if ((*(byte *)(*(long *)(param_1 + 0xa0) + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a088cfc);
        (*pcVar4)();
      }
      FUN_10a0560a4(param_1 + 0x48,*(long *)(param_1 + 0xa0) + 0x98);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_48,*(long *)(param_1 + 0xa0) + 0x90);
      FUN_10a056190(param_1 + 0x60,&uStack_48);
      __ZNSt13exception_ptrD1Ev(&uStack_48);
    }
    plVar5 = *(long **)(param_1 + 0xa0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 0x88);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a088ddc; end: 10a088fd3;  */

void FUN_10a088ddc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x90);
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a088f30;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a088f30;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x98);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x88);
    if (plVar5 == (long *)0x0) goto LAB_10a088f30;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a088f30;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10a088f30:
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a088fd4; end: 10a089437;  */

void FUN_10a088fd4(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x90) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_1 + 0x60);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x68);
    iVar2 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0xa8) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0x78);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_10a056c30(param_1 + 0xd0,param_1 + 0xe1,param_1 + 0xd8,param_1 + 0x88);
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xd0);
    plVar6 = (long *)(*(long *)(param_1 + 0xd0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      lVar9 = *(long *)(param_1 + 0xc0);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_38);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar6 = *(long **)(param_1 + 0xc0);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a089324);
    (*pcVar5)();
  }
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0xd0);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0xb0))();
  }
  if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x98))();
  }
  plVar6 = *(long **)(param_1 + 0xd8);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  plVar6 = *(long **)(param_1 + 0x48);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a089438; end: 10a08960b;  */

void FUN_10a089438(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    plVar4 = *(long **)(param_1 + 0xc0);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0xd0);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0xb0))();
    }
    if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0x98))();
    }
    plVar4 = *(long **)(param_1 + 0xd8);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a08960c; end: 10a089a67;  */

void FUN_10a08960c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x58);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar5 + 0x12);
      goto LAB_10a089928;
    }
    if ((*(byte *)(plVar5 + 0x15) & 1) == 0) goto LAB_10a089928;
    *(long *)(param_1 + 0x48) = plVar5[0x13];
    lVar6 = plVar5[0x14];
    *(long *)(param_1 + 0x50) = lVar6;
    if (lVar6 == 0) {
LAB_10a089674:
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    else {
      plVar5 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = *(long **)(param_1 + 0x58);
      if (plVar5 != (long *)0x0) goto LAB_10a089674;
    }
    plVar7 = *(long **)(param_1 + 0x68);
    plVar5 = (long *)*plVar7;
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      plVar7 = *(long **)(param_1 + 0x68);
    }
    *plVar7 = 0;
    lVar6 = *(long *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(long *)(param_1 + 0x58) = lVar6;
    *(long *)(param_1 + 0x60) = lVar6;
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar6 = *(long *)(param_1 + 0x60);
      plVar5 = (long *)(lVar6 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar9 = *plVar5;
        if (lVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar6 + 0x18,&uStack_38);
            *(undefined8 *)(lVar6 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) == 0) {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x18) + 0x10))();
    }
    func_0x0001092ba100(param_1 + 0x10);
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x50);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  func_0x0001092af97c(plVar5 + 0x12);
LAB_10a089928:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a08992c);
  (*pcVar4)();
}



/* Entry: 10a089a68; end: 10a089bab;  */

void FUN_10a089a68(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 == (long *)0x0) goto LAB_10a089b94;
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a089b94;
    do {
      uVar5 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) goto LAB_10a089b94;
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a089b94;
    do {
      uVar5 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar5 == 0) {
    (**(code **)(*plVar4 + 8))();
  }
LAB_10a089b94:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a089bac; end: 10a089e4f;  */

void FUN_10a089bac(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    FUN_10a062678(param_1 + 0xa8,param_1 + 0x48);
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0xa8);
    plVar5 = (long *)(*(long *)(param_1 + 0xa8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xb0) = 1;
      lVar8 = *(long *)(param_1 + 0x98);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x98);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a089d8c);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0xa8);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  func_0x0001092ba41c(param_1 + 0x50);
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a089e50; end: 10a089f63;  */

void FUN_10a089e50(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x98);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0xa8);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  func_0x0001092ba41c(param_1 + 0x50);
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a089f64; end: 10a08a36f;  */

void FUN_10a089f64(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x90);
    FUN_10a0704b4(param_1 + 0x98,param_1 + 0x88,*(undefined8 *)(param_1 + 0x80));
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x98);
    plVar5 = (long *)(*(long *)(param_1 + 0x98) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar8 = *(long *)(param_1 + 0x90);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x90);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x98);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 1 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0xa0) = lVar8;
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (((uint)*(undefined8 *)(lVar8 + 0x10) >> 5 & 1) == 0) {
      func_0x0001092af8bc(param_1 + 0xa0);
      if ((*(byte *)(*(long *)(param_1 + 0xa0) + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a08a290);
        (*pcVar4)();
      }
      FUN_10a06fb28(param_1 + 0x48,*(long *)(param_1 + 0xa0) + 0x98);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_48,*(long *)(param_1 + 0xa0) + 0x90);
      FUN_10a06fd2c(param_1 + 0x60,&uStack_48);
      __ZNSt13exception_ptrD1Ev(&uStack_48);
    }
    plVar5 = *(long **)(param_1 + 0xa0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 0x88);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a08a370; end: 10a08a567;  */

void FUN_10a08a370(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x90);
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a08a4c4;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a08a4c4;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x98);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x88);
    if (plVar5 == (long *)0x0) goto LAB_10a08a4c4;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a08a4c4;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10a08a4c4:
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a08a568; end: 10a08a9c7;  */

void FUN_10a08a568(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x90) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_1 + 0x60);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x68);
    iVar2 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0xa8) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0x78);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_10a06fe80(param_1 + 0xd0,param_1 + 0xd8,param_1 + 0x88);
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xd0);
    plVar6 = (long *)(*(long *)(param_1 + 0xd0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      lVar9 = *(long *)(param_1 + 0xc0);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_38);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar6 = *(long **)(param_1 + 0xc0);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a08a8b4);
    (*pcVar5)();
  }
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0xd0);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0xb0))();
  }
  if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x98))();
  }
  plVar6 = *(long **)(param_1 + 0xd8);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  plVar6 = *(long **)(param_1 + 0x48);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a08a9c8; end: 10a08ab9b;  */

void FUN_10a08a9c8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    plVar4 = *(long **)(param_1 + 0xc0);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0xd0);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0xb0))();
    }
    if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0x98))();
    }
    plVar4 = *(long **)(param_1 + 0xd8);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a08ab9c; end: 10a08b2af;  */

void FUN_10a08ab9c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar13 = (long *)(param_1 + 0xb0);
  lVar12 = param_1 + 0x10;
  plVar6 = (long *)*plVar13;
  if (((uint)*(undefined8 *)(*plVar13 + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
LAB_10a08b164:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a08b168);
    (*pcVar5)();
  }
  if ((*(byte *)(plVar6 + 0x15) & 1) == 0) goto LAB_10a08b164;
  lVar9 = plVar6[0x14];
  lVar15 = plVar6[0x13];
  *(long *)(param_1 + 0x168) = plVar6[0x14];
  *(long *)(param_1 + 0x160) = lVar15;
  if (lVar9 != 0) {
    plVar7 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar1 = (ulong *)(plVar6 + 1);
  do {
    uVar10 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar10 - 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar10 & 0x1fffffffc) == 4) {
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar10 - 1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar6 = *(long **)(param_1 + 0xd8);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  lVar9 = *(long *)(param_1 + 0x160);
  if (lVar9 != 0) {
    plVar6 = *(long **)(param_1 + 0x1a8);
    lVar15 = *plVar6;
    if (*(long *)(lVar15 + 0x870) != 0) {
      lVar17 = plVar6[2];
      lVar16 = plVar6[1];
      *(long *)(param_1 + 0x58) = plVar6[3];
      *(long *)(param_1 + 0x50) = lVar17;
      *(long *)(param_1 + 0x48) = lVar16;
      plVar6[2] = 0;
      plVar6[3] = 0;
      plVar6[1] = 0;
      FUN_10a04d600(param_1 + 0x60,plVar6 + 4);
      FUN_10a04d600(param_1 + 0x88,plVar6 + 9);
      *(long *)(param_1 + 0x180) = lVar9;
      *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x168);
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      lVar9 = plVar6[0x10];
      *(long *)(param_1 + 0x198) = plVar6[0x11];
      *(long *)(param_1 + 400) = lVar9;
      plVar6[0x10] = 0;
      plVar6[0x11] = 0;
      *(long *)(param_1 + 0x1a0) = lVar15;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *plVar13 = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
      FUN_10a04e1bc(plVar13,(long)(float)*(ulong *)(param_1 + 0x78));
      for (plVar6 = *(long **)(param_1 + 0x70); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        plVar14 = (long *)plVar6[5];
        plVar7 = plVar14;
        (**(code **)(*plVar14 + 0x48))();
        if (plVar7 == (long *)&DAT_110b20ce8) {
          plVar7 = (long *)0x58;
          __Znwm();
          plVar7[1] = 0;
          plVar7[2] = 0;
          *plVar7 = (long)&PTR_FUN_110b9d7a0;
          plVar7[5] = 0;
          plVar7[4] = 0;
          plVar7[7] = 0;
          plVar7[6] = 0;
          plVar7[9] = 0;
          plVar7[8] = 0;
          plVar7[10] = 0;
          plStack_70 = plVar7 + 3;
          *plStack_70 = (long)&PTR_FUN_110b9c730;
          plStack_68 = plVar7;
        }
        else {
          (**(code **)(*plVar14 + 0x48))();
          if (plVar14 != (long *)&DAT_110b9fdf8) {
            FUN_10a00946c(&UNK_10f634217);
            goto LAB_10a08b164;
          }
          FUN_10a04e6b0(&plStack_80);
          plStack_68 = plStack_78;
          plStack_70 = plStack_80;
        }
        FUN_10a04e38c(plVar13,plVar6 + 2,plVar6 + 2,&plStack_70);
        plVar7 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar14 = plStack_68 + 1;
          do {
            lVar9 = *plVar14;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
      }
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xf8) = 0x3f800000;
      FUN_10a04e818(param_1 + 0xd8,(long)(float)*(ulong *)(param_1 + 0xa0));
      for (plVar6 = *(long **)(param_1 + 0x98); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        plVar7 = (long *)plVar6[5];
        (**(code **)(*plVar7 + 0x48))();
        if (plVar7 != (long *)&DAT_110b20ce8) {
          FUN_10a00946c(&UNK_10f6341ef);
          goto LAB_10a08b164;
        }
        FUN_10a04ed24(&plStack_70,*(undefined8 *)(param_1 + 0x1a0));
        FUN_10a04e9e8(param_1 + 0xd8,plVar6 + 2,plVar6 + 2,&plStack_70);
        plVar7 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar14 = plStack_68 + 1;
          do {
            lVar9 = *plVar14;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
      }
      lVar15 = *(long *)(param_1 + 0xc0);
      uVar8 = *(undefined8 *)(param_1 + 0x1a0);
      *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x188);
      *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x180);
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(undefined8 *)(param_1 + 0x188) = 0;
      lVar9 = *(long *)(param_1 + 0xb0);
      uVar10 = *(ulong *)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(long *)(param_1 + 0x100) = lVar9;
      *(ulong *)(param_1 + 0x108) = uVar10;
      *(long *)(param_1 + 0x110) = lVar15;
      *(long *)(param_1 + 0x118) = *(long *)(param_1 + 200);
      *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xd0);
      if (*(long *)(param_1 + 200) != 0) {
        uVar11 = *(ulong *)(lVar15 + 8);
        if ((uVar10 & uVar10 - 1) == 0) {
          uVar11 = uVar11 & uVar10 - 1;
        }
        else if (uVar10 <= uVar11) {
          uVar4 = 0;
          if (uVar10 != 0) {
            uVar4 = uVar11 / uVar10;
          }
          uVar11 = uVar11 - uVar4 * uVar10;
        }
        *(long *)(lVar9 + uVar11 * 8) = param_1 + 0x110;
        *(long *)(param_1 + 0xc0) = 0;
        *(undefined8 *)(param_1 + 200) = 0;
      }
      lVar15 = *(long *)(param_1 + 0xe8);
      lVar9 = *(long *)(param_1 + 0xd8);
      uVar10 = *(ulong *)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(long *)(param_1 + 0x128) = lVar9;
      *(ulong *)(param_1 + 0x130) = uVar10;
      *(long *)(param_1 + 0x138) = lVar15;
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0xf0);
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0xf8);
      if (*(long *)(param_1 + 0xf0) != 0) {
        uVar11 = *(ulong *)(lVar15 + 8);
        if ((uVar10 & uVar10 - 1) == 0) {
          uVar11 = uVar11 & uVar10 - 1;
        }
        else if (uVar10 <= uVar11) {
          uVar4 = 0;
          if (uVar10 != 0) {
            uVar4 = uVar11 / uVar10;
          }
          uVar11 = uVar11 - uVar4 * uVar10;
        }
        *(long *)(lVar9 + uVar11 * 8) = param_1 + 0x138;
        *(long *)(param_1 + 0xe8) = 0;
        *(undefined8 *)(param_1 + 0xf0) = 0;
      }
      FUN_10a04dd0c(param_1 + 0x170,uVar8,param_1 + 0x150,param_1 + 0x100,param_1 + 0x128,
                    param_1 + 400);
      FUN_10a06e1a8(param_1 + 0x128);
      FUN_10a06e0c8(param_1 + 0x100);
      plVar6 = *(long **)(param_1 + 0x158);
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 1;
        do {
          lVar9 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      FUN_10a06e1a8(param_1 + 0xd8);
      FUN_10a06e0c8(plVar13);
      FUN_10a04c67c(lVar12,param_1 + 0x170);
      plVar6 = *(long **)(param_1 + 0x178);
      if (plVar6 != (long *)0x0) {
        plVar13 = plVar6 + 1;
        do {
          lVar9 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = *(long **)(param_1 + 0x198);
      if (plVar6 != (long *)0x0) {
        plVar13 = plVar6 + 1;
        do {
          lVar9 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = *(long **)(param_1 + 0x188);
      if (plVar6 != (long *)0x0) {
        plVar13 = plVar6 + 1;
        do {
          lVar9 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      func_0x00010a04ef7c(param_1 + 0x88);
      func_0x00010a04ef7c(param_1 + 0x60);
      if (*(char *)(param_1 + 0x5f) < '\0') {
        __ZdlPv(*(long *)(param_1 + 0x48));
      }
      goto LAB_10a08b0d4;
    }
  }
  FUN_10a04d66c(lVar12);
LAB_10a08b0d4:
  plVar6 = *(long **)(param_1 + 0x168);
  if (plVar6 != (long *)0x0) {
    plVar13 = plVar6 + 1;
    do {
      lVar9 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  func_0x000109d1a1d0(lVar12);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a08b2b0; end: 10a08b367;  */

void FUN_10a08b2b0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0xb0);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0xd8);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a08b368; end: 10a08b6d3;  */

void FUN_10a08b368(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
    FUN_10a04c73c(param_1 + 0xe8,param_1 + 0x48);
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xe8);
    plVar6 = (long *)(*(long *)(param_1 + 0xe8) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xf0) = 1;
      lVar9 = *(long *)(param_1 + 0xd8);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_48);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  lVar9 = *(long *)(param_1 + 0xd8);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar9 + 0xa8) & 1) != 0) {
      FUN_10a04c67c(param_1 + 0x10,lVar9 + 0x98);
      plVar6 = *(long **)(param_1 + 0xd8);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0xe8);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0xd0);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = *(long **)(param_1 + 0xc0);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          do {
            uVar7 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0xb8);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      func_0x00010a04ef7c(param_1 + 0x90);
      func_0x00010a04ef7c(param_1 + 0x68);
      if (*(char *)(param_1 + 0x67) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x50));
      }
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar9 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a08b610);
  (*pcVar5)();
}



/* Entry: 10a08b6d4; end: 10a08b967;  */

void FUN_10a08b6d4(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0xd0);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = *(long **)(param_1 + 0xc0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0xb8);
    if (plVar5 == (long *)0x0) goto LAB_10a08b92c;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) != 4) goto LAB_10a08b92c;
    do {
      uVar6 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar5 = *(long **)(param_1 + 0xd8);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0xe8);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0xd0);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = *(long **)(param_1 + 0xc0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0xb8);
    if (plVar5 == (long *)0x0) goto LAB_10a08b92c;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) != 4) goto LAB_10a08b92c;
    do {
      uVar6 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uVar6 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
LAB_10a08b92c:
  func_0x00010a04ef7c(param_1 + 0x90);
  func_0x00010a04ef7c(param_1 + 0x68);
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a08b968; end: 10a08bd73;  */

void FUN_10a08b968(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x90);
    FUN_10a078cd0(param_1 + 0x98,param_1 + 0x88,param_1 + 0x80);
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x98);
    plVar5 = (long *)(*(long *)(param_1 + 0x98) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar8 = *(long *)(param_1 + 0x90);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x90);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x98);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 1 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0xa0) = lVar8;
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (((uint)*(undefined8 *)(lVar8 + 0x10) >> 5 & 1) == 0) {
      func_0x0001092af8bc(param_1 + 0xa0);
      if ((*(byte *)(*(long *)(param_1 + 0xa0) + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a08bc94);
        (*pcVar4)();
      }
      FUN_10a078340(param_1 + 0x48,*(long *)(param_1 + 0xa0) + 0x98);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_48,*(long *)(param_1 + 0xa0) + 0x90);
      FUN_10a078544(param_1 + 0x60,&uStack_48);
      __ZNSt13exception_ptrD1Ev(&uStack_48);
    }
    plVar5 = *(long **)(param_1 + 0xa0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 0x88);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a08bd74; end: 10a08bf6b;  */

void FUN_10a08bd74(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x90);
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a08bec8;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a08bec8;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x98);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar4 & 0x1fffffffc) == 4) {
        do {
          uVar4 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar4 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x88);
    if (plVar5 == (long *)0x0) goto LAB_10a08bec8;
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a08bec8;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10a08bec8:
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a08bf6c; end: 10a08c3cb;  */

void FUN_10a08bf6c(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x90) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_1 + 0x60);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x68);
    iVar2 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0xa8) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0x78);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_10a078698(param_1 + 0xd0,param_1 + 0xd8,param_1 + 0x88);
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xd0);
    plVar6 = (long *)(*(long *)(param_1 + 0xd0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      lVar9 = *(long *)(param_1 + 0xc0);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_38);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar6 = *(long **)(param_1 + 0xc0);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a08c2b8);
    (*pcVar5)();
  }
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0xd0);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0xb0))();
  }
  if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x98))();
  }
  plVar6 = *(long **)(param_1 + 0xd8);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  plVar6 = *(long **)(param_1 + 0x48);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a08c3cc; end: 10a08c59f;  */

void FUN_10a08c3cc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    plVar4 = *(long **)(param_1 + 0xc0);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0xd0);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0xb0))();
    }
    if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0x98))();
    }
    plVar4 = *(long **)(param_1 + 0xd8);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a08c5a0; end: 10a08c80b;  */

void FUN_10a08c5a0(long param_1)

{
  ulong *puVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 **ppuStack_60;
  long *plStack_58;
  char cStack_49;
  undefined1 auStack_48 [8];
  
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
  plVar6 = *(long **)(param_1 + 0x48);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if (((uint)uVar9 >> 5 & 1) == 0) {
    func_0x0001092af8bc(*(undefined8 *)(param_1 + 0x50));
    if ((*(byte *)(**(long **)(param_1 + 0x50) + 0x178) & 1) != 0) {
      if (*(int *)(**(long **)(param_1 + 0x50) + 0x170) == 3) {
        func_0x0001092af8bc();
        if ((*(byte *)(**(long **)(param_1 + 0x50) + 0x178) & 1) != 0) {
          FUN_10a038940(&ppuStack_60,**(long **)(param_1 + 0x50) + 0x98);
          if ((undefined8 ***)ppuStack_60 != (undefined8 ***)0x0) {
            FUN_10a04fa60(param_1 + 0x10,&ppuStack_60);
            if (plStack_58 != (long *)0x0) {
              plVar6 = plStack_58 + 1;
              do {
                lVar8 = *plVar6;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar4) {
                  *plVar6 = lVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar8 == 0) {
                (**(code **)(*plStack_58 + 0x10))(plStack_58);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
              }
            }
            func_0x000109d1a1d0(param_1 + 0x10);
            __ZdlPv(param_1);
            return;
          }
          func_0x000105688514(&UNK_10f63434e);
        }
      }
      else {
        func_0x000105688514(&UNK_10f6342d5);
      }
    }
  }
  else {
    if ((bRam000000011330a9e8 & 1) != 0) {
      lVar8 = (*(long **)(param_1 + 0x50))[1];
      plVar10 = (long *)(lVar8 + 0xe8);
      plVar6 = (long *)*plVar10;
      cVar3 = *(char *)(lVar8 + 0xff);
      __ZNSt13exception_ptrC1ERKS_(auStack_48,**(long **)(param_1 + 0x50) + 0x90);
      func_0x0001098bc760(&ppuStack_60,auStack_48);
      if (-1 < cVar3) {
        plVar6 = plVar10;
      }
      pppuVar2 = (undefined8 ***)ppuStack_60;
      if (-1 < cStack_49) {
        pppuVar2 = &ppuStack_60;
      }
      func_0x00010ae06f08(0,1,&UNK_10f632cca,&UNK_10f634388,0x129,&UNK_10f634425,in_x6,in_x7,plVar6,
                          pppuVar2);
      if (cStack_49 < '\0') {
        __ZdlPv(ppuStack_60);
      }
      __ZNSt13exception_ptrD1Ev(auStack_48);
    }
    __ZNSt13exception_ptrC1ERKS_(&ppuStack_60,**(long **)(param_1 + 0x50) + 0x90);
    func_0x0001092af97c(&ppuStack_60);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a08c7a0);
  (*pcVar5)();
}



/* Entry: 10a08c80c; end: 10a08c87b;  */

void FUN_10a08c80c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a08c87c; end: 10a08cb5f;  */

void FUN_10a08c87c(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    FUN_10a04fb20(param_1 + 0x70,param_1 + 0x48);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x70);
    plVar6 = (long *)(*(long *)(param_1 + 0x70) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar9 = *(long *)(param_1 + 0x60);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_38);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  lVar9 = *(long *)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar9 + 0xa8) & 1) != 0) {
      FUN_10a04fa60(param_1 + 0x10,lVar9 + 0x98);
      plVar6 = *(long **)(param_1 + 0x60);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0x70);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0x58);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = *(long **)(param_1 + 0x48);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar9 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a08ca9c);
  (*pcVar5)();
}



/* Entry: 10a08cb60; end: 10a08ccbf;  */

void FUN_10a08cb60(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 == (long *)0x0) goto LAB_10a08cc60;
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x70);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 == (long *)0x0) goto LAB_10a08cc60;
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a08cc60:
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a08ccc0; end: 10a08d2df;  */

void FUN_10a08ccc0(ulong *param_1,long ****param_2,long ****param_3)

{
  ulong uVar1;
  long ***ppplVar2;
  ulong *puVar3;
  long ****pppplVar4;
  undefined8 *puVar5;
  int iVar6;
  long ****pppplVar7;
  undefined8 *extraout_x8;
  ulong uVar8;
  long ****pppplVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 auStack_168 [2];
  char cStack_151;
  long ***ppplStack_150;
  ulong *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long ***ppplStack_130;
  ulong uStack_120;
  ulong uStack_118;
  char cStack_109;
  long **pplStack_100;
  long **pplStack_f8;
  long **pplStack_f0;
  long ***appplStack_e0 [2];
  char cStack_c9;
  long ***ppplStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplVar7 = param_3;
  FUN_10a08d2e0(&ppplStack_c8);
  uVar1 = uStack_c0;
  pppplVar4 = (long ****)ppplStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar1 = (ulong)bStack_b1;
    pppplVar4 = &ppplStack_c8;
  }
  uVar8 = uVar1 >> 3;
  if (((ulong)pppplVar4 & 7) == 0) {
    if (7 < uVar1) {
      uVar10 = 0;
      pppplVar9 = pppplVar4;
      do {
        uVar10 = uVar10 * 0x40 + 0x9e3779b9 + (uVar10 >> 2) + (long)*pppplVar9 ^ uVar10;
        uVar8 = uVar8 - 1;
        pppplVar9 = pppplVar9 + 1;
      } while (uVar8 != 0);
      goto LAB_10a08cd9c;
    }
  }
  else if (7 < uVar1) {
    uVar10 = 0;
    pppplVar9 = pppplVar4;
    do {
      uVar10 = uVar10 * 0x40 + 0x9e3779b9 + (uVar10 >> 2) + (long)*pppplVar9 ^ uVar10;
      uVar8 = uVar8 - 1;
      pppplVar9 = pppplVar9 + 1;
    } while (uVar8 != 0);
    goto LAB_10a08cd9c;
  }
  uVar10 = 0;
LAB_10a08cd9c:
  ppplStack_b0 = (long ***)0x0;
  if ((uVar1 & 7) != 0) {
    pppplVar7 = &ppplStack_b0;
    _memcpy(pppplVar7,(undefined *)((long)pppplVar4 + (uVar1 - (uVar1 & 7))));
  }
  ppplVar2 = ppplStack_b0;
  func_0x00010ad03278();
  uVar10 = uVar10 * 0x40 + 0x9e3779b9 + (uVar10 >> 2) + (long)ppplVar2 ^ uVar10;
  __ZNSt3__19to_stringEy(&uStack_120,uVar1 + 0x9e3779b9 + uVar10 * 0x40 + (uVar10 >> 2) ^ uVar10);
  ppplVar2 = pppplVar7[1];
  pppplVar4 = (long ****)*pppplVar7;
  if (-1 < (char)*(byte *)((long)pppplVar7 + 0x17)) {
    ppplVar2 = (long ***)(ulong)*(byte *)((long)pppplVar7 + 0x17);
    pppplVar4 = pppplVar7;
  }
  puVar3 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar3,0,pppplVar4,ppplVar2);
  ppplStack_a8 = (long ***)puVar3[1];
  ppplStack_b0 = (long ***)*puVar3;
  ppuStack_a0 = (undefined **)puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pppplVar7 = &ppplStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppplVar7,&UNK_10f634f3c,0x15);
  pplStack_f8 = (long **)pppplVar7[1];
  pplStack_100 = (long **)*pppplVar7;
  pplStack_f0 = (long **)pppplVar7[2];
  pppplVar7[1] = (long ***)0x0;
  pppplVar7[2] = (long ***)0x0;
  *pppplVar7 = (long ***)0x0;
  FUN_10ad03508(appplStack_e0,&pplStack_100);
  if ((long)pplStack_f0 < 0) {
    __ZdlPv(pplStack_100);
  }
  if ((long)ppuStack_a0 < 0) {
    __ZdlPv(ppplStack_b0);
  }
  if (cStack_109 < '\0') {
    __ZdlPv(uStack_120);
  }
  FUN_10a09d9a0(&ppplStack_b0,appplStack_e0,0);
  __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE(&uStack_120,&ppplStack_b0,0);
  uVar1 = uStack_120;
  if ((long)ppuStack_a0 < 0) {
    __ZdlPv(ppplStack_b0);
  }
  if ((((uint)uVar1 & 0xff) == 0xff) || ((uVar1 & 0xff) == 0)) {
    FUN_10a0f1b1c(&ppplStack_b0,param_3,0);
    FUN_10a0f1f4c(&uStack_120,&ppplStack_b0);
    FUN_10a0f1ea0(&ppplStack_b0);
    pppplVar7 = (long ****)appplStack_e0[0];
    if (-1 < cStack_c9) {
      pppplVar7 = appplStack_e0;
    }
    pppplVar4 = pppplVar7;
    _strlen(pppplVar7);
    func_0x00010b0adfa4(pppplVar7,pppplVar4,5);
    ppplStack_a8 = (long ***)&UNK_1092bf448;
    ppuStack_a0 = &PTR_DAT_110ae93c0;
    puStack_98 = PTR__fclose_11034c270;
    ppplStack_b0 = (long ***)pppplVar7;
    func_0x00010b0ae0b0(&ppplStack_b0,uStack_120,uStack_118 - uStack_120);
    FUN_10a09a0e4(&ppplStack_b0);
    if (uStack_120 != 0) {
      uStack_118 = uStack_120;
      __ZdlPv();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  ppplStack_b0 = (long ***)((ulong)ppplStack_b0 & 0xffffffff00000000);
  FUN_10a09d9a0(&ppplStack_a8,appplStack_e0,0);
  pppplVar7 = &ppplStack_b0;
  (*(code *)(*param_2)[0x1a])(&uStack_120);
  uVar8 = uStack_118;
  uVar1 = uStack_120;
  uStack_120 = 0;
  uStack_118 = 0;
  param_1[1] = uVar8;
  *param_1 = uVar1;
  if ((long)puStack_98 < 0) {
    param_2 = (long ****)ppplStack_a8;
    __ZdlPv();
  }
  while( true ) {
    if (cStack_c9 < '\0') {
      param_2 = (long ****)appplStack_e0[0];
      __ZdlPv();
    }
    if ((char)bStack_b1 < '\0') {
      param_2 = (long ****)ppplStack_c8;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) break;
    ___stack_chk_fail();
    iVar6 = (int)pppplVar7;
    if (iVar6 == 0) {
      pppplVar4 = param_2;
      __Unwind_Resume();
      pcStack_138 = FUN_10a08d2e0;
      ppplStack_150 = (long ***)param_2;
      puStack_148 = param_1;
      puStack_140 = &stack0xfffffffffffffff0;
      FUN_10a099f6c(auStack_168);
      ppplVar2 = pppplVar4[4];
      pppplVar7 = (long ****)pppplVar4[3];
      if (-1 < (char)*(byte *)((long)pppplVar4 + 0x2f)) {
        ppplVar2 = (long ***)(ulong)*(byte *)((long)pppplVar4 + 0x2f);
        pppplVar7 = pppplVar4 + 3;
      }
      puVar5 = auStack_168;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar5,0,pppplVar7,ppplVar2);
      uVar11 = *puVar5;
      extraout_x8[1] = puVar5[1];
      *extraout_x8 = uVar11;
      extraout_x8[2] = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      if (cStack_151 < '\0') {
        __ZdlPv(auStack_168[0]);
      }
      return;
    }
    if (uStack_120 != 0) {
      uStack_118 = uStack_120;
      __ZdlPv();
    }
    ___cxa_begin_catch();
    if (iVar6 == 2) {
      if ((uRam000000011330a9e8 & 1) != 0) {
        (*(code *)(*param_2)[2])();
        pppplVar7 = (long ****)0x1;
        ppplStack_130 = (long ***)param_2;
        func_0x00010ae06f08(0,1,&UNK_10f634f52,&UNK_10f634f7b,0x22,&UNK_10f63502c);
      }
      param_2 = (long ****)appplStack_e0[0];
      if (-1 < cStack_c9) {
        param_2 = appplStack_e0;
      }
      _remove();
      *param_1 = 0;
      param_1[1] = 0;
      ___cxa_end_catch();
    }
    else {
      if ((uRam000000011330a9e8 & 1) != 0) {
        pppplVar7 = (long ****)0x1;
        func_0x00010ae06f08(0,1,&UNK_10f634f52,&UNK_10f634f7b,0x26,&UNK_10f634ff4);
      }
      param_2 = (long ****)appplStack_e0[0];
      if (-1 < cStack_c9) {
        param_2 = appplStack_e0;
      }
      _remove();
      *param_1 = 0;
      param_1[1] = 0;
      ___cxa_end_catch();
    }
  }
  return;
}



/* Entry: 10a08d2e0; end: 10a08d37b;  */

void FUN_10a08d2e0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_10a099f6c(auStack_38);
  uVar1 = *(ulong *)(param_2 + 0x20);
  puVar2 = *(undefined8 **)(param_2 + 0x18);
  if (-1 < (char)*(byte *)(param_2 + 0x2f)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x2f);
    puVar2 = (undefined8 *)(param_2 + 0x18);
  }
  puVar3 = auStack_38;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar3,0,puVar2,uVar1);
  uVar4 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar4;
  param_1[2] = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a08d37c; end: 10a08d3eb;  */

undefined1 * FUN_10a08d37c(undefined1 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  
  *param_1 = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  plVar3 = (long *)*ppuVar2;
  if (plVar3 != (long *)0x0) {
    *param_1 = *(undefined *)((long)plVar3 + 0x139);
    *(undefined1 *)((long)plVar3 + 0x139) = 1;
    lVar1 = 0;
    if ((char)plVar3[0x2c] == '\0') {
      lVar1 = 8;
    }
    FUN_10a08d3ec(plVar3 + 3,*(long *)(*plVar3 + lVar1) + 0x10);
  }
  return param_1;
}



/* Entry: 10a08d3ec; end: 10a08db07;  */

void FUN_10a08d3ec(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long **pplVar15;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long **pplStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  long alStack_b8 [2];
  long lStack_a8;
  undefined1 uStack_91;
  long alStack_90 [2];
  undefined4 uStack_80;
  long **pplStack_78;
  long **pplStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  
  plStack_f0 = (long *)&UNK_10f635101;
  plStack_e8 = (long *)0x55;
  if ((*(byte *)((long)param_1 + 0x121) & 1) == 0) {
    FUN_10a0edfc4(&plStack_f0);
LAB_10a08da8c:
    puVar6 = &UNK_10f635157;
    goto LAB_10a08da94;
  }
  lVar14 = *param_2;
  if (lVar14 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x15) & 1) == 0) goto LAB_10a08da98;
  plVar12 = param_1 + 0xd;
  lVar9 = *plVar12;
  lVar8 = param_2[1];
  __ZNSt3__115recursive_mutex4lockEv(lVar8);
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar8);
    return;
  }
  plVar10 = *(long **)(lVar14 + 0x18);
  alStack_90[1] = 0x10;
  uStack_80 = 5;
  plVar13 = param_1 + 0x16;
  plVar7 = (long *)*plVar13;
  alStack_90[0] = lVar14;
  if ((plVar7 == (long *)0x0) || (plVar7[5] != lVar14)) {
    (**(code **)(*plVar10 + 0x48))(&plStack_f0,plVar10,alStack_90);
    FUN_10a08dd68(plVar13,&plStack_f0);
    plVar7 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar1 = plStack_e8 + 1;
      do {
        lVar14 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = (long *)*plVar13;
    if (plVar7 == (long *)0x0) goto LAB_10a08da8c;
  }
  plStack_e8 = (long *)0x0;
  lStack_e0 = -1;
  plStack_f0 = plVar7;
  (**(code **)(*plVar10 + 0x40))(&pplStack_70,plVar10,&plStack_f0);
  if ((*(byte *)(param_1 + 0x15) & 1) == 0) goto LAB_10a08da98;
  func_0x00010a08ddcc(plVar12,&pplStack_70);
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar14 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if ((*(byte *)(param_1 + 0x15) & 1) == 0) goto LAB_10a08da98;
  if (*plVar12 == 0) {
    FUN_10a08de30(param_1);
    plStack_f0 = (long *)*plVar13;
    plStack_e8 = (long *)0x0;
    lStack_e0 = -1;
    (**(code **)(*plVar10 + 0x40))(&pplStack_70,plVar10,&plStack_f0);
    if ((*(byte *)(param_1 + 0x15) & 1) == 0) goto LAB_10a08da98;
    func_0x00010a08ddcc(plVar12,&pplStack_70);
    plVar7 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar14 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if ((*(byte *)(param_1 + 0x15) & 1) == 0) goto LAB_10a08da98;
    if (*plVar12 == 0) {
      (**(code **)(*plVar10 + 0x48))(&plStack_f0,plVar10,alStack_90);
      FUN_10a08dd68(plVar13,&plStack_f0);
      plVar7 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        plVar1 = plStack_e8 + 1;
        do {
          lVar14 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if ((long *)*plVar13 == (long *)0x0) {
        puVar6 = &UNK_10f63518d;
      }
      else {
        plStack_e8 = (long *)0x0;
        lStack_e0 = -1;
        plStack_f0 = (long *)*plVar13;
        (**(code **)(*plVar10 + 0x40))(&pplStack_70,plVar10,&plStack_f0);
        if ((*(byte *)(param_1 + 0x15) & 1) == 0) goto LAB_10a08da98;
        func_0x00010a08ddcc(plVar12,&pplStack_70);
        plVar7 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar13 = plStack_68 + 1;
          do {
            lVar14 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        if ((*(byte *)(param_1 + 0x15) & 1) == 0) goto LAB_10a08da98;
        if (*plVar12 != 0) goto LAB_10a08d6f8;
        puVar6 = &UNK_10f6351cc;
      }
LAB_10a08da94:
      FUN_10a00946c(puVar6);
      goto LAB_10a08da98;
    }
  }
LAB_10a08d6f8:
  lVar9 = param_1[0x17];
  lVar14 = param_1[0x16];
  if (param_1[0x17] != 0) {
    plVar12 = (long *)(param_1[0x17] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar12 = (long *)param_1[0xc];
  param_1[0xc] = lVar9;
  param_1[0xb] = lVar14;
  if (plVar12 != (long *)0x0) {
    plVar7 = plVar12 + 1;
    do {
      lVar14 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  (**(code **)(*plVar10 + 0x68))(&plStack_f0,plVar10,&uStack_91);
  if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
    FUN_10a08def8(param_1 + 0xf,&plStack_f0);
    plVar12 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar7 = plStack_e8 + 1;
      do {
        lVar14 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
      param_1[0x11] = *param_2;
      lVar9 = param_2[2];
      lVar14 = param_2[1];
      if (param_2[2] != 0) {
        plVar12 = (long *)(param_2[2] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar12 = (long *)param_1[0x13];
      param_1[0x13] = lVar9;
      param_1[0x12] = lVar14;
      if (plVar12 != (long *)0x0) {
        plVar7 = plVar12 + 1;
        do {
          lVar14 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      if (param_1[0x23] == 0) {
        FUN_10a097118(&plStack_f0);
      }
      else {
        puVar11 = (undefined8 *)
                  (*(long *)(param_1[0x1f] + ((ulong)param_1[0x22] / 0x2e) * 8) +
                  ((ulong)param_1[0x22] % 0x2e) * 0x58);
        plStack_e8 = (long *)puVar11[1];
        plStack_f0 = (long *)*puVar11;
        lStack_e0 = puVar11[2];
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        func_0x00010a09a188(&pplStack_d8,puVar11 + 3);
        FUN_10a09a1d8(alStack_b8,puVar11 + 7);
      }
      if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
        lVar14 = *param_1;
        if (lVar14 != 0) {
          lVar5 = param_1[1];
          lVar9 = lVar14;
          if (lVar5 != lVar14) {
            do {
              lVar5 = lVar5 + -0x10;
              func_0x00010a09da5c();
            } while (lVar5 != lVar14);
            lVar9 = *param_1;
          }
          param_1[1] = lVar14;
          __ZdlPv(lVar9);
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
        }
        param_1[1] = (long)plStack_e8;
        *param_1 = (long)plStack_f0;
        param_1[2] = lStack_e0;
        plStack_e8 = (long *)0x0;
        lStack_e0 = 0;
        plStack_f0 = (long *)0x0;
        if ((long **)param_1 != &plStack_f0) {
          FUN_10a0a1d0c(&pplStack_70);
          lVar9 = lStack_c0;
          lVar14 = lStack_c8;
          plVar12 = plStack_d0;
          pplVar15 = pplStack_d8;
          pplStack_d8 = pplStack_70;
          pplStack_78 = &plStack_68;
          lStack_c0 = lStack_58;
          pplStack_70 = (long **)param_1[3];
          param_1[3] = (long)pplVar15;
          lStack_c8 = lStack_60;
          plStack_d0 = plStack_68;
          lStack_60 = param_1[5];
          plStack_68 = (long *)param_1[4];
          param_1[5] = lVar14;
          param_1[4] = (long)plVar12;
          lStack_58 = param_1[6];
          param_1[6] = lVar9;
          FUN_10a09cf7c(&pplStack_78);
        }
        func_0x00010a09a1f4(&pplStack_70,alStack_b8);
        lVar5 = param_1[10];
        lVar9 = param_1[9];
        lVar14 = param_1[9];
        plVar12 = (long *)param_1[8];
        pplVar15 = (long **)param_1[7];
        param_1[8] = (long)plStack_68;
        param_1[7] = (long)pplStack_70;
        param_1[10] = lStack_58;
        param_1[9] = lStack_60;
        pplStack_70 = pplVar15;
        plStack_68 = plVar12;
        lStack_60 = lVar9;
        lStack_58 = lVar5;
        if (lVar14 != 0) {
          __ZdlPv(pplVar15 + -1);
        }
        if (lStack_a8 != 0) {
          __ZdlPv(alStack_b8[0] + -8);
        }
        pplStack_70 = &plStack_d0;
        FUN_10a09cf7c(&pplStack_70);
        pplStack_70 = &plStack_f0;
        func_0x00010a09d0e8(&pplStack_70);
        if (param_1[0x23] != 0) {
          FUN_10a09a73c(*(long *)(param_1[0x1f] + ((ulong)param_1[0x22] / 0x2e) * 8) +
                        ((ulong)param_1[0x22] % 0x2e) * 0x58);
          lVar14 = param_1[0x22];
          param_1[0x23] = param_1[0x23] + -1;
          param_1[0x22] = lVar14 + 1U;
          if (0x5b < lVar14 + 1U) {
            __ZdlPv(*(undefined8 *)param_1[0x1f]);
            param_1[0x1f] = param_1[0x1f] + 8;
            param_1[0x22] = param_1[0x22] + -0x2e;
          }
        }
        __ZNSt3__115recursive_mutex6unlockEv(lVar8);
        return;
      }
    }
  }
LAB_10a08da98:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a08da9c);
  (*pcVar4)();
}



/* Entry: 10a08db08; end: 10a08dbab;  */

byte * FUN_10a08db08(byte *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 in_x7;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lStack_68;
  undefined *puStack_30;
  undefined8 uStack_28;
  byte *pbVar5;
  
  ppuVar4 = &puStack_30;
  if ((*param_1 & 1) == 0) {
    ppuVar3 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar6 = *ppuVar3;
    if (puVar6 != (undefined *)0x0) {
      puVar6[0x139] = 0;
      FUN_10a08dbac(puVar6 + 0x18);
      puStack_30 = &UNK_10f6350ce;
      uStack_28 = 0x32;
      if ((long *)*ppuVar3 == (long *)0x0) {
        FUN_10a0edfc4();
        pbVar5 = (byte *)ppuVar4;
        FUN_10a08e1c8();
        iVar2 = (int)pbVar5;
        __ZSt19uncaught_exceptionsv();
        if (0 < iVar2) {
LAB_10a08dbd8:
          FUN_10a09a4c4(ppuVar4);
          *(byte *)((long)ppuVar4 + 0xa0) = 0;
          *(byte *)((long)ppuVar4 + 0xa1) = 0;
          *(byte *)((long)ppuVar4 + 0xa2) = 0;
          *(byte *)((long)ppuVar4 + 0xa3) = 0;
          *(byte *)((long)ppuVar4 + 0xa4) = 0;
          *(byte *)((long)ppuVar4 + 0xa5) = 0;
          *(byte *)((long)ppuVar4 + 0xa6) = 0;
          *(byte *)((long)ppuVar4 + 0xa7) = 0;
          *(byte *)((long)ppuVar4 + 0x88) = 0;
          *(byte *)((long)ppuVar4 + 0x89) = 0;
          *(byte *)((long)ppuVar4 + 0x8a) = 0;
          *(byte *)((long)ppuVar4 + 0x8b) = 0;
          *(byte *)((long)ppuVar4 + 0x8c) = 0;
          *(byte *)((long)ppuVar4 + 0x8d) = 0;
          *(byte *)((long)ppuVar4 + 0x8e) = 0;
          *(byte *)((long)ppuVar4 + 0x8f) = 0;
          *(byte *)((long)ppuVar4 + 0x80) = 0;
          *(byte *)((long)ppuVar4 + 0x81) = 0;
          *(byte *)((long)ppuVar4 + 0x82) = 0;
          *(byte *)((long)ppuVar4 + 0x83) = 0;
          *(byte *)((long)ppuVar4 + 0x84) = 0;
          *(byte *)((long)ppuVar4 + 0x85) = 0;
          *(byte *)((long)ppuVar4 + 0x86) = 0;
          *(byte *)((long)ppuVar4 + 0x87) = 0;
          *(byte *)((long)ppuVar4 + 0x98) = 0;
          *(byte *)((long)ppuVar4 + 0x99) = 0;
          *(byte *)((long)ppuVar4 + 0x9a) = 0;
          *(byte *)((long)ppuVar4 + 0x9b) = 0;
          *(byte *)((long)ppuVar4 + 0x9c) = 0;
          *(byte *)((long)ppuVar4 + 0x9d) = 0;
          *(byte *)((long)ppuVar4 + 0x9e) = 0;
          *(byte *)((long)ppuVar4 + 0x9f) = 0;
          *(byte *)((long)ppuVar4 + 0x90) = 0;
          *(byte *)((long)ppuVar4 + 0x91) = 0;
          *(byte *)((long)ppuVar4 + 0x92) = 0;
          *(byte *)((long)ppuVar4 + 0x93) = 0;
          *(byte *)((long)ppuVar4 + 0x94) = 0;
          *(byte *)((long)ppuVar4 + 0x95) = 0;
          *(byte *)((long)ppuVar4 + 0x96) = 0;
          *(byte *)((long)ppuVar4 + 0x97) = 0;
          *(byte *)((long)ppuVar4 + 0x68) = 0;
          *(byte *)((long)ppuVar4 + 0x69) = 0;
          *(byte *)((long)ppuVar4 + 0x6a) = 0;
          *(byte *)((long)ppuVar4 + 0x6b) = 0;
          *(byte *)((long)ppuVar4 + 0x6c) = 0;
          *(byte *)((long)ppuVar4 + 0x6d) = 0;
          *(byte *)((long)ppuVar4 + 0x6e) = 0;
          *(byte *)((long)ppuVar4 + 0x6f) = 0;
          *(byte *)((long)ppuVar4 + 0x60) = 0;
          *(byte *)((long)ppuVar4 + 0x61) = 0;
          *(byte *)((long)ppuVar4 + 0x62) = 0;
          *(byte *)((long)ppuVar4 + 99) = 0;
          *(byte *)((long)ppuVar4 + 100) = 0;
          *(byte *)((long)ppuVar4 + 0x65) = 0;
          *(byte *)((long)ppuVar4 + 0x66) = 0;
          *(byte *)((long)ppuVar4 + 0x67) = 0;
          *(byte *)((long)ppuVar4 + 0x78) = 0;
          *(byte *)((long)ppuVar4 + 0x79) = 0;
          *(byte *)((long)ppuVar4 + 0x7a) = 0;
          *(byte *)((long)ppuVar4 + 0x7b) = 0;
          *(byte *)((long)ppuVar4 + 0x7c) = 0;
          *(byte *)((long)ppuVar4 + 0x7d) = 0;
          *(byte *)((long)ppuVar4 + 0x7e) = 0;
          *(byte *)((long)ppuVar4 + 0x7f) = 0;
          *(byte *)((long)ppuVar4 + 0x70) = 0;
          *(byte *)((long)ppuVar4 + 0x71) = 0;
          *(byte *)((long)ppuVar4 + 0x72) = 0;
          *(byte *)((long)ppuVar4 + 0x73) = 0;
          *(byte *)((long)ppuVar4 + 0x74) = 0;
          *(byte *)((long)ppuVar4 + 0x75) = 0;
          *(byte *)((long)ppuVar4 + 0x76) = 0;
          *(byte *)((long)ppuVar4 + 0x77) = 0;
          *(byte *)((long)ppuVar4 + 0x48) = 0;
          *(byte *)((long)ppuVar4 + 0x49) = 0;
          *(byte *)((long)ppuVar4 + 0x4a) = 0;
          *(byte *)((long)ppuVar4 + 0x4b) = 0;
          *(byte *)((long)ppuVar4 + 0x4c) = 0;
          *(byte *)((long)ppuVar4 + 0x4d) = 0;
          *(byte *)((long)ppuVar4 + 0x4e) = 0;
          *(byte *)((long)ppuVar4 + 0x4f) = 0;
          *(byte *)((long)ppuVar4 + 0x40) = 0;
          *(byte *)((long)ppuVar4 + 0x41) = 0;
          *(byte *)((long)ppuVar4 + 0x42) = 0;
          *(byte *)((long)ppuVar4 + 0x43) = 0;
          *(byte *)((long)ppuVar4 + 0x44) = 0;
          *(byte *)((long)ppuVar4 + 0x45) = 0;
          *(byte *)((long)ppuVar4 + 0x46) = 0;
          *(byte *)((long)ppuVar4 + 0x47) = 0;
          *(byte *)((long)ppuVar4 + 0x58) = 0;
          *(byte *)((long)ppuVar4 + 0x59) = 0;
          *(byte *)((long)ppuVar4 + 0x5a) = 0;
          *(byte *)((long)ppuVar4 + 0x5b) = 0;
          *(byte *)((long)ppuVar4 + 0x5c) = 0;
          *(byte *)((long)ppuVar4 + 0x5d) = 0;
          *(byte *)((long)ppuVar4 + 0x5e) = 0;
          *(byte *)((long)ppuVar4 + 0x5f) = 0;
          *(byte *)((long)ppuVar4 + 0x50) = 0;
          *(byte *)((long)ppuVar4 + 0x51) = 0;
          *(byte *)((long)ppuVar4 + 0x52) = 0;
          *(byte *)((long)ppuVar4 + 0x53) = 0;
          *(byte *)((long)ppuVar4 + 0x54) = 0;
          *(byte *)((long)ppuVar4 + 0x55) = 0;
          *(byte *)((long)ppuVar4 + 0x56) = 0;
          *(byte *)((long)ppuVar4 + 0x57) = 0;
          *(byte *)((long)ppuVar4 + 0x28) = 0;
          *(byte *)((long)ppuVar4 + 0x29) = 0;
          *(byte *)((long)ppuVar4 + 0x2a) = 0;
          *(byte *)((long)ppuVar4 + 0x2b) = 0;
          *(byte *)((long)ppuVar4 + 0x2c) = 0;
          *(byte *)((long)ppuVar4 + 0x2d) = 0;
          *(byte *)((long)ppuVar4 + 0x2e) = 0;
          *(byte *)((long)ppuVar4 + 0x2f) = 0;
          *(byte *)((long)ppuVar4 + 0x20) = 0;
          *(byte *)((long)ppuVar4 + 0x21) = 0;
          *(byte *)((long)ppuVar4 + 0x22) = 0;
          *(byte *)((long)ppuVar4 + 0x23) = 0;
          *(byte *)((long)ppuVar4 + 0x24) = 0;
          *(byte *)((long)ppuVar4 + 0x25) = 0;
          *(byte *)((long)ppuVar4 + 0x26) = 0;
          *(byte *)((long)ppuVar4 + 0x27) = 0;
          *(byte *)((long)ppuVar4 + 0x38) = 0;
          *(byte *)((long)ppuVar4 + 0x39) = 0;
          *(byte *)((long)ppuVar4 + 0x3a) = 0;
          *(byte *)((long)ppuVar4 + 0x3b) = 0;
          *(byte *)((long)ppuVar4 + 0x3c) = 0;
          *(byte *)((long)ppuVar4 + 0x3d) = 0;
          *(byte *)((long)ppuVar4 + 0x3e) = 0;
          *(byte *)((long)ppuVar4 + 0x3f) = 0;
          *(byte *)((long)ppuVar4 + 0x30) = 0;
          *(byte *)((long)ppuVar4 + 0x31) = 0;
          *(byte *)((long)ppuVar4 + 0x32) = 0;
          *(byte *)((long)ppuVar4 + 0x33) = 0;
          *(byte *)((long)ppuVar4 + 0x34) = 0;
          *(byte *)((long)ppuVar4 + 0x35) = 0;
          *(byte *)((long)ppuVar4 + 0x36) = 0;
          *(byte *)((long)ppuVar4 + 0x37) = 0;
          *(byte *)((long)ppuVar4 + 8) = 0;
          *(byte *)((long)ppuVar4 + 9) = 0;
          *(byte *)((long)ppuVar4 + 10) = 0;
          *(byte *)((long)ppuVar4 + 0xb) = 0;
          *(byte *)((long)ppuVar4 + 0xc) = 0;
          *(byte *)((long)ppuVar4 + 0xd) = 0;
          *(byte *)((long)ppuVar4 + 0xe) = 0;
          *(byte *)((long)ppuVar4 + 0xf) = 0;
          *(byte *)((long)ppuVar4 + 0) = 0;
          *(byte *)((long)ppuVar4 + 1) = 0;
          *(byte *)((long)ppuVar4 + 2) = 0;
          *(byte *)((long)ppuVar4 + 3) = 0;
          *(byte *)((long)ppuVar4 + 4) = 0;
          *(byte *)((long)ppuVar4 + 5) = 0;
          *(byte *)((long)ppuVar4 + 6) = 0;
          *(byte *)((long)ppuVar4 + 7) = 0;
          *(byte *)((long)ppuVar4 + 0x18) = 0;
          *(byte *)((long)ppuVar4 + 0x19) = 0;
          *(byte *)((long)ppuVar4 + 0x1a) = 0;
          *(byte *)((long)ppuVar4 + 0x1b) = 0;
          *(byte *)((long)ppuVar4 + 0x1c) = 0;
          *(byte *)((long)ppuVar4 + 0x1d) = 0;
          *(byte *)((long)ppuVar4 + 0x1e) = 0;
          *(byte *)((long)ppuVar4 + 0x1f) = 0;
          *(byte *)((long)ppuVar4 + 0x10) = 0;
          *(byte *)((long)ppuVar4 + 0x11) = 0;
          *(byte *)((long)ppuVar4 + 0x12) = 0;
          *(byte *)((long)ppuVar4 + 0x13) = 0;
          *(byte *)((long)ppuVar4 + 0x14) = 0;
          *(byte *)((long)ppuVar4 + 0x15) = 0;
          *(byte *)((long)ppuVar4 + 0x16) = 0;
          *(byte *)((long)ppuVar4 + 0x17) = 0;
          pbVar5 = (byte *)ppuVar4;
          FUN_10a097118(ppuVar4);
          *(byte *)((long)ppuVar4 + 0xa0) = 0;
          *(byte *)((long)ppuVar4 + 0xa1) = 0;
          *(byte *)((long)ppuVar4 + 0xa2) = 0;
          *(byte *)((long)ppuVar4 + 0xa3) = 0;
          *(byte *)((long)ppuVar4 + 0xa4) = 0;
          *(byte *)((long)ppuVar4 + 0xa5) = 0;
          *(byte *)((long)ppuVar4 + 0xa6) = 0;
          *(byte *)((long)ppuVar4 + 0xa7) = 0;
          *(byte *)((long)ppuVar4 + 0x98) = 0;
          *(byte *)((long)ppuVar4 + 0x99) = 0;
          *(byte *)((long)ppuVar4 + 0x9a) = 0;
          *(byte *)((long)ppuVar4 + 0x9b) = 0;
          *(byte *)((long)ppuVar4 + 0x9c) = 0;
          *(byte *)((long)ppuVar4 + 0x9d) = 0;
          *(byte *)((long)ppuVar4 + 0x9e) = 0;
          *(byte *)((long)ppuVar4 + 0x9f) = 0;
          *(byte *)((long)ppuVar4 + 0x90) = 0;
          *(byte *)((long)ppuVar4 + 0x91) = 0;
          *(byte *)((long)ppuVar4 + 0x92) = 0;
          *(byte *)((long)ppuVar4 + 0x93) = 0;
          *(byte *)((long)ppuVar4 + 0x94) = 0;
          *(byte *)((long)ppuVar4 + 0x95) = 0;
          *(byte *)((long)ppuVar4 + 0x96) = 0;
          *(byte *)((long)ppuVar4 + 0x97) = 0;
          *(byte *)((long)ppuVar4 + 0x88) = 0;
          *(byte *)((long)ppuVar4 + 0x89) = 0;
          *(byte *)((long)ppuVar4 + 0x8a) = 0;
          *(byte *)((long)ppuVar4 + 0x8b) = 0;
          *(byte *)((long)ppuVar4 + 0x8c) = 0;
          *(byte *)((long)ppuVar4 + 0x8d) = 0;
          *(byte *)((long)ppuVar4 + 0x8e) = 0;
          *(byte *)((long)ppuVar4 + 0x8f) = 0;
          *(byte *)((long)ppuVar4 + 0x80) = 0;
          *(byte *)((long)ppuVar4 + 0x81) = 0;
          *(byte *)((long)ppuVar4 + 0x82) = 0;
          *(byte *)((long)ppuVar4 + 0x83) = 0;
          *(byte *)((long)ppuVar4 + 0x84) = 0;
          *(byte *)((long)ppuVar4 + 0x85) = 0;
          *(byte *)((long)ppuVar4 + 0x86) = 0;
          *(byte *)((long)ppuVar4 + 0x87) = 0;
          *(byte *)((long)ppuVar4 + 0x78) = 0;
          *(byte *)((long)ppuVar4 + 0x79) = 0;
          *(byte *)((long)ppuVar4 + 0x7a) = 0;
          *(byte *)((long)ppuVar4 + 0x7b) = 0;
          *(byte *)((long)ppuVar4 + 0x7c) = 0;
          *(byte *)((long)ppuVar4 + 0x7d) = 0;
          *(byte *)((long)ppuVar4 + 0x7e) = 0;
          *(byte *)((long)ppuVar4 + 0x7f) = 0;
          *(byte *)((long)ppuVar4 + 0x70) = 0;
          *(byte *)((long)ppuVar4 + 0x71) = 0;
          *(byte *)((long)ppuVar4 + 0x72) = 0;
          *(byte *)((long)ppuVar4 + 0x73) = 0;
          *(byte *)((long)ppuVar4 + 0x74) = 0;
          *(byte *)((long)ppuVar4 + 0x75) = 0;
          *(byte *)((long)ppuVar4 + 0x76) = 0;
          *(byte *)((long)ppuVar4 + 0x77) = 0;
          *(byte *)((long)ppuVar4 + 0x68) = 0;
          *(byte *)((long)ppuVar4 + 0x69) = 0;
          *(byte *)((long)ppuVar4 + 0x6a) = 0;
          *(byte *)((long)ppuVar4 + 0x6b) = 0;
          *(byte *)((long)ppuVar4 + 0x6c) = 0;
          *(byte *)((long)ppuVar4 + 0x6d) = 0;
          *(byte *)((long)ppuVar4 + 0x6e) = 0;
          *(byte *)((long)ppuVar4 + 0x6f) = 0;
          *(byte *)((long)ppuVar4 + 0x60) = 0;
          *(byte *)((long)ppuVar4 + 0x61) = 0;
          *(byte *)((long)ppuVar4 + 0x62) = 0;
          *(byte *)((long)ppuVar4 + 99) = 0;
          *(byte *)((long)ppuVar4 + 100) = 0;
          *(byte *)((long)ppuVar4 + 0x65) = 0;
          *(byte *)((long)ppuVar4 + 0x66) = 0;
          *(byte *)((long)ppuVar4 + 0x67) = 0;
          *(byte *)((long)ppuVar4 + 0x58) = 0;
          *(byte *)((long)ppuVar4 + 0x59) = 0;
          *(byte *)((long)ppuVar4 + 0x5a) = 0;
          *(byte *)((long)ppuVar4 + 0x5b) = 0;
          *(byte *)((long)ppuVar4 + 0x5c) = 0;
          *(byte *)((long)ppuVar4 + 0x5d) = 0;
          *(byte *)((long)ppuVar4 + 0x5e) = 0;
          *(byte *)((long)ppuVar4 + 0x5f) = 0;
          *(byte *)((long)ppuVar4 + 0xa8) = 1;
          return pbVar5;
        }
        if ((*(byte *)((long)ppuVar4 + 0xa8) & 1) != 0) {
          plVar7 = *(long **)((long)ppuVar4 + 0x68);
          if ((plVar7 == (long *)0x0) || ((**(code **)(*plVar7 + 0x58))(), (int)plVar7 == 0))
          goto LAB_10a08dbd8;
          FUN_10a08e118(ppuVar4);
          if ((*(byte *)((long)ppuVar4 + 0xa8) & 1) != 0) {
            plVar7 = *(long **)((long)ppuVar4 + 0x88);
            if (plVar7 == (long *)0x0) {
              lStack_68 = *(long *)((long)ppuVar4 + 0x68);
              plVar7 = *(long **)(*(long *)(lStack_68 + 0x28) + 0x28);
              (**(code **)(*plVar7 + 0x30))(plVar7,0,0,0,0,&lStack_68,1,in_x7,0,0,0);
            }
            else {
              uVar8 = *(undefined8 *)((long)ppuVar4 + 0x90);
              __ZNSt3__115recursive_mutex4lockEv(uVar8);
              if ((*(byte *)((long)ppuVar4 + 0xa8) & 1) == 0) goto LAB_10a08dd34;
              lStack_68 = *(long *)((long)ppuVar4 + 0x68);
              (**(code **)(*plVar7 + 0x30))(plVar7,0,0,0,0,&lStack_68,1,in_x7,0,0,0);
              __ZNSt3__115recursive_mutex6unlockEv(uVar8);
            }
            if ((*(byte *)((long)ppuVar4 + 0xa8) & 1) != 0) {
              func_0x00010a09dc6c((byte *)((long)ppuVar4 + 0xc0),ppuVar4);
              FUN_10a08de30(ppuVar4);
              goto LAB_10a08dbd8;
            }
          }
        }
LAB_10a08dd34:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a08dd38);
        (*pcVar1)();
      }
      plVar7 = *(long **)(*(long *)*ppuVar3 + 8);
      if (plVar7 != (long *)0x0) {
        if (*(int *)(*plVar7 + 0x734) == 1) {
          func_0x000109297280();
          _glBindFramebuffer(0x8d40,0);
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10a08dbac; end: 10a08dd67;  */

void FUN_10a08dbac(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar4;
  undefined8 in_x7;
  undefined8 uVar5;
  long lStack_38;
  undefined8 *puVar3;
  
  puVar3 = param_1;
  FUN_10a08e1c8();
  iVar2 = (int)puVar3;
  __ZSt19uncaught_exceptionsv();
  if (0 < iVar2) {
LAB_10a08dbd8:
    FUN_10a09a4c4(param_1);
    param_1[0x14] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    FUN_10a097118(param_1);
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    *(undefined1 *)(param_1 + 0x15) = 1;
    return;
  }
  if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
    plVar4 = (long *)param_1[0xd];
    if ((plVar4 == (long *)0x0) || ((**(code **)(*plVar4 + 0x58))(), (int)plVar4 == 0))
    goto LAB_10a08dbd8;
    FUN_10a08e118(param_1);
    if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
      plVar4 = (long *)param_1[0x11];
      if (plVar4 == (long *)0x0) {
        lStack_38 = param_1[0xd];
        plVar4 = *(long **)(*(long *)(lStack_38 + 0x28) + 0x28);
        (**(code **)(*plVar4 + 0x30))(plVar4,0,0,0,0,&lStack_38,1,in_x7,0,0,0);
      }
      else {
        uVar5 = param_1[0x12];
        __ZNSt3__115recursive_mutex4lockEv(uVar5);
        if ((*(byte *)(param_1 + 0x15) & 1) == 0) goto LAB_10a08dd34;
        lStack_38 = param_1[0xd];
        (**(code **)(*plVar4 + 0x30))(plVar4,0,0,0,0,&lStack_38,1,in_x7,0,0,0);
        __ZNSt3__115recursive_mutex6unlockEv(uVar5);
      }
      if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
        func_0x00010a09dc6c(param_1 + 0x18,param_1);
        FUN_10a08de30(param_1);
        goto LAB_10a08dbd8;
      }
    }
  }
LAB_10a08dd34:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a08dd38);
  (*pcVar1)();
}



/* Entry: 10a08dd68; end: 10a08de2f;  */

undefined8 * FUN_10a08dd68(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a08de30; end: 10a08def7;  */

void FUN_10a08de30(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xe8);
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 200) + (*(ulong *)(param_1 + 0xe0) / 0x18) * 8
                                 ) + (*(ulong *)(param_1 + 0xe0) % 0x18) * 0xa8 + 0x78);
    (**(code **)(*plVar2 + 0x30))(plVar2,0);
    if ((int)plVar2 != 1) break;
    if (*(long *)(param_1 + 0xe8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a08def8);
      (*pcVar1)();
    }
    lVar3 = *(long *)(*(long *)(param_1 + 200) + (*(ulong *)(param_1 + 0xe0) / 0x18) * 8) +
            (*(ulong *)(param_1 + 0xe0) % 0x18) * 0xa8;
    FUN_10a08e3e0(lVar3);
    FUN_10a09e210(param_1 + 0xf0,lVar3);
    FUN_10a09e784(param_1 + 0xc0);
    lVar3 = *(long *)(param_1 + 0xe8);
  }
  return;
}



/* Entry: 10a08def8; end: 10a08e00f;  */

undefined8 * FUN_10a08def8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a08e010; end: 10a08e0bb;  */

void FUN_10a08e010(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_1 + 0x138);
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (*(long *)(param_1 + 0x130) != 0) {
        if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a08e0a8);
          (*pcVar4)();
        }
        FUN_10ad613d8(*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x68));
      }
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a08e0bc; end: 10a08e117;  */

long * FUN_10a08e0bc(long param_1)

{
  code *pcVar1;
  long *plVar2;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
      return (long *)0x0;
    }
    FUN_10a08e010(param_1);
    if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
      plVar2 = *(long **)(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010a08e100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x48))();
      return plVar2;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a08e118);
  (*pcVar1)();
}



/* Entry: 10a08e118; end: 10a08e1c7;  */

void FUN_10a08e118(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x138);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (((*(long *)(param_1 + 0x130) != 0) && (*(char *)(param_1 + 0xa8) == '\x01')) &&
         (*(long *)(param_1 + 0x68) != 0)) {
        func_0x00010ad614d4();
      }
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a08e1c8; end: 10a08e227;  */

void FUN_10a08e1c8(long param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x120) == '\x01') {
    ppuVar1 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    plVar2 = *(long **)(*(long *)*ppuVar1 + 8);
    func_0x00010a08e298();
    (**(code **)(*plVar2 + 0x18))();
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  return;
}



/* Entry: 10a08e228; end: 10a08e2f3;  */

undefined8 * FUN_10a08e228(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_10a09a4c4(puVar1);
  puVar1[0x14] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  FUN_10a097118(puVar1);
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
  *(undefined1 *)(puVar1 + 0x15) = 1;
  return param_1;
}



/* Entry: 10a08e2f4; end: 10a08e3df;  */

void FUN_10a08e2f4(long param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined8 in_x7;
  undefined *puVar3;
  long lStack_28;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar3 = *ppuVar1;
  if (((puVar3 != (undefined *)0x0) && (puVar3[0xc0] == '\x01')) && (*(long *)(puVar3 + 0x80) != 0))
  {
    if ((param_1 != 0) &&
       (*(int *)(*(long *)(*(long *)(puVar3 + 0x80) + 0x18) + 0x734) !=
        *(int *)(*(long *)(param_1 + 0x18) + 0x734))) goto LAB_10a08e35c;
    FUN_10a08dbac(puVar3 + 0x18);
  }
  if (param_1 == 0) {
    return;
  }
LAB_10a08e35c:
  plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x28);
  lStack_28 = param_1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0,0,0,0,&lStack_28,1,in_x7,0,0,0);
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x734) == 1) {
    func_0x000109297280();
  }
  return;
}



/* Entry: 10a08e3e0; end: 10a08e55b;  */

void FUN_10a08e3e0(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  lVar4 = param_1[1];
  lVar6 = *param_1;
  while (lVar4 != lVar6) {
    lVar4 = lVar4 + -0x10;
    func_0x00010a09da5c();
  }
  param_1[1] = lVar6;
  param_1[3] = 0;
  puVar7 = (undefined8 *)param_1[4];
  puVar2 = (undefined8 *)param_1[5];
  do {
    if (puVar7 == puVar2) {
      if (param_1[9] != 0) {
        plVar8 = param_1 + 7;
        param_1[10] = 0;
        if ((ulong)param_1[9] < 0x80) {
          lVar6 = param_1[9];
          lVar4 = *plVar8;
          _memset(lVar4,0x80,lVar6 + 8);
          *(undefined1 *)(lVar4 + lVar6) = 0xff;
          uVar1 = param_1[9];
          lVar4 = 6;
          if (uVar1 != 7) {
            lVar4 = uVar1 - (uVar1 >> 3);
          }
          *(long *)(*plVar8 + -8) = lVar4 - param_1[10];
        }
        else {
          (*(code *)&DAT_104c32e5c)(plVar8);
          param_1[8] = 0;
          param_1[9] = 0;
          *plVar8 = (long)&UNK_10e52b660;
        }
        return;
      }
      return;
    }
    plVar8 = (long *)*puVar7;
    if (*plVar8 != 0) {
      lVar4 = *plVar8 << 5;
      plVar3 = plVar8;
      do {
        plVar5 = (long *)plVar3[4];
        if (plVar3 + 1 == plVar5) {
          lVar6 = 0x20;
LAB_10a08e45c:
          (**(code **)(*plVar5 + lVar6))();
        }
        else if (plVar5 != (long *)0x0) {
          lVar6 = 0x28;
          goto LAB_10a08e45c;
        }
        lVar4 = lVar4 + -0x20;
        plVar3 = plVar3 + 4;
      } while (lVar4 != 0);
    }
    *plVar8 = 0;
    puVar7 = puVar7 + 1;
  } while( true );
}



/* Entry: 10a08e55c; end: 10a08e623;  */

void FUN_10a08e55c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[0x1d];
  while (lVar2 != 0) {
    plVar1 = *(long **)(*(long *)(param_1[0x19] + ((ulong)param_1[0x1c] / 0x18) * 8) +
                        ((ulong)param_1[0x1c] % 0x18) * 0xa8 + 0x78);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x40))();
    }
    FUN_10a09e784(param_1 + 0x18);
    lVar2 = param_1[0x1d];
  }
  FUN_10a09a4c4(param_1);
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_10a097118(param_1);
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  return;
}



/* Entry: 10a08e624; end: 10a08e6b3;  */

void FUN_10a08e624(long param_1)

{
  byte *pbVar1;
  long lVar2;
  
  *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0x128) + 1;
  pbVar1 = (byte *)0x113835290;
  FUN_10a08fec0();
  if ((*pbVar1 >> 2 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0xe8);
    while ((lVar2 != 0 &&
           (lVar2 = *(long *)(*(long *)(param_1 + 200) + (*(ulong *)(param_1 + 0xe0) / 0x18) * 8) +
                    (*(ulong *)(param_1 + 0xe0) % 0x18) * 0xa8,
           1 < (ulong)(*(long *)(param_1 + 0x128) - *(long *)(lVar2 + 0xa0))))) {
      FUN_10a08e3e0(lVar2);
      FUN_10a09e210(param_1 + 0xf0,lVar2);
      FUN_10a09e784(param_1 + 0xc0);
      lVar2 = *(long *)(param_1 + 0xe8);
    }
    return;
  }
  return;
}



/* Entry: 10a08e6b4; end: 10a08e6f7;  */

void FUN_10a08e6b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a08e6f8(param_1,&uStack_30,param_2);
  return;
}



/* Entry: 10a08e6f8; end: 10a08e7a3;  */

undefined8 FUN_10a08e6f8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a08e7a4(param_1,param_3,0,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return param_1;
}



/* Entry: 10a08e7a4; end: 10a08ee33;  */

long * FUN_10a08e7a4(long *param_1,long param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 **ppuVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puStack_130;
  long *plStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_81;
  undefined8 *puStack_80;
  long *plStack_78;
  
  if (param_3 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar11 = param_3[1];
    lVar12 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = lVar12;
    if (lVar11 != 0) {
      plVar14 = (long *)(lVar11 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = *plVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_10a097118(&puStack_130);
  lStack_90 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  lStack_b8 = 0;
  lStack_c0 = 0;
  lStack_c8 = 0;
  lStack_d0 = 0;
  lStack_d8 = 0;
  param_1[4] = (long)plStack_128;
  param_1[3] = (long)puStack_130;
  param_1[5] = lStack_120;
  puStack_130 = (undefined8 *)0x0;
  plStack_128 = (long *)0x0;
  lStack_120 = 0;
  FUN_10a0a1d0c(param_1 + 6);
  lVar11 = param_1[6];
  param_1[6] = uStack_118;
  lVar16 = param_1[8];
  lVar15 = param_1[7];
  param_1[8] = lStack_108;
  param_1[7] = lStack_110;
  lVar12 = param_1[9];
  param_1[9] = lStack_100;
  uStack_118 = lVar11;
  lStack_110 = lVar15;
  lStack_108 = lVar16;
  lStack_100 = lVar12;
  FUN_10a09a1d8(param_1 + 10,&uStack_f8);
  lVar5 = lStack_98;
  lVar16 = lStack_b0;
  lVar15 = lStack_b8;
  lVar12 = lStack_d0;
  lVar11 = lStack_d8;
  lStack_d8 = 0;
  lStack_d0 = 0;
  param_1[0xf] = lVar12;
  param_1[0xe] = lVar11;
  param_1[0x11] = lStack_c0;
  param_1[0x10] = lStack_c8;
  lStack_c8 = 0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  param_1[0x13] = lVar16;
  param_1[0x12] = lVar15;
  param_1[0x15] = lStack_a0;
  param_1[0x14] = lStack_a8;
  lStack_a0 = 0;
  lStack_98 = 0;
  param_1[0x16] = lVar5;
  param_1[0x17] = lStack_90;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (CONCAT44(uStack_e4,uStack_e8) != 0) {
    __ZdlPv(uStack_f8 - 8);
  }
  puStack_80 = &lStack_110;
  FUN_10a09cf7c(&puStack_80);
  ppuVar6 = &puStack_80;
  puStack_80 = &puStack_130;
  func_0x00010a09d0e8();
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  _pthread_self();
  _pthread_mach_thread_np();
  param_1[0x2b] = (ulong)ppuVar6 & 0xffffffff;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (*param_4 == 0) {
    FUN_10a08eebc(&puStack_80);
    plStack_128 = plStack_78;
    puStack_130 = puStack_80;
    puStack_80 = (undefined8 *)0x0;
    plStack_78 = (long *)0x0;
    func_0x00010a219794(&puStack_130);
    plVar14 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar1 = plStack_128 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    plVar14 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
  }
  else {
    func_0x00010a219794(param_4);
  }
  FUN_10a08f69c();
  if (*param_1 == 0) {
    puVar8 = (undefined8 *)0x50;
    __Znwm();
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_FUN_110ba0958;
    puVar13 = puVar8 + 3;
    puVar8[4] = 0;
    *puVar13 = 0;
    puVar8[6] = 0;
    puVar8[5] = 0;
    puVar8[8] = 0;
    puVar8[7] = 0;
    *(undefined4 *)(puVar8 + 9) = 0;
    if (lRam00000001137e93f8 != -1) {
      puStack_130 = (undefined8 *)&uStack_81;
      puStack_80 = &puStack_130;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137e93f8,&puStack_80,FUN_10a0a23c8);
    }
    puStack_130 = (undefined8 *)((ulong)puStack_130 & 0xffffffff00000000);
    uVar4 = (uint)uStack_118;
    lStack_d8 = 0;
    lStack_d0 = 0;
    uStack_e0 = 0;
    lStack_100 = 0;
    lStack_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e8 = 0;
    uStack_118 = CONCAT44(0xffffffff,uVar4 & 0xff000000);
    lStack_120 = CONCAT44(lStack_120._4_4_,5);
    plStack_128 = (long *)0x2c001006;
    uStack_118 = CONCAT62(uStack_118._2_6_,0x101);
    pcVar9 = (char *)0x1138352f8;
    lStack_110 = param_2;
    FUN_10a08f69c();
    if (*pcVar9 == '\x01') {
      puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,2);
    }
    uStack_118._0_3_ = (uint3)(ushort)uStack_118;
    lStack_100 = 0x100000000;
    lStack_108 = 0;
    puVar10 = &uStack_e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar10,0x113834ab8);
    uStack_e8 = uRam0000000113834ad0;
    uStack_f8 = (ulong)uRam0000000113834ad4;
    FUN_10a0ee65c();
    lVar11 = 0;
    puStack_80 = (undefined8 *)0x1a;
    plStack_78 = (long *)0x0;
    do {
      if (*(int *)((long)puVar10 + lVar11) != *(int *)((long)&puStack_80 + lVar11)) {
        if (*(int *)((long)puVar10 + lVar11) < *(int *)((long)&puStack_80 + lVar11))
        goto LAB_10a08ebd0;
        break;
      }
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0x10);
    uStack_f0 = CONCAT44(uStack_f0._4_4_,1);
LAB_10a08ebd0:
    func_0x000109253b8c(&puStack_80,&puStack_130);
    uVar7 = 0x378;
    __Znwm(0x378);
    FUN_10a093b1c();
    FUN_10a0a1618(puVar8 + 4,uVar7);
    plVar14 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    if (lStack_d0 < 0) {
      __ZdlPv(uStack_e0);
    }
    puStack_130 = (undefined8 *)((ulong)puStack_130 & 0xffffffff00000000);
    lStack_120 = CONCAT44(lStack_120._4_4_,5);
    plStack_128 = (long *)0x2c001006;
    pcVar9 = (char *)0x1138352f8;
    FUN_10a08f69c();
    if (*pcVar9 == '\x01') {
      puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,2);
    }
    FUN_109fde6a4(&puStack_80,&puStack_130);
    uVar7 = 0x378;
    __Znwm(0x378);
    FUN_10a093b1c();
    FUN_10a0a1618(puVar13,uVar7);
    plVar14 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    plVar14 = (long *)param_1[1];
    *param_1 = (long)puVar13;
    param_1[1] = (long)puVar8;
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
  }
  uVar7 = 200;
  __Znwm(200);
  FUN_10a155c88();
  FUN_10a08f118(param_1 + 2,uVar7);
  return param_1;
}



/* Entry: 10a08ee34; end: 10a08eebb;  */

undefined8 FUN_10a08ee34(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10a08e7a4(param_1,0,param_2,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 10a08eebc; end: 10a08ef57;  */

void FUN_10a08eebc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110ba0c80;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar7 = puVar4 + 3;
  *puVar7 = &PTR_FUN_110ba0cd0;
  *param_1 = puVar7;
  param_1[1] = puVar4;
  puVar6 = puVar4 + 4;
  *puVar6 = 0;
  if ((puVar6 != (undefined8 *)0x0) &&
     ((lVar5 = puVar4[5], lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar8 = (long *)param_1[1];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = puVar4[5];
    }
    *puVar6 = puVar7;
    puVar4[5] = plVar8;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a08ef58; end: 10a08f043;  */

long * FUN_10a08ef58(long *param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined *extraout_x9;
  undefined *puVar7;
  undefined **ppuStack_138;
  undefined *apuStack_130 [3];
  long alStack_118 [8];
  long lStack_d8;
  undefined1 auStack_98 [96];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a08f044(auStack_98);
  ppuVar1 = &PTR___tlv_bootstrap_11340df00;
  (*(code *)PTR___tlv_bootstrap_11340df00)();
  puVar7 = *ppuVar1;
  puVar2 = (undefined *)0x1;
  FUN_10a303694();
  *ppuVar1 = puVar2;
  FUN_10a08f118(param_1 + 2,0);
  *ppuVar1 = puVar7;
  func_0x00010a09a9f4(auStack_98);
  if (param_1[0x2a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a09a5c0(param_1 + 0x21);
  FUN_10a09a790(param_1 + 0x1b);
  FUN_10a043fd8(param_1 + 0x19);
  func_0x00010a09a970(param_1 + 3);
  iVar5 = 0;
  FUN_10a08f118(param_1 + 2);
  func_0x00010a09e8c8(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar2 = *ppuVar1;
  *ppuVar1 = extraout_x9;
  FUN_10a156070(alStack_118,*(undefined8 *)(extraout_x9 + 0x10));
  ppuStack_138 = &PTR_FUN_110ba0998;
  plVar6 = alStack_118;
  apuStack_130[0] = puVar2;
  func_0x00010a09aa40(extraout_x8,plVar6,&ppuStack_138);
  if (ppuStack_138 != (undefined **)0x0) {
    (*(code *)ppuStack_138[2])(apuStack_130);
    if (ppuStack_138 != (undefined **)0x0) {
      (*(code *)*ppuStack_138)(apuStack_130);
    }
  }
  plVar3 = alStack_118;
  func_0x00010a09ab04();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return plVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar4 = (long *)*plVar3;
  *plVar3 = (long)plVar6;
  if (plVar4 != (long *)0x0) {
    FUN_10a0a0170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return plVar4;
  }
  return (long *)0x0;
}



/* Entry: 10a08f044; end: 10a08f117;  */

void FUN_10a08f044(undefined8 param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined *extraout_x9;
  undefined *puVar5;
  undefined **ppuStack_98;
  undefined *apuStack_90 [3];
  long alStack_78 [8];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar5 = *ppuVar1;
  *ppuVar1 = extraout_x9;
  FUN_10a156070(alStack_78,*(undefined8 *)(extraout_x9 + 0x10));
  ppuStack_98 = &PTR_FUN_110ba0998;
  plVar4 = alStack_78;
  apuStack_90[0] = puVar5;
  func_0x00010a09aa40(param_1,plVar4,&ppuStack_98);
  if (ppuStack_98 != (undefined **)0x0) {
    (*(code *)ppuStack_98[2])(apuStack_90);
    if (ppuStack_98 != (undefined **)0x0) {
      (*(code *)*ppuStack_98)(apuStack_90);
    }
  }
  plVar2 = alStack_78;
  func_0x00010a09ab04();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar3 = *plVar2;
  *plVar2 = (long)plVar4;
  if (lVar3 != 0) {
    FUN_10a0a0170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a08f118; end: 10a08f2ab;  */

void FUN_10a08f118(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a0a0170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a08f2ac; end: 10a08f3fb;  */

/* WARNING: Removing unreachable block (ram,0x00010abe2a34) */
/* WARNING: Removing unreachable block (ram,0x00010abe2a3c) */
/* WARNING: Removing unreachable block (ram,0x00010abe2a40) */
/* WARNING: Removing unreachable block (ram,0x00010abe2a48) */
/* WARNING: Removing unreachable block (ram,0x00010abe2ac0) */
/* WARNING: Removing unreachable block (ram,0x00010abe2a58) */
/* WARNING: Removing unreachable block (ram,0x00010abe2a6c) */
/* WARNING: Removing unreachable block (ram,0x00010abe2a70) */
/* WARNING: Removing unreachable block (ram,0x00010abe2a78) */
/* WARNING: Removing unreachable block (ram,0x00010abe2a88) */

void FUN_10a08f2ac(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x10);
  lVar3 = plVar2[1];
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + 0x440) & 1) == 0) goto LAB_10a08f348;
    if (*(int *)(lVar3 + 0x360) == 0) {
      FUN_10abe2a0c(*(undefined8 *)(lVar3 + 800),0);
      plVar2 = *(long **)(param_1 + 0x10);
    }
  }
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + 0x440) & 1) == 0) goto LAB_10a08f348;
    if (*(int *)(lVar3 + 0x360) == 0) {
      FUN_10abe2a0c(*(undefined8 *)(lVar3 + 800),0);
      plVar2 = *(long **)(param_1 + 0x10);
    }
  }
  lVar3 = plVar2[2];
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + 0x440) & 1) == 0) {
LAB_10a08f348:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a08f34c);
      (*pcVar1)();
    }
    if (*(int *)(lVar3 + 0x360) == 0) {
      lVar3 = *(long *)(lVar3 + 800);
      __ZNSt3__15mutex4lockEv(lVar3 + 0x28);
      FUN_10abe2ae4(lVar3,0);
      __ZNSt3__15mutex6unlockEv(lVar3 + 0x28);
      return;
    }
  }
  return;
}



/* Entry: 10a08f3fc; end: 10a08f43f;  */

void FUN_10a08f3fc(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *extraout_x8;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)(param_1);
  if (*ppuVar1 == extraout_x8) {
    FUN_10a1561c4(*(undefined8 *)(extraout_x8 + 0x10));
  }
  return;
}



/* Entry: 10a08f440; end: 10a08f5f3;  */

void FUN_10a08f440(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6352ae;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_88);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_70 & 0xffffffff,uStack_70._4_4_,uStack_38,uStack_68 & 0xffffffff,
                uStack_68._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_88);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f431885;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a08f5f4(param_1,&puStack_88,0);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f43155c;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a08f5f4();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6352ba;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a08f5f4();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6352c3;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a08f5f4();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6352d5;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a08f5f4();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a08f5f4; end: 10a08f69b;  */

undefined8 * FUN_10a08f5f4(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a08f69c);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a08f69c; end: 10a08f793;  */

long FUN_10a08f69c(undefined8 *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [271];
  undefined1 uStack_31;
  
  pbVar1 = (byte *)((long)param_1 + 0x1b);
  do {
    bVar3 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while ((bVar3 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((*(byte *)((long)param_1 + 0x1a) & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x1b) = 0;
    return (long)param_1 + 0x19;
  }
  FUN_109febc44(auStack_150);
  FUN_10a002568(auStack_140,&UNK_10f636cdb,10);
  uVar2 = param_1[1];
  puVar6 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar6 = param_1;
  }
  FUN_10a002568(auStack_140,puVar6,uVar2);
  FUN_10a002568(auStack_140,&UNK_10f636ce6,0x13);
  FUN_10a05168c(&uStack_31,auStack_140);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a08f774);
  (*pcVar7)();
}



/* Entry: 10a08f794; end: 10a08f82b;  */

undefined1 FUN_10a08f794(long *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    FUN_10a09f0cc(0x113834838,0);
  }
  else {
    (**(code **)(*param_1 + 0x80))(param_1,0x113834838);
  }
  puVar2 = (undefined1 *)0x113834838;
  FUN_10a08f69c();
  uVar1 = *puVar2;
  func_0x00010ae02ecc(0,uVar1);
  ppuVar3 = &PTR_PTR_1132ffa20;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar3,&PTR_PTR_1132ffa20);
  return uVar1;
}



/* Entry: 10a08f82c; end: 10a08f87b;  */

/* WARNING: Removing unreachable block (ram,0x00010a08f864) */

long FUN_10a08f82c(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x80))();
  (*(code *)**(undefined8 **)(param_1 + 0x40))((undefined8 *)(param_1 + 0x40));
  return param_1;
}



/* Entry: 10a08f87c; end: 10a08fd8b;  */

ulong FUN_10a08f87c(undefined8 param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 ****ppppuVar4;
  byte bVar5;
  char cVar6;
  code *pcVar7;
  undefined **ppuVar8;
  long *plVar9;
  long *extraout_x8;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  ppuVar8 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)(param_1);
  plVar12 = (long *)*ppuVar8;
  if (plVar12 == (long *)0x0) {
    func_0x000107c2b054(&pppuStack_58,&UNK_10f636af6);
    ppppuVar4 = (undefined8 ****)pppuStack_58;
    if (-1 < (long)uStack_48) {
      uStack_50 = uStack_48 >> 0x38;
      ppppuVar4 = &pppuStack_58;
    }
    FUN_10ae03140(0,ppppuVar4,uStack_50);
    ppuVar8 = &PTR_PTR_1132ffd00;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_1132ffd00);
    if (uStack_48._7_1_ < '\0') {
      __ZdlPv(pppuStack_58);
    }
    uVar11 = 0;
  }
  else {
    plVar9 = (long *)*extraout_x8;
    do {
      bVar5 = bRam00000001137e9480;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x1137e9480,0x10);
      if (bVar3) {
        bRam00000001137e9480 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    while ((bVar5 & 1) != 0) {
      do {
      } while ((bRam00000001137e9480 & 1) != 0);
      do {
        bVar5 = bRam00000001137e9480;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(0x1137e9480,0x10);
        if (bVar3) {
          bRam00000001137e9480 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (cRam00000001137e9488 == '\x01') {
      cRam00000001137e9488 = '\0';
    }
    if (plVar9 == (long *)0x0) {
      FUN_10a09efac(0x1137e9490,0);
    }
    else {
      (**(code **)(*plVar9 + 0x70))(plVar9,0x1137e9490);
    }
    pcVar7 = pcRam00000001137e94f8;
    uVar11 = 0x1137e9490;
    bRam00000001137e9480 = '\0';
    do {
      cVar6 = bRam00000001137e9480;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x1137e9480,0x10);
      if (bVar3) {
        bRam00000001137e9480 = '\x01';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    while (cVar6 != '\0') {
      do {
      } while (bRam00000001137e9480 != '\0');
      do {
        cVar6 = bRam00000001137e9480;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(0x1137e9480,0x10);
        if (bVar3) {
          bRam00000001137e9480 = '\x01';
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (cRam00000001137e9488 == '\x01') {
      uVar11 = (ulong)uRam00000001137e9484;
    }
    else {
      FUN_10a08fec0();
      (*pcVar7)();
      uRam00000001137e9484 = (uint)uVar11;
      cRam00000001137e9488 = '\x01';
    }
    bRam00000001137e9480 = 0;
    func_0x00010ae02ecc(0,uVar11);
    ppuVar8 = &PTR_PTR_1132ffc90;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_1132ffc90);
    uVar10 = (uint)uVar11;
    if (uVar10 == 0) {
      func_0x000107c2b054(&pppuStack_58,&UNK_10f636af6);
    }
    else {
      pppuStack_58 = (undefined8 ****)0x0;
      uStack_50 = 0;
      uStack_48 = 0;
      if ((uVar11 & 1) != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&pppuStack_58,"Default",7);
      }
      if ((uVar10 >> 1 & 1) != 0) {
        uVar1 = uStack_50;
        if (-1 < (long)uStack_48) {
          uVar1 = uStack_48 >> 0x38;
        }
        if (uVar1 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_58,&DAT_10f387e68,1);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&pppuStack_58,&UNK_10f636b02,0x12);
      }
      if ((uVar10 >> 2 & 1) != 0) {
        uVar1 = uStack_50;
        if (-1 < (long)uStack_48) {
          uVar1 = uStack_48 >> 0x38;
        }
        if (uVar1 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_58,&DAT_10f387e68,1);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&pppuStack_58,&UNK_10f636b15,0x11);
      }
      if ((uVar10 >> 3 & 1) != 0) {
        uVar1 = uStack_50;
        if (-1 < (long)uStack_48) {
          uVar1 = uStack_48 >> 0x38;
        }
        if (uVar1 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_58,&DAT_10f387e68,1);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&pppuStack_58,&UNK_10f636b27,0x1b);
      }
      if ((uVar10 >> 4 & 1) != 0) {
        uVar1 = uStack_50;
        if (-1 < (long)uStack_48) {
          uVar1 = uStack_48 >> 0x38;
        }
        if (uVar1 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_58,&DAT_10f387e68,1);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&pppuStack_58,&UNK_10f636b43,0x14);
      }
      if ((uVar10 >> 5 & 1) != 0) {
        uVar1 = uStack_50;
        if (-1 < (long)uStack_48) {
          uVar1 = uStack_48 >> 0x38;
        }
        if (uVar1 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_58,&DAT_10f387e68,1);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&pppuStack_58,&UNK_10f636b58,0xc);
      }
      if ((uVar10 >> 6 & 1) != 0) {
        uVar1 = uStack_50;
        if (-1 < (long)uStack_48) {
          uVar1 = uStack_48 >> 0x38;
        }
        if (uVar1 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_58,&DAT_10f387e68,1);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&pppuStack_58,&UNK_10f636b65,0xe);
      }
      if ((uVar10 >> 7 & 1) != 0) {
        uVar1 = uStack_50;
        if (-1 < (long)uStack_48) {
          uVar1 = uStack_48 >> 0x38;
        }
        if (uVar1 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_58,&DAT_10f387e68,1);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&pppuStack_58,&UNK_10f636b74,0xc);
      }
      if ((uVar10 >> 8 & 1) != 0) {
        uVar1 = uStack_50;
        if (-1 < (long)uStack_48) {
          uVar1 = uStack_48 >> 0x38;
        }
        if (uVar1 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_58,&DAT_10f387e68,1);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&pppuStack_58,&UNK_10f636b81,0x13);
      }
    }
    uVar1 = uStack_50;
    ppppuVar4 = (undefined8 ****)pppuStack_58;
    if (-1 < (long)uStack_48) {
      uVar1 = uStack_48 >> 0x38;
      ppppuVar4 = &pppuStack_58;
    }
    FUN_10ae03140(0,ppppuVar4,uVar1);
    ppuVar8 = &PTR_PTR_1132ffcc8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_1132ffcc8);
    if ((long)uStack_48 < 0) {
      __ZdlPv(pppuStack_58);
    }
    *(uint *)(*plVar12 + 0x30) = uVar10;
  }
  return uVar11;
}



/* Entry: 10a08fd8c; end: 10a08fe2f;  */

undefined4 FUN_10a08fd8c(void)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  if ((long *)*ppuVar2 == (long *)0x0) {
    ppuVar2 = &PTR_PTR_1132ffa60;
    FUN_10ae079a0(0,&PTR_PTR_1132ffa60);
    FUN_10ae07cd4(ppuVar2,&PTR_PTR_1132ffa60);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)*ppuVar2 + 0x30);
  }
  return uVar1;
}



/* Entry: 10a08fe30; end: 10a08febf;  */

undefined4 FUN_10a08fe30(void)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined4 *puVar4;
  
  if ((bRam0000000113834b1c & 1) == 0) {
    do {
      bVar3 = bRam00000001138348bc;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1138348bc,0x10);
      if (bVar2) {
        bRam00000001138348bc = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    while ((bVar3 & 1) != 0) {
      do {
      } while ((bRam00000001138348bc & 1) != 0);
      do {
        bVar3 = bRam00000001138348bc;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x1138348bc,0x10);
        if (bVar2) {
          bRam00000001138348bc = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    bRam00000001138348bc = 0;
    if (cRam00000001138348b8 != '\x01') {
      bRam00000001138348bc = 0;
      return 0;
    }
    puVar4 = (undefined4 *)0x113834898;
    FUN_10a08fec0();
  }
  else {
    puVar4 = (undefined4 *)0x113834b18;
  }
  return *puVar4;
}



/* Entry: 10a08fec0; end: 10a08ffb7;  */

long FUN_10a08fec0(undefined8 *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [271];
  undefined1 uStack_31;
  
  pbVar1 = (byte *)((long)param_1 + 0x24);
  do {
    bVar3 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while ((bVar3 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x24) = 0;
    return (long)param_1 + 0x1c;
  }
  FUN_109febc44(auStack_150);
  FUN_10a002568(auStack_140,&UNK_10f636cdb,10);
  uVar2 = param_1[1];
  puVar6 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar6 = param_1;
  }
  FUN_10a002568(auStack_140,puVar6,uVar2);
  FUN_10a002568(auStack_140,&UNK_10f636ce6,0x13);
  FUN_10a05168c(&uStack_31,auStack_140);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a08ff98);
  (*pcVar7)();
}



/* Entry: 10a08ffb8; end: 10a0900c7;  */

undefined * FUN_10a08ffb8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    FUN_10a09efac(0x113834898,0);
  }
  else {
    (**(code **)(*param_1 + 0x70))(param_1,0x113834898);
  }
  puVar1 = &UNK_10f6352e8;
  _getenv();
  puVar2 = puVar1;
  if (((puVar1 != (undefined *)0x0) && (_strtol(), puVar1 != (undefined *)0x0)) &&
     (cRam0000000000000000 == '\0')) {
    uRam0000000113834b18 = SUB84(puVar2,0);
    uRam0000000113834b1c = 1;
  }
  FUN_10a08fe30();
  func_0x00010ae02ecc(0,puVar2);
  FUN_10ae030a0();
  ppuVar3 = &PTR_PTR_1132ffab8;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae030d8();
  FUN_10ae07cd4(ppuVar3,&PTR_PTR_1132ffab8);
  return puVar2;
}



/* Entry: 10a0900c8; end: 10a090327;  */

undefined * FUN_10a0900c8(long *param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    FUN_10a09efac(0x1137e9418,0);
  }
  else {
    (**(code **)(*param_1 + 0x70))(param_1,0x1137e9418);
  }
  puVar4 = &UNK_10f63530b;
  _getenv();
  if (((puVar4 != (undefined *)0x0) && (puVar9 = puVar4, _strtol(), puVar4 != (undefined *)0x0)) &&
     (cRam0000000000000000 == '\0')) {
    uRam00000001137e9410 = SUB84(puVar9,0);
    bRam00000001137e9414 = 1;
  }
  uVar8 = uRam00000001137e9410;
  if ((bRam00000001137e9414 & 1) == 0) {
    puVar1 = (undefined4 *)0x1137e9418;
    FUN_10a08fec0();
    uVar8 = *puVar1;
    if (((bRam00000001137e9414 != 1) && (FUN_10a08fec0(), bRam00000001137e9414 != 1)) &&
       (FUN_10a08fec0(), (bRam00000001137e9414 & 1) == 0)) {
      FUN_10a08fec0();
    }
  }
  func_0x00010ae02ecc(0,uVar8);
  FUN_10ae030a0();
  FUN_10ae030a0();
  FUN_10ae030a0();
  FUN_10ae030a0();
  ppuVar7 = &PTR_PTR_1132ffaf0;
  ppuVar6 = ppuVar7;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae030d8();
  FUN_10ae030d8();
  FUN_10ae030d8();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar6[0x13],ppuVar6[0xf],
                  ppuVar6 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar10 = ppuVar6[0x12];
    puVar9 = ppuVar6[0xb];
    uVar2 = 0;
    _clock_gettime_nsec_np();
    uVar3 = uVar2;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar6 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar6 + 0xe);
    uStack_8c0 = uVar3 & 0xffffffff;
    ppuStack_8b0 = ppuVar6 + 0x10;
    puVar4 = *ppuVar6;
    ppuVar7 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar9;
    puStack_8d8 = puVar10;
    uStack_8d0 = (ulong)(puVar10 != (undefined *)0x0);
    uStack_8c8 = uVar2;
    FUN_10ae0784c(puVar4,ppuVar7,&puStack_900,&puStack_918);
  }
  iVar5 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar4);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10a090328; end: 10a0903b7;  */

undefined4 FUN_10a090328(void)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined4 *puVar4;
  
  if ((bRam0000000113834b24 & 1) == 0) {
    do {
      bVar3 = bRam0000000113834924;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113834924,0x10);
      if (bVar2) {
        bRam0000000113834924 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    while ((bVar3 & 1) != 0) {
      do {
      } while ((bRam0000000113834924 & 1) != 0);
      do {
        bVar3 = bRam0000000113834924;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x113834924,0x10);
        if (bVar2) {
          bRam0000000113834924 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    bRam0000000113834924 = 0;
    if (cRam0000000113834920 != '\x01') {
      bRam0000000113834924 = 0;
      return 0;
    }
    puVar4 = (undefined4 *)0x113834900;
    FUN_10a08fec0();
  }
  else {
    puVar4 = (undefined4 *)0x113834b20;
  }
  return *puVar4;
}



/* Entry: 10a0903b8; end: 10a0904c7;  */

undefined * FUN_10a0903b8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    FUN_10a09efac(0x113834900,0);
  }
  else {
    (**(code **)(*param_1 + 0x70))(param_1,0x113834900);
  }
  puVar1 = &UNK_10f63536a;
  _getenv();
  puVar2 = puVar1;
  if (((puVar1 != (undefined *)0x0) && (_strtol(), puVar1 != (undefined *)0x0)) &&
     (cRam0000000000000000 == '\0')) {
    uRam0000000113834b20 = SUB84(puVar2,0);
    uRam0000000113834b24 = 1;
  }
  FUN_10a090328();
  func_0x00010ae02ecc(0,puVar2);
  FUN_10ae030a0();
  ppuVar3 = &PTR_PTR_1132ffb58;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae030d8();
  FUN_10ae07cd4(ppuVar3,&PTR_PTR_1132ffb58);
  return puVar2;
}



/* Entry: 10a0904c8; end: 10a090517;  */

/* WARNING: Removing unreachable block (ram,0x00010a090500) */

long FUN_10a0904c8(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x80))();
  (*(code *)**(undefined8 **)(param_1 + 0x40))((undefined8 *)(param_1 + 0x40));
  return param_1;
}



/* Entry: 10a090518; end: 10a0905a7;  */

byte * FUN_10a090518(byte *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  
  do {
    bVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while ((bVar1 & 1) != 0) {
    do {
    } while ((*param_1 & 1) != 0);
    do {
      bVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((param_1[8] & 1) == 0) {
    pcVar5 = *(code **)(param_1 + 0x78);
    iVar4 = (int)param_1 + 0x10;
    FUN_10a08fec0();
    (*pcVar5)();
    *(int *)(param_1 + 4) = iVar4;
    param_1[8] = 1;
  }
  *param_1 = 0;
  return param_1 + 4;
}



/* Entry: 10a0905a8; end: 10a09064f;  */

undefined4 FUN_10a0905a8(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  puVar2 = (undefined4 *)0x113834968;
  FUN_10a090650(0x113834968,*param_1);
  FUN_10a090518();
  uVar1 = *puVar2;
  func_0x00010ae02ecc(0,uVar1);
  FUN_10ae030a0();
  ppuVar3 = &PTR_PTR_1132ffba0;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae030d8();
  FUN_10ae07cd4(ppuVar3,&PTR_PTR_1132ffba0);
  return uVar1;
}



/* Entry: 10a090650; end: 10a0906e3;  */

void FUN_10a090650(byte *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  
  do {
    bVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while ((bVar1 & 1) != 0) {
    do {
    } while ((*param_1 & 1) != 0);
    do {
      bVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (param_1[8] == 1) {
    param_1[8] = 0;
  }
  if (param_2 == (long *)0x0) {
    FUN_10a09efac(param_1 + 0x10,0);
  }
  else {
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x10);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a0906e4; end: 10a09075f;  */

long FUN_10a0906e4(long param_1)

{
  long *plVar1;
  
  FUN_10a090760();
  func_0x00010a0a0334(param_1 + 0x90);
  func_0x00010a090804(param_1 + 0x38);
  func_0x00010a0a02dc(param_1 + 0x28);
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_10a0a02b4(param_1 + 0x10,0);
  return param_1;
}



/* Entry: 10a090760; end: 10a090a3b;  */

void FUN_10a090760(long param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar2 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10a3103d8();
  }
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 0x1e0) != 0)) {
    FUN_10a304924();
  }
  func_0x00010a090848();
  plVar2 = *(long **)(param_1 + 0x88);
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)*plVar2;
    while (plVar3 != plVar2 + 1) {
      plVar4 = (long *)plVar3[6];
      for (plVar5 = (long *)plVar3[5]; plVar5 != plVar4; plVar5 = plVar5 + 1) {
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 8))();
        }
      }
      plVar5 = (long *)plVar3[1];
      plVar4 = plVar3;
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar4[2];
          bVar1 = (long *)*plVar3 != plVar4;
          plVar4 = plVar3;
        } while (bVar1);
      }
      else {
        do {
          plVar3 = plVar5;
          plVar5 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
    }
    func_0x00010a0a03e4(plVar2,plVar2[1]);
    plVar2[1] = 0;
    plVar2[2] = 0;
    *plVar2 = (long)(plVar2 + 1);
    return;
  }
  return;
}



/* Entry: 10a090a3c; end: 10a090aeb;  */

void FUN_10a090a3c(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)*param_1;
  while (plVar2 != param_1 + 1) {
    plVar3 = (long *)plVar2[6];
    for (plVar4 = (long *)plVar2[5]; plVar4 != plVar3; plVar4 = plVar4 + 1) {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 8))();
      }
    }
    plVar4 = (long *)plVar2[1];
    plVar3 = plVar2;
    if ((long *)plVar2[1] == (long *)0x0) {
      do {
        plVar2 = (long *)plVar3[2];
        bVar1 = (long *)*plVar2 != plVar3;
        plVar3 = plVar2;
      } while (bVar1);
    }
    else {
      do {
        plVar2 = plVar4;
        plVar4 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
  }
  func_0x00010a0a03e4(param_1,param_1[1]);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)(param_1 + 1);
  return;
}



/* Entry: 10a090aec; end: 10a090b8b;  */

void FUN_10a090aec(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_40;
  long *plStack_38;
  
  FUN_10a090b8c(&uStack_40);
  param_1[1] = plStack_38;
  *param_1 = uStack_40;
  if (plStack_38 == (long *)0x0) {
    param_1[2] = param_2;
  }
  else {
    plVar1 = plStack_38 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_1[2] = param_2;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10a090b8c; end: 10a0911c7;  */

void FUN_10a090b8c(long *param_1,undefined8 *param_2,uint *param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint uVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  byte bVar15;
  long lVar16;
  undefined8 uStack_4d0;
  long *plStack_4c8;
  undefined1 uStack_4c0;
  undefined8 uStack_4bc;
  uint uStack_4b4;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long *plStack_78;
  long *plStack_70;
  
  uVar6 = param_3[0x83];
  uVar14 = ((ulong)uVar6 + 0x5009101315 ^ 0x13c6ef372) + 0x9e3779b9;
  uVar2 = *param_3;
  uVar12 = (ulong)uVar2;
  uVar14 = uVar12 + uVar14 * 0x40 + (uVar14 >> 2) + 0x9e3779b9 ^ uVar14;
  if (uVar2 != 0) {
    if (uVar2 - 9 < 0xfffffff8) goto LAB_10a091178;
    puVar11 = param_3 + 1;
    do {
      puVar7 = puVar11;
      FUN_10a09ce14();
      uVar14 = uVar14 + 0x9e3779b9;
      uVar14 = (long)puVar7 + (uVar14 >> 2) + uVar14 * 0x40 + 0x9e3779b9 ^ uVar14;
      puVar11 = puVar11 + 0xd;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (param_3[0x75] == 0) {
    if (param_3[0x82] != 0) {
      lVar9 = 0x1d8;
      goto LAB_10a090c54;
    }
  }
  else {
    lVar9 = 0x1a4;
LAB_10a090c54:
    lVar9 = (long)param_3 + lVar9;
    FUN_10a09ce14();
    uVar14 = uVar14 + 0x9e3779b9;
    uVar14 = uVar14 * 0x40 + 0x9e3779b9 + (uVar14 >> 2) + lVar9 ^ uVar14;
  }
  if ((1 < uVar6 - 0x8ca8) && (uVar6 != 0x8d40)) {
    func_0x00010b0ae4b8(&uStack_4d0,&UNK_10f63538f,0x37);
    func_0x000105687ee0(&uStack_4d0);
    goto LAB_10a091178;
  }
  lVar9 = 1;
  FUN_10a303694();
  uVar6 = param_3[0x83];
  if (uVar6 == 0x8ca8) {
    if (uVar14 == param_2[3]) {
      lVar9 = param_2[9];
      lVar10 = param_2[8];
      param_1[1] = param_2[9];
      *param_1 = lVar10;
      if (lVar9 == 0) {
        return;
      }
      plVar1 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      return;
    }
LAB_10a090d5c:
    uStack_4d0 = 0;
    plStack_4c8 = (long *)0x0;
    func_0x00010a09094c(param_2 + 4,&uStack_4d0);
    plVar1 = plStack_4c8;
    if (plStack_4c8 != (long *)0x0) {
      plVar8 = plStack_4c8 + 1;
      do {
        lVar10 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_4c8 + 0x10))(plStack_4c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    param_2[1] = 0;
  }
  else {
    if (uVar6 == 0x8ca9) {
      if (uVar14 == param_2[2]) {
        lVar9 = param_2[7];
        lVar10 = param_2[6];
        param_1[1] = param_2[7];
        *param_1 = lVar10;
        if (lVar9 == 0) {
          return;
        }
        plVar1 = (long *)(lVar9 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        return;
      }
      goto LAB_10a090d5c;
    }
    if (uVar6 == 0x8d40) {
      if (uVar14 == param_2[1]) {
        lVar9 = param_2[5];
        lVar10 = param_2[4];
        param_1[1] = param_2[5];
        *param_1 = lVar10;
        if (lVar9 == 0) {
          return;
        }
        plVar1 = (long *)(lVar9 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        return;
      }
      uStack_4d0 = 0;
      plStack_4c8 = (long *)0x0;
      func_0x00010a09094c(param_2 + 6,&uStack_4d0);
      plVar1 = plStack_4c8;
      if (plStack_4c8 != (long *)0x0) {
        plVar8 = plStack_4c8 + 1;
        do {
          lVar10 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_4c8 + 0x10))(plStack_4c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      uStack_4d0 = 0;
      plStack_4c8 = (long *)0x0;
      func_0x00010a09094c(param_2 + 8,&uStack_4d0);
      plVar1 = plStack_4c8;
      if (plStack_4c8 != (long *)0x0) {
        plVar8 = plStack_4c8 + 1;
        do {
          lVar10 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_4c8 + 0x10))(plStack_4c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      param_2[2] = 0;
      param_2[3] = 0;
    }
  }
  FUN_10a301f68(&uStack_4d0,lVar9);
  plVar8 = (long *)0x468;
  __Znwm();
  plVar13 = plVar8 + 1;
  *plVar13 = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110ba09f0;
  plVar1 = plVar8 + 3;
  func_0x00010a302110(plVar1,&uStack_4d0);
  plStack_78 = plVar1;
  plStack_70 = plVar8;
  FUN_10a30206c(&uStack_4d0);
  uVar6 = param_3[0x83];
  if (uVar6 == 0x8ca8) {
    lVar16 = 0x18;
    lVar10 = 0x40;
LAB_10a090ed4:
    FUN_10a0911c8((long)param_2 + lVar10,plVar1,plVar8);
    *(ulong *)((long)param_2 + lVar16) = uVar14;
    *(uint *)((long)plVar8 + 0x24) = uVar6;
    func_0x00010a3022a4(plVar1);
  }
  else {
    if (uVar6 == 0x8ca9) {
      lVar16 = 0x10;
      lVar10 = 0x30;
      goto LAB_10a090ed4;
    }
    if (uVar6 == 0x8d40) {
      lVar16 = 8;
      lVar10 = 0x20;
      goto LAB_10a090ed4;
    }
  }
  if (*param_3 != 0) {
    uVar14 = 0;
    puVar11 = param_3 + 5;
    do {
      if (uVar14 == 8) goto LAB_10a091178;
      plStack_4c8 = *(long **)(puVar11 + -2);
      uStack_4d0 = *(ulong *)(puVar11 + -4);
      uStack_4c0 = (undefined1)*puVar11;
      uStack_4bc = *(undefined8 *)(puVar11 + 1);
      uStack_4b4 = puVar11[3];
      uStack_4a8 = *(undefined8 *)(puVar11 + 6);
      uStack_4b0 = *(undefined8 *)(puVar11 + 4);
      FUN_10a302468(plVar1,&uStack_4d0,(uint)uVar14 & 0xff);
      uVar14 = uVar14 + 1;
      puVar11 = puVar11 + 0xd;
    } while (uVar14 < *param_3);
  }
  if (param_3[0x6a] != 0) {
    uStack_4d0 = CONCAT44(param_3[0x6a],param_3[0x69]);
    plStack_4c8 = *(long **)(param_3 + 0x6b);
    uStack_4c0 = (undefined1)param_3[0x6d];
    uStack_4bc = *(undefined8 *)(param_3 + 0x6e);
    uStack_4b4 = param_3[0x70];
    uStack_4a8 = *(undefined8 *)(param_3 + 0x73);
    uStack_4b0 = *(undefined8 *)(param_3 + 0x71);
    if ((param_3[0x74] == 0) || ((*(byte *)(**(long **)(*(long *)*param_2 + 8) + 0x960) & 1) == 0))
    {
      bVar15 = *(byte *)(**(long **)(*(long *)*param_2 + 8) + 0x95f) ^ 1;
    }
    else {
      bVar15 = 0;
    }
    uVar14 = (ulong)param_3[0x6e];
    func_0x000109255a90();
    if (((uint)uVar14 == 3) && ((bVar15 & 1) == 0)) {
      func_0x00010a302818(plVar1,&uStack_4d0);
    }
    else {
      if ((uVar14 & 1) != 0) {
        func_0x00010a302888(plVar1,&uStack_4d0);
      }
      if (1 < (uint)uVar14) {
        func_0x00010a3028e0(plVar1,&uStack_4d0);
      }
    }
  }
  if (param_3[0x77] != 0) {
    uStack_4d0 = CONCAT44(param_3[0x77],param_3[0x76]);
    plStack_4c8 = *(long **)(param_3 + 0x78);
    uStack_4c0 = (undefined1)param_3[0x7a];
    uStack_4b4 = param_3[0x7d];
    uStack_4bc = *(undefined8 *)(param_3 + 0x7b);
    uStack_4a8 = *(undefined8 *)(param_3 + 0x80);
    uStack_4b0 = *(undefined8 *)(param_3 + 0x7e);
    uVar6 = param_3[0x7b];
    func_0x000109255a90();
    if (1 < uVar6) {
      func_0x00010a3028e0(plVar1,&uStack_4d0);
    }
  }
  if (*(int *)(lVar9 + 0x1f0) != 2000) {
    uVar6 = param_3[0x83];
    if ((uVar6 == 0x8d40) || (uVar6 == 0x8ca9)) {
      if (*param_3 == 0) {
        uStack_4d0 = uStack_4d0 & 0xffffffff00000000;
        _glDrawBuffers(1,&uStack_4d0);
        if (*(int *)(lVar9 + 0x1f0) == 2000) {
          FUN_10a00946c(&UNK_10f64d233);
LAB_10a091178:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a09117c);
          (*pcVar5)();
        }
        _glReadBuffer(0);
      }
      else {
        func_0x00010a302a78(plVar1);
      }
    }
    else if (uVar6 == 0x8ca8) {
      _glReadBuffer(0x8ce0);
    }
  }
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar8;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = *plVar13 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar9 = *plVar13;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  return;
}



/* Entry: 10a0911c8; end: 10a09123b;  */

undefined8 * FUN_10a0911c8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a09123c; end: 10a093b1b;  */

void FUN_10a09123c(int *param_1,char *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  piVar4 = param_1 + 1;
  param_1[3] = 0;
  param_1[4] = 0;
  piVar4[0] = 0;
  piVar4[1] = 0;
  param_1[0x41] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)((long)param_1 + 0x106) = 0x101;
  iVar1 = *(int *)(param_2 + 4);
  if (*param_2 == '\x01') {
    iVar3 = 100;
    if (iVar1 != 0) {
      iVar3 = iVar1 / 10;
    }
    *(undefined4 *)((long)param_1 + 5) = 0x1010101;
  }
  else {
    iVar3 = 0x78;
    if (iVar1 != 0) {
      iVar3 = iVar1 / 10;
    }
  }
  *param_1 = iVar3;
  puStack_40 = &UNK_10f6353c7;
  uStack_38 = 0x20;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)piVar4 = 1;
  }
  puStack_40 = &UNK_10f6353e8;
  uStack_38 = 0x18;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 5) = 1;
  }
  puStack_40 = &UNK_10f635401;
  uStack_38 = 0x18;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 6) = 1;
  }
  puStack_40 = &DAT_10f6133bd;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 7) = 1;
  }
  puStack_40 = &DAT_10f6133d8;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  puStack_40 = &DAT_10f6133f3;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 9) = 1;
  }
  puStack_40 = &UNK_10f63541a;
  uStack_38 = 0x14;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 10) = 1;
  }
  puStack_40 = &DAT_10f61340b;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xb) = 1;
  }
  puStack_40 = &UNK_10f63542f;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 3) = 1;
  }
  puStack_40 = &UNK_10f63544a;
  uStack_38 = 0x15;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xd) = 1;
  }
  puStack_40 = &UNK_10f635460;
  uStack_38 = 0x13;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xe) = 1;
  }
  puStack_40 = &UNK_10f635474;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xf) = 1;
  }
  puStack_40 = &DAT_10f613423;
  uStack_38 = 0x14;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  puStack_40 = &DAT_10f613438;
  uStack_38 = 0x15;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x11) = 1;
  }
  puStack_40 = &DAT_10f61344e;
  uStack_38 = 0x22;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x12) = 1;
  }
  puStack_40 = &UNK_10f63548e;
  uStack_38 = 0x22;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x13) = 1;
  }
  puStack_40 = &DAT_10f613471;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 5) = 1;
  }
  puStack_40 = &UNK_10f6354b1;
  uStack_38 = 0x11;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x15) = 1;
  }
  puStack_40 = &DAT_10f61348b;
  uStack_38 = 0x14;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x16) = 1;
  }
  puStack_40 = &UNK_10f6354c3;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x17) = 1;
  }
  puStack_40 = &UNK_10f6354dd;
  uStack_38 = 0x12;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 6) = 1;
  }
  puStack_40 = &DAT_10f6134a0;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x19) = 1;
  }
  puStack_40 = &UNK_10f6354f0;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x1a) = 1;
  }
  puStack_40 = &UNK_10f63550a;
  uStack_38 = 0x20;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x1b) = 1;
  }
  puStack_40 = &UNK_10f63552b;
  uStack_38 = 0x14;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 7) = 1;
  }
  puStack_40 = &DAT_10f433091;
  uStack_38 = 0x15;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x1d) = 1;
  }
  puStack_40 = &DAT_10f613527;
  uStack_38 = 0x21;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x1e) = 1;
  }
  puStack_40 = &DAT_10f613549;
  uStack_38 = 0x1e;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x1f) = 1;
  }
  puStack_40 = &UNK_10f635540;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  puStack_40 = &UNK_10f635558;
  uStack_38 = 0x1e;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x21) = 1;
  }
  puStack_40 = &UNK_10f635577;
  uStack_38 = 0x16;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x22) = 1;
  }
  puStack_40 = &UNK_10f63558e;
  uStack_38 = 0x21;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x23) = 1;
  }
  puStack_40 = &UNK_10f6355b0;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  puStack_40 = &DAT_10f613568;
  uStack_38 = 0x20;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x25) = 1;
  }
  puStack_40 = &DAT_10f6134ce;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x26) = 1;
  }
  puStack_40 = &DAT_10f6134e6;
  uStack_38 = 0x1f;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x27) = 1;
  }
  puStack_40 = &DAT_10f613506;
  uStack_38 = 0x20;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 10) = 1;
  }
  puStack_40 = &UNK_10f6355ca;
  uStack_38 = 0xf;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x29) = 1;
  }
  puStack_40 = &DAT_10f613589;
  uStack_38 = 0x12;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x2a) = 1;
  }
  puStack_40 = &DAT_10f61359c;
  uStack_38 = 0x16;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x2b) = 1;
  }
  puStack_40 = &DAT_10f6135b3;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  puStack_40 = &UNK_10f6355da;
  uStack_38 = 0x18;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x2d) = 1;
  }
  puStack_40 = &UNK_10f6355f3;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x2e) = 1;
  }
  puStack_40 = &UNK_10f63560e;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x2f) = 1;
  }
  puStack_40 = &UNK_10f635626;
  uStack_38 = 0x1b;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  puStack_40 = &UNK_10f635642;
  uStack_38 = 0x1c;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x31) = 1;
  }
  puStack_40 = &UNK_10f63565f;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x32) = 1;
  }
  puStack_40 = &UNK_10f635677;
  uStack_38 = 0x16;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x33) = 1;
  }
  puStack_40 = &UNK_10f63568e;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  puStack_40 = &UNK_10f6356a6;
  uStack_38 = 0x20;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x35) = 1;
  }
  puStack_40 = &UNK_10f6356c7;
  uStack_38 = 0x1b;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x36) = 1;
  }
  puStack_40 = &DAT_10f6135cb;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x37) = 1;
  }
  puStack_40 = &UNK_10f6356e3;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  puStack_40 = &UNK_10f6356fe;
  uStack_38 = 0x24;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x39) = 1;
  }
  puStack_40 = &UNK_10f635723;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x3a) = 1;
  }
  puStack_40 = &DAT_10f6135e6;
  uStack_38 = 0x15;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x3b) = 1;
  }
  puStack_40 = &UNK_10f63573b;
  uStack_38 = 0x18;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  puStack_40 = &DAT_10f61361b;
  uStack_38 = 0x20;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x3d) = 1;
  }
  puStack_40 = &DAT_10f61363c;
  uStack_38 = 0x1d;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x3e) = 1;
  }
  puStack_40 = &DAT_10f61365a;
  uStack_38 = 0x14;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x3f) = 1;
  }
  puStack_40 = &DAT_10f61366f;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  puStack_40 = &DAT_10f61368a;
  uStack_38 = 0x13;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x41) = 1;
  }
  puStack_40 = &DAT_10f61369e;
  uStack_38 = 0x1d;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x42) = 1;
  }
  puStack_40 = &DAT_10f6136bc;
  uStack_38 = 0x18;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x43) = 1;
  }
  puStack_40 = &DAT_10f6136d5;
  uStack_38 = 0x1e;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  puStack_40 = &DAT_10f6136f4;
  uStack_38 = 0x18;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x45) = 1;
  }
  puStack_40 = &DAT_10f61370d;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x46) = 1;
  }
  puStack_40 = &DAT_10f60d8c9;
  uStack_38 = 0x1c;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x47) = 1;
  }
  puStack_40 = &DAT_10f613725;
  uStack_38 = 0x23;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  puStack_40 = &DAT_10f613762;
  uStack_38 = 0x23;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x49) = 1;
  }
  puStack_40 = &DAT_10f613786;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x4a) = 1;
  }
  puStack_40 = &DAT_10f6137a0;
  uStack_38 = 0x22;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x4b) = 1;
  }
  puStack_40 = &DAT_10f613803;
  uStack_38 = 0x1f;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  puStack_40 = &DAT_10f6137c3;
  uStack_38 = 0x1f;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x4d) = 1;
  }
  puStack_40 = &UNK_10f635754;
  uStack_38 = 0xd;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x4e) = 1;
  }
  puStack_40 = &UNK_10f635762;
  uStack_38 = 0x14;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x4f) = 1;
  }
  puStack_40 = &UNK_10f635777;
  uStack_38 = 0x15;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  puStack_40 = &DAT_10f613823;
  uStack_38 = 0x16;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x51) = 1;
  }
  puStack_40 = &DAT_10f61383a;
  uStack_38 = 0x1b;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x52) = 1;
  }
  puStack_40 = &UNK_10f63578d;
  uStack_38 = 0x18;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x53) = 1;
  }
  puStack_40 = &UNK_10f6357a6;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  puStack_40 = &UNK_10f6357be;
  uStack_38 = 0xb;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x55) = 1;
  }
  puStack_40 = &DAT_10f613856;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x56) = 1;
  }
  puStack_40 = &UNK_10f6357ca;
  uStack_38 = 0x1c;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x57) = 1;
  }
  puStack_40 = &UNK_10f6357e7;
  uStack_38 = 0x22;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  puStack_40 = &UNK_10f63580a;
  uStack_38 = 0x1b;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x59) = 1;
  }
  puStack_40 = &UNK_10f635826;
  uStack_38 = 0x1f;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x5a) = 1;
  }
  puStack_40 = &UNK_10f635846;
  uStack_38 = 0x1f;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x5b) = 1;
  }
  puStack_40 = &DAT_10f613871;
  uStack_38 = 0x1d;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x17) = 1;
  }
  puStack_40 = &UNK_10f635866;
  uStack_38 = 0x21;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x5d) = 1;
  }
  puStack_40 = &UNK_10f635888;
  uStack_38 = 0x1c;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x5e) = 1;
  }
  puStack_40 = &UNK_10f6358a5;
  uStack_38 = 0x14;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x5f) = 1;
  }
  puStack_40 = &DAT_10f61388f;
  uStack_38 = 0x15;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  puStack_40 = &UNK_10f6358ba;
  uStack_38 = 0x23;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x61) = 1;
  }
  puStack_40 = &DAT_10f6138a5;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x62) = 1;
  }
  puStack_40 = &UNK_10f6358de;
  uStack_38 = 0x1f;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 99) = 1;
  }
  puStack_40 = &UNK_10f6358fe;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  puStack_40 = &DAT_10f6138c0;
  uStack_38 = 0x1b;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x65) = 1;
  }
  puStack_40 = &DAT_10f6138dc;
  uStack_38 = 0x18;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x66) = 1;
  }
  puStack_40 = &UNK_10f635916;
  uStack_38 = 0x11;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x67) = 1;
  }
  puStack_40 = &UNK_10f635928;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
  puStack_40 = &UNK_10f635942;
  uStack_38 = 0x13;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x69) = 1;
  }
  puStack_40 = &UNK_10f635956;
  uStack_38 = 0x12;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x6a) = 1;
  }
  puStack_40 = &UNK_10f635969;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x6b) = 1;
  }
  puStack_40 = &UNK_10f635984;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x1b) = 1;
  }
  puStack_40 = &UNK_10f63599f;
  uStack_38 = 0x23;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x6d) = 1;
  }
  puStack_40 = &UNK_10f6359c3;
  uStack_38 = 0x28;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x6e) = 1;
  }
  puStack_40 = &DAT_10f61390e;
  uStack_38 = 0x1c;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x6f) = 1;
  }
  puStack_40 = &DAT_10f61392b;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  puStack_40 = &UNK_10f6359ec;
  uStack_38 = 0x15;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x71) = 1;
  }
  puStack_40 = &UNK_10f635a02;
  uStack_38 = 0x14;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x72) = 1;
  }
  puStack_40 = &UNK_10f635a17;
  uStack_38 = 0x22;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x73) = 1;
  }
  puStack_40 = &UNK_10f635a3a;
  uStack_38 = 0x21;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  puStack_40 = &DAT_10f613946;
  uStack_38 = 0x15;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x75) = 1;
  }
  puStack_40 = &DAT_10f5603f0;
  uStack_38 = 0x16;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x76) = 1;
  }
  puStack_40 = &DAT_10f560ff8;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x77) = 1;
  }
  puStack_40 = &UNK_10f635a5c;
  uStack_38 = 0x1e;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  puStack_40 = &UNK_10f432cb3;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x79) = 1;
  }
  puStack_40 = &UNK_10f560fb6;
  uStack_38 = 0x1e;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x7a) = 1;
  }
  puStack_40 = &DAT_10f613d73;
  uStack_38 = 0x22;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x7b) = 1;
  }
  puStack_40 = &UNK_10f635a7b;
  uStack_38 = 0x18;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x1f) = 1;
  }
  puStack_40 = &UNK_10f43327f;
  uStack_38 = 0x1b;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x7d) = 1;
  }
  puStack_40 = &UNK_10f635a94;
  uStack_38 = 0x14;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x7e) = 1;
  }
  puStack_40 = &UNK_10f635aa9;
  uStack_38 = 0x18;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x7f) = 1;
  }
  puStack_40 = &UNK_10f635ac2;
  uStack_38 = 0x12;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  puStack_40 = &UNK_10f635ad5;
  uStack_38 = 0x1e;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x81) = 1;
  }
  puStack_40 = &UNK_10f635af4;
  uStack_38 = 0x2a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x82) = 1;
  }
  puStack_40 = &UNK_10f635b1f;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x83) = 1;
  }
  puStack_40 = &UNK_10f635b37;
  uStack_38 = 0x1d;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  puStack_40 = &DAT_10f613dee;
  uStack_38 = 0x12;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x85) = 1;
  }
  puStack_40 = &UNK_10f635b55;
  uStack_38 = 0x14;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x86) = 1;
  }
  puStack_40 = &UNK_10f635b6a;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x87) = 1;
  }
  puStack_40 = &UNK_10f635b82;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  puStack_40 = &UNK_10f635b9d;
  uStack_38 = 0x25;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x89) = 1;
  }
  puStack_40 = &UNK_10f635bc3;
  uStack_38 = 0x13;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x8a) = 1;
  }
  puStack_40 = &UNK_10f635bd7;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x8b) = 1;
  }
  puStack_40 = &UNK_10f560fa2;
  uStack_38 = 0x13;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x23) = 1;
  }
  puStack_40 = &UNK_10f635bef;
  uStack_38 = 0x10;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x8d) = 1;
  }
  puStack_40 = &UNK_10f635c00;
  uStack_38 = 0x13;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x8e) = 1;
  }
  puStack_40 = &UNK_10f635c14;
  uStack_38 = 0x16;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x8f) = 1;
  }
  puStack_40 = &DAT_10f613e97;
  uStack_38 = 0x22;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  puStack_40 = &DAT_10f613eba;
  uStack_38 = 0x1e;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x91) = 1;
  }
  puStack_40 = &DAT_10f613efc;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x92) = 1;
  }
  puStack_40 = &DAT_10f613f2e;
  uStack_38 = 0x1f;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x93) = 1;
  }
  puStack_40 = &DAT_10f613f4e;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  puStack_40 = &UNK_10f635c2b;
  uStack_38 = 0xb;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x95) = 1;
  }
  puStack_40 = &UNK_10f635c37;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x96) = 1;
  }
  puStack_40 = &DAT_10f613f68;
  uStack_38 = 0x16;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x97) = 1;
  }
  puStack_40 = &DAT_10f613fb9;
  uStack_38 = 0x14;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x26) = 1;
  }
  puStack_40 = &UNK_10f635c4f;
  uStack_38 = 0x1c;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x99) = 1;
  }
  puStack_40 = &UNK_10f5601da;
  uStack_38 = 0x2b;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x9a) = 1;
  }
  puStack_40 = &UNK_10f635c6c;
  uStack_38 = 0x1f;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x9b) = 1;
  }
  puStack_40 = &UNK_10f635c8c;
  uStack_38 = 0x1f;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x27) = 1;
  }
  puStack_40 = &UNK_10f635cac;
  uStack_38 = 0x24;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x9d) = 1;
  }
  puStack_40 = &UNK_10f635cd1;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x9e) = 1;
  }
  puStack_40 = &UNK_10f560407;
  uStack_38 = 0x21;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x9f) = 1;
  }
  puStack_40 = &UNK_10f635ce9;
  uStack_38 = 0x1c;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  puStack_40 = &UNK_10f635d06;
  uStack_38 = 0x16;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xa1) = 1;
  }
  puStack_40 = &UNK_10f635d1d;
  uStack_38 = 0x1b;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xa2) = 1;
  }
  puStack_40 = &UNK_10f635d39;
  uStack_38 = 0x15;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xa3) = 1;
  }
  puStack_40 = &DAT_10f61401b;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  puStack_40 = &UNK_10f635d4f;
  uStack_38 = 0x1e;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xa5) = 1;
  }
  puStack_40 = &UNK_10f635d6e;
  uStack_38 = 0x14;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xa6) = 1;
  }
  puStack_40 = &UNK_10f635d83;
  uStack_38 = 0x13;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xa7) = 1;
  }
  puStack_40 = &UNK_10f635d97;
  uStack_38 = 0x16;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x2a) = 1;
  }
  puStack_40 = &UNK_10f635dae;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xa9) = 1;
  }
  puStack_40 = &UNK_10f635dc6;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xaa) = 1;
  }
  puStack_40 = &UNK_10f635de1;
  uStack_38 = 0x16;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xab) = 1;
  }
  puStack_40 = &UNK_10f635df8;
  uStack_38 = 0x22;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x2b) = 1;
  }
  puStack_40 = &UNK_10f635e1b;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xad) = 1;
  }
  puStack_40 = &UNK_10f635e35;
  uStack_38 = 0x12;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xae) = 1;
  }
  puStack_40 = &UNK_10f635e48;
  uStack_38 = 0x18;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xaf) = 1;
  }
  puStack_40 = &UNK_10f635e61;
  uStack_38 = 0x18;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  puStack_40 = &UNK_10f635e7a;
  uStack_38 = 0x11;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xb1) = 1;
  }
  puStack_40 = &DAT_10f613ad8;
  uStack_38 = 0x1d;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xb2) = 1;
  }
  puStack_40 = &DAT_10f613af6;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xb3) = 1;
  }
  puStack_40 = &DAT_10f613b69;
  uStack_38 = 0x1b;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  puStack_40 = &DAT_10f613bd1;
  uStack_38 = 0x15;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xb5) = 1;
  }
  puStack_40 = &DAT_10f613be7;
  uStack_38 = 0x1d;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xb6) = 1;
  }
  puStack_40 = &UNK_10f635e8c;
  uStack_38 = 0x13;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xb7) = 1;
  }
  puStack_40 = &DAT_10f613c31;
  uStack_38 = 0x15;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x2e) = 1;
  }
  puStack_40 = &DAT_10f614189;
  uStack_38 = 0x10;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xb9) = 1;
  }
  puStack_40 = &DAT_10f61419a;
  uStack_38 = 0x11;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xba) = 1;
  }
  puStack_40 = &UNK_10f635ea0;
  uStack_38 = 0x2f;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xbb) = 1;
  }
  puStack_40 = &UNK_10f635ed0;
  uStack_38 = 0x1d;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x2f) = 1;
  }
  puStack_40 = &UNK_10f635eee;
  uStack_38 = 0x27;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xbd) = 1;
  }
  puStack_40 = &UNK_10f635f16;
  uStack_38 = 0x1b;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xbe) = 1;
  }
  puStack_40 = &DAT_10f613c61;
  uStack_38 = 0x1c;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xbf) = 1;
  }
  puStack_40 = &UNK_10f635f32;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  puStack_40 = &UNK_10f635f4d;
  uStack_38 = 0x14;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xc1) = 1;
  }
  puStack_40 = &UNK_10f635f62;
  uStack_38 = 0x23;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xc2) = 1;
  }
  puStack_40 = &DAT_10f613ccb;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xc3) = 1;
  }
  puStack_40 = &DAT_10f613ce6;
  uStack_38 = 0x23;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  puStack_40 = &DAT_10f613d0a;
  uStack_38 = 0x1f;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xc5) = 1;
  }
  puStack_40 = &DAT_10f560348;
  uStack_38 = 0x1f;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xc6) = 1;
  }
  puStack_40 = &DAT_10f613d2a;
  uStack_38 = 0x2d;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 199) = 1;
  }
  puStack_40 = &UNK_10f635f86;
  uStack_38 = 0xe;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x32) = 1;
  }
  puStack_40 = &UNK_10f635f95;
  uStack_38 = 0x1e;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xc9) = 1;
  }
  puStack_40 = &UNK_10f635fb4;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xca) = 1;
  }
  puStack_40 = &UNK_10f635fcf;
  uStack_38 = 0x1b;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xcb) = 1;
  }
  puStack_40 = &UNK_10f635feb;
  uStack_38 = 0x16;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x33) = 1;
  }
  puStack_40 = &UNK_10f636002;
  uStack_38 = 0x18;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xcd) = 1;
  }
  puStack_40 = &UNK_10f63601b;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xce) = 1;
  }
  puStack_40 = &DAT_10f614035;
  uStack_38 = 0x23;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xcf) = 1;
  }
  puStack_40 = &UNK_10f636035;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  puStack_40 = &DAT_10f614059;
  uStack_38 = 0x23;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xd1) = 1;
  }
  puStack_40 = &DAT_10f61407d;
  uStack_38 = 0x22;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xd2) = 1;
  }
  puStack_40 = &DAT_10f486af7;
  uStack_38 = 0x1e;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xd3) = 1;
  }
  puStack_40 = &UNK_10f636050;
  uStack_38 = 0x27;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x35) = 1;
  }
  puStack_40 = &UNK_10f636078;
  uStack_38 = 0x11;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xd5) = 1;
  }
  puStack_40 = &UNK_10f63608a;
  uStack_38 = 0x16;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xd6) = 1;
  }
  puStack_40 = &UNK_10f6360a1;
  uStack_38 = 0x23;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xd7) = 1;
  }
  puStack_40 = &UNK_10f5601b6;
  uStack_38 = 0x23;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  puStack_40 = &UNK_10f6360c5;
  uStack_38 = 0x29;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xd9) = 1;
  }
  puStack_40 = &UNK_10f6360ef;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xda) = 1;
  }
  puStack_40 = &UNK_10f63610a;
  uStack_38 = 0x1f;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xdb) = 1;
  }
  puStack_40 = &UNK_10f63612a;
  uStack_38 = 0x13;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x37) = 1;
  }
  puStack_40 = &UNK_10f63613e;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xdd) = 1;
  }
  puStack_40 = &DAT_10f560328;
  uStack_38 = 0x1f;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xde) = 1;
  }
  puStack_40 = &DAT_10f613e51;
  uStack_38 = 0x2c;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xdf) = 1;
  }
  puStack_40 = &DAT_10f6140a0;
  uStack_38 = 0x20;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  puStack_40 = &UNK_10f636158;
  uStack_38 = 0x12;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xe1) = 1;
  }
  puStack_40 = &UNK_10f63616b;
  uStack_38 = 0x15;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xe2) = 1;
  }
  puStack_40 = &UNK_10f636181;
  uStack_38 = 0x26;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xe3) = 1;
  }
  puStack_40 = &DAT_10f6140c1;
  uStack_38 = 0x20;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x39) = 1;
  }
  puStack_40 = &UNK_10f6361a8;
  uStack_38 = 0x18;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xe5) = 1;
  }
  puStack_40 = &UNK_10f6361c1;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xe6) = 1;
  }
  puStack_40 = &UNK_10f6361db;
  uStack_38 = 0x10;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xe7) = 1;
  }
  puStack_40 = &UNK_10f6361ec;
  uStack_38 = 0x14;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x3a) = 1;
  }
  puStack_40 = &UNK_10f636201;
  uStack_38 = 0x12;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xe9) = 1;
  }
  puStack_40 = &UNK_10f636214;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xea) = 1;
  }
  puStack_40 = &DAT_10f614116;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xeb) = 1;
  }
  puStack_40 = &DAT_10f614130;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x3b) = 1;
  }
  puStack_40 = &UNK_10f63622c;
  uStack_38 = 0x15;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xed) = 1;
  }
  puStack_40 = &UNK_10f636242;
  uStack_38 = 0x1a;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xee) = 1;
  }
  puStack_40 = &UNK_10f63625d;
  uStack_38 = 0x17;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xef) = 1;
  }
  puStack_40 = &UNK_10f636275;
  uStack_38 = 0x13;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  puStack_40 = &UNK_10f636289;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xf1) = 1;
  }
  puStack_40 = &UNK_10f6362a3;
  uStack_38 = 0x20;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xf2) = 1;
  }
  puStack_40 = &UNK_10f6362c4;
  uStack_38 = 0x2c;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xf3) = 1;
  }
  puStack_40 = &UNK_10f6362f1;
  uStack_38 = 0x22;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x3d) = 1;
  }
  puStack_40 = &DAT_10f614173;
  uStack_38 = 0x15;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xf5) = 1;
  }
  puStack_40 = &UNK_10f636314;
  uStack_38 = 0x16;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xf6) = 1;
  }
  puStack_40 = &UNK_10f63632b;
  uStack_38 = 0x16;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xf7) = 1;
  }
  puStack_40 = &UNK_10f636342;
  uStack_38 = 0x20;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x3e) = 1;
  }
  puStack_40 = &UNK_10f636363;
  uStack_38 = 0x10;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xf9) = 1;
  }
  puStack_40 = &UNK_10f636374;
  uStack_38 = 0x13;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xfa) = 1;
  }
  puStack_40 = &UNK_10f5602cd;
  uStack_38 = 0x1d;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xfb) = 1;
  }
  puStack_40 = &DAT_10f613a59;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x3f) = 1;
  }
  puStack_40 = &DAT_10f613bbf;
  uStack_38 = 0x11;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xfd) = 1;
  }
  puStack_40 = &UNK_10f560d73;
  uStack_38 = 0x14;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xfe) = 1;
  }
  puStack_40 = &UNK_10f560f86;
  uStack_38 = 0x1b;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0xff) = 1;
  }
  puStack_40 = &UNK_10f560d88;
  uStack_38 = 0x19;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  puStack_40 = &UNK_10f636388;
  uStack_38 = 0x20;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x101) = 1;
  }
  puStack_40 = &UNK_10f560de2;
  uStack_38 = 0x23;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x102) = 1;
  }
  puStack_40 = &DAT_10f613aae;
  uStack_38 = 0x16;
  lVar2 = param_3;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (lVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x103) = 1;
  }
  puStack_40 = &UNK_10f6363a9;
  uStack_38 = 0x1f;
  func_0x0001086eb2c8(param_3,&puStack_40);
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 0x41) = 1;
  }
  return;
}



/* Entry: 10a093b1c; end: 10a093f4f;  */

undefined *** FUN_10a093b1c(undefined ***param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_68;
  undefined ***pppuStack_60;
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = (undefined **)*param_2;
  ppuVar7 = (undefined **)param_2[1];
  *param_1 = ppuVar6;
  param_1[1] = ppuVar7;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar7 = ppuVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar3) {
        *ppuVar7 = *ppuVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppuVar6 = (undefined **)*param_2;
  }
  (**(code **)(*ppuVar6 + 0x10))(ppuVar6,0,0);
  param_1[2] = ppuVar6;
  ppuVar7 = (undefined **)0x58;
  __Znwm();
  ppuVar7[1] = (undefined *)0x0;
  ppuVar7[2] = (undefined *)0x0;
  ppuVar6 = ppuVar7 + 3;
  *ppuVar7 = (undefined *)&PTR_FUN_110ba0818;
  __ZNSt3__115recursive_mutexC1Ev();
  pppuVar12 = param_1 + 5;
  *pppuVar12 = (undefined **)0x0;
  param_1[7] = (undefined **)0x32aaaba7;
  param_1[3] = ppuVar6;
  param_1[4] = ppuVar7;
  param_1[6] = (undefined **)0x0;
  param_1[0x11] = (undefined **)0x0;
  param_1[0x10] = (undefined **)0x0;
  param_1[0x13] = (undefined **)0x0;
  param_1[0x12] = (undefined **)0x0;
  param_1[9] = (undefined **)0x0;
  param_1[8] = (undefined **)0x0;
  param_1[0xb] = (undefined **)0x0;
  param_1[10] = (undefined **)0x0;
  param_1[0xd] = (undefined **)0x0;
  param_1[0xc] = (undefined **)0x0;
  *(undefined8 *)((long)param_1 + 0x72) = 0;
  *(undefined8 *)((long)param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  param_1[0x22] = (undefined **)0x0;
  *(undefined8 *)((long)param_1 + 0x35c) = 0;
  param_1[0x25] = (undefined **)0x0;
  param_1[0x68] = (undefined **)0x0;
  param_1[0x67] = (undefined **)0x0;
  param_1[0x6a] = (undefined **)0x0;
  param_1[0x69] = (undefined **)0x0;
  param_1[100] = (undefined **)0x0;
  param_1[99] = (undefined **)0x0;
  param_1[0x66] = (undefined **)0x0;
  param_1[0x65] = (undefined **)0x0;
  param_1[0x60] = (undefined **)0x0;
  param_1[0x5f] = (undefined **)0x0;
  param_1[0x62] = (undefined **)0x0;
  param_1[0x61] = (undefined **)0x0;
  param_1[0x5c] = (undefined **)0x0;
  param_1[0x5b] = (undefined **)0x0;
  param_1[0x5e] = (undefined **)0x0;
  param_1[0x5d] = (undefined **)0x0;
  param_1[0x58] = (undefined **)0x0;
  param_1[0x57] = (undefined **)0x0;
  param_1[0x5a] = (undefined **)0x0;
  param_1[0x59] = (undefined **)0x0;
  param_1[0x54] = (undefined **)0x0;
  param_1[0x53] = (undefined **)0x0;
  param_1[0x56] = (undefined **)0x0;
  param_1[0x55] = (undefined **)0x0;
  param_1[0x50] = (undefined **)0x0;
  param_1[0x4f] = (undefined **)0x0;
  param_1[0x52] = (undefined **)0x0;
  param_1[0x51] = (undefined **)0x0;
  param_1[0x4c] = (undefined **)0x0;
  param_1[0x4b] = (undefined **)0x0;
  param_1[0x4e] = (undefined **)0x0;
  param_1[0x4d] = (undefined **)0x0;
  param_1[0x48] = (undefined **)0x0;
  param_1[0x47] = (undefined **)0x0;
  param_1[0x4a] = (undefined **)0x0;
  param_1[0x49] = (undefined **)0x0;
  param_1[0x44] = (undefined **)0x0;
  param_1[0x43] = (undefined **)0x0;
  param_1[0x46] = (undefined **)0x0;
  param_1[0x45] = (undefined **)0x0;
  param_1[0x40] = (undefined **)0x0;
  param_1[0x3f] = (undefined **)0x0;
  param_1[0x42] = (undefined **)0x0;
  param_1[0x41] = (undefined **)0x0;
  param_1[0x3c] = (undefined **)0x0;
  param_1[0x3b] = (undefined **)0x0;
  param_1[0x3e] = (undefined **)0x0;
  param_1[0x3d] = (undefined **)0x0;
  param_1[0x38] = (undefined **)0x0;
  param_1[0x37] = (undefined **)0x0;
  param_1[0x3a] = (undefined **)0x0;
  param_1[0x39] = (undefined **)0x0;
  param_1[0x34] = (undefined **)0x0;
  param_1[0x33] = (undefined **)0x0;
  param_1[0x36] = (undefined **)0x0;
  param_1[0x35] = (undefined **)0x0;
  param_1[0x30] = (undefined **)0x0;
  param_1[0x2f] = (undefined **)0x0;
  param_1[0x32] = (undefined **)0x0;
  param_1[0x31] = (undefined **)0x0;
  param_1[0x2c] = (undefined **)0x0;
  param_1[0x2b] = (undefined **)0x0;
  param_1[0x2e] = (undefined **)0x0;
  param_1[0x2d] = (undefined **)0x0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1e] = (undefined **)0x0;
  param_1[0x1d] = (undefined **)0x0;
  param_1[0x20] = (undefined **)0x0;
  param_1[0x1f] = (undefined **)0x0;
  param_1[0x1a] = (undefined **)0x0;
  param_1[0x19] = (undefined **)0x0;
  param_1[0x1c] = (undefined **)0x0;
  param_1[0x1b] = (undefined **)0x0;
  param_1[0x16] = (undefined **)0x0;
  param_1[0x15] = (undefined **)0x0;
  param_1[0x18] = (undefined **)0x0;
  param_1[0x17] = (undefined **)0x0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  param_1[0x27] = (undefined **)0x0;
  param_1[0x28] = (undefined **)0x20;
  param_1[0x29] = (undefined **)(param_1 + 0x2b);
  uVar4 = uRam00000001137e9400;
  lVar9 = 0x158;
  do {
    *(undefined8 *)((long)param_1 + lVar9) = uVar4;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x358);
  param_1[0x2a] = (undefined **)0x0;
  param_1[0x26] = (undefined **)(param_1 + 0x28);
  param_1[0x24] = (undefined **)0x6;
  ppuVar7 = (undefined **)0x13b0;
  _malloc();
  if (ppuVar7 == (undefined **)0x0) {
    param_1[0x23] = (undefined **)0x0;
    param_1[0x24] = (undefined **)0x0;
  }
  else {
    ppuVar6 = ppuVar7 + 0x68;
    lVar9 = 6;
    do {
      ppuVar6[-1] = (undefined *)0x0;
      ppuVar6[-7] = (undefined *)0x0;
      ppuVar6[-8] = (undefined *)0x0;
      ppuVar6[-5] = (undefined *)0x0;
      ppuVar6[-6] = (undefined *)0x0;
      ppuVar6[-3] = (undefined *)0x0;
      ppuVar6[-4] = (undefined *)0x0;
      *(undefined4 *)(ppuVar6 + -2) = 0;
      *(undefined1 *)ppuVar6 = 1;
      ppuVar6 = ppuVar6 + 0x69;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    param_1[0x23] = ppuVar7;
    ppuVar7 = ppuVar7 + 0x68;
    lVar9 = 6;
    do {
      *(undefined1 *)ppuVar7 = 0;
      ppuVar7 = ppuVar7 + 0x69;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  ppuVar7 = (undefined **)0x10;
  _malloc();
  if (ppuVar7 == (undefined **)0x0) {
    param_1[0x6d] = (undefined **)0x0;
    param_1[0x6e] = (undefined **)0x10a0a0470;
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a093e78);
    (*pcVar5)();
  }
  *ppuVar7 = (undefined *)0x0;
  _semaphore_create(*(undefined4 *)PTR__mach_task_self__11034c5c8,ppuVar7 + 1,0,0);
  *(undefined4 *)((long)ppuVar7 + 0xc) = 10000;
  param_1[0x6d] = ppuVar7;
  param_1[0x6e] = (undefined **)0x10a0a0470;
  ppuStack_68 = &PTR_FUN_110ba0a40;
  pppuStack_60 = param_1;
  pppuStack_50 = &ppuStack_68;
  (**(code **)(*(long *)*param_2 + 0x108))(&ppuStack_80,(long *)*param_2,&ppuStack_68);
  ppuVar6 = ppuStack_78;
  ppuVar7 = ppuStack_80;
  ppuStack_80 = (undefined **)0x0;
  ppuStack_78 = (undefined **)0x0;
  ppuVar11 = param_1[0x1f];
  param_1[0x1f] = ppuVar6;
  param_1[0x1e] = ppuVar7;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar7 = ppuVar11 + 1;
    do {
      puVar10 = *ppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar3) {
        *ppuVar7 = puVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar10 == (undefined *)0x0) {
      (**(code **)(*ppuVar11 + 0x10))(ppuVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
    }
  }
  ppuVar7 = ppuStack_78;
  if (ppuStack_78 != (undefined **)0x0) {
    plVar1 = (long *)(ppuStack_78 + 1);
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)((long)*ppuStack_78 + 0x10))(ppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
    }
  }
  pppuVar8 = pppuStack_50;
  if (pppuStack_50 == &ppuStack_68) {
    lVar9 = 0x20;
LAB_10a093e04:
    (**(code **)((long)*pppuStack_50 + lVar9))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar9 = 0x28;
    goto LAB_10a093e04;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (pppuStack_50 == &ppuStack_68) {
    lVar9 = 0x20;
  }
  else {
    if (pppuStack_50 == (undefined ***)0x0) goto LAB_10a093ea8;
    lVar9 = 0x28;
  }
  (**(code **)((long)*pppuStack_50 + lVar9))();
LAB_10a093ea8:
  FUN_10a093f50(param_1 + 0x20);
  func_0x00010a0a049c(param_1 + 0x1e);
  FUN_10a093f88(param_1 + 0x10);
  __ZNSt3__15mutexD1Ev(ppuVar7);
  ppuVar7 = *pppuVar12;
  *pppuVar12 = (undefined **)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    (**(code **)(*ppuVar7 + 8))();
  }
  FUN_10a09a130(param_1 + 3);
  func_0x00010a09dbbc(param_1);
  __Unwind_Resume();
  ppuVar7 = pppuVar8[0x4d];
  pppuVar8[0x4d] = (undefined **)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    (*(code *)pppuVar8[0x4e])();
  }
  ppuVar6 = *pppuVar8;
  ppuVar7 = ppuVar6;
  while (ppuVar6 != (undefined **)0x0) {
    ppuVar6 = (undefined **)ppuVar7[1];
    if ((undefined8 *)ppuVar7[3] != (undefined8 *)0x0) {
      *(undefined8 *)ppuVar7[3] = 0;
    }
    (**(code **)*ppuVar7)(ppuVar7);
    _free(ppuVar7);
    ppuVar7 = ppuVar6 + -1;
  }
  ppuVar7 = pppuVar8[6];
  if (ppuVar7 != (undefined **)0x0) {
    for (ppuVar6 = (undefined **)ppuVar7[2]; ppuVar6 != (undefined **)0x0;
        ppuVar6 = (undefined **)ppuVar6[2]) {
      _free(ppuVar7);
      ppuVar7 = ppuVar6;
    }
  }
  ppuVar7 = pppuVar8[5];
  while (ppuVar7 != (undefined **)0x0) {
    ppuVar11 = (undefined **)ppuVar7[0x67];
    ppuVar6 = ppuVar7 + 0x68;
    ppuVar7 = ppuVar11;
    if (*(char *)ppuVar6 == '\x01') {
      _free();
    }
  }
  _free(pppuVar8[3]);
  return pppuVar8;
}



/* Entry: 10a093f50; end: 10a093f87;  */

long * FUN_10a093f50(long *param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = param_1[0x4d];
  param_1[0x4d] = 0;
  if (lVar3 != 0) {
    (*(code *)param_1[0x4e])();
  }
  puVar4 = (undefined8 *)*param_1;
  puVar2 = puVar4;
  while (puVar4 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar2[1];
    if ((undefined8 *)puVar2[3] != (undefined8 *)0x0) {
      *(undefined8 *)puVar2[3] = 0;
    }
    (**(code **)*puVar2)(puVar2);
    _free(puVar2);
    puVar2 = puVar4 + -1;
  }
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    for (lVar5 = *(long *)(lVar3 + 0x10); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
      _free(lVar3);
      lVar3 = lVar5;
    }
  }
  lVar3 = param_1[5];
  while (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + 0x338);
    pcVar1 = (char *)(lVar3 + 0x340);
    lVar3 = lVar5;
    if (*pcVar1 == '\x01') {
      _free();
    }
  }
  _free(param_1[3]);
  return param_1;
}



/* Entry: 10a093f88; end: 10a093fcf;  */

long * FUN_10a093f88(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  FUN_10a09ac6c(param_1 + 5);
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a09aef4(plVar1 + 2);
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



/* Entry: 10a093fd0; end: 10a09401b;  */

void FUN_10a093fd0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  __ZNSt3__115recursive_mutex4lockEv(uVar2);
  (**(code **)(*plVar1 + 0x40))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar2);
  return;
}



/* Entry: 10a09401c; end: 10a09418b;  */

void FUN_10a09401c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 auStack_68 [2];
  char cStack_58;
  char cStack_57;
  char cStack_56;
  char cStack_55;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char acStack_51 [9];
  undefined8 *puStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  auStack_68[0] = 0;
  uStack_70 = 0;
  cStack_58 = '\0';
  cStack_57 = '\0';
  cStack_56 = '\0';
  cStack_55 = '\0';
  cStack_54 = '\0';
  cStack_53 = '\0';
  cStack_52 = '\0';
  acStack_51[0] = '\0';
  auStack_68[1] = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  puVar5 = *(ulong **)(param_2 + 0x368);
  uVar6 = *puVar5;
joined_r0x00010a094064:
  if (0 < (long)uVar6) {
    do {
      puStack_48 = &uStack_b0;
      uVar1 = 0;
      if (3 < uVar6) {
        uVar1 = uVar6 - 4;
      }
      uVar7 = *puVar5;
      if (uVar7 == uVar6) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *puVar5 = uVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a0940ac;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar6 = uVar7;
      if ((long)uVar7 < 1) break;
    } while( true );
  }
LAB_10a09410c:
  puStack_48 = &uStack_b0;
  lVar8 = 0;
  do {
    if (acStack_51[lVar8] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_68 + lVar8));
    }
    lVar8 = lVar8 + -0x18;
  } while (lVar8 != -0x60);
  return;
LAB_10a0940ac:
  lVar8 = uVar6 - uVar1;
  if (lVar8 == 0) goto LAB_10a09410c;
  lVar10 = 0;
  do {
    lVar4 = param_2 + 0x100;
    FUN_10a0a10e8(lVar4,&puStack_48,lVar8 - lVar10);
    lVar10 = lVar4 + lVar10;
  } while (lVar10 != lVar8);
  lVar8 = lVar8 * 0x18;
  puVar9 = &uStack_b0;
  do {
    func_0x00010a09b018(param_1,puVar9);
    puVar9 = (undefined8 *)((long)puVar9 + 0x18);
    lVar8 = lVar8 + -0x18;
  } while (lVar8 != 0);
  puVar5 = *(ulong **)(param_2 + 0x368);
  uVar6 = *puVar5;
  goto joined_r0x00010a094064;
}



/* Entry: 10a09418c; end: 10a0942db;  */

long * FUN_10a09418c(long param_1)

{
  undefined1 **ppuVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined1 uStack_71;
  undefined1 **ppuStack_70;
  undefined1 *puStack_68;
  long lStack_40;
  undefined1 **ppuStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = (undefined1 *)&lStack_40;
  lStack_40 = param_1;
  if (*(long *)(param_1 + 0x28) != -1) {
    ppuStack_38 = &puStack_30;
    __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(param_1 + 0x28),&ppuStack_38,FUN_10a0a1728);
  }
  puStack_30 = &UNK_10f6363c9;
  uStack_28 = 0x2b;
  if (*(long *)(param_1 + 0x18) != 0) {
    return (long *)(param_1 + 0x18);
  }
  ppuVar1 = &puStack_30;
  FUN_10a0edfc4();
  if (ppuVar1[5] != (undefined1 *)0xffffffffffffffff) {
    puStack_68 = &uStack_71;
    ppuStack_70 = &puStack_68;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(ppuVar1 + 5,&ppuStack_70,0x10a0a1810);
  }
  plVar2 = (long *)ppuVar1[3];
  if (plVar2 == (long *)0x0) {
    FUN_109d1b124(extraout_x8);
  }
  else {
    FUN_10a30c104(extraout_x8);
  }
  return plVar2;
}



/* Entry: 10a0942dc; end: 10a09465b;  */

/* WARNING: Removing unreachable block (ram,0x00010a09458c) */
/* WARNING: Removing unreachable block (ram,0x00010a094590) */
/* WARNING: Removing unreachable block (ram,0x00010a094598) */
/* WARNING: Removing unreachable block (ram,0x00010a0945a0) */
/* WARNING: Removing unreachable block (ram,0x00010a0945a4) */

void FUN_10a0942dc(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long alStack_90 [2];
  long lStack_80;
  long lStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined8 *puStack_58;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x30))();
    if (plVar3 != (long *)0x0) {
      *(long **)(param_1 + 0xd8) = plVar3;
      func_0x000109374fe0();
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(long **)(param_1 + 0xe0) = plVar3;
    }
    func_0x000109375044(0);
    *(undefined4 *)(param_1 + 0xd0) = 1;
  }
  plVar3 = *(long **)(param_1 + 8);
  (**(code **)(*plVar3 + 0x30))();
  lVar6 = param_2[1];
  lVar5 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  lStack_c0 = param_3[1];
  lStack_c8 = *param_3;
  lStack_b8 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x00010a09a188(&lStack_b0,param_3 + 3);
  FUN_10a09a1d8(alStack_90,param_3 + 7);
  puVar1 = (undefined8 *)(param_1 + 0x18);
  plVar7 = *(long **)(param_1 + 0x28);
  puStack_58 = puVar1;
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x88;
    __Znwm();
    plVar7[3] = lVar6;
    plVar7[2] = lVar5;
    plVar7[1] = (long)plVar3;
    *plVar7 = param_1;
    plVar7[5] = lStack_c0;
    plVar7[4] = lStack_c8;
    plVar7[6] = lStack_b8;
    lStack_c0 = 0;
    lStack_b8 = 0;
    lStack_c8 = 0;
    FUN_10a0a1d0c(plVar7 + 7);
    lVar5 = plVar7[7];
    plVar7[7] = lStack_b0;
    lVar9 = plVar7[9];
    lVar8 = plVar7[8];
    plVar7[9] = lStack_a0;
    plVar7[8] = lStack_a8;
    lVar6 = plVar7[10];
    plVar7[10] = lStack_98;
    lStack_b0 = lVar5;
    lStack_a8 = lVar8;
    lStack_a0 = lVar9;
    lStack_98 = lVar6;
    FUN_10a09a1d8(plVar7 + 0xb,alStack_90);
    plVar7[0x10] = 0x10a0a1afc;
    pcStack_68 = FUN_10a0a1874;
    plStack_60 = plVar7;
    (**(code **)*puVar1)(puVar1,&pcStack_68);
  }
  else {
    lStack_70 = 0;
    (**(code **)(*plVar7 + 0x28))(plVar7,0,&lStack_70);
    if (lStack_70 != 0) {
      func_0x0001092af97c(&lStack_70);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0945e4);
      (*pcVar2)();
    }
    plVar4 = (long *)0x90;
    __Znwm();
    plVar4[3] = lVar6;
    plVar4[2] = lVar5;
    plVar4[1] = (long)plVar3;
    *plVar4 = param_1;
    plVar4[5] = lStack_c0;
    plVar4[4] = lStack_c8;
    plVar4[6] = lStack_b8;
    lStack_c0 = 0;
    lStack_b8 = 0;
    lStack_c8 = 0;
    FUN_10a0a1d0c(plVar4 + 7);
    lVar5 = plVar4[7];
    plVar4[7] = lStack_b0;
    lVar9 = plVar4[9];
    lVar8 = plVar4[8];
    plVar4[9] = lStack_a0;
    plVar4[8] = lStack_a8;
    lVar6 = plVar4[10];
    plVar4[10] = lStack_98;
    lStack_b0 = lVar5;
    lStack_a8 = lVar8;
    lStack_a0 = lVar9;
    lStack_98 = lVar6;
    FUN_10a09a1d8(plVar4 + 0xb,alStack_90);
    plVar4[0x10] = (long)FUN_10a0a1a90;
    plVar4[0x11] = (long)plVar7;
    pcStack_68 = FUN_10a0a1844;
    plStack_60 = plVar4;
    (**(code **)*puVar1)(puVar1,&pcStack_68);
    __ZNSt13exception_ptrD1Ev(&lStack_70);
  }
  lStack_70 = 0;
  __ZNSt13exception_ptrD1Ev(&lStack_70);
  if (lStack_80 != 0) {
    __ZdlPv(alStack_90[0] + -8);
  }
  pcStack_68 = (code *)&lStack_a8;
  FUN_10a09cf7c(&pcStack_68);
  pcStack_68 = (code *)&lStack_c8;
  func_0x00010a09d0e8(&pcStack_68);
  return;
}



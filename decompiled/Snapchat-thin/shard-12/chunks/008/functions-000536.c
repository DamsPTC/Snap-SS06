/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109895e04; end: 109895ef7;  */

long FUN_109895e04(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  puVar2 = param_2;
  FUN_109895c84(param_2,param_2 + 1);
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 != (undefined8 *)0x0) {
    uVar7 = (long)puVar6 - 1;
    if (((ulong)puVar6 & uVar7) == 0) {
      puVar8 = (undefined8 *)(uVar7 & (ulong)puVar2);
    }
    else {
      puVar8 = puVar2;
      if (puVar6 <= puVar2) {
        uVar1 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          uVar1 = (ulong)puVar2 / (ulong)puVar6;
        }
        puVar8 = (undefined8 *)((long)puVar2 - uVar1 * (long)puVar6);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)puVar8 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      do {
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        puVar5 = (undefined8 *)plVar4[1];
        if (puVar5 == puVar2) {
          uVar3 = plVar4[2];
          func_0x000107c31948(uVar3,*param_2);
          if ((int)uVar3 != 0 && plVar4[3] == param_2[1]) {
            return (long)plVar4;
          }
        }
        else {
          if (((ulong)puVar6 & uVar7) == 0) {
            puVar5 = (undefined8 *)((ulong)puVar5 & uVar7);
          }
          else if (puVar6 <= puVar5) {
            uVar1 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              uVar1 = (ulong)puVar5 / (ulong)puVar6;
            }
            puVar5 = (undefined8 *)((long)puVar5 - uVar1 * (long)puVar6);
          }
          if (puVar5 != puVar8) {
            return 0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109895ef8; end: 109895f17;  */

undefined8 FUN_109895ef8(void)

{
  return 0;
}



/* Entry: 109895f18; end: 109895f2b;  */

void FUN_109895f18(void)

{
  FUN_10988bd28(&UNK_10f582479);
  return;
}



/* Entry: 109895f2c; end: 109895f3f;  */

void FUN_109895f2c(void)

{
  return;
}



/* Entry: 109895f40; end: 1098960bf;  */

void FUN_109895f40(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  int aiStack_50 [2];
  undefined8 uStack_48;
  
  uVar2 = *param_2;
  FUN_109884c0c(&puStack_58,param_2 + 1,uVar2);
  plVar3 = (long *)*param_2;
  uVar1 = param_3;
  _strlen(param_3);
  (**(code **)(*plVar3 + 0xb8))(&puStack_60,plVar3,param_3,uVar1);
  (**(code **)(*plVar3 + 0x1a0))(aiStack_50,plVar3,&puStack_58,&puStack_60);
  *param_1 = uVar2;
  *(int *)(param_1 + 1) = aiStack_50[0];
  if (aiStack_50[0] == 3) {
    param_1[2] = uStack_48;
  }
  else if (aiStack_50[0] == 2) {
    *(undefined1 *)(param_1 + 2) = (undefined1)uStack_48;
  }
  else if (3 < aiStack_50[0]) {
    param_1[2] = uStack_48;
    uStack_48 = 0;
  }
  aiStack_50[0] = 0;
  if (puStack_60 != (undefined8 *)0x0) {
    (**(code **)*puStack_60)();
  }
  if (puStack_58 != (undefined8 *)0x0) {
    (**(code **)*puStack_58)();
  }
  return;
}



/* Entry: 1098960c0; end: 10989628b;  */

void FUN_1098960c0(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int aiStack_60 [2];
  long *plStack_58;
  
  bVar4 = *(byte *)(param_2 + 0x2d9) ^ 1;
  if ((*(byte *)(param_2 + 0x2d9) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x2d9) = 1;
  }
  lVar6 = param_2;
  __ZSt19uncaught_exceptionsv();
  uVar1 = *param_3;
  plVar8 = (long *)param_3[1];
  uVar2 = *(undefined8 *)param_3[3];
  uVar3 = ((undefined8 *)param_3[3])[1];
  aiStack_60[0] = 7;
  plVar7 = plVar8;
  (**(code **)(*plVar8 + 0x98))(plVar8,*(undefined8 *)param_3[2]);
  plStack_58 = plVar7;
  (**(code **)(*plVar8 + 0x2a8))(param_1,plVar8,uVar1,aiStack_60,uVar2,uVar3);
  if ((3 < aiStack_60[0]) && (plVar8 = plStack_58, plStack_58 != (long *)0x0)) {
    (**(code **)*plStack_58)();
  }
  iVar5 = (int)plVar8;
  __ZSt19uncaught_exceptionsv();
  if (iVar5 <= (int)lVar6) {
    if ((bVar4 & 1) == 0) {
      return;
    }
    (**(code **)(**(long **)(param_2 + 0x50) + 0x28))(*(long **)(param_2 + 0x50),0xffffffff);
    bVar4 = bVar4 & 1;
  }
  if (bVar4 != 0) {
    *(undefined1 *)(param_2 + 0x2d9) = 0;
  }
  return;
}



/* Entry: 10989628c; end: 1098962e3;  */

undefined8 * FUN_10989628c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  __ZSt19uncaught_exceptionsv();
  if (((int)puVar1 <= *(int *)(param_1 + 2)) && (*(char *)*param_1 == '\x01')) {
    (**(code **)(**(long **)(param_1[1] + 0x50) + 0x28))(*(long **)(param_1[1] + 0x50),0xffffffff);
  }
  return param_1;
}



/* Entry: 1098962e4; end: 10989638b;  */

void FUN_1098962e4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  FUN_1098849a4(aiStack_40,param_2,param_4);
  (**(code **)(*param_2 + 0x1d0))(param_2,param_1,param_3,aiStack_40);
  if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 10989638c; end: 109896673;  */

long FUN_10989638c(long param_1,undefined8 param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long **pplVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long ***ppplVar8;
  undefined **ppuVar9;
  long *plVar10;
  char *pcVar11;
  long **pplStack_b8;
  long ***ppplStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long ***ppplStack_98;
  long lStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplStack_b0 = (long ***)*param_3;
  lStack_90 = param_3[1];
  if (lStack_90 != 0) {
    plVar10 = (long *)(lStack_90 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_a8 = FUN_109896774;
  ppuStack_a0 = &PTR_DAT_110b17068;
  ppplStack_98 = ppplStack_b0;
  func_0x000109d18d1c(param_1,&UNK_10f58248f,0x13,&ppplStack_b0);
  FUN_1092ba41c(&ppplStack_b0);
  plVar10 = (long *)(param_1 + 0xb8);
  *plVar10 = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  if (param_4 < 4) {
    pcVar11 = (&PTR_DAT_110b17080)[param_4];
  }
  else {
    pcVar11 = "Unknown";
  }
  func_0x00010ae030a0(0,pcVar11);
  ppuVar9 = &PTR_PTR_1132e04b8;
  func_0x00010ae079a0();
  func_0x00010ae030d8();
  func_0x00010ae07cd4(ppuVar9,&PTR_PTR_1132e04b8);
  if (param_4 != 2) {
    if (param_4 == 3) {
      func_0x000109893efc(&pplStack_b8);
    }
    else if (param_4 == 1) {
      FUN_109893ee8(&pplStack_b8);
    }
    else {
      puVar1 = &UNK_10f5824b9;
      if (param_4 == 0) {
        puVar1 = &UNK_10f582407;
      }
      FUN_10988bd28(puVar1);
    }
    goto LAB_10989662c;
  }
  FUN_109892700(&pplStack_b8);
  uVar6 = 0x2e0;
  __Znwm(0x2e0);
  ppplStack_b0 = (long ***)pplStack_b8;
  FUN_10989b5ec();
  ppplVar8 = ppplStack_b0;
  ppplStack_b0 = (long ***)0x0;
  if (ppplVar8 != (long ***)0x0) {
    (*(code *)(*ppplVar8)[0x73])();
  }
  FUN_10989679c(plVar10,uVar6);
  plVar10 = *(long **)(*plVar10 + 0x50);
  (**(code **)(*plVar10 + 0x30))(&pplStack_b8,plVar10);
  puVar7 = (undefined8 *)0x18;
  __Znwm();
  pplVar4 = pplStack_b8;
  pplStack_b8 = (long **)0x0;
  ppplStack_b0 = (long ***)0x0;
  *puVar7 = plVar10;
  *(undefined4 *)(puVar7 + 1) = 7;
  puVar7[2] = pplVar4;
  FUN_1098967c4((undefined8 *)(param_1 + 0xc0));
  FUN_1098967c4(&ppplStack_b0,0);
  ppplVar8 = (long ***)pplStack_b8;
  if ((long ***)pplStack_b8 != (long ***)0x0) {
    (*(code *)**pplStack_b8)();
  }
  func_0x000109d1db10();
  if ((long **)*param_3 == *ppplVar8) {
LAB_1098965a0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  else {
    *(undefined1 *)(param_1 + 200) = 1;
    pplStack_b8 = *(long ***)(param_1 + 0xb8);
    if (*(uint *)(pplStack_b8 + 0x14) != 0xffffffff) {
      ppplStack_b0 = &pplStack_b8;
      (*(code *)(&PTR_FUN_110b17048)[*(uint *)(pplStack_b8 + 0x14)])
                (&ppplStack_b0,pplStack_b8 + 0xb);
      goto LAB_1098965a0;
    }
  }
  FUN_1092612e0();
LAB_10989662c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109896630);
  (*pcVar5)();
}



/* Entry: 109896674; end: 10989670b;  */

undefined8 * FUN_109896674(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plStack_38;
  long *in_stack_ffffffffffffffd8;
  
  func_0x000109d1918c(&stack0xffffffffffffffd8);
  func_0x000109d1a244(&stack0xffffffffffffffd8);
  if (in_stack_ffffffffffffffd8 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffffd8 + 1);
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
        (**(code **)(*in_stack_ffffffffffffffd8 + 8))();
      }
    }
  }
  FUN_1098967c4(param_1 + 0x18,0);
  FUN_10989679c(param_1 + 0x17,0);
  *param_1 = &PTR_DAT_110b3ebc8;
  param_1[3] = &PTR_DAT_110b3ec18;
  *(undefined1 *)(param_1 + 6) = 1;
  lVar4 = param_1[8];
  plVar7 = (long *)(lVar4 + 0x10);
  do {
    lVar6 = *plVar7;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        func_0x000109d1b4dc(lVar4 + 0x18);
        goto code_r0x000109d18fb0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
code_r0x000109d18fb0:
      plVar7 = (long *)param_1[9];
      plStack_38 = plVar7;
      if (plVar7 == (long *)0x0) {
        func_0x000109d1a244(&plStack_38);
      }
      else {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        func_0x000109d1a244(&plStack_38);
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
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      if (*(char *)((long)param_1 + 0xb7) < '\0') {
        __ZdlPv(param_1[0x14]);
      }
      FUN_1092ba41c(param_1 + 0xb);
      if (param_1[10] != 0) {
        FUN_1092b4274();
      }
      plVar7 = (long *)param_1[9];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
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
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)param_1[8];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 0x200000000;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 >> 0x21 == 1) {
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
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)param_1[7];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
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
          (**(code **)(*plVar7 + 0x10))(plVar7);
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
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      return param_1;
    }
  } while( true );
}



/* Entry: 10989670c; end: 10989671b;  */

void FUN_10989670c(void)

{
  return;
}



/* Entry: 10989671c; end: 109896773;  */

long FUN_10989671c(long param_1)

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



/* Entry: 109896774; end: 10989679b;  */

void FUN_109896774(void)

{
  return;
}



/* Entry: 10989679c; end: 1098967c3;  */

void FUN_10989679c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10989bb4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1098967c4; end: 10989695b;  */

void FUN_1098967c4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((3 < *(int *)(lVar1 + 8)) && (*(undefined8 **)(lVar1 + 0x10) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(lVar1 + 0x10))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10989695c; end: 109896b77;  */

void FUN_10989695c(long ****param_1,long ****param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  code *pcVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  undefined8 *puVar12;
  undefined8 **ppuVar13;
  undefined8 *extraout_x8;
  long lVar14;
  long ***ppplVar15;
  int aiStack_258 [2];
  undefined8 **ppuStack_250;
  long ***ppplStack_248;
  int iStack_240;
  undefined8 **ppuStack_238;
  undefined8 **ppuStack_230;
  undefined8 uStack_228;
  undefined7 uStack_220;
  char cStack_219;
  undefined8 uStack_218;
  undefined8 *apuStack_210 [7];
  long lStack_1d8;
  undefined **ppuStack_1d0;
  undefined ***pppuStack_1c8;
  long *plStack_1c0;
  long ***ppplStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined4 *puStack_198;
  undefined4 uStack_18c;
  undefined4 **ppuStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  char cStack_149;
  long *plStack_140;
  undefined ***pppuStack_138;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long ***appplStack_e8 [2];
  char cStack_d1;
  long ***ppplStack_d0;
  long **pplStack_c8;
  long **pplStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long ***ppplStack_a8;
  code *pcStack_78;
  undefined **ppuStack_70;
  long ***ppplStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplVar8 = param_1;
  if (*(char *)(param_3 + 0x47) < '\0') {
    pppplVar10 = *(long *****)(param_3 + 0x30);
    func_0x000107c3192c(param_1,pppplVar10,*(undefined8 *)(param_3 + 0x38));
  }
  else {
    ppplVar15 = *(long ****)(param_3 + 0x30);
    param_1[1] = *(long ****)(param_3 + 0x38);
    *param_1 = ppplVar15;
    param_1[2] = *(long ****)(param_3 + 0x40);
    pppplVar10 = param_2;
  }
  uVar2 = *(ulong *)(param_3 + 0x50);
  if (-1 < (char)*(byte *)(param_3 + 0x5f)) {
    uVar2 = (ulong)*(byte *)(param_3 + 0x5f);
  }
  if (uVar2 != 0) {
    (*(code *)(*param_2)[0xb])();
    uVar2 = *(ulong *)(param_3 + 0x50);
    puVar12 = *(undefined8 **)(param_3 + 0x48);
    if (-1 < (char)*(byte *)(param_3 + 0x5f)) {
      uVar2 = (ulong)*(byte *)(param_3 + 0x5f);
      puVar12 = (undefined8 *)(param_3 + 0x48);
    }
    pcStack_78 = FUN_10989728c;
    ppuStack_70 = &PTR_DAT_110b170c0;
    pcStack_b8 = FUN_109897348;
    ppuStack_b0 = &PTR_FUN_110b170d8;
    ppplStack_a8 = (long ***)param_2;
    ppplStack_68 = (long ***)param_2;
    FUN_109897168(appplStack_e8,puVar12,uVar2,&pcStack_78,&pcStack_b8);
    (*(code *)*ppuStack_b0)(&ppuStack_b0);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    pppplVar8 = appplStack_e8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (pppplVar8,0,&DAT_10f68f57e,1);
    pplStack_c8 = (long **)pppplVar8[1];
    ppplStack_d0 = *pppplVar8;
    pplStack_c0 = (long **)pppplVar8[2];
    pppplVar8[1] = (long ***)0x0;
    pppplVar8[2] = (long ***)0x0;
    *pppplVar8 = (long ***)0x0;
    ppplVar15 = (long ***)pplStack_c8;
    pppplVar10 = (long ****)ppplStack_d0;
    if (-1 < (long)pplStack_c0) {
      ppplVar15 = (long ***)((ulong)pplStack_c0 >> 0x38);
      pppplVar10 = &ppplStack_d0;
    }
    pppplVar8 = param_1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppplVar10,ppplVar15);
    if ((long)pplStack_c0 < 0) {
      pppplVar8 = (long ****)ppplStack_d0;
      __ZdlPv();
    }
    if (cStack_d1 < '\0') {
      pppplVar8 = (long ****)appplStack_e8[0];
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((long)pplStack_c0 < 0) {
    __ZdlPv(ppplStack_d0);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(appplStack_e8[0]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  __Unwind_Resume();
  pcStack_f8 = FUN_109896b78;
  pppplVar9 = pppplVar10;
  puStack_100 = &stack0xfffffffffffffff0;
  ___dynamic_cast(pppplVar10,&PTR_DAT_110b164b8,&PTR_DAT_110b164e0,0);
  if (pppplVar9 == (long ****)0x0) {
    (*(code *)(*pppplVar10)[2])();
    FUN_10988bd28();
    pppplVar9 = pppplVar10;
  }
  (*(code *)(*pppplVar8)[0xb])(pppplVar8);
  FUN_109896ca4(&ppuStack_168);
  ppuVar6 = ppuStack_160;
  ppuVar5 = ppuStack_168;
  pppuStack_138 = &ppuStack_168;
  FUN_1098973f4(&pppuStack_138);
  if (ppuStack_168 == ppuVar6) {
    FUN_109896cfc(&ppuStack_168,pppplVar8,pppplVar9);
    FUN_109897b40(&ppuStack_168);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x109896c24);
    (*pcVar7)();
  }
  FUN_1098976a8();
  ppuStack_168 = &PTR_FUN_110b17138;
  if (plStack_140 != (long *)0x0) {
    plVar1 = plStack_140 + 1;
    do {
      lVar14 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_140);
    }
  }
  ppuStack_168 = &PTR_FUN_110b17178;
  if (cStack_149 < '\0') {
    __ZdlPv(ppuStack_160);
  }
  __ZNSt9exceptionD2Ev(&ppuStack_168);
  pppplVar10 = pppplVar8;
  __Unwind_Resume();
  pcStack_178 = FUN_109896ca4;
  uStack_18c = SUB84(pppplVar9,0);
  puStack_198 = &uStack_18c;
  ppuStack_180 = &puStack_100;
  if (*(uint *)(pppplVar10 + 0x14) == 0xffffffff) {
    FUN_1092612e0();
    ppuStack_1d0 = ppuVar5;
    plStack_1c0 = plStack_140;
    pcStack_1a8 = FUN_109896cfc;
    lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppplVar11 = pppplVar10;
    pppuStack_1c8 = &ppuStack_168;
    ppplStack_1b8 = (long ***)pppplVar8;
    pppuStack_1b0 = &ppuStack_180;
    (*(code *)(*pppplVar10)[0xb])();
    FUN_10989695c(&ppuStack_230,pppplVar10,pppplVar9);
    FUN_1098849a4(aiStack_258,pppplVar10,pppplVar9[4]);
    iStack_240 = aiStack_258[0];
    if (aiStack_258[0] == 3) {
      ppuStack_238 = ppuStack_250;
    }
    else if (aiStack_258[0] == 2) {
      ppuStack_238 = (undefined8 **)CONCAT71(ppuStack_238._1_7_,ppuStack_250._0_1_);
    }
    else if (3 < aiStack_258[0]) {
      ppuStack_238 = ppuStack_250;
      ppuStack_250 = (undefined8 **)0x0;
    }
    aiStack_258[0] = 0;
    ppplStack_248 = (long ***)pppplVar10;
    FUN_109887e98(&uStack_218,pppplVar11[0x1f],&ppplStack_248);
    *extraout_x8 = &PTR_FUN_110b17178;
    if (cStack_219 < '\0') {
      func_0x000107c3192c(extraout_x8 + 1,ppuStack_230,uStack_228);
    }
    else {
      extraout_x8[2] = uStack_228;
      extraout_x8[1] = ppuStack_230;
      extraout_x8[3] = CONCAT17(cStack_219,uStack_220);
    }
    *extraout_x8 = &PTR_FUN_110b17138;
    puVar12 = (undefined8 *)0x58;
    __Znwm();
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_FUN_110b171b8;
    puVar12[3] = uStack_218;
    (*(code *)apuStack_210[0][2])(puVar12 + 4,apuStack_210);
    extraout_x8[4] = puVar12 + 3;
    extraout_x8[5] = puVar12;
    ppuVar13 = apuStack_210;
    (*(code *)*apuStack_210[0])();
    if ((3 < iStack_240) && (ppuVar13 = ppuStack_238, ppuStack_238 != (undefined8 **)0x0)) {
      (*(code *)**ppuStack_238)();
    }
    if ((3 < aiStack_258[0]) && (ppuVar13 = ppuStack_250, ppuStack_250 != (undefined8 **)0x0)) {
      (*(code *)**ppuStack_250)();
    }
    if (cStack_219 < '\0') {
      ppuVar13 = ppuStack_230;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
      ___stack_chk_fail();
      __ZNSt9exceptionD2Ev(extraout_x8);
      (*(code *)*apuStack_210[0])(apuStack_210);
      if ((3 < iStack_240) && (ppuStack_238 != (undefined8 **)0x0)) {
        (*(code *)**ppuStack_238)();
      }
      if ((3 < aiStack_258[0]) && (ppuStack_250 != (undefined8 **)0x0)) {
        (*(code *)**ppuStack_250)();
      }
      if (cStack_219 < '\0') {
        __ZdlPv(ppuStack_230);
      }
      __Unwind_Resume();
      *ppuVar13 = &PTR_FUN_110b17138;
      FUN_109897538(ppuVar13 + 4);
      *ppuVar13 = &PTR_FUN_110b17178;
      if (*(char *)((long)ppuVar13 + 0x1f) < '\0') {
        __ZdlPv(ppuVar13[1]);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(ppuVar13);
      return;
    }
    return;
  }
  ppuStack_188 = &puStack_198;
  (*(code *)(&PTR_DAT_110b170f0)[*(uint *)(pppplVar10 + 0x14)])(&ppuStack_188,pppplVar10 + 0xb);
  return;
}



/* Entry: 109896b78; end: 109896ca3;  */

void FUN_109896b78(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 *extraout_x8;
  long lVar11;
  int aiStack_168 [2];
  undefined8 **ppuStack_160;
  long *plStack_158;
  int iStack_150;
  undefined8 **ppuStack_148;
  undefined8 **ppuStack_140;
  undefined8 uStack_138;
  undefined7 uStack_130;
  char cStack_129;
  undefined8 uStack_128;
  undefined8 *apuStack_120 [7];
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined4 *puStack_a8;
  undefined4 uStack_9c;
  undefined4 **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  char cStack_59;
  long *plStack_50;
  undefined ***pppuStack_48;
  
  plVar6 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110b164b8,&PTR_DAT_110b164e0,0);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*param_2 + 0x10))();
    FUN_10988bd28();
    plVar6 = param_2;
  }
  (**(code **)(*param_1 + 0x58))(param_1);
  FUN_109896ca4(&ppuStack_78);
  ppuVar4 = ppuStack_70;
  ppuVar3 = ppuStack_78;
  pppuStack_48 = &ppuStack_78;
  FUN_1098973f4(&pppuStack_48);
  if (ppuStack_78 == ppuVar4) {
    FUN_109896cfc(&ppuStack_78,param_1,plVar6);
    FUN_109897b40(&ppuStack_78);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109896c24);
    (*pcVar5)();
  }
  FUN_1098976a8();
  ppuStack_78 = &PTR_FUN_110b17138;
  if (plStack_50 != (long *)0x0) {
    plVar7 = plStack_50 + 1;
    do {
      lVar11 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
    }
  }
  ppuStack_78 = &PTR_FUN_110b17178;
  if (cStack_59 < '\0') {
    __ZdlPv(ppuStack_70);
  }
  __ZNSt9exceptionD2Ev(&ppuStack_78);
  plVar7 = param_1;
  __Unwind_Resume();
  pcStack_88 = FUN_109896ca4;
  ppuStack_c0 = &puStack_90;
  uStack_9c = SUB84(plVar6,0);
  puStack_a8 = &uStack_9c;
  puStack_90 = &stack0xfffffffffffffff0;
  if (*(uint *)(plVar7 + 0x14) != 0xffffffff) {
    ppuStack_98 = &puStack_a8;
    (*(code *)(&PTR_DAT_110b170f0)[*(uint *)(plVar7 + 0x14)])(&ppuStack_98,plVar7 + 0xb);
    return;
  }
  FUN_1092612e0();
  ppuStack_e0 = ppuVar3;
  plStack_d0 = plStack_50;
  pcStack_b8 = FUN_109896cfc;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar7;
  pppuStack_d8 = &ppuStack_78;
  plStack_c8 = param_1;
  (**(code **)(*plVar7 + 0x58))();
  FUN_10989695c(&ppuStack_140,plVar7,plVar6);
  FUN_1098849a4(aiStack_168,plVar7,plVar6[4]);
  iStack_150 = aiStack_168[0];
  if (aiStack_168[0] == 3) {
    ppuStack_148 = ppuStack_160;
  }
  else if (aiStack_168[0] == 2) {
    ppuStack_148 = (undefined8 **)CONCAT71(ppuStack_148._1_7_,ppuStack_160._0_1_);
  }
  else if (3 < aiStack_168[0]) {
    ppuStack_148 = ppuStack_160;
    ppuStack_160 = (undefined8 **)0x0;
  }
  aiStack_168[0] = 0;
  plStack_158 = plVar7;
  FUN_109887e98(&uStack_128,plVar8[0x1f],&plStack_158);
  *extraout_x8 = &PTR_FUN_110b17178;
  if (cStack_129 < '\0') {
    func_0x000107c3192c(extraout_x8 + 1,ppuStack_140,uStack_138);
  }
  else {
    extraout_x8[2] = uStack_138;
    extraout_x8[1] = ppuStack_140;
    extraout_x8[3] = CONCAT17(cStack_129,uStack_130);
  }
  *extraout_x8 = &PTR_FUN_110b17138;
  puVar9 = (undefined8 *)0x58;
  __Znwm();
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110b171b8;
  puVar9[3] = uStack_128;
  (*(code *)apuStack_120[0][2])(puVar9 + 4,apuStack_120);
  extraout_x8[4] = puVar9 + 3;
  extraout_x8[5] = puVar9;
  ppuVar10 = apuStack_120;
  (*(code *)*apuStack_120[0])();
  if ((3 < iStack_150) && (ppuVar10 = ppuStack_148, ppuStack_148 != (undefined8 **)0x0)) {
    (*(code *)**ppuStack_148)();
  }
  if ((3 < aiStack_168[0]) && (ppuVar10 = ppuStack_160, ppuStack_160 != (undefined8 **)0x0)) {
    (*(code *)**ppuStack_160)();
  }
  if (cStack_129 < '\0') {
    ppuVar10 = ppuStack_140;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt9exceptionD2Ev(extraout_x8);
  (*(code *)*apuStack_120[0])(apuStack_120);
  if ((3 < iStack_150) && (ppuStack_148 != (undefined8 **)0x0)) {
    (*(code *)**ppuStack_148)();
  }
  if ((3 < aiStack_168[0]) && (ppuStack_160 != (undefined8 **)0x0)) {
    (*(code *)**ppuStack_160)();
  }
  if (cStack_129 < '\0') {
    __ZdlPv(ppuStack_140);
  }
  __Unwind_Resume();
  *ppuVar10 = &PTR_FUN_110b17138;
  FUN_109897538(ppuVar10 + 4);
  *ppuVar10 = &PTR_FUN_110b17178;
  if (*(char *)((long)ppuVar10 + 0x1f) < '\0') {
    __ZdlPv(ppuVar10[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(ppuVar10);
  return;
}



/* Entry: 109896ca4; end: 109896cfb;  */

void FUN_109896ca4(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 *extraout_x8;
  int aiStack_e8 [2];
  undefined8 **ppuStack_e0;
  long *plStack_d8;
  int iStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined7 uStack_b0;
  char cStack_a9;
  undefined8 uStack_a8;
  undefined8 *apuStack_a0 [7];
  long lStack_68;
  undefined4 *puStack_28;
  undefined4 uStack_1c;
  undefined4 **ppuStack_18;
  
  uStack_1c = (undefined4)param_2;
  puStack_28 = &uStack_1c;
  if (*(uint *)(param_1 + 0x14) != 0xffffffff) {
    ppuStack_18 = &puStack_28;
    (*(code *)(&PTR_DAT_110b170f0)[*(uint *)(param_1 + 0x14)])(&ppuStack_18,param_1 + 0xb);
    return;
  }
  FUN_1092612e0();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x58))();
  FUN_10989695c(&ppuStack_c0,param_1,param_2);
  FUN_1098849a4(aiStack_e8,param_1,*(undefined8 *)(param_2 + 0x20));
  iStack_d0 = aiStack_e8[0];
  if (aiStack_e8[0] == 3) {
    ppuStack_c8 = ppuStack_e0;
  }
  else if (aiStack_e8[0] == 2) {
    ppuStack_c8 = (undefined8 **)CONCAT71(ppuStack_c8._1_7_,ppuStack_e0._0_1_);
  }
  else if (3 < aiStack_e8[0]) {
    ppuStack_c8 = ppuStack_e0;
    ppuStack_e0 = (undefined8 **)0x0;
  }
  aiStack_e8[0] = 0;
  plStack_d8 = param_1;
  FUN_109887e98(&uStack_a8,plVar1[0x1f],&plStack_d8);
  *extraout_x8 = &PTR_FUN_110b17178;
  if (cStack_a9 < '\0') {
    func_0x000107c3192c(extraout_x8 + 1,ppuStack_c0,uStack_b8);
  }
  else {
    extraout_x8[2] = uStack_b8;
    extraout_x8[1] = ppuStack_c0;
    extraout_x8[3] = CONCAT17(cStack_a9,uStack_b0);
  }
  *extraout_x8 = &PTR_FUN_110b17138;
  puVar2 = (undefined8 *)0x58;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110b171b8;
  puVar2[3] = uStack_a8;
  (*(code *)apuStack_a0[0][2])(puVar2 + 4,apuStack_a0);
  extraout_x8[4] = puVar2 + 3;
  extraout_x8[5] = puVar2;
  ppuVar3 = apuStack_a0;
  (*(code *)*apuStack_a0[0])();
  if ((3 < iStack_d0) && (ppuVar3 = ppuStack_c8, ppuStack_c8 != (undefined8 **)0x0)) {
    (*(code *)**ppuStack_c8)();
  }
  if ((3 < aiStack_e8[0]) && (ppuVar3 = ppuStack_e0, ppuStack_e0 != (undefined8 **)0x0)) {
    (*(code *)**ppuStack_e0)();
  }
  if (cStack_a9 < '\0') {
    ppuVar3 = ppuStack_c0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt9exceptionD2Ev(extraout_x8);
  (*(code *)*apuStack_a0[0])(apuStack_a0);
  if ((3 < iStack_d0) && (ppuStack_c8 != (undefined8 **)0x0)) {
    (*(code *)**ppuStack_c8)();
  }
  if ((3 < aiStack_e8[0]) && (ppuStack_e0 != (undefined8 **)0x0)) {
    (*(code *)**ppuStack_e0)();
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(ppuStack_c0);
  }
  __Unwind_Resume();
  *ppuVar3 = &PTR_FUN_110b17138;
  FUN_109897538(ppuVar3 + 4);
  *ppuVar3 = &PTR_FUN_110b17178;
  if (*(char *)((long)ppuVar3 + 0x1f) < '\0') {
    __ZdlPv(ppuVar3[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(ppuVar3);
  return;
}



/* Entry: 109896cfc; end: 109896f6f;  */

void FUN_109896cfc(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  int aiStack_b8 [2];
  undefined8 **ppuStack_b0;
  long *plStack_a8;
  int iStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 uStack_88;
  undefined7 uStack_80;
  char cStack_79;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  FUN_10989695c(&ppuStack_90,param_2,param_3);
  FUN_1098849a4(aiStack_b8,param_2,*(undefined8 *)(param_3 + 0x20));
  iStack_a0 = aiStack_b8[0];
  if (aiStack_b8[0] == 3) {
    ppuStack_98 = ppuStack_b0;
  }
  else if (aiStack_b8[0] == 2) {
    ppuStack_98 = (undefined8 **)CONCAT71(ppuStack_98._1_7_,ppuStack_b0._0_1_);
  }
  else if (3 < aiStack_b8[0]) {
    ppuStack_98 = ppuStack_b0;
    ppuStack_b0 = (undefined8 **)0x0;
  }
  aiStack_b8[0] = 0;
  plStack_a8 = param_2;
  FUN_109887e98(&uStack_78,plVar1[0x1f],&plStack_a8);
  *param_1 = &PTR_FUN_110b17178;
  if (cStack_79 < '\0') {
    func_0x000107c3192c(param_1 + 1,ppuStack_90,uStack_88);
  }
  else {
    param_1[2] = uStack_88;
    param_1[1] = ppuStack_90;
    param_1[3] = CONCAT17(cStack_79,uStack_80);
  }
  *param_1 = &PTR_FUN_110b17138;
  puVar2 = (undefined8 *)0x58;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110b171b8;
  puVar2[3] = uStack_78;
  (*(code *)apuStack_70[0][2])(puVar2 + 4,apuStack_70);
  param_1[4] = puVar2 + 3;
  param_1[5] = puVar2;
  ppuVar3 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if ((3 < iStack_a0) && (ppuVar3 = ppuStack_98, ppuStack_98 != (undefined8 **)0x0)) {
    (*(code *)**ppuStack_98)();
  }
  if ((3 < aiStack_b8[0]) && (ppuVar3 = ppuStack_b0, ppuStack_b0 != (undefined8 **)0x0)) {
    (*(code *)**ppuStack_b0)();
  }
  if (cStack_79 < '\0') {
    ppuVar3 = ppuStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt9exceptionD2Ev(param_1);
  (*(code *)*apuStack_70[0])(apuStack_70);
  if ((3 < iStack_a0) && (ppuStack_98 != (undefined8 **)0x0)) {
    (*(code *)**ppuStack_98)();
  }
  if ((3 < aiStack_b8[0]) && (ppuStack_b0 != (undefined8 **)0x0)) {
    (*(code *)**ppuStack_b0)();
  }
  if (cStack_79 < '\0') {
    __ZdlPv(ppuStack_90);
  }
  __Unwind_Resume();
  *ppuVar3 = &PTR_FUN_110b17138;
  FUN_109897538(ppuVar3 + 4);
  *ppuVar3 = &PTR_FUN_110b17178;
  if (*(char *)((long)ppuVar3 + 0x1f) < '\0') {
    __ZdlPv(ppuVar3[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(ppuVar3);
  return;
}



/* Entry: 109896f70; end: 109896fbb;  */

void FUN_109896f70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b17138;
  FUN_109897538(param_1 + 4);
  *param_1 = &PTR_FUN_110b17178;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 109896fbc; end: 109897167;  */

void FUN_109896fbc(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined7 uStack_c0;
  char cStack_b9;
  undefined1 auStack_b8 [24];
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [96];
  
  uVar3 = *param_1;
  FUN_1098849a4(aiStack_a0,uVar3,param_1 + 1);
  FUN_109886034(auStack_90,uVar3,aiStack_a0);
  FUN_10989695c(auStack_b8,uVar3,auStack_90);
  FUN_109886730(auStack_90,&PTR_PTR_110b165d8);
  __ZNSt9exceptionD2Ev(auStack_90);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  FUN_10988bdc0(auStack_d8,auStack_b8);
  puVar2 = (undefined8 *)0x20;
  ___cxa_allocate_exception();
  *puVar2 = &PTR_FUN_110b16940;
  if (cStack_b9 < '\0') {
    func_0x000107c3192c(puVar2 + 1,uStack_d0,uStack_c8);
  }
  else {
    puVar2[3] = CONCAT17(cStack_b9,uStack_c0);
    puVar2[2] = uStack_c8;
    puVar2[1] = uStack_d0;
  }
  ___cxa_throw(puVar2,&PTR_DAT_110b168f0,FUN_10988be28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1098970a8);
  (*pcVar1)();
}



/* Entry: 109897168; end: 10989728b;  */

void FUN_109897168(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *in_x3;
  long *plStack_70;
  ulong uStack_68;
  byte bStack_59;
  long lStack_58;
  long lStack_50;
  
  FUN_10989feac(&lStack_58);
  lVar4 = lStack_50;
  lVar2 = lStack_58;
  lVar3 = lStack_58;
  for (lVar1 = lStack_58; lVar1 != lVar4; lVar1 = lVar1 + 0x40) {
    (*(code *)*in_x3)(lVar2,in_x3);
    lVar2 = lVar2 + 0x40;
    lVar3 = lStack_50;
  }
  FUN_10989fb68(&plStack_70,lStack_58,lVar3 - lStack_58 >> 6);
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
  }
  if (uStack_68 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (((uint)(int)(char)bStack_59 >> 7 & 1) == 0) goto LAB_10989721c;
  }
  else {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (param_1,&UNK_10f5824d1,&plStack_70);
    if (-1 < (char)bStack_59) goto LAB_10989721c;
  }
  __ZdlPv(plStack_70);
LAB_10989721c:
  plStack_70 = &lStack_58;
  FUN_1098973f4(&plStack_70);
  return;
}



/* Entry: 10989728c; end: 10989729f;  */

void FUN_10989728c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 *extraout_x8;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&puStack_30;
  puStack_30 = &uStack_28;
  uVar1 = *(uint *)(*(long *)(param_3 + 0x10) + 0xa0);
  uStack_28 = param_1;
  uStack_20 = param_2;
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_110b170a0)[uVar1])(&puStack_18,*(long *)(param_3 + 0x10) + 0x58);
    return;
  }
  FUN_1092612e0();
  *extraout_x8 = 0;
  extraout_x8[0x40] = 0;
  return;
}



/* Entry: 1098972a0; end: 1098972f7;  */

void FUN_1098972a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *extraout_x8;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&puStack_30;
  puStack_30 = &uStack_28;
  uStack_28 = param_2;
  uStack_20 = param_3;
  if (*(uint *)(param_1 + 0xa0) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110b170a0)[*(uint *)(param_1 + 0xa0)])(&puStack_18,param_1 + 0x58);
    return;
  }
  FUN_1092612e0();
  *extraout_x8 = 0;
  extraout_x8[0x40] = 0;
  return;
}



/* Entry: 1098972f8; end: 109897347;  */

void FUN_1098972f8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  return;
}



/* Entry: 109897348; end: 109897393;  */

/* WARNING: Possible PIC construction at 0x000109888f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109888cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109888f70) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */
/* WARNING: Removing unreachable block (ram,0x000109888cb8) */
/* WARNING: Removing unreachable block (ram,0x000109888cbc) */
/* WARNING: Removing unreachable block (ram,0x000109888cc4) */
/* WARNING: Removing unreachable block (ram,0x000109888cc8) */

long * FUN_109897348(long *param_1,long param_2,undefined8 param_3,undefined *param_4,ulong param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long **pplVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  int *piVar17;
  int *piVar18;
  long *unaff_x20;
  undefined1 **ppuVar19;
  undefined8 uVar20;
  long alStack_80 [4];
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  ulong uStack_38;
  
  plVar9 = *(long **)(param_2 + 0x10);
  uVar11 = (ulong)*(char *)((long)param_1 + 0x17);
  plVar10 = param_1;
  if ((long)uVar11 < 0) {
    uVar11 = param_1[1];
    plVar10 = (long *)*param_1;
  }
  FUN_10989c1a0(plVar9,plVar10);
  if (plVar9 == (long *)0x0) {
    return (long *)0x0;
  }
  pplVar6 = &plStack_40;
  if ((*(byte *)((long)param_1 + 0x34) & 1) == 0) {
    uStack_38 = (ulong)*(char *)((long)param_1 + 0x17);
    plStack_40 = param_1;
    if ((long)uStack_38 < 0) {
      uStack_38 = param_1[1];
      plStack_40 = (long *)*param_1;
    }
    if (uStack_38 < 3) {
      return plVar9;
    }
    plVar10 = (long *)(uStack_38 - 3);
    param_4 = &DAT_10f2f41e7;
    uVar11 = 0xffffffffffffffff;
    param_5 = 3;
    uVar20 = 0x109888cb8;
    goto FUN_109888ee4;
  }
  iVar5 = (int)param_1[6] - (int)plVar9[9];
  if (*(char *)((long)param_1 + 0x3c) == '\x01') {
    if (iVar5 == 1) {
      iVar12 = *(int *)((long)plVar9 + 0x4c);
    }
    else {
      iVar12 = 0;
    }
    iVar12 = (int)param_1[7] - iVar12;
  }
  else {
    iVar12 = 1;
  }
  if (plVar9[2] == 0) {
    return plVar9;
  }
  plVar14 = plVar9 + 1;
  plVar16 = (long *)*plVar14;
  plVar10 = plVar14;
  plVar15 = plVar16;
  if (plVar16 == (long *)0x0) {
LAB_109888d60:
    if (plVar10 == (long *)*plVar9) goto LAB_109888e14;
    if (plVar10 == plVar14) {
      if (plVar16 == (long *)0x0) {
        do {
          plVar10 = (long *)plVar14[2];
          bVar7 = (long *)*plVar10 == plVar14;
          plVar14 = plVar10;
        } while (bVar7);
      }
      else {
        do {
          plVar10 = plVar16;
          plVar16 = (long *)plVar10[1];
        } while ((long *)plVar10[1] != (long *)0x0);
      }
      piVar17 = (int *)((long)plVar10 + 0x24);
    }
    else {
      plVar14 = plVar10;
      plVar16 = (long *)*plVar10;
      if ((long *)*plVar10 == (long *)0x0) {
        do {
          plVar15 = (long *)plVar14[2];
          bVar7 = (long *)*plVar15 == plVar14;
          plVar14 = plVar15;
        } while (bVar7);
      }
      else {
        do {
          plVar15 = plVar16;
          plVar16 = (long *)plVar15[1];
        } while ((long *)plVar15[1] != (long *)0x0);
      }
      piVar17 = (int *)((long)plVar10 + 0x1c);
      piVar18 = (int *)((long)plVar15 + 0x1c);
      iVar4 = *piVar18;
      if (*piVar17 == iVar5) {
        if (iVar5 != iVar4) goto LAB_109888e14;
        if (iVar12 - (int)plVar15[4] <= (int)plVar10[4] - iVar12) {
          piVar17 = piVar18;
        }
        piVar17 = piVar17 + 2;
      }
      else {
        if (iVar5 - iVar4 <= *piVar17 - iVar5) {
          piVar17 = piVar18;
        }
        piVar17 = piVar17 + 2;
        if (iVar5 == iVar4) {
          piVar17 = (int *)((long)plVar15 + 0x24);
        }
      }
    }
  }
  else {
    do {
      bVar7 = (int)plVar15[4] < iVar12;
      if (*(int *)((long)plVar15 + 0x1c) != iVar5) {
        bVar7 = *(int *)((long)plVar15 + 0x1c) < iVar5;
      }
      lVar8 = 8;
      if (!bVar7) {
        lVar8 = 0;
        plVar10 = plVar15;
      }
      puVar1 = (undefined8 *)((long)plVar15 + lVar8);
      plVar15 = (long *)*puVar1;
    } while ((long *)*puVar1 != (long *)0x0);
    if (((plVar10 == plVar14) || (*(int *)((long)plVar10 + 0x1c) != iVar5)) ||
       ((int)plVar10[4] != iVar12)) goto LAB_109888d60;
LAB_109888e14:
    piVar17 = (int *)((long)plVar10 + 0x24);
  }
  plVar10 = (long *)(plVar9[6] + (long)piVar17[4] * 0x18);
  pplVar6 = (long **)param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  *(int *)(param_1 + 6) = *piVar17;
  *(undefined1 *)((long)param_1 + 0x34) = 1;
  if (*(char *)((long)param_1 + 0x3c) == '\x01') {
    *(int *)(param_1 + 7) = piVar17[1];
    *(undefined1 *)((long)param_1 + 0x3c) = 1;
  }
  if ((char)piVar17[3] != '\x01') {
    return (long *)pplVar6;
  }
  iVar5 = piVar17[2];
  uVar13 = (plVar9[4] - plVar9[3] >> 3) * -0x5555555555555555;
  if ((ulong)(long)iVar5 <= uVar13 && uVar13 - (long)iVar5 != 0) {
    param_1 = param_1 + 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )(param_1,plVar9[3] + (long)iVar5 * 0x18);
    return param_1;
  }
  FUN_109520c48();
  uVar20 = 0x109888ee4;
  func_0x000104bd46a0();
  unaff_x20 = plVar9;
FUN_109888ee4:
  ppuVar19 = &puStack_50;
  uVar13 = (long)pplVar6[1] - (long)plVar10;
  plStack_60 = unaff_x20;
  plStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  uStack_48 = uVar20;
  if (pplVar6[1] < plVar10) {
    plVar9 = (long *)&UNK_10f582264;
    uVar20 = 0x109888f50;
    FUN_109262df8();
    pplVar6 = &plStack_60;
    while (plVar14 = plVar10, plVar14 != (long *)0x0) {
      *(long **)((long)pplVar6 + -0x20) = unaff_x20;
      *(long **)((long)pplVar6 + -0x18) = param_1;
      *(undefined1 ***)((long)pplVar6 + -0x10) = ppuVar19;
      *(undefined8 *)((long)pplVar6 + -8) = uVar20;
      ppuVar19 = (undefined1 **)((long)pplVar6 + -0x10);
      uVar20 = 0x109888f70;
      pplVar6 = (long **)((long)pplVar6 + -0x20);
      param_1 = plVar14;
      unaff_x20 = plVar9;
      plVar10 = (long *)*plVar14;
    }
    return plVar9;
  }
  if (uVar11 <= uVar13) {
    uVar13 = uVar11;
  }
  uVar11 = param_5;
  if (uVar13 <= param_5) {
    uVar11 = uVar13;
  }
  lVar8 = (long)*pplVar6 + (long)plVar10;
  _memcmp(lVar8,param_4,uVar11);
  uVar2 = 1;
  if (uVar13 < param_5) {
    uVar2 = 0xffffffff;
  }
  uVar3 = 0;
  if (uVar13 != param_5) {
    uVar3 = uVar2;
  }
  uVar2 = (uint)lVar8;
  if ((uint)lVar8 == 0) {
    uVar2 = uVar3;
  }
  return (long *)(ulong)uVar2;
}



/* Entry: 109897394; end: 1098973f3;  */

void FUN_109897394(void)

{
  return;
}



/* Entry: 1098973f4; end: 109897463;  */

void FUN_1098973f4(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x40;
        FUN_109897464(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109897464; end: 1098974f7;  */

void FUN_109897464(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 1098974f8; end: 109897507;  */

void FUN_1098974f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b171b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109897508; end: 109897527;  */

void FUN_109897508(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b171b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109897528; end: 109897537;  */

void FUN_109897528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109897530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}



/* Entry: 109897538; end: 1098975bf;  */

long FUN_109897538(long param_1)

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



/* Entry: 1098975c0; end: 1098975e3;  */

undefined8 * FUN_1098975c0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x20) + 8);
  if (-1 < *(char *)((long)param_1 + *(long *)(*param_1 + -0x20) + 0x1f)) {
    return puVar1;
  }
  return (undefined8 *)*puVar1;
}



/* Entry: 1098975e4; end: 109897697;  */

void FUN_1098975e4(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110b17138;
  FUN_109897538(puVar1 + 4);
  *puVar1 = &PTR_FUN_110b17178;
  if (*(char *)((long)puVar1 + 0x1f) < '\0') {
    __ZdlPv(puVar1[1]);
  }
  __ZNSt9exceptionD2Ev(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109897698; end: 1098976a7;  */

void FUN_109897698(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110b16940;
  if (*(char *)((long)puVar1 + 0x1f) < '\0') {
    __ZdlPv(puVar1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(puVar1);
  return;
}



/* Entry: 1098976a8; end: 109897703;  */

undefined8 * FUN_1098976a8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  char cStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar4 = (undefined8 *)0x90;
  ___cxa_allocate_exception();
  FUN_109897704();
  ppuVar6 = &PTR_DAT_110b171f8;
  pcVar7 = FUN_109897958;
  puVar5 = puVar4;
  ___cxa_throw(puVar4,&PTR_DAT_110b171f8);
  ___cxa_free_exception(puVar4);
  __Unwind_Resume();
  *puVar5 = &PTR_SUB_110b17370;
  if ((char)pcVar7[0x1f] < '\0') {
    func_0x000107c3192c(puVar5 + 1,*(undefined8 *)(pcVar7 + 8),*(undefined8 *)(pcVar7 + 0x10));
  }
  else {
    uVar10 = *(undefined8 *)(pcVar7 + 0x10);
    uVar9 = *(undefined8 *)(pcVar7 + 8);
    puVar5[3] = *(undefined8 *)(pcVar7 + 0x18);
    puVar5[2] = uVar10;
    puVar5[1] = uVar9;
  }
  *puVar5 = &PTR_FUN_110b17330;
  lVar8 = *(long *)(pcVar7 + 0x28);
  uVar9 = *(undefined8 *)(pcVar7 + 0x20);
  puVar5[5] = *(undefined8 *)(pcVar7 + 0x28);
  puVar5[4] = uVar9;
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
  if ((char)pcVar7[0x47] < '\0') {
    func_0x000107c3192c(puVar5 + 6,*(undefined8 *)(pcVar7 + 0x30),*(undefined8 *)(pcVar7 + 0x38));
  }
  else {
    uVar10 = *(undefined8 *)(pcVar7 + 0x38);
    uVar9 = *(undefined8 *)(pcVar7 + 0x30);
    puVar5[8] = *(undefined8 *)(pcVar7 + 0x40);
    puVar5[7] = uVar10;
    puVar5[6] = uVar9;
  }
  if ((char)pcVar7[0x5f] < '\0') {
    func_0x000107c3192c(puVar5 + 9,*(undefined8 *)(pcVar7 + 0x48),*(undefined8 *)(pcVar7 + 0x50));
  }
  else {
    uVar10 = *(undefined8 *)(pcVar7 + 0x50);
    uVar9 = *(undefined8 *)(pcVar7 + 0x48);
    puVar5[0xb] = *(undefined8 *)(pcVar7 + 0x58);
    puVar5[10] = uVar10;
    puVar5[9] = uVar9;
  }
  *puVar5 = &PTR_FUN_110b17258;
  puVar5[0xc] = &PTR_FUN_110b17298;
  FUN_109896cfc(&ppuStack_a0,ppuVar6,puVar5);
  puVar5[0xc] = &PTR_FUN_110b17428;
  *puVar5 = &PTR_FUN_110b17460;
  if (cStack_81 < '\0') {
    func_0x000107c3192c(puVar5 + 0xd,uStack_98,uStack_90);
    puVar5[0xc] = &PTR_FUN_110b173b0;
    *puVar5 = &PTR_DAT_110b173e8;
    puVar5[0x11] = uStack_78;
    puVar5[0x10] = uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    ppuStack_a0 = &PTR_FUN_110b17178;
    if (cStack_81 < '\0') {
      __ZdlPv(uStack_98);
    }
  }
  else {
    puVar5[0xe] = uStack_90;
    puVar5[0xd] = uStack_98;
    puVar5[0xf] = CONCAT17(cStack_81,uStack_88);
    puVar5[0xc] = &PTR_FUN_110b173b0;
    *puVar5 = &PTR_DAT_110b173e8;
    puVar5[0x11] = uStack_78;
    puVar5[0x10] = uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    ppuStack_a0 = &PTR_FUN_110b17178;
  }
  __ZNSt9exceptionD2Ev(&ppuStack_a0);
  *puVar5 = &PTR_FUN_110b17258;
  puVar5[0xc] = &PTR_FUN_110b17298;
  return puVar5;
}



/* Entry: 109897704; end: 109897957;  */

undefined8 * FUN_109897704(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined7 uStack_58;
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *param_1 = &PTR_SUB_110b17370;
  if (*(char *)(param_3 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 1,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 0x10);
    uVar5 = *(undefined8 *)(param_3 + 8);
    param_1[3] = *(undefined8 *)(param_3 + 0x18);
    param_1[2] = uVar6;
    param_1[1] = uVar5;
  }
  *param_1 = &PTR_FUN_110b17330;
  lVar4 = *(long *)(param_3 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  param_1[5] = *(undefined8 *)(param_3 + 0x28);
  param_1[4] = uVar5;
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
  if (*(char *)(param_3 + 0x47) < '\0') {
    func_0x000107c3192c(param_1 + 6,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x38))
    ;
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 0x38);
    uVar5 = *(undefined8 *)(param_3 + 0x30);
    param_1[8] = *(undefined8 *)(param_3 + 0x40);
    param_1[7] = uVar6;
    param_1[6] = uVar5;
  }
  if (*(char *)(param_3 + 0x5f) < '\0') {
    func_0x000107c3192c(param_1 + 9,*(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x50))
    ;
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 0x50);
    uVar5 = *(undefined8 *)(param_3 + 0x48);
    param_1[0xb] = *(undefined8 *)(param_3 + 0x58);
    param_1[10] = uVar6;
    param_1[9] = uVar5;
  }
  *param_1 = &PTR_FUN_110b17258;
  param_1[0xc] = &PTR_FUN_110b17298;
  FUN_109896cfc(&ppuStack_70,param_2,param_1);
  param_1[0xc] = &PTR_FUN_110b17428;
  *param_1 = &PTR_FUN_110b17460;
  if (cStack_51 < '\0') {
    func_0x000107c3192c(param_1 + 0xd,uStack_68,uStack_60);
    param_1[0xc] = &PTR_FUN_110b173b0;
    *param_1 = &PTR_DAT_110b173e8;
    param_1[0x11] = uStack_48;
    param_1[0x10] = uStack_50;
    uStack_50 = 0;
    uStack_48 = 0;
    ppuStack_70 = &PTR_FUN_110b17178;
    if (cStack_51 < '\0') {
      __ZdlPv(uStack_68);
    }
  }
  else {
    param_1[0xe] = uStack_60;
    param_1[0xd] = uStack_68;
    param_1[0xf] = CONCAT17(cStack_51,uStack_58);
    param_1[0xc] = &PTR_FUN_110b173b0;
    *param_1 = &PTR_DAT_110b173e8;
    param_1[0x11] = uStack_48;
    param_1[0x10] = uStack_50;
    uStack_50 = 0;
    uStack_48 = 0;
    ppuStack_70 = &PTR_FUN_110b17178;
  }
  __ZNSt9exceptionD2Ev(&ppuStack_70);
  *param_1 = &PTR_FUN_110b17258;
  param_1[0xc] = &PTR_FUN_110b17298;
  return param_1;
}



/* Entry: 109897958; end: 109897a2b;  */

void FUN_109897958(undefined8 *param_1)

{
  param_1[0xc] = &PTR_FUN_110b173b0;
  *param_1 = &PTR_DAT_110b173e8;
  FUN_109897538(param_1 + 0x10);
  param_1[0xc] = &PTR_FUN_110b17428;
  *param_1 = &PTR_FUN_110b17460;
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  FUN_109886730(param_1,&PTR_PTR_110b172b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 109897a2c; end: 109897a47;  */

undefined8 * FUN_109897a2c(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x7f)) {
    return (undefined8 *)(param_1 + 0x68);
  }
  return *(undefined8 **)(param_1 + 0x68);
}



/* Entry: 109897a48; end: 109897b23;  */

void FUN_109897a48(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0xc;
  *puVar1 = &PTR_DAT_110b173e8;
  *param_1 = &PTR_FUN_110b173b0;
  FUN_109897538(param_1 + 4);
  *param_1 = &PTR_FUN_110b17428;
  *puVar1 = &PTR_FUN_110b17460;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  FUN_109886730(puVar1,&PTR_PTR_110b172b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 109897b24; end: 109897b3f;  */

undefined8 * FUN_109897b24(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return (undefined8 *)(param_1 + 8);
  }
  return *(undefined8 **)(param_1 + 8);
}



/* Entry: 109897b40; end: 109897b8f;  */

undefined8 * FUN_109897b40(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = (undefined8 *)0x30;
  ___cxa_allocate_exception();
  FUN_109897b90();
  ppuVar3 = &PTR_DAT_110b17190;
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110b17190,FUN_109896f70);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  *puVar2 = &PTR_FUN_110b17178;
  if (*(char *)((long)ppuVar3 + 0x1f) < '\0') {
    func_0x000107c3192c(puVar2 + 1,ppuVar3[1],ppuVar3[2]);
  }
  else {
    puVar5 = ppuVar3[2];
    puVar4 = ppuVar3[1];
    puVar2[3] = ppuVar3[3];
    puVar2[2] = puVar5;
    puVar2[1] = puVar4;
  }
  *puVar2 = &PTR_FUN_110b17138;
  puVar4 = ppuVar3[4];
  puVar2[5] = ppuVar3[5];
  puVar2[4] = puVar4;
  ppuVar3[4] = (undefined *)0x0;
  ppuVar3[5] = (undefined *)0x0;
  return puVar2;
}



/* Entry: 109897b90; end: 109897c0f;  */

undefined8 * FUN_109897b90(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110b17178;
  if (*(char *)(param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined8 *)(param_2 + 8);
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
    param_1[2] = uVar2;
    param_1[1] = uVar1;
  }
  *param_1 = &PTR_FUN_110b17138;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return param_1;
}



/* Entry: 109897c10; end: 109897cdb;  */

long * FUN_109897c10(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puStack_30;
  long *plStack_28;
  
  if (*(int *)(param_1 + 1) == 7) {
    plVar1 = (long *)*param_1;
    (**(code **)(*plVar1 + 0x98))(plVar1,param_1[2]);
    plVar3 = (long *)*param_1;
    uVar2 = param_2;
    plStack_28 = plVar1;
    _strlen(param_2);
    (**(code **)(*plVar3 + 0xb8))(&puStack_30,plVar3,param_2,uVar2);
    (**(code **)(*plVar3 + 0x1b8))(plVar3,&plStack_28,&puStack_30);
    if (puStack_30 != (undefined8 *)0x0) {
      (**(code **)*puStack_30)();
    }
    if (plStack_28 != (long *)0x0) {
      (**(code **)*plStack_28)();
    }
  }
  else {
    plVar3 = (long *)0x0;
  }
  return plVar3;
}



/* Entry: 109897cdc; end: 109897e5b;  */

void FUN_109897cdc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  int aiStack_50 [2];
  undefined8 uStack_48;
  
  uVar2 = *param_2;
  FUN_109884c0c(&puStack_58,param_2 + 1,uVar2);
  plVar3 = (long *)*param_2;
  uVar1 = param_3;
  _strlen(param_3);
  (**(code **)(*plVar3 + 0xb8))(&puStack_60,plVar3,param_3,uVar1);
  (**(code **)(*plVar3 + 0x1a0))(aiStack_50,plVar3,&puStack_58,&puStack_60);
  *param_1 = uVar2;
  *(int *)(param_1 + 1) = aiStack_50[0];
  if (aiStack_50[0] == 3) {
    param_1[2] = uStack_48;
  }
  else if (aiStack_50[0] == 2) {
    *(undefined1 *)(param_1 + 2) = (undefined1)uStack_48;
  }
  else if (3 < aiStack_50[0]) {
    param_1[2] = uStack_48;
    uStack_48 = 0;
  }
  aiStack_50[0] = 0;
  if (puStack_60 != (undefined8 *)0x0) {
    (**(code **)*puStack_60)();
  }
  if (puStack_58 != (undefined8 *)0x0) {
    (**(code **)*puStack_58)();
  }
  return;
}



/* Entry: 109897e5c; end: 109897f1b;  */

long * FUN_109897e5c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  FUN_109884c0c(&puStack_30,param_1 + 1,*param_1);
  FUN_10988469c(&puStack_28,&puStack_30,*param_1);
  plVar1 = (long *)*param_1;
  (**(code **)(*plVar1 + 0x268))(plVar1,&puStack_28);
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  return plVar1;
}



/* Entry: 109897f1c; end: 10989803b;  */

void FUN_109897f1c(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  int aiStack_40 [2];
  undefined8 uStack_38;
  
  uVar1 = *param_2;
  FUN_109884c0c(&puStack_50,param_2 + 1,uVar1);
  FUN_10988469c(&puStack_48,&puStack_50,*param_2);
  (**(code **)(*(long *)*param_2 + 0x288))(aiStack_40,(long *)*param_2,&puStack_48,(long)param_3);
  *param_1 = uVar1;
  *(int *)(param_1 + 1) = aiStack_40[0];
  if (aiStack_40[0] == 3) {
    param_1[2] = uStack_38;
  }
  else if (aiStack_40[0] == 2) {
    *(undefined1 *)(param_1 + 2) = (undefined1)uStack_38;
  }
  else if (3 < aiStack_40[0]) {
    param_1[2] = uStack_38;
    uStack_38 = 0;
  }
  aiStack_40[0] = 0;
  if (puStack_48 != (undefined8 *)0x0) {
    (**(code **)*puStack_48)();
  }
  if (puStack_50 != (undefined8 *)0x0) {
    (**(code **)*puStack_50)();
  }
  return;
}



/* Entry: 10989803c; end: 10989808f;  */

void FUN_10989803c(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *extraout_x8;
  long *unaff_x20;
  long unaff_x22;
  int aiStack_a0 [2];
  undefined1 uStack_98;
  undefined7 uStack_97;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_58 [8];
  long lStack_50;
  int aiStack_48 [2];
  long *plStack_40;
  long lStack_38;
  
  if ((int)param_2[1] == 7) {
    plVar3 = (long *)*param_2;
    (**(code **)(*plVar3 + 0x98))(plVar3,param_2[2]);
    *param_1 = (long)plVar3;
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)*param_2;
  (**(code **)(*plVar3 + 0x58))();
  uVar1 = (int)param_2[1] - 2;
  if ((uVar1 < 5) && ((0x17U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    unaff_x22 = *(long *)(&UNK_10e005a00 + (ulong)uVar1 * 8);
    param_2 = (long *)*param_2;
    FUN_1098849a4(aiStack_48,param_2);
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x2b0))(auStack_58,param_2,(long)plVar3 + unaff_x22,aiStack_48,1);
    if ((3 < aiStack_48[0]) && (plVar2 = plStack_40, plStack_40 != (long *)0x0)) {
      (**(code **)*plStack_40)();
    }
    *param_1 = lStack_50;
    unaff_x20 = plVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  else {
    plVar2 = (long *)&UNK_10f5824e0;
    FUN_10988bd28();
  }
  ___stack_chk_fail();
  if ((3 < aiStack_48[0]) && (plStack_40 != (long *)0x0)) {
    (**(code **)*plStack_40)();
  }
  plVar3 = plVar2;
  __Unwind_Resume();
  pcStack_68 = FUN_1098981bc;
  lStack_90 = unaff_x22;
  plStack_88 = param_2;
  plStack_80 = unaff_x20;
  plStack_78 = plVar2;
  puStack_70 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar3 + 0x58))();
  FUN_10989c93c(aiStack_a0);
  *extraout_x8 = plVar3;
  *(int *)(extraout_x8 + 1) = aiStack_a0[0];
  if (aiStack_a0[0] == 3) {
    extraout_x8[2] = CONCAT71(uStack_97,uStack_98);
  }
  else if (aiStack_a0[0] == 2) {
    *(undefined1 *)(extraout_x8 + 2) = uStack_98;
  }
  else if (3 < aiStack_a0[0]) {
    extraout_x8[2] = CONCAT71(uStack_97,uStack_98);
  }
  return;
}



/* Entry: 109898090; end: 1098981bb;  */

void FUN_109898090(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *extraout_x8;
  long *unaff_x20;
  long unaff_x22;
  int aiStack_a0 [2];
  undefined1 uStack_98;
  undefined7 uStack_97;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  int aiStack_48 [2];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = (long *)*param_2;
  (**(code **)(*plVar2 + 0x58))();
  uVar1 = (int)param_2[1] - 2;
  if ((uVar1 < 5) && ((0x17U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    unaff_x22 = *(long *)(&UNK_10e005a00 + (ulong)uVar1 * 8);
    param_2 = (long *)*param_2;
    FUN_1098849a4(aiStack_48,param_2);
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x2b0))(auStack_58,param_2,(long)plVar2 + unaff_x22,aiStack_48,1);
    if ((3 < aiStack_48[0]) && (plVar3 = plStack_40, plStack_40 != (long *)0x0)) {
      (**(code **)*plStack_40)();
    }
    *param_1 = uStack_50;
    unaff_x20 = plVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  else {
    plVar3 = (long *)&UNK_10f5824e0;
    FUN_10988bd28();
  }
  ___stack_chk_fail();
  if ((3 < aiStack_48[0]) && (plStack_40 != (long *)0x0)) {
    (**(code **)*plStack_40)();
  }
  plVar2 = plVar3;
  __Unwind_Resume();
  pcStack_68 = FUN_1098981bc;
  lStack_90 = unaff_x22;
  plStack_88 = param_2;
  plStack_80 = unaff_x20;
  plStack_78 = plVar3;
  puStack_70 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar2 + 0x58))();
  FUN_10989c93c(aiStack_a0);
  *extraout_x8 = plVar2;
  *(int *)(extraout_x8 + 1) = aiStack_a0[0];
  if (aiStack_a0[0] == 3) {
    extraout_x8[2] = CONCAT71(uStack_97,uStack_98);
  }
  else if (aiStack_a0[0] == 2) {
    *(undefined1 *)(extraout_x8 + 2) = uStack_98;
  }
  else if (3 < aiStack_a0[0]) {
    extraout_x8[2] = CONCAT71(uStack_97,uStack_98);
  }
  return;
}



/* Entry: 1098981bc; end: 10989824b;  */

void FUN_1098981bc(undefined8 *param_1,long *param_2)

{
  int aiStack_40 [2];
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  (**(code **)(*param_2 + 0x58))();
  FUN_10989c93c(aiStack_40);
  *param_1 = param_2;
  *(int *)(param_1 + 1) = aiStack_40[0];
  if (aiStack_40[0] == 3) {
    param_1[2] = CONCAT71(uStack_37,uStack_38);
  }
  else if (aiStack_40[0] == 2) {
    *(undefined1 *)(param_1 + 2) = uStack_38;
  }
  else if (3 < aiStack_40[0]) {
    param_1[2] = CONCAT71(uStack_37,uStack_38);
  }
  return;
}



/* Entry: 10989824c; end: 1098983d3;  */

void FUN_10989824c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puStack_38;
  
  bVar1 = *(byte *)(param_2 + 0x2d9) ^ 1;
  if ((*(byte *)(param_2 + 0x2d9) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x2d9) = 1;
  }
  lVar3 = param_2;
  __ZSt19uncaught_exceptionsv();
  FUN_109884d50(&puStack_38,*param_3,param_3[1]);
  (**(code **)(*(long *)param_3[1] + 0x2b0))
            (param_1,(long *)param_3[1],&puStack_38,*(undefined8 *)param_3[2],
             ((undefined8 *)param_3[2])[1]);
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  iVar2 = (int)puStack_38;
  __ZSt19uncaught_exceptionsv();
  if (iVar2 <= (int)lVar3) {
    if ((bVar1 & 1) == 0) {
      return;
    }
    (**(code **)(**(long **)(param_2 + 0x50) + 0x28))(*(long **)(param_2 + 0x50),0xffffffff);
    bVar1 = bVar1 & 1;
  }
  if (bVar1 != 0) {
    *(undefined1 *)(param_2 + 0x2d9) = 0;
  }
  return;
}



/* Entry: 1098983d4; end: 10989842b;  */

undefined8 * FUN_1098983d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  __ZSt19uncaught_exceptionsv();
  if (((int)puVar1 <= *(int *)(param_1 + 2)) && (*(char *)*param_1 == '\x01')) {
    (**(code **)(**(long **)(param_1[1] + 0x50) + 0x28))(*(long **)(param_1[1] + 0x50),0xffffffff);
  }
  return param_1;
}



/* Entry: 10989842c; end: 10989847b;  */

byte FUN_10989842c(void)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar8;
  undefined8 uStack_58;
  long lStack_50;
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined8 uVar7;
  
  uVar5 = 0x20;
  ___cxa_allocate_exception();
  FUN_10988bdc0();
  ppuVar8 = &PTR_DAT_110b168f0;
  uVar6 = uVar5;
  ___cxa_throw(uVar5,&PTR_DAT_110b168f0,FUN_10988be28);
  ___cxa_free_exception(uVar5);
  uVar7 = uVar6;
  __Unwind_Resume(uVar6);
  iVar4 = (int)uVar7;
  pcStack_28 = FUN_10989847c;
  uVar1 = *(uint *)ppuVar8;
  if ((int)uVar1 < 3) {
    if (uVar1 < 2) {
      bVar3 = 0;
      goto LAB_109898504;
    }
    if (uVar1 == 2) {
      bVar3 = *(byte *)(ppuVar8 + 1);
      goto LAB_109898504;
    }
LAB_1098984ec:
    bVar3 = 1;
  }
  else {
    uStack_40 = uVar6;
    uStack_38 = uVar5;
    puStack_30 = &stack0xfffffffffffffff0;
    if (uVar1 == 3) {
      FUN_109898518();
      bVar2 = iVar4 == 0;
    }
    else {
      if (uVar1 != 6) goto LAB_1098984ec;
      FUN_109898570(&uStack_58);
      if (cStack_41 < '\0') {
        bVar3 = lStack_50 != 0;
        __ZdlPv(uStack_58);
        goto LAB_109898504;
      }
      bVar2 = cStack_41 == '\0';
    }
    bVar3 = !bVar2;
  }
LAB_109898504:
  return bVar3 & 1;
}



/* Entry: 10989847c; end: 109898517;  */

byte FUN_10989847c(int param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uStack_38;
  long lStack_30;
  char cStack_21;
  
  uVar1 = *param_2;
  if ((int)uVar1 < 3) {
    if (uVar1 < 2) {
      bVar3 = 0;
      goto LAB_109898504;
    }
    if (uVar1 == 2) {
      bVar3 = (byte)param_2[2];
      goto LAB_109898504;
    }
LAB_1098984ec:
    bVar3 = 1;
  }
  else {
    if (uVar1 == 3) {
      FUN_109898518();
      bVar2 = param_1 == 0;
    }
    else {
      if (uVar1 != 6) goto LAB_1098984ec;
      FUN_109898570(&uStack_38);
      if (cStack_21 < '\0') {
        bVar3 = lStack_30 != 0;
        __ZdlPv(uStack_38);
        goto LAB_109898504;
      }
      bVar2 = cStack_21 == '\0';
    }
    bVar3 = !bVar2;
  }
LAB_109898504:
  return bVar3 & 1;
}



/* Entry: 109898518; end: 10989856f;  */

long * FUN_109898518(undefined8 param_1,int *param_2)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  uint uVar5;
  double dVar6;
  long *plStack_38;
  
  if (*param_2 == 3) {
    dVar6 = *(double *)(param_2 + 2);
    uVar5 = 0x7fffffff;
    if (dVar6 <= 0.0) {
      uVar5 = 0x80000000;
    }
    uVar1 = 0;
    if (!NAN(dVar6)) {
      uVar1 = uVar5;
    }
    uVar5 = (int)dVar6;
    if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
      uVar5 = uVar1;
    }
    return (long *)(ulong)uVar5;
  }
  plVar3 = (long *)&UNK_10f68f550;
  FUN_10988bd28();
  if (*param_2 != 6) {
    plVar3 = (long *)&UNK_10f582509;
    FUN_10988bd28();
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    __Unwind_Resume();
    if (*param_2 != 1) {
      FUN_109898688();
      if (plVar3 == (long *)0x0) {
        FUN_10988bd28(&UNK_10f68f52e);
      }
      else {
        FUN_10989879c(extraout_x8_00);
        if (*extraout_x8_00 != 0) {
          return plVar3;
        }
      }
      FUN_10988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109898674);
      (*pcVar2)();
    }
    *extraout_x8_00 = 0;
    extraout_x8_00[1] = 0;
    return plVar3;
  }
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x90))();
  plStack_38 = plVar4;
  (**(code **)(*plVar3 + 0x138))(extraout_x8,plVar3,&plStack_38);
  if (plStack_38 != (long *)0x0) {
    (**(code **)*plStack_38)();
  }
  return plStack_38;
}



/* Entry: 109898570; end: 10989860f;  */

void FUN_109898570(undefined8 param_1,long *param_2,int *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined *puVar3;
  long *extraout_x8;
  long *plStack_28;
  
  if (*param_3 == 6) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x90))(param_2,*(undefined8 *)(param_3 + 2));
    plStack_28 = plVar2;
    (**(code **)(*param_2 + 0x138))(param_1,param_2,&plStack_28);
    if (plStack_28 != (long *)0x0) {
      (**(code **)*plStack_28)();
    }
    return;
  }
  puVar3 = &UNK_10f582509;
  FUN_10988bd28();
  if (plStack_28 != (long *)0x0) {
    (**(code **)*plStack_28)();
  }
  __Unwind_Resume();
  if (*param_3 != 1) {
    FUN_109898688();
    if (puVar3 == (undefined *)0x0) {
      FUN_10988bd28(&UNK_10f68f52e);
    }
    else {
      FUN_10989879c(extraout_x8);
      if (*extraout_x8 != 0) {
        return;
      }
    }
    FUN_10988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109898674);
    (*pcVar1)();
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 109898610; end: 109898687;  */

void FUN_109898610(long *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_109898688();
  if (param_2 == 0) {
    FUN_10988bd28(&UNK_10f68f52e);
  }
  else {
    FUN_10989879c(param_1);
    if (*param_1 != 0) {
      return;
    }
  }
  FUN_10988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109898674);
  (*pcVar1)();
}



/* Entry: 109898688; end: 10989879b;  */

long * FUN_109898688(long *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  if (*param_2 == 7) {
    plVar5 = param_1;
    (**(code **)(*param_1 + 0xa8))(param_1,*(undefined8 *)(param_2 + 2));
    if (plVar5 != (long *)0x0) {
      return plVar5;
    }
    if (*param_2 == 7) {
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x98))(param_1,*(undefined8 *)(param_2 + 2));
      plVar3 = param_1;
      plStack_48 = plVar5;
      (**(code **)(*param_1 + 0x230))(param_1,&plStack_48);
      if ((int)plVar3 == 0) {
        plVar5 = (long *)0x0;
      }
      else {
        (**(code **)(*param_1 + 0x160))(&lStack_40,param_1,&plStack_48);
        plVar5 = *(long **)(lStack_40 + 0x10);
        if (plStack_38 != (long *)0x0) {
          plVar3 = plStack_38 + 1;
          do {
            lVar4 = *plVar3;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = lVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar4 == 0) {
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
          }
        }
      }
      if (plStack_48 == (long *)0x0) {
        return plVar5;
      }
      (**(code **)*plStack_48)();
      return plVar5;
    }
  }
  return (long *)0x0;
}



/* Entry: 10989879c; end: 10989883b;  */

void FUN_10989879c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  ppuVar5 = (undefined **)*param_2;
  if (*(char *)((long)ppuVar5 + 0x21) != '\x01') {
    if (ppuVar5 == &PTR_FUN_110b17478) {
      lVar4 = param_2[2];
      uVar6 = param_2[1];
      param_1[1] = param_2[2];
      *param_1 = uVar6;
      if (lVar4 == 0) {
        return;
      }
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    if (ppuVar5 == &PTR_DAT_110b174a0) {
      *param_1 = 0;
      param_1[1] = 0;
      lVar4 = param_2[2];
      if (lVar4 == 0) {
        return;
      }
      __ZNSt3__119__shared_weak_count4lockEv();
      param_1[1] = lVar4;
      if (lVar4 == 0) {
        return;
      }
      *param_1 = param_2[1];
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10989883c; end: 10989887b;  */

undefined8 FUN_10989883c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10989887c; end: 109898923;  */

void FUN_10989887c(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    func_0x0001098989c0(param_2 + 1);
    *param_2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x20) = param_2;
  }
  return;
}



/* Entry: 109898924; end: 109898943;  */

bool FUN_109898924(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(long *)(*(long *)(param_1 + 0x10) + 8) == -1;
  }
  return true;
}



/* Entry: 109898944; end: 109898a17;  */

void FUN_109898944(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if ((lVar1 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
  }
  *param_1 = uVar2;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109898a18; end: 109898ad7;  */

void FUN_109898a18(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int aiStack_30 [2];
  undefined1 uStack_28;
  undefined7 uStack_27;
  
  FUN_1098849a4(aiStack_30,param_2,param_3);
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b174d8;
  if (aiStack_30[0] == 3) {
    puVar1[3] = param_2;
    *(undefined4 *)(puVar1 + 4) = 3;
    puVar1[5] = CONCAT71(uStack_27,uStack_28);
  }
  else if (aiStack_30[0] == 2) {
    puVar1[3] = param_2;
    *(undefined4 *)(puVar1 + 4) = 2;
    *(undefined1 *)(puVar1 + 5) = uStack_28;
  }
  else if (aiStack_30[0] < 4) {
    puVar1[3] = param_2;
    *(int *)(puVar1 + 4) = aiStack_30[0];
  }
  else {
    puVar1[3] = param_2;
    *(int *)(puVar1 + 4) = aiStack_30[0];
    puVar1[5] = CONCAT71(uStack_27,uStack_28);
  }
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 109898ad8; end: 109898ae7;  */

void FUN_109898ad8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b174d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109898ae8; end: 109898b07;  */

void FUN_109898ae8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b174d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109898b08; end: 109898b2f;  */

void FUN_109898b08(long param_1)

{
  if ((3 < *(int *)(param_1 + 0x20)) && (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000109898b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x28))();
    return;
  }
  return;
}



/* Entry: 109898b30; end: 109898b87;  */

long FUN_109898b30(long param_1)

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



/* Entry: 109898b88; end: 109898d67;  */

/* WARNING: Possible PIC construction at 0x000109899238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001098993e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010989923c) */
/* WARNING: Removing unreachable block (ram,0x000109899248) */
/* WARNING: Removing unreachable block (ram,0x00010989924c) */
/* WARNING: Removing unreachable block (ram,0x000109899254) */
/* WARNING: Removing unreachable block (ram,0x00010989925c) */
/* WARNING: Removing unreachable block (ram,0x000109899260) */

undefined1  [16] FUN_109898b88(long *param_1,long ****param_2,long *****param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  long ****extraout_x8_01;
  ulong uVar9;
  long ***ppplVar10;
  ulong uVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long *****ppppplVar15;
  long lVar16;
  long ***ppplVar17;
  undefined8 *****pppppuVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long ***appplStack_260 [2];
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 ****ppppuStack_240;
  code *pcStack_238;
  undefined1 auStack_230 [8];
  long **pplStack_228;
  long **pplStack_220;
  long **pplStack_218;
  long **pplStack_210;
  long ***ppplStack_208;
  undefined8 ****ppppuStack_1e0;
  code *pcStack_1d8;
  int aiStack_1d0 [2];
  undefined8 *puStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long ***ppplStack_1b0;
  long ***ppplStack_1a8;
  long ***ppplStack_1a0;
  long ***ppplStack_198;
  long **pplStack_190;
  undefined8 ***pppuStack_130;
  code *pcStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  long ****apppplStack_110 [2];
  char cStack_f9;
  long ****pppplStack_f8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  long ***ppplStack_c0;
  undefined8 *puStack_b8;
  undefined1 uStack_a9;
  long ***ppplStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  long ***ppplStack_70;
  long **pplStack_68;
  long **pplStack_60;
  long ***ppplStack_58;
  
  ppppplVar6 = (long *****)&ppplStack_70;
  if (*(int *)param_3 == 7) {
    pppplVar12 = param_2;
    (*(code *)(*param_2)[0x13])(param_2,param_3[1]);
    pppplVar5 = param_2;
    ppplStack_70 = (long ***)pppplVar12;
    (*(code *)(*param_2)[0x41])();
    if (((ulong)pppplVar5 & 1) != 0) {
      ppplStack_58 = ppplStack_70;
      pppplVar5 = param_2;
      (*(code *)(*param_2)[0x4d])(param_2,&ppplStack_58);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      pppplVar12 = pppplVar5;
      func_0x000107732f18(param_1,pppplVar5);
      if (pppplVar5 != (long ****)0x0) {
        pppplVar13 = (long ****)0x0;
        do {
          (*(code *)(*param_2)[0x51])(&ppplStack_70,param_2,&ppplStack_58,pppplVar13);
          if ((int)ppplStack_70 != 3) {
            FUN_10988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x109898ce0);
            (*pcVar3)();
          }
          pplStack_60 = pplStack_68;
          if (0x7fefffffffffffff < ((ulong)pplStack_68 & 0x7fffffffffffffff)) {
            pplStack_60 = (long **)0x0;
          }
          pppplVar12 = (long ****)&pplStack_60;
          FUN_10944b2d4(param_1,pppplVar12);
          if ((3 < (int)ppplStack_70) && ((long ***)pplStack_68 != (long ***)0x0)) {
            (*(code *)**pplStack_68)();
          }
          pppplVar13 = (long ****)((long)pppplVar13 + 1);
        } while (pppplVar5 != pppplVar13);
      }
      if ((long ****)ppplStack_58 != (long ****)0x0) {
        (*(code *)**ppplStack_58)();
      }
      auVar20._8_8_ = pppplVar12;
      auVar20._0_8_ = ppplStack_58;
      return auVar20;
    }
    param_3 = ppppplVar6;
    if ((long ****)ppplStack_70 != (long ****)0x0) {
      (*(code *)**ppplStack_70)();
      param_3 = ppppplVar6;
    }
  }
  pppplVar12 = (long ****)&UNK_10f58253c;
  FUN_10988bd28();
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  if (ppplStack_58 != (long ***)0x0) {
    (*(code *)**ppplStack_58)();
  }
  __Unwind_Resume();
  ppppplVar6 = (long *****)&ppplStack_c0;
  puStack_80 = &stack0xfffffffffffffff0;
  pcStack_78 = FUN_109898d68;
  if (*(int *)param_3 == 7) {
    pppplVar5 = pppplVar12;
    (*(code *)(*pppplVar12)[0x13])();
    pppplVar13 = pppplVar12;
    ppplStack_c0 = (long ***)pppplVar5;
    (*(code *)(*pppplVar12)[0x41])();
    if (((ulong)pppplVar13 & 1) != 0) {
      ppplStack_a8 = ppplStack_c0;
      pppplVar13 = pppplVar12;
      (*(code *)(*pppplVar12)[0x4d])(pppplVar12,&ppplStack_a8);
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      pppplVar5 = pppplVar13;
      func_0x000104becb10(extraout_x8,pppplVar13);
      if (pppplVar13 != (long ****)0x0) {
        pppplVar14 = (long ****)0x0;
        do {
          (*(code *)(*pppplVar12)[0x51])(&ppplStack_c0,pppplVar12,&ppplStack_a8,pppplVar14);
          pppplVar5 = pppplVar12;
          FUN_10989847c(pppplVar12,&ppplStack_c0);
          uStack_a9 = SUB81(pppplVar5,0);
          pppplVar5 = (long ****)&uStack_a9;
          func_0x0001078db3d4(extraout_x8,pppplVar5);
          if ((3 < (int)ppplStack_c0) && (puStack_b8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_b8)();
          }
          pppplVar14 = (long ****)((long)pppplVar14 + 1);
        } while (pppplVar13 != pppplVar14);
      }
      if ((long ****)ppplStack_a8 != (long ****)0x0) {
        (*(code *)**ppplStack_a8)();
      }
      auVar21._8_8_ = pppplVar5;
      auVar21._0_8_ = ppplStack_a8;
      return auVar21;
    }
    param_3 = ppppplVar6;
    if ((long ****)ppplStack_c0 != (long ****)0x0) {
      (*(code *)**ppplStack_c0)();
      param_3 = ppppplVar6;
    }
  }
  ppppplVar6 = (long *****)&UNK_10f58253c;
  FUN_10988bd28();
  if (*extraout_x8 != 0) {
    __ZdlPv();
  }
  if (ppplStack_a8 != (long ***)0x0) {
    (*(code *)**ppplStack_a8)();
  }
  __Unwind_Resume();
  ppuStack_d0 = (undefined8 **)&puStack_80;
  pcStack_c8 = FUN_109898f04;
  if (*(int *)param_3 == 7) {
    ppppplVar7 = ppppplVar6;
    (*(code *)(*ppppplVar6)[0x13])();
    param_3 = apppplStack_110;
    ppppplVar8 = ppppplVar6;
    apppplStack_110[0] = (long ****)ppppplVar7;
    (*(code *)(*ppppplVar6)[0x41])();
    if (((ulong)ppppplVar8 & 1) != 0) {
      pppplStack_f8 = apppplStack_110[0];
      ppppplVar8 = ppppplVar6;
      (*(code *)(*ppppplVar6)[0x4d])(ppppplVar6,&pppplStack_f8);
      *extraout_x8_00 = 0;
      extraout_x8_00[1] = 0;
      extraout_x8_00[2] = 0;
      ppppplVar7 = ppppplVar8;
      func_0x000107c31930(extraout_x8_00,ppppplVar8);
      if (ppppplVar8 != (long *****)0x0) {
        ppppplVar15 = (long *****)0x0;
        do {
          (*(code *)(*ppppplVar6)[0x51])(aiStack_120,ppppplVar6,&pppplStack_f8,ppppplVar15);
          FUN_109898570(apppplStack_110,ppppplVar6,aiStack_120);
          ppppplVar7 = apppplStack_110;
          FUN_1094d24d0(extraout_x8_00,ppppplVar7);
          if (cStack_f9 < '\0') {
            __ZdlPv(apppplStack_110[0]);
          }
          if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
            (**(code **)*puStack_118)();
          }
          ppppplVar15 = (long *****)((long)ppppplVar15 + 1);
        } while (ppppplVar8 != ppppplVar15);
      }
      if ((long *****)pppplStack_f8 != (long *****)0x0) {
        (*(code *)**pppplStack_f8)();
      }
      auVar22._8_8_ = ppppplVar7;
      auVar22._0_8_ = pppplStack_f8;
      return auVar22;
    }
    if ((long *****)apppplStack_110[0] != (long *****)0x0) {
      (*(code *)**apppplStack_110[0])();
    }
  }
  pppplVar12 = (long ****)&UNK_10f58253c;
  FUN_10988bd28();
  func_0x000104c607c8(apppplStack_110);
  if (pppplStack_f8 != (long ****)0x0) {
    (*(code *)**pppplStack_f8)();
  }
  __Unwind_Resume();
  pppplVar4 = (long ****)aiStack_1d0;
  pppuStack_130 = &ppuStack_d0;
  pcStack_128 = FUN_1098990c8;
  if (*(int *)param_3 == 7) {
    pppplVar5 = pppplVar12;
    (*(code *)(*pppplVar12)[0x13])();
    param_3 = (long *****)&ppplStack_1a8;
    pppplVar13 = pppplVar12;
    ppplStack_1a8 = (long ***)pppplVar5;
    (*(code *)(*pppplVar12)[0x41])();
    if (((ulong)pppplVar13 & 1) != 0) {
      ppplStack_1b0 = ppplStack_1a8;
      pppplVar5 = pppplVar12;
      (*(code *)(*pppplVar12)[0x4d])(pppplVar12,&ppplStack_1b0);
      *extraout_x8_01 = (long ***)0x0;
      extraout_x8_01[1] = (long ***)0x0;
      extraout_x8_01[2] = (long ***)0x0;
      pppplVar13 = pppplVar5;
      FUN_109899368(extraout_x8_01,pppplVar5);
      if (pppplVar5 != (long ****)0x0) {
        pppplVar14 = (long ****)0x0;
        do {
          (*(code *)(*pppplVar12)[0x51])(aiStack_1d0,pppplVar12,&ppplStack_1b0,pppplVar14);
          pppplVar13 = (long ****)aiStack_1d0;
          FUN_109898a18(&plStack_1c0,pppplVar12);
          ppplVar17 = extraout_x8_01[1];
          if (extraout_x8_01[2] <= ppplVar17) {
            lVar16 = (long)ppplVar17 - (long)*extraout_x8_01;
            uVar1 = (lVar16 >> 4) + 1;
            if (uVar1 >> 0x3c != 0) {
              FUN_109899404();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1098992e0);
              (*pcVar3)();
            }
            uVar9 = (long)extraout_x8_01[2] - (long)*extraout_x8_01;
            uVar11 = (long)uVar9 >> 3;
            if (uVar11 <= uVar1) {
              uVar11 = uVar1;
            }
            if (0x7fffffffffffffef < uVar9) {
              uVar11 = 0xfffffffffffffff;
            }
            FUN_109899418();
            puVar2 = (undefined8 *)(uVar11 + lVar16);
            puVar2[1] = plStack_1b8;
            *puVar2 = plStack_1c0;
            plStack_1c0 = (long *)0x0;
            plStack_1b8 = (long *)0x0;
            param_3 = (long *****)*extraout_x8_01;
            ppplVar17 = (long ***)((long)puVar2 - ((long)extraout_x8_01[1] - (long)param_3));
            _memcpy(ppplVar17);
            ppplStack_198 = *extraout_x8_01;
            *extraout_x8_01 = ppplVar17;
            extraout_x8_01[1] = (long ***)(puVar2 + 2);
            pplStack_190 = (long **)extraout_x8_01[2];
            extraout_x8_01[2] = (long ***)(uVar11 + (long)pppplVar13 * 0x10);
            ppplStack_1a8 = ppplStack_198;
            ppplStack_1a0 = ppplStack_198;
            pppplVar13 = &ppplStack_1a8;
            uVar19 = 0x10989923c;
            pppplVar5 = extraout_x8_01;
            pppppuVar18 = (undefined8 *****)&pppuStack_130;
            goto SUB_10989944c;
          }
          ppplVar17[1] = (long **)plStack_1b8;
          *ppplVar17 = (long **)plStack_1c0;
          plStack_1c0 = (long *)0x0;
          plStack_1b8 = (long *)0x0;
          extraout_x8_01[1] = ppplVar17 + 2;
          if ((3 < aiStack_1d0[0]) && (puStack_1c8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_1c8)();
          }
          pppplVar14 = (long ****)((long)pppplVar14 + 1);
        } while (pppplVar14 != pppplVar5);
      }
      if ((long ****)ppplStack_1b0 != (long ****)0x0) {
        (*(code *)**ppplStack_1b0)();
      }
      auVar23._8_8_ = pppplVar13;
      auVar23._0_8_ = ppplStack_1b0;
      return auVar23;
    }
    if ((long ****)ppplStack_1a8 != (long ****)0x0) {
      (*(code *)**ppplStack_1a8)();
    }
  }
  pppplVar12 = (long ****)&UNK_10f58253c;
  FUN_10988bd28();
  func_0x000109899498(extraout_x8_01);
  if ((long ****)ppplStack_1b0 != (long ****)0x0) {
    (*(code *)**ppplStack_1b0)();
  }
  pppplVar5 = pppplVar12;
  __Unwind_Resume();
  pppplVar4 = (long ****)auStack_230;
  pcStack_1d8 = FUN_109899368;
  pppppuVar18 = &ppppuStack_1e0;
  ppplVar17 = *pppplVar5;
  if (param_3 <= (long *****)((long)pppplVar5[2] - (long)ppplVar17 >> 4)) {
    auVar24._8_8_ = param_3;
    auVar24._0_8_ = pppplVar5;
    return auVar24;
  }
  ppppuStack_1e0 = &pppuStack_130;
  if ((ulong)param_3 >> 0x3c == 0) {
    ppplVar10 = pppplVar5[1];
    ppppplVar6 = param_3;
    ppplStack_208 = (long ***)pppplVar5;
    FUN_109899418();
    ppplVar17 = (long ***)((long)param_3 + ((long)ppplVar10 - (long)ppplVar17));
    ppppplVar6 = param_3 + (long)ppppplVar6 * 2;
    param_3 = (long *****)*pppplVar5;
    pppplVar12 = (long ****)((long)ppplVar17 - ((long)pppplVar5[1] - (long)param_3));
    _memcpy(pppplVar12);
    pplStack_228 = (long **)*pppplVar5;
    *pppplVar5 = (long ***)pppplVar12;
    pppplVar5[1] = ppplVar17;
    pplStack_210 = (long **)pppplVar5[2];
    pppplVar5[2] = (long ***)ppppplVar6;
    pppplVar13 = (long ****)&pplStack_228;
    uVar19 = 0x1098993ec;
    pplStack_220 = pplStack_228;
    pplStack_218 = pplStack_228;
  }
  else {
    FUN_109899404();
    pcStack_238 = FUN_109899404;
    pppplVar13 = (long ****)&DAT_10f62a4d8;
    ppppuStack_240 = pppppuVar18;
    func_0x000104c4f6cc();
    pppplVar4 = appplStack_260;
    pcStack_248 = FUN_109899418;
    pppppuVar18 = (undefined8 *****)&pppuStack_250;
    appplStack_260[0] = (long ***)pppplVar12;
    if ((ulong)pppplVar13 >> 0x3c == 0) {
      lVar16 = (long)pppplVar13 << 4;
      pppuStack_250 = &ppppuStack_240;
      __Znwm(lVar16);
      auVar25._8_8_ = pppplVar13;
      auVar25._0_8_ = lVar16;
      return auVar25;
    }
    uVar19 = 0x10989944c;
    pppuStack_250 = &ppppuStack_240;
    func_0x000104c4f740();
    pppplVar5 = extraout_x8_01;
  }
SUB_10989944c:
  *(long *****)((long)pppplVar4 + -0x20) = pppplVar12;
  *(long *****)((long)pppplVar4 + -0x18) = pppplVar5;
  *(undefined8 ******)((long)pppplVar4 + -0x10) = pppppuVar18;
  *(undefined8 *)((long)pppplVar4 + -8) = uVar19;
  ppplVar17 = pppplVar13[1];
  ppplVar10 = pppplVar13[2];
  while (ppplVar10 != ppplVar17) {
    pppplVar13[2] = ppplVar10 + -2;
    FUN_109898b30();
    ppplVar10 = pppplVar13[2];
  }
  if (*pppplVar13 != (long ***)0x0) {
    __ZdlPv();
  }
  auVar26._8_8_ = param_3;
  auVar26._0_8_ = pppplVar13;
  return auVar26;
}



/* Entry: 109898d68; end: 109898f03;  */

/* WARNING: Possible PIC construction at 0x000109899238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001098993e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010989923c) */
/* WARNING: Removing unreachable block (ram,0x000109899248) */
/* WARNING: Removing unreachable block (ram,0x00010989924c) */
/* WARNING: Removing unreachable block (ram,0x000109899254) */
/* WARNING: Removing unreachable block (ram,0x00010989925c) */
/* WARNING: Removing unreachable block (ram,0x000109899260) */

undefined1  [16] FUN_109898d68(long *param_1,long ****param_2,long *****param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  undefined8 *extraout_x8;
  long ****extraout_x8_00;
  ulong uVar9;
  long ***ppplVar10;
  ulong uVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long *****ppppplVar14;
  long ****pppplVar15;
  long lVar16;
  long ***ppplVar17;
  undefined8 *****pppppuVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  long ***appplStack_1f0 [2];
  undefined8 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined8 ****ppppuStack_1d0;
  code *pcStack_1c8;
  undefined1 auStack_1c0 [8];
  long **pplStack_1b8;
  long **pplStack_1b0;
  long **pplStack_1a8;
  long **pplStack_1a0;
  long ***ppplStack_198;
  undefined8 ****ppppuStack_170;
  code *pcStack_168;
  int aiStack_160 [2];
  undefined8 *puStack_158;
  long *plStack_150;
  long *plStack_148;
  long ***ppplStack_140;
  long ***ppplStack_138;
  long ***ppplStack_130;
  long ***ppplStack_128;
  long **pplStack_120;
  undefined8 ***pppuStack_c0;
  code *pcStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  long ****apppplStack_a0 [2];
  char cStack_89;
  long ****pppplStack_88;
  undefined8 **ppuStack_60;
  code *pcStack_58;
  long ***ppplStack_50;
  undefined8 *puStack_48;
  undefined1 uStack_39;
  long ***ppplStack_38;
  
  ppppplVar6 = (long *****)&ppplStack_50;
  if (*(int *)param_3 == 7) {
    pppplVar12 = param_2;
    (*(code *)(*param_2)[0x13])(param_2,param_3[1]);
    pppplVar5 = param_2;
    ppplStack_50 = (long ***)pppplVar12;
    (*(code *)(*param_2)[0x41])();
    if (((ulong)pppplVar5 & 1) != 0) {
      ppplStack_38 = ppplStack_50;
      pppplVar5 = param_2;
      (*(code *)(*param_2)[0x4d])(param_2,&ppplStack_38);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      pppplVar12 = pppplVar5;
      func_0x000104becb10(param_1,pppplVar5);
      if (pppplVar5 != (long ****)0x0) {
        pppplVar13 = (long ****)0x0;
        do {
          (*(code *)(*param_2)[0x51])(&ppplStack_50,param_2,&ppplStack_38,pppplVar13);
          pppplVar12 = param_2;
          FUN_10989847c(param_2,&ppplStack_50);
          uStack_39 = SUB81(pppplVar12,0);
          pppplVar12 = (long ****)&uStack_39;
          func_0x0001078db3d4(param_1,pppplVar12);
          if ((3 < (int)ppplStack_50) && (puStack_48 != (undefined8 *)0x0)) {
            (**(code **)*puStack_48)();
          }
          pppplVar13 = (long ****)((long)pppplVar13 + 1);
        } while (pppplVar5 != pppplVar13);
      }
      if ((long ****)ppplStack_38 != (long ****)0x0) {
        (*(code *)**ppplStack_38)();
      }
      auVar20._8_8_ = pppplVar12;
      auVar20._0_8_ = ppplStack_38;
      return auVar20;
    }
    param_3 = ppppplVar6;
    if ((long ****)ppplStack_50 != (long ****)0x0) {
      (*(code *)**ppplStack_50)();
      param_3 = ppppplVar6;
    }
  }
  ppppplVar6 = (long *****)&UNK_10f58253c;
  FUN_10988bd28();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  if (ppplStack_38 != (long ***)0x0) {
    (*(code *)**ppplStack_38)();
  }
  __Unwind_Resume();
  ppuStack_60 = (undefined8 **)&stack0xfffffffffffffff0;
  pcStack_58 = FUN_109898f04;
  if (*(int *)param_3 == 7) {
    ppppplVar7 = ppppplVar6;
    (*(code *)(*ppppplVar6)[0x13])();
    param_3 = apppplStack_a0;
    ppppplVar8 = ppppplVar6;
    apppplStack_a0[0] = (long ****)ppppplVar7;
    (*(code *)(*ppppplVar6)[0x41])();
    if (((ulong)ppppplVar8 & 1) != 0) {
      pppplStack_88 = apppplStack_a0[0];
      ppppplVar8 = ppppplVar6;
      (*(code *)(*ppppplVar6)[0x4d])(ppppplVar6,&pppplStack_88);
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      ppppplVar7 = ppppplVar8;
      func_0x000107c31930(extraout_x8,ppppplVar8);
      if (ppppplVar8 != (long *****)0x0) {
        ppppplVar14 = (long *****)0x0;
        do {
          (*(code *)(*ppppplVar6)[0x51])(aiStack_b0,ppppplVar6,&pppplStack_88,ppppplVar14);
          FUN_109898570(apppplStack_a0,ppppplVar6,aiStack_b0);
          ppppplVar7 = apppplStack_a0;
          FUN_1094d24d0(extraout_x8,ppppplVar7);
          if (cStack_89 < '\0') {
            __ZdlPv(apppplStack_a0[0]);
          }
          if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_a8)();
          }
          ppppplVar14 = (long *****)((long)ppppplVar14 + 1);
        } while (ppppplVar8 != ppppplVar14);
      }
      if ((long *****)pppplStack_88 != (long *****)0x0) {
        (*(code *)**pppplStack_88)();
      }
      auVar21._8_8_ = ppppplVar7;
      auVar21._0_8_ = pppplStack_88;
      return auVar21;
    }
    if ((long *****)apppplStack_a0[0] != (long *****)0x0) {
      (*(code *)**apppplStack_a0[0])();
    }
  }
  pppplVar12 = (long ****)&UNK_10f58253c;
  FUN_10988bd28();
  func_0x000104c607c8(apppplStack_a0);
  if (pppplStack_88 != (long ****)0x0) {
    (*(code *)**pppplStack_88)();
  }
  __Unwind_Resume();
  pppplVar4 = (long ****)aiStack_160;
  pppuStack_c0 = &ppuStack_60;
  pcStack_b8 = FUN_1098990c8;
  if (*(int *)param_3 == 7) {
    pppplVar5 = pppplVar12;
    (*(code *)(*pppplVar12)[0x13])();
    param_3 = (long *****)&ppplStack_138;
    pppplVar13 = pppplVar12;
    ppplStack_138 = (long ***)pppplVar5;
    (*(code *)(*pppplVar12)[0x41])();
    if (((ulong)pppplVar13 & 1) != 0) {
      ppplStack_140 = ppplStack_138;
      pppplVar5 = pppplVar12;
      (*(code *)(*pppplVar12)[0x4d])(pppplVar12,&ppplStack_140);
      *extraout_x8_00 = (long ***)0x0;
      extraout_x8_00[1] = (long ***)0x0;
      extraout_x8_00[2] = (long ***)0x0;
      pppplVar13 = pppplVar5;
      FUN_109899368(extraout_x8_00,pppplVar5);
      if (pppplVar5 != (long ****)0x0) {
        pppplVar15 = (long ****)0x0;
        do {
          (*(code *)(*pppplVar12)[0x51])(aiStack_160,pppplVar12,&ppplStack_140,pppplVar15);
          pppplVar13 = (long ****)aiStack_160;
          FUN_109898a18(&plStack_150,pppplVar12);
          ppplVar17 = extraout_x8_00[1];
          if (extraout_x8_00[2] <= ppplVar17) {
            lVar16 = (long)ppplVar17 - (long)*extraout_x8_00;
            uVar1 = (lVar16 >> 4) + 1;
            if (uVar1 >> 0x3c != 0) {
              FUN_109899404();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1098992e0);
              (*pcVar3)();
            }
            uVar9 = (long)extraout_x8_00[2] - (long)*extraout_x8_00;
            uVar11 = (long)uVar9 >> 3;
            if (uVar11 <= uVar1) {
              uVar11 = uVar1;
            }
            if (0x7fffffffffffffef < uVar9) {
              uVar11 = 0xfffffffffffffff;
            }
            FUN_109899418();
            puVar2 = (undefined8 *)(uVar11 + lVar16);
            puVar2[1] = plStack_148;
            *puVar2 = plStack_150;
            plStack_150 = (long *)0x0;
            plStack_148 = (long *)0x0;
            param_3 = (long *****)*extraout_x8_00;
            ppplVar17 = (long ***)((long)puVar2 - ((long)extraout_x8_00[1] - (long)param_3));
            _memcpy(ppplVar17);
            ppplStack_128 = *extraout_x8_00;
            *extraout_x8_00 = ppplVar17;
            extraout_x8_00[1] = (long ***)(puVar2 + 2);
            pplStack_120 = (long **)extraout_x8_00[2];
            extraout_x8_00[2] = (long ***)(uVar11 + (long)pppplVar13 * 0x10);
            ppplStack_138 = ppplStack_128;
            ppplStack_130 = ppplStack_128;
            pppplVar13 = &ppplStack_138;
            uVar19 = 0x10989923c;
            pppplVar5 = extraout_x8_00;
            pppppuVar18 = (undefined8 *****)&pppuStack_c0;
            goto SUB_10989944c;
          }
          ppplVar17[1] = (long **)plStack_148;
          *ppplVar17 = (long **)plStack_150;
          plStack_150 = (long *)0x0;
          plStack_148 = (long *)0x0;
          extraout_x8_00[1] = ppplVar17 + 2;
          if ((3 < aiStack_160[0]) && (puStack_158 != (undefined8 *)0x0)) {
            (**(code **)*puStack_158)();
          }
          pppplVar15 = (long ****)((long)pppplVar15 + 1);
        } while (pppplVar15 != pppplVar5);
      }
      if ((long ****)ppplStack_140 != (long ****)0x0) {
        (*(code *)**ppplStack_140)();
      }
      auVar22._8_8_ = pppplVar13;
      auVar22._0_8_ = ppplStack_140;
      return auVar22;
    }
    if ((long ****)ppplStack_138 != (long ****)0x0) {
      (*(code *)**ppplStack_138)();
    }
  }
  pppplVar12 = (long ****)&UNK_10f58253c;
  FUN_10988bd28();
  func_0x000109899498(extraout_x8_00);
  if ((long ****)ppplStack_140 != (long ****)0x0) {
    (*(code *)**ppplStack_140)();
  }
  pppplVar5 = pppplVar12;
  __Unwind_Resume();
  pppplVar4 = (long ****)auStack_1c0;
  pcStack_168 = FUN_109899368;
  pppppuVar18 = &ppppuStack_170;
  ppplVar17 = *pppplVar5;
  if (param_3 <= (long *****)((long)pppplVar5[2] - (long)ppplVar17 >> 4)) {
    auVar23._8_8_ = param_3;
    auVar23._0_8_ = pppplVar5;
    return auVar23;
  }
  ppppuStack_170 = &pppuStack_c0;
  if ((ulong)param_3 >> 0x3c == 0) {
    ppplVar10 = pppplVar5[1];
    ppppplVar6 = param_3;
    ppplStack_198 = (long ***)pppplVar5;
    FUN_109899418();
    ppplVar17 = (long ***)((long)param_3 + ((long)ppplVar10 - (long)ppplVar17));
    ppppplVar6 = param_3 + (long)ppppplVar6 * 2;
    param_3 = (long *****)*pppplVar5;
    pppplVar12 = (long ****)((long)ppplVar17 - ((long)pppplVar5[1] - (long)param_3));
    _memcpy(pppplVar12);
    pplStack_1b8 = (long **)*pppplVar5;
    *pppplVar5 = (long ***)pppplVar12;
    pppplVar5[1] = ppplVar17;
    pplStack_1a0 = (long **)pppplVar5[2];
    pppplVar5[2] = (long ***)ppppplVar6;
    pppplVar13 = (long ****)&pplStack_1b8;
    uVar19 = 0x1098993ec;
    pplStack_1b0 = pplStack_1b8;
    pplStack_1a8 = pplStack_1b8;
  }
  else {
    FUN_109899404();
    pcStack_1c8 = FUN_109899404;
    pppplVar13 = (long ****)&DAT_10f62a4d8;
    ppppuStack_1d0 = pppppuVar18;
    func_0x000104c4f6cc();
    pppplVar4 = appplStack_1f0;
    pcStack_1d8 = FUN_109899418;
    pppppuVar18 = (undefined8 *****)&pppuStack_1e0;
    appplStack_1f0[0] = (long ***)pppplVar12;
    if ((ulong)pppplVar13 >> 0x3c == 0) {
      lVar16 = (long)pppplVar13 << 4;
      pppuStack_1e0 = &ppppuStack_1d0;
      __Znwm(lVar16);
      auVar24._8_8_ = pppplVar13;
      auVar24._0_8_ = lVar16;
      return auVar24;
    }
    uVar19 = 0x10989944c;
    pppuStack_1e0 = &ppppuStack_1d0;
    func_0x000104c4f740();
    pppplVar5 = extraout_x8_00;
  }
SUB_10989944c:
  *(long *****)((long)pppplVar4 + -0x20) = pppplVar12;
  *(long *****)((long)pppplVar4 + -0x18) = pppplVar5;
  *(undefined8 ******)((long)pppplVar4 + -0x10) = pppppuVar18;
  *(undefined8 *)((long)pppplVar4 + -8) = uVar19;
  ppplVar17 = pppplVar13[1];
  ppplVar10 = pppplVar13[2];
  while (ppplVar10 != ppplVar17) {
    pppplVar13[2] = ppplVar10 + -2;
    FUN_109898b30();
    ppplVar10 = pppplVar13[2];
  }
  if (*pppplVar13 != (long ***)0x0) {
    __ZdlPv();
  }
  auVar25._8_8_ = param_3;
  auVar25._0_8_ = pppplVar13;
  return auVar25;
}



/* Entry: 109898f04; end: 1098990c7;  */

/* WARNING: Possible PIC construction at 0x000109899238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001098993e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010989923c) */
/* WARNING: Removing unreachable block (ram,0x000109899248) */
/* WARNING: Removing unreachable block (ram,0x00010989924c) */
/* WARNING: Removing unreachable block (ram,0x000109899254) */
/* WARNING: Removing unreachable block (ram,0x00010989925c) */
/* WARNING: Removing unreachable block (ram,0x000109899260) */

undefined1  [16] FUN_109898f04(long ****param_1,long *****param_2,long *****param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long ****pppplVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ****extraout_x8;
  ulong uVar9;
  long ***ppplVar10;
  ulong uVar11;
  long ****pppplVar12;
  long *****ppppplVar13;
  long ****pppplVar14;
  long lVar15;
  long ***ppplVar16;
  undefined8 *****pppppuVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long ***appplStack_1a0 [2];
  undefined8 ***pppuStack_190;
  code *pcStack_188;
  undefined8 ****ppppuStack_180;
  code *pcStack_178;
  undefined1 auStack_170 [8];
  long **pplStack_168;
  long **pplStack_160;
  long **pplStack_158;
  long **pplStack_150;
  long ***ppplStack_148;
  undefined8 ****ppppuStack_120;
  code *pcStack_118;
  int aiStack_110 [2];
  undefined8 *puStack_108;
  long *plStack_100;
  long *plStack_f8;
  long ***ppplStack_f0;
  long ***ppplStack_e8;
  long ***ppplStack_e0;
  long ***ppplStack_d8;
  long **pplStack_d0;
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  long ****apppplStack_50 [2];
  char cStack_39;
  long ****pppplStack_38;
  
  if (*(int *)param_3 == 7) {
    ppppplVar5 = param_2;
    (*(code *)(*param_2)[0x13])(param_2,param_3[1]);
    param_3 = apppplStack_50;
    ppppplVar6 = param_2;
    apppplStack_50[0] = (long ****)ppppplVar5;
    (*(code *)(*param_2)[0x41])();
    if (((ulong)ppppplVar6 & 1) != 0) {
      pppplStack_38 = apppplStack_50[0];
      ppppplVar6 = param_2;
      (*(code *)(*param_2)[0x4d])(param_2,&pppplStack_38);
      *param_1 = (long ***)0x0;
      param_1[1] = (long ***)0x0;
      param_1[2] = (long ***)0x0;
      ppppplVar5 = ppppplVar6;
      func_0x000107c31930(param_1,ppppplVar6);
      if (ppppplVar6 != (long *****)0x0) {
        ppppplVar13 = (long *****)0x0;
        do {
          (*(code *)(*param_2)[0x51])(aiStack_60,param_2,&pppplStack_38,ppppplVar13);
          FUN_109898570(apppplStack_50,param_2,aiStack_60);
          ppppplVar5 = apppplStack_50;
          FUN_1094d24d0(param_1,ppppplVar5);
          if (cStack_39 < '\0') {
            __ZdlPv(apppplStack_50[0]);
          }
          if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
            (**(code **)*puStack_58)();
          }
          ppppplVar13 = (long *****)((long)ppppplVar13 + 1);
        } while (ppppplVar6 != ppppplVar13);
      }
      if ((long *****)pppplStack_38 != (long *****)0x0) {
        (*(code *)**pppplStack_38)();
      }
      auVar19._8_8_ = ppppplVar5;
      auVar19._0_8_ = pppplStack_38;
      return auVar19;
    }
    if ((long *****)apppplStack_50[0] != (long *****)0x0) {
      (*(code *)**apppplStack_50[0])();
    }
  }
  pppplVar12 = (long ****)&UNK_10f58253c;
  FUN_10988bd28();
  apppplStack_50[0] = param_1;
  func_0x000104c607c8(apppplStack_50);
  if (pppplStack_38 != (long ****)0x0) {
    (*(code *)**pppplStack_38)();
  }
  __Unwind_Resume();
  pppplVar4 = (long ****)aiStack_110;
  pppuStack_70 = (undefined8 ***)&stack0xfffffffffffffff0;
  pcStack_68 = FUN_1098990c8;
  if (*(int *)param_3 == 7) {
    pppplVar7 = pppplVar12;
    (*(code *)(*pppplVar12)[0x13])();
    param_3 = (long *****)&ppplStack_e8;
    pppplVar8 = pppplVar12;
    ppplStack_e8 = (long ***)pppplVar7;
    (*(code *)(*pppplVar12)[0x41])();
    if (((ulong)pppplVar8 & 1) != 0) {
      ppplStack_f0 = ppplStack_e8;
      pppplVar7 = pppplVar12;
      (*(code *)(*pppplVar12)[0x4d])(pppplVar12,&ppplStack_f0);
      *extraout_x8 = (long ***)0x0;
      extraout_x8[1] = (long ***)0x0;
      extraout_x8[2] = (long ***)0x0;
      pppplVar8 = pppplVar7;
      FUN_109899368(extraout_x8,pppplVar7);
      if (pppplVar7 != (long ****)0x0) {
        pppplVar14 = (long ****)0x0;
        do {
          (*(code *)(*pppplVar12)[0x51])(aiStack_110,pppplVar12,&ppplStack_f0,pppplVar14);
          pppplVar8 = (long ****)aiStack_110;
          FUN_109898a18(&plStack_100,pppplVar12);
          ppplVar16 = extraout_x8[1];
          if (extraout_x8[2] <= ppplVar16) {
            lVar15 = (long)ppplVar16 - (long)*extraout_x8;
            uVar1 = (lVar15 >> 4) + 1;
            if (uVar1 >> 0x3c != 0) {
              FUN_109899404();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1098992e0);
              (*pcVar3)();
            }
            uVar9 = (long)extraout_x8[2] - (long)*extraout_x8;
            uVar11 = (long)uVar9 >> 3;
            if (uVar11 <= uVar1) {
              uVar11 = uVar1;
            }
            if (0x7fffffffffffffef < uVar9) {
              uVar11 = 0xfffffffffffffff;
            }
            FUN_109899418();
            puVar2 = (undefined8 *)(uVar11 + lVar15);
            puVar2[1] = plStack_f8;
            *puVar2 = plStack_100;
            plStack_100 = (long *)0x0;
            plStack_f8 = (long *)0x0;
            param_3 = (long *****)*extraout_x8;
            ppplVar16 = (long ***)((long)puVar2 - ((long)extraout_x8[1] - (long)param_3));
            _memcpy(ppplVar16);
            ppplStack_d8 = *extraout_x8;
            *extraout_x8 = ppplVar16;
            extraout_x8[1] = (long ***)(puVar2 + 2);
            pplStack_d0 = (long **)extraout_x8[2];
            extraout_x8[2] = (long ***)(uVar11 + (long)pppplVar8 * 0x10);
            ppplStack_e8 = ppplStack_d8;
            ppplStack_e0 = ppplStack_d8;
            pppplVar8 = &ppplStack_e8;
            uVar18 = 0x10989923c;
            pppplVar7 = extraout_x8;
            pppppuVar17 = (undefined8 *****)&pppuStack_70;
            goto SUB_10989944c;
          }
          ppplVar16[1] = (long **)plStack_f8;
          *ppplVar16 = (long **)plStack_100;
          plStack_100 = (long *)0x0;
          plStack_f8 = (long *)0x0;
          extraout_x8[1] = ppplVar16 + 2;
          if ((3 < aiStack_110[0]) && (puStack_108 != (undefined8 *)0x0)) {
            (**(code **)*puStack_108)();
          }
          pppplVar14 = (long ****)((long)pppplVar14 + 1);
        } while (pppplVar14 != pppplVar7);
      }
      if ((long ****)ppplStack_f0 != (long ****)0x0) {
        (*(code *)**ppplStack_f0)();
      }
      auVar20._8_8_ = pppplVar8;
      auVar20._0_8_ = ppplStack_f0;
      return auVar20;
    }
    if ((long ****)ppplStack_e8 != (long ****)0x0) {
      (*(code *)**ppplStack_e8)();
    }
  }
  pppplVar12 = (long ****)&UNK_10f58253c;
  FUN_10988bd28();
  func_0x000109899498(extraout_x8);
  if ((long ****)ppplStack_f0 != (long ****)0x0) {
    (*(code *)**ppplStack_f0)();
  }
  pppplVar7 = pppplVar12;
  __Unwind_Resume();
  pppplVar4 = (long ****)auStack_170;
  pcStack_118 = FUN_109899368;
  pppppuVar17 = &ppppuStack_120;
  ppplVar16 = *pppplVar7;
  if (param_3 <= (long *****)((long)pppplVar7[2] - (long)ppplVar16 >> 4)) {
    auVar21._8_8_ = param_3;
    auVar21._0_8_ = pppplVar7;
    return auVar21;
  }
  ppppuStack_120 = &pppuStack_70;
  if ((ulong)param_3 >> 0x3c == 0) {
    ppplVar10 = pppplVar7[1];
    ppppplVar5 = param_3;
    ppplStack_148 = (long ***)pppplVar7;
    FUN_109899418();
    ppplVar16 = (long ***)((long)param_3 + ((long)ppplVar10 - (long)ppplVar16));
    ppppplVar5 = param_3 + (long)ppppplVar5 * 2;
    param_3 = (long *****)*pppplVar7;
    pppplVar12 = (long ****)((long)ppplVar16 - ((long)pppplVar7[1] - (long)param_3));
    _memcpy(pppplVar12);
    pplStack_168 = (long **)*pppplVar7;
    *pppplVar7 = (long ***)pppplVar12;
    pppplVar7[1] = ppplVar16;
    pplStack_150 = (long **)pppplVar7[2];
    pppplVar7[2] = (long ***)ppppplVar5;
    pppplVar8 = (long ****)&pplStack_168;
    uVar18 = 0x1098993ec;
    pplStack_160 = pplStack_168;
    pplStack_158 = pplStack_168;
  }
  else {
    FUN_109899404();
    pcStack_178 = FUN_109899404;
    pppplVar8 = (long ****)&DAT_10f62a4d8;
    ppppuStack_180 = pppppuVar17;
    func_0x000104c4f6cc();
    pppplVar4 = appplStack_1a0;
    pcStack_188 = FUN_109899418;
    pppppuVar17 = (undefined8 *****)&pppuStack_190;
    appplStack_1a0[0] = (long ***)pppplVar12;
    if ((ulong)pppplVar8 >> 0x3c == 0) {
      lVar15 = (long)pppplVar8 << 4;
      pppuStack_190 = &ppppuStack_180;
      __Znwm(lVar15);
      auVar22._8_8_ = pppplVar8;
      auVar22._0_8_ = lVar15;
      return auVar22;
    }
    uVar18 = 0x10989944c;
    pppuStack_190 = &ppppuStack_180;
    func_0x000104c4f740();
    pppplVar7 = extraout_x8;
  }
SUB_10989944c:
  *(long *****)((long)pppplVar4 + -0x20) = pppplVar12;
  *(long *****)((long)pppplVar4 + -0x18) = pppplVar7;
  *(undefined8 ******)((long)pppplVar4 + -0x10) = pppppuVar17;
  *(undefined8 *)((long)pppplVar4 + -8) = uVar18;
  ppplVar16 = pppplVar8[1];
  ppplVar10 = pppplVar8[2];
  while (ppplVar10 != ppplVar16) {
    pppplVar8[2] = ppplVar10 + -2;
    FUN_109898b30();
    ppplVar10 = pppplVar8[2];
  }
  if (*pppplVar8 != (long ***)0x0) {
    __ZdlPv();
  }
  auVar23._8_8_ = param_3;
  auVar23._0_8_ = pppplVar8;
  return auVar23;
}



/* Entry: 1098990c8; end: 109899367;  */

/* WARNING: Possible PIC construction at 0x000109899238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001098993e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010989923c) */
/* WARNING: Removing unreachable block (ram,0x000109899248) */
/* WARNING: Removing unreachable block (ram,0x00010989924c) */
/* WARNING: Removing unreachable block (ram,0x000109899254) */
/* WARNING: Removing unreachable block (ram,0x00010989925c) */
/* WARNING: Removing unreachable block (ram,0x000109899260) */

undefined1  [16] FUN_1098990c8(long *param_1,long *param_2,long **param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long **pplVar4;
  long *plVar5;
  long **pplVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 ****ppppuVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *plStack_140;
  long *plStack_138;
  undefined8 **ppuStack_130;
  code *pcStack_128;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  undefined1 auStack_110 [8];
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 ***pppuStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  pplVar4 = (long **)&lStack_b0;
  if (*(int *)param_3 == 7) {
    plVar5 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,param_3[1]);
    param_3 = &plStack_88;
    plVar7 = param_2;
    plStack_88 = plVar5;
    (**(code **)(*param_2 + 0x208))();
    if (((ulong)plVar7 & 1) != 0) {
      plStack_90 = plStack_88;
      plVar5 = param_2;
      (**(code **)(*param_2 + 0x268))(param_2,&plStack_90);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar7 = plVar5;
      FUN_109899368(param_1,plVar5);
      if (plVar5 != (long *)0x0) {
        plVar11 = (long *)0x0;
        do {
          (**(code **)(*param_2 + 0x288))(&lStack_b0,param_2,&plStack_90,plVar11);
          plVar7 = &lStack_b0;
          FUN_109898a18(&uStack_a0,param_2);
          puVar2 = (undefined8 *)param_1[1];
          if ((undefined8 *)param_1[2] <= puVar2) {
            lVar12 = (long)puVar2 - *param_1;
            uVar1 = (lVar12 >> 4) + 1;
            if (uVar1 >> 0x3c != 0) {
              FUN_109899404();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1098992e0);
              (*pcVar3)();
            }
            uVar8 = param_1[2] - *param_1;
            uVar10 = (long)uVar8 >> 3;
            if (uVar10 <= uVar1) {
              uVar10 = uVar1;
            }
            if (0x7fffffffffffffef < uVar8) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = param_1;
            FUN_109899418();
            puVar2 = (undefined8 *)(uVar10 + lVar12);
            puVar2[1] = uStack_98;
            *puVar2 = uStack_a0;
            uStack_a0 = 0;
            uStack_98 = 0;
            param_3 = (long **)*param_1;
            lVar12 = (long)puVar2 - (param_1[1] - (long)param_3);
            _memcpy(lVar12);
            plStack_78 = (long *)*param_1;
            *param_1 = lVar12;
            param_1[1] = (long)(puVar2 + 2);
            lStack_70 = param_1[2];
            param_1[2] = uVar10 + (long)plVar7 * 0x10;
            plStack_88 = plStack_78;
            plStack_80 = plStack_78;
            pplVar6 = &plStack_88;
            uVar14 = 0x10989923c;
            ppppuVar13 = (undefined8 ****)&stack0xfffffffffffffff0;
            goto SUB_10989944c;
          }
          puVar2[1] = uStack_98;
          *puVar2 = uStack_a0;
          uStack_a0 = 0;
          uStack_98 = 0;
          param_1[1] = (long)(puVar2 + 2);
          if ((3 < (int)lStack_b0) && (puStack_a8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_a8)();
          }
          plVar11 = (long *)((long)plVar11 + 1);
        } while (plVar11 != plVar5);
      }
      if (plStack_90 != (long *)0x0) {
        (**(code **)*plStack_90)();
      }
      auVar15._8_8_ = plVar7;
      auVar15._0_8_ = plStack_90;
      return auVar15;
    }
    if (plStack_88 != (long *)0x0) {
      (**(code **)*plStack_88)();
    }
  }
  param_2 = (long *)&UNK_10f58253c;
  FUN_10988bd28();
  func_0x000109899498(param_1);
  if (plStack_90 != (long *)0x0) {
    (**(code **)*plStack_90)();
  }
  plVar5 = param_2;
  __Unwind_Resume();
  pplVar4 = (long **)auStack_110;
  pcStack_b8 = FUN_109899368;
  ppppuVar13 = &pppuStack_c0;
  lVar12 = *plVar5;
  if (param_3 <= (long **)(plVar5[2] - lVar12 >> 4)) {
    auVar16._8_8_ = param_3;
    auVar16._0_8_ = plVar5;
    return auVar16;
  }
  pppuStack_c0 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((ulong)param_3 >> 0x3c == 0) {
    lVar9 = plVar5[1];
    pplVar6 = param_3;
    plStack_e8 = plVar5;
    FUN_109899418();
    lVar12 = (long)param_3 + (lVar9 - lVar12);
    pplVar6 = param_3 + (long)pplVar6 * 2;
    param_3 = (long **)*plVar5;
    param_2 = (long *)(lVar12 - (plVar5[1] - (long)param_3));
    _memcpy(param_2);
    plStack_108 = (long *)*plVar5;
    *plVar5 = (long)param_2;
    plVar5[1] = lVar12;
    lStack_f0 = plVar5[2];
    plVar5[2] = (long)pplVar6;
    pplVar6 = &plStack_108;
    uVar14 = 0x1098993ec;
    param_1 = plVar5;
    plStack_100 = plStack_108;
    plStack_f8 = plStack_108;
  }
  else {
    FUN_109899404();
    pcStack_118 = FUN_109899404;
    pplVar6 = (long **)&DAT_10f62a4d8;
    pppuStack_120 = ppppuVar13;
    func_0x000104c4f6cc();
    pplVar4 = &plStack_140;
    pcStack_128 = FUN_109899418;
    ppppuVar13 = (undefined8 ****)&ppuStack_130;
    plStack_140 = param_2;
    plStack_138 = param_1;
    if ((ulong)pplVar6 >> 0x3c == 0) {
      lVar12 = (long)pplVar6 << 4;
      ppuStack_130 = &pppuStack_120;
      __Znwm(lVar12);
      auVar17._8_8_ = pplVar6;
      auVar17._0_8_ = lVar12;
      return auVar17;
    }
    uVar14 = 0x10989944c;
    ppuStack_130 = &pppuStack_120;
    func_0x000104c4f740();
  }
SUB_10989944c:
  *(long **)((long)pplVar4 + -0x20) = param_2;
  *(long **)((long)pplVar4 + -0x18) = param_1;
  *(undefined8 *****)((long)pplVar4 + -0x10) = ppppuVar13;
  *(undefined8 *)((long)pplVar4 + -8) = uVar14;
  plVar5 = pplVar6[1];
  plVar7 = pplVar6[2];
  while (plVar7 != plVar5) {
    pplVar6[2] = plVar7 + -2;
    FUN_109898b30();
    plVar7 = pplVar6[2];
  }
  if (*pplVar6 != (long *)0x0) {
    __ZdlPv();
  }
  auVar18._8_8_ = param_3;
  auVar18._0_8_ = pplVar6;
  return auVar18;
}



/* Entry: 109899368; end: 109899403;  */

/* WARNING: Possible PIC construction at 0x0001098993e8: Changing call to branch */

undefined1  [16] FUN_109899368(ulong *param_1,ulong param_2)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x19;
  ulong unaff_x20;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  puVar1 = auStack_60;
  ppuVar7 = (undefined1 **)&stack0xfffffffffffffff0;
  uVar4 = *param_1;
  if (param_2 <= (ulong)((long)(param_1[2] - uVar4) >> 4)) {
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = param_1;
    return auVar9;
  }
  if (param_2 >> 0x3c == 0) {
    uVar6 = param_1[1];
    uVar5 = param_2;
    puStack_38 = param_1;
    FUN_109899418();
    uVar4 = param_2 + (uVar6 - uVar4);
    uVar5 = param_2 + uVar5 * 0x10;
    param_2 = *param_1;
    unaff_x20 = uVar4 - (param_1[1] - param_2);
    _memcpy(unaff_x20);
    uStack_48 = *param_1;
    *param_1 = unaff_x20;
    param_1[1] = uVar4;
    uStack_40 = param_1[2];
    param_1[2] = uVar5;
    uStack_58 = uStack_48;
    uStack_50 = uStack_48;
    puVar2 = &uStack_58;
    uVar8 = 0x1098993ec;
    unaff_x19 = param_1;
  }
  else {
    FUN_109899404();
    pcStack_68 = FUN_109899404;
    puVar2 = (ulong *)&DAT_10f62a4d8;
    ppuStack_70 = ppuVar7;
    func_0x000104c4f6cc();
    puVar1 = &stack0xffffffffffffff70;
    pcStack_78 = FUN_109899418;
    ppuVar7 = &puStack_80;
    if ((ulong)puVar2 >> 0x3c == 0) {
      lVar3 = (long)puVar2 << 4;
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm(lVar3);
      auVar10._8_8_ = puVar2;
      auVar10._0_8_ = lVar3;
      return auVar10;
    }
    uVar8 = 0x10989944c;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000104c4f740();
  }
  *(ulong *)(puVar1 + -0x20) = unaff_x20;
  *(ulong **)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar1 + -0x10) = ppuVar7;
  *(undefined8 *)(puVar1 + -8) = uVar8;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  while (uVar5 != uVar4) {
    puVar2[2] = uVar5 - 0x10;
    FUN_109898b30();
    uVar5 = puVar2[2];
  }
  if (*puVar2 != 0) {
    __ZdlPv();
  }
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = puVar2;
  return auVar11;
}



/* Entry: 109899404; end: 109899417;  */

undefined1  [16] FUN_109899404(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_109898b30();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 109899418; end: 1098994f3;  */

undefined1  [16] FUN_109899418(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_109898b30();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1098994f4; end: 109899587;  */

void FUN_1098994f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_1098849a4(aiStack_30,param_2,param_3);
  FUN_109899588(param_1,param_2,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 109899588; end: 10989982b;  */

ulong * FUN_109899588(ulong *param_1,long *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long **pplVar7;
  long lVar8;
  undefined1 *puStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [3];
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (*param_3 == 7) {
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar5 = param_2;
    plStack_70 = plVar4;
    (**(code **)(*param_2 + 0x58))(param_2);
    FUN_109899ccc();
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x2e8))(param_2,&plStack_70,plVar5);
    if ((int)plVar4 != 0) {
      pplVar7 = &plStack_70;
      plVar5 = param_2;
      FUN_10989982c();
      *param_1 = (ulong)plVar5;
      param_1[1] = (ulong)pplVar7;
      FUN_1098873f8(auStack_58,auStack_88,param_3);
      FUN_109886668(param_1 + 2,auStack_58);
      if (plStack_50 != (long *)0x0) {
        plVar5 = plStack_50 + 1;
        do {
          lVar8 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
        }
      }
    }
    if (plStack_70 != (long *)0x0) {
      (**(code **)*plStack_70)();
    }
    if (((ulong)plVar4 & 1) != 0) {
      return param_1;
    }
  }
  puStack_c8 = &DAT_10f581f75;
  uStack_c0 = 10;
  FUN_1098998d4(auStack_b8,&puStack_c8);
  FUN_10928a5e0(auStack_a0,&UNK_10f493d5b,auStack_b8);
  FUN_109259240(auStack_88,auStack_a0,&UNK_10f582552);
  FUN_109899970(&puStack_e0,param_2,param_3);
  if (-1 < (char)bStack_c9) {
    uStack_d8 = (ulong)bStack_c9;
    puStack_e0 = (undefined1 *)&puStack_e0;
  }
  puVar6 = auStack_88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,puStack_e0,uStack_d8);
  uStack_68 = puVar6[1];
  plStack_70 = (long *)*puVar6;
  uStack_60 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  FUN_109259240(auStack_58,&plStack_70,&DAT_10f638984);
  FUN_10989842c(auStack_58);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109899760);
  (*pcVar3)();
}



/* Entry: 10989982c; end: 1098998d3;  */

undefined1  [16] FUN_10989982c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  long *plStack_28;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x98))(param_1,*param_2);
  plVar2 = param_1;
  plStack_28 = plVar1;
  (**(code **)(*param_1 + 0x360))(param_1,&plStack_28);
  (**(code **)(*param_1 + 0x350))(param_1,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    (**(code **)*plStack_28)();
  }
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = plVar2;
  return auVar3;
}



/* Entry: 1098998d4; end: 10989996f;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

ulong * FUN_1098998d4(ulong *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *extraout_x8;
  ulong *unaff_x19;
  ulong uVar8;
  ulong *unaff_x21;
  undefined8 uVar9;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar10;
  ulong *puStack_a0;
  int aiStack_98 [2];
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  ulong uStack_60;
  code *pcStack_48;
  
  puVar10 = &stack0xfffffffffffffff0;
  uVar8 = *(ulong *)(param_2 + 2);
  if (uVar8 < 0x7ffffffffffffff8) {
    uVar9 = *(undefined8 *)param_2;
    if (uVar8 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar8;
      puVar5 = param_1;
      if (uVar8 == 0) goto LAB_109899950;
    }
    else {
      puVar6 = (ulong *)0x19;
      if ((uVar8 | 7) != 0x17) {
        puVar6 = (ulong *)((uVar8 | 7) + 1);
      }
      puVar5 = puVar6;
      __Znwm();
      param_1[1] = uVar8;
      param_1[2] = (ulong)puVar6 | 0x8000000000000000;
      *param_1 = (ulong)puVar5;
    }
    _memmove(puVar5,uVar9,uVar8);
LAB_109899950:
    *(undefined1 *)((long)puVar5 + uVar8) = 0;
    return param_1;
  }
  func_0x000104c4f6b8();
  pcStack_48 = FUN_109899970;
  iVar1 = *param_2;
  uStack_60 = uVar8;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        puVar2 = &stack0xffffffffffffffc0;
        puVar6 = extraout_x8;
        puVar5 = (ulong *)"undefined";
      }
      else {
        if (iVar1 != 1) goto LAB_109899bbc;
        puVar2 = &stack0xffffffffffffffc0;
        puVar6 = extraout_x8;
        puVar5 = (ulong *)"null";
      }
    }
    else if (iVar1 == 2) {
      puVar2 = &stack0xffffffffffffffc0;
      puVar6 = extraout_x8;
      puVar5 = (ulong *)"true";
      if ((char)param_2[2] == '\0') {
        puVar2 = &stack0xffffffffffffffc0;
        puVar6 = extraout_x8;
        puVar5 = (ulong *)&DAT_10f6842c6;
      }
    }
    else {
      if (iVar1 != 3) goto LAB_109899bbc;
      puVar2 = &stack0xffffffffffffffc0;
      puVar6 = extraout_x8;
      puVar5 = (ulong *)"number";
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      puVar2 = &stack0xffffffffffffffc0;
      puVar6 = extraout_x8;
      puVar5 = (ulong *)&DAT_10f4102db;
    }
    else {
      if (iVar1 != 5) goto LAB_109899bbc;
      puVar2 = &stack0xffffffffffffffc0;
      puVar6 = extraout_x8;
      puVar5 = (ulong *)&UNK_10f5825c5;
    }
  }
  else if (iVar1 == 6) {
    puVar2 = &stack0xffffffffffffffc0;
    puVar6 = extraout_x8;
    puVar5 = (ulong *)"string";
  }
  else {
    if (iVar1 == 7) {
      puVar6 = param_1;
      (**(code **)(*param_1 + 0x98))();
      puStack_a0 = puVar6;
      (**(code **)(*param_1 + 0x120))(&puStack_68,param_1,&UNK_10f47a778,0xb);
      (**(code **)(*param_1 + 0x1a8))(aiStack_98,param_1,&puStack_a0,&puStack_68);
      if (puStack_68 != (undefined8 *)0x0) {
        (**(code **)*puStack_68)();
      }
      FUN_109881c70(&puStack_88,aiStack_98,param_1);
      (**(code **)(*param_1 + 0x120))(&puStack_68,param_1,&DAT_10f68f148,4);
      (**(code **)(*param_1 + 0x1a8))(aiStack_80,param_1,&puStack_88,&puStack_68);
      if (puStack_68 != (undefined8 *)0x0) {
        (**(code **)*puStack_68)();
      }
      puStack_70 = puStack_78;
      puStack_78 = (undefined8 *)0x0;
      (**(code **)(*param_1 + 0x138))(extraout_x8,param_1,&puStack_70);
      if (puStack_70 != (undefined8 *)0x0) {
        (**(code **)*puStack_70)();
      }
      if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
        (**(code **)*puStack_78)();
      }
      if (puStack_88 != (undefined8 *)0x0) {
        (**(code **)*puStack_88)();
      }
      if ((3 < aiStack_98[0]) && (puStack_90 != (undefined8 *)0x0)) {
        (**(code **)*puStack_90)();
      }
      if (puStack_a0 != (ulong *)0x0) {
        (**(code **)*puStack_a0)();
      }
      return puStack_a0;
    }
LAB_109899bbc:
    puVar2 = &stack0xffffffffffffffc0;
    puVar6 = extraout_x8;
    puVar5 = (ulong *)"unknown";
  }
  while( true ) {
    puVar7 = puVar5;
    puVar3 = puVar6;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(ulong **)(puVar2 + -0x28) = unaff_x21;
    *(ulong *)(puVar2 + -0x20) = uVar8;
    *(ulong **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar10;
    *(code **)(puVar2 + -8) = pcStack_48;
    puVar6 = puVar7;
    func_0x000107c613d0();
    if (puVar6 < (ulong *)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(ulong *)(puVar2 + -0x60) = uVar8;
    *(ulong **)(puVar2 + -0x58) = puVar3;
    *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x48) = &UNK_10002d57c;
    puVar10 = puVar2 + -0x50;
    if ((bRam00000001132dfb00 & 1) != 0) {
      return puVar6;
    }
    puVar6 = (ulong *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)puVar6 == 0) {
      return puVar6;
    }
    pcStack_48 = (code *)&UNK_10002d5bc;
    puVar2 = puVar2 + -0x60;
    puVar6 = (ulong *)0x1132dfae8;
    puVar5 = (ulong *)&UNK_10f5738ce;
    unaff_x19 = puVar3;
    unaff_x21 = puVar7;
  }
  if (puVar6 < (ulong *)0x17) {
    *(char *)((long)puVar3 + 0x17) = (char)puVar6;
    puVar4 = puVar3;
    if (puVar6 == (ulong *)0x0) goto code_r0x00010002d55c;
  }
  else {
    puVar5 = (ulong *)0x19;
    if (((ulong)puVar6 | 7) != 0x17) {
      puVar5 = (ulong *)(((ulong)puVar6 | 7) + 1);
    }
    puVar4 = puVar5;
    func_0x000107c60e20();
    puVar3[1] = (ulong)puVar6;
    puVar3[2] = (ulong)puVar5 | 0x8000000000000000;
    *puVar3 = (ulong)puVar4;
  }
  func_0x000107c610b8(puVar4,puVar7,puVar6);
code_r0x00010002d55c:
  *(char *)((long)puVar4 + (long)puVar6) = '\0';
  return puVar3;
}



/* Entry: 109899970; end: 109899ccb;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

ulong * FUN_109899970(ulong *param_1,ulong *param_2,int *param_3)

{
  ulong *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  ulong *puStack_60;
  int aiStack_58 [2];
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  iVar2 = *param_3;
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        puVar5 = (ulong *)"undefined";
      }
      else {
        if (iVar2 != 1) goto LAB_109899bbc;
        puVar5 = (ulong *)"null";
      }
    }
    else if (iVar2 == 2) {
      puVar5 = (ulong *)"true";
      if ((char)param_3[2] == '\0') {
        puVar5 = (ulong *)&DAT_10f6842c6;
      }
    }
    else {
      if (iVar2 != 3) goto LAB_109899bbc;
      puVar5 = (ulong *)"number";
    }
  }
  else if (iVar2 < 6) {
    if (iVar2 == 4) {
      puVar5 = (ulong *)&DAT_10f4102db;
    }
    else {
      if (iVar2 != 5) goto LAB_109899bbc;
      puVar5 = (ulong *)&UNK_10f5825c5;
    }
  }
  else if (iVar2 == 6) {
    puVar5 = (ulong *)"string";
  }
  else {
    if (iVar2 == 7) {
      puVar5 = param_2;
      (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
      puStack_60 = puVar5;
      (**(code **)(*param_2 + 0x120))(&puStack_28,param_2,&UNK_10f47a778,0xb);
      (**(code **)(*param_2 + 0x1a8))(aiStack_58,param_2,&puStack_60,&puStack_28);
      if (puStack_28 != (undefined8 *)0x0) {
        (**(code **)*puStack_28)();
      }
      FUN_109881c70(&puStack_48,aiStack_58,param_2);
      (**(code **)(*param_2 + 0x120))(&puStack_28,param_2,&DAT_10f68f148,4);
      (**(code **)(*param_2 + 0x1a8))(aiStack_40,param_2,&puStack_48,&puStack_28);
      if (puStack_28 != (undefined8 *)0x0) {
        (**(code **)*puStack_28)();
      }
      puStack_30 = puStack_38;
      puStack_38 = (undefined8 *)0x0;
      (**(code **)(*param_2 + 0x138))(param_1,param_2,&puStack_30);
      if (puStack_30 != (undefined8 *)0x0) {
        (**(code **)*puStack_30)();
      }
      if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
        (**(code **)*puStack_38)();
      }
      if (puStack_48 != (undefined8 *)0x0) {
        (**(code **)*puStack_48)();
      }
      if ((3 < aiStack_58[0]) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      if (puStack_60 != (ulong *)0x0) {
        (**(code **)*puStack_60)();
      }
      return puStack_60;
    }
LAB_109899bbc:
    puVar5 = (ulong *)"unknown";
  }
  while( true ) {
    puVar6 = puVar5;
    puVar3 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar5 = puVar6;
    func_0x000107c613d0();
    if (puVar5 < (ulong *)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = puVar3;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_10002d57c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    if ((bRam00000001132dfb00 & 1) != 0) {
      return puVar5;
    }
    puVar5 = (ulong *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)puVar5 == 0) {
      return puVar5;
    }
    unaff_x30 = &UNK_10002d5bc;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = (ulong *)0x1132dfae8;
    puVar5 = (ulong *)&UNK_10f5738ce;
    unaff_x19 = puVar3;
    unaff_x21 = puVar6;
  }
  if (puVar5 < (ulong *)0x17) {
    *(char *)((long)puVar3 + 0x17) = (char)puVar5;
    puVar4 = puVar3;
    if (puVar5 == (ulong *)0x0) goto code_r0x00010002d55c;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar5 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar5 | 7) + 1);
    }
    puVar4 = puVar1;
    func_0x000107c60e20();
    puVar3[1] = (ulong)puVar5;
    puVar3[2] = (ulong)puVar1 | 0x8000000000000000;
    *puVar3 = (ulong)puVar4;
  }
  func_0x000107c610b8(puVar4,puVar6,puVar5);
code_r0x00010002d55c:
  *(char *)((long)puVar4 + (long)puVar5) = '\0';
  return puVar3;
}



/* Entry: 109899ccc; end: 109899d9b;  */

long FUN_109899ccc(long param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + (long)(int)param_2 * 0x10;
  if ((*(byte *)(lVar1 + 0x148) & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x30))(&puStack_40);
    if (param_2 < 10) {
      puVar2 = (&PTR_DAT_110b17518)[param_2];
    }
    else {
      puVar2 = &DAT_10f452613;
    }
    FUN_1098843c0(&uStack_38,&puStack_40,*(undefined8 *)(param_1 + 0x50),puVar2);
    if ((*(byte *)(lVar1 + 0x148) & 1) == 0) {
      *(undefined8 *)(lVar1 + 0x140) = uStack_38;
      *(undefined1 *)(lVar1 + 0x148) = 1;
    }
    else {
      if (*(undefined8 **)(lVar1 + 0x140) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 0x140))();
      }
      *(undefined8 *)(lVar1 + 0x140) = uStack_38;
    }
    if (puStack_40 != (undefined8 *)0x0) {
      (**(code **)*puStack_40)();
    }
  }
  return lVar1 + 0x140;
}



/* Entry: 109899d9c; end: 109899daf;  */

undefined1  [16]
FUN_109899d9c(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int *extraout_x8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar6 = (long)param_2 << 4;
    __Znwm(lVar6);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar6;
    return auVar11;
  }
  func_0x000104c4f740();
  lVar6 = *param_2;
  if (lVar6 == 0) {
    *extraout_x8 = 1;
    goto LAB_109899f5c;
  }
  lVar9 = *(long *)(lVar6 + 8);
  if (lVar9 != 0) {
    iVar2 = *(int *)(lVar9 + 8);
    *extraout_x8 = iVar2;
    if (iVar2 < 4) {
      if (iVar2 == 2) {
        *(undefined1 *)(extraout_x8 + 2) = *(undefined1 *)(lVar9 + 0x10);
        goto LAB_109884a7c;
      }
      if (iVar2 == 3) {
        *(undefined8 *)(extraout_x8 + 2) = *(undefined8 *)(lVar9 + 0x10);
        goto LAB_109884a7c;
      }
LAB_109884a58:
      if (iVar2 < 7) goto LAB_109884a7c;
      plVar8 = *(long **)(lVar9 + 0x10);
      (**(code **)(*plVar5 + 0x98))(plVar5,plVar8);
    }
    else if (iVar2 == 4) {
      plVar8 = *(long **)(lVar9 + 0x10);
      (**(code **)(*plVar5 + 0x80))(plVar5,plVar8);
    }
    else if (iVar2 == 5) {
      plVar8 = *(long **)(lVar9 + 0x10);
      (**(code **)(*plVar5 + 0x88))(plVar5,plVar8);
    }
    else {
      if (iVar2 != 6) goto LAB_109884a58;
      plVar8 = *(long **)(lVar9 + 0x10);
      (**(code **)(*plVar5 + 0x90))(plVar5,plVar8);
    }
    *(long **)(extraout_x8 + 2) = plVar5;
    plVar5 = plVar8;
LAB_109884a7c:
    auVar10._8_8_ = plVar5;
    auVar10._0_8_ = extraout_x8;
    return auVar10;
  }
  plVar8 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  plVar7 = (long *)*param_2;
  (**(code **)(*plVar7 + 0x18))();
  lVar9 = *param_2;
  plStack_88 = plVar8;
  if ((int)plVar7 == 0) {
    plStack_a8 = (long *)param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    lStack_b0 = lVar9;
    func_0x00010989a19c(plVar8,&lStack_b0);
    plVar7 = plStack_a8;
    plStack_90 = plVar8;
    if (plStack_a8 != (long *)0x0) {
      plVar1 = plStack_a8 + 1;
      do {
        lVar9 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        goto LAB_109899f10;
      }
    }
  }
  else {
    plStack_98 = (long *)param_2[1];
    if (plStack_98 != (long *)0x0) {
      plVar7 = plStack_98 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_a0 = lVar9;
    FUN_109899f80(plVar8,&lStack_a0);
    plVar7 = plStack_98;
    plStack_90 = plVar8;
    if (plStack_98 != (long *)0x0) {
LAB_109899f10:
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  FUN_10989f63c(extraout_x8 + 2,plVar5,*param_3,&plStack_90,lVar6,param_4,param_5);
  param_2 = plStack_90;
  *extraout_x8 = 7;
  plStack_90 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x18))(plStack_88);
    plVar5 = plStack_88;
  }
LAB_109899f5c:
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = plVar5;
  return auVar12;
}



/* Entry: 109899db0; end: 109899de3;  */

undefined1  [16]
FUN_109899db0(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int *extraout_x8;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar5 = (long)param_2 << 4;
    __Znwm(lVar5);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar5;
    return auVar10;
  }
  func_0x000104c4f740();
  lVar5 = *param_2;
  if (lVar5 == 0) {
    *extraout_x8 = 1;
    goto LAB_109899f5c;
  }
  lVar8 = *(long *)(lVar5 + 8);
  if (lVar8 != 0) {
    iVar2 = *(int *)(lVar8 + 8);
    *extraout_x8 = iVar2;
    if (iVar2 < 4) {
      if (iVar2 == 2) {
        *(undefined1 *)(extraout_x8 + 2) = *(undefined1 *)(lVar8 + 0x10);
        goto LAB_109884a7c;
      }
      if (iVar2 == 3) {
        *(undefined8 *)(extraout_x8 + 2) = *(undefined8 *)(lVar8 + 0x10);
        goto LAB_109884a7c;
      }
LAB_109884a58:
      if (iVar2 < 7) goto LAB_109884a7c;
      plVar7 = *(long **)(lVar8 + 0x10);
      (**(code **)(*param_1 + 0x98))(param_1,plVar7);
    }
    else if (iVar2 == 4) {
      plVar7 = *(long **)(lVar8 + 0x10);
      (**(code **)(*param_1 + 0x80))(param_1,plVar7);
    }
    else if (iVar2 == 5) {
      plVar7 = *(long **)(lVar8 + 0x10);
      (**(code **)(*param_1 + 0x88))(param_1,plVar7);
    }
    else {
      if (iVar2 != 6) goto LAB_109884a58;
      plVar7 = *(long **)(lVar8 + 0x10);
      (**(code **)(*param_1 + 0x90))(param_1,plVar7);
    }
    *(long **)(extraout_x8 + 2) = param_1;
    param_1 = plVar7;
LAB_109884a7c:
    auVar9._8_8_ = param_1;
    auVar9._0_8_ = extraout_x8;
    return auVar9;
  }
  plVar7 = param_1;
  (**(code **)(*param_1 + 0x58))();
  plVar6 = (long *)*param_2;
  (**(code **)(*plVar6 + 0x18))();
  lVar8 = *param_2;
  plStack_78 = plVar7;
  if ((int)plVar6 == 0) {
    plStack_98 = (long *)param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    lStack_a0 = lVar8;
    func_0x00010989a19c(plVar7,&lStack_a0);
    plVar6 = plStack_98;
    plStack_80 = plVar7;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        goto LAB_109899f10;
      }
    }
  }
  else {
    plStack_88 = (long *)param_2[1];
    if (plStack_88 != (long *)0x0) {
      plVar6 = plStack_88 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_90 = lVar8;
    FUN_109899f80(plVar7,&lStack_90);
    plVar6 = plStack_88;
    plStack_80 = plVar7;
    if (plStack_88 != (long *)0x0) {
LAB_109899f10:
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10989f63c(extraout_x8 + 2,param_1,*param_3,&plStack_80,lVar5,param_4,param_5);
  param_2 = plStack_80;
  *extraout_x8 = 7;
  plStack_80 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x18))(plStack_78);
    param_1 = plStack_78;
  }
LAB_109899f5c:
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 109899de4; end: 109899f7f;  */

long * FUN_109899de4(long *param_1,long *param_2,long *param_3,undefined8 *param_4,
                    undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar8 = *param_3;
  if (lVar8 == 0) {
    *(int *)param_1 = 1;
    return param_2;
  }
  lVar7 = *(long *)(lVar8 + 8);
  if (lVar7 != 0) {
    iVar2 = *(int *)(lVar7 + 8);
    *(int *)param_1 = iVar2;
    if (iVar2 < 4) {
      if (iVar2 == 2) {
        *(undefined1 *)(param_1 + 1) = *(undefined1 *)(lVar7 + 0x10);
        return param_1;
      }
      if (iVar2 == 3) {
        param_1[1] = *(long *)(lVar7 + 0x10);
        return param_1;
      }
    }
    else {
      if (iVar2 == 4) {
        (**(code **)(*param_2 + 0x80))(param_2,*(undefined8 *)(lVar7 + 0x10));
        goto LAB_109884a78;
      }
      if (iVar2 == 5) {
        (**(code **)(*param_2 + 0x88))(param_2,*(undefined8 *)(lVar7 + 0x10));
        goto LAB_109884a78;
      }
      if (iVar2 == 6) {
        (**(code **)(*param_2 + 0x90))(param_2,*(undefined8 *)(lVar7 + 0x10));
        goto LAB_109884a78;
      }
    }
    if (iVar2 < 7) {
      return param_1;
    }
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(lVar7 + 0x10));
LAB_109884a78:
    param_1[1] = (long)param_2;
    return param_1;
  }
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  plVar6 = (long *)*param_3;
  (**(code **)(*plVar6 + 0x18))();
  lVar7 = *param_3;
  plStack_58 = plVar5;
  if ((int)plVar6 == 0) {
    plStack_78 = (long *)param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    lStack_80 = lVar7;
    func_0x00010989a19c(plVar5,&lStack_80);
    plVar6 = plStack_78;
    plStack_60 = plVar5;
    if (plStack_78 == (long *)0x0) goto LAB_109899f18;
    plVar1 = plStack_78 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 != 0) goto LAB_109899f18;
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
  }
  else {
    plStack_68 = (long *)param_3[1];
    if (plStack_68 != (long *)0x0) {
      plVar6 = plStack_68 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_70 = lVar7;
    FUN_109899f80(plVar5,&lStack_70);
    plVar6 = plStack_68;
    plStack_60 = plVar5;
    if (plStack_68 == (long *)0x0) goto LAB_109899f18;
  }
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
LAB_109899f18:
  FUN_10989f63c(param_1 + 1,param_2,*param_4,&plStack_60,lVar8,param_5,param_6);
  plVar5 = plStack_60;
  *(int *)param_1 = 7;
  plStack_60 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plStack_58);
    param_2 = plStack_58;
  }
  return param_2;
}



/* Entry: 109899f80; end: 109899fd7;  */

void FUN_109899f80(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_109899fd8(param_1);
    puVar1 = *(undefined8 **)(param_1 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x20) = *puVar1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110b174a0;
  uVar2 = *param_2;
  puVar1[2] = param_2[1];
  puVar1[1] = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 109899fd8; end: 10989a133;  */

void FUN_109899fd8(long *param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  
  uVar10 = param_1[3];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar10;
  lVar5 = uVar10 * 0x18;
  if (SUB168(auVar1 * ZEXT816(0x18),8) != 0) {
    lVar5 = -1;
  }
  __Znam();
  _bzero();
  plVar7 = (long *)param_1[1];
  plVar8 = (long *)param_1[2];
  if (plVar7 < plVar8) {
    plVar4 = plVar7 + 1;
    *plVar7 = lVar5;
LAB_10989a0c4:
    param_1[1] = (long)plVar4;
    if (uVar10 != 0) {
      plVar4 = (long *)(plVar4[-1] + uVar10 * 0x18);
      lVar5 = uVar10 * -0x18;
      plVar8 = (long *)param_1[4];
      plVar7 = plVar4;
      do {
        plVar7 = plVar7 + -3;
        plVar4 = plVar4 + -3;
        *plVar7 = (long)plVar8;
        param_1[4] = (long)plVar7;
        lVar5 = lVar5 + 0x18;
        plVar8 = plVar4;
      } while (lVar5 != 0);
    }
    return;
  }
  lVar9 = *param_1;
  lVar11 = (long)plVar7 - lVar9;
  uVar10 = (lVar11 >> 3) + 1;
  if (uVar10 >> 0x3d == 0) {
    uVar6 = (long)plVar8 - lVar9 >> 2;
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (0x7ffffffffffffff7 < (ulong)((long)plVar8 - lVar9)) {
      uVar6 = 0x1fffffffffffffff;
    }
    plStack_58 = param_1;
    if (uVar6 >> 0x3d == 0) {
      lVar3 = uVar6 << 3;
      __Znwm();
      plVar7 = (long *)(lVar3 + lVar11);
      plVar4 = plVar7 + 1;
      *plVar7 = lVar5;
      _memcpy(plVar7 + -(lVar11 >> 3),lVar9,lVar11);
      *param_1 = (long)(plVar7 + -(lVar11 >> 3));
      param_1[1] = (long)plVar4;
      param_1[2] = lVar3 + uVar6 * 8;
      lStack_78 = lVar9;
      lStack_70 = lVar9;
      lStack_68 = lVar9;
      plStack_60 = plVar8;
      FUN_10989a148(&lStack_78);
      uVar10 = param_1[3];
      goto LAB_10989a0c4;
    }
    func_0x000104c4f740();
  }
  else {
    FUN_10989a134();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10989a130);
  (*pcVar2)();
}



/* Entry: 10989a134; end: 10989a147;  */

long * FUN_10989a134(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar1 = (long *)plVar2[1];
  plVar4 = (long *)plVar2[2];
  while (plVar4 != plVar1) {
    plVar4 = plVar4 + -1;
    lVar3 = *plVar4;
    plVar2[2] = (long)plVar4;
    *plVar4 = 0;
    if (lVar3 != 0) {
      __ZdaPv();
      plVar4 = (long *)plVar2[2];
    }
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10989a148; end: 10989a1f3;  */

long * FUN_10989a148(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)param_1[1];
  plVar3 = (long *)param_1[2];
  while (plVar3 != plVar1) {
    plVar3 = plVar3 + -1;
    lVar2 = *plVar3;
    param_1[2] = (long)plVar3;
    *plVar3 = 0;
    if (lVar2 != 0) {
      __ZdaPv();
      plVar3 = (long *)param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10989a1f4; end: 10989a2ff;  */

void FUN_10989a1f4(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,param_4);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puStack_50 = *(undefined8 **)(param_3 + lVar1 * 8);
      iStack_58 = 3;
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar1 = lVar1 + 1;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10989a300; end: 10989a41f;  */

void FUN_10989a300(undefined4 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  int iStack_58;
  undefined4 uStack_54;
  byte bStack_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,param_3[1]);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (param_3[1] != 0) {
    uVar1 = 0;
    do {
      bStack_50 = (byte)(*(ulong *)(*param_3 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f)) & 1;
      iStack_58 = 2;
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,uVar1,&iStack_58);
      if ((3 < iStack_58) && ((undefined8 *)CONCAT71(uStack_4f,bStack_50) != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)CONCAT71(uStack_4f,bStack_50))();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulong)param_3[1]);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10989a420; end: 10989a55f;  */

void FUN_10989a420(undefined4 *param_1,long *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_60,param_2,param_4);
  uStack_50 = CONCAT44(uStack_5c,iStack_60);
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar2 = (long)*(char *)((long)param_3 + 0x17);
      puVar1 = param_3;
      if (lVar2 < 0) {
        lVar2 = param_3[1];
        puVar1 = (undefined8 *)*param_3;
      }
      (**(code **)(*param_2 + 0x128))(&puStack_48,param_2,puVar1,lVar2);
      iStack_60 = 6;
      puStack_58 = puStack_48;
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_50,lVar3,&iStack_60);
      if ((3 < iStack_60) && (puStack_58 != (undefined8 *)0x0)) {
        (**(code **)*puStack_58)();
      }
      lVar3 = lVar3 + 1;
      param_3 = param_3 + 3;
    } while (param_4 != lVar3);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_50;
  return;
}



/* Entry: 10989a560; end: 10989a71b;  */

long * FUN_10989a560(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long **pplVar2;
  long **pplVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  int aiStack_58 [2];
  undefined8 *puStack_50;
  long *plStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  FUN_109899ccc();
  puStack_40 = (undefined8 *)(double)param_3;
  plStack_48 = (long *)CONCAT44(plStack_48._4_4_,3);
  (**(code **)(*param_2 + 0x2b0))(aiStack_58,param_2,plVar1,&plStack_48,1);
  if ((3 < (int)plStack_48) && (puStack_40 != (undefined8 *)0x0)) {
    (**(code **)*puStack_40)();
  }
  FUN_1098873f8(param_1 + 2,&plStack_48,aiStack_58);
  if ((3 < aiStack_58[0]) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_1[2] + 8));
  pplVar2 = &plStack_48;
  plStack_48 = plVar1;
  FUN_10989982c();
  plVar1 = plStack_48;
  pplVar3 = pplVar2;
  if (plStack_48 != (long *)0x0) {
    (**(code **)*plStack_48)();
  }
  *param_1 = (long)param_2;
  param_1[1] = (long)pplVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (plStack_48 != (long *)0x0) {
    (**(code **)*plStack_48)();
  }
  FUN_1098873a0(param_1 + 2);
  __Unwind_Resume();
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = 0;
  if (pplVar3 != (long **)0x0) {
    FUN_10989a794(plVar1);
    puVar4 = (undefined4 *)plVar1[1];
    lVar6 = (long)pplVar3 << 4;
    puVar5 = puVar4;
    do {
      *puVar5 = 0;
      lVar6 = lVar6 + -0x10;
      puVar5 = puVar5 + 4;
    } while (lVar6 != 0);
    plVar1[1] = (long)(puVar4 + (long)pplVar3 * 4);
  }
  return plVar1;
}



/* Entry: 10989a71c; end: 10989a793;  */

undefined8 * FUN_10989a71c(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10989a794(param_1);
    puVar1 = (undefined4 *)param_1[1];
    lVar3 = param_2 << 4;
    puVar2 = puVar1;
    do {
      *puVar2 = 0;
      lVar3 = lVar3 + -0x10;
      puVar2 = puVar2 + 4;
    } while (lVar3 != 0);
    param_1[1] = puVar1 + param_2 * 4;
  }
  return param_1;
}



/* Entry: 10989a794; end: 10989a80b;  */

void FUN_10989a794(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    FUN_109899db0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    return;
  }
  FUN_109899d9c();
  if (*(long *)*param_1 != 0) {
    FUN_10989a80c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10989a80c; end: 10989a86f;  */

void FUN_10989a80c(long *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_1;
  piVar3 = (int *)param_1[1];
  while (piVar2 = piVar3, piVar2 != piVar1) {
    piVar3 = piVar2 + -4;
    if ((3 < *piVar3) && (*(undefined8 **)(piVar2 + -2) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(piVar2 + -2))();
    }
  }
  param_1[1] = (long)piVar1;
  return;
}



/* Entry: 10989a870; end: 10989a8af;  */

void FUN_10989a870(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)(*(long *)*param_2 + 0x58))();
  FUN_109896ca4(param_1);
  return;
}



/* Entry: 10989a8b0; end: 10989a93b;  */

void FUN_10989a8b0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  FUN_10989a870();
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 0x58))();
  puVar1 = (undefined8 *)param_1[1];
  for (param_1 = (undefined8 *)*param_1; param_1 != puVar1; param_1 = param_1 + 8) {
    lVar4 = (long)*(char *)((long)param_1 + 0x17);
    puVar3 = param_1;
    if (lVar4 < 0) {
      lVar4 = param_1[1];
      puVar3 = (undefined8 *)*param_1;
    }
    plVar2 = param_2;
    FUN_10989c1a0(param_2,puVar3,lVar4);
    if (plVar2 != (long *)0x0) {
      FUN_109888c24();
    }
  }
  return;
}



/* Entry: 10989a93c; end: 10989aa4f;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10989a93c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  int aiStack_158 [5];
  char cStack_141;
  long lStack_140;
  long *plStack_138;
  int aiStack_130 [2];
  undefined1 uStack_128;
  undefined7 uStack_127;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long *plStack_b8;
  code *pcStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_2;
  (**(code **)(*plVar6 + 0x58))();
  pcStack_88 = FUN_10989728c;
  ppuStack_80 = &PTR_DAT_110b170c0;
  pcStack_c8 = FUN_109897348;
  ppuStack_c0 = &PTR_FUN_110b170d8;
  ppcVar9 = &pcStack_88;
  plStack_b8 = plVar6;
  plStack_78 = plVar6;
  FUN_109897168(param_1,param_3,param_4,ppcVar9,&pcStack_c8);
  (*(code *)*ppuStack_c0)(&ppuStack_c0);
  pppuVar7 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_c0)(&ppuStack_c0);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  __Unwind_Resume();
  ppuVar11 = pppuVar7[1];
  bVar4 = *(byte *)((long)ppuVar11 + 0x2d9) ^ 1;
  if ((*(byte *)((long)ppuVar11 + 0x2d9) & 1) == 0) {
    *(undefined1 *)((long)ppuVar11 + 0x2d9) = 1;
  }
  pppuVar8 = pppuVar7;
  __ZSt19uncaught_exceptionsv();
  ppuVar10 = *pppuVar7;
  lVar12 = *param_4;
  lStack_140 = lVar12;
  if (lVar12 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)0x20;
    __Znwm();
    *plVar6 = (long)&PTR_FUN_110b17578;
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar6[3] = lVar12;
  }
  *param_4 = 0;
  plStack_138 = plVar6;
  func_0x000107c31940(aiStack_158,ppcVar9);
  (**(code **)(*ppuVar10 + 8))(aiStack_130,ppuVar10,&lStack_140,aiStack_158);
  iVar5 = (int)ppuVar10;
  if (cStack_141 < '\0') {
    iVar5 = aiStack_158[0];
    __ZdlPv();
  }
  plVar6 = plStack_138;
  if (plStack_138 != (long *)0x0) {
    plVar1 = plStack_138 + 1;
    do {
      lVar12 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      iVar5 = (int)plVar6;
    }
  }
  ppuVar10 = *pppuVar7;
  if (aiStack_130[0] == 3) {
    *extraout_x8 = ppuVar10;
    *(undefined4 *)(extraout_x8 + 1) = 3;
    extraout_x8[2] = CONCAT71(uStack_127,uStack_128);
  }
  else if (aiStack_130[0] == 2) {
    *extraout_x8 = ppuVar10;
    *(undefined4 *)(extraout_x8 + 1) = 2;
    *(undefined1 *)(extraout_x8 + 2) = uStack_128;
  }
  else if (aiStack_130[0] < 4) {
    *extraout_x8 = ppuVar10;
    *(int *)(extraout_x8 + 1) = aiStack_130[0];
  }
  else {
    *extraout_x8 = ppuVar10;
    *(int *)(extraout_x8 + 1) = aiStack_130[0];
    extraout_x8[2] = CONCAT71(uStack_127,uStack_128);
  }
  __ZSt19uncaught_exceptionsv();
  if ((iVar5 <= (int)pppuVar8) && (bVar4 == 1)) {
    (**(code **)(*(long *)ppuVar11[10] + 0x28))(ppuVar11[10],0xffffffff);
  }
  if (bVar4 == 1) {
    *(undefined1 *)((long)ppuVar11 + 0x2d9) = 0;
  }
  return;
}



/* Entry: 10989aa50; end: 10989acdf;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10989aa50(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int aiStack_88 [5];
  char cStack_71;
  long lStack_70;
  long *plStack_68;
  int aiStack_60 [2];
  undefined1 uStack_58;
  undefined7 uStack_57;
  
  lVar9 = param_2[1];
  bVar3 = *(byte *)(lVar9 + 0x2d9) ^ 1;
  if ((*(byte *)(lVar9 + 0x2d9) & 1) == 0) {
    *(undefined1 *)(lVar9 + 0x2d9) = 1;
  }
  puVar5 = param_2;
  __ZSt19uncaught_exceptionsv();
  plVar8 = (long *)*param_2;
  lVar10 = *param_3;
  lStack_70 = lVar10;
  if (lVar10 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)0x20;
    __Znwm();
    *plVar6 = (long)&PTR_FUN_110b17578;
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar6[3] = lVar10;
  }
  *param_3 = 0;
  plStack_68 = plVar6;
  func_0x000107c31940(aiStack_88,param_4);
  (**(code **)(*plVar8 + 8))(aiStack_60,plVar8,&lStack_70,aiStack_88);
  iVar4 = (int)plVar8;
  if (cStack_71 < '\0') {
    iVar4 = aiStack_88[0];
    __ZdlPv();
  }
  plVar8 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      iVar4 = (int)plVar8;
    }
  }
  uVar7 = *param_2;
  if (aiStack_60[0] == 3) {
    *param_1 = uVar7;
    *(undefined4 *)(param_1 + 1) = 3;
    param_1[2] = CONCAT71(uStack_57,uStack_58);
  }
  else if (aiStack_60[0] == 2) {
    *param_1 = uVar7;
    *(undefined4 *)(param_1 + 1) = 2;
    *(undefined1 *)(param_1 + 2) = uStack_58;
  }
  else if (aiStack_60[0] < 4) {
    *param_1 = uVar7;
    *(int *)(param_1 + 1) = aiStack_60[0];
  }
  else {
    *param_1 = uVar7;
    *(int *)(param_1 + 1) = aiStack_60[0];
    param_1[2] = CONCAT71(uStack_57,uStack_58);
  }
  __ZSt19uncaught_exceptionsv();
  if ((iVar4 <= (int)puVar5) && (bVar3 == 1)) {
    (**(code **)(**(long **)(lVar9 + 0x50) + 0x28))(*(long **)(lVar9 + 0x50),0xffffffff);
  }
  if (bVar3 == 1) {
    *(undefined1 *)(lVar9 + 0x2d9) = 0;
  }
  return;
}



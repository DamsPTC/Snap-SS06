/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a2bfdb0; end: 10a2bfe07;  */

long FUN_10a2bfdb0(long param_1)

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



/* Entry: 10a2bfe08; end: 10a2c02df;  */

/* WARNING: Removing unreachable block (ram,0x00010a2c0180) */
/* WARNING: Removing unreachable block (ram,0x00010a2c02c0) */

long ***** FUN_10a2bfe08(long param_1,long param_2)

{
  long ****pppplVar1;
  bool bVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  char cVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar6;
  long lVar7;
  long ***ppplVar8;
  long ****pppplVar9;
  long *****ppppplVar10;
  long lStack_d8;
  long ****pppplStack_d0;
  char cStack_c8;
  undefined7 uStack_c7;
  long ****pppplStack_c0;
  char cStack_b1;
  long ***ppplStack_b0;
  long ****pppplStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long ****pppplStack_90;
  long ****pppplStack_88;
  long ***ppplStack_80;
  undefined8 uStack_78;
  long ***ppplStack_70;
  ulong uStack_68;
  byte bStack_59;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar3 = *(long ******)(param_2 + 0x20);
  if ((ppppplVar3 == (long *****)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), pppplStack_d0 = (long ****)ppppplVar3,
     ppppplVar3 == (long *****)0x0)) goto LAB_10a2c01c0;
  lStack_d8 = *(long *)(param_2 + 0x18);
  if ((lStack_d8 != 0) && (*(int *)(param_1 + 0x30) - 200U < 100)) {
    ppppplVar10 = *(long ******)(*(long *)(param_2 + 0x10) + 0x18);
    ppppplVar3 = (long *****)&ppplStack_70;
    FUN_109ffe064(ppppplVar3,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x80));
    if (-1 < (char)bStack_59) {
      uStack_68 = (ulong)bStack_59;
    }
    if (uStack_68 == 0) {
LAB_10a2bffd4:
      *(undefined1 *)((long)ppppplVar10 + 0x161) = 0;
LAB_10a2bffd8:
      if (*(char *)(ppppplVar10 + 0x2a) == '\x01') {
        FUN_10a2af0c8(ppppplVar10);
        iVar6 = *(int *)((long)ppppplVar10 + 0x1fc);
        if (iVar6 == 0) {
          func_0x000107c2b054(&pppplStack_90,&UNK_10f649c2a);
          FUN_10a2b149c(ppppplVar10[0x42],ppppplVar10[0x43],&pppplStack_90,1);
          if ((long)ppplStack_80 < 0) {
            __ZdlPv(pppplStack_90);
          }
          iVar6 = *(int *)((long)ppppplVar10 + 0x1fc);
        }
        if (iVar6 == 1) {
          pppplStack_90 = (long ****)0x0;
          pppplStack_88 = (long ****)0x0;
          ppplStack_80 = (long ***)0x0;
          ppplStack_b0 = (long ***)0x0;
          pppplStack_a8 = (long ****)0x0;
          uStack_a0 = (long ****)0x0;
          func_0x000107c2b054(&cStack_c8,&UNK_10f649c2a);
          FUN_10a2b2c88(ppppplVar10[0x40],ppppplVar10[0x41],&pppplStack_90,&ppplStack_b0,&cStack_c8,
                        1);
          if (cStack_b1 < '\0') {
            __ZdlPv(CONCAT71(uStack_c7,cStack_c8));
          }
          func_0x00010a2b733c(&ppplStack_b0);
          func_0x00010a2b7398(&pppplStack_90);
        }
        ppppplVar3 = (long *****)ppppplVar10[0x4a];
        ppppplVar10 = (long *****)ppppplVar10[0x4b];
        if (ppppplVar10 != (long *****)0x0) {
          ppppplVar4 = ppppplVar10 + 1;
          do {
            cVar5 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
            if (bVar2) {
              *ppppplVar4 = (long ****)((long)*ppppplVar4 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        pppplStack_90 = (long ****)ppppplVar3;
        pppplStack_88 = (long ****)ppppplVar10;
        FUN_10a07e58c();
        if (ppppplVar10 != (long *****)0x0) {
          ppppplVar4 = ppppplVar10 + 1;
          do {
            pppplVar9 = *ppppplVar4;
            cVar5 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
            if (bVar2) {
              *ppppplVar4 = (long ****)((long)pppplVar9 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (pppplVar9 == (long ****)0x0) {
            (*(code *)(*ppppplVar10)[2])(ppppplVar10);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppppplVar3 = ppppplVar10;
          }
        }
      }
    }
    else {
      plStack_40 = (long *)0x0;
      FUN_109fc89b4(&cStack_c8);
      if (plStack_40 == alStack_58) {
        lVar7 = 0x20;
LAB_10a2bfed0:
        (**(code **)(*plStack_40 + lVar7))();
      }
      else if (plStack_40 != (long *)0x0) {
        lVar7 = 0x28;
        goto LAB_10a2bfed0;
      }
      if (cStack_c8 == '\t') {
        cVar5 = '\t';
LAB_10a2bffd0:
        ppppplVar3 = &pppplStack_c0;
        func_0x000109380ffc(ppppplVar3,cVar5);
        goto LAB_10a2bffd4;
      }
      func_0x000107c2b054(&ppplStack_b0,"ListeningEnabled");
      pppplStack_90 = (long ****)&cStack_c8;
      pppplStack_88 = (long ****)0x0;
      ppplStack_80 = (long ***)0x0;
      uStack_78 = 0x8000000000000000;
      if (cStack_c8 == '\x01') {
        ppppplVar3 = (long *****)pppplStack_c0;
        func_0x0001093793a4(pppplStack_c0,&ppplStack_b0);
        pppplStack_88 = (long ****)ppppplVar3;
      }
      else if (cStack_c8 == '\x02') {
        ppplStack_80 = pppplStack_c0[1];
      }
      else {
        uStack_78 = 1;
      }
      if (uStack_a0._7_1_ < '\0') {
        __ZdlPv(ppplStack_b0);
      }
      ppplStack_b0 = (long ***)&cStack_c8;
      pppplStack_a8 = (long ****)0x0;
      uStack_a0 = (long ****)0x0;
      uStack_98 = 0x8000000000000000;
      if (cStack_c8 == '\x02') {
        uStack_a0 = (long ****)pppplStack_c0[1];
      }
      else if (cStack_c8 == '\x01') {
        pppplStack_a8 = pppplStack_c0 + 1;
      }
      else {
        uStack_98 = 1;
      }
      ppppplVar3 = &pppplStack_90;
      func_0x000109379420(ppppplVar3,&ppplStack_b0);
      cVar5 = cStack_c8;
      if (((ulong)ppppplVar3 & 1) != 0) goto LAB_10a2bffd0;
      func_0x00010937b950(&pppplStack_90);
      func_0x00010937ba88();
      iVar6 = (int)ppplStack_b0;
      if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f64ab40,0xae,&UNK_10f64abc2,in_x6,in_x7,
                            &ppplStack_70);
      }
      ppppplVar3 = &pppplStack_c0;
      func_0x000109380ffc(ppppplVar3,cStack_c8);
      *(bool *)((long)ppppplVar10 + 0x161) = iVar6 != 0;
      if (iVar6 == 0) goto LAB_10a2bffd8;
      FUN_10a2af464();
      ppppplVar3 = ppppplVar10;
    }
    if ((long *****)pppplStack_d0 == (long *****)0x0) goto LAB_10a2c01c0;
  }
  ppppplVar4 = (long *****)pppplStack_d0;
  ppppplVar10 = (long *****)(pppplStack_d0 + 1);
  do {
    pppplVar9 = *ppppplVar10;
    cVar5 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
    if (bVar2) {
      *ppppplVar10 = (long ****)((long)pppplVar9 + -1);
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (pppplVar9 == (long ****)0x0) {
    (*(code *)(*pppplStack_d0)[2])(pppplStack_d0);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppplVar3 = ppppplVar4;
  }
LAB_10a2c01c0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppppplVar3;
  }
  ___stack_chk_fail();
  if ((long)uStack_a0 < 0) {
    __ZdlPv(ppplStack_b0);
  }
  func_0x000109380ffc(&pppplStack_c0,cStack_c8);
  func_0x00010a05a86c(&lStack_d8);
  __Unwind_Resume();
  pppplVar9 = ppppplVar3[3];
  if (pppplVar9 != (long ****)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (pppplVar9 != (long ****)0x0) {
      if (ppppplVar3[2] != (long ****)0x0) {
        FUN_10a05c0fc(ppppplVar3[2],ppppplVar3[1]);
      }
      pppplVar1 = pppplVar9 + 1;
      do {
        ppplVar8 = *pppplVar1;
        cVar5 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
        if (bVar2) {
          *pppplVar1 = (long ***)((long)ppplVar8 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppplVar8 == (long ***)0x0) {
        (*(code *)(*pppplVar9)[2])(pppplVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar9);
      }
    }
    if (ppppplVar3[3] != (long ****)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return ppppplVar3 + 1;
}



/* Entry: 10a2c02e0; end: 10a2c030b;  */

undefined8 * FUN_10a2c02e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a2c030c; end: 10a2c03d3;  */

void FUN_10a2c030c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bbb798;
  puVar1[3] = &PTR_DAT_110c36978;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 7,*param_3,param_3[1]);
  }
  else {
    uVar2 = *param_3;
    puVar1[8] = param_3[1];
    puVar1[7] = uVar2;
    puVar1[9] = param_3[2];
  }
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a2c03d4; end: 10a2c03e3;  */

void FUN_10a2c03d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbb798;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2c03e4; end: 10a2c0403;  */

void FUN_10a2c03e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbb798;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2c0404; end: 10a2c043f;  */

long FUN_10a2c0404(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10a2c0440; end: 10a2c0443;  */

void FUN_10a2c0440(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2c0444; end: 10a2c049b;  */

long FUN_10a2c0444(long param_1)

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



/* Entry: 10a2c049c; end: 10a2c069f;  */

void FUN_10a2c049c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110c369c0;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a2c06a0; end: 10a2c06af;  */

void FUN_10a2c06a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c369c0;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a2c06b0; end: 10a2c06d7;  */

long FUN_10a2c06b0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a2c0444(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a2c06d8; end: 10a2c0717;  */

void FUN_10a2c06d8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bbb7d8;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a2c0718; end: 10a2c07df;  */

void FUN_10a2c0718(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bbb800;
  puVar1[3] = &PTR_FUN_110c369e8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 7,*param_3,param_3[1]);
  }
  else {
    uVar2 = *param_3;
    puVar1[8] = param_3[1];
    puVar1[7] = uVar2;
    puVar1[9] = param_3[2];
  }
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a2c07e0; end: 10a2c07ef;  */

void FUN_10a2c07e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbb800;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2c07f0; end: 10a2c080f;  */

void FUN_10a2c07f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbb800;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2c0810; end: 10a2c084b;  */

long FUN_10a2c0810(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10a2c084c; end: 10a2c084f;  */

void FUN_10a2c084c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2c0850; end: 10a2c08a7;  */

long FUN_10a2c0850(long param_1)

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



/* Entry: 10a2c08a8; end: 10a2c0aab;  */

void FUN_10a2c08a8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110c36a30;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a2c0aac; end: 10a2c0abb;  */

void FUN_10a2c0aac(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c36a30;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a2c0abc; end: 10a2c0ae3;  */

long FUN_10a2c0abc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a2c0850(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a2c0ae4; end: 10a2c0b33;  */

void FUN_10a2c0ae4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bbb840;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a2c0b34; end: 10a2c0b53;  */

void FUN_10a2c0b34(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bbb868;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2c0b54; end: 10a2c0b8f;  */

long FUN_10a2c0b54(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10a2c0b90; end: 10a2c0b93;  */

void FUN_10a2c0b90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2c0b94; end: 10a2c0beb;  */

long FUN_10a2c0b94(long param_1)

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



/* Entry: 10a2c0bec; end: 10a2c0def;  */

void FUN_10a2c0bec(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110c36aa0;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a2c0df0; end: 10a2c0dff;  */

void FUN_10a2c0df0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c36aa0;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a2c0e00; end: 10a2c0e27;  */

long FUN_10a2c0e00(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a2c0b94(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a2c0e28; end: 10a2c0e77;  */

void FUN_10a2c0e28(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bbb8a8;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a2c0e78; end: 10a2c0e97;  */

void FUN_10a2c0e78(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bbb8d0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2c0e98; end: 10a2c0f1f;  */

void FUN_10a2c0e98(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0xa7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x90));
  }
  lStack_28 = param_1 + 0x78;
  FUN_10a2c0f24(&lStack_28);
  lStack_28 = param_1 + 0x60;
  func_0x00010a2c0f94(&lStack_28);
  lStack_28 = param_1 + 0x48;
  func_0x00010a2c1004(&lStack_28);
  lStack_28 = param_1 + 0x30;
  func_0x00010a2c1074(&lStack_28);
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return;
}



/* Entry: 10a2c0f20; end: 10a2c0f23;  */

void FUN_10a2c0f20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2c0f24; end: 10a2c10e3;  */

void FUN_10a2c0f24(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a2b71d4();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a2c10e4; end: 10a2c113b;  */

long FUN_10a2c10e4(long param_1)

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



/* Entry: 10a2c113c; end: 10a2c133f;  */

void FUN_10a2c113c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110c36ab8;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a2c1340; end: 10a2c134f;  */

void FUN_10a2c1340(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c36ab8;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a2c1350; end: 10a2c1377;  */

long FUN_10a2c1350(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a2c10e4(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a2c1378; end: 10a2c13b7;  */

void FUN_10a2c1378(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bbb910;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a2c13b8; end: 10a2c1653;  */

undefined8 * FUN_10a2c13b8(undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  ulong uVar7;
  long *plVar8;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **appuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 1);
  param_1[8] = param_2[8];
  param_1[9] = &UNK_1053a6a3c;
  puVar6 = param_1 + 10;
  *puVar6 = &PTR_DAT_110ae9180;
  param_1[9] = param_2[9];
  plVar8 = param_2 + 10;
  (**(code **)(*plVar8 + 0x10))(puVar6,plVar8);
  param_2[9] = &UNK_1053a6a3c;
  (**(code **)*plVar8)(plVar8);
  *plVar8 = (long)&PTR_DAT_110ae9180;
  plVar8 = param_1 + 0x11;
  *plVar8 = 0;
  FUN_10a2c1654(&plStack_d0);
  if (*plVar8 != 0) {
    func_0x0001092b4274(plVar8);
  }
  plStack_b8 = plStack_d0;
  param_1[0x11] = lStack_c8;
  plStack_d0 = (long *)0x0;
  lStack_c8 = 0;
  uVar2 = param_1[8];
  uStack_a8 = param_1[9];
  appuStack_a0[0] = &PTR_DAT_110ae9180;
  uStack_b0 = uVar2;
  (**(code **)(param_1[10] + 0x10))(appuStack_a0,puVar6);
  param_1[9] = &UNK_1053a6a3c;
  (**(code **)param_1[10])(puVar6);
  param_1[10] = &PTR_DAT_110ae9180;
  FUN_10a2c18dc(&plStack_d8,uVar2,&plStack_b8);
  if (plStack_d8 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_d8 + 1);
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
        (**(code **)(*plStack_d8 + 8))();
      }
    }
  }
  func_0x0001092ba41c(&uStack_b0);
  if (plStack_b8 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_b8 + 1);
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
        (**(code **)(*plStack_b8 + 8))();
      }
    }
  }
  if (lStack_c8 != 0) {
    func_0x0001092b4274((ulong)&plStack_d0 | 8);
  }
  plVar5 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_d0 + 1);
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
        (**(code **)(*plStack_d0 + 8))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10a2c16c4(&plStack_b8);
  func_0x00010a2c1734(&plStack_d0);
  if (*plVar8 != 0) {
    func_0x0001092b4274(plVar8);
  }
  func_0x0001092ba41c(param_1 + 8);
  (**(code **)param_1[1])(param_1 + 1);
  __Unwind_Resume(plVar5);
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined2 *)(puVar6 + 3) = 4;
  puVar6[2] = 0;
  puVar6[1] = 0x200000006;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = puVar6 + 3;
  puVar6[0x12] = 0;
  *puVar6 = &PTR_DAT_110bbbba0;
  *(undefined1 *)(puVar6 + 0x13) = 0;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  *extraout_x8 = puVar6;
  extraout_x8[1] = puVar6;
  return puVar6;
}



/* Entry: 10a2c1654; end: 10a2c16c3;  */

void FUN_10a2c1654(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110bbbba0;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a2c16c4; end: 10a2c18db;  */

long * FUN_10a2c16c4(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  func_0x0001092ba41c(param_1 + 1);
  plVar4 = (long *)*param_1;
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
  return param_1;
}



/* Entry: 10a2c18dc; end: 10a2c1c6f;  */

/* WARNING: Removing unreachable block (ram,0x00010a2c1a18) */

void FUN_10a2c18dc(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)0xb8;
  __Znwm();
  *puVar5 = FUN_10a2c496c;
  puVar5[1] = FUN_10a2c4c10;
  func_0x0001092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  uVar11 = *param_3;
  *param_3 = 0;
  puVar5[10] = param_3[1];
  puVar5[9] = uVar11;
  puVar5[0xc] = &PTR_DAT_110ae9180;
  puVar5[0xb] = param_3[2];
  plVar7 = param_3 + 3;
  (**(code **)(*plVar7 + 0x10))(puVar5 + 0xc,plVar7);
  param_3[2] = &UNK_1053a6a3c;
  (**(code **)*plVar7)(plVar7);
  *plVar7 = (long)&PTR_DAT_110ae9180;
  puVar5[0x13] = param_2;
  *(undefined1 *)(puVar5 + 0x14) = 0;
  *(undefined1 *)(puVar5 + 0x16) = 0;
  puVar6 = puVar5 + 0x13;
  func_0x0001092ba064(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10a2c1c70(puVar5 + 0x15,puVar5 + 9);
    puVar5[0x13] = puVar5[0x15];
    plVar7 = (long *)(puVar5[0x15] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[0x13] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x16) = 1;
      lVar8 = puVar5[0x13];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_48 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_58 = 0;
            puStack_50 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_58);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[0x13];
    if (((uint)*(undefined8 *)(puVar5[0x13] + 0x10) >> 5 & 1) == 0) {
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)puVar5[0x15];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar5 + 2);
      func_0x0001092ba41c(puVar5 + 10);
      plVar7 = (long *)puVar5[9];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
    func_0x0001092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2c1b8c);
    (*pcVar4)();
  }
  return;
}



/* Entry: 10a2c1c70; end: 10a2c21b3;  */

void FUN_10a2c1c70(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x80;
  __Znwm();
  *puVar5 = FUN_10a2c43cc;
  puVar5[1] = FUN_10a2c4828;
  puVar5[0xd] = param_2;
  func_0x0001092ba17c(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  lVar7 = *param_2;
  puVar5[0xb] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xf) = 0;
    lVar7 = puVar5[0xb];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a2c201c;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[0xb];
  if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
    goto LAB_10a2c2058;
  }
  if ((*(byte *)(plVar6 + 0x15) & 1) == 0) goto LAB_10a2c2058;
  puVar5[9] = plVar6[0x13];
  lVar7 = plVar6[0x14];
  puVar5[10] = lVar7;
  if (lVar7 == 0) {
LAB_10a2c1d90:
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  else {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) goto LAB_10a2c1d90;
  }
  plVar8 = (long *)puVar5[0xd];
  plVar6 = (long *)*plVar8;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    plVar8 = (long *)puVar5[0xd];
  }
  *plVar8 = 0;
  lVar7 = puVar5[10];
  puVar5[0xe] = puVar5[9];
  puVar5[10] = 0;
  puVar5[0xb] = lVar7;
  puVar5[0xc] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xf) = 1;
    lVar7 = puVar5[0xc];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
LAB_10a2c201c:
          uStack_48 = 0;
          puStack_40 = puVar5;
          func_0x000109d1b588(lVar7 + 0x18,&uStack_48);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[0xc];
  if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 5 & 1) == 0) {
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    puVar5[0xb] = 0;
    if ((long *)puVar5[0xe] != (long *)0x0) {
      (**(code **)(*(long *)puVar5[0xe] + 8))();
    }
    func_0x0001092ba100(puVar5 + 2);
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)puVar5[10];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  func_0x0001092af97c(plVar6 + 0x12);
LAB_10a2c2058:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2c205c);
  (*pcVar4)();
}



/* Entry: 10a2c21b4; end: 10a2c2267;  */

undefined8 * FUN_10a2c21b4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  
  *param_1 = param_2;
  param_1[1] = *param_3;
  (**(code **)(param_3[1] + 0x10))(param_1 + 2);
  param_1[9] = param_3[8];
  param_1[10] = &UNK_1053a6a3c;
  param_1[0xb] = &PTR_DAT_110ae9180;
  param_1[10] = param_3[9];
  plVar1 = param_3 + 10;
  (**(code **)(*plVar1 + 0x10))(param_1 + 0xb,plVar1);
  param_3[9] = &UNK_1053a6a3c;
  (**(code **)*plVar1)(plVar1);
  *plVar1 = (long)&PTR_DAT_110ae9180;
  param_1[0x12] = param_3[0x11];
  param_3[0x11] = 0;
  return param_1;
}



/* Entry: 10a2c2268; end: 10a2c227f;  */

void FUN_10a2c2268(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f64a44f,&UNK_10f64a54a,0x20,&UNK_10f64a597);
  }
  *(undefined1 *)(param_2 + 0x58) = 1;
  lVar4 = *(long *)(param_2 + 0x68);
  plVar1 = (long *)(lVar4 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar4 + 0x18);
        goto LAB_109d191f0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_109d191f0:
      lVar4 = *(long *)(param_2 + 0x70);
      *param_1 = lVar4;
      if (lVar4 != 0) {
        plVar1 = (long *)(lVar4 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  } while( true );
}



/* Entry: 10a2c2280; end: 10a2c22cf;  */

long FUN_10a2c2280(long param_1)

{
  FUN_10a2c22d0(param_1,0);
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 0x48);
  (*(code *)**(undefined8 **)(param_1 + 0x10))();
  return param_1;
}



/* Entry: 10a2c22d0; end: 10a2c22f7;  */

void FUN_10a2c22d0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a2c22f8(param_1 + 1);
  }
  return;
}



/* Entry: 10a2c22f8; end: 10a2c23f3;  */

void FUN_10a2c22f8(undefined8 *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  long *plStack_30;
  long lStack_28;
  
  (*(code *)*param_1)(&plStack_30,param_2,param_1);
  plStack_38 = plStack_30;
  lVar5 = param_1[0x11];
  plStack_30 = (long *)0x0;
  param_1[0x11] = 0;
  uStack_40 = param_2;
  lStack_28 = lVar5;
  FUN_10a2c23f4(lVar5,&uStack_40);
  if (lVar5 != 0) {
    func_0x0001092b4274(&lStack_28,lVar5);
  }
  if (plStack_38 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_38 + 1);
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
        (**(code **)(*plStack_38 + 8))();
      }
    }
  }
  if (plStack_30 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_30 + 1);
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
        (**(code **)(*plStack_30 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a2c23f4; end: 10a2c246b;  */

undefined1 FUN_10a2c23f4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_10a2c246c(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a2c246c; end: 10a2c24ff;  */

undefined8 * FUN_10a2c246c(undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(char *)(param_1 + 2) == '\x01') && (plVar4 = (long *)param_1[1], plVar4 != (long *)0x0)) {
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
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



/* Entry: 10a2c2500; end: 10a2c265f;  */

long * FUN_10a2c2500(long *param_1,long *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lStack_e8;
  undefined8 *apuStack_e0 [7];
  long lStack_a8;
  long lStack_a0;
  undefined **appuStack_98 [7];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *param_2;
  *param_1 = lVar7;
  plVar6 = param_1;
  if (lVar7 == 0) {
    param_1[1] = 0;
    plVar5 = param_2;
  }
  else {
    lVar3 = 0xb0;
    __Znwm();
    lStack_e8 = param_2[1];
    (**(code **)(param_2[2] + 0x10))(apuStack_e0);
    plVar5 = param_2 + 0xb;
    lStack_a8 = param_2[9];
    lStack_a0 = param_2[10];
    appuStack_98[0] = &PTR_DAT_110ae9180;
    (**(code **)(*plVar5 + 0x10))(appuStack_98,plVar5);
    param_2[10] = (long)&UNK_1053a6a3c;
    (**(code **)*plVar5)(plVar5);
    *plVar5 = (long)&PTR_DAT_110ae9180;
    lStack_60 = param_2[0x12];
    param_2[0x12] = 0;
    FUN_10a2c2710(lVar3,lVar7,&lStack_e8);
    param_1[1] = lVar3;
    if (lStack_60 != 0) {
      func_0x0001092b4274(&lStack_60);
    }
    func_0x0001092ba41c(&lStack_a8);
    (*(code *)*apuStack_e0[0])(apuStack_e0);
    param_3 = *param_2;
    plVar5 = (long *)0x0;
    if (param_3 != 0) {
      plVar5 = (long *)(param_3 + 0x18);
    }
    FUN_10a2c2660();
  }
  *param_2 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar4 = plVar6;
  if ((plVar5 != (long *)0x0) &&
     ((plVar4 = (long *)plVar5[1], plVar4 == (long *)0x0 || (plVar4[1] == -1)))) {
    plVar6 = (long *)plVar6[1];
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = (long *)plVar5[1];
    }
    *plVar5 = param_3;
    plVar5[1] = (long)plVar6;
    if (plVar4 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 1;
      do {
        lVar7 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return plVar6;
      }
    }
  }
  return plVar4;
}



/* Entry: 10a2c2660; end: 10a2c270f;  */

void FUN_10a2c2660(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a2c2710; end: 10a2c27cf;  */

undefined8 * FUN_10a2c2710(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110bbbbf0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = *param_3;
  (**(code **)(param_3[1] + 0x10))(param_1 + 5);
  param_1[0xc] = param_3[8];
  param_1[0xd] = &UNK_1053a6a3c;
  param_1[0xe] = &PTR_DAT_110ae9180;
  param_1[0xd] = param_3[9];
  plVar1 = param_3 + 10;
  (**(code **)(*plVar1 + 0x10))(param_1 + 0xe,plVar1);
  param_3[9] = &UNK_1053a6a3c;
  (**(code **)*plVar1)(plVar1);
  *plVar1 = (long)&PTR_DAT_110ae9180;
  param_1[0x15] = param_3[0x11];
  param_3[0x11] = 0;
  return param_1;
}



/* Entry: 10a2c27d0; end: 10a2c2873;  */

void FUN_10a2c27d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbbbf0;
  if (param_1[0x15] != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 0xc);
  (**(code **)param_1[5])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10a2c2874; end: 10a2c28c3;  */

void FUN_10a2c2874(long param_1)

{
  FUN_10a2c22f8(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0xa8) != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010a2c28bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10a2c28c4; end: 10a2c28ff;  */

long FUN_10a2c28c4(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bbbc30);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a2c2900; end: 10a2c2903;  */

void FUN_10a2c2900(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2c2904; end: 10a2c2973;  */

void FUN_10a2c2904(long *param_1)

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
        lVar2 = lVar2 + -0x30;
        FUN_10a2b7938(lVar2);
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



/* Entry: 10a2c2974; end: 10a2c2ad3;  */

long FUN_10a2c2974(long param_1)

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



/* Entry: 10a2c2ad4; end: 10a2c2b57;  */

long FUN_10a2c2ad4(long param_1,long param_2,long param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xa0) {
    func_0x000104c34edc(param_3,param_1);
    param_3 = param_3 + 0xa0;
  }
  return param_3;
}



/* Entry: 10a2c2b58; end: 10a2c2d33;  */

undefined1 * FUN_10a2c2b58(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_1 != param_2) {
    do {
      plVar3 = (long *)(param_1 + 8);
      *param_3 = *param_1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3 + 8);
      if (param_3 != param_1) {
        plVar8 = (long *)(param_3 + 0x20);
        puVar4 = (undefined1 *)*plVar8;
        lVar2 = *(long *)(param_1 + 0x20);
        lVar9 = *(long *)(param_1 + 0x28);
        uVar5 = lVar9 - lVar2;
        if ((ulong)(*(long *)(param_3 + 0x30) - (long)puVar4) < uVar5) {
          uVar10 = ((long)uVar5 >> 4) * -0x5555555555555555;
          plVar1 = plVar8;
          func_0x000104c35824();
          if (0x555555555555555 < uVar10) {
            FUN_10a2b7850();
            *(ulong *)(param_3 + 0x28) = uVar10;
            __Unwind_Resume();
            for (; plVar1 != plVar3; plVar1 = plVar1 + 6) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (puVar4,plVar1);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (puVar4 + 0x18,plVar1 + 3);
              puVar4 = puVar4 + 0x30;
            }
            return puVar4;
          }
          lVar6 = *(long *)(param_3 + 0x30) - *(long *)(param_3 + 0x20) >> 4;
          uVar7 = lVar6 * 0x5555555555555556;
          if (uVar7 < uVar10 || uVar7 + ((long)uVar5 >> 4) * 0x5555555555555555 == 0) {
            uVar7 = uVar10;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
            uVar7 = 0x555555555555555;
          }
          FUN_10a2b7ab4(plVar8,uVar7);
          FUN_10a2b7afc(plVar8,lVar2,lVar9,*(undefined8 *)(param_3 + 0x28));
LAB_10a2c2c74:
          *(long **)(param_3 + 0x28) = plVar8;
        }
        else {
          uVar10 = *(long *)(param_3 + 0x28) - (long)puVar4;
          if (uVar10 < uVar5) {
            FUN_10a2c2d34(lVar2,lVar2 + uVar10);
            FUN_10a2b7afc(plVar8,lVar2 + uVar10,lVar9,*(undefined8 *)(param_3 + 0x28));
            goto LAB_10a2c2c74;
          }
          FUN_10a2c2d34(lVar2,lVar9);
          lVar9 = *(long *)(param_3 + 0x28);
          while (lVar9 != lVar2) {
            lVar9 = lVar9 + -0x30;
            FUN_10a2b6fe0(lVar9);
          }
          *(long *)(param_3 + 0x28) = lVar2;
        }
        FUN_10a105cdc(param_3 + 0x38,*(long *)(param_1 + 0x38),*(long *)(param_1 + 0x40),
                      (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 3) *
                      -0x5555555555555555);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_3 + 0x50,param_1 + 0x50);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_3 + 0x68,param_1 + 0x68);
      param_3[0x80] = param_1[0x80];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_3 + 0x88,param_1 + 0x88);
      param_1 = param_1 + 0xa0;
      param_3 = param_3 + 0xa0;
    } while (param_1 != param_2);
  }
  return param_3;
}



/* Entry: 10a2c2d34; end: 10a2c2d93;  */

long FUN_10a2c2d34(long param_1,long param_2,long param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,param_1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_3 + 0x18,param_1 + 0x18);
    param_3 = param_3 + 0x30;
  }
  return param_3;
}



/* Entry: 10a2c2d94; end: 10a2c2da7;  */

undefined1  [16] FUN_10a2c2d94(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < (undefined *)0x19999999999999a) {
    lVar2 = (long)param_2 * 0xa0;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  puVar3 = param_2;
  for (; puVar1 != param_2; puVar1 = puVar1 + 0x38) {
    puVar3 = puVar1;
    FUN_10a2c2e70(param_3,puVar1);
    param_3 = param_3 + 0x38;
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = param_3;
  return auVar5;
}



/* Entry: 10a2c2da8; end: 10a2c2deb;  */

undefined1  [16] FUN_10a2c2da8(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x19999999999999a) {
    lVar1 = param_2 * 0xa0;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    uVar2 = param_1;
    FUN_10a2c2e70(param_3,param_1);
    param_3 = param_3 + 0x38;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_3;
  return auVar4;
}



/* Entry: 10a2c2dec; end: 10a2c2e6f;  */

long FUN_10a2c2dec(long param_1,long param_2,long param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    FUN_10a2c2e70(param_3,param_1);
    param_3 = param_3 + 0x38;
  }
  return param_3;
}



/* Entry: 10a2c2e70; end: 10a2c2f0f;  */

undefined4 * FUN_10a2c2e70(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  lVar4 = *(long *)(param_2 + 4);
  uVar5 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar5;
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
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 6,*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 8));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(undefined8 *)(param_1 + 6) = uVar5;
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



/* Entry: 10a2c2f10; end: 10a2c2fcf;  */

undefined4 * FUN_10a2c2f10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xe) {
    *param_3 = *param_1;
    uVar7 = *(undefined8 *)(param_1 + 4);
    uVar6 = *(undefined8 *)(param_1 + 2);
    if (*(long *)(param_1 + 4) != 0) {
      plVar5 = (long *)(*(long *)(param_1 + 4) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar5 = *(long **)(param_3 + 4);
    *(undefined8 *)(param_3 + 4) = uVar7;
    *(undefined8 *)(param_3 + 2) = uVar6;
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
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_3 + 6,param_1 + 6);
    *(undefined1 *)(param_3 + 0xc) = *(undefined1 *)(param_1 + 0xc);
    param_3 = param_3 + 0xe;
  }
  return param_3;
}



/* Entry: 10a2c2fd0; end: 10a2c2fe3;  */

void FUN_10a2c2fd0(undefined8 param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  puVar3 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0x492492492492493) {
    __Znwm(param_2 * 0x38);
    return;
  }
  func_0x000109ffded8();
  plVar4 = *(long **)(param_2 + 0x20);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if ((*(long *)(param_2 + 0x18) != 0) && (99 < *(int *)(puVar3 + 0x30) - 200U)) {
        plVar6 = *(long **)(*(long *)(param_2 + 0x10) + 0x18);
        lVar7 = *plVar6;
        if ((bRam000000011330a9e8 & 1) != 0) {
          plVar5 = plVar6 + 5;
          if (*(char *)((long)plVar6 + 0x3f) < '\0') {
            plVar5 = (long *)*plVar5;
          }
          func_0x00010ae06f08(0,1,&UNK_10f649d7d,&UNK_10f64ad65,0x2d1,&UNK_10f64ae2b,in_x6,in_x7,
                              plVar5);
        }
        if (((char)plVar6[4] == '\x01') && (*(long *)(lVar7 + 0x1a8) != 0)) {
          FUN_10a76bd40(*(undefined8 *)(*(long *)(lVar7 + 0x1a8) + 0x8d8),plVar6 + 1,1);
        }
      }
      plVar6 = plVar4 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
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



/* Entry: 10a2c2fe4; end: 10a2c302b;  */

void FUN_10a2c2fe4(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if (param_2 < 0x492492492492493) {
    __Znwm(param_2 * 0x38);
    return;
  }
  func_0x000109ffded8();
  plVar3 = *(long **)(param_2 + 0x20);
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      if ((*(long *)(param_2 + 0x18) != 0) && (99 < *(int *)(param_1 + 0x30) - 200U)) {
        plVar5 = *(long **)(*(long *)(param_2 + 0x10) + 0x18);
        lVar6 = *plVar5;
        if ((bRam000000011330a9e8 & 1) != 0) {
          plVar4 = plVar5 + 5;
          if (*(char *)((long)plVar5 + 0x3f) < '\0') {
            plVar4 = (long *)*plVar4;
          }
          func_0x00010ae06f08(0,1,&UNK_10f649d7d,&UNK_10f64ad65,0x2d1,&UNK_10f64ae2b,in_x6,in_x7,
                              plVar4);
        }
        if (((char)plVar5[4] == '\x01') && (*(long *)(lVar6 + 0x1a8) != 0)) {
          FUN_10a76bd40(*(undefined8 *)(*(long *)(lVar6 + 0x1a8) + 0x8d8),plVar5 + 1,1);
        }
      }
      plVar5 = plVar3 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a2c302c; end: 10a2c315b;  */

void FUN_10a2c302c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar3 = *(long **)(param_2 + 0x20);
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      if ((*(long *)(param_2 + 0x18) != 0) && (99 < *(int *)(param_1 + 0x30) - 200U)) {
        plVar5 = *(long **)(*(long *)(param_2 + 0x10) + 0x18);
        lVar6 = *plVar5;
        if ((bRam000000011330a9e8 & 1) != 0) {
          plVar4 = plVar5 + 5;
          if (*(char *)((long)plVar5 + 0x3f) < '\0') {
            plVar4 = (long *)*plVar4;
          }
          func_0x00010ae06f08(0,1,&UNK_10f649d7d,&UNK_10f64ad65,0x2d1,&UNK_10f64ae2b,in_x6,in_x7,
                              plVar4);
        }
        if (((char)plVar5[4] == '\x01') && (*(long *)(lVar6 + 0x1a8) != 0)) {
          FUN_10a76bd40(*(undefined8 *)(*(long *)(lVar6 + 0x1a8) + 0x8d8),plVar5 + 1,1);
        }
      }
      plVar5 = plVar3 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a2c315c; end: 10a2c3197;  */

undefined8 * FUN_10a2c315c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a2c3198; end: 10a2c31b7;  */

void FUN_10a2c3198(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bbb950;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2c31b8; end: 10a2c31db;  */

void FUN_10a2c31b8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a2c31dc; end: 10a2c31fb;  */

void FUN_10a2c31dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bbb9a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2c31fc; end: 10a2c320b;  */

void FUN_10a2c31fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2c3204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a2c320c; end: 10a2c3277;  */

undefined8 * FUN_10a2c320c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c36b40;
  FUN_10a2b8c88(param_1 + 9);
  puStack_28 = param_1 + 6;
  FUN_10a2b7750(&puStack_28);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a2c3278; end: 10a2c3287;  */

void FUN_10a2c3278(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbb9f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2c3288; end: 10a2c32a7;  */

void FUN_10a2c3288(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbb9f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2c32a8; end: 10a2c32c7;  */

void FUN_10a2c32a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2c32b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a2c32c8; end: 10a2c32e7;  */

void FUN_10a2c32c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bbba40;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2c32e8; end: 10a2c3307;  */

void FUN_10a2c32e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2c32f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a2c3308; end: 10a2c3327;  */

void FUN_10a2c3308(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bbba90;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2c3328; end: 10a2c3337;  */

void FUN_10a2c3328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2c3330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a2c3338; end: 10a2c3463;  */

void FUN_10a2c3338(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_4 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar5 = *(long *)(param_4 + 0x10);
      if (lVar5 != 0) {
        if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
          plVar1 = (long *)*param_1;
          if (-1 < *(char *)((long)param_1 + 0x17)) {
            plVar1 = param_1;
          }
          func_0x00010ae06f08(1,8,&UNK_10f64a44f,&UNK_10f64ae5f,0x32,&UNK_10f64af0a,param_7,param_8,
                              plVar1);
        }
        *(int *)(lVar5 + 0xe0) = (int)param_2;
        (**(code **)(**(long **)(lVar5 + 0x128) + 0x18))(*(long **)(lVar5 + 0x128),param_1,param_3);
        FUN_10a2b60ec(lVar5,param_2);
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



/* Entry: 10a2c3464; end: 10a2c34c3;  */

void FUN_10a2c3464(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a2c34c4; end: 10a2c35b3;  */

void FUN_10a2c34c4(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  
  plVar4 = *(long **)(param_2 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar5 = *(long *)(param_2 + 0x10);
      if (lVar5 != 0) {
        if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
          func_0x00010ae06f08(1,8,&UNK_10f64a44f,&UNK_10f64af5b,0x5d,&UNK_10f64afc7,in_x6,in_x7,
                              lVar5,plVar4);
        }
        (**(code **)(**(long **)(lVar5 + 0x128) + 0x10))(*(long **)(lVar5 + 0x128),param_1);
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



/* Entry: 10a2c35b4; end: 10a2c3613;  */

void FUN_10a2c35b4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a2c3614; end: 10a2c3afb;  */

long * FUN_10a2c3614(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  char **ppcVar7;
  long *plVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined5 uStack_180;
  undefined1 uStack_17b;
  undefined2 uStack_17a;
  undefined8 uStack_178;
  undefined8 uStack_170;
  char *pcStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  char acStack_148 [8];
  long lStack_140;
  undefined8 **ppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  int iStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [56];
  long lStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [40];
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = *(long **)(param_2 + 0x20);
  plVar8 = plVar6;
  if (plVar6 == (long *)0x0) goto LAB_10a2c3a28;
  __ZNSt3__119__shared_weak_count4lockEv();
  plVar8 = plVar6;
  plStack_190 = plVar6;
  if (plVar6 == (long *)0x0) goto LAB_10a2c3a28;
  lStack_198 = *(long *)(param_2 + 0x18);
  if (lStack_198 != 0) {
    puVar11 = *(undefined8 **)(*(long *)(param_2 + 0x10) + 0x18);
    lStack_118 = param_1[1];
    plStack_120 = (long *)*param_1;
    lStack_110 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    lStack_100 = param_1[4];
    plStack_108 = (long *)param_1[3];
    lStack_f8 = param_1[5];
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    iStack_f0 = (int)param_1[6];
    lStack_e8 = param_1[7];
    lStack_e0 = param_1[8];
    param_1[7] = 0;
    (**(code **)(param_1[9] + 0x10))(auStack_d8,param_1 + 9);
    lStack_a0 = param_1[0x10];
    uStack_98 = (undefined4)param_1[0x11];
    FUN_10a0424c4(auStack_90,param_1 + 0x12);
    lVar10 = lStack_a0;
    if (iStack_f0 - 200U < 100) {
      FUN_109ffe064(&ppuStack_138,lStack_e8,lStack_a0);
      if (-1 < (char)bStack_121) {
        uStack_130 = (ulong)bStack_121;
      }
      if (uStack_130 == 0) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f64a44f,&UNK_10f64affe,0x7f,&UNK_10f64b16a);
        }
      }
      else {
        plStack_50 = (long *)0x0;
        FUN_109fc89b4(acStack_148,&ppuStack_138,alStack_68,0,0);
        if (plStack_50 == alStack_68) {
          lVar9 = 0x20;
LAB_10a2c37d0:
          (**(code **)(*plStack_50 + lVar9))();
        }
        else if (plStack_50 != (long *)0x0) {
          lVar9 = 0x28;
          goto LAB_10a2c37d0;
        }
        if (acStack_148[0] == '\t') {
          if ((bRam000000011330a9e8 & 1) != 0) {
            func_0x00010ae06f08(0,1,&UNK_10f64a44f,&UNK_10f64affe,0x7a,&UNK_10f64b115,in_x6,in_x7,
                                lVar10);
          }
        }
        else {
          uStack_178._7_1_ = '\r';
          uStack_188._0_4_ = 0x63696f76;
          uStack_188._4_4_ = 0x6c632d65;
          uStack_180 = 0x7265747375;
          uStack_17b = 0;
          pcStack_168 = acStack_148;
          lStack_160 = 0;
          uStack_158 = 0;
          uStack_150 = 0x8000000000000000;
          if (acStack_148[0] == '\x01') {
            lVar10 = lStack_140;
            func_0x0001093793a4(lStack_140,&uStack_188);
            lStack_160 = lVar10;
            if (uStack_178._7_1_ < '\0') {
              __ZdlPv(CONCAT44(uStack_188._4_4_,(undefined4)uStack_188));
            }
          }
          else if (acStack_148[0] == '\x02') {
            uStack_158 = *(undefined8 *)(lStack_140 + 8);
          }
          else {
            uStack_150 = 1;
          }
          uStack_188 = acStack_148;
          uStack_180 = 0;
          uStack_17b = 0;
          uStack_17a = 0;
          uStack_178 = 0;
          uStack_170 = 0x8000000000000000;
          if (acStack_148[0] == '\x02') {
            uStack_178 = *(undefined8 *)(lStack_140 + 8);
          }
          else if (acStack_148[0] == '\x01') {
            lStack_140 = lStack_140 + 8;
            uStack_180 = (undefined5)lStack_140;
            uStack_17b = (undefined1)((ulong)lStack_140 >> 0x28);
            uStack_17a = (undefined2)((ulong)lStack_140 >> 0x30);
          }
          else {
            uStack_170 = 1;
          }
          ppcVar7 = &pcStack_168;
          func_0x000109379420(ppcVar7,&uStack_188);
          if (((ulong)ppcVar7 & 1) == 0) {
            func_0x00010937b950(&pcStack_168);
            func_0x00010937ba88();
            uVar5 = (undefined4)uStack_188;
            if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
              pppuVar2 = (undefined8 ***)ppuStack_138;
              if (-1 < (char)bStack_121) {
                pppuVar2 = &ppuStack_138;
              }
              func_0x00010ae06f08(1,8,&UNK_10f64a44f,&UNK_10f64affe,0x72,&UNK_10f64b0cc,in_x6,in_x7,
                                  pppuVar2);
            }
            (*(code *)*puVar11)(uVar5,puVar11);
          }
          else if ((bRam000000011330a9e8 & 1) != 0) {
            func_0x00010ae06f08(0,1,&UNK_10f64a44f,&UNK_10f64affe,0x75,&UNK_10f64b0f0);
          }
        }
        func_0x000109380ffc(&lStack_140,acStack_148[0]);
      }
      if ((char)bStack_121 < '\0') {
        __ZdlPv(ppuStack_138);
      }
    }
    else if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f64a44f,&UNK_10f64affe,0x65,&UNK_10f64b097,in_x6,in_x7,
                          iStack_f0);
    }
    func_0x000104c4f944(auStack_90);
    plVar8 = &lStack_e8;
    FUN_10a042634();
    if (lStack_f8 < 0) {
      plVar8 = plStack_108;
      __ZdlPv();
    }
    if (lStack_110 < 0) {
      plVar8 = plStack_120;
      __ZdlPv();
    }
  }
  plVar1 = plVar6 + 1;
  do {
    lVar10 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    plVar8 = plVar6;
  }
LAB_10a2c3a28:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar8;
  }
  ___stack_chk_fail();
  func_0x000109380ffc(&lStack_140,acStack_148[0]);
  if ((char)bStack_121 < '\0') {
    __ZdlPv(ppuStack_138);
  }
  FUN_10a05bd10(&plStack_120);
  func_0x00010a05a86c(&lStack_198);
  __Unwind_Resume();
  plVar6 = (long *)plVar8[3];
  if (plVar6 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar6 != (long *)0x0) {
      if (plVar8[2] != 0) {
        FUN_10a05c0fc(plVar8[2],plVar8[1]);
      }
      plVar1 = plVar6 + 1;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plVar8[3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar8 + 1;
}



/* Entry: 10a2c3afc; end: 10a2c3b27;  */

undefined8 * FUN_10a2c3afc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a2c3b28; end: 10a2c4283;  */

void FUN_10a2c3b28(long *****param_1,undefined8 *param_2)

{
  long ****pppplVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long ****pppplVar5;
  ulong uVar6;
  byte **ppbVar7;
  long ****pppplVar8;
  undefined8 uVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  long ***ppplVar13;
  undefined8 *unaff_x20;
  long *****ppppplVar14;
  long ****unaff_x22;
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  long ***ppplStack_240;
  long ****pppplStack_238;
  undefined8 *puStack_230;
  long ***ppplStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  long ****pppplStack_210;
  ulong uStack_208;
  long lStack_200;
  long ***ppplStack_1f8;
  undefined4 uStack_1ec;
  byte *pbStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined7 uStack_1c0;
  undefined1 uStack_1b9;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  byte *pbStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  byte *pbStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  byte *pbStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  byte abStack_148 [8];
  ulong uStack_140;
  long ****pppplStack_138;
  ulong uStack_130;
  byte bStack_121;
  long ***ppplStack_120;
  long ***ppplStack_118;
  long ***ppplStack_110;
  long ***ppplStack_108;
  long ***ppplStack_100;
  long ***ppplStack_f8;
  uint uStack_f0;
  long ***ppplStack_e8;
  long ***ppplStack_e0;
  undefined1 auStack_d8 [56];
  long ****pppplStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [40];
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplVar5 = (long ****)param_2[4];
  pppplVar8 = pppplVar5;
  if (pppplVar5 != (long ****)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    pppplVar8 = pppplVar5;
    unaff_x20 = param_2;
    ppplStack_1f8 = (long ***)pppplVar5;
    if (pppplVar5 != (long ****)0x0) {
      lStack_200 = param_2[3];
      if (lStack_200 != 0) {
        param_2 = *(undefined8 **)(param_2[2] + 0x18);
        ppplStack_118 = (long ***)param_1[1];
        ppplStack_120 = (long ***)*param_1;
        ppplStack_110 = (long ***)param_1[2];
        *param_1 = (long ****)0x0;
        param_1[1] = (long ****)0x0;
        ppplStack_100 = (long ***)param_1[4];
        ppplStack_108 = (long ***)param_1[3];
        ppplStack_f8 = (long ***)param_1[5];
        param_1[2] = (long ****)0x0;
        param_1[3] = (long ****)0x0;
        param_1[4] = (long ****)0x0;
        param_1[5] = (long ****)0x0;
        uStack_f0 = *(uint *)(param_1 + 6);
        unaff_x22 = &ppplStack_120;
        ppplStack_e8 = (long ***)param_1[7];
        ppplStack_e0 = (long ***)param_1[8];
        param_1[7] = (long ****)0x0;
        (*(code *)param_1[9][2])(auStack_d8,param_1 + 9);
        pppplStack_a0 = param_1[0x10];
        uStack_98 = *(undefined4 *)(param_1 + 0x11);
        FUN_10a0424c4(auStack_90,param_1 + 0x12);
        ppppplVar14 = (long *****)pppplStack_a0;
        param_1 = (long *****)*param_2;
        if (uStack_f0 - 200 < 100) {
          *(undefined4 *)(param_1 + 0x24) = 0;
          FUN_109ffe064(&pppplStack_138,ppplStack_e8,pppplStack_a0);
          if (-1 < (char)bStack_121) {
            uStack_130 = (ulong)bStack_121;
          }
          if (uStack_130 == 0) {
            if ((bRam000000011330a9e8 & 1) != 0) {
              func_0x00010ae06f08(0,1,&UNK_10f64a44f,&UNK_10f64b1b5,0xc3,&UNK_10f64b375);
            }
          }
          else {
            plStack_50 = (long *)0x0;
            FUN_109fc89b4(abStack_148,&pppplStack_138,alStack_68,0,0);
            if (plStack_50 == alStack_68) {
              lVar12 = 0x20;
LAB_10a2c3d14:
              (**(code **)(*plStack_50 + lVar12))();
            }
            else if (plStack_50 != (long *)0x0) {
              lVar12 = 0x28;
              goto LAB_10a2c3d14;
            }
            if (abStack_148[0] == 9) {
              if ((bRam000000011330a9e8 & 1) != 0) {
                pppplStack_210 = (long ****)ppppplVar14;
                func_0x00010ae06f08(0,1,&UNK_10f64a44f,&UNK_10f64b1b5,0xbe,&UNK_10f64b31c);
              }
            }
            else {
              uStack_178._7_1_ = '\t';
              pbStack_188 = (byte *)0x656b6f5468747561;
              uStack_180 = CONCAT62(uStack_180._2_6_,0x6e);
              pbStack_168 = abStack_148;
              uStack_160 = 0;
              uStack_158 = 0;
              uStack_150 = 0x8000000000000000;
              if (abStack_148[0] == 1) {
                uVar6 = uStack_140;
                func_0x0001093793a4(uStack_140,&pbStack_188);
                uStack_160 = uVar6;
                if (uStack_178._7_1_ < '\0') {
                  __ZdlPv(pbStack_188);
                }
              }
              else if (abStack_148[0] == 2) {
                uStack_158 = *(undefined8 *)(uStack_140 + 8);
              }
              else {
                uStack_150 = 1;
              }
              uStack_198._7_1_ = '\b';
              pbStack_1a8 = (byte *)0x6570795468747561;
              uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
              pbStack_188 = abStack_148;
              uStack_180 = 0;
              uStack_178 = 0;
              uStack_170 = 0x8000000000000000;
              if (abStack_148[0] == 1) {
                uVar6 = uStack_140;
                func_0x0001093793a4(uStack_140,&pbStack_1a8);
                uStack_180 = uVar6;
                if (uStack_198._7_1_ < '\0') {
                  __ZdlPv(pbStack_1a8);
                }
              }
              else if (abStack_148[0] == 2) {
                uStack_178 = *(undefined8 *)(uStack_140 + 8);
              }
              else {
                uStack_170 = 1;
              }
              uStack_1b8._7_1_ = '\x0f';
              uStack_1c8._0_4_ = 0x61727564;
              uStack_1c8._4_4_ = 0x6e6f6974;
              uStack_1c0 = 0x73646e6f636553;
              uStack_1b9 = 0;
              pbStack_1a8 = abStack_148;
              uStack_1a0 = 0;
              uStack_198 = 0;
              uStack_190 = 0x8000000000000000;
              if (abStack_148[0] == 1) {
                uVar6 = uStack_140;
                func_0x0001093793a4(uStack_140,&uStack_1c8);
                uStack_1a0 = uVar6;
                if (uStack_1b8._7_1_ < '\0') {
                  __ZdlPv(CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8));
                }
              }
              else if (abStack_148[0] == 2) {
                uStack_198 = *(undefined8 *)(uStack_140 + 8);
              }
              else {
                uStack_190 = 1;
              }
              uStack_1c8 = abStack_148;
              uStack_1c0 = 0;
              uStack_1b9 = 0;
              uStack_1b8 = 0;
              uStack_1b0 = 0x8000000000000000;
              if (abStack_148[0] == 2) {
                uStack_1b8 = *(undefined8 *)(uStack_140 + 8);
              }
              else if (abStack_148[0] == 1) {
                uStack_1c0 = (undefined7)(uStack_140 + 8);
                uStack_1b9 = (undefined1)(uStack_140 + 8 >> 0x38);
              }
              else {
                uStack_1b0 = 1;
              }
              ppbVar7 = &pbStack_168;
              func_0x000109379420(ppbVar7,&uStack_1c8);
              if (((ulong)ppbVar7 & 1) == 0) {
                pbStack_1e8 = abStack_148;
                lStack_1e0 = 0;
                lStack_1d8 = 0;
                uStack_1d0 = 0x8000000000000000;
                if (abStack_148[0] == 2) {
                  lStack_1d8 = *(long *)(uStack_140 + 8);
                }
                else if (abStack_148[0] == 1) {
                  lStack_1e0 = uStack_140 + 8;
                }
                else {
                  uStack_1d0 = 1;
                }
                ppbVar7 = &pbStack_1a8;
                func_0x000109379420(ppbVar7,&pbStack_1e8);
                if (((ulong)ppbVar7 & 1) == 0) {
                  func_0x00010937b950(&pbStack_168);
                  func_0x00010937c804(&pbStack_1e8);
                  func_0x00010937b950(&pbStack_1a8);
                  func_0x00010937ba88();
                  ppppplVar14 = (long *****)((ulong)uStack_1c8 & 0xffffffff);
                  uStack_1ec = 0;
                  uStack_1c8 = abStack_148;
                  uStack_1c0 = 0;
                  uStack_1b9 = 0;
                  uStack_1b8 = 0;
                  uStack_1b0 = 0x8000000000000000;
                  if (abStack_148[0] == 2) {
                    uStack_1b8 = *(undefined8 *)(uStack_140 + 8);
                  }
                  else if (abStack_148[0] == 1) {
                    uStack_1c0 = (undefined7)(uStack_140 + 8);
                    uStack_1b9 = (undefined1)(uStack_140 + 8 >> 0x38);
                  }
                  else {
                    uStack_1b0 = 1;
                  }
                  ppbVar7 = &pbStack_188;
                  func_0x000109379420(ppbVar7,&uStack_1c8);
                  if (((ulong)ppbVar7 & 1) == 0) {
                    func_0x00010937b950(&pbStack_188);
                    FUN_10a2c4284();
                    uStack_1ec = (undefined4)uStack_1c8;
                  }
                  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
                    pppplStack_210 = pppplStack_138;
                    if (-1 < (char)bStack_121) {
                      pppplStack_210 = (long ****)&pppplStack_138;
                    }
                    func_0x00010ae06f08(1,8,&UNK_10f64a44f,&UNK_10f64b1b5,0xb6,&UNK_10f64b2cb);
                  }
                  param_2 = param_2 + 1;
                  (*(code *)*param_2)(&pbStack_1e8,ppppplVar14,&uStack_1ec,param_2);
                  if (lStack_1d8 < 0) {
                    __ZdlPv(pbStack_1e8);
                  }
                  goto LAB_10a2c40e8;
                }
              }
              if ((bRam000000011330a9e8 & 1) != 0) {
                func_0x00010ae06f08(0,1,&UNK_10f64a44f,&UNK_10f64b1b5,0xb9,&UNK_10f64b2f3);
              }
            }
LAB_10a2c40e8:
            func_0x000109380ffc(&uStack_140,abStack_148[0]);
          }
          param_1 = ppppplVar14;
          if ((char)bStack_121 < '\0') {
            __ZdlPv(pppplStack_138);
          }
        }
        else {
          if ((bRam000000011330a9e8 & 1) != 0) {
            uStack_208 = (ulong)*(uint *)(param_1 + 0x24);
            pppplStack_210 = (long ****)(ulong)uStack_f0;
            func_0x00010ae06f08(0,1,&UNK_10f64a44f,&UNK_10f64b1b5,0x9c,&UNK_10f64b28b);
          }
          if (*(int *)(param_1 + 0x24) < 5) {
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
            FUN_10a2b60ec(param_1,200);
          }
        }
        func_0x000104c4f944(auStack_90);
        pppplVar8 = &ppplStack_e8;
        FUN_10a042634();
        if ((long)ppplStack_f8 < 0) {
          pppplVar8 = (long ****)ppplStack_108;
          __ZdlPv();
        }
        if ((long)ppplStack_110 < 0) {
          pppplVar8 = (long ****)ppplStack_120;
          __ZdlPv();
        }
      }
      pppplVar1 = pppplVar5 + 1;
      do {
        ppplVar13 = *pppplVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
        if (bVar3) {
          *pppplVar1 = (long ***)((long)ppplVar13 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      unaff_x20 = param_2;
      if (ppplVar13 == (long ***)0x0) {
        (*(code *)(*pppplVar5)[2])(pppplVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppplVar8 = pppplVar5;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_1d8 < 0) {
    __ZdlPv(pbStack_1e8);
  }
  piVar10 = (int *)(ulong)abStack_148[0];
  func_0x000109380ffc(&uStack_140);
  if ((char)bStack_121 < '\0') {
    __ZdlPv(pppplStack_138);
  }
  FUN_10a05bd10(&ppplStack_120);
  func_0x00010a05a86c(&lStack_200);
  pppplVar5 = pppplVar8;
  __Unwind_Resume();
  pcStack_218 = FUN_10a2c4284;
  cVar2 = *(char *)pppplVar5;
  if (cVar2 != '\x05') {
    if (cVar2 == '\a') {
      iVar11 = (int)(double)pppplVar5[1];
      goto LAB_10a2c42c8;
    }
    if (cVar2 != '\x06') {
      uVar9 = 0x20;
      ppplStack_240 = (long ***)unaff_x22;
      pppplStack_238 = (long ****)param_1;
      puStack_230 = unaff_x20;
      ppplStack_228 = (long ***)pppplVar8;
      puStack_220 = &stack0xfffffffffffffff0;
      ___cxa_allocate_exception(0x20);
      func_0x00010937bcec(pppplVar5);
      func_0x000107c2b054(auStack_270,pppplVar5);
      FUN_109feb280(auStack_258,&UNK_10f567436,auStack_270);
      func_0x00010937bbbc(uVar9,0x12e,auStack_258);
      ___cxa_throw(uVar9,&PTR_DAT_110af4510,&DAT_10937bd14);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2c4348);
      (*pcVar4)();
    }
  }
  iVar11 = *(int *)(pppplVar5 + 1);
LAB_10a2c42c8:
  *piVar10 = iVar11;
  return;
}



/* Entry: 10a2c4284; end: 10a2c439f;  */

void FUN_10a2c4284(char *param_1,int *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  if (cVar1 != '\x05') {
    if (cVar1 == '\a') {
      iVar4 = (int)*(double *)(param_1 + 8);
      goto LAB_10a2c42c8;
    }
    if (cVar1 != '\x06') {
      uVar3 = 0x20;
      ___cxa_allocate_exception(0x20);
      func_0x00010937bcec(param_1);
      func_0x000107c2b054(auStack_60,param_1);
      FUN_109feb280(auStack_48,&UNK_10f567436,auStack_60);
      func_0x00010937bbbc(uVar3,0x12e,auStack_48);
      ___cxa_throw(uVar3,&PTR_DAT_110af4510,&DAT_10937bd14);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a2c4348);
      (*pcVar2)();
    }
  }
  iVar4 = *(int *)(param_1 + 8);
LAB_10a2c42c8:
  *param_2 = iVar4;
  return;
}



/* Entry: 10a2c43a0; end: 10a2c43cb;  */

undefined8 * FUN_10a2c43a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a2c43cc; end: 10a2c4827;  */

void FUN_10a2c43cc(long param_1)

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
      goto LAB_10a2c46e8;
    }
    if ((*(byte *)(plVar5 + 0x15) & 1) == 0) goto LAB_10a2c46e8;
    *(long *)(param_1 + 0x48) = plVar5[0x13];
    lVar6 = plVar5[0x14];
    *(long *)(param_1 + 0x50) = lVar6;
    if (lVar6 == 0) {
LAB_10a2c4434:
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
      if (plVar5 != (long *)0x0) goto LAB_10a2c4434;
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
    if (*(long **)(param_1 + 0x70) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x70) + 8))();
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
LAB_10a2c46e8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2c46ec);
  (*pcVar4)();
}



/* Entry: 10a2c4828; end: 10a2c496b;  */

void FUN_10a2c4828(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 == (long *)0x0) goto LAB_10a2c4954;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a2c4954;
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
    if (plVar4 == (long *)0x0) goto LAB_10a2c4954;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a2c4954;
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
LAB_10a2c4954:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a2c496c; end: 10a2c4c0f;  */

void FUN_10a2c496c(long param_1)

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
    FUN_10a2c1c70(param_1 + 0xa8,param_1 + 0x48);
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
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2c4b4c);
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



/* Entry: 10a2c4c10; end: 10a2c4d23;  */

void FUN_10a2c4c10(long param_1)

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



/* Entry: 10a2c4d24; end: 10a2c4fbf;  */

void FUN_10a2c4d24(long param_1)

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
  undefined8 *puVar10;
  
  plVar6 = *(long **)(param_1 + 0x88);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2c4eec);
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
  plVar6 = *(long **)(param_1 + 0x90);
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
  lVar9 = *(long *)(param_1 + 0x98);
  plVar6 = *(long **)(lVar9 + 0x10);
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    lVar8 = *(long *)(lVar9 + 8);
    if (lVar8 == 0) {
      func_0x0001092ba100(param_1 + 0x10);
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
      if (lVar9 != 0) goto LAB_10a2c4ebc;
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 != 0) {
        plVar2 = (long *)(lVar9 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar10 = (undefined8 *)(param_1 + 0x50);
      *puVar10 = &PTR_FUN_110bbb420;
      *(code **)(param_1 + 0x48) = FUN_10a2b89b8;
      *(long *)(param_1 + 0x58) = lVar8;
      *(long *)(param_1 + 0x60) = lVar9;
      FUN_10a2b5c88(lVar8,param_1 + 0x48);
      (**(code **)*puVar10)(puVar10);
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
      if (lVar9 != 0) goto LAB_10a2c4eb4;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    if (lVar8 == 0) goto LAB_10a2c4ebc;
  }
LAB_10a2c4eb4:
  func_0x0001092ba100(param_1 + 0x10);
LAB_10a2c4ebc:
  func_0x000109d1a1d0(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a2c4fc0; end: 10a2c5077;  */

void FUN_10a2c4fc0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x88);
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
  plVar4 = *(long **)(param_1 + 0x90);
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



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1094da66c; end: 1094db0fb;  */

/* WARNING: Removing unreachable block (ram,0x0001094daca4) */

undefined8 * FUN_1094da66c(long param_1,undefined8 *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *****ppppplVar4;
  long *plVar5;
  undefined8 *puVar6;
  long ****pppplVar7;
  long lVar8;
  long ****pppplVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long ***ppplVar14;
  long ***ppplVar15;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long ****pppplStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long **applStack_148 [3];
  undefined8 uStack_130;
  char cStack_119;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  long ***ppplStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  long ****pppplStack_f0;
  long ****pppplStack_e8;
  long lStack_e0;
  undefined8 auStack_d8 [2];
  undefined8 uStack_c8;
  char cStack_c1;
  long alStack_c0 [2];
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined1 uStack_a2;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  long ***ppplStack_70;
  undefined8 uStack_68;
  long lStack_60;
  byte bStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *param_3;
  ppppplVar4 = *(long ******)(lVar13 + 8);
  if ((ppppplVar4 == (long *****)0x0) ||
     (___dynamic_cast(ppppplVar4,&PTR_DAT_110af7700,&PTR_DAT_110af7750,0),
     ppppplVar4 == (long *****)0x0)) {
    pppplStack_f0 = (long ****)0x0;
    pppplStack_e8 = (long ****)0x0;
  }
  else {
    pppplStack_e8 = *(long *****)(lVar13 + 0x10);
    pppplStack_f0 = (long ****)ppppplVar4;
    if ((long *****)pppplStack_e8 != (long *****)0x0) {
      ppppplVar4 = (long *****)(pppplStack_e8 + 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
        if (bVar2) {
          *ppppplVar4 = (long ****)((long)*ppppplVar4 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_1094db0fc(param_1 + 0x60,&pppplStack_f0);
  pppplVar7 = pppplStack_e8;
  if ((long *****)pppplStack_e8 != (long *****)0x0) {
    ppppplVar4 = (long *****)(pppplStack_e8 + 1);
    do {
      pppplVar9 = *ppppplVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppplVar4,0x10);
      if (bVar2) {
        *ppppplVar4 = (long ****)((long)pppplVar9 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppplVar9 == (long ****)0x0) {
      (*(code *)(*pppplStack_e8)[2])(pppplStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar7);
    }
  }
  (**(code **)(*(long *)*param_2 + 0x10))
            (&plStack_180,(long *)*param_2,*(long *)(param_1 + 0x60) + 8);
  plVar11 = (long *)*param_2;
  lVar13 = *(long *)(param_1 + 0x60);
  uVar12 = *(ulong *)(lVar13 + 0x10);
  if (-1 < (char)*(byte *)(lVar13 + 0x1f)) {
    uVar12 = (ulong)*(byte *)(lVar13 + 0x1f);
  }
  func_0x000104c4f768(&pppplStack_f0,uVar12 + 5,&pppplStack_160);
  ppppplVar4 = (long *****)pppplStack_f0;
  if (-1 < lStack_e0) {
    ppppplVar4 = &pppplStack_f0;
  }
  if (uVar12 != 0) {
    lVar8 = *(long *)(lVar13 + 8);
    if (-1 < *(char *)(lVar13 + 0x1f)) {
      lVar8 = lVar13 + 8;
    }
    _memmove(ppppplVar4,lVar8,uVar12);
  }
  *(undefined4 *)((long)ppppplVar4 + uVar12) = 0x6f736a2e;
  *(undefined2 *)((undefined4 *)((long)ppppplVar4 + uVar12) + 1) = 0x6e;
  (**(code **)(*plVar11 + 0x10))(&plStack_188,plVar11,&pppplStack_f0);
  if (lStack_e0 < 0) {
    __ZdlPv(pppplStack_f0);
  }
  *(undefined8 *)(param_1 + 8) = 0xe0000000e0;
  func_0x000107c31940(&pppplStack_f0,&UNK_10f56fcdc);
  func_0x000107c31940(auStack_d8,&DAT_10f5262f1);
  pppplStack_160 = (long ****)0x0;
  uStack_158 = 0;
  lStack_150 = 0;
  func_0x000107c2ac94(&pppplStack_160,&pppplStack_f0,alStack_c0,2);
  lVar13 = 0;
  do {
    if (*(char *)((long)alStack_c0 + lVar13 + -1) < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_d8 + lVar13));
    }
    lVar13 = lVar13 + -0x18;
  } while (lVar13 != -0x30);
  func_0x000107c3193c(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uStack_158;
  *(long *****)(param_1 + 0x30) = pppplStack_160;
  *(long *)(param_1 + 0x40) = lStack_150;
  uStack_158 = 0;
  lStack_150 = 0;
  pppplStack_160 = (long ****)0x0;
  pppplStack_f0 = (long ****)&pppplStack_160;
  func_0x000104c607c8(&pppplStack_f0);
  plVar11 = plStack_188;
  (**(code **)(*plStack_188 + 0x28))();
  if ((int)plVar11 == 0) goto LAB_1094da998;
  FUN_109380ad4(&ppplStack_70,plStack_188);
  pppplStack_f0 = (long ****)0x0;
  pppplStack_e8 = (long ****)0x0;
  lStack_e0 = 0;
  func_0x000107c31940(&pppplStack_160,&UNK_10f56fcd1);
  FUN_1094a6ca4(&ppplStack_70,&pppplStack_160,&pppplStack_f0);
  if (lStack_150 < 0) {
    __ZdlPv(pppplStack_160);
  }
  if ((ulong)((long)pppplStack_e8 - (long)pppplStack_f0) < 5) {
    if (pppplStack_f0 != (long ****)0x0) goto LAB_1094da914;
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)pppplStack_f0;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((long)pppplStack_f0 + 4);
LAB_1094da914:
    pppplStack_e8 = pppplStack_f0;
    __ZdlPv();
  }
  pppplStack_f0 = (long ****)0x0;
  pppplStack_e8 = (long ****)0x0;
  lStack_e0 = 0;
  func_0x000107c31940(&pppplStack_160,&DAT_10f30a732);
  func_0x0001094b4944(&ppplStack_70,&pppplStack_160,&pppplStack_f0);
  if (lStack_150 < 0) {
    __ZdlPv(pppplStack_160);
  }
  if (pppplStack_f0 != pppplStack_e8) {
    func_0x000107c3193c(param_1 + 0x30);
    *(long *****)(param_1 + 0x38) = pppplStack_e8;
    *(long *****)(param_1 + 0x30) = pppplStack_f0;
    *(long *)(param_1 + 0x40) = lStack_e0;
    pppplStack_e8 = (long ****)0x0;
    lStack_e0 = 0;
    pppplStack_f0 = (long ****)0x0;
  }
  pppplStack_160 = (long ****)&pppplStack_f0;
  func_0x000104c607c8(&pppplStack_160);
  FUN_109380f8c(&ppplStack_70);
LAB_1094da998:
  uStack_118 = NEON_rev64(*(undefined8 *)(param_1 + 8),4);
  uStack_110 = 0x100000003;
  lVar13 = *(long *)(param_1 + 0x60);
  if (*(char *)(lVar13 + 0x67) < '\0') {
    func_0x000107c3192c(&pppplStack_f0,*(undefined8 *)(lVar13 + 0x50),*(undefined8 *)(lVar13 + 0x58)
                       );
    lVar8 = *(long *)(param_1 + 0x60);
  }
  else {
    pppplStack_e8 = *(long *****)(lVar13 + 0x58);
    pppplStack_f0 = *(long *****)(lVar13 + 0x50);
    lStack_e0 = *(long *)(lVar13 + 0x60);
    lVar8 = lVar13;
  }
  if (*(char *)(lVar8 + 0x7f) < '\0') {
    func_0x000107c3192c(auStack_d8,*(undefined8 *)(lVar8 + 0x68),*(undefined8 *)(lVar8 + 0x70));
    lVar8 = *(long *)(param_1 + 0x60);
  }
  else {
    auStack_d8[1] = *(undefined8 *)(lVar8 + 0x70);
    auStack_d8[0] = *(undefined8 *)(lVar8 + 0x68);
    uStack_c8 = *(undefined8 *)(lVar8 + 0x78);
  }
  if (*(char *)(lVar8 + 0x97) < '\0') {
    func_0x000107c3192c(alStack_c0,*(undefined8 *)(lVar8 + 0x80),*(undefined8 *)(lVar8 + 0x88));
  }
  else {
    alStack_c0[1] = *(undefined8 *)(lVar8 + 0x88);
    alStack_c0[0] = *(long *)(lVar8 + 0x80);
    uStack_b0 = *(undefined8 *)(lVar8 + 0x90);
  }
  ppplStack_70 = (long ***)0x0;
  uStack_68 = 0;
  lStack_60 = 0;
  func_0x000107c2ac94(&ppplStack_70,&pppplStack_f0,&uStack_a8,3);
  FUN_109377fa0(&pppplStack_160,&uStack_118,lVar13 + 0x38,&ppplStack_70);
  ppplStack_100 = (long ***)&ppplStack_70;
  func_0x000104c607c8(&ppplStack_100);
  lVar13 = 0;
  do {
    if (*(char *)((long)&uStack_b0 + lVar13 + 7) < '\0') {
      __ZdlPv(*(undefined8 *)((long)alStack_c0 + lVar13));
    }
    lVar13 = lVar13 + -0x18;
  } while (lVar13 != -0x48);
  pppplStack_f0 = (long ****)0x0;
  pppplStack_e8 = (long ****)0x0;
  lStack_e0 = 0;
  uStack_c8 = 0;
  alStack_c0[0] = 0;
  auStack_d8[1] = 0;
  alStack_c0[1] = CONCAT17(alStack_c0[1]._7_1_,0x200);
  uStack_b0 = CONCAT62(uStack_b0._2_6_,1);
  uStack_b0 = uStack_b0 & 0xffffffff;
  uStack_a8 = 0x10000;
  uStack_a4 = 0x100;
  uStack_a2 = 1;
  uStack_a0 = 0x1000000;
  uStack_9c = 1;
  uStack_98 = 0x100;
  uStack_90 = 100000;
  uStack_88 = 0;
  uStack_84 = 1;
  uStack_80 = 0;
  auStack_d8[0] = CONCAT17(auStack_d8[0]._7_1_,0x1000000000000);
  auStack_d8[0] = CONCAT35(auStack_d8[0]._5_3_,0x13f800000);
  ppplStack_100 = (long ***)0x42ea000042d00000;
  uStack_f8 = 0x42f60000;
  uStack_68 = 0;
  lStack_60 = 0;
  ppplStack_70 = (long ***)0x0;
  FUN_1093c71a0(&ppplStack_70,&ppplStack_100,&uStack_f4,3);
  pppplStack_e8 = (long ****)uStack_68;
  pppplStack_f0 = (long ****)ppplStack_70;
  lStack_e0 = lStack_60;
  func_0x000109d05694(&ppplStack_100,&ppplStack_70,*(long *)(param_1 + 0x60) + 0x20);
  (**(code **)(*plStack_180 + 0x20))(&plStack_178);
  plVar5 = (long *)0x120;
  __Znwm();
  plStack_108 = plStack_178;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110af4c20;
  plStack_178 = (long *)0x0;
  func_0x000109d0a228(&ppplStack_70,&plStack_108);
  plVar11 = plVar5 + 3;
  func_0x000109d03828(plVar11,&pppplStack_160,1,&ppplStack_70,&pppplStack_f0,2,2);
  (*(code *)(&PTR_FUN_110af4bf0)[bStack_58])(&ppplStack_70);
  if (plStack_108 != (long *)0x0) {
    (**(code **)(*plStack_108 + 8))();
  }
  plVar3 = plStack_178;
  plStack_178 = (long *)0x0;
  plStack_170 = plVar11;
  plStack_168 = plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  func_0x000109d03fe8(&plStack_108,ppplStack_100,&plStack_170,0);
  FUN_10938ab98(&ppplStack_70,&plStack_108);
  if (plStack_108 != (long *)0x0) {
    plVar11 = plStack_108 + 1;
    do {
      lVar13 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_108 + 0x10))();
    }
  }
  pppplVar7 = (long ****)ppplStack_70;
  ppplStack_70 = (long ***)0x0;
  FUN_10938cda4(param_1 + 0x10);
  ppplVar14 = ppplStack_70;
  lVar13 = *(long *)(param_1 + 0x30);
  lVar8 = *(long *)(param_1 + 0x38);
  ppplStack_70 = (long ***)0x0;
  if (ppplVar14 != (long ***)0x0) {
    func_0x000109cda590();
    __ZdlPv();
  }
  plVar11 = plStack_168;
  if (plStack_168 != (long *)0x0) {
    plVar5 = plStack_168 + 1;
    do {
      lVar10 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = (long *)CONCAT44(uStack_f4,uStack_f8);
  if (plVar11 != (long *)0x0) {
    plVar5 = plVar11 + 1;
    do {
      lVar10 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if (alStack_c0[0] < 0) {
    __ZdlPv(auStack_d8[1]);
  }
  if (pppplStack_f0 != (long ****)0x0) {
    __ZdlPv();
  }
  if (cStack_119 < '\0') {
    __ZdlPv(uStack_130);
  }
  uVar12 = (lVar8 - lVar13 >> 3) * -0x5555555555555555;
  pppplStack_f0 = (long ****)applStack_148;
  FUN_109378cec(&pppplStack_f0);
  pppplStack_f0 = (long ****)&pppplStack_160;
  FUN_109378cec(&pppplStack_f0);
  if (uVar12 < 2) {
    pppplStack_160 = (long ****)(*(long *)(param_1 + 0x60) + 8);
    if (*(char *)(*(long *)(param_1 + 0x60) + 0x1f) < '\0') {
      pppplStack_160 = (long ****)*pppplStack_160;
    }
    FUN_1093780e0(&pppplStack_f0,&UNK_10f56fc9b,&pppplStack_160);
    pppplVar7 = (long ****)&UNK_10f56fc0f;
    FUN_109388c6c(1,&UNK_10f56fc0f,&DAT_10f323079,0x6a,&pppplStack_f0);
    if (lStack_e0 < 0) {
      __ZdlPv(pppplStack_f0);
    }
  }
  else if (param_1 + 0x48 != *(long *)(param_1 + 0x60) + 0xa0) {
    pppplVar7 = *(long *****)(*(long *)(param_1 + 0x60) + 0xa0);
    FUN_1094dbea4();
  }
  plVar11 = plStack_188;
  plStack_188 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  plVar11 = plStack_180;
  plStack_180 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  puVar6 = (undefined8 *)(ulong)(1 < uVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  plVar11 = plStack_188;
  plStack_188 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  plVar11 = plStack_180;
  plStack_180 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  __Unwind_Resume();
  ppplVar15 = pppplVar7[1];
  ppplVar14 = *pppplVar7;
  *pppplVar7 = (long ***)0x0;
  pppplVar7[1] = (long ***)0x0;
  plVar11 = (long *)puVar6[1];
  puVar6[1] = ppplVar15;
  *puVar6 = ppplVar14;
  if (plVar11 != (long *)0x0) {
    plVar5 = plVar11 + 1;
    do {
      lVar13 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return puVar6;
}



/* Entry: 1094db0fc; end: 1094db15f;  */

undefined8 * FUN_1094db0fc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1094db160; end: 1094db217;  */

long *** FUN_1094db160(long ***param_1,ulong param_2)

{
  long ***ppplVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplStack_58;
  long *plStack_50;
  long *plStack_48;
  long **pplStack_40;
  long **pplStack_38;
  
  pplVar2 = *param_1;
  if ((ulong)((long)param_1[2] - (long)pplVar2 >> 7) < param_2) {
    if (param_2 >> 0x39 != 0) {
      FUN_1094d7860();
      func_0x0001094d80cc(&pplStack_58);
      __Unwind_Resume(param_1);
      return (long ***)0x2;
    }
    pplVar3 = param_1[1];
    ppplVar1 = param_1;
    pplStack_38 = (long **)param_1;
    FUN_1094d7874();
    pplVar2 = (long **)((long)ppplVar1 + ((long)pplVar3 - (long)pplVar2));
    pplVar3 = (long **)((long)pplVar2 + ((long)*param_1 - (long)param_1[1]));
    pplStack_58 = (long **)ppplVar1;
    plStack_50 = (long *)pplVar2;
    plStack_48 = (long *)pplVar2;
    pplStack_40 = (long **)(ppplVar1 + param_2 * 0x10);
    FUN_1094d78a8(param_1,*param_1,param_1[1],pplVar3);
    pplStack_58 = *param_1;
    *param_1 = pplVar3;
    param_1[1] = pplVar2;
    pplStack_40 = param_1[2];
    param_1[2] = (long **)(ppplVar1 + param_2 * 0x10);
    param_1 = &pplStack_58;
    plStack_50 = (long *)pplStack_58;
    plStack_48 = (long *)pplStack_58;
    func_0x0001094d80cc(param_1);
  }
  return param_1;
}



/* Entry: 1094db218; end: 1094db21f;  */

undefined8 FUN_1094db218(void)

{
  return 2;
}



/* Entry: 1094db220; end: 1094dbe1f;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_1094db220(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  char cVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *****pppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 ****ppppuVar20;
  undefined8 ******ppppppuVar21;
  undefined8 ****ppppuVar22;
  long lVar23;
  float *pfVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  float *pfVar28;
  int iVar29;
  long lVar30;
  undefined8 *****pppppuVar31;
  long lVar32;
  float *pfVar33;
  float *pfVar34;
  undefined8 *******pppppppuVar35;
  long lVar36;
  uint uVar37;
  float *pfVar38;
  ulong uVar39;
  float *pfVar40;
  float fVar41;
  ulong uVar42;
  float fVar43;
  undefined8 ******ppppppuVar44;
  float fVar45;
  float fVar46;
  ulong uVar47;
  long lStack_280;
  undefined8 *******pppppppuStack_270;
  undefined8 *******pppppppuStack_268;
  long lStack_260;
  undefined8 auStack_258 [5];
  undefined4 auStack_230 [2];
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_1e0;
  int iStack_1d8;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  int iStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  long lStack_198;
  undefined4 *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *******pppppppuStack_170;
  undefined8 *******pppppppuStack_168;
  undefined8 *******pppppppuStack_160;
  undefined5 uStack_158;
  undefined3 uStack_153;
  undefined5 uStack_150;
  undefined2 uStack_14b;
  char cStack_149;
  undefined4 uStack_148;
  undefined1 uStack_144;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 *****pppppuStack_f0;
  undefined8 *****pppppuStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *****pppppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  float afStack_a8 [6];
  int *piVar19;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return false;
  }
  uStack_1d0 = 0x42ff0000;
  puStack_228 = (undefined8 *)&uStack_1d0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  iStack_1cc = 0;
  uStack_1c8 = 0;
  puStack_190 = &uStack_1c8;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1a4 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  pppppppuStack_160 = (undefined8 *******)0x0;
  pppppppuStack_170._0_4_ = 2.3693558e-38;
  auStack_230[0] = 0x2010000;
  uStack_220 = 0;
  auStack_258[0] = NEON_rev64(*(undefined8 *)(param_1 + 8),4);
  puStack_188 = &uStack_180;
  pppppppuStack_168 = (undefined8 *******)param_2;
  FUN_109b0f718(0,0,&pppppppuStack_170,auStack_230,auStack_258,1);
  pppppppuStack_170 = (undefined8 *******)CONCAT44(pppppppuStack_170._4_4_,0x2010000);
  pppppppuStack_168 = (undefined8 *******)&uStack_1d0;
  pppppppuStack_160 = (undefined8 *******)0x0;
  FUN_109a41858(0x3ff0000000000000,0,&uStack_1d0,&pppppppuStack_170,5);
  iStack_1d8 = (uStack_1d0 >> 3 & 0x1ff) + 1;
  uStack_1e0 = NEON_rev64(CONCAT44(uStack_1c4,uStack_1c8),4);
  uStack_1d4 = 1;
  func_0x000109d0f600(auStack_230,&uStack_1e0,&UNK_10dfcdb90,CONCAT44(uStack_1bc,uStack_1c0));
  func_0x000109cdb2c4(auStack_258,*(undefined8 *)(param_1 + 0x10),auStack_230,1);
  lVar32 = *(long *)(param_1 + 0x30);
  lVar36 = *(long *)(param_1 + 0x38);
  puVar12 = auStack_258;
  FUN_10937a848(puVar12,*(long *)(param_1 + 0x60) + 0x68);
  if (puVar12 == (undefined8 *)0x0) {
    FUN_109262df8(&UNK_10f639994);
    goto LAB_1094dbce4;
  }
  lVar30 = lVar36 - lVar32;
  if ((*(byte *)(puVar12 + 0xe) & 1) == 0) {
    uVar37 = *(int *)(puVar12 + 7) * *(int *)((long)puVar12 + 0x3c) * *(int *)((long)puVar12 + 0x34)
             * *(int *)(puVar12 + 6);
  }
  else {
    uVar37 = 1;
    for (piVar18 = (int *)puVar12[0xb]; piVar18 != (int *)puVar12[0xc]; piVar18 = piVar18 + 1) {
      uVar37 = *piVar18 * uVar37;
    }
  }
  lVar27 = puVar12[9];
  uVar39 = (lVar30 >> 3) * -0x5555555555555555;
  pppppuStack_c0 = (undefined8 *****)0x0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  pppppppuStack_170 = (undefined8 *******)&pppppuStack_c0;
  pppppppuStack_168 = (undefined8 *******)((ulong)pppppppuStack_168 & 0xffffffffffffff00);
  if (lVar36 == lVar32) {
LAB_1094db414:
    bVar10 = false;
  }
  else {
    FUN_109395758(&pppppuStack_c0,uVar39);
    lVar32 = lStack_b8;
    lVar36 = ((lVar30 - 0x18U) / 0x18) * 0x18 + 0x18;
    _bzero(lStack_b8,lVar36);
    lStack_b8 = lVar32 + lVar36;
    if (lVar30 == 0x18) goto LAB_1094db414;
    uVar26 = (ulong)uVar37;
    uVar42 = 1;
    uVar47 = 0;
    if (uVar39 != 0) {
      uVar47 = uVar26 / uVar39;
    }
    do {
      func_0x00010742a308(pppppuStack_c0 + uVar42 * 3,uVar47);
      if (uVar39 < uVar26 || uVar39 - uVar26 == 0) {
        uVar17 = 0;
        ppppuVar22 = pppppuStack_c0[uVar42 * 3];
        uVar25 = uVar42;
        do {
          *(undefined4 *)((long)ppppuVar22 + uVar17 * 4) =
               *(undefined4 *)(lVar27 + (long)(int)uVar25 * 4);
          uVar17 = uVar17 + 1;
          uVar25 = uVar39 + (long)(int)uVar25;
        } while (uVar17 < uVar47);
      }
      uVar42 = uVar42 + 1;
    } while (uVar42 != uVar39);
    bVar10 = true;
  }
  puVar12 = auStack_258;
  FUN_10937a848(puVar12,*(long *)(param_1 + 0x60) + 0x50);
  if (puVar12 != (undefined8 *)0x0) {
    puVar13 = auStack_258;
    lVar32 = *(long *)(param_1 + 0x60) + 0x80;
    FUN_10937a848();
    if (puVar13 != (undefined8 *)0x0) {
      if ((*(byte *)(puVar12 + 0xe) & 1) == 0) {
        uVar37 = *(int *)(puVar12 + 7) * *(int *)((long)puVar12 + 0x3c) *
                 *(int *)((long)puVar12 + 0x34) * *(int *)(puVar12 + 6);
LAB_1094db4fc:
        if (3 < uVar37) {
          lVar36 = puVar12[9];
          lVar30 = puVar13[9];
          pfVar28 = (float *)(ulong)(uVar37 >> 2);
          func_0x0001094dc054();
          pfVar38 = (float *)0x0;
          pfVar40 = pfVar28 + lVar32 * 4;
          pfVar34 = pfVar28;
          do {
            lVar23 = 0;
            lVar27 = lVar36 + (long)pfVar38 * 0x10;
            pppppppuVar15 = &pppppppuStack_170;
            pppppuVar31 = &pppppuStack_f0;
            lVar1 = lVar30 + (long)pfVar38 * 0x10;
            lVar2 = lVar30 + (ulong)(uVar37 & 0xfffffffc) * 4 + (long)pfVar38 * 0x10;
            bVar8 = true;
            do {
              bVar9 = bVar8;
              uVar42 = lVar23 << 2 | 8;
              fVar41 = *(float *)(lVar1 + uVar42);
              fVar43 = *(float *)(lVar1 + lVar23 * 4);
              fVar45 = fVar41 - fVar43;
              *(float *)pppppppuVar15 =
                   (fVar41 + fVar43) * 0.5 +
                   fVar45 * *(float *)(lVar2 + lVar23 * 4) * *(float *)(lVar27 + lVar23 * 4);
              fVar41 = *(float *)(lVar2 + uVar42) * *(float *)(lVar27 + uVar42);
              _expf();
              *(float *)pppppuVar31 = fVar45 * fVar41;
              fVar41 = afStack_a8[0];
              pppppppuVar15 = &ppppppuStack_d8;
              pppppuVar31 = (undefined8 *****)afStack_a8;
              lVar23 = 1;
              bVar8 = false;
            } while (bVar9);
            fVar43 = pppppuStack_f0._0_4_;
            fVar45 = pppppppuStack_170._0_4_ - pppppuStack_f0._0_4_ * 0.5;
            fVar46 = ppppppuStack_d8._0_4_ - afStack_a8[0] * 0.5;
            if (pfVar28 < pfVar40) {
              *pfVar28 = fVar45;
              pfVar28[1] = fVar46;
              pfVar28[2] = pppppuStack_f0._0_4_;
              pfVar28[3] = afStack_a8[0];
              pfVar33 = pfVar34;
              pfVar3 = pfVar28;
            }
            else {
              lVar27 = (long)pfVar28 - (long)pfVar34 >> 4;
              uVar42 = lVar27 + 1;
              if (uVar42 >> 0x3c != 0) {
                FUN_1094dc040();
                goto LAB_1094dbce4;
              }
              uVar47 = (long)pfVar40 - (long)pfVar34 >> 3;
              if (uVar47 <= uVar42) {
                uVar47 = uVar42;
              }
              if (0x7fffffffffffffef < (ulong)((long)pfVar40 - (long)pfVar34)) {
                uVar47 = 0xfffffffffffffff;
              }
              if (uVar47 == 0) {
                lVar32 = 0;
              }
              else {
                func_0x0001094dc054();
              }
              pfVar3 = (float *)(uVar47 + ((long)pfVar28 - (long)pfVar34));
              *pfVar3 = fVar45;
              pfVar3[1] = fVar46;
              pfVar3[2] = fVar43;
              pfVar3[3] = fVar41;
              pfVar33 = pfVar3 + lVar27 * -4;
              pfVar40 = pfVar33;
              for (pfVar24 = pfVar34; pfVar24 != pfVar28; pfVar24 = pfVar24 + 4) {
                uVar42 = *(ulong *)pfVar24;
                *(ulong *)(pfVar40 + 2) = *(ulong *)(pfVar24 + 2);
                *(ulong *)pfVar40 = uVar42;
                pfVar40 = pfVar40 + 4;
              }
              pfVar40 = (float *)(uVar47 + lVar32 * 0x10);
              if (pfVar34 != (float *)0x0) {
                __ZdlPv(pfVar34);
              }
            }
            pfVar28 = pfVar3 + 4;
            pfVar38 = (float *)((long)pfVar38 + 1);
            pfVar34 = pfVar33;
          } while (pfVar38 != (float *)(ulong)(uVar37 >> 2));
          goto LAB_1094db6b0;
        }
      }
      else if ((int *)puVar12[0xb] != (int *)puVar12[0xc]) {
        uVar37 = 1;
        piVar18 = (int *)puVar12[0xb];
        do {
          piVar19 = piVar18 + 1;
          uVar37 = *piVar18 * uVar37;
          piVar18 = piVar19;
        } while (piVar19 != (int *)puVar12[0xc]);
        goto LAB_1094db4fc;
      }
      pfVar33 = (float *)0x0;
      pfVar28 = (float *)0x0;
LAB_1094db6b0:
      ppppppuStack_d8 = (undefined8 ******)0x0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      func_0x000104becb10(&ppppppuStack_d8,(long)pfVar28 - (long)pfVar33 >> 4);
      if (pfVar33 == pfVar28) {
        lStack_280 = 0;
      }
      else {
        iVar29 = 0;
        pfVar38 = pfVar33;
        do {
          bVar8 = true;
          bVar9 = false;
          if (0.0 <= pfVar38[3]) {
            bVar8 = false;
            bVar9 = true;
            if (!NAN(pfVar38[2])) {
              bVar8 = pfVar38[2] < 0.0;
              bVar9 = false;
            }
          }
          pppppppuStack_170 = (undefined8 *******)CONCAT71(pppppppuStack_170._1_7_,bVar8 == bVar9);
          func_0x0001078db3d4(&ppppppuStack_d8,&pppppppuStack_170);
          if ((char)pppppppuStack_170 == '\x01') {
            if (((bRam0000000113732ef0 & 1) == 0) &&
               (iVar11 = 0x13732ef0, ___cxa_guard_acquire(), iVar11 != 0)) {
              uRam0000000113732f08 = 0x3f8000003f800000;
              uRam0000000113732f00 = 0;
              ___cxa_guard_release(0x113732ef0);
            }
            uVar42 = *(ulong *)pfVar38;
            fVar43 = (float)(uVar42 >> 0x20);
            fVar46 = (float)(uRam0000000113732f00 >> 0x20);
            uVar47 = uVar42 ^ (uVar42 ^ uRam0000000113732f00) &
                              CONCAT44(-(uint)(fVar43 < fVar46),
                                       -(uint)((float)uVar42 < (float)uRam0000000113732f00));
            fVar41 = (float)uVar42 + (float)*(ulong *)(pfVar38 + 2);
            fVar43 = fVar43 + (float)(*(ulong *)(pfVar38 + 2) >> 0x20);
            uVar42 = CONCAT44(fVar43,fVar41);
            fVar45 = (float)uRam0000000113732f00 + (float)uRam0000000113732f08;
            fVar46 = fVar46 + (float)((ulong)uRam0000000113732f08 >> 0x20);
            uVar42 = uVar42 ^ (uVar42 ^ CONCAT44(fVar46,fVar45)) &
                              CONCAT44(-(uint)(fVar46 < fVar43),-(uint)(fVar45 < fVar41));
            fVar41 = (float)uVar42 - (float)uVar47;
            fVar43 = (float)(uVar42 >> 0x20) - (float)(uVar47 >> 0x20);
            *(ulong *)pfVar38 = uVar47;
            *(ulong *)(pfVar38 + 2) = CONCAT44(fVar43,fVar41);
            if ((fVar41 <= 0.0) || (fVar43 <= 0.0)) {
              pfVar38[0] = 0.0;
              pfVar38[1] = 0.0;
              pfVar38[2] = 0.0;
              pfVar38[3] = 0.0;
            }
            iVar29 = iVar29 + 1;
          }
          pfVar38 = pfVar38 + 4;
        } while (pfVar38 != pfVar28);
        lStack_280 = (long)iVar29;
      }
      pppppppuStack_270 = (undefined8 *******)0x0;
      pppppppuStack_268 = (undefined8 *******)0x0;
      lStack_260 = 0;
      if (bVar10) {
        uVar42 = 1;
        do {
          pppppuVar31 = pppppuStack_c0;
          pppppuStack_f0 = (undefined8 *****)0x0;
          pppppuStack_e8 = (undefined8 *****)0x0;
          pppppuStack_e0 = (undefined8 *****)0x0;
          FUN_1094db160(&pppppuStack_f0,lStack_280);
          pppppuVar31 = pppppuVar31 + uVar42 * 3;
          ppppuVar22 = *pppppuVar31;
          ppppuVar20 = pppppuVar31[1];
          if (ppppuVar20 != ppppuVar22) {
            uVar47 = 0;
            do {
              if (((ulong)ppppppuStack_d8[uVar47 >> 6] >> (uVar47 & 0x3f) & 1) != 0) {
                uStack_140 = 0;
                uStack_130 = 0;
                uStack_138 = 0;
                uStack_120 = 0;
                uStack_128 = 0;
                pppppppuStack_168 = (undefined8 *******)0x0;
                pppppppuStack_170 = (undefined8 *******)0x0;
                uStack_158 = 0;
                pppppppuStack_160 = (undefined8 *******)0x0;
                uStack_14b = 0;
                cStack_149 = '\0';
                uStack_148 = 0;
                uStack_144 = 0;
                uStack_153 = 0;
                uStack_150 = 0;
                uStack_118 = 0x3f800000;
                uStack_110 = 0;
                lStack_100 = 0;
                uStack_f8 = 0;
                lStack_108 = 0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (&pppppppuStack_160,*(long *)(param_1 + 0x30) + uVar42 * 0x18);
                pppppuVar14 = pppppuStack_e8;
                uStack_148 = *(undefined4 *)((long)*pppppuVar31 + uVar47 * 4);
                pppppppuStack_168 = *(undefined8 ********)(pfVar33 + uVar47 * 4 + 2);
                pppppppuStack_170 = *(undefined8 ********)(pfVar33 + uVar47 * 4);
                if (pppppuStack_e8 < pppppuStack_e0) {
                  FUN_1094d776c(pppppuStack_e8,&pppppppuStack_170);
                  pppppuVar14 = pppppuVar14 + 0x10;
                }
                else {
                  pppppuVar14 = &pppppuStack_f0;
                  FUN_1094d7664(pppppuVar14,&pppppppuStack_170);
                }
                pppppuStack_e8 = pppppuVar14;
                if (lStack_108 != 0) {
                  lStack_100 = lStack_108;
                  __ZdlPv();
                }
                func_0x0001094d8004(&uStack_138);
                if (cStack_149 < '\0') {
                  __ZdlPv(pppppppuStack_160);
                }
                ppppuVar22 = *pppppuVar31;
                ppppuVar20 = pppppuVar31[1];
              }
              uVar47 = uVar47 + 1;
            } while (uVar47 < (ulong)((long)ppppuVar20 - (long)ppppuVar22 >> 2));
          }
          FUN_1094fc7b4(0x3dcccccd,0x3f800000,0x3ee66666,&pppppuStack_f0,400);
          pppppuVar31 = pppppuStack_f0;
          pppppppuVar15 = pppppppuStack_268;
          lVar32 = (long)pppppuStack_e8 - (long)pppppuStack_f0;
          if (0 < lVar32 >> 7) {
            if (lStack_260 - (long)pppppppuStack_268 < lVar32) {
              lVar36 = (long)pppppppuStack_268 - (long)pppppppuStack_270;
              uVar47 = (lVar32 >> 7) + (lVar36 >> 7);
              if (uVar47 >> 0x39 != 0) {
                FUN_1094d7860();
                goto LAB_1094dbce4;
              }
              uVar26 = lStack_260 - (long)pppppppuStack_270 >> 6;
              if (uVar26 <= uVar47) {
                uVar26 = uVar47;
              }
              if (0x7fffffffffffff7f < (ulong)(lStack_260 - (long)pppppppuStack_270)) {
                uVar26 = 0x1ffffffffffffff;
              }
              uStack_150 = SUB85(&pppppppuStack_270,0);
              uStack_14b = (undefined2)((ulong)&pppppppuStack_270 >> 0x28);
              cStack_149 = (char)((ulong)&pppppppuStack_270 >> 0x38);
              if (uVar26 == 0) {
                pppppppuVar16 = (undefined8 *******)0x0;
              }
              else {
                pppppppuVar16 = &pppppppuStack_270;
                FUN_1094d7874();
              }
              ppppppuVar21 = (undefined8 ******)((long)pppppppuVar16 + lVar36);
              uStack_158 = SUB85(pppppppuVar16 + uVar26 * 0x10,0);
              uStack_153 = (undefined3)((ulong)(pppppppuVar16 + uVar26 * 0x10) >> 0x28);
              ppppppuVar44 = (undefined8 ******)((long)ppppppuVar21 + lVar32);
              pppppppuStack_170 = pppppppuVar16;
              pppppppuStack_168 = (undefined8 *******)ppppppuVar21;
              pppppppuStack_160 = (undefined8 *******)ppppppuVar21;
              do {
                FUN_1094d8370(ppppppuVar21,pppppuVar31);
                ppppppuVar21 = ppppppuVar21 + 0x10;
                pppppuVar31 = pppppuVar31 + 0x10;
                lVar32 = lVar32 + -0x80;
              } while (lVar32 != 0);
              pppppppuStack_160 = (undefined8 *******)ppppppuVar44;
              FUN_1094d78a8(&pppppppuStack_270,pppppppuVar15,pppppppuStack_268,ppppppuVar44);
              pppppppuStack_160 =
                   (undefined8 *******)
                   ((long)pppppppuStack_268 + ((long)pppppppuStack_160 - (long)pppppppuVar15));
              pppppppuVar16 =
                   (undefined8 *******)
                   ((long)pppppppuStack_270 + ((long)pppppppuStack_168 - (long)pppppppuVar15));
              pppppppuStack_268 = pppppppuVar15;
              FUN_1094d78a8(&pppppppuStack_270,pppppppuStack_270,pppppppuVar15,pppppppuVar16);
              lVar32 = CONCAT35(uStack_153,uStack_158);
              pppppppuStack_268 = pppppppuStack_160;
              pppppppuStack_160 = pppppppuStack_270;
              uStack_158 = (undefined5)lStack_260;
              uStack_153 = (undefined3)((ulong)lStack_260 >> 0x28);
              pppppppuStack_170 = pppppppuStack_270;
              pppppppuStack_168 = pppppppuStack_270;
              pppppppuStack_270 = pppppppuVar16;
              lStack_260 = lVar32;
              func_0x0001094d80cc(&pppppppuStack_170);
            }
            else {
              pppppppuVar15 = &pppppppuStack_270;
              FUN_1094d82ec(pppppppuVar15,pppppuStack_f0,pppppuStack_e8,pppppppuStack_268);
              pppppppuStack_268 = pppppppuVar15;
            }
          }
          pppppppuStack_170 = (undefined8 *******)&pppppuStack_f0;
          FUN_1094d8bdc(&pppppppuStack_170);
          uVar42 = uVar42 + 1;
        } while (uVar42 != uVar39);
      }
      if (ppppppuStack_d8 != (undefined8 ******)0x0) {
        __ZdlPv();
      }
      if (pfVar33 != (float *)0x0) {
        __ZdlPv(pfVar33);
      }
      pppppppuStack_170 = (undefined8 *******)&pppppuStack_c0;
      func_0x0001093957f8(&pppppppuStack_170);
      func_0x000109379fe8(auStack_258);
      func_0x000105675c90(auStack_230);
      if (lStack_198 != 0) {
        piVar18 = (int *)(lStack_198 + 0x14);
        do {
          iVar29 = *piVar18;
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar10) {
            *piVar18 = iVar29 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar29 + -1 == 0) {
          func_0x000109a848d4(&uStack_1d0);
        }
      }
      lStack_198 = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      uStack_1a8 = 0;
      uStack_1a4 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0;
      if (0 < iStack_1cc) {
        lVar32 = 0;
        do {
          puStack_190[lVar32] = 0;
          lVar32 = lVar32 + 1;
        } while (lVar32 < iStack_1cc);
      }
      if (puStack_188 != &uStack_180 && puStack_188 != (undefined8 *)0x0) {
        _free(puStack_188[-1]);
      }
      bVar10 = pppppppuStack_270 != pppppppuStack_268;
      if (bVar10) {
        if (*(char *)(*param_3 + 8) == '\0') {
          fVar41 = *(float *)(*(long *)(param_1 + 0x60) + 0x98);
        }
        else {
          fVar41 = 0.0;
          if (*(char *)(*param_3 + 8) == '\x01') {
            fVar41 = *(float *)(*(long *)(param_1 + 0x60) + 0x9c);
          }
        }
        FUN_1094d8250(param_1 + 0x18);
        pppppppuVar6 = pppppppuStack_268;
        pppppppuVar15 = pppppppuStack_270;
        *(undefined8 ********)(param_1 + 0x18) = pppppppuStack_270;
        *(long *)(param_1 + 0x28) = lStack_260;
        *(undefined8 ********)(param_1 + 0x20) = pppppppuStack_268;
        pppppppuStack_268 = (undefined8 *******)0x0;
        lStack_260 = 0;
        pppppppuStack_270 = (undefined8 *******)0x0;
        pppppppuVar16 = pppppppuVar15;
        for (; pppppppuVar15 != pppppppuVar6; pppppppuVar15 = pppppppuVar15 + 0x10) {
          if (*(float *)(pppppppuVar15 + 5) < fVar41) {
LAB_1094dbba4:
            pppppppuVar16 = pppppppuVar15;
            pppppppuVar35 = pppppppuVar15;
            if (pppppppuVar15 != pppppppuVar6) {
              while (pppppppuVar5 = pppppppuVar35, pppppppuVar35 = pppppppuVar5 + 0x10,
                    pppppppuVar16 = pppppppuVar15, pppppppuVar35 != pppppppuVar6) {
                if (fVar41 <= *(float *)(pppppppuVar5 + 0x15)) {
                  lVar32 = *(long *)(param_1 + 0x48);
                  FUN_1094dc248(lVar32,*(undefined8 *)(param_1 + 0x50),pppppppuVar5 + 0x12,
                                &pppppppuStack_170);
                  if (lVar32 != *(long *)(param_1 + 0x50)) {
                    ppppppuVar21 = *pppppppuVar35;
                    pppppppuVar15[1] = pppppppuVar5[0x11];
                    *pppppppuVar15 = ppppppuVar21;
                    if (*(char *)((long)pppppppuVar15 + 0x27) < '\0') {
                      __ZdlPv(pppppppuVar15[2]);
                    }
                    ppppppuVar44 = pppppppuVar5[0x13];
                    ppppppuVar21 = pppppppuVar5[0x12];
                    pppppppuVar15[4] = pppppppuVar5[0x14];
                    pppppppuVar15[3] = ppppppuVar44;
                    pppppppuVar15[2] = ppppppuVar21;
                    *(undefined1 *)((long)pppppppuVar5 + 0xa7) = 0;
                    *(undefined1 *)(pppppppuVar5 + 0x12) = 0;
                    ppppppuVar21 = pppppppuVar5[0x15];
                    *(undefined1 *)(pppppppuVar15 + 6) = *(undefined1 *)(pppppppuVar5 + 0x16);
                    pppppppuVar15[5] = ppppppuVar21;
                    func_0x0001094dc088(pppppppuVar15 + 7,pppppppuVar5 + 0x17);
                    *(undefined4 *)(pppppppuVar15 + 0xc) = *(undefined4 *)(pppppppuVar5 + 0x1c);
                    FUN_10939f678(pppppppuVar15 + 0xd,pppppppuVar5 + 0x1d);
                    pppppppuVar15 = pppppppuVar15 + 0x10;
                  }
                }
              }
            }
            break;
          }
          lVar32 = *(long *)(param_1 + 0x48);
          FUN_1094dc248(lVar32,*(undefined8 *)(param_1 + 0x50),pppppppuVar15 + 2,&pppppppuStack_170)
          ;
          if (lVar32 == *(long *)(param_1 + 0x50)) goto LAB_1094dbba4;
          pppppppuVar16 = pppppppuVar6;
        }
        FUN_1094dbe20(param_1 + 0x18,pppppppuVar16,*(undefined8 *)(param_1 + 0x20));
        lVar32 = *(long *)(param_1 + 0x60);
        FUN_1094fc7b4(fVar41,*(undefined4 *)(lVar32 + 0xb8),*(undefined4 *)(lVar32 + 0xbc),
                      param_1 + 0x18,*(undefined4 *)(lVar32 + 0xc0));
      }
      pppppppuStack_170 = &pppppppuStack_270;
      FUN_1094d8bdc(&pppppppuStack_170);
      return bVar10;
    }
  }
  FUN_109262df8(&UNK_10f639994);
LAB_1094dbce4:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1094dbce8);
  (*pcVar7)();
}



/* Entry: 1094dbe20; end: 1094dbe9b;  */

long FUN_1094dbe20(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 uStack_31;
  
  if (param_3 != param_2) {
    FUN_1094dc17c(&uStack_31,param_3,*(undefined8 *)(param_1 + 8),param_2);
    lVar1 = *(long *)(param_1 + 8);
    while (lVar1 != param_3) {
      lVar1 = lVar1 + -0x80;
      func_0x0001094d8080(lVar1);
    }
    *(long *)(param_1 + 8) = param_3;
  }
  return param_2;
}



/* Entry: 1094dbe9c; end: 1094dbea3;  */

long FUN_1094dbe9c(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 1094dbea4; end: 1094dc03f;  */

/* WARNING: Removing unreachable block (ram,0x0001094dc000) */

void FUN_1094dbea4(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x23;
  long lVar8;
  long lVar9;
  
  lVar7 = *param_1;
  plVar2 = param_1;
  if ((ulong)((param_1[2] - lVar7 >> 3) * -0x5555555555555555) < param_4) {
    plVar3 = param_2;
    func_0x000107c3193c(param_1);
    if (0xaaaaaaaaaaaaaaa < param_4) {
      func_0x000104c60770();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0xaaaaaaaaaaaaaaa;
      __Unwind_Resume();
      plVar2 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if ((ulong)plVar2 >> 0x3c != 0) {
        func_0x000104c4f740();
        func_0x0001094dc128();
        lVar4 = *plVar3;
        *plVar3 = 0;
        lVar7 = *plVar2;
        *plVar2 = lVar4;
        if (lVar7 != 0) {
          __ZdlPv();
        }
        lVar7 = plVar3[2];
        lVar4 = plVar3[1];
        plVar2[2] = lVar7;
        plVar2[1] = lVar4;
        plVar3[1] = 0;
        lVar4 = plVar3[3];
        plVar2[3] = lVar4;
        *(int *)(plVar2 + 4) = (int)plVar3[4];
        if (lVar4 != 0) {
          uVar5 = *(ulong *)(lVar7 + 8);
          uVar6 = plVar2[1];
          if ((uVar6 & uVar6 - 1) == 0) {
            uVar5 = uVar6 - 1 & uVar5;
          }
          else if (uVar6 <= uVar5) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar5 / uVar6;
            }
            uVar5 = uVar5 - uVar1 * uVar6;
          }
          *(long **)(*plVar2 + uVar5 * 8) = plVar2 + 2;
          plVar3[2] = 0;
          plVar3[3] = 0;
        }
        return;
      }
      __Znwm((long)plVar2 << 4);
      return;
    }
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar7 * 0x5555555555555556;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    func_0x000104c60728(param_1,uVar5);
    FUN_1094a91ac(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar4 = param_1[1];
    lVar9 = lVar4 - lVar7;
    if (param_4 <= (ulong)((lVar9 >> 3) * -0x5555555555555555)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar7,param_2);
          param_2 = param_2 + 3;
          lVar7 = lVar7 + 0x18;
        } while (param_2 != param_3);
        lVar4 = param_1[1];
      }
      for (; lVar4 != lVar7; lVar4 = lVar4 + -0x18) {
      }
      param_1[1] = lVar7;
      return;
    }
    plVar3 = param_2;
    lVar8 = lVar9;
    if (lVar4 != lVar7) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar7,plVar3);
        lVar7 = lVar7 + 0x18;
        lVar8 = lVar8 + -0x18;
        plVar3 = plVar3 + 3;
      } while (lVar8 != 0);
      lVar4 = param_1[1];
    }
    FUN_1094a91ac(param_1,(long)param_2 + lVar9,param_3,lVar4);
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 1094dc040; end: 1094dc053;  */

void FUN_1094dc040(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar2 >> 0x3c == 0) {
    __Znwm((long)plVar2 << 4);
    return;
  }
  func_0x000104c4f740();
  func_0x0001094dc128();
  lVar4 = *param_2;
  *param_2 = 0;
  lVar3 = *plVar2;
  *plVar2 = lVar4;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  lVar3 = param_2[2];
  lVar4 = param_2[1];
  plVar2[2] = lVar3;
  plVar2[1] = lVar4;
  param_2[1] = 0;
  lVar4 = param_2[3];
  plVar2[3] = lVar4;
  *(int *)(plVar2 + 4) = (int)param_2[4];
  if (lVar4 != 0) {
    uVar5 = *(ulong *)(lVar3 + 8);
    uVar6 = plVar2[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(*plVar2 + uVar5 * 8) = plVar2 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1094dc054; end: 1094dc17b;  */

void FUN_1094dc054(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 4);
    return;
  }
  func_0x000104c4f740();
  func_0x0001094dc128();
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = lVar2;
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar2 + 8);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1094dc17c; end: 1094dc247;  */

undefined1  [16]
FUN_1094dc17c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if (param_2 != param_3) {
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(param_4 + lVar4);
      puVar2 = (undefined8 *)((long)param_2 + lVar4);
      uVar3 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar3;
      if (*(char *)((long)puVar1 + 0x27) < '\0') {
        __ZdlPv(puVar1[2]);
      }
      uVar5 = puVar2[3];
      uVar3 = puVar2[2];
      puVar1[4] = puVar2[4];
      puVar1[3] = uVar5;
      puVar1[2] = uVar3;
      *(undefined1 *)((long)puVar2 + 0x27) = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      uVar3 = puVar2[5];
      *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(puVar2 + 6);
      puVar1[5] = uVar3;
      func_0x0001094dc088(puVar1 + 7,puVar2 + 7);
      *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(puVar2 + 0xc);
      FUN_10939f678(puVar1 + 0xd,puVar2 + 0xd);
      lVar4 = lVar4 + 0x80;
    } while (puVar2 + 0x10 != param_3);
    param_4 = param_4 + lVar4;
    param_2 = param_3;
  }
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = param_2;
  return auVar6;
}



/* Entry: 1094dc248; end: 1094dc2d7;  */

undefined8 * FUN_1094dc248(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (param_1 != param_2) {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    do {
      bVar3 = *(byte *)((long)param_1 + 0x17);
      uVar2 = param_1[1];
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      if (uVar2 == uVar4) {
        puVar5 = (undefined8 *)*param_1;
        if (-1 < (char)bVar3) {
          puVar5 = param_1;
        }
        _memcmp(puVar5,puVar1,uVar4);
        if ((int)puVar5 == 0) {
          return param_1;
        }
      }
      param_1 = param_1 + 3;
    } while (param_1 != param_2);
  }
  return param_1;
}



/* Entry: 1094dc2d8; end: 1094dc32f;  */

long FUN_1094dc2d8(long param_1)

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



/* Entry: 1094dc330; end: 1094dc3b3;  */

undefined4 FUN_1094dc330(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



/* Entry: 1094dc3b4; end: 1094dc4e3;  */

long FUN_1094dc3b4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_80;
  long *plStack_78;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  uStack_60 = 0x200000001;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  ppuStack_68 = &PTR_FUN_110af7e60;
  uStack_40 = 0x3dcccccd3d4ccccd;
  FUN_1094dc4e4(param_1 + 0x2d8,&ppuStack_68);
  ppuStack_68 = &PTR_FUN_110af7e20;
  puStack_38 = &uStack_58;
  FUN_1094dd9b4(&puStack_38);
  plStack_78 = (long *)param_2[1];
  uStack_80 = *param_2;
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
  param_1 = param_1 + 0x2d8;
  FUN_1094e26e0(param_1,&uStack_80,2);
  plVar1 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar2 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return param_1;
}



/* Entry: 1094dc4e4; end: 1094dc5f7;  */

undefined8 * FUN_1094dc4e4(undefined8 *param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 6) == '\x01') {
    param_1[1] = param_2[1];
    if (param_1 != param_2) {
      FUN_1094dd5dc(param_1 + 2,param_2[2],param_2[3],(long)(param_2[3] - param_2[2]) >> 4);
    }
    param_1[5] = param_2[5];
  }
  else {
    *param_1 = &PTR_FUN_110af7e20;
    param_1[1] = param_2[1];
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[2] = 0;
    FUN_1094dd918();
    *param_1 = &PTR_FUN_110af7e60;
    param_1[5] = param_2[5];
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return param_1;
}



/* Entry: 1094dc5f8; end: 1094dc6c3;  */

void FUN_1094dc5f8(float param_1,float param_2,double *param_3,double *param_4,double *param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar10 = param_4[1];
  dVar9 = *param_4;
  dVar7 = param_4[3];
  dVar5 = param_4[2];
  dVar8 = param_5[3];
  dVar6 = param_5[2];
  param_1 = -(float)SQRT((param_4[1] - param_5[1]) * (param_4[1] - param_5[1]) +
                         (*param_4 - *param_5) * (*param_4 - *param_5) +
                         (param_4[2] - param_5[2]) * (param_4[2] - param_5[2]) +
                         (param_4[3] - param_5[3]) * (param_4[3] - param_5[3])) / param_1;
  _expf();
  fVar1 = 1.0 - param_1;
  if (1.0 - param_1 <= param_2) {
    fVar1 = param_2;
  }
  dVar3 = (double)(1.0 - fVar1);
  dVar4 = *param_5;
  dVar2 = (double)fVar1;
  param_3[1] = dVar10 * dVar2 + param_5[1] * dVar3;
  *param_3 = dVar9 * dVar2 + dVar4 * dVar3;
  param_3[3] = dVar7 * dVar2 + dVar8 * dVar3;
  param_3[2] = dVar5 * dVar2 + dVar6 * dVar3;
  return;
}



/* Entry: 1094dc6c4; end: 1094dc72b;  */

void FUN_1094dc6c4(float param_1,float param_2,long param_3)

{
  double dStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  double dStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  double dStack_40;
  double dStack_38;
  
  dStack_60 = (double)param_1;
  dStack_58 = (double)param_2;
  uStack_50 = 0;
  uStack_48 = 0;
  dStack_80 = (double)(float)*(undefined8 *)(param_3 + 0xb0);
  dStack_78 = (double)(float)((ulong)*(undefined8 *)(param_3 + 0xb0) >> 0x20);
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_1094dc5f8(*(undefined4 *)(param_3 + 0x300),*(undefined4 *)(param_3 + 0x304),&dStack_40,
                &dStack_60,&dStack_80);
  *(ulong *)(param_3 + 0xb0) = CONCAT44((float)dStack_38,(float)dStack_40);
  return;
}



/* Entry: 1094dc72c; end: 1094dc863;  */

void FUN_1094dc72c(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  undefined8 uStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  double dStack_108;
  double dStack_100;
  long *plStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  double dStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  double dStack_78;
  
  do {
    if (param_2 == (long *)0x0) {
      return;
    }
    plVar1 = param_2 + 2;
    lVar2 = param_1 + 200;
    FUN_1094e1944(lVar2,plVar1);
    if (lVar2 == 0) {
      lVar2 = param_1 + 200;
      plStack_80 = plVar1;
      FUN_1094e1a28(lVar2,plVar1,&UNK_10dd5b8f9,&plStack_80,&dStack_a0);
      *(long *)(lVar2 + 0x28) = param_2[5];
      uVar5 = param_2[6];
      *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(param_2 + 7);
      *(undefined8 *)(lVar2 + 0x30) = uVar5;
    }
    else {
      lVar2 = param_1 + 200;
      plVar6 = plVar1;
      FUN_1094e1d64();
      if (lVar2 == 0) {
        puVar3 = &UNK_10f639994;
        FUN_109262df8();
        if (plVar6 != (long *)0x0) {
          puStack_e8 = &UNK_10dd5b8f9;
          pcStack_c8 = FUN_1094dc864;
          plStack_f0 = plVar1;
          lStack_e0 = param_1;
          lStack_d8 = (long)param_2;
          puStack_d0 = &stack0xfffffffffffffff0;
          do {
            plVar1 = plVar6 + 2;
            puVar4 = puVar3 + 0x140;
            func_0x0001094e1e48(puVar4,plVar1);
            plStack_110 = plVar1;
            if (puVar4 == (undefined *)0x0) {
              puVar4 = puVar3 + 0x140;
              FUN_1094da208(puVar4,plVar1,&UNK_10dd5b8f9,&plStack_110,&dStack_130);
              *(long *)(puVar4 + 0x28) = plVar6[5];
              *(int *)(puVar4 + 0x30) = (int)plVar6[6];
            }
            else {
              puVar4 = puVar3 + 0x140;
              FUN_1094da208(puVar4,plVar1,&UNK_10dd5b8f9,&plStack_110,&dStack_130);
              dStack_140 = (double)*(float *)(puVar4 + 0x30);
              dStack_120 = (double)*(float *)(plVar6 + 6);
              dStack_130 = (double)(float)plVar6[5];
              dStack_128 = (double)(float)((ulong)plVar6[5] >> 0x20);
              uStack_118 = 0;
              dStack_150 = (double)(float)*(undefined8 *)(puVar4 + 0x28);
              dStack_148 = (double)(float)((ulong)*(undefined8 *)(puVar4 + 0x28) >> 0x20);
              uStack_138 = 0;
              FUN_1094dc5f8(*(undefined4 *)(puVar3 + 0x300),*(undefined4 *)(puVar3 + 0x304),
                            &plStack_110,&dStack_130,&dStack_150);
              *(ulong *)(puVar4 + 0x28) = CONCAT44((float)dStack_108,(float)(double)plStack_110);
              *(float *)(puVar4 + 0x30) = (float)dStack_100;
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        return;
      }
      dStack_a0 = (double)(float)param_2[5];
      dStack_98 = (double)(float)((ulong)param_2[5] >> 0x20);
      uStack_90 = 0;
      uStack_88 = 0;
      dStack_c0 = (double)(float)*(undefined8 *)(lVar2 + 0x28);
      dStack_b8 = (double)(float)((ulong)*(undefined8 *)(lVar2 + 0x28) >> 0x20);
      uStack_b0 = 0;
      uStack_a8 = 0;
      FUN_1094dc5f8(*(undefined4 *)(param_1 + 0x300),*(undefined4 *)(param_1 + 0x304),&plStack_80,
                    &dStack_a0,&dStack_c0);
      *(ulong *)(lVar2 + 0x28) = CONCAT44((float)dStack_78,(float)(double)plStack_80);
      uVar7 = *(undefined4 *)(param_2 + 6);
      lVar2 = param_1 + 200;
      plStack_80 = plVar1;
      FUN_1094e1a28(lVar2,plVar1,&UNK_10dd5b8f9,&plStack_80,&dStack_a0);
      *(undefined4 *)(lVar2 + 0x30) = uVar7;
    }
    param_2 = (long *)*param_2;
  } while( true );
}



/* Entry: 1094dc864; end: 1094dc973;  */

void FUN_1094dc864(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  undefined8 uStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  double dStack_48;
  double dStack_40;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar1 = param_2 + 2;
      lVar2 = param_1 + 0x140;
      func_0x0001094e1e48(lVar2,plVar1);
      plStack_50 = plVar1;
      if (lVar2 == 0) {
        lVar2 = param_1 + 0x140;
        FUN_1094da208(lVar2,plVar1,&UNK_10dd5b8f9,&plStack_50,&dStack_70);
        *(long *)(lVar2 + 0x28) = param_2[5];
        *(int *)(lVar2 + 0x30) = (int)param_2[6];
      }
      else {
        lVar2 = param_1 + 0x140;
        FUN_1094da208(lVar2,plVar1,&UNK_10dd5b8f9,&plStack_50,&dStack_70);
        dStack_80 = (double)*(float *)(lVar2 + 0x30);
        dStack_60 = (double)*(float *)(param_2 + 6);
        dStack_70 = (double)(float)param_2[5];
        dStack_68 = (double)(float)((ulong)param_2[5] >> 0x20);
        uStack_58 = 0;
        dStack_90 = (double)(float)*(undefined8 *)(lVar2 + 0x28);
        dStack_88 = (double)(float)((ulong)*(undefined8 *)(lVar2 + 0x28) >> 0x20);
        uStack_78 = 0;
        FUN_1094dc5f8(*(undefined4 *)(param_1 + 0x300),*(undefined4 *)(param_1 + 0x304),&plStack_50,
                      &dStack_70,&dStack_90);
        *(ulong *)(lVar2 + 0x28) = CONCAT44((float)dStack_48,(float)(double)plStack_50);
        *(float *)(lVar2 + 0x30) = (float)dStack_40;
      }
      param_2 = (long *)*param_2;
    } while (param_2 != (long *)0x0);
  }
  return;
}



/* Entry: 1094dc974; end: 1094dca4f;  */

/* WARNING: Possible PIC construction at 0x0001094dd1d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001094dd1d4) */
/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001094dd118 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

float * FUN_1094dc974(float *param_1,float *param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  long *plVar15;
  long *plVar16;
  float *pfVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  float *pfVar21;
  undefined8 *puVar22;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar23;
  undefined *puVar24;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  float *unaff_x23;
  float *unaff_x24;
  float *unaff_x25;
  float *unaff_x26;
  undefined8 unaff_x27;
  long *plVar25;
  ulong unaff_x28;
  undefined1 *puVar26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  code *pcVar27;
  undefined8 uVar28;
  undefined1 in_b0;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 in_register_00005001;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 in_register_00005002;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 in_register_00005003;
  undefined1 uVar35;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 uVar36;
  long lVar37;
  undefined8 unaff_d8;
  float fVar38;
  ulong unaff_d9;
  float fVar39;
  ulong unaff_d10;
  float fVar40;
  ulong unaff_d11;
  float fVar41;
  ulong unaff_d12;
  float fVar42;
  ulong unaff_d13;
  float fVar43;
  ulong unaff_d14;
  undefined8 unaff_d15;
  
code_r0x0001094dc974:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar26 = (undefined1 *)((long)register0x00000008 + -0x10);
  if (*(char *)(param_2 + 0x85) == *(char *)(param_1 + 0xa7)) {
    pfVar13 = param_1;
    if (((*(char *)(param_2 + 0x85) != '\0') && (*(char *)(param_1 + 0x9f) == '\x01')) &&
       (((uint)param_2[0x7d] & 1) != 0)) {
      *(double *)((long)register0x00000008 + -0x60) = (double)param_2[0x7c];
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(double *)((long)register0x00000008 + -0x80) = (double)param_1[0x9e];
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      pfVar13 = (float *)((long)register0x00000008 + -0x40);
      FUN_1094dc5f8(CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0))))))),param_1[0xc1],
                    pfVar13,(undefined1 *)((long)register0x00000008 + -0x60),
                    (undefined1 *)((long)register0x00000008 + -0x80));
      param_1[0x9e] = (float)*(double *)((long)register0x00000008 + -0x40);
    }
    return pfVar13;
  }
  pfVar14 = (float *)0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  pfVar13 = pfVar14;
  param_2 = (float *)PTR___ZTISt13runtime_error_110346a40;
  plVar15 = (long *)PTR___ZNSt13runtime_errorD1Ev_1103461d8;
  ___cxa_throw();
  ___cxa_free_exception(pfVar14);
  pcVar27 = FUN_1094dca50;
  pfVar12 = pfVar13;
  __Unwind_Resume();
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x80);
  do {
    puVar9 = puVar10 + -0x180;
    register0x00000008 = (BADSPACEBASE *)(puVar10 + -0x180);
    *(undefined8 *)(puVar10 + -0xa0) = unaff_d15;
    *(ulong *)(puVar10 + -0x98) = unaff_d14;
    *(ulong *)(puVar10 + -0x90) = unaff_d13;
    *(ulong *)(puVar10 + -0x88) = unaff_d12;
    *(ulong *)(puVar10 + -0x80) = unaff_d11;
    *(ulong *)(puVar10 + -0x78) = unaff_d10;
    *(ulong *)(puVar10 + -0x70) = unaff_d9;
    *(undefined8 *)(puVar10 + -0x68) = unaff_d8;
    *(ulong *)(puVar10 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar10 + -0x58) = unaff_x27;
    *(float **)(puVar10 + -0x50) = unaff_x26;
    *(float **)(puVar10 + -0x48) = unaff_x25;
    *(float **)(puVar10 + -0x40) = unaff_x24;
    *(float **)(puVar10 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(float **)(puVar10 + -0x20) = pfVar13;
    *(float **)(puVar10 + -0x18) = pfVar14;
    *(undefined1 **)(puVar10 + -0x10) = puVar26;
    *(code **)(puVar10 + -8) = pcVar27;
    *(int *)(puVar10 + -0x16c) = (int)param_4;
    *(undefined8 *)(puVar10 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    bVar11 = (char)plVar15[0xb] != '\x01';
    *(long **)(puVar10 + -0x168) = plVar15;
    if (bVar11) {
      uVar30 = 0;
      pfVar13 = pfVar12;
    }
    else {
      pfVar13 = (float *)(plVar15 + 3);
      FUN_1094f5708(puVar10 + -0x130);
      uVar30 = puVar10[-0x130];
      *(undefined8 *)(puVar10 + -0xe8) = *(undefined8 *)(puVar10 + -0x127);
      *(undefined8 *)(puVar10 + -0xf0) = *(undefined8 *)(puVar10 + -0x12f);
      *(undefined8 *)(puVar10 + -0xd8) = *(undefined8 *)(puVar10 + -0x117);
      *(undefined8 *)(puVar10 + -0xe0) = *(undefined8 *)(puVar10 + -0x11f);
      *(undefined8 *)(puVar10 + -200) = *(undefined8 *)(puVar10 + -0x107);
      *(undefined8 *)(puVar10 + -0xd0) = *(undefined8 *)(puVar10 + -0x10f);
      *(undefined8 *)(puVar10 + -0xb9) = *(undefined8 *)(puVar10 + -0xf8);
      *(undefined8 *)(puVar10 + -0xc1) = *(undefined8 *)(puVar10 + -0x100);
    }
    pfVar14 = pfVar12 + 2;
    *(undefined1 *)pfVar14 = uVar30;
    uVar28 = *(undefined8 *)(puVar10 + -0xf0);
    uVar36 = *(undefined8 *)(puVar10 + -0xd8);
    uVar7 = *(undefined8 *)(puVar10 + -0xe0);
    *(undefined8 *)((long)pfVar12 + 0x11) = *(undefined8 *)(puVar10 + -0xe8);
    *(undefined8 *)((long)pfVar12 + 9) = uVar28;
    *(undefined8 *)((long)pfVar12 + 0x21) = uVar36;
    *(undefined8 *)((long)pfVar12 + 0x19) = uVar7;
    uVar28 = *(undefined8 *)(puVar10 + -0xd0);
    *(undefined8 *)((long)pfVar12 + 0x31) = *(undefined8 *)(puVar10 + -200);
    *(undefined8 *)((long)pfVar12 + 0x29) = uVar28;
    lVar23 = *(long *)(puVar10 + -0xc1);
    *(long *)(pfVar12 + 0x10) = *(long *)(puVar10 + -0xb9);
    *(long *)(pfVar12 + 0xe) = lVar23;
    *(bool *)(pfVar12 + 0x12) = !bVar11;
    unaff_x23 = pfVar12 + 0x14;
    if (((uint)pfVar12[0x1e] & 1) == 0) {
      pfVar12[0x16] = 0.0;
      pfVar12[0x17] = 0.0;
      unaff_x23[0] = 0.0;
      unaff_x23[1] = 0.0;
      pfVar12[0x1a] = 0.0;
      pfVar12[0x1b] = 0.0;
      pfVar12[0x18] = 0.0;
      pfVar12[0x19] = 0.0;
      pfVar12[0x1c] = 1.0;
      *(undefined1 *)(pfVar12 + 0x1e) = 1;
      pfVar13 = unaff_x23;
      FUN_1094dfd00(unaff_x23,(long)(float)*(ulong *)(param_2 + 0x2a));
    }
    plVar25 = *(long **)(param_2 + 0x28);
    lVar23 = *(long *)(puVar10 + -0x168);
    unaff_x24 = param_2;
    if (plVar25 != (long *)0x0) {
      uVar1 = *(uint *)(puVar10 + -0x16c);
      unaff_x28 = (ulong)(uVar1 & 0xfffffffe);
      *(float **)(puVar10 + -0x180) = pfVar12 + 0x18;
      *(undefined1 **)(puVar10 + -0x178) = puVar10 + -0x128;
      unaff_d8 = 0x3f800000;
      do {
        unaff_x26 = (float *)(plVar25 + 5);
        unaff_x25 = unaff_x23;
        func_0x0001094e1f2c(unaff_x23,plVar25 + 2);
        if (unaff_x25 == (float *)0x0) {
          if (*(char *)(pfVar12 + 0x12) == '\x01') {
            FUN_1094cf978(puVar10 + -0xf0,pfVar14,unaff_x26);
          }
          else {
            *(long *)(puVar10 + -0xf0) = plVar25[5];
            *(int *)(puVar10 + -0xe8) = (int)plVar25[6];
          }
          unaff_x25 = unaff_x23;
          func_0x000107c31944(unaff_x23,plVar25 + 2);
          pfVar17 = *(float **)(pfVar12 + 0x16);
          if (pfVar17 != (float *)0x0) {
            unaff_x26 = (float *)((long)pfVar17 + -1);
            if (((ulong)pfVar17 & (ulong)unaff_x26) == 0) {
              unaff_x24 = (float *)((ulong)unaff_x26 & (ulong)unaff_x25);
            }
            else {
              unaff_x24 = unaff_x25;
              if (pfVar17 <= unaff_x25) {
                uVar18 = 0;
                if (pfVar17 != (float *)0x0) {
                  uVar18 = (ulong)unaff_x25 / (ulong)pfVar17;
                }
                unaff_x24 = (float *)((long)unaff_x25 - uVar18 * (long)pfVar17);
              }
            }
            plVar16 = *(long **)(*(long *)unaff_x23 + (long)unaff_x24 * 8);
            if (plVar16 != (long *)0x0) {
              for (plVar16 = (long *)*plVar16; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
                pfVar13 = (float *)plVar16[1];
                if (pfVar13 == unaff_x25) {
                  plVar15 = plVar25 + 2;
                  pfVar13 = unaff_x23;
                  func_0x000104c4fbc4(unaff_x23,plVar16 + 2);
                  if (((ulong)pfVar13 & 1) != 0) goto LAB_1094dcfb8;
                }
                else {
                  if (((ulong)pfVar17 & (ulong)unaff_x26) == 0) {
                    pfVar13 = (float *)((ulong)pfVar13 & (ulong)unaff_x26);
                  }
                  else if (pfVar17 <= pfVar13) {
                    uVar18 = 0;
                    if (pfVar17 != (float *)0x0) {
                      uVar18 = (ulong)pfVar13 / (ulong)pfVar17;
                    }
                    pfVar13 = (float *)((long)pfVar13 - uVar18 * (long)pfVar17);
                  }
                  if (pfVar13 != unaff_x24) break;
                }
              }
            }
          }
          unaff_x26 = (float *)0x38;
          __Znwm();
          *(float **)(puVar10 + -0x130) = unaff_x26;
          *(float **)(puVar10 + -0x128) = unaff_x23;
          *(undefined8 *)(puVar10 + -0x120) = 0;
          unaff_x26[0] = 0.0;
          unaff_x26[1] = 0.0;
          *(float **)(unaff_x26 + 2) = unaff_x25;
          if (*(char *)((long)plVar25 + 0x27) < '\0') {
            plVar15 = (long *)plVar25[3];
            pfVar13 = unaff_x26 + 4;
            func_0x000107c3192c(pfVar13,plVar25[2]);
          }
          else {
            lVar37 = plVar25[3];
            lVar23 = plVar25[2];
            *(long *)(unaff_x26 + 8) = plVar25[4];
            *(long *)(unaff_x26 + 6) = lVar37;
            *(long *)(unaff_x26 + 4) = lVar23;
            pfVar13 = unaff_x26;
          }
          *(long *)(unaff_x26 + 10) = *(long *)(puVar10 + -0xf0);
          unaff_x26[0xc] = *(float *)(puVar10 + -0xe8);
          puVar10[-0x120] = 1;
          if ((pfVar17 == (float *)0x0) ||
             (pfVar12[0x1c] * (float)pfVar17 < (float)(*(long *)(pfVar12 + 0x1a) + 1))) {
            uVar18 = 1;
            if ((float *)0x2 < pfVar17) {
              uVar18 = (ulong)(((ulong)pfVar17 & (long)pfVar17 - 1U) != 0);
            }
            uVar18 = uVar18 | (long)pfVar17 << 1;
            uVar20 = (ulong)((float)(*(long *)(pfVar12 + 0x1a) + 1) / pfVar12[0x1c]);
            if (uVar18 <= uVar20) {
              uVar18 = uVar20;
            }
            pfVar13 = unaff_x23;
            FUN_1094dfd00(unaff_x23,uVar18);
            pfVar17 = *(float **)(pfVar12 + 0x16);
            if (((ulong)pfVar17 & (long)pfVar17 - 1U) == 0) {
              unaff_x24 = (float *)((long)pfVar17 - 1U & (ulong)unaff_x25);
            }
            else {
              unaff_x24 = unaff_x25;
              if (pfVar17 <= unaff_x25) {
                uVar18 = 0;
                if (pfVar17 != (float *)0x0) {
                  uVar18 = (ulong)unaff_x25 / (ulong)pfVar17;
                }
                unaff_x24 = (float *)((long)unaff_x25 - uVar18 * (long)pfVar17);
              }
            }
          }
          lVar23 = *(long *)unaff_x23;
          puVar22 = *(undefined8 **)(lVar23 + (long)unaff_x24 * 8);
          puVar19 = *(undefined8 **)(puVar10 + -0x130);
          if (puVar22 == (undefined8 *)0x0) {
            puVar22 = *(undefined8 **)(puVar10 + -0x180);
            *puVar19 = *puVar22;
            *puVar22 = puVar19;
            *(undefined8 **)(lVar23 + (long)unaff_x24 * 8) = puVar22;
            lVar23 = **(long **)(puVar10 + -0x130);
            if (lVar23 != 0) {
              pfVar21 = *(float **)(lVar23 + 8);
              if (((ulong)pfVar17 & (long)pfVar17 - 1U) == 0) {
                pfVar21 = (float *)((ulong)pfVar21 & (long)pfVar17 - 1U);
              }
              else if (pfVar17 <= pfVar21) {
                uVar18 = 0;
                if (pfVar17 != (float *)0x0) {
                  uVar18 = (ulong)pfVar21 / (ulong)pfVar17;
                }
                pfVar21 = (float *)((long)pfVar21 - uVar18 * (long)pfVar17);
              }
              *(long **)(*(long *)unaff_x23 + (long)pfVar21 * 8) = *(long **)(puVar10 + -0x130);
            }
          }
          else {
            *puVar19 = *puVar22;
            *puVar22 = puVar19;
          }
          *(long *)(pfVar12 + 0x1a) = *(long *)(pfVar12 + 0x1a) + 1;
LAB_1094dcfb8:
          lVar23 = *(long *)(puVar10 + -0x168);
        }
        else {
          pfVar13 = unaff_x25;
          if ((uVar1 & 0xfffffffe) == 8) {
            unaff_x26 = unaff_x25 + 10;
            if (*(char *)(lVar23 + 0x58) == '\x01') {
              pfVar13 = (float *)(lVar23 + 0x18);
              FUN_1094cf978(puVar10 + -0x130,pfVar13,unaff_x26);
              fVar40 = *(float *)(puVar10 + -300);
              pfVar17 = *(float **)(puVar10 + -0x178);
              pfVar21 = (float *)(puVar10 + -0x130);
            }
            else {
              fVar40 = unaff_x25[0xb];
              pfVar17 = unaff_x25 + 0xc;
              pfVar21 = unaff_x26;
            }
            fVar42 = *pfVar21;
            unaff_d13 = (ulong)(uint)fVar42;
            fVar43 = *pfVar17;
            unaff_d14 = (ulong)(uint)fVar43;
            unaff_x25[10] = fVar42;
            unaff_x25[0xb] = fVar40;
            unaff_x25[0xc] = fVar43;
            fVar41 = pfVar12[0xc1];
            unaff_d12 = (ulong)(uint)fVar41;
            fVar38 = *(float *)(plVar25 + 5);
            fVar39 = *(float *)((long)plVar25 + 0x2c);
            uVar30 = (undefined1)((uint)fVar41 >> 8);
            uVar32 = (undefined1)((uint)fVar41 >> 0x10);
            uVar34 = (undefined1)((uint)fVar41 >> 0x18);
            if (*(int *)(puVar10 + -0x16c) == 8) {
              fVar43 = -SQRT((fVar40 - fVar39) * (fVar40 - fVar39) +
                             (fVar42 - fVar38) * (fVar42 - fVar38)) / pfVar12[0xc0];
              uVar29 = SUB41(fVar43,0);
              uVar31 = (undefined1)((uint)fVar43 >> 8);
              uVar33 = (undefined1)((uint)fVar43 >> 0x10);
              uVar35 = (undefined1)((uint)fVar43 >> 0x18);
              _expf();
              fVar43 = 1.0 - (float)CONCAT13(uVar35,CONCAT12(uVar33,CONCAT11(uVar31,uVar29)));
              uVar29 = SUB41(fVar43,0);
              uVar31 = (char)((uint)fVar43 >> 8);
              uVar33 = (char)((uint)fVar43 >> 0x10);
              uVar35 = (char)((uint)fVar43 >> 0x18);
              if (fVar43 <= fVar41) {
                uVar29 = SUB41(fVar41,0);
                uVar31 = uVar30;
                uVar33 = uVar32;
                uVar35 = uVar34;
              }
              fVar41 = 1.0 - (float)CONCAT13(uVar35,CONCAT12(uVar33,CONCAT11(uVar31,uVar29)));
              fVar38 = fVar38 * (float)CONCAT13(uVar35,CONCAT12(uVar33,CONCAT11(uVar31,uVar29))) +
                       fVar42 * fVar41;
              fVar39 = fVar39 * (float)CONCAT13(uVar35,CONCAT12(uVar33,CONCAT11(uVar31,uVar29))) +
                       fVar40 * fVar41;
              uVar5 = (undefined4)plVar25[6];
              in_b0 = (undefined1)uVar5;
              in_register_00005001 = (undefined1)((uint)uVar5 >> 8);
              in_register_00005002 = (undefined1)((uint)uVar5 >> 0x10);
              in_register_00005003 = (undefined1)((uint)uVar5 >> 0x18);
            }
            else {
              fVar40 = *(float *)(plVar25 + 6);
              fVar42 = -ABS(fVar43 - fVar40) / pfVar12[0xc0];
              uVar29 = SUB41(fVar42,0);
              uVar31 = (undefined1)((uint)fVar42 >> 8);
              uVar33 = (undefined1)((uint)fVar42 >> 0x10);
              uVar35 = (undefined1)((uint)fVar42 >> 0x18);
              _expf();
              fVar42 = 1.0 - (float)CONCAT13(uVar35,CONCAT12(uVar33,CONCAT11(uVar31,uVar29)));
              uVar29 = SUB41(fVar42,0);
              uVar31 = (char)((uint)fVar42 >> 8);
              uVar33 = (char)((uint)fVar42 >> 0x10);
              uVar35 = (char)((uint)fVar42 >> 0x18);
              if (fVar42 <= fVar41) {
                uVar29 = SUB41(fVar41,0);
                uVar31 = uVar30;
                uVar33 = uVar32;
                uVar35 = uVar34;
              }
              fVar41 = fVar43 * (1.0 - (float)CONCAT13(uVar35,CONCAT12(uVar33,CONCAT11(uVar31,uVar29
                                                                                      )))) +
                       (float)CONCAT13(uVar35,CONCAT12(uVar33,CONCAT11(uVar31,uVar29))) * fVar40;
              in_b0 = SUB41(fVar41,0);
              in_register_00005001 = (undefined1)((uint)fVar41 >> 8);
              in_register_00005002 = (undefined1)((uint)fVar41 >> 0x10);
              in_register_00005003 = (undefined1)((uint)fVar41 >> 0x18);
            }
            unaff_x25[10] = fVar38;
            unaff_x25[0xb] = fVar39;
            unaff_x25[0xc] =
                 (float)CONCAT13(in_register_00005003,
                                 CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))
                                );
            if (*(char *)(pfVar12 + 0x12) == '\x01') {
              pfVar13 = pfVar14;
              FUN_1094cf978(puVar10 + -0x130,pfVar14,unaff_x26);
              fVar38 = *(float *)(puVar10 + -0x130);
              fVar39 = *(float *)(puVar10 + -300);
              uVar5 = *(undefined4 *)(puVar10 + -0x128);
              in_b0 = (undefined1)uVar5;
              in_register_00005001 = (undefined1)((uint)uVar5 >> 8);
              in_register_00005002 = (undefined1)((uint)uVar5 >> 0x10);
              in_register_00005003 = (undefined1)((uint)uVar5 >> 0x18);
            }
            unaff_x25[10] = fVar38;
            unaff_x25[0xb] = fVar39;
          }
          else {
            if (*(char *)(pfVar12 + 0x12) == '\x01') {
              pfVar13 = pfVar14;
              FUN_1094cf978(puVar10 + -0x130,pfVar14,unaff_x26);
              fVar41 = *(float *)(puVar10 + -300);
              pfVar17 = *(float **)(puVar10 + -0x178);
              unaff_x26 = (float *)(puVar10 + -0x130);
            }
            else {
              fVar41 = *(float *)((long)plVar25 + 0x2c);
              pfVar17 = (float *)(plVar25 + 6);
            }
            fVar43 = *unaff_x26;
            *(undefined8 *)(puVar10 + -0x158) = 0;
            *(ulong *)(puVar10 + -0x160) = (ulong)(uint)fVar41;
            *(undefined8 *)(puVar10 + -0x148) = 0;
            *(ulong *)(puVar10 + -0x150) = (ulong)(uint)fVar43;
            fVar38 = *pfVar17;
            fVar39 = unaff_x25[0xc];
            fVar40 = pfVar12[0xc1];
            fVar42 = pfVar12[0xc0];
            lVar37 = *(long *)(unaff_x25 + 10);
            *(undefined8 *)(puVar10 + -0x138) = 0;
            *(long *)(puVar10 + -0x140) = lVar37;
            fVar43 = (float)lVar37 - fVar43;
            fVar41 = (float)((ulong)lVar37 >> 0x20) - fVar41;
            fVar42 = -SQRT(fVar41 * fVar41 + fVar43 * fVar43 + (fVar39 - fVar38) * (fVar39 - fVar38)
                          ) / fVar42;
            uVar30 = SUB41(fVar42,0);
            uVar32 = (undefined1)((uint)fVar42 >> 8);
            uVar34 = (undefined1)((uint)fVar42 >> 0x10);
            uVar29 = (undefined1)((uint)fVar42 >> 0x18);
            _expf();
            fVar41 = 1.0 - (float)CONCAT13(uVar29,CONCAT12(uVar34,CONCAT11(uVar32,uVar30)));
            uVar30 = SUB41(fVar41,0);
            uVar32 = (undefined1)((uint)fVar41 >> 8);
            uVar34 = (undefined1)((uint)fVar41 >> 0x10);
            uVar29 = (undefined1)((uint)fVar41 >> 0x18);
            if (fVar41 <= fVar40) {
              uVar30 = SUB41(fVar40,0);
              uVar32 = (undefined1)((uint)fVar40 >> 8);
              uVar34 = (undefined1)((uint)fVar40 >> 0x10);
              uVar29 = (undefined1)((uint)fVar40 >> 0x18);
            }
            fVar41 = (float)CONCAT13(uVar29,CONCAT12(uVar34,CONCAT11(uVar32,uVar30)));
            fVar42 = 1.0 - (float)CONCAT13(uVar29,CONCAT12(uVar34,CONCAT11(uVar32,uVar30)));
            fVar43 = fVar38 * (float)CONCAT13(uVar29,CONCAT12(uVar34,CONCAT11(uVar32,uVar30))) +
                     fVar39 * fVar42;
            in_b0 = SUB41(fVar43,0);
            in_register_00005001 = (undefined1)((uint)fVar43 >> 8);
            in_register_00005002 = (undefined1)((uint)fVar43 >> 0x10);
            in_register_00005003 = (undefined1)((uint)fVar43 >> 0x18);
            *(long *)(unaff_x25 + 10) =
                 CONCAT44((float)*(undefined8 *)(puVar10 + -0x160) * fVar41 +
                          (float)((ulong)*(undefined8 *)(puVar10 + -0x140) >> 0x20) * fVar42,
                          (float)*(undefined8 *)(puVar10 + -0x150) * fVar41 +
                          (float)*(undefined8 *)(puVar10 + -0x140) * fVar42);
          }
          unaff_d10 = (ulong)(uint)fVar39;
          unaff_d9 = (ulong)(uint)fVar38;
          unaff_d11 = (ulong)(uint)fVar40;
          unaff_x25[0xc] =
               (float)CONCAT13(in_register_00005003,
                               CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
        }
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
    }
    unaff_x27 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar10 + -0xb0)) {
      return pfVar13;
    }
    ___stack_chk_fail();
    *(undefined8 *)(puVar10 + -0x130) = 0;
    param_2 = unaff_x26;
    func_0x0001094de518(*(undefined8 *)(puVar10 + -0x178));
    param_1 = pfVar13;
    __Unwind_Resume();
    puVar8 = puVar10 + -0x210;
    *(float **)(puVar10 + -0x1b0) = pfVar14;
    *(float **)(puVar10 + -0x1a8) = pfVar12;
    *(long *)(puVar10 + -0x1a0) = lVar23;
    *(float **)(puVar10 + -0x198) = pfVar13;
    *(undefined1 **)(puVar10 + -400) = puVar10 + -0x10;
    *(code **)(puVar10 + -0x188) = FUN_1094dd04c;
    puVar26 = puVar10 + -400;
    if (((uint)param_1[0xb4] & 1) == 0) {
      pfVar13 = param_1 + 0x22;
      FUN_1094dd26c(pfVar13,param_2);
      if (((param_1[0xb8] == 8.40779e-45 || param_1[0xb8] == 1.4013e-45) &&
          (*(char *)(param_1 + 0xa7) == '\x01')) &&
         ((*(char *)(param_1 + 0xa1) == '\x01' && (*(char *)(param_1 + 0x9f) == '\x01')))) {
        *(double *)(puVar10 + -0x1f0) = (double)param_1[0x9e];
        *(undefined8 *)(puVar10 + -0x1e0) = 0;
        *(undefined8 *)(puVar10 + -0x1d8) = 0;
        *(undefined8 *)(puVar10 + -0x1e8) = 0;
        *(double *)(puVar10 + -0x210) = (double)param_1[0xa0];
        *(undefined8 *)(puVar10 + -0x200) = 0;
        *(undefined8 *)(puVar10 + -0x1f8) = 0;
        *(undefined8 *)(puVar10 + -0x208) = 0;
        pfVar13 = (float *)(puVar10 + -0x1d0);
        FUN_1094dc5f8(CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))),param_1[0xc1],
                      pfVar13,puVar10 + -0x1f0,puVar10 + -0x210);
        param_1[0x9e] = (float)*(double *)(puVar10 + -0x1d0);
      }
      return pfVar13;
    }
    fVar41 = param_1[0xb8];
    param_4 = (ulong)(uint)fVar41;
    if ((int)fVar41 < 5) {
      if ((int)fVar41 < 3) {
        if (fVar41 == 1.4013e-45) {
          fVar41 = param_2[8];
          uVar30 = SUB41(fVar41,0);
          uVar32 = (undefined1)((uint)fVar41 >> 8);
          uVar34 = (undefined1)((uint)fVar41 >> 0x10);
          uVar29 = (undefined1)((uint)fVar41 >> 0x18);
          fVar41 = param_2[9];
          uVar28 = 0x1094dd1d4;
          pfVar13 = param_1;
        }
        else {
          if (fVar41 != 2.8026e-45) goto LAB_1094dd260;
          fVar41 = param_2[8];
          uVar30 = SUB41(fVar41,0);
          uVar32 = (undefined1)((uint)fVar41 >> 8);
          uVar34 = (undefined1)((uint)fVar41 >> 0x10);
          uVar29 = (undefined1)((uint)fVar41 >> 0x18);
          fVar41 = param_2[9];
          puVar26 = *(undefined1 **)(puVar10 + -400);
          uVar28 = *(undefined8 *)(puVar10 + -0x188);
          param_2 = *(float **)(puVar10 + -0x1a0);
          puVar8 = puVar10 + -0x180;
          pfVar13 = *(float **)(puVar10 + -0x198);
        }
        *(float **)(puVar8 + -0x20) = param_2;
        *(float **)(puVar8 + -0x18) = pfVar13;
        *(undefined1 **)(puVar8 + -0x10) = puVar26;
        *(undefined8 *)(puVar8 + -8) = uVar28;
        *(double *)(puVar8 + -0x60) =
             (double)(float)CONCAT13(uVar29,CONCAT12(uVar34,CONCAT11(uVar32,uVar30)));
        *(double *)(puVar8 + -0x58) = (double)fVar41;
        *(undefined8 *)(puVar8 + -0x50) = 0;
        *(undefined8 *)(puVar8 + -0x48) = 0;
        lVar23 = *(long *)(param_1 + 0x2a);
        *(double *)(puVar8 + -0x78) = (double)(float)((ulong)lVar23 >> 0x20);
        *(double *)(puVar8 + -0x80) = (double)(float)lVar23;
        *(undefined8 *)(puVar8 + -0x70) = 0;
        *(undefined8 *)(puVar8 + -0x68) = 0;
        pfVar13 = (float *)(puVar8 + -0x40);
        FUN_1094dc5f8(CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(uVar29,CONCAT12(uVar34,CONCAT11(
                                                  uVar32,uVar30))))))),param_1[0xc1],pfVar13,
                      puVar8 + -0x60,puVar8 + -0x80);
        uVar28 = *(undefined8 *)(puVar8 + -0x38);
        auVar2[9] = (char)((ulong)uVar28 >> 8);
        auVar2._0_9_ = *(unkbyte9 *)(puVar8 + -0x40);
        auVar2[10] = (char)((ulong)uVar28 >> 0x10);
        auVar2[0xb] = (char)((ulong)uVar28 >> 0x18);
        auVar2[0xc] = (char)((ulong)uVar28 >> 0x20);
        auVar2[0xd] = (char)((ulong)uVar28 >> 0x28);
        auVar2[0xe] = (char)((ulong)uVar28 >> 0x30);
        auVar2[0xf] = (char)((ulong)uVar28 >> 0x38);
        fVar41 = (float)auVar2._8_8_;
        *(long *)(param_1 + 0x2a) =
             CONCAT17((char)((uint)fVar41 >> 0x18),
                      CONCAT16((char)((uint)fVar41 >> 0x10),
                               CONCAT15((char)((uint)fVar41 >> 8),
                                        CONCAT14(SUB41(fVar41,0),
                                                 (float)(double)*(unkbyte9 *)(puVar8 + -0x40)))));
        return pfVar13;
      }
      if (fVar41 == 4.2039e-45) {
        fVar41 = param_2[10];
        fVar42 = param_2[0xb];
        *(undefined8 *)(puVar10 + -0x1a0) = *(undefined8 *)(puVar10 + -0x1a0);
        *(undefined8 *)(puVar10 + -0x198) = *(undefined8 *)(puVar10 + -0x198);
        *(undefined8 *)(puVar10 + -400) = *(undefined8 *)(puVar10 + -400);
        *(undefined8 *)(puVar10 + -0x188) = *(undefined8 *)(puVar10 + -0x188);
        *(double *)(puVar10 + -0x1e0) = (double)fVar41;
        *(double *)(puVar10 + -0x1d8) = (double)fVar42;
        *(undefined8 *)(puVar10 + -0x1d0) = 0;
        *(undefined8 *)(puVar10 + -0x1c8) = 0;
        lVar23 = *(long *)(param_1 + 0x2c);
        *(double *)(puVar10 + -0x1f8) = (double)(float)((ulong)lVar23 >> 0x20);
        *(double *)(puVar10 + -0x200) = (double)(float)lVar23;
        *(undefined8 *)(puVar10 + -0x1f0) = 0;
        *(undefined8 *)(puVar10 + -0x1e8) = 0;
        pfVar13 = (float *)(puVar10 + -0x1c0);
        FUN_1094dc5f8(CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))),param_1[0xc1],
                      pfVar13,puVar10 + -0x1e0,puVar10 + -0x200);
        uVar28 = *(undefined8 *)(puVar10 + -0x1b8);
        auVar4[9] = (char)((ulong)uVar28 >> 8);
        auVar4._0_9_ = *(unkbyte9 *)(puVar10 + -0x1c0);
        auVar4[10] = (char)((ulong)uVar28 >> 0x10);
        auVar4[0xb] = (char)((ulong)uVar28 >> 0x18);
        auVar4[0xc] = (char)((ulong)uVar28 >> 0x20);
        auVar4[0xd] = (char)((ulong)uVar28 >> 0x28);
        auVar4[0xe] = (char)((ulong)uVar28 >> 0x30);
        auVar4[0xf] = (char)((ulong)uVar28 >> 0x38);
        fVar41 = (float)auVar4._8_8_;
        *(long *)(param_1 + 0x2c) =
             CONCAT17((char)((uint)fVar41 >> 0x18),
                      CONCAT16((char)((uint)fVar41 >> 0x10),
                               CONCAT15((char)((uint)fVar41 >> 8),
                                        CONCAT14(SUB41(fVar41,0),
                                                 (float)(double)*(unkbyte9 *)(puVar10 + -0x1c0)))));
        return pfVar13;
      }
      if (fVar41 != 5.60519e-45) goto LAB_1094dd260;
      plVar15 = *(long **)(param_2 + 0x14);
      puVar9 = puVar10 + -0x240;
      *(ulong *)(puVar10 + -0x1e0) = unaff_d9;
      *(undefined8 *)(puVar10 + -0x1d8) = unaff_d8;
      *(float **)(puVar10 + -0x1d0) = unaff_x26;
      *(float **)(puVar10 + -0x1c8) = unaff_x25;
      *(float **)(puVar10 + -0x1c0) = unaff_x24;
      *(float **)(puVar10 + -0x1b8) = unaff_x23;
      *(undefined8 *)(puVar10 + -0x1b0) = *(undefined8 *)(puVar10 + -0x1b0);
      *(undefined8 *)(puVar10 + -0x1a8) = *(undefined8 *)(puVar10 + -0x1a8);
      *(undefined8 *)(puVar10 + -0x1a0) = *(undefined8 *)(puVar10 + -0x1a0);
      *(undefined8 *)(puVar10 + -0x198) = *(undefined8 *)(puVar10 + -0x198);
      *(undefined8 *)(puVar10 + -400) = *(undefined8 *)(puVar10 + -400);
      *(undefined8 *)(puVar10 + -0x188) = *(undefined8 *)(puVar10 + -0x188);
      puVar26 = puVar10 + -400;
      if (plVar15 == (long *)0x0) {
        return param_1;
      }
      puVar24 = &UNK_10dd5b8f9;
      break;
    }
    if (2 < (int)fVar41 - 7U) goto LAB_1094dd170;
    puVar26 = *(undefined1 **)(puVar10 + -400);
    pcVar27 = *(code **)(puVar10 + -0x188);
    pfVar13 = *(float **)(puVar10 + -0x1a0);
    pfVar14 = *(float **)(puVar10 + -0x198);
    unaff_x22 = *(undefined8 *)(puVar10 + -0x1b0);
    unaff_x21 = *(undefined8 *)(puVar10 + -0x1a8);
    puVar10 = puVar10 + -0x180;
    pfVar12 = param_1;
  } while( true );
LAB_1094dc768:
  plVar25 = plVar15 + 2;
  pfVar13 = param_1 + 0x32;
  FUN_1094e1944(pfVar13,plVar25);
  if (pfVar13 == (float *)0x0) {
    *(long **)(puVar10 + -0x200) = plVar25;
    pfVar13 = param_1 + 0x32;
    FUN_1094e1a28(pfVar13,plVar25,&UNK_10dd5b8f9,puVar10 + -0x200,puVar10 + -0x220);
    *(long *)(pfVar13 + 10) = plVar15[5];
    lVar23 = plVar15[6];
    pfVar13[0xe] = *(float *)(plVar15 + 7);
    *(long *)(pfVar13 + 0xc) = lVar23;
  }
  else {
    pfVar13 = param_1 + 0x32;
    plVar16 = plVar25;
    func_0x0001094e1d64();
    if (pfVar13 == (float *)0x0) {
      pfVar13 = (float *)&UNK_10f639994;
      pcVar27 = FUN_1094dc864;
      FUN_109262df8();
code_r0x0001094dc864:
      pfVar14 = pfVar13;
      if (plVar16 != (long *)0x0) {
        *(long **)(puVar9 + -0x30) = plVar25;
        *(undefined **)(puVar9 + -0x28) = puVar24;
        *(float **)(puVar9 + -0x20) = param_1;
        *(long **)(puVar9 + -0x18) = plVar15;
        *(undefined1 **)(puVar9 + -0x10) = puVar26;
        *(code **)(puVar9 + -8) = pcVar27;
        do {
          plVar15 = plVar16 + 2;
          pfVar14 = pfVar13 + 0x50;
          func_0x0001094e1e48(pfVar14,plVar15);
          if (pfVar14 == (float *)0x0) {
            *(long **)(puVar9 + -0x50) = plVar15;
            pfVar14 = pfVar13 + 0x50;
            FUN_1094da208(pfVar14,plVar15,&UNK_10dd5b8f9,puVar9 + -0x50,puVar9 + -0x70);
            *(long *)(pfVar14 + 10) = plVar16[5];
            pfVar14[0xc] = *(float *)(plVar16 + 6);
          }
          else {
            *(long **)(puVar9 + -0x50) = plVar15;
            pfVar12 = pfVar13 + 0x50;
            FUN_1094da208(pfVar12,plVar15,&UNK_10dd5b8f9,puVar9 + -0x50,puVar9 + -0x70);
            fVar41 = pfVar12[0xc];
            fVar42 = *(float *)(plVar16 + 6);
            lVar23 = plVar16[5];
            *(double *)(puVar9 + -0x68) = (double)(float)((ulong)lVar23 >> 0x20);
            *(double *)(puVar9 + -0x70) = (double)(float)lVar23;
            *(double *)(puVar9 + -0x60) = (double)fVar42;
            *(undefined8 *)(puVar9 + -0x58) = 0;
            lVar23 = *(long *)(pfVar12 + 10);
            *(double *)(puVar9 + -0x88) = (double)(float)((ulong)lVar23 >> 0x20);
            *(double *)(puVar9 + -0x90) = (double)(float)lVar23;
            *(double *)(puVar9 + -0x80) = (double)fVar41;
            *(undefined8 *)(puVar9 + -0x78) = 0;
            pfVar14 = (float *)(puVar9 + -0x50);
            FUN_1094dc5f8(CONCAT17(in_register_00005007,
                                   CONCAT16(in_register_00005006,
                                            CONCAT15(in_register_00005005,
                                                     CONCAT14(in_register_00005004,
                                                              CONCAT13(in_register_00005003,
                                                                       CONCAT12(in_register_00005002
                                                                                ,CONCAT11(
                                                  in_register_00005001,in_b0))))))),pfVar13[0xc1],
                          pfVar14,puVar9 + -0x70,puVar9 + -0x90);
            dVar6 = *(double *)(puVar9 + -0x40);
            *(long *)(pfVar12 + 10) =
                 CONCAT44((float)*(double *)(puVar9 + -0x48),(float)*(double *)(puVar9 + -0x50));
            pfVar12[0xc] = (float)dVar6;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      return pfVar14;
    }
    lVar23 = plVar15[5];
    *(double *)(puVar10 + -0x218) = (double)(float)((ulong)lVar23 >> 0x20);
    *(double *)(puVar10 + -0x220) = (double)(float)lVar23;
    *(undefined8 *)(puVar10 + -0x210) = 0;
    *(undefined8 *)(puVar10 + -0x208) = 0;
    lVar23 = *(long *)(pfVar13 + 10);
    *(double *)(puVar10 + -0x238) = (double)(float)((ulong)lVar23 >> 0x20);
    *(double *)(puVar10 + -0x240) = (double)(float)lVar23;
    *(undefined8 *)(puVar10 + -0x230) = 0;
    *(undefined8 *)(puVar10 + -0x228) = 0;
    FUN_1094dc5f8(CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0))))))),param_1[0xc1],
                  puVar10 + -0x200,puVar10 + -0x220,puVar10 + -0x240);
    uVar28 = *(undefined8 *)(puVar10 + -0x1f8);
    auVar3[9] = (char)((ulong)uVar28 >> 8);
    auVar3._0_9_ = *(unkbyte9 *)(puVar10 + -0x200);
    auVar3[10] = (char)((ulong)uVar28 >> 0x10);
    auVar3[0xb] = (char)((ulong)uVar28 >> 0x18);
    auVar3[0xc] = (char)((ulong)uVar28 >> 0x20);
    auVar3[0xd] = (char)((ulong)uVar28 >> 0x28);
    auVar3[0xe] = (char)((ulong)uVar28 >> 0x30);
    auVar3[0xf] = (char)((ulong)uVar28 >> 0x38);
    fVar41 = (float)auVar3._8_8_;
    in_register_00005004 = SUB41(fVar41,0);
    in_register_00005005 = (undefined1)((uint)fVar41 >> 8);
    in_register_00005006 = (undefined1)((uint)fVar41 >> 0x10);
    in_register_00005007 = (undefined1)((uint)fVar41 >> 0x18);
    *(long *)(pfVar13 + 10) =
         CONCAT17(in_register_00005007,
                  CONCAT16(in_register_00005006,
                           CONCAT15(in_register_00005005,
                                    CONCAT14(in_register_00005004,
                                             (float)(double)*(unkbyte9 *)(puVar10 + -0x200)))));
    fVar41 = *(float *)(plVar15 + 6);
    *(long **)(puVar10 + -0x200) = plVar25;
    pfVar13 = param_1 + 0x32;
    FUN_1094e1a28(pfVar13,plVar25,&UNK_10dd5b8f9,puVar10 + -0x200,puVar10 + -0x220);
    pfVar13[0xc] = fVar41;
  }
  plVar15 = (long *)*plVar15;
  if (plVar15 == (long *)0x0) {
    return pfVar13;
  }
  goto LAB_1094dc768;
LAB_1094dd170:
  if (fVar41 == 7.00649e-45) {
    plVar16 = *(long **)(param_2 + 0x32);
    puVar26 = *(undefined1 **)(puVar10 + -400);
    pcVar27 = *(code **)(puVar10 + -0x188);
    plVar15 = *(long **)(puVar10 + -0x198);
    plVar25 = *(long **)(puVar10 + -0x1b0);
    puVar24 = *(undefined **)(puVar10 + -0x1a8);
    pfVar13 = param_1;
    param_1 = *(float **)(puVar10 + -0x1a0);
    goto code_r0x0001094dc864;
  }
  if (fVar41 != 8.40779e-45) {
LAB_1094dd260:
    pfVar13 = (float *)&UNK_10f56fd45;
    func_0x000105688514();
    *(float **)(puVar10 + -0x230) = param_2;
    *(float **)(puVar10 + -0x228) = param_1;
    *(undefined1 **)(puVar10 + -0x220) = puVar26;
    *(code **)(puVar10 + -0x218) = FUN_1094dd26c;
    if (*(char *)(pfVar13 + 0x92) == '\x01') {
      FUN_1094ddaa0();
    }
    else {
      FUN_1094df9ec();
      *(undefined1 *)(pfVar13 + 0x92) = 1;
    }
    return pfVar13;
  }
  unaff_x29 = *(undefined8 *)(puVar10 + -400);
  unaff_x30 = *(undefined8 *)(puVar10 + -0x188);
  unaff_x20 = *(undefined8 *)(puVar10 + -0x1a0);
  unaff_x19 = *(undefined8 *)(puVar10 + -0x198);
  unaff_x22 = *(undefined8 *)(puVar10 + -0x1b0);
  unaff_x21 = *(undefined8 *)(puVar10 + -0x1a8);
  goto code_r0x0001094dc974;
}



/* Entry: 1094dca50; end: 1094dd04b;  */

/* WARNING: Possible PIC construction at 0x0001094dd1d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001094dd1d4) */
/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001094dd118 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

float * FUN_1094dca50(float *param_1,float *param_2,long *param_3,ulong param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  bool bVar10;
  float *pfVar11;
  float *pfVar12;
  long *plVar13;
  float *pfVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  float *pfVar19;
  undefined8 *puVar20;
  float *unaff_x19;
  float *unaff_x20;
  long lVar21;
  undefined *puVar22;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  float *unaff_x23;
  float *unaff_x24;
  float *unaff_x25;
  float *unaff_x26;
  undefined8 unaff_x27;
  long *plVar23;
  ulong unaff_x28;
  undefined1 *puVar24;
  undefined1 *unaff_x29;
  code *pcVar25;
  code *unaff_x30;
  undefined8 uVar26;
  undefined1 in_b0;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 in_register_00005001;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 in_register_00005002;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 in_register_00005003;
  undefined1 uVar33;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 uVar34;
  long lVar35;
  undefined8 unaff_d8;
  float fVar36;
  ulong unaff_d9;
  float fVar37;
  ulong unaff_d10;
  float fVar38;
  ulong unaff_d11;
  float fVar39;
  ulong unaff_d12;
  float fVar40;
  ulong unaff_d13;
  float fVar41;
  ulong unaff_d14;
  undefined8 unaff_d15;
  
  do {
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x180);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d15;
    *(ulong *)((long)register0x00000008 + -0x98) = unaff_d14;
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x88) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x80) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x78) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(float **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(float **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(float **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(float **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(int *)((long)register0x00000008 + -0x16c) = (int)param_4;
    *(undefined8 *)((long)register0x00000008 + -0xb0) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    bVar10 = (char)param_3[0xb] != '\x01';
    *(long **)((long)register0x00000008 + -0x168) = param_3;
    if (bVar10) {
      uVar28 = 0;
      pfVar12 = param_1;
    }
    else {
      pfVar12 = (float *)(param_3 + 3);
      FUN_1094f5708((undefined1 *)((long)register0x00000008 + -0x130));
      uVar28 = *(undefined1 *)((long)register0x00000008 + -0x130);
      *(undefined8 *)((long)register0x00000008 + -0xe8) =
           *(undefined8 *)((long)register0x00000008 + -0x127);
      *(undefined8 *)((long)register0x00000008 + -0xf0) =
           *(undefined8 *)((long)register0x00000008 + -0x12f);
      *(undefined8 *)((long)register0x00000008 + -0xd8) =
           *(undefined8 *)((long)register0x00000008 + -0x117);
      *(undefined8 *)((long)register0x00000008 + -0xe0) =
           *(undefined8 *)((long)register0x00000008 + -0x11f);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -0x107);
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0x10f);
      *(undefined8 *)((long)register0x00000008 + -0xb9) =
           *(undefined8 *)((long)register0x00000008 + -0xf8);
      *(undefined8 *)((long)register0x00000008 + -0xc1) =
           *(undefined8 *)((long)register0x00000008 + -0x100);
    }
    pfVar11 = param_1 + 2;
    *(undefined1 *)pfVar11 = uVar28;
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0xf0);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0xd8);
    uVar7 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)register0x00000008 + -0xe8);
    *(undefined8 *)((long)param_1 + 9) = uVar26;
    *(undefined8 *)((long)param_1 + 0x21) = uVar34;
    *(undefined8 *)((long)param_1 + 0x19) = uVar7;
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0xd0);
    *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)register0x00000008 + -200);
    *(undefined8 *)((long)param_1 + 0x29) = uVar26;
    lVar21 = *(long *)((long)register0x00000008 + -0xc1);
    *(long *)(param_1 + 0x10) = *(long *)((long)register0x00000008 + -0xb9);
    *(long *)(param_1 + 0xe) = lVar21;
    *(bool *)(param_1 + 0x12) = !bVar10;
    unaff_x23 = param_1 + 0x14;
    if (((uint)param_1[0x1e] & 1) == 0) {
      param_1[0x16] = 0.0;
      param_1[0x17] = 0.0;
      unaff_x23[0] = 0.0;
      unaff_x23[1] = 0.0;
      param_1[0x1a] = 0.0;
      param_1[0x1b] = 0.0;
      param_1[0x18] = 0.0;
      param_1[0x19] = 0.0;
      param_1[0x1c] = 1.0;
      *(undefined1 *)(param_1 + 0x1e) = 1;
      pfVar12 = unaff_x23;
      FUN_1094dfd00(unaff_x23,(long)(float)*(ulong *)(param_2 + 0x2a));
    }
    plVar23 = *(long **)(param_2 + 0x28);
    lVar21 = *(long *)((long)register0x00000008 + -0x168);
    unaff_x24 = param_2;
    if (plVar23 != (long *)0x0) {
      uVar1 = *(uint *)((long)register0x00000008 + -0x16c);
      unaff_x28 = (ulong)(uVar1 & 0xfffffffe);
      *(float **)((long)register0x00000008 + -0x180) = param_1 + 0x18;
      *(undefined1 **)((long)register0x00000008 + -0x178) =
           (undefined1 *)((long)register0x00000008 + -0x128);
      unaff_d8 = 0x3f800000;
      do {
        unaff_x26 = (float *)(plVar23 + 5);
        unaff_x25 = unaff_x23;
        func_0x0001094e1f2c(unaff_x23,plVar23 + 2);
        if (unaff_x25 == (float *)0x0) {
          if (*(char *)(param_1 + 0x12) == '\x01') {
            FUN_1094cf978((undefined1 *)((long)register0x00000008 + -0xf0),pfVar11,unaff_x26);
          }
          else {
            *(long *)((long)register0x00000008 + -0xf0) = plVar23[5];
            *(int *)((long)register0x00000008 + -0xe8) = (int)plVar23[6];
          }
          unaff_x25 = unaff_x23;
          func_0x000107c31944(unaff_x23,plVar23 + 2);
          pfVar14 = *(float **)(param_1 + 0x16);
          if (pfVar14 != (float *)0x0) {
            unaff_x26 = (float *)((long)pfVar14 + -1);
            if (((ulong)pfVar14 & (ulong)unaff_x26) == 0) {
              unaff_x24 = (float *)((ulong)unaff_x26 & (ulong)unaff_x25);
            }
            else {
              unaff_x24 = unaff_x25;
              if (pfVar14 <= unaff_x25) {
                uVar16 = 0;
                if (pfVar14 != (float *)0x0) {
                  uVar16 = (ulong)unaff_x25 / (ulong)pfVar14;
                }
                unaff_x24 = (float *)((long)unaff_x25 - uVar16 * (long)pfVar14);
              }
            }
            plVar15 = *(long **)(*(long *)unaff_x23 + (long)unaff_x24 * 8);
            if (plVar15 != (long *)0x0) {
              for (plVar15 = (long *)*plVar15; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
                pfVar12 = (float *)plVar15[1];
                if (pfVar12 == unaff_x25) {
                  param_3 = plVar23 + 2;
                  pfVar12 = unaff_x23;
                  func_0x000104c4fbc4(unaff_x23,plVar15 + 2);
                  if (((ulong)pfVar12 & 1) != 0) goto LAB_1094dcfb8;
                }
                else {
                  if (((ulong)pfVar14 & (ulong)unaff_x26) == 0) {
                    pfVar12 = (float *)((ulong)pfVar12 & (ulong)unaff_x26);
                  }
                  else if (pfVar14 <= pfVar12) {
                    uVar16 = 0;
                    if (pfVar14 != (float *)0x0) {
                      uVar16 = (ulong)pfVar12 / (ulong)pfVar14;
                    }
                    pfVar12 = (float *)((long)pfVar12 - uVar16 * (long)pfVar14);
                  }
                  if (pfVar12 != unaff_x24) break;
                }
              }
            }
          }
          unaff_x26 = (float *)0x38;
          __Znwm();
          *(float **)((long)register0x00000008 + -0x130) = unaff_x26;
          *(float **)((long)register0x00000008 + -0x128) = unaff_x23;
          *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
          unaff_x26[0] = 0.0;
          unaff_x26[1] = 0.0;
          *(float **)(unaff_x26 + 2) = unaff_x25;
          if (*(char *)((long)plVar23 + 0x27) < '\0') {
            param_3 = (long *)plVar23[3];
            pfVar12 = unaff_x26 + 4;
            func_0x000107c3192c(pfVar12,plVar23[2]);
          }
          else {
            lVar35 = plVar23[3];
            lVar21 = plVar23[2];
            *(long *)(unaff_x26 + 8) = plVar23[4];
            *(long *)(unaff_x26 + 6) = lVar35;
            *(long *)(unaff_x26 + 4) = lVar21;
            pfVar12 = unaff_x26;
          }
          *(long *)(unaff_x26 + 10) = *(long *)((long)register0x00000008 + -0xf0);
          unaff_x26[0xc] = *(float *)((long)register0x00000008 + -0xe8);
          *(undefined1 *)((long)register0x00000008 + -0x120) = 1;
          if ((pfVar14 == (float *)0x0) ||
             (param_1[0x1c] * (float)pfVar14 < (float)(*(long *)(param_1 + 0x1a) + 1))) {
            uVar16 = 1;
            if ((float *)0x2 < pfVar14) {
              uVar16 = (ulong)(((ulong)pfVar14 & (long)pfVar14 - 1U) != 0);
            }
            uVar16 = uVar16 | (long)pfVar14 << 1;
            uVar18 = (ulong)((float)(*(long *)(param_1 + 0x1a) + 1) / param_1[0x1c]);
            if (uVar16 <= uVar18) {
              uVar16 = uVar18;
            }
            pfVar12 = unaff_x23;
            FUN_1094dfd00(unaff_x23,uVar16);
            pfVar14 = *(float **)(param_1 + 0x16);
            if (((ulong)pfVar14 & (long)pfVar14 - 1U) == 0) {
              unaff_x24 = (float *)((long)pfVar14 - 1U & (ulong)unaff_x25);
            }
            else {
              unaff_x24 = unaff_x25;
              if (pfVar14 <= unaff_x25) {
                uVar16 = 0;
                if (pfVar14 != (float *)0x0) {
                  uVar16 = (ulong)unaff_x25 / (ulong)pfVar14;
                }
                unaff_x24 = (float *)((long)unaff_x25 - uVar16 * (long)pfVar14);
              }
            }
          }
          lVar21 = *(long *)unaff_x23;
          puVar20 = *(undefined8 **)(lVar21 + (long)unaff_x24 * 8);
          puVar17 = *(undefined8 **)((long)register0x00000008 + -0x130);
          if (puVar20 == (undefined8 *)0x0) {
            puVar20 = *(undefined8 **)((long)register0x00000008 + -0x180);
            *puVar17 = *puVar20;
            *puVar20 = puVar17;
            *(undefined8 **)(lVar21 + (long)unaff_x24 * 8) = puVar20;
            lVar21 = **(long **)((long)register0x00000008 + -0x130);
            if (lVar21 != 0) {
              pfVar19 = *(float **)(lVar21 + 8);
              if (((ulong)pfVar14 & (long)pfVar14 - 1U) == 0) {
                pfVar19 = (float *)((ulong)pfVar19 & (long)pfVar14 - 1U);
              }
              else if (pfVar14 <= pfVar19) {
                uVar16 = 0;
                if (pfVar14 != (float *)0x0) {
                  uVar16 = (ulong)pfVar19 / (ulong)pfVar14;
                }
                pfVar19 = (float *)((long)pfVar19 - uVar16 * (long)pfVar14);
              }
              *(long **)(*(long *)unaff_x23 + (long)pfVar19 * 8) =
                   *(long **)((long)register0x00000008 + -0x130);
            }
          }
          else {
            *puVar17 = *puVar20;
            *puVar20 = puVar17;
          }
          *(long *)(param_1 + 0x1a) = *(long *)(param_1 + 0x1a) + 1;
LAB_1094dcfb8:
          lVar21 = *(long *)((long)register0x00000008 + -0x168);
        }
        else {
          pfVar12 = unaff_x25;
          if ((uVar1 & 0xfffffffe) == 8) {
            unaff_x26 = unaff_x25 + 10;
            if (*(char *)(lVar21 + 0x58) == '\x01') {
              pfVar12 = (float *)(lVar21 + 0x18);
              FUN_1094cf978((undefined1 *)((long)register0x00000008 + -0x130),pfVar12,unaff_x26);
              fVar38 = *(float *)((long)register0x00000008 + -300);
              pfVar14 = *(float **)((long)register0x00000008 + -0x178);
              pfVar19 = (float *)((long)register0x00000008 + -0x130);
            }
            else {
              fVar38 = unaff_x25[0xb];
              pfVar14 = unaff_x25 + 0xc;
              pfVar19 = unaff_x26;
            }
            fVar40 = *pfVar19;
            unaff_d13 = (ulong)(uint)fVar40;
            fVar41 = *pfVar14;
            unaff_d14 = (ulong)(uint)fVar41;
            unaff_x25[10] = fVar40;
            unaff_x25[0xb] = fVar38;
            unaff_x25[0xc] = fVar41;
            fVar39 = param_1[0xc1];
            unaff_d12 = (ulong)(uint)fVar39;
            fVar36 = *(float *)(plVar23 + 5);
            fVar37 = *(float *)((long)plVar23 + 0x2c);
            uVar28 = (undefined1)((uint)fVar39 >> 8);
            uVar30 = (undefined1)((uint)fVar39 >> 0x10);
            uVar32 = (undefined1)((uint)fVar39 >> 0x18);
            if (*(int *)((long)register0x00000008 + -0x16c) == 8) {
              fVar41 = -SQRT((fVar38 - fVar37) * (fVar38 - fVar37) +
                             (fVar40 - fVar36) * (fVar40 - fVar36)) / param_1[0xc0];
              uVar27 = SUB41(fVar41,0);
              uVar29 = (undefined1)((uint)fVar41 >> 8);
              uVar31 = (undefined1)((uint)fVar41 >> 0x10);
              uVar33 = (undefined1)((uint)fVar41 >> 0x18);
              _expf();
              fVar41 = 1.0 - (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27)));
              uVar27 = SUB41(fVar41,0);
              uVar29 = (char)((uint)fVar41 >> 8);
              uVar31 = (char)((uint)fVar41 >> 0x10);
              uVar33 = (char)((uint)fVar41 >> 0x18);
              if (fVar41 <= fVar39) {
                uVar27 = SUB41(fVar39,0);
                uVar29 = uVar28;
                uVar31 = uVar30;
                uVar33 = uVar32;
              }
              fVar39 = 1.0 - (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27)));
              fVar36 = fVar36 * (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27))) +
                       fVar40 * fVar39;
              fVar37 = fVar37 * (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27))) +
                       fVar38 * fVar39;
              uVar5 = (undefined4)plVar23[6];
              in_b0 = (undefined1)uVar5;
              in_register_00005001 = (undefined1)((uint)uVar5 >> 8);
              in_register_00005002 = (undefined1)((uint)uVar5 >> 0x10);
              in_register_00005003 = (undefined1)((uint)uVar5 >> 0x18);
            }
            else {
              fVar38 = *(float *)(plVar23 + 6);
              fVar40 = -ABS(fVar41 - fVar38) / param_1[0xc0];
              uVar27 = SUB41(fVar40,0);
              uVar29 = (undefined1)((uint)fVar40 >> 8);
              uVar31 = (undefined1)((uint)fVar40 >> 0x10);
              uVar33 = (undefined1)((uint)fVar40 >> 0x18);
              _expf();
              fVar40 = 1.0 - (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27)));
              uVar27 = SUB41(fVar40,0);
              uVar29 = (char)((uint)fVar40 >> 8);
              uVar31 = (char)((uint)fVar40 >> 0x10);
              uVar33 = (char)((uint)fVar40 >> 0x18);
              if (fVar40 <= fVar39) {
                uVar27 = SUB41(fVar39,0);
                uVar29 = uVar28;
                uVar31 = uVar30;
                uVar33 = uVar32;
              }
              fVar39 = fVar41 * (1.0 - (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27
                                                                                      )))) +
                       (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27))) * fVar38;
              in_b0 = SUB41(fVar39,0);
              in_register_00005001 = (undefined1)((uint)fVar39 >> 8);
              in_register_00005002 = (undefined1)((uint)fVar39 >> 0x10);
              in_register_00005003 = (undefined1)((uint)fVar39 >> 0x18);
            }
            unaff_x25[10] = fVar36;
            unaff_x25[0xb] = fVar37;
            unaff_x25[0xc] =
                 (float)CONCAT13(in_register_00005003,
                                 CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))
                                );
            if (*(char *)(param_1 + 0x12) == '\x01') {
              pfVar12 = pfVar11;
              FUN_1094cf978((undefined1 *)((long)register0x00000008 + -0x130),pfVar11,unaff_x26);
              fVar36 = *(float *)((long)register0x00000008 + -0x130);
              fVar37 = *(float *)((long)register0x00000008 + -300);
              uVar5 = *(undefined4 *)((long)register0x00000008 + -0x128);
              in_b0 = (undefined1)uVar5;
              in_register_00005001 = (undefined1)((uint)uVar5 >> 8);
              in_register_00005002 = (undefined1)((uint)uVar5 >> 0x10);
              in_register_00005003 = (undefined1)((uint)uVar5 >> 0x18);
            }
            unaff_x25[10] = fVar36;
            unaff_x25[0xb] = fVar37;
          }
          else {
            if (*(char *)(param_1 + 0x12) == '\x01') {
              pfVar12 = pfVar11;
              FUN_1094cf978((undefined1 *)((long)register0x00000008 + -0x130),pfVar11,unaff_x26);
              fVar39 = *(float *)((long)register0x00000008 + -300);
              pfVar14 = *(float **)((long)register0x00000008 + -0x178);
              unaff_x26 = (float *)((long)register0x00000008 + -0x130);
            }
            else {
              fVar39 = *(float *)((long)plVar23 + 0x2c);
              pfVar14 = (float *)(plVar23 + 6);
            }
            fVar41 = *unaff_x26;
            *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
            *(ulong *)((long)register0x00000008 + -0x160) = (ulong)(uint)fVar39;
            *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
            *(ulong *)((long)register0x00000008 + -0x150) = (ulong)(uint)fVar41;
            fVar36 = *pfVar14;
            fVar37 = unaff_x25[0xc];
            fVar38 = param_1[0xc1];
            fVar40 = param_1[0xc0];
            lVar35 = *(long *)(unaff_x25 + 10);
            *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
            *(long *)((long)register0x00000008 + -0x140) = lVar35;
            fVar41 = (float)lVar35 - fVar41;
            fVar39 = (float)((ulong)lVar35 >> 0x20) - fVar39;
            fVar40 = -SQRT(fVar39 * fVar39 + fVar41 * fVar41 + (fVar37 - fVar36) * (fVar37 - fVar36)
                          ) / fVar40;
            uVar28 = SUB41(fVar40,0);
            uVar30 = (undefined1)((uint)fVar40 >> 8);
            uVar32 = (undefined1)((uint)fVar40 >> 0x10);
            uVar27 = (undefined1)((uint)fVar40 >> 0x18);
            _expf();
            fVar39 = 1.0 - (float)CONCAT13(uVar27,CONCAT12(uVar32,CONCAT11(uVar30,uVar28)));
            uVar28 = SUB41(fVar39,0);
            uVar30 = (undefined1)((uint)fVar39 >> 8);
            uVar32 = (undefined1)((uint)fVar39 >> 0x10);
            uVar27 = (undefined1)((uint)fVar39 >> 0x18);
            if (fVar39 <= fVar38) {
              uVar28 = SUB41(fVar38,0);
              uVar30 = (undefined1)((uint)fVar38 >> 8);
              uVar32 = (undefined1)((uint)fVar38 >> 0x10);
              uVar27 = (undefined1)((uint)fVar38 >> 0x18);
            }
            fVar39 = (float)CONCAT13(uVar27,CONCAT12(uVar32,CONCAT11(uVar30,uVar28)));
            fVar40 = 1.0 - (float)CONCAT13(uVar27,CONCAT12(uVar32,CONCAT11(uVar30,uVar28)));
            fVar41 = fVar36 * (float)CONCAT13(uVar27,CONCAT12(uVar32,CONCAT11(uVar30,uVar28))) +
                     fVar37 * fVar40;
            in_b0 = SUB41(fVar41,0);
            in_register_00005001 = (undefined1)((uint)fVar41 >> 8);
            in_register_00005002 = (undefined1)((uint)fVar41 >> 0x10);
            in_register_00005003 = (undefined1)((uint)fVar41 >> 0x18);
            *(long *)(unaff_x25 + 10) =
                 CONCAT44((float)*(undefined8 *)((long)register0x00000008 + -0x160) * fVar39 +
                          (float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x140) >> 0x20)
                          * fVar40,(float)*(undefined8 *)((long)register0x00000008 + -0x150) *
                                   fVar39 + (float)*(undefined8 *)
                                                    ((long)register0x00000008 + -0x140) * fVar40);
          }
          unaff_d10 = (ulong)(uint)fVar37;
          unaff_d9 = (ulong)(uint)fVar36;
          unaff_d11 = (ulong)(uint)fVar38;
          unaff_x25[0xc] =
               (float)CONCAT13(in_register_00005003,
                               CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
        }
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0);
    }
    unaff_x27 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xb0)) {
      return pfVar12;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
    param_2 = unaff_x26;
    func_0x0001094de518(*(undefined8 *)((long)register0x00000008 + -0x178));
    pfVar14 = pfVar12;
    __Unwind_Resume();
    puVar8 = (undefined1 *)((long)register0x00000008 + -0x210);
    *(float **)((long)register0x00000008 + -0x1b0) = pfVar11;
    *(float **)((long)register0x00000008 + -0x1a8) = param_1;
    *(long *)((long)register0x00000008 + -0x1a0) = lVar21;
    *(float **)((long)register0x00000008 + -0x198) = pfVar12;
    *(undefined1 **)((long)register0x00000008 + -400) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x188) = FUN_1094dd04c;
    puVar24 = (undefined1 *)((long)register0x00000008 + -400);
    if (((uint)pfVar14[0xb4] & 1) == 0) {
      pfVar12 = pfVar14 + 0x22;
      FUN_1094dd26c(pfVar12,param_2);
      if ((((pfVar14[0xb8] == 8.40779e-45 || pfVar14[0xb8] == 1.4013e-45) &&
           (*(char *)(pfVar14 + 0xa7) == '\x01')) && (*(char *)(pfVar14 + 0xa1) == '\x01')) &&
         (*(char *)(pfVar14 + 0x9f) == '\x01')) {
        *(double *)((long)register0x00000008 + -0x1f0) = (double)pfVar14[0x9e];
        *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
        *(double *)((long)register0x00000008 + -0x210) = (double)pfVar14[0xa0];
        *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
        pfVar12 = (float *)((long)register0x00000008 + -0x1d0);
        FUN_1094dc5f8(CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))),pfVar14[0xc1],
                      pfVar12,(undefined1 *)((long)register0x00000008 + -0x1f0),
                      (undefined1 *)((long)register0x00000008 + -0x210));
        pfVar14[0x9e] = (float)*(double *)((long)register0x00000008 + -0x1d0);
      }
      return pfVar12;
    }
    fVar39 = pfVar14[0xb8];
    param_4 = (ulong)(uint)fVar39;
    if ((int)fVar39 < 5) {
      if ((int)fVar39 < 3) {
        if (fVar39 == 1.4013e-45) {
          fVar39 = param_2[8];
          uVar28 = SUB41(fVar39,0);
          uVar30 = (undefined1)((uint)fVar39 >> 8);
          uVar32 = (undefined1)((uint)fVar39 >> 0x10);
          uVar27 = (undefined1)((uint)fVar39 >> 0x18);
          fVar39 = param_2[9];
          uVar26 = 0x1094dd1d4;
          pfVar12 = pfVar14;
        }
        else {
          if (fVar39 != 2.8026e-45) goto LAB_1094dd260;
          fVar39 = param_2[8];
          uVar28 = SUB41(fVar39,0);
          uVar30 = (undefined1)((uint)fVar39 >> 8);
          uVar32 = (undefined1)((uint)fVar39 >> 0x10);
          uVar27 = (undefined1)((uint)fVar39 >> 0x18);
          fVar39 = param_2[9];
          puVar24 = *(undefined1 **)((long)register0x00000008 + -400);
          uVar26 = *(undefined8 *)((long)register0x00000008 + -0x188);
          param_2 = *(float **)((long)register0x00000008 + -0x1a0);
          puVar8 = (undefined1 *)((long)register0x00000008 + -0x180);
          pfVar12 = *(float **)((long)register0x00000008 + -0x198);
        }
        *(float **)(puVar8 + -0x20) = param_2;
        *(float **)(puVar8 + -0x18) = pfVar12;
        *(undefined1 **)(puVar8 + -0x10) = puVar24;
        *(undefined8 *)(puVar8 + -8) = uVar26;
        *(double *)(puVar8 + -0x60) =
             (double)(float)CONCAT13(uVar27,CONCAT12(uVar32,CONCAT11(uVar30,uVar28)));
        *(double *)(puVar8 + -0x58) = (double)fVar39;
        *(undefined8 *)(puVar8 + -0x50) = 0;
        *(undefined8 *)(puVar8 + -0x48) = 0;
        lVar21 = *(long *)(pfVar14 + 0x2a);
        *(double *)(puVar8 + -0x78) = (double)(float)((ulong)lVar21 >> 0x20);
        *(double *)(puVar8 + -0x80) = (double)(float)lVar21;
        *(undefined8 *)(puVar8 + -0x70) = 0;
        *(undefined8 *)(puVar8 + -0x68) = 0;
        pfVar12 = (float *)(puVar8 + -0x40);
        FUN_1094dc5f8(CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(uVar27,CONCAT12(uVar32,CONCAT11(
                                                  uVar30,uVar28))))))),pfVar14[0xc1],pfVar12,
                      puVar8 + -0x60,puVar8 + -0x80);
        uVar26 = *(undefined8 *)(puVar8 + -0x38);
        auVar2[9] = (char)((ulong)uVar26 >> 8);
        auVar2._0_9_ = *(unkbyte9 *)(puVar8 + -0x40);
        auVar2[10] = (char)((ulong)uVar26 >> 0x10);
        auVar2[0xb] = (char)((ulong)uVar26 >> 0x18);
        auVar2[0xc] = (char)((ulong)uVar26 >> 0x20);
        auVar2[0xd] = (char)((ulong)uVar26 >> 0x28);
        auVar2[0xe] = (char)((ulong)uVar26 >> 0x30);
        auVar2[0xf] = (char)((ulong)uVar26 >> 0x38);
        fVar39 = (float)auVar2._8_8_;
        *(long *)(pfVar14 + 0x2a) =
             CONCAT17((char)((uint)fVar39 >> 0x18),
                      CONCAT16((char)((uint)fVar39 >> 0x10),
                               CONCAT15((char)((uint)fVar39 >> 8),
                                        CONCAT14(SUB41(fVar39,0),
                                                 (float)(double)*(unkbyte9 *)(puVar8 + -0x40)))));
        return pfVar12;
      }
      if (fVar39 == 4.2039e-45) {
        fVar39 = param_2[10];
        fVar40 = param_2[0xb];
        *(undefined8 *)((long)register0x00000008 + -0x1a0) =
             *(undefined8 *)((long)register0x00000008 + -0x1a0);
        *(undefined8 *)((long)register0x00000008 + -0x198) =
             *(undefined8 *)((long)register0x00000008 + -0x198);
        *(undefined8 *)((long)register0x00000008 + -400) =
             *(undefined8 *)((long)register0x00000008 + -400);
        *(undefined8 *)((long)register0x00000008 + -0x188) =
             *(undefined8 *)((long)register0x00000008 + -0x188);
        *(double *)((long)register0x00000008 + -0x1e0) = (double)fVar39;
        *(double *)((long)register0x00000008 + -0x1d8) = (double)fVar40;
        *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
        lVar21 = *(long *)(pfVar14 + 0x2c);
        *(double *)((long)register0x00000008 + -0x1f8) = (double)(float)((ulong)lVar21 >> 0x20);
        *(double *)((long)register0x00000008 + -0x200) = (double)(float)lVar21;
        *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
        pfVar12 = (float *)((long)register0x00000008 + -0x1c0);
        FUN_1094dc5f8(CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))),pfVar14[0xc1],
                      pfVar12,(undefined1 *)((long)register0x00000008 + -0x1e0),
                      (undefined1 *)((long)register0x00000008 + -0x200));
        uVar26 = *(undefined8 *)((long)register0x00000008 + -0x1b8);
        auVar4[9] = (char)((ulong)uVar26 >> 8);
        auVar4._0_9_ = *(unkbyte9 *)((long)register0x00000008 + -0x1c0);
        auVar4[10] = (char)((ulong)uVar26 >> 0x10);
        auVar4[0xb] = (char)((ulong)uVar26 >> 0x18);
        auVar4[0xc] = (char)((ulong)uVar26 >> 0x20);
        auVar4[0xd] = (char)((ulong)uVar26 >> 0x28);
        auVar4[0xe] = (char)((ulong)uVar26 >> 0x30);
        auVar4[0xf] = (char)((ulong)uVar26 >> 0x38);
        fVar39 = (float)auVar4._8_8_;
        *(long *)(pfVar14 + 0x2c) =
             CONCAT17((char)((uint)fVar39 >> 0x18),
                      CONCAT16((char)((uint)fVar39 >> 0x10),
                               CONCAT15((char)((uint)fVar39 >> 8),
                                        CONCAT14(SUB41(fVar39,0),
                                                 (float)(double)*(unkbyte9 *)
                                                                 ((long)register0x00000008 + -0x1c0)
                                                ))));
        return pfVar12;
      }
      if (fVar39 != 5.60519e-45) {
LAB_1094dd260:
        pfVar12 = (float *)&UNK_10f56fd45;
        func_0x000105688514();
        *(float **)((long)register0x00000008 + -0x230) = param_2;
        *(float **)((long)register0x00000008 + -0x228) = pfVar14;
        *(undefined1 **)((long)register0x00000008 + -0x220) = puVar24;
        *(code **)((long)register0x00000008 + -0x218) = FUN_1094dd26c;
        if (*(char *)(pfVar12 + 0x92) == '\x01') {
          FUN_1094ddaa0();
        }
        else {
          FUN_1094df9ec();
          *(undefined1 *)(pfVar12 + 0x92) = 1;
        }
        return pfVar12;
      }
      plVar23 = *(long **)(param_2 + 0x14);
      puVar9 = (undefined1 *)((long)register0x00000008 + -0x240);
      *(ulong *)((long)register0x00000008 + -0x1e0) = unaff_d9;
      *(undefined8 *)((long)register0x00000008 + -0x1d8) = unaff_d8;
      *(float **)((long)register0x00000008 + -0x1d0) = unaff_x26;
      *(float **)((long)register0x00000008 + -0x1c8) = unaff_x25;
      *(float **)((long)register0x00000008 + -0x1c0) = unaff_x24;
      *(float **)((long)register0x00000008 + -0x1b8) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x1b0) =
           *(undefined8 *)((long)register0x00000008 + -0x1b0);
      *(undefined8 *)((long)register0x00000008 + -0x1a8) =
           *(undefined8 *)((long)register0x00000008 + -0x1a8);
      *(undefined8 *)((long)register0x00000008 + -0x1a0) =
           *(undefined8 *)((long)register0x00000008 + -0x1a0);
      *(undefined8 *)((long)register0x00000008 + -0x198) =
           *(undefined8 *)((long)register0x00000008 + -0x198);
      *(undefined8 *)((long)register0x00000008 + -400) =
           *(undefined8 *)((long)register0x00000008 + -400);
      *(undefined8 *)((long)register0x00000008 + -0x188) =
           *(undefined8 *)((long)register0x00000008 + -0x188);
      puVar24 = (undefined1 *)((long)register0x00000008 + -400);
      pfVar12 = pfVar14;
      if (plVar23 != (long *)0x0) {
        puVar22 = &UNK_10dd5b8f9;
        do {
          plVar15 = plVar23 + 2;
          pfVar12 = pfVar14 + 0x32;
          FUN_1094e1944(pfVar12,plVar15);
          if (pfVar12 == (float *)0x0) {
            *(long **)((long)register0x00000008 + -0x200) = plVar15;
            pfVar12 = pfVar14 + 0x32;
            FUN_1094e1a28(pfVar12,plVar15,&UNK_10dd5b8f9,
                          (undefined1 *)((long)register0x00000008 + -0x200),
                          (undefined1 *)((long)register0x00000008 + -0x220));
            *(long *)(pfVar12 + 10) = plVar23[5];
            lVar21 = plVar23[6];
            pfVar12[0xe] = *(float *)(plVar23 + 7);
            *(long *)(pfVar12 + 0xc) = lVar21;
          }
          else {
            pfVar12 = pfVar14 + 0x32;
            plVar13 = plVar15;
            func_0x0001094e1d64();
            if (pfVar12 == (float *)0x0) {
              pfVar12 = (float *)&UNK_10f639994;
              pcVar25 = FUN_1094dc864;
              FUN_109262df8();
code_r0x0001094dc864:
              pfVar11 = pfVar12;
              if (plVar13 != (long *)0x0) {
                *(long **)(puVar9 + -0x30) = plVar15;
                *(undefined **)(puVar9 + -0x28) = puVar22;
                *(float **)(puVar9 + -0x20) = pfVar14;
                *(long **)(puVar9 + -0x18) = plVar23;
                *(undefined1 **)(puVar9 + -0x10) = puVar24;
                *(code **)(puVar9 + -8) = pcVar25;
                do {
                  plVar23 = plVar13 + 2;
                  pfVar11 = pfVar12 + 0x50;
                  func_0x0001094e1e48(pfVar11,plVar23);
                  if (pfVar11 == (float *)0x0) {
                    *(long **)(puVar9 + -0x50) = plVar23;
                    pfVar11 = pfVar12 + 0x50;
                    FUN_1094da208(pfVar11,plVar23,&UNK_10dd5b8f9,puVar9 + -0x50,puVar9 + -0x70);
                    *(long *)(pfVar11 + 10) = plVar13[5];
                    pfVar11[0xc] = *(float *)(plVar13 + 6);
                  }
                  else {
                    *(long **)(puVar9 + -0x50) = plVar23;
                    pfVar14 = pfVar12 + 0x50;
                    FUN_1094da208(pfVar14,plVar23,&UNK_10dd5b8f9,puVar9 + -0x50,puVar9 + -0x70);
                    fVar39 = pfVar14[0xc];
                    fVar40 = *(float *)(plVar13 + 6);
                    lVar21 = plVar13[5];
                    *(double *)(puVar9 + -0x68) = (double)(float)((ulong)lVar21 >> 0x20);
                    *(double *)(puVar9 + -0x70) = (double)(float)lVar21;
                    *(double *)(puVar9 + -0x60) = (double)fVar40;
                    *(undefined8 *)(puVar9 + -0x58) = 0;
                    lVar21 = *(long *)(pfVar14 + 10);
                    *(double *)(puVar9 + -0x88) = (double)(float)((ulong)lVar21 >> 0x20);
                    *(double *)(puVar9 + -0x90) = (double)(float)lVar21;
                    *(double *)(puVar9 + -0x80) = (double)fVar39;
                    *(undefined8 *)(puVar9 + -0x78) = 0;
                    pfVar11 = (float *)(puVar9 + -0x50);
                    FUN_1094dc5f8(CONCAT17(in_register_00005007,
                                           CONCAT16(in_register_00005006,
                                                    CONCAT15(in_register_00005005,
                                                             CONCAT14(in_register_00005004,
                                                                      CONCAT13(in_register_00005003,
                                                                               CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))),
                                  pfVar12[0xc1],pfVar11,puVar9 + -0x70,puVar9 + -0x90);
                    dVar6 = *(double *)(puVar9 + -0x40);
                    *(long *)(pfVar14 + 10) =
                         CONCAT44((float)*(double *)(puVar9 + -0x48),
                                  (float)*(double *)(puVar9 + -0x50));
                    pfVar14[0xc] = (float)dVar6;
                  }
                  plVar13 = (long *)*plVar13;
                } while (plVar13 != (long *)0x0);
              }
              return pfVar11;
            }
            lVar21 = plVar23[5];
            *(double *)((long)register0x00000008 + -0x218) = (double)(float)((ulong)lVar21 >> 0x20);
            *(double *)((long)register0x00000008 + -0x220) = (double)(float)lVar21;
            *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
            lVar21 = *(long *)(pfVar12 + 10);
            *(double *)((long)register0x00000008 + -0x238) = (double)(float)((ulong)lVar21 >> 0x20);
            *(double *)((long)register0x00000008 + -0x240) = (double)(float)lVar21;
            *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
            FUN_1094dc5f8(CONCAT17(in_register_00005007,
                                   CONCAT16(in_register_00005006,
                                            CONCAT15(in_register_00005005,
                                                     CONCAT14(in_register_00005004,
                                                              CONCAT13(in_register_00005003,
                                                                       CONCAT12(in_register_00005002
                                                                                ,CONCAT11(
                                                  in_register_00005001,in_b0))))))),pfVar14[0xc1],
                          (undefined1 *)((long)register0x00000008 + -0x200),
                          (undefined1 *)((long)register0x00000008 + -0x220),
                          (undefined1 *)((long)register0x00000008 + -0x240));
            uVar26 = *(undefined8 *)((long)register0x00000008 + -0x1f8);
            auVar3[9] = (char)((ulong)uVar26 >> 8);
            auVar3._0_9_ = *(unkbyte9 *)((long)register0x00000008 + -0x200);
            auVar3[10] = (char)((ulong)uVar26 >> 0x10);
            auVar3[0xb] = (char)((ulong)uVar26 >> 0x18);
            auVar3[0xc] = (char)((ulong)uVar26 >> 0x20);
            auVar3[0xd] = (char)((ulong)uVar26 >> 0x28);
            auVar3[0xe] = (char)((ulong)uVar26 >> 0x30);
            auVar3[0xf] = (char)((ulong)uVar26 >> 0x38);
            fVar39 = (float)auVar3._8_8_;
            in_register_00005004 = SUB41(fVar39,0);
            in_register_00005005 = (undefined1)((uint)fVar39 >> 8);
            in_register_00005006 = (undefined1)((uint)fVar39 >> 0x10);
            in_register_00005007 = (undefined1)((uint)fVar39 >> 0x18);
            *(long *)(pfVar12 + 10) =
                 CONCAT17(in_register_00005007,
                          CONCAT16(in_register_00005006,
                                   CONCAT15(in_register_00005005,
                                            CONCAT14(in_register_00005004,
                                                     (float)(double)*(unkbyte9 *)
                                                                     ((long)register0x00000008 +
                                                                     -0x200)))));
            fVar39 = *(float *)(plVar23 + 6);
            *(long **)((long)register0x00000008 + -0x200) = plVar15;
            pfVar12 = pfVar14 + 0x32;
            FUN_1094e1a28(pfVar12,plVar15,&UNK_10dd5b8f9,
                          (undefined1 *)((long)register0x00000008 + -0x200),
                          (undefined1 *)((long)register0x00000008 + -0x220));
            pfVar12[0xc] = fVar39;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      return pfVar12;
    }
    if ((int)fVar39 - 7U < 3) {
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -400);
      unaff_x30 = *(code **)((long)register0x00000008 + -0x188);
      unaff_x20 = *(float **)((long)register0x00000008 + -0x1a0);
      unaff_x19 = *(float **)((long)register0x00000008 + -0x198);
      unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x1b0);
      unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x1a8);
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x180);
      param_1 = pfVar14;
    }
    else {
      if (fVar39 == 7.00649e-45) {
        plVar13 = *(long **)(param_2 + 0x32);
        puVar24 = *(undefined1 **)((long)register0x00000008 + -400);
        pcVar25 = *(code **)((long)register0x00000008 + -0x188);
        plVar23 = *(long **)((long)register0x00000008 + -0x198);
        plVar15 = *(long **)((long)register0x00000008 + -0x1b0);
        puVar22 = *(undefined **)((long)register0x00000008 + -0x1a8);
        pfVar12 = pfVar14;
        pfVar14 = *(float **)((long)register0x00000008 + -0x1a0);
        goto code_r0x0001094dc864;
      }
      if (fVar39 != 8.40779e-45) goto LAB_1094dd260;
      unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x1b0);
      unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x1a8);
      *(undefined8 *)((long)register0x00000008 + -0x1a0) =
           *(undefined8 *)((long)register0x00000008 + -0x1a0);
      *(undefined8 *)((long)register0x00000008 + -0x198) =
           *(undefined8 *)((long)register0x00000008 + -0x198);
      *(undefined8 *)((long)register0x00000008 + -400) =
           *(undefined8 *)((long)register0x00000008 + -400);
      *(undefined8 *)((long)register0x00000008 + -0x188) =
           *(undefined8 *)((long)register0x00000008 + -0x188);
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -400);
      if (*(char *)(param_2 + 0x85) == *(char *)(pfVar14 + 0xa7)) {
        pfVar12 = pfVar14;
        if (((*(char *)(param_2 + 0x85) != '\0') && (*(char *)(pfVar14 + 0x9f) == '\x01')) &&
           (((uint)param_2[0x7d] & 1) != 0)) {
          *(double *)((long)register0x00000008 + -0x1e0) = (double)param_2[0x7c];
          *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
          *(double *)((long)register0x00000008 + -0x200) = (double)pfVar14[0x9e];
          *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
          pfVar12 = (float *)((long)register0x00000008 + -0x1c0);
          FUN_1094dc5f8(CONCAT17(in_register_00005007,
                                 CONCAT16(in_register_00005006,
                                          CONCAT15(in_register_00005005,
                                                   CONCAT14(in_register_00005004,
                                                            CONCAT13(in_register_00005003,
                                                                     CONCAT12(in_register_00005002,
                                                                              CONCAT11(
                                                  in_register_00005001,in_b0))))))),pfVar14[0xc1],
                        pfVar12,(undefined1 *)((long)register0x00000008 + -0x1e0),
                        (undefined1 *)((long)register0x00000008 + -0x200));
          pfVar14[0x9e] = (float)*(double *)((long)register0x00000008 + -0x1c0);
        }
        return pfVar12;
      }
      unaff_x19 = (float *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC1EPKc();
      unaff_x20 = unaff_x19;
      param_2 = (float *)PTR___ZTISt13runtime_error_110346a40;
      param_3 = (long *)PTR___ZNSt13runtime_errorD1Ev_1103461d8;
      ___cxa_throw();
      ___cxa_free_exception(unaff_x19);
      unaff_x30 = FUN_1094dca50;
      param_1 = unaff_x20;
      __Unwind_Resume();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x200);
    }
  } while( true );
}



/* Entry: 1094dd04c; end: 1094dd26b;  */

/* WARNING: Possible PIC construction at 0x0001094dd1d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001094dd1d4) */
/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001094dd118 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

float * FUN_1094dd04c(float *param_1,float *param_2,long *param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  double dVar6;
  long lVar7;
  undefined1 *puVar8;
  bool bVar9;
  float *pfVar10;
  long *plVar11;
  float *pfVar12;
  long *plVar13;
  float *pfVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  float *unaff_x19;
  long unaff_x20;
  undefined *puVar19;
  undefined8 uVar20;
  float *unaff_x21;
  float *unaff_x22;
  float *unaff_x23;
  float *unaff_x24;
  float *unaff_x25;
  float *unaff_x26;
  long *plVar21;
  undefined8 unaff_x27;
  ulong unaff_x28;
  undefined1 *puVar22;
  undefined1 *unaff_x29;
  code *pcVar23;
  code *unaff_x30;
  undefined8 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 in_b0;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 in_register_00005001;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 in_register_00005002;
  undefined1 uVar31;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 uVar32;
  long lVar33;
  undefined8 unaff_d8;
  float fVar34;
  ulong unaff_d9;
  float fVar35;
  ulong unaff_d10;
  float fVar36;
  ulong unaff_d11;
  float fVar37;
  ulong unaff_d12;
  float fVar38;
  ulong unaff_d13;
  float fVar39;
  ulong unaff_d14;
  undefined8 unaff_d15;
  
  while( true ) {
    puVar8 = (undefined1 *)((long)register0x00000008 + -0x90);
    *(float **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(float **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar22 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (((uint)param_1[0xb4] & 1) == 0) {
      pfVar12 = param_1 + 0x22;
      FUN_1094dd26c(pfVar12,param_2);
      if ((((param_1[0xb8] == 8.40779e-45 || param_1[0xb8] == 1.4013e-45) &&
           (*(char *)(param_1 + 0xa7) == '\x01')) && (*(char *)(param_1 + 0xa1) == '\x01')) &&
         (*(char *)(param_1 + 0x9f) == '\x01')) {
        *(double *)((long)register0x00000008 + -0x70) = (double)param_1[0x9e];
        *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
        *(double *)((long)register0x00000008 + -0x90) = (double)param_1[0xa0];
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        pfVar12 = (float *)((long)register0x00000008 + -0x50);
        FUN_1094dc5f8(CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))),param_1[0xc1],
                      pfVar12,(undefined1 *)((long)register0x00000008 + -0x70),
                      (undefined1 *)((long)register0x00000008 + -0x90));
        param_1[0x9e] = (float)*(double *)((long)register0x00000008 + -0x50);
      }
      return pfVar12;
    }
    fVar37 = param_1[0xb8];
    if ((int)fVar37 < 5) break;
    if ((int)fVar37 - 7U < 3) {
      puVar22 = *(undefined1 **)((long)register0x00000008 + -0x10);
      pcVar23 = *(code **)((long)register0x00000008 + -8);
      pfVar12 = *(float **)((long)register0x00000008 + -0x20);
      pfVar14 = *(float **)((long)register0x00000008 + -0x18);
      uVar24 = *(undefined8 *)((long)register0x00000008 + -0x30);
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x28);
      puVar8 = (undefined1 *)register0x00000008;
      unaff_x21 = param_1;
    }
    else {
      if (fVar37 == 7.00649e-45) {
        plVar11 = *(long **)(param_2 + 0x32);
        puVar22 = *(undefined1 **)((long)register0x00000008 + -0x10);
        pcVar23 = *(code **)((long)register0x00000008 + -8);
        plVar21 = *(long **)((long)register0x00000008 + -0x18);
        plVar13 = *(long **)((long)register0x00000008 + -0x30);
        puVar19 = *(undefined **)((long)register0x00000008 + -0x28);
        puVar8 = (undefined1 *)register0x00000008;
        pfVar12 = param_1;
        param_1 = *(float **)((long)register0x00000008 + -0x20);
        goto code_r0x0001094dc864;
      }
      if (fVar37 != 8.40779e-45) goto LAB_1094dd260;
      uVar24 = *(undefined8 *)((long)register0x00000008 + -0x30);
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x28);
      puVar8 = (undefined1 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      puVar22 = (undefined1 *)((long)register0x00000008 + -0x10);
      if (*(char *)(param_2 + 0x85) == *(char *)(param_1 + 0xa7)) {
        pfVar12 = param_1;
        if (((*(char *)(param_2 + 0x85) != '\0') && (*(char *)(param_1 + 0x9f) == '\x01')) &&
           (((uint)param_2[0x7d] & 1) != 0)) {
          *(double *)((long)register0x00000008 + -0x60) = (double)param_2[0x7c];
          *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
          *(double *)((long)register0x00000008 + -0x80) = (double)param_1[0x9e];
          *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
          pfVar12 = (float *)((long)register0x00000008 + -0x40);
          FUN_1094dc5f8(CONCAT17(in_register_00005007,
                                 CONCAT16(in_register_00005006,
                                          CONCAT15(in_register_00005005,
                                                   CONCAT14(in_register_00005004,
                                                            CONCAT13(in_register_00005003,
                                                                     CONCAT12(in_register_00005002,
                                                                              CONCAT11(
                                                  in_register_00005001,in_b0))))))),param_1[0xc1],
                        pfVar12,(undefined1 *)((long)register0x00000008 + -0x60),
                        (undefined1 *)((long)register0x00000008 + -0x80));
          param_1[0x9e] = (float)*(double *)((long)register0x00000008 + -0x40);
        }
        return pfVar12;
      }
      pfVar14 = (float *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC1EPKc();
      pfVar12 = pfVar14;
      param_2 = (float *)PTR___ZTISt13runtime_error_110346a40;
      param_3 = (long *)PTR___ZNSt13runtime_errorD1Ev_1103461d8;
      ___cxa_throw();
      ___cxa_free_exception(pfVar14);
      pcVar23 = FUN_1094dca50;
      unaff_x21 = pfVar12;
      __Unwind_Resume();
    }
    register0x00000008 = (BADSPACEBASE *)(puVar8 + -0x180);
    *(undefined8 *)(puVar8 + -0xa0) = unaff_d15;
    *(ulong *)(puVar8 + -0x98) = unaff_d14;
    *(ulong *)(puVar8 + -0x90) = unaff_d13;
    *(ulong *)(puVar8 + -0x88) = unaff_d12;
    *(ulong *)(puVar8 + -0x80) = unaff_d11;
    *(ulong *)(puVar8 + -0x78) = unaff_d10;
    *(ulong *)(puVar8 + -0x70) = unaff_d9;
    *(undefined8 *)(puVar8 + -0x68) = unaff_d8;
    *(ulong *)(puVar8 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar8 + -0x58) = unaff_x27;
    *(float **)(puVar8 + -0x50) = unaff_x26;
    *(float **)(puVar8 + -0x48) = unaff_x25;
    *(float **)(puVar8 + -0x40) = unaff_x24;
    *(float **)(puVar8 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar8 + -0x30) = uVar24;
    *(undefined8 *)(puVar8 + -0x28) = uVar20;
    *(float **)(puVar8 + -0x20) = pfVar12;
    *(float **)(puVar8 + -0x18) = pfVar14;
    *(undefined1 **)(puVar8 + -0x10) = puVar22;
    *(code **)(puVar8 + -8) = pcVar23;
    unaff_x29 = puVar8 + -0x10;
    *(float *)(puVar8 + -0x16c) = fVar37;
    *(undefined8 *)(puVar8 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    bVar9 = (char)param_3[0xb] != '\x01';
    *(long **)(puVar8 + -0x168) = param_3;
    if (bVar9) {
      uVar26 = 0;
      unaff_x19 = unaff_x21;
    }
    else {
      unaff_x19 = (float *)(param_3 + 3);
      FUN_1094f5708(puVar8 + -0x130);
      uVar26 = puVar8[-0x130];
      *(undefined8 *)(puVar8 + -0xe8) = *(undefined8 *)(puVar8 + -0x127);
      *(undefined8 *)(puVar8 + -0xf0) = *(undefined8 *)(puVar8 + -0x12f);
      *(undefined8 *)(puVar8 + -0xd8) = *(undefined8 *)(puVar8 + -0x117);
      *(undefined8 *)(puVar8 + -0xe0) = *(undefined8 *)(puVar8 + -0x11f);
      *(undefined8 *)(puVar8 + -200) = *(undefined8 *)(puVar8 + -0x107);
      *(undefined8 *)(puVar8 + -0xd0) = *(undefined8 *)(puVar8 + -0x10f);
      *(undefined8 *)(puVar8 + -0xb9) = *(undefined8 *)(puVar8 + -0xf8);
      *(undefined8 *)(puVar8 + -0xc1) = *(undefined8 *)(puVar8 + -0x100);
    }
    unaff_x22 = unaff_x21 + 2;
    *(undefined1 *)unaff_x22 = uVar26;
    uVar24 = *(undefined8 *)(puVar8 + -0xf0);
    uVar32 = *(undefined8 *)(puVar8 + -0xd8);
    uVar20 = *(undefined8 *)(puVar8 + -0xe0);
    *(undefined8 *)((long)unaff_x21 + 0x11) = *(undefined8 *)(puVar8 + -0xe8);
    *(undefined8 *)((long)unaff_x21 + 9) = uVar24;
    *(undefined8 *)((long)unaff_x21 + 0x21) = uVar32;
    *(undefined8 *)((long)unaff_x21 + 0x19) = uVar20;
    uVar24 = *(undefined8 *)(puVar8 + -0xd0);
    *(undefined8 *)((long)unaff_x21 + 0x31) = *(undefined8 *)(puVar8 + -200);
    *(undefined8 *)((long)unaff_x21 + 0x29) = uVar24;
    lVar33 = *(long *)(puVar8 + -0xc1);
    *(long *)(unaff_x21 + 0x10) = *(long *)(puVar8 + -0xb9);
    *(long *)(unaff_x21 + 0xe) = lVar33;
    *(bool *)(unaff_x21 + 0x12) = !bVar9;
    unaff_x23 = unaff_x21 + 0x14;
    if (((uint)unaff_x21[0x1e] & 1) == 0) {
      unaff_x21[0x16] = 0.0;
      unaff_x21[0x17] = 0.0;
      unaff_x23[0] = 0.0;
      unaff_x23[1] = 0.0;
      unaff_x21[0x1a] = 0.0;
      unaff_x21[0x1b] = 0.0;
      unaff_x21[0x18] = 0.0;
      unaff_x21[0x19] = 0.0;
      unaff_x21[0x1c] = 1.0;
      *(undefined1 *)(unaff_x21 + 0x1e) = 1;
      unaff_x19 = unaff_x23;
      FUN_1094dfd00(unaff_x23,(long)(float)*(ulong *)(param_2 + 0x2a));
    }
    plVar21 = *(long **)(param_2 + 0x28);
    unaff_x20 = *(long *)(puVar8 + -0x168);
    unaff_x24 = param_2;
    if (plVar21 != (long *)0x0) {
      uVar1 = *(uint *)(puVar8 + -0x16c);
      unaff_x28 = (ulong)(uVar1 & 0xfffffffe);
      *(float **)(puVar8 + -0x180) = unaff_x21 + 0x18;
      *(undefined1 **)(puVar8 + -0x178) = puVar8 + -0x128;
      unaff_d8 = 0x3f800000;
      do {
        unaff_x26 = (float *)(plVar21 + 5);
        unaff_x25 = unaff_x23;
        func_0x0001094e1f2c(unaff_x23,plVar21 + 2);
        if (unaff_x25 == (float *)0x0) {
          if (*(char *)(unaff_x21 + 0x12) == '\x01') {
            FUN_1094cf978(puVar8 + -0xf0,unaff_x22,unaff_x26);
          }
          else {
            *(long *)(puVar8 + -0xf0) = plVar21[5];
            *(int *)(puVar8 + -0xe8) = (int)plVar21[6];
          }
          unaff_x25 = unaff_x23;
          func_0x000107c31944(unaff_x23,plVar21 + 2);
          pfVar12 = *(float **)(unaff_x21 + 0x16);
          if (pfVar12 != (float *)0x0) {
            unaff_x26 = (float *)((long)pfVar12 + -1);
            if (((ulong)pfVar12 & (ulong)unaff_x26) == 0) {
              unaff_x24 = (float *)((ulong)unaff_x26 & (ulong)unaff_x25);
            }
            else {
              unaff_x24 = unaff_x25;
              if (pfVar12 <= unaff_x25) {
                uVar15 = 0;
                if (pfVar12 != (float *)0x0) {
                  uVar15 = (ulong)unaff_x25 / (ulong)pfVar12;
                }
                unaff_x24 = (float *)((long)unaff_x25 - uVar15 * (long)pfVar12);
              }
            }
            plVar13 = *(long **)(*(long *)unaff_x23 + (long)unaff_x24 * 8);
            if (plVar13 != (long *)0x0) {
              for (plVar13 = (long *)*plVar13; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
                pfVar14 = (float *)plVar13[1];
                if (pfVar14 == unaff_x25) {
                  param_3 = plVar21 + 2;
                  unaff_x19 = unaff_x23;
                  func_0x000104c4fbc4(unaff_x23,plVar13 + 2);
                  if (((ulong)unaff_x19 & 1) != 0) goto LAB_1094dcfb8;
                }
                else {
                  if (((ulong)pfVar12 & (ulong)unaff_x26) == 0) {
                    pfVar14 = (float *)((ulong)pfVar14 & (ulong)unaff_x26);
                  }
                  else if (pfVar12 <= pfVar14) {
                    uVar15 = 0;
                    if (pfVar12 != (float *)0x0) {
                      uVar15 = (ulong)pfVar14 / (ulong)pfVar12;
                    }
                    pfVar14 = (float *)((long)pfVar14 - uVar15 * (long)pfVar12);
                  }
                  if (pfVar14 != unaff_x24) break;
                }
              }
            }
          }
          unaff_x26 = (float *)0x38;
          __Znwm();
          *(float **)(puVar8 + -0x130) = unaff_x26;
          *(float **)(puVar8 + -0x128) = unaff_x23;
          *(undefined8 *)(puVar8 + -0x120) = 0;
          unaff_x26[0] = 0.0;
          unaff_x26[1] = 0.0;
          *(float **)(unaff_x26 + 2) = unaff_x25;
          if (*(char *)((long)plVar21 + 0x27) < '\0') {
            param_3 = (long *)plVar21[3];
            unaff_x19 = unaff_x26 + 4;
            func_0x000107c3192c(unaff_x19,plVar21[2]);
          }
          else {
            lVar7 = plVar21[3];
            lVar33 = plVar21[2];
            *(long *)(unaff_x26 + 8) = plVar21[4];
            *(long *)(unaff_x26 + 6) = lVar7;
            *(long *)(unaff_x26 + 4) = lVar33;
            unaff_x19 = unaff_x26;
          }
          *(long *)(unaff_x26 + 10) = *(long *)(puVar8 + -0xf0);
          unaff_x26[0xc] = *(float *)(puVar8 + -0xe8);
          puVar8[-0x120] = 1;
          if ((pfVar12 == (float *)0x0) ||
             (unaff_x21[0x1c] * (float)pfVar12 < (float)(*(long *)(unaff_x21 + 0x1a) + 1))) {
            uVar15 = 1;
            if ((float *)0x2 < pfVar12) {
              uVar15 = (ulong)(((ulong)pfVar12 & (long)pfVar12 - 1U) != 0);
            }
            uVar15 = uVar15 | (long)pfVar12 << 1;
            uVar17 = (ulong)((float)(*(long *)(unaff_x21 + 0x1a) + 1) / unaff_x21[0x1c]);
            if (uVar15 <= uVar17) {
              uVar15 = uVar17;
            }
            unaff_x19 = unaff_x23;
            FUN_1094dfd00(unaff_x23,uVar15);
            pfVar12 = *(float **)(unaff_x21 + 0x16);
            if (((ulong)pfVar12 & (long)pfVar12 - 1U) == 0) {
              unaff_x24 = (float *)((long)pfVar12 - 1U & (ulong)unaff_x25);
            }
            else {
              unaff_x24 = unaff_x25;
              if (pfVar12 <= unaff_x25) {
                uVar15 = 0;
                if (pfVar12 != (float *)0x0) {
                  uVar15 = (ulong)unaff_x25 / (ulong)pfVar12;
                }
                unaff_x24 = (float *)((long)unaff_x25 - uVar15 * (long)pfVar12);
              }
            }
          }
          lVar33 = *(long *)unaff_x23;
          puVar18 = *(undefined8 **)(lVar33 + (long)unaff_x24 * 8);
          puVar16 = *(undefined8 **)(puVar8 + -0x130);
          if (puVar18 == (undefined8 *)0x0) {
            puVar18 = *(undefined8 **)(puVar8 + -0x180);
            *puVar16 = *puVar18;
            *puVar18 = puVar16;
            *(undefined8 **)(lVar33 + (long)unaff_x24 * 8) = puVar18;
            lVar33 = **(long **)(puVar8 + -0x130);
            if (lVar33 != 0) {
              pfVar14 = *(float **)(lVar33 + 8);
              if (((ulong)pfVar12 & (long)pfVar12 - 1U) == 0) {
                pfVar14 = (float *)((ulong)pfVar14 & (long)pfVar12 - 1U);
              }
              else if (pfVar12 <= pfVar14) {
                uVar15 = 0;
                if (pfVar12 != (float *)0x0) {
                  uVar15 = (ulong)pfVar14 / (ulong)pfVar12;
                }
                pfVar14 = (float *)((long)pfVar14 - uVar15 * (long)pfVar12);
              }
              *(long **)(*(long *)unaff_x23 + (long)pfVar14 * 8) = *(long **)(puVar8 + -0x130);
            }
          }
          else {
            *puVar16 = *puVar18;
            *puVar18 = puVar16;
          }
          *(long *)(unaff_x21 + 0x1a) = *(long *)(unaff_x21 + 0x1a) + 1;
LAB_1094dcfb8:
          unaff_x20 = *(long *)(puVar8 + -0x168);
        }
        else {
          unaff_x19 = unaff_x25;
          if ((uVar1 & 0xfffffffe) == 8) {
            unaff_x26 = unaff_x25 + 10;
            if (*(char *)(unaff_x20 + 0x58) == '\x01') {
              unaff_x19 = (float *)(unaff_x20 + 0x18);
              FUN_1094cf978(puVar8 + -0x130,unaff_x19,unaff_x26);
              fVar36 = *(float *)(puVar8 + -300);
              pfVar12 = *(float **)(puVar8 + -0x178);
              pfVar14 = (float *)(puVar8 + -0x130);
            }
            else {
              fVar36 = unaff_x25[0xb];
              pfVar12 = unaff_x25 + 0xc;
              pfVar14 = unaff_x26;
            }
            fVar38 = *pfVar14;
            unaff_d13 = (ulong)(uint)fVar38;
            fVar39 = *pfVar12;
            unaff_d14 = (ulong)(uint)fVar39;
            unaff_x25[10] = fVar38;
            unaff_x25[0xb] = fVar36;
            unaff_x25[0xc] = fVar39;
            fVar37 = unaff_x21[0xc1];
            unaff_d12 = (ulong)(uint)fVar37;
            fVar34 = *(float *)(plVar21 + 5);
            fVar35 = *(float *)((long)plVar21 + 0x2c);
            uVar26 = (undefined1)((uint)fVar37 >> 8);
            uVar28 = (undefined1)((uint)fVar37 >> 0x10);
            uVar30 = (undefined1)((uint)fVar37 >> 0x18);
            if (*(int *)(puVar8 + -0x16c) == 8) {
              fVar39 = -SQRT((fVar36 - fVar35) * (fVar36 - fVar35) +
                             (fVar38 - fVar34) * (fVar38 - fVar34)) / unaff_x21[0xc0];
              uVar25 = SUB41(fVar39,0);
              uVar27 = (undefined1)((uint)fVar39 >> 8);
              uVar29 = (undefined1)((uint)fVar39 >> 0x10);
              uVar31 = (undefined1)((uint)fVar39 >> 0x18);
              _expf();
              fVar39 = 1.0 - (float)CONCAT13(uVar31,CONCAT12(uVar29,CONCAT11(uVar27,uVar25)));
              uVar25 = SUB41(fVar39,0);
              uVar27 = (char)((uint)fVar39 >> 8);
              uVar29 = (char)((uint)fVar39 >> 0x10);
              uVar31 = (char)((uint)fVar39 >> 0x18);
              if (fVar39 <= fVar37) {
                uVar25 = SUB41(fVar37,0);
                uVar27 = uVar26;
                uVar29 = uVar28;
                uVar31 = uVar30;
              }
              fVar37 = 1.0 - (float)CONCAT13(uVar31,CONCAT12(uVar29,CONCAT11(uVar27,uVar25)));
              fVar34 = fVar34 * (float)CONCAT13(uVar31,CONCAT12(uVar29,CONCAT11(uVar27,uVar25))) +
                       fVar38 * fVar37;
              fVar35 = fVar35 * (float)CONCAT13(uVar31,CONCAT12(uVar29,CONCAT11(uVar27,uVar25))) +
                       fVar36 * fVar37;
              uVar5 = (undefined4)plVar21[6];
              in_b0 = (undefined1)uVar5;
              in_register_00005001 = (undefined1)((uint)uVar5 >> 8);
              in_register_00005002 = (undefined1)((uint)uVar5 >> 0x10);
              in_register_00005003 = (undefined1)((uint)uVar5 >> 0x18);
            }
            else {
              fVar36 = *(float *)(plVar21 + 6);
              fVar38 = -ABS(fVar39 - fVar36) / unaff_x21[0xc0];
              uVar25 = SUB41(fVar38,0);
              uVar27 = (undefined1)((uint)fVar38 >> 8);
              uVar29 = (undefined1)((uint)fVar38 >> 0x10);
              uVar31 = (undefined1)((uint)fVar38 >> 0x18);
              _expf();
              fVar38 = 1.0 - (float)CONCAT13(uVar31,CONCAT12(uVar29,CONCAT11(uVar27,uVar25)));
              uVar25 = SUB41(fVar38,0);
              uVar27 = (char)((uint)fVar38 >> 8);
              uVar29 = (char)((uint)fVar38 >> 0x10);
              uVar31 = (char)((uint)fVar38 >> 0x18);
              if (fVar38 <= fVar37) {
                uVar25 = SUB41(fVar37,0);
                uVar27 = uVar26;
                uVar29 = uVar28;
                uVar31 = uVar30;
              }
              fVar37 = fVar39 * (1.0 - (float)CONCAT13(uVar31,CONCAT12(uVar29,CONCAT11(uVar27,uVar25
                                                                                      )))) +
                       (float)CONCAT13(uVar31,CONCAT12(uVar29,CONCAT11(uVar27,uVar25))) * fVar36;
              in_b0 = SUB41(fVar37,0);
              in_register_00005001 = (undefined1)((uint)fVar37 >> 8);
              in_register_00005002 = (undefined1)((uint)fVar37 >> 0x10);
              in_register_00005003 = (undefined1)((uint)fVar37 >> 0x18);
            }
            unaff_x25[10] = fVar34;
            unaff_x25[0xb] = fVar35;
            unaff_x25[0xc] =
                 (float)CONCAT13(in_register_00005003,
                                 CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))
                                );
            if (*(char *)(unaff_x21 + 0x12) == '\x01') {
              unaff_x19 = unaff_x22;
              FUN_1094cf978(puVar8 + -0x130,unaff_x22,unaff_x26);
              fVar34 = *(float *)(puVar8 + -0x130);
              fVar35 = *(float *)(puVar8 + -300);
              uVar5 = *(undefined4 *)(puVar8 + -0x128);
              in_b0 = (undefined1)uVar5;
              in_register_00005001 = (undefined1)((uint)uVar5 >> 8);
              in_register_00005002 = (undefined1)((uint)uVar5 >> 0x10);
              in_register_00005003 = (undefined1)((uint)uVar5 >> 0x18);
            }
            unaff_x25[10] = fVar34;
            unaff_x25[0xb] = fVar35;
          }
          else {
            if (*(char *)(unaff_x21 + 0x12) == '\x01') {
              unaff_x19 = unaff_x22;
              FUN_1094cf978(puVar8 + -0x130,unaff_x22,unaff_x26);
              fVar37 = *(float *)(puVar8 + -300);
              pfVar12 = *(float **)(puVar8 + -0x178);
              unaff_x26 = (float *)(puVar8 + -0x130);
            }
            else {
              fVar37 = *(float *)((long)plVar21 + 0x2c);
              pfVar12 = (float *)(plVar21 + 6);
            }
            fVar39 = *unaff_x26;
            *(undefined8 *)(puVar8 + -0x158) = 0;
            *(ulong *)(puVar8 + -0x160) = (ulong)(uint)fVar37;
            *(undefined8 *)(puVar8 + -0x148) = 0;
            *(ulong *)(puVar8 + -0x150) = (ulong)(uint)fVar39;
            fVar34 = *pfVar12;
            fVar35 = unaff_x25[0xc];
            fVar36 = unaff_x21[0xc1];
            fVar38 = unaff_x21[0xc0];
            lVar33 = *(long *)(unaff_x25 + 10);
            *(undefined8 *)(puVar8 + -0x138) = 0;
            *(long *)(puVar8 + -0x140) = lVar33;
            fVar39 = (float)lVar33 - fVar39;
            fVar37 = (float)((ulong)lVar33 >> 0x20) - fVar37;
            fVar38 = -SQRT(fVar37 * fVar37 + fVar39 * fVar39 + (fVar35 - fVar34) * (fVar35 - fVar34)
                          ) / fVar38;
            uVar26 = SUB41(fVar38,0);
            uVar28 = (undefined1)((uint)fVar38 >> 8);
            uVar30 = (undefined1)((uint)fVar38 >> 0x10);
            uVar25 = (undefined1)((uint)fVar38 >> 0x18);
            _expf();
            fVar37 = 1.0 - (float)CONCAT13(uVar25,CONCAT12(uVar30,CONCAT11(uVar28,uVar26)));
            uVar26 = SUB41(fVar37,0);
            uVar28 = (undefined1)((uint)fVar37 >> 8);
            uVar30 = (undefined1)((uint)fVar37 >> 0x10);
            uVar25 = (undefined1)((uint)fVar37 >> 0x18);
            if (fVar37 <= fVar36) {
              uVar26 = SUB41(fVar36,0);
              uVar28 = (undefined1)((uint)fVar36 >> 8);
              uVar30 = (undefined1)((uint)fVar36 >> 0x10);
              uVar25 = (undefined1)((uint)fVar36 >> 0x18);
            }
            fVar37 = (float)CONCAT13(uVar25,CONCAT12(uVar30,CONCAT11(uVar28,uVar26)));
            fVar38 = 1.0 - (float)CONCAT13(uVar25,CONCAT12(uVar30,CONCAT11(uVar28,uVar26)));
            fVar39 = fVar34 * (float)CONCAT13(uVar25,CONCAT12(uVar30,CONCAT11(uVar28,uVar26))) +
                     fVar35 * fVar38;
            in_b0 = SUB41(fVar39,0);
            in_register_00005001 = (undefined1)((uint)fVar39 >> 8);
            in_register_00005002 = (undefined1)((uint)fVar39 >> 0x10);
            in_register_00005003 = (undefined1)((uint)fVar39 >> 0x18);
            *(long *)(unaff_x25 + 10) =
                 CONCAT44((float)*(undefined8 *)(puVar8 + -0x160) * fVar37 +
                          (float)((ulong)*(undefined8 *)(puVar8 + -0x140) >> 0x20) * fVar38,
                          (float)*(undefined8 *)(puVar8 + -0x150) * fVar37 +
                          (float)*(undefined8 *)(puVar8 + -0x140) * fVar38);
          }
          unaff_d10 = (ulong)(uint)fVar35;
          unaff_d9 = (ulong)(uint)fVar34;
          unaff_d11 = (ulong)(uint)fVar36;
          unaff_x25[0xc] =
               (float)CONCAT13(in_register_00005003,
                               CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
    }
    unaff_x27 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0xb0)) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    *(undefined8 *)(puVar8 + -0x130) = 0;
    param_2 = unaff_x26;
    func_0x0001094de518(*(undefined8 *)(puVar8 + -0x178));
    unaff_x30 = FUN_1094dd04c;
    param_1 = unaff_x19;
    __Unwind_Resume();
  }
  if ((int)fVar37 < 3) {
    if (fVar37 == 1.4013e-45) {
      fVar37 = param_2[8];
      uVar26 = SUB41(fVar37,0);
      uVar28 = (undefined1)((uint)fVar37 >> 8);
      uVar30 = (undefined1)((uint)fVar37 >> 0x10);
      uVar25 = (undefined1)((uint)fVar37 >> 0x18);
      fVar37 = param_2[9];
      uVar24 = 0x1094dd1d4;
      pfVar12 = param_1;
    }
    else {
      if (fVar37 != 2.8026e-45) goto LAB_1094dd260;
      fVar37 = param_2[8];
      uVar26 = SUB41(fVar37,0);
      uVar28 = (undefined1)((uint)fVar37 >> 8);
      uVar30 = (undefined1)((uint)fVar37 >> 0x10);
      uVar25 = (undefined1)((uint)fVar37 >> 0x18);
      fVar37 = param_2[9];
      puVar22 = *(undefined1 **)((long)register0x00000008 + -0x10);
      uVar24 = *(undefined8 *)((long)register0x00000008 + -8);
      param_2 = *(float **)((long)register0x00000008 + -0x20);
      puVar8 = (undefined1 *)register0x00000008;
      pfVar12 = *(float **)((long)register0x00000008 + -0x18);
    }
    *(float **)(puVar8 + -0x20) = param_2;
    *(float **)(puVar8 + -0x18) = pfVar12;
    *(undefined1 **)(puVar8 + -0x10) = puVar22;
    *(undefined8 *)(puVar8 + -8) = uVar24;
    *(double *)(puVar8 + -0x60) =
         (double)(float)CONCAT13(uVar25,CONCAT12(uVar30,CONCAT11(uVar28,uVar26)));
    *(double *)(puVar8 + -0x58) = (double)fVar37;
    *(undefined8 *)(puVar8 + -0x50) = 0;
    *(undefined8 *)(puVar8 + -0x48) = 0;
    lVar33 = *(long *)(param_1 + 0x2a);
    *(double *)(puVar8 + -0x78) = (double)(float)((ulong)lVar33 >> 0x20);
    *(double *)(puVar8 + -0x80) = (double)(float)lVar33;
    *(undefined8 *)(puVar8 + -0x70) = 0;
    *(undefined8 *)(puVar8 + -0x68) = 0;
    pfVar12 = (float *)(puVar8 + -0x40);
    FUN_1094dc5f8(CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(uVar25,CONCAT12(uVar30,CONCAT11(
                                                  uVar28,uVar26))))))),param_1[0xc1],pfVar12,
                  puVar8 + -0x60,puVar8 + -0x80);
    uVar24 = *(undefined8 *)(puVar8 + -0x38);
    auVar2[9] = (char)((ulong)uVar24 >> 8);
    auVar2._0_9_ = *(unkbyte9 *)(puVar8 + -0x40);
    auVar2[10] = (char)((ulong)uVar24 >> 0x10);
    auVar2[0xb] = (char)((ulong)uVar24 >> 0x18);
    auVar2[0xc] = (char)((ulong)uVar24 >> 0x20);
    auVar2[0xd] = (char)((ulong)uVar24 >> 0x28);
    auVar2[0xe] = (char)((ulong)uVar24 >> 0x30);
    auVar2[0xf] = (char)((ulong)uVar24 >> 0x38);
    fVar37 = (float)auVar2._8_8_;
    *(long *)(param_1 + 0x2a) =
         CONCAT17((char)((uint)fVar37 >> 0x18),
                  CONCAT16((char)((uint)fVar37 >> 0x10),
                           CONCAT15((char)((uint)fVar37 >> 8),
                                    CONCAT14(SUB41(fVar37,0),
                                             (float)(double)*(unkbyte9 *)(puVar8 + -0x40)))));
    return pfVar12;
  }
  if (fVar37 == 4.2039e-45) {
    fVar37 = param_2[10];
    fVar38 = param_2[0xb];
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    *(double *)((long)register0x00000008 + -0x60) = (double)fVar37;
    *(double *)((long)register0x00000008 + -0x58) = (double)fVar38;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    lVar33 = *(long *)(param_1 + 0x2c);
    *(double *)((long)register0x00000008 + -0x78) = (double)(float)((ulong)lVar33 >> 0x20);
    *(double *)((long)register0x00000008 + -0x80) = (double)(float)lVar33;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    pfVar12 = (float *)((long)register0x00000008 + -0x40);
    FUN_1094dc5f8(CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0))))))),param_1[0xc1],
                  pfVar12,(undefined1 *)((long)register0x00000008 + -0x60),
                  (undefined1 *)((long)register0x00000008 + -0x80));
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x38);
    auVar4[9] = (char)((ulong)uVar24 >> 8);
    auVar4._0_9_ = *(unkbyte9 *)((long)register0x00000008 + -0x40);
    auVar4[10] = (char)((ulong)uVar24 >> 0x10);
    auVar4[0xb] = (char)((ulong)uVar24 >> 0x18);
    auVar4[0xc] = (char)((ulong)uVar24 >> 0x20);
    auVar4[0xd] = (char)((ulong)uVar24 >> 0x28);
    auVar4[0xe] = (char)((ulong)uVar24 >> 0x30);
    auVar4[0xf] = (char)((ulong)uVar24 >> 0x38);
    fVar37 = (float)auVar4._8_8_;
    *(long *)(param_1 + 0x2c) =
         CONCAT17((char)((uint)fVar37 >> 0x18),
                  CONCAT16((char)((uint)fVar37 >> 0x10),
                           CONCAT15((char)((uint)fVar37 >> 8),
                                    CONCAT14(SUB41(fVar37,0),
                                             (float)(double)*(unkbyte9 *)
                                                             ((long)register0x00000008 + -0x40)))));
    return pfVar12;
  }
  if (fVar37 != 5.60519e-45) {
LAB_1094dd260:
    pfVar12 = (float *)&UNK_10f56fd45;
    func_0x000105688514();
    *(float **)((long)register0x00000008 + -0xb0) = param_2;
    *(float **)((long)register0x00000008 + -0xa8) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0xa0) = puVar22;
    *(code **)((long)register0x00000008 + -0x98) = FUN_1094dd26c;
    if (*(char *)(pfVar12 + 0x92) == '\x01') {
      FUN_1094ddaa0();
    }
    else {
      FUN_1094df9ec();
      *(undefined1 *)(pfVar12 + 0x92) = 1;
    }
    return pfVar12;
  }
  plVar21 = *(long **)(param_2 + 0x14);
  puVar8 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(ulong *)((long)register0x00000008 + -0x60) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d8;
  *(float **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(float **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(float **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(float **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  puVar22 = (undefined1 *)((long)register0x00000008 + -0x10);
  pfVar12 = param_1;
  if (plVar21 != (long *)0x0) {
    puVar19 = &UNK_10dd5b8f9;
    do {
      plVar13 = plVar21 + 2;
      pfVar12 = param_1 + 0x32;
      FUN_1094e1944(pfVar12,plVar13);
      if (pfVar12 == (float *)0x0) {
        *(long **)((long)register0x00000008 + -0x80) = plVar13;
        pfVar12 = param_1 + 0x32;
        FUN_1094e1a28(pfVar12,plVar13,&UNK_10dd5b8f9,
                      (undefined1 *)((long)register0x00000008 + -0x80),
                      (undefined1 *)((long)register0x00000008 + -0xa0));
        *(long *)(pfVar12 + 10) = plVar21[5];
        lVar33 = plVar21[6];
        pfVar12[0xe] = *(float *)(plVar21 + 7);
        *(long *)(pfVar12 + 0xc) = lVar33;
      }
      else {
        pfVar12 = param_1 + 0x32;
        plVar11 = plVar13;
        func_0x0001094e1d64();
        if (pfVar12 == (float *)0x0) {
          pfVar12 = (float *)&UNK_10f639994;
          pcVar23 = FUN_1094dc864;
          FUN_109262df8();
code_r0x0001094dc864:
          pfVar14 = pfVar12;
          if (plVar11 != (long *)0x0) {
            *(long **)(puVar8 + -0x30) = plVar13;
            *(undefined **)(puVar8 + -0x28) = puVar19;
            *(float **)(puVar8 + -0x20) = param_1;
            *(long **)(puVar8 + -0x18) = plVar21;
            *(undefined1 **)(puVar8 + -0x10) = puVar22;
            *(code **)(puVar8 + -8) = pcVar23;
            do {
              plVar21 = plVar11 + 2;
              pfVar14 = pfVar12 + 0x50;
              func_0x0001094e1e48(pfVar14,plVar21);
              if (pfVar14 == (float *)0x0) {
                *(long **)(puVar8 + -0x50) = plVar21;
                pfVar14 = pfVar12 + 0x50;
                FUN_1094da208(pfVar14,plVar21,&UNK_10dd5b8f9,puVar8 + -0x50,puVar8 + -0x70);
                *(long *)(pfVar14 + 10) = plVar11[5];
                pfVar14[0xc] = *(float *)(plVar11 + 6);
              }
              else {
                *(long **)(puVar8 + -0x50) = plVar21;
                pfVar10 = pfVar12 + 0x50;
                FUN_1094da208(pfVar10,plVar21,&UNK_10dd5b8f9,puVar8 + -0x50,puVar8 + -0x70);
                fVar37 = pfVar10[0xc];
                fVar38 = *(float *)(plVar11 + 6);
                lVar33 = plVar11[5];
                *(double *)(puVar8 + -0x68) = (double)(float)((ulong)lVar33 >> 0x20);
                *(double *)(puVar8 + -0x70) = (double)(float)lVar33;
                *(double *)(puVar8 + -0x60) = (double)fVar38;
                *(undefined8 *)(puVar8 + -0x58) = 0;
                lVar33 = *(long *)(pfVar10 + 10);
                *(double *)(puVar8 + -0x88) = (double)(float)((ulong)lVar33 >> 0x20);
                *(double *)(puVar8 + -0x90) = (double)(float)lVar33;
                *(double *)(puVar8 + -0x80) = (double)fVar37;
                *(undefined8 *)(puVar8 + -0x78) = 0;
                pfVar14 = (float *)(puVar8 + -0x50);
                FUN_1094dc5f8(CONCAT17(in_register_00005007,
                                       CONCAT16(in_register_00005006,
                                                CONCAT15(in_register_00005005,
                                                         CONCAT14(in_register_00005004,
                                                                  CONCAT13(in_register_00005003,
                                                                           CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))),
                              pfVar12[0xc1],pfVar14,puVar8 + -0x70,puVar8 + -0x90);
                dVar6 = *(double *)(puVar8 + -0x40);
                *(long *)(pfVar10 + 10) =
                     CONCAT44((float)*(double *)(puVar8 + -0x48),(float)*(double *)(puVar8 + -0x50))
                ;
                pfVar10[0xc] = (float)dVar6;
              }
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
          return pfVar14;
        }
        lVar33 = plVar21[5];
        *(double *)((long)register0x00000008 + -0x98) = (double)(float)((ulong)lVar33 >> 0x20);
        *(double *)((long)register0x00000008 + -0xa0) = (double)(float)lVar33;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        lVar33 = *(long *)(pfVar12 + 10);
        *(double *)((long)register0x00000008 + -0xb8) = (double)(float)((ulong)lVar33 >> 0x20);
        *(double *)((long)register0x00000008 + -0xc0) = (double)(float)lVar33;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        FUN_1094dc5f8(CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))),param_1[0xc1],
                      (undefined1 *)((long)register0x00000008 + -0x80),
                      (undefined1 *)((long)register0x00000008 + -0xa0),
                      (undefined1 *)((long)register0x00000008 + -0xc0));
        uVar24 = *(undefined8 *)((long)register0x00000008 + -0x78);
        auVar3[9] = (char)((ulong)uVar24 >> 8);
        auVar3._0_9_ = *(unkbyte9 *)((long)register0x00000008 + -0x80);
        auVar3[10] = (char)((ulong)uVar24 >> 0x10);
        auVar3[0xb] = (char)((ulong)uVar24 >> 0x18);
        auVar3[0xc] = (char)((ulong)uVar24 >> 0x20);
        auVar3[0xd] = (char)((ulong)uVar24 >> 0x28);
        auVar3[0xe] = (char)((ulong)uVar24 >> 0x30);
        auVar3[0xf] = (char)((ulong)uVar24 >> 0x38);
        fVar37 = (float)auVar3._8_8_;
        in_register_00005004 = SUB41(fVar37,0);
        in_register_00005005 = (undefined1)((uint)fVar37 >> 8);
        in_register_00005006 = (undefined1)((uint)fVar37 >> 0x10);
        in_register_00005007 = (undefined1)((uint)fVar37 >> 0x18);
        *(long *)(pfVar12 + 10) =
             CONCAT17(in_register_00005007,
                      CONCAT16(in_register_00005006,
                               CONCAT15(in_register_00005005,
                                        CONCAT14(in_register_00005004,
                                                 (float)(double)*(unkbyte9 *)
                                                                 ((long)register0x00000008 + -0x80))
                                       )));
        fVar37 = *(float *)(plVar21 + 6);
        *(long **)((long)register0x00000008 + -0x80) = plVar13;
        pfVar12 = param_1 + 0x32;
        FUN_1094e1a28(pfVar12,plVar13,&UNK_10dd5b8f9,
                      (undefined1 *)((long)register0x00000008 + -0x80),
                      (undefined1 *)((long)register0x00000008 + -0xa0));
        pfVar12[0xc] = fVar37;
      }
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
  }
  return pfVar12;
}



/* Entry: 1094dd26c; end: 1094dd2ab;  */

long FUN_1094dd26c(long param_1)

{
  if (*(char *)(param_1 + 0x248) == '\x01') {
    FUN_1094ddaa0();
  }
  else {
    FUN_1094df9ec();
    *(undefined1 *)(param_1 + 0x248) = 1;
  }
  return param_1;
}



/* Entry: 1094dd2ac; end: 1094dd44b;  */

long * FUN_1094dd2ac(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  iVar1 = (int)param_1[0x5c];
  plVar8 = param_1;
  if (iVar1 < 5) {
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        lVar4 = param_1[0x15];
        param_2[5] = param_1[0x16];
        param_2[4] = lVar4;
        if (param_2 + 8 != param_1 + 0x19) {
          *(int *)(param_2 + 0xc) = (int)param_1[0x1d];
          FUN_1094e2010(param_2 + 8,param_1[0x1b],0);
        }
        if (param_2 + 0x17 != param_1 + 0x28) {
          *(int *)(param_2 + 0x1b) = (int)param_1[0x2c];
          FUN_1094d8514(param_2 + 0x17,param_1[0x2a],0);
        }
        uVar10 = *(undefined8 *)((long)param_1 + 0x27c);
        uVar9 = *(undefined8 *)((long)param_1 + 0x274);
        uVar12 = *(undefined8 *)((long)param_1 + 0x28c);
        uVar11 = *(undefined8 *)((long)param_1 + 0x284);
        uVar13 = *(undefined8 *)((long)param_1 + 0x28d);
        *(undefined8 *)((long)param_2 + 0x20d) = *(undefined8 *)((long)param_1 + 0x295);
        *(undefined8 *)((long)param_2 + 0x205) = uVar13;
        *(undefined8 *)((long)param_2 + 500) = uVar10;
        *(undefined8 *)((long)param_2 + 0x1ec) = uVar9;
        *(undefined8 *)((long)param_2 + 0x204) = uVar12;
        *(undefined8 *)((long)param_2 + 0x1fc) = uVar11;
        goto LAB_1094dd3d8;
      }
      if (iVar1 != 2) {
LAB_1094dd440:
        plVar8 = (long *)&UNK_10f56fd8d;
        func_0x000105688514();
        uStack_50 = param_1;
        plStack_48 = param_2;
        if ((char)plVar8[0x61] == '\x01') {
          plVar8[0x5b] = (long)&PTR_FUN_110af7e20;
          plStack_58 = plVar8 + 0x5d;
          FUN_1094dd9b4(&plStack_58);
        }
        if ((char)plVar8[0x5a] == '\x01') {
          FUN_1094e0cf8(plVar8 + 0x11);
        }
        *plVar8 = (long)&PTR_FUN_110af9078;
        if ((char)plVar8[0xf] == '\x01') {
          FUN_1094dda24(plVar8 + 10);
        }
        return plVar8;
      }
      param_2[4] = param_1[0x15];
    }
    else if (iVar1 == 3) {
      param_2[5] = param_1[0x16];
    }
    else {
      if (iVar1 != 4) goto LAB_1094dd440;
      plVar8 = param_2 + 8;
      if (plVar8 != param_1 + 0x19) {
        *(int *)(param_2 + 0xc) = (int)param_1[0x1d];
        plVar3 = (long *)param_1[0x1b];
        lVar4 = param_2[9];
        plVar2 = plVar8;
        if (lVar4 != 0) {
          lVar5 = 0;
          do {
            *(undefined8 *)(*plVar8 + lVar5 * 8) = 0;
            lVar5 = lVar5 + 1;
          } while (lVar4 != lVar5);
          plVar6 = (long *)param_2[10];
          param_2[10] = 0;
          param_2[0xb] = 0;
          plVar7 = plVar6;
          if (plVar6 != (long *)0x0 && plVar3 != (long *)0x0) {
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (plVar7 + 2,plVar3 + 2);
              plVar7[5] = plVar3[5];
              lVar4 = plVar3[6];
              *(int *)(plVar7 + 7) = (int)plVar3[7];
              plVar7[6] = lVar4;
              plVar6 = (long *)*plVar7;
              FUN_1094e2120(plVar8,plVar7);
              plVar3 = (long *)*plVar3;
              plVar7 = plVar6;
            } while (plVar6 != (long *)0x0 && plVar3 != (long *)0x0);
          }
          func_0x0001094d000c(plVar8,plVar6);
        }
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          plVar2 = plVar8;
          FUN_1094e25f4(plVar8,plVar3 + 2);
        }
        return plVar2;
      }
    }
  }
  else {
    if (iVar1 - 7U < 3) {
LAB_1094dd3d8:
      if ((char)param_1[0xf] == '\x01') {
        if ((*(byte *)(param_3 + 0x58) & 1) == 0) {
          plVar8 = param_2 + 0x12;
          if (plVar8 != param_1 + 10) {
            *(int *)(param_2 + 0x16) = (int)param_1[0xe];
            plVar3 = (long *)param_1[0xc];
            lVar4 = param_2[0x13];
            plVar2 = plVar8;
            if (lVar4 != 0) {
              lVar5 = 0;
              do {
                *(undefined8 *)(*plVar8 + lVar5 * 8) = 0;
                lVar5 = lVar5 + 1;
              } while (lVar4 != lVar5);
              plVar6 = (long *)param_2[0x14];
              param_2[0x14] = 0;
              param_2[0x15] = 0;
              plVar7 = plVar6;
              if (plVar6 != (long *)0x0 && plVar3 != (long *)0x0) {
                do {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                            (plVar7 + 2,plVar3 + 2);
                  plVar7[5] = plVar3[5];
                  *(int *)(plVar7 + 6) = (int)plVar3[6];
                  plVar6 = (long *)*plVar7;
                  FUN_1094ddefc(plVar8,plVar7);
                  plVar3 = (long *)*plVar3;
                  plVar7 = plVar6;
                } while (plVar6 != (long *)0x0 && plVar3 != (long *)0x0);
              }
              func_0x0001094dda5c(plVar8,plVar6);
            }
            for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
              plVar2 = plVar8;
              FUN_1094de3d0(plVar8,plVar3 + 2);
            }
            return plVar2;
          }
        }
        else {
          for (plVar8 = (long *)param_1[0xc]; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            FUN_1094cf978(&plStack_58,param_3 + 0x18,plVar8 + 5);
            param_1 = param_2 + 0x12;
            plStack_48 = plVar8 + 2;
            FUN_1094edafc(param_1,plVar8 + 2,&UNK_10dd5b8f9,&plStack_48,(long)&uStack_50 + 7);
            param_1[5] = (long)plStack_58;
            *(undefined4 *)(param_1 + 6) = (undefined4)uStack_50;
          }
        }
      }
      return param_1;
    }
    if (iVar1 == 5) {
      plVar8 = param_2 + 0x17;
      if (plVar8 != param_1 + 0x28) {
        *(int *)(param_2 + 0x1b) = (int)param_1[0x2c];
        plVar3 = (long *)param_1[0x2a];
        lVar4 = param_2[0x18];
        plVar2 = plVar8;
        if (lVar4 != 0) {
          lVar5 = 0;
          do {
            *(undefined8 *)(*plVar8 + lVar5 * 8) = 0;
            lVar5 = lVar5 + 1;
          } while (lVar4 != lVar5);
          plVar6 = (long *)param_2[0x19];
          param_2[0x19] = 0;
          param_2[0x1a] = 0;
          plVar7 = plVar6;
          if (plVar6 != (long *)0x0 && plVar3 != (long *)0x0) {
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (plVar7 + 2,plVar3 + 2);
              plVar7[5] = plVar3[5];
              *(int *)(plVar7 + 6) = (int)plVar3[6];
              plVar6 = (long *)*plVar7;
              FUN_1094d861c(plVar8,plVar7);
              plVar3 = (long *)*plVar3;
              plVar7 = plVar6;
            } while (plVar6 != (long *)0x0 && plVar3 != (long *)0x0);
          }
          func_0x0001094d803c(plVar8,plVar6);
        }
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          plVar2 = plVar8;
          FUN_1094d8af0(plVar8,plVar3 + 2);
        }
        return plVar2;
      }
    }
    else {
      if (iVar1 != 6) goto LAB_1094dd440;
      uVar10 = *(undefined8 *)((long)param_1 + 0x27c);
      uVar9 = *(undefined8 *)((long)param_1 + 0x274);
      uVar12 = *(undefined8 *)((long)param_1 + 0x28c);
      uVar11 = *(undefined8 *)((long)param_1 + 0x284);
      uVar13 = *(undefined8 *)((long)param_1 + 0x28d);
      *(undefined8 *)((long)param_2 + 0x20d) = *(undefined8 *)((long)param_1 + 0x295);
      *(undefined8 *)((long)param_2 + 0x205) = uVar13;
      *(undefined8 *)((long)param_2 + 500) = uVar10;
      *(undefined8 *)((long)param_2 + 0x1ec) = uVar9;
      *(undefined8 *)((long)param_2 + 0x204) = uVar12;
      *(undefined8 *)((long)param_2 + 0x1fc) = uVar11;
    }
  }
  return plVar8;
}



/* Entry: 1094dd44c; end: 1094dd557;  */

undefined8 * FUN_1094dd44c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (*(char *)(param_1 + 0x61) == '\x01') {
    param_1[0x5b] = &PTR_FUN_110af7e20;
    puStack_28 = param_1 + 0x5d;
    FUN_1094dd9b4(&puStack_28);
  }
  if (*(char *)(param_1 + 0x5a) == '\x01') {
    FUN_1094e0cf8(param_1 + 0x11);
  }
  *param_1 = &PTR_FUN_110af9078;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_1094dda24(param_1 + 10);
  }
  return param_1;
}



/* Entry: 1094dd558; end: 1094dd56b;  */

long FUN_1094dd558(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x2d8;
  if (*(char *)(param_1 + 0x308) == '\0') {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1094dd56c; end: 1094dd5d3;  */

void FUN_1094dd56c(long param_1)

{
  undefined1 auStack_270 [584];
  char cStack_28;
  
  auStack_270[0] = 0;
  cStack_28 = '\0';
  FUN_1094e0e58(param_1 + 0x88,auStack_270);
  if (cStack_28 == '\x01') {
    FUN_1094e0cf8(auStack_270);
  }
  return;
}



/* Entry: 1094dd5d4; end: 1094dd5db;  */

void FUN_1094dd5d4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094dd5d8);
  (*pcVar1)();
}



/* Entry: 1094dd5dc; end: 1094dd76f;  */

void FUN_1094dd5dc(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = (undefined8 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar10 >> 4) < param_4) {
    plVar4 = param_1;
    FUN_1094dd770();
    if (param_4 >> 0x3c != 0) {
      FUN_1094dd8d0();
      lVar9 = *plVar4;
      if (lVar9 != 0) {
        lVar5 = plVar4[1];
        lVar7 = lVar9;
        if (lVar5 != lVar9) {
          do {
            lVar5 = lVar5 + -0x10;
            func_0x0001094dd804();
          } while (lVar5 != lVar9);
          lVar7 = *plVar4;
        }
        plVar4[1] = lVar9;
        __ZdlPv(lVar7);
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = 0;
      }
      return;
    }
    uVar8 = param_1[2] - *param_1 >> 3;
    if (uVar8 <= param_4) {
      uVar8 = param_4;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar8 = 0xfffffffffffffff;
    }
    func_0x0001094dd7cc(param_1,uVar8);
    puVar6 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar9 = param_2[1];
      uVar11 = *param_2;
      puVar6[1] = param_2[1];
      *puVar6 = uVar11;
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    if (param_4 <= (ulong)((long)puVar6 - (long)puVar10 >> 4)) {
      if (param_2 != param_3) {
        do {
          puVar6 = param_2 + 2;
          func_0x0001094dd85c(puVar10,*param_2,param_2[1]);
          puVar10 = puVar10 + 2;
          param_2 = puVar6;
        } while (puVar6 != param_3);
        puVar6 = (undefined8 *)param_1[1];
      }
      while (puVar6 != puVar10) {
        puVar6 = puVar6 + -2;
        func_0x0001094dd804();
      }
      param_1[1] = (long)puVar10;
      return;
    }
    puVar1 = (undefined8 *)((long)param_2 + ((long)puVar6 - (long)puVar10));
    if (puVar6 != puVar10) {
      do {
        puVar6 = param_2 + 2;
        func_0x0001094dd85c(puVar10,*param_2,param_2[1]);
        puVar10 = puVar10 + 2;
        param_2 = puVar6;
      } while (puVar6 != puVar1);
      puVar6 = (undefined8 *)param_1[1];
    }
    for (; puVar1 != param_3; puVar1 = puVar1 + 2) {
      lVar9 = puVar1[1];
      uVar11 = *puVar1;
      puVar6[1] = puVar1[1];
      *puVar6 = uVar11;
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
  }
  param_1[1] = (long)puVar6;
  return;
}



/* Entry: 1094dd770; end: 1094dd8cf;  */

void FUN_1094dd770(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x0001094dd804();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1094dd8d0; end: 1094dd8e3;  */

void FUN_1094dd8d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar4 = &UNK_10f56fdd3;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    func_0x0001094dd7cc();
    puVar5 = *(undefined8 **)(puVar4 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar6 = param_2[1];
      uVar7 = *param_2;
      puVar5[1] = param_2[1];
      *puVar5 = uVar7;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar5 = puVar5 + 2;
    }
    *(undefined8 **)(puVar4 + 8) = puVar5;
  }
  return;
}



/* Entry: 1094dd8e4; end: 1094dd917;  */

void FUN_1094dd8e4(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    func_0x0001094dd7cc();
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
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
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 1094dd918; end: 1094dd9b3;  */

void FUN_1094dd918(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    func_0x0001094dd7cc(param_1,param_4);
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
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
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 1094dd9b4; end: 1094dda23;  */

void FUN_1094dd9b4(long *param_1)

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
        func_0x0001094dd804();
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



/* Entry: 1094dda24; end: 1094dda9f;  */

long * FUN_1094dda24(long *param_1)

{
  long lVar1;
  
  func_0x0001094dda5c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094ddaa0; end: 1094dddf3;  */

undefined8 * FUN_1094ddaa0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 1,param_2 + 1);
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  if (param_1 == param_2) {
    uVar9 = param_2[0x39];
    param_1[0x3a] = param_2[0x3a];
    param_1[0x39] = uVar9;
    uVar10 = param_2[0x3c];
    uVar9 = param_2[0x3b];
    uVar12 = param_2[0x3e];
    uVar11 = param_2[0x3d];
    uVar14 = param_2[0x40];
    uVar13 = param_2[0x3f];
    uVar15 = *(undefined8 *)((long)param_2 + 0x205);
    *(undefined8 *)((long)param_1 + 0x20d) = *(undefined8 *)((long)param_2 + 0x20d);
    *(undefined8 *)((long)param_1 + 0x205) = uVar15;
    param_1[0x3e] = uVar12;
    param_1[0x3d] = uVar11;
    param_1[0x40] = uVar14;
    param_1[0x3f] = uVar13;
    param_1[0x3c] = uVar10;
    param_1[0x3b] = uVar9;
    goto LAB_1094dddd8;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  FUN_1094e2010(param_1 + 8,param_2[10],0);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  FUN_1094dddf4(param_1 + 0xd,param_2[0xf],0);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  FUN_1094dddf4(param_1 + 0x12,param_2[0x14],0);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  FUN_1094d8514(param_1 + 0x17,param_2[0x19],0);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_1094de568(param_1 + 0x1c,param_2[0x1e],0);
  if (param_2[0x28] != 0) {
    piVar1 = (int *)(param_2[0x28] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar6 = param_1 + 0x21;
  if (param_1[0x28] != 0) {
    piVar1 = (int *)(param_1[0x28] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(puVar6);
    }
  }
  param_1[0x28] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  if (*(int *)((long)param_1 + 0x10c) < 1) {
    *(undefined4 *)puVar6 = *(undefined4 *)(param_2 + 0x21);
LAB_1094ddc30:
    if (2 < *(int *)((long)param_2 + 0x10c)) goto LAB_1094ddc64;
    *(int *)((long)param_1 + 0x10c) = *(int *)((long)param_2 + 0x10c);
    param_1[0x22] = param_2[0x22];
    puVar6 = (undefined8 *)param_2[0x2a];
    puVar8 = (undefined8 *)param_1[0x2a];
    *puVar8 = *puVar6;
    puVar8[1] = puVar6[1];
  }
  else {
    lVar5 = 0;
    lVar7 = param_1[0x29];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x10c));
    *(undefined4 *)puVar6 = *(undefined4 *)(param_2 + 0x21);
    if (*(int *)((long)param_1 + 0x10c) < 3) goto LAB_1094ddc30;
LAB_1094ddc64:
    func_0x000109a84868(puVar6);
  }
  param_1[0x23] = param_2[0x23];
  uVar9 = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar9;
  uVar9 = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x26] = uVar9;
  param_1[0x28] = param_2[0x28];
  if (param_2[0x34] != 0) {
    piVar1 = (int *)(param_2[0x34] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar6 = param_1 + 0x2d;
  if (param_1[0x34] != 0) {
    piVar1 = (int *)(param_1[0x34] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(puVar6);
    }
  }
  param_1[0x34] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  if (*(int *)((long)param_1 + 0x16c) < 1) {
    *(undefined4 *)puVar6 = *(undefined4 *)(param_2 + 0x2d);
LAB_1094ddd2c:
    if (2 < *(int *)((long)param_2 + 0x16c)) goto LAB_1094ddd60;
    *(int *)((long)param_1 + 0x16c) = *(int *)((long)param_2 + 0x16c);
    param_1[0x2e] = param_2[0x2e];
    puVar6 = (undefined8 *)param_2[0x36];
    puVar8 = (undefined8 *)param_1[0x36];
    *puVar8 = *puVar6;
    puVar8[1] = puVar6[1];
  }
  else {
    lVar5 = 0;
    lVar7 = param_1[0x35];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x16c));
    *(undefined4 *)puVar6 = *(undefined4 *)(param_2 + 0x2d);
    if (*(int *)((long)param_1 + 0x16c) < 3) goto LAB_1094ddd2c;
LAB_1094ddd60:
    func_0x000109a84868(puVar6);
  }
  param_1[0x2f] = param_2[0x2f];
  uVar9 = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x30] = uVar9;
  uVar9 = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x32] = uVar9;
  param_1[0x34] = param_2[0x34];
  uVar9 = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x39] = uVar9;
  uVar10 = param_2[0x3c];
  uVar9 = param_2[0x3b];
  uVar12 = param_2[0x3e];
  uVar11 = param_2[0x3d];
  uVar14 = param_2[0x40];
  uVar13 = param_2[0x3f];
  uVar15 = *(undefined8 *)((long)param_2 + 0x205);
  *(undefined8 *)((long)param_1 + 0x20d) = *(undefined8 *)((long)param_2 + 0x20d);
  *(undefined8 *)((long)param_1 + 0x205) = uVar15;
  param_1[0x3e] = uVar12;
  param_1[0x3d] = uVar11;
  param_1[0x40] = uVar14;
  param_1[0x3f] = uVar13;
  param_1[0x3c] = uVar10;
  param_1[0x3b] = uVar9;
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(param_2 + 0x47);
    FUN_1094decec(param_1 + 0x43,param_2[0x45],0);
  }
LAB_1094dddd8:
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  return param_1;
}



/* Entry: 1094dddf4; end: 1094ddefb;  */

void FUN_1094dddf4(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    plVar3 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar4 = plVar3;
    if (plVar3 != (long *)0x0 && param_2 != param_3) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar4 + 2,param_2 + 2);
        plVar4[5] = param_2[5];
        *(int *)(plVar4 + 6) = (int)param_2[6];
        plVar3 = (long *)*plVar4;
        FUN_1094ddefc(param_1,plVar4);
        param_2 = (long *)*param_2;
        plVar4 = plVar3;
      } while (plVar3 != (long *)0x0 && param_2 != param_3);
    }
    func_0x0001094dda5c(param_1,plVar3);
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_1094de3d0(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 1094ddefc; end: 1094ddf4b;  */

long FUN_1094ddefc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c31944(param_1,param_2 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar2 = param_1;
  FUN_1094ddf4c(param_1,uVar1,param_2 + 0x10);
  FUN_1094de0a4(param_1,param_2,uVar2);
  return param_2;
}



/* Entry: 1094ddf4c; end: 1094de0a3;  */

long * FUN_1094ddf4c(long *param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar4;
  
  uVar10 = param_1[1];
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar10) {
      uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar5 = uVar5 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    FUN_1094de174(param_1,uVar5);
    uVar10 = param_1[1];
  }
  uVar5 = uVar10 - 1;
  if ((uVar10 & uVar5) == 0) {
    uVar11 = uVar5 & param_2;
  }
  else {
    uVar11 = param_2;
    if (uVar10 <= param_2) {
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar11 = param_2 / uVar10;
      }
      uVar11 = param_2 - uVar11 * uVar10;
    }
  }
  plVar9 = *(long **)(*param_1 + uVar11 * 8);
  if ((plVar9 != (long *)0x0) && (lVar6 = *plVar9, lVar6 != 0)) {
    uVar12 = 0;
    bVar1 = 0;
    do {
      uVar7 = *(ulong *)(lVar6 + 8);
      if ((uVar10 & uVar5) == 0) {
        uVar8 = uVar7 & uVar5;
      }
      else {
        uVar8 = uVar7;
        if (uVar10 <= uVar7) {
          uVar8 = 0;
          if (uVar10 != 0) {
            uVar8 = uVar7 / uVar10;
          }
          uVar8 = uVar7 - uVar8 * uVar10;
        }
      }
      if (uVar8 != uVar11) {
        return plVar9;
      }
      if (uVar7 == param_2) {
        plVar4 = param_1;
        func_0x000104c4fbc4(param_1,lVar6 + 0x10,param_3);
        uVar3 = (uint)plVar4;
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar12;
      if ((bool)(bVar1 & bVar2)) {
        return plVar9;
      }
      uVar12 = uVar12 | bVar2;
      bVar1 = bVar1 | bVar2;
      plVar9 = (long *)*plVar9;
      lVar6 = *plVar9;
    } while (lVar6 != 0);
  }
  return plVar9;
}



/* Entry: 1094de0a4; end: 1094de173;  */

void FUN_1094de0a4(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_1094de0cc;
LAB_1094de108:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_1094de164;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_1094de108;
LAB_1094de0cc:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_1094de164;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_1094de164;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_1094de164:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1094de174; end: 1094de243;  */

void FUN_1094de174(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 auStack_88 [3];
  ulong uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (param_2 <= uVar10) {
        param_2 = uVar10;
      }
      if (param_2 < uVar7) goto LAB_1094de1bc;
    }
    return;
  }
LAB_1094de1bc:
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar8 = param_1;
      func_0x000104c4f740();
      pcStack_58 = FUN_1094de3d0;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_1094de42c(auStack_88);
      FUN_1094ddefc(plVar8,auStack_88[0]);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar7 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (param_2 != uVar7);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar7 = plVar8[1];
      uVar10 = param_2 - 1;
      if ((param_2 & uVar10) == 0) {
        uVar7 = uVar7 & uVar10;
      }
      else if (param_2 <= uVar7) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar7 / param_2;
        }
        uVar7 = uVar7 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar11 = plVar8[1];
        if ((param_2 & uVar10) == 0) {
          uVar11 = uVar11 & uVar10;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        if (uVar11 != uVar7) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar7 = uVar11;
          }
          else {
            lVar3 = *plVar8;
            plVar6 = plVar8;
            if (lVar3 == 0) {
              plVar5 = (long *)0x0;
            }
            else {
              do {
                plVar4 = param_1;
                func_0x000104c4fbc4(param_1,plVar8 + 2,lVar3 + 0x10);
                plVar5 = (long *)*plVar6;
                if ((int)plVar4 == 0) goto LAB_1094de3ac;
                lVar3 = *plVar5;
                plVar6 = plVar5;
              } while (lVar3 != 0);
              plVar5 = (long *)0x0;
LAB_1094de3ac:
              lVar2 = *param_1;
            }
            *plVar9 = (long)plVar5;
            *plVar6 = **(long **)(lVar2 + uVar11 * 8);
            **(undefined8 **)(lVar2 + uVar11 * 8) = plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1094de244; end: 1094de3cf;  */

void FUN_1094de244(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 auStack_88 [3];
  ulong uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar8 = param_1;
      func_0x000104c4f740();
      pcStack_58 = FUN_1094de3d0;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_1094de42c(auStack_88);
      FUN_1094ddefc(plVar8,auStack_88[0]);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar5 = plVar8[1];
      uVar10 = param_2 - 1;
      if ((param_2 & uVar10) == 0) {
        uVar5 = uVar5 & uVar10;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar11 = plVar8[1];
        if ((param_2 & uVar10) == 0) {
          uVar11 = uVar11 & uVar10;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar5 = uVar11;
          }
          else {
            lVar3 = *plVar8;
            plVar7 = plVar8;
            if (lVar3 == 0) {
              plVar6 = (long *)0x0;
            }
            else {
              do {
                plVar4 = param_1;
                func_0x000104c4fbc4(param_1,plVar8 + 2,lVar3 + 0x10);
                plVar6 = (long *)*plVar7;
                if ((int)plVar4 == 0) goto LAB_1094de3ac;
                lVar3 = *plVar6;
                plVar7 = plVar6;
              } while (lVar3 != 0);
              plVar6 = (long *)0x0;
LAB_1094de3ac:
              lVar2 = *param_1;
            }
            *plVar9 = (long)plVar6;
            *plVar7 = **(long **)(lVar2 + uVar11 * 8);
            **(undefined8 **)(lVar2 + uVar11 * 8) = plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1094de3d0; end: 1094de42b;  */

void FUN_1094de3d0(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_1094de42c(auStack_38);
  FUN_1094ddefc(param_1,auStack_38[0]);
  return;
}



/* Entry: 1094de42c; end: 1094de4bb;  */

void FUN_1094de42c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_1094de4bc(puVar1 + 2,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  func_0x000107c31944(param_2,puVar1 + 2);
  puVar1[1] = param_2;
  return;
}



/* Entry: 1094de4bc; end: 1094de567;  */

undefined8 * FUN_1094de4bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



/* Entry: 1094de568; end: 1094de66f;  */

void FUN_1094de568(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    plVar3 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar4 = plVar3;
    if (plVar3 != (long *)0x0 && param_2 != param_3) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar4 + 2,param_2 + 2);
        lVar1 = param_2[5];
        *(undefined4 *)((long)plVar4 + 0x2b) = *(undefined4 *)((long)param_2 + 0x2b);
        *(int *)(plVar4 + 5) = (int)lVar1;
        plVar3 = (long *)*plVar4;
        func_0x0001094de670(param_1,plVar4);
        param_2 = (long *)*param_2;
        plVar4 = plVar3;
      } while (plVar3 != (long *)0x0 && param_2 != param_3);
    }
    func_0x0001094de6c0(param_1,plVar3);
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_1094deb88(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 1094de670; end: 1094de703;  */

long FUN_1094de670(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c31944(param_1,param_2 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar2 = param_1;
  FUN_1094de704(param_1,uVar1,param_2 + 0x10);
  FUN_1094de85c(param_1,param_2,uVar2);
  return param_2;
}



/* Entry: 1094de704; end: 1094de85b;  */

long * FUN_1094de704(long *param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar4;
  
  uVar10 = param_1[1];
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar10) {
      uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar5 = uVar5 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    FUN_1094de92c(param_1,uVar5);
    uVar10 = param_1[1];
  }
  uVar5 = uVar10 - 1;
  if ((uVar10 & uVar5) == 0) {
    uVar11 = uVar5 & param_2;
  }
  else {
    uVar11 = param_2;
    if (uVar10 <= param_2) {
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar11 = param_2 / uVar10;
      }
      uVar11 = param_2 - uVar11 * uVar10;
    }
  }
  plVar9 = *(long **)(*param_1 + uVar11 * 8);
  if ((plVar9 != (long *)0x0) && (lVar6 = *plVar9, lVar6 != 0)) {
    uVar12 = 0;
    bVar1 = 0;
    do {
      uVar7 = *(ulong *)(lVar6 + 8);
      if ((uVar10 & uVar5) == 0) {
        uVar8 = uVar7 & uVar5;
      }
      else {
        uVar8 = uVar7;
        if (uVar10 <= uVar7) {
          uVar8 = 0;
          if (uVar10 != 0) {
            uVar8 = uVar7 / uVar10;
          }
          uVar8 = uVar7 - uVar8 * uVar10;
        }
      }
      if (uVar8 != uVar11) {
        return plVar9;
      }
      if (uVar7 == param_2) {
        plVar4 = param_1;
        func_0x000104c4fbc4(param_1,lVar6 + 0x10,param_3);
        uVar3 = (uint)plVar4;
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar12;
      if ((bool)(bVar1 & bVar2)) {
        return plVar9;
      }
      uVar12 = uVar12 | bVar2;
      bVar1 = bVar1 | bVar2;
      plVar9 = (long *)*plVar9;
      lVar6 = *plVar9;
    } while (lVar6 != 0);
  }
  return plVar9;
}



/* Entry: 1094de85c; end: 1094de92b;  */

void FUN_1094de85c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_1094de884;
LAB_1094de8c0:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_1094de91c;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_1094de8c0;
LAB_1094de884:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_1094de91c;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_1094de91c;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_1094de91c:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1094de92c; end: 1094de9fb;  */

void FUN_1094de92c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 auStack_88 [3];
  ulong uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (param_2 <= uVar10) {
        param_2 = uVar10;
      }
      if (param_2 < uVar7) goto LAB_1094de974;
    }
    return;
  }
LAB_1094de974:
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar8 = param_1;
      func_0x000104c4f740();
      pcStack_58 = FUN_1094deb88;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_1094debe4(auStack_88);
      FUN_1094de670(plVar8,auStack_88[0]);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar7 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (param_2 != uVar7);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar7 = plVar8[1];
      uVar10 = param_2 - 1;
      if ((param_2 & uVar10) == 0) {
        uVar7 = uVar7 & uVar10;
      }
      else if (param_2 <= uVar7) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar7 / param_2;
        }
        uVar7 = uVar7 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar11 = plVar8[1];
        if ((param_2 & uVar10) == 0) {
          uVar11 = uVar11 & uVar10;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        if (uVar11 != uVar7) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar7 = uVar11;
          }
          else {
            lVar3 = *plVar8;
            plVar6 = plVar8;
            if (lVar3 == 0) {
              plVar5 = (long *)0x0;
            }
            else {
              do {
                plVar4 = param_1;
                func_0x000104c4fbc4(param_1,plVar8 + 2,lVar3 + 0x10);
                plVar5 = (long *)*plVar6;
                if ((int)plVar4 == 0) goto LAB_1094deb64;
                lVar3 = *plVar5;
                plVar6 = plVar5;
              } while (lVar3 != 0);
              plVar5 = (long *)0x0;
LAB_1094deb64:
              lVar2 = *param_1;
            }
            *plVar9 = (long)plVar5;
            *plVar6 = **(long **)(lVar2 + uVar11 * 8);
            **(undefined8 **)(lVar2 + uVar11 * 8) = plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1094de9fc; end: 1094deb87;  */

void FUN_1094de9fc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 auStack_88 [3];
  ulong uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar8 = param_1;
      func_0x000104c4f740();
      pcStack_58 = FUN_1094deb88;
      uStack_70 = param_2;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_1094debe4(auStack_88);
      FUN_1094de670(plVar8,auStack_88[0]);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar5 = plVar8[1];
      uVar10 = param_2 - 1;
      if ((param_2 & uVar10) == 0) {
        uVar5 = uVar5 & uVar10;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar11 = plVar8[1];
        if ((param_2 & uVar10) == 0) {
          uVar11 = uVar11 & uVar10;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar5 = uVar11;
          }
          else {
            lVar3 = *plVar8;
            plVar7 = plVar8;
            if (lVar3 == 0) {
              plVar6 = (long *)0x0;
            }
            else {
              do {
                plVar4 = param_1;
                func_0x000104c4fbc4(param_1,plVar8 + 2,lVar3 + 0x10);
                plVar6 = (long *)*plVar7;
                if ((int)plVar4 == 0) goto LAB_1094deb64;
                lVar3 = *plVar6;
                plVar7 = plVar6;
              } while (lVar3 != 0);
              plVar6 = (long *)0x0;
LAB_1094deb64:
              lVar2 = *param_1;
            }
            *plVar9 = (long)plVar6;
            *plVar7 = **(long **)(lVar2 + uVar11 * 8);
            **(undefined8 **)(lVar2 + uVar11 * 8) = plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1094deb88; end: 1094debe3;  */

void FUN_1094deb88(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_1094debe4(auStack_38);
  FUN_1094de670(param_1,auStack_38[0]);
  return;
}



/* Entry: 1094debe4; end: 1094dec9b;  */

void FUN_1094debe4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_3,param_3[1]);
  }
  else {
    uVar2 = *param_3;
    puVar1[3] = param_3[1];
    puVar1[2] = uVar2;
    puVar1[4] = param_3[2];
  }
  puVar1[5] = param_3[3];
  *(undefined1 *)(param_1 + 2) = 1;
  func_0x000107c31944(param_2,puVar1 + 2);
  puVar1[1] = param_2;
  return;
}



/* Entry: 1094dec9c; end: 1094deceb;  */

void FUN_1094dec9c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(char *)(param_2 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x10));
    }
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1094decec; end: 1094dedeb;  */

void FUN_1094decec(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    plVar3 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar4 = plVar3;
    if (plVar3 != (long *)0x0 && param_2 != param_3) {
      do {
        lVar1 = param_2[2];
        plVar4[3] = param_2[3];
        plVar4[2] = lVar1;
        func_0x0001094dee88(plVar4 + 4,param_2 + 4);
        plVar3 = (long *)*plVar4;
        FUN_1094dedec(param_1,plVar4);
        param_2 = (long *)*param_2;
        plVar4 = plVar3;
      } while (plVar3 != (long *)0x0 && param_2 != param_3);
    }
    FUN_1094dee4c(param_1,plVar3);
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_1094df7a0(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 1094dedec; end: 1094dee4b;  */

long FUN_1094dedec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c2ac8c(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar2 = param_1;
  FUN_1094df2c4(param_1,uVar1,(undefined8 *)(param_2 + 0x10));
  FUN_1094df440(param_1,param_2,uVar2);
  return param_2;
}



/* Entry: 1094dee4c; end: 1094def13;  */

void FUN_1094dee4c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    FUN_1094df75c(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 1094def14; end: 1094df08b;  */

undefined1  [16] FUN_1094def14(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_42 [2];
  
  plVar5 = (long *)*param_1;
  plVar2 = param_1;
  if ((ulong)((param_1[2] - (long)plVar5 >> 3) * -0x79435e50d79435e5) < param_4) {
    plVar3 = param_2;
    plVar4 = param_3;
    func_0x0001094ced14(param_1);
    if (0x1af286bca1af286 < param_4) {
      FUN_1094cd250();
      param_1[1] = param_4;
      __Unwind_Resume();
      if (plVar3 != plVar4) {
        plVar2 = plVar3 + 9;
        do {
          lVar6 = plVar2[-9];
          *(char *)(plVar5 + 1) = (char)plVar2[-8];
          *plVar5 = lVar6;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (plVar5 + 2,plVar2 + -7);
          if (plVar5 != plVar2 + -9) {
            FUN_10928555c(plVar5 + 5,plVar2[-4],plVar2[-3],plVar2[-3] - plVar2[-4] >> 2);
            FUN_10928555c(plVar5 + 8,plVar2[-1],*plVar2,*plVar2 - plVar2[-1] >> 2);
          }
          lVar8 = plVar2[3];
          lVar6 = plVar2[2];
          lVar10 = plVar2[5];
          lVar9 = plVar2[4];
          lVar12 = plVar2[7];
          lVar11 = plVar2[6];
          lVar13 = plVar2[8];
          plVar5[0x12] = plVar2[9];
          plVar5[0x11] = lVar13;
          plVar5[0x10] = lVar12;
          plVar5[0xf] = lVar11;
          plVar5[0xe] = lVar10;
          plVar5[0xd] = lVar9;
          plVar5[0xc] = lVar8;
          plVar5[0xb] = lVar6;
          plVar5 = plVar5 + 0x13;
          plVar1 = plVar2 + 10;
          plVar3 = plVar4;
          plVar2 = plVar2 + 0x13;
        } while (plVar1 != plVar4);
      }
      auVar15._8_8_ = plVar5;
      auVar15._0_8_ = plVar3;
      return auVar15;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar6 * 0xd79435e50d79436;
    if (uVar7 < param_4 || uVar7 - param_4 == 0) {
      uVar7 = param_4;
    }
    if (0xd79435e50d7942 < (ulong)(lVar6 * -0x79435e50d79435e5)) {
      uVar7 = 0x1af286bca1af286;
    }
    FUN_1094cd204(param_1,uVar7);
    FUN_1094cd2ac(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar6 = param_1[1] - (long)plVar5;
    if (param_4 <= (ulong)((lVar6 >> 3) * -0x79435e50d79435e5)) {
      plVar2 = (long *)(auStack_42 + 1);
      FUN_1094df08c(plVar2,param_2,param_3);
      plVar5 = (long *)param_1[1];
      plVar3 = param_2;
      while (plVar5 != param_2) {
        plVar5 = plVar5 + -0x13;
        plVar2 = plVar5;
        FUN_1094cd424(plVar5);
      }
      param_1[1] = (long)param_2;
      goto LAB_1094df064;
    }
    FUN_1094df08c(auStack_42,param_2,(long)param_2 + lVar6);
    param_2 = (long *)((long)param_2 + lVar6);
    FUN_1094cd2ac(param_1,param_2,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar2;
  plVar3 = param_2;
LAB_1094df064:
  auVar14._8_8_ = plVar3;
  auVar14._0_8_ = plVar2;
  return auVar14;
}



/* Entry: 1094df08c; end: 1094df153;  */

undefined1  [16] FUN_1094df08c(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if (param_2 != param_3) {
    plVar3 = param_2 + 9;
    do {
      lVar2 = plVar3[-9];
      *(char *)(param_4 + 1) = (char)plVar3[-8];
      *param_4 = lVar2;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_4 + 2,plVar3 + -7);
      if (param_4 != plVar3 + -9) {
        FUN_10928555c(param_4 + 5,plVar3[-4],plVar3[-3],plVar3[-3] - plVar3[-4] >> 2);
        FUN_10928555c(param_4 + 8,plVar3[-1],*plVar3,*plVar3 - plVar3[-1] >> 2);
      }
      lVar4 = plVar3[3];
      lVar2 = plVar3[2];
      lVar6 = plVar3[5];
      lVar5 = plVar3[4];
      lVar8 = plVar3[7];
      lVar7 = plVar3[6];
      lVar9 = plVar3[8];
      param_4[0x12] = plVar3[9];
      param_4[0x11] = lVar9;
      param_4[0x10] = lVar8;
      param_4[0xf] = lVar7;
      param_4[0xe] = lVar6;
      param_4[0xd] = lVar5;
      param_4[0xc] = lVar4;
      param_4[0xb] = lVar2;
      param_4 = param_4 + 0x13;
      plVar1 = plVar3 + 10;
      param_2 = param_3;
      plVar3 = plVar3 + 0x13;
    } while (plVar1 != param_3);
  }
  auVar10._8_8_ = param_4;
  auVar10._0_8_ = param_2;
  return auVar10;
}



/* Entry: 1094df154; end: 1094df2c3;  */

long * FUN_1094df154(long *param_1,ulong param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  bool bVar18;
  
  lVar8 = param_1[2];
  plVar13 = (long *)*param_1;
  plVar17 = param_1;
  if ((ulong)((lVar8 - (long)plVar13 >> 2) * 0x2e8ba2e8ba2e8ba3) < param_4) {
    plVar15 = param_1;
    uVar12 = param_2;
    puVar7 = param_3;
    if (plVar13 != (long *)0x0) {
      param_1[1] = (long)plVar13;
      __ZdlPv();
      lVar8 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar15 = plVar13;
    }
    if (0x5d1745d1745d174 < param_4) {
      FUN_1094ccc84();
      uVar14 = plVar15[1];
      if ((uVar14 == 0) || (*(float *)(plVar15 + 4) * (float)uVar14 < (float)(plVar15[3] + 1))) {
        uVar9 = 1;
        if (2 < uVar14) {
          uVar9 = (ulong)((uVar14 & uVar14 - 1) != 0);
        }
        uVar9 = uVar9 | uVar14 << 1;
        uVar14 = (ulong)((float)(plVar15[3] + 1) / *(float *)(plVar15 + 4));
        if (uVar9 <= uVar14) {
          uVar9 = uVar14;
        }
        FUN_1094df510(plVar15,uVar9);
        uVar14 = plVar15[1];
      }
      uVar9 = uVar14 - 1;
      if ((uVar14 & uVar9) == 0) {
        uVar16 = uVar9 & uVar12;
      }
      else {
        uVar16 = uVar12;
        if (uVar14 <= uVar12) {
          uVar16 = 0;
          if (uVar14 != 0) {
            uVar16 = uVar12 / uVar14;
          }
          uVar16 = uVar12 - uVar16 * uVar14;
        }
      }
      plVar17 = *(long **)(*plVar15 + uVar16 * 8);
      if (plVar17 == (long *)0x0) {
        plVar13 = (long *)0x0;
      }
      else {
        bVar18 = false;
        bVar3 = 0;
        uVar2 = *puVar7;
        lVar8 = puVar7[1];
        do {
          plVar13 = plVar17;
          plVar17 = (long *)*plVar13;
          if (plVar17 == (long *)0x0) {
            return plVar13;
          }
          uVar10 = plVar17[1];
          if ((uVar14 & uVar9) == 0) {
            uVar11 = uVar10 & uVar9;
          }
          else {
            uVar11 = uVar10;
            if (uVar14 <= uVar10) {
              uVar11 = 0;
              if (uVar14 != 0) {
                uVar11 = uVar10 / uVar14;
              }
              uVar11 = uVar10 - uVar11 * uVar14;
            }
          }
          if (uVar11 != uVar16) {
            return plVar13;
          }
          if ((uVar10 == uVar12) && (plVar17[3] == lVar8)) {
            uVar6 = plVar17[2];
            _memcmp(uVar6,uVar2,lVar8);
            bVar4 = (int)uVar6 == 0;
          }
          else {
            bVar4 = false;
          }
          bVar5 = bVar4 != bVar18;
          bVar4 = (bool)(bVar3 & bVar5);
          bVar18 = (bool)(bVar18 | bVar5);
          bVar3 = bVar3 | bVar5;
        } while (!bVar4);
      }
      return plVar13;
    }
    uVar12 = (lVar8 >> 2) * 0x5d1745d1745d1746;
    if (uVar12 < param_4 || uVar12 - param_4 == 0) {
      uVar12 = param_4;
    }
    if (0x2e8ba2e8ba2e8b9 < (ulong)((lVar8 >> 2) * 0x2e8ba2e8ba2e8ba3)) {
      uVar12 = 0x5d1745d1745d174;
    }
    FUN_1094ccc38(param_1,uVar12);
    plVar13 = (long *)param_1[1];
    lVar8 = (long)param_3 - param_2;
    if (lVar8 != 0) {
      plVar17 = plVar13;
      _memmove(plVar13,param_2,lVar8);
    }
    lVar8 = (long)plVar13 + lVar8;
  }
  else {
    plVar15 = (long *)param_1[1];
    if ((ulong)(((long)plVar15 - (long)plVar13 >> 2) * 0x2e8ba2e8ba2e8ba3) < param_4) {
      lVar1 = param_2 + ((long)plVar15 - (long)plVar13);
      if (plVar15 != plVar13) {
        _memmove(plVar13,param_2);
        plVar15 = (long *)param_1[1];
        plVar17 = plVar13;
      }
      lVar8 = (long)param_3 - lVar1;
      if (lVar8 != 0) {
        plVar17 = plVar15;
        _memmove(plVar15,lVar1,lVar8);
      }
      lVar8 = (long)plVar15 + lVar8;
    }
    else {
      lVar8 = (long)param_3 - param_2;
      if (lVar8 != 0) {
        plVar17 = plVar13;
        _memmove(plVar13,param_2,lVar8);
      }
      lVar8 = (long)plVar13 + lVar8;
    }
  }
  param_1[1] = lVar8;
  return plVar17;
}



/* Entry: 1094df2c4; end: 1094df43f;  */

long * FUN_1094df2c4(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  bool bVar14;
  
  uVar11 = param_1[1];
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar11) {
      uVar7 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar7 = uVar7 | uVar11 << 1;
    uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    FUN_1094df510(param_1,uVar7);
    uVar11 = param_1[1];
  }
  uVar7 = uVar11 - 1;
  if ((uVar11 & uVar7) == 0) {
    uVar12 = uVar7 & param_2;
  }
  else {
    uVar12 = param_2;
    if (uVar11 <= param_2) {
      uVar12 = 0;
      if (uVar11 != 0) {
        uVar12 = param_2 / uVar11;
      }
      uVar12 = param_2 - uVar12 * uVar11;
    }
  }
  plVar13 = *(long **)(*param_1 + uVar12 * 8);
  if (plVar13 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    bVar14 = false;
    bVar3 = 0;
    uVar1 = *param_3;
    lVar2 = param_3[1];
    do {
      plVar10 = plVar13;
      plVar13 = (long *)*plVar10;
      if (plVar13 == (long *)0x0) {
        return plVar10;
      }
      uVar8 = plVar13[1];
      if ((uVar11 & uVar7) == 0) {
        uVar9 = uVar8 & uVar7;
      }
      else {
        uVar9 = uVar8;
        if (uVar11 <= uVar8) {
          uVar9 = 0;
          if (uVar11 != 0) {
            uVar9 = uVar8 / uVar11;
          }
          uVar9 = uVar8 - uVar9 * uVar11;
        }
      }
      if (uVar9 != uVar12) {
        return plVar10;
      }
      if ((uVar8 == param_2) && (plVar13[3] == lVar2)) {
        uVar6 = plVar13[2];
        _memcmp(uVar6,uVar1,lVar2);
        bVar4 = (int)uVar6 == 0;
      }
      else {
        bVar4 = false;
      }
      bVar5 = bVar4 != bVar14;
      bVar4 = (bool)(bVar3 & bVar5);
      bVar14 = (bool)(bVar14 | bVar5);
      bVar3 = bVar3 | bVar5;
    } while (!bVar4);
  }
  return plVar10;
}



/* Entry: 1094df440; end: 1094df50f;  */

void FUN_1094df440(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_1094df468;
LAB_1094df4a4:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_1094df500;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_1094df4a4;
LAB_1094df468:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_1094df500;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_1094df500;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_1094df500:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1094df510; end: 1094df5df;  */

void FUN_1094df510(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plStack_88;
  ulong uStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar6 = param_1[1];
  if (param_2 <= uVar6) {
    if (param_2 < uVar6) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar6 < 3) || ((uVar6 & uVar6 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (param_2 <= uVar9) {
        param_2 = uVar9;
      }
      if (param_2 < uVar6) goto LAB_1094df558;
    }
    return;
  }
LAB_1094df558:
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar5 = param_1;
      func_0x000104c4f740();
      pcStack_68 = FUN_1094df75c;
      uStack_80 = param_2;
      plStack_78 = param_1;
      puStack_70 = &stack0xfffffffffffffff0;
      if (plVar5[5] != 0) {
        plVar5[6] = plVar5[5];
        __ZdlPv();
      }
      plStack_88 = plVar5 + 2;
      FUN_1094cd478(&plStack_88);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar6 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
    puVar7 = (undefined8 *)param_1[2];
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = puVar7[1];
      uVar9 = param_2 - 1;
      if ((param_2 & uVar9) == 0) {
        uVar6 = uVar6 & uVar9;
      }
      else if (param_2 <= uVar6) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar6 / param_2;
        }
        uVar6 = uVar6 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar6 * 8) = param_1 + 2;
      while (puVar8 = puVar7, puVar7 = (undefined8 *)*puVar8, puVar7 != (undefined8 *)0x0) {
        uVar10 = puVar7[1];
        if ((param_2 & uVar9) == 0) {
          uVar10 = uVar10 & uVar9;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        if (uVar10 != uVar6) {
          lVar2 = *param_1;
          puVar12 = puVar7;
          if (*(long *)(lVar2 + uVar10 * 8) == 0) {
            *(undefined8 **)(lVar2 + uVar10 * 8) = puVar8;
            uVar6 = uVar10;
          }
          else {
            do {
              puVar11 = puVar12;
              puVar12 = (undefined8 *)*puVar11;
              if ((puVar12 == (undefined8 *)0x0) || (puVar7[3] != puVar12[3])) break;
              uVar4 = puVar7[2];
              _memcmp(uVar4,puVar12[2]);
            } while ((int)uVar4 == 0);
            *puVar8 = puVar12;
            *puVar11 = **(undefined8 **)(lVar2 + uVar10 * 8);
            **(undefined8 **)(lVar2 + uVar10 * 8) = puVar7;
            puVar7 = puVar8;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1094df5e0; end: 1094df75b;  */

void FUN_1094df5e0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plStack_88;
  ulong uStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar5 = param_1;
      func_0x000104c4f740();
      pcStack_68 = FUN_1094df75c;
      uStack_80 = param_2;
      plStack_78 = param_1;
      puStack_70 = &stack0xfffffffffffffff0;
      if (plVar5[5] != 0) {
        plVar5[6] = plVar5[5];
        __ZdlPv();
      }
      plStack_88 = plVar5 + 2;
      FUN_1094cd478(&plStack_88);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar6 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
    puVar7 = (undefined8 *)param_1[2];
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = puVar7[1];
      uVar9 = param_2 - 1;
      if ((param_2 & uVar9) == 0) {
        uVar6 = uVar6 & uVar9;
      }
      else if (param_2 <= uVar6) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar6 / param_2;
        }
        uVar6 = uVar6 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar6 * 8) = param_1 + 2;
      while (puVar8 = puVar7, puVar7 = (undefined8 *)*puVar8, puVar7 != (undefined8 *)0x0) {
        uVar10 = puVar7[1];
        if ((param_2 & uVar9) == 0) {
          uVar10 = uVar10 & uVar9;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        if (uVar10 != uVar6) {
          lVar2 = *param_1;
          puVar12 = puVar7;
          if (*(long *)(lVar2 + uVar10 * 8) == 0) {
            *(undefined8 **)(lVar2 + uVar10 * 8) = puVar8;
            uVar6 = uVar10;
          }
          else {
            do {
              puVar11 = puVar12;
              puVar12 = (undefined8 *)*puVar11;
              if ((puVar12 == (undefined8 *)0x0) || (puVar7[3] != puVar12[3])) break;
              uVar4 = puVar7[2];
              _memcmp(uVar4,puVar12[2]);
            } while ((int)uVar4 == 0);
            *puVar8 = puVar12;
            *puVar11 = **(undefined8 **)(lVar2 + uVar10 * 8);
            **(undefined8 **)(lVar2 + uVar10 * 8) = puVar7;
            puVar7 = puVar8;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1094df75c; end: 1094df79f;  */

void FUN_1094df75c(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x10;
  FUN_1094cd478(&lStack_28);
  return;
}



/* Entry: 1094df7a0; end: 1094df7ef;  */

void FUN_1094df7a0(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_1094df7f0(auStack_38);
  FUN_1094dedec(param_1,auStack_38[0]);
  return;
}



/* Entry: 1094df7f0; end: 1094df877;  */

void FUN_1094df7f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar2 = *param_3;
  puVar1[3] = param_3[1];
  puVar1[2] = uVar2;
  FUN_1094df878(puVar1 + 4,param_3 + 2);
  *(undefined1 *)(param_1 + 2) = 1;
  func_0x000107c2ac8c(param_2,puVar1[2],puVar1[3]);
  puVar1[1] = param_2;
  return;
}



/* Entry: 1094df878; end: 1094df92b;  */

undefined8 * FUN_1094df878(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1094cd180();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1094df92c();
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  return param_1;
}



/* Entry: 1094df92c; end: 1094df9a3;  */

void FUN_1094df92c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1094ccc38(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1094df9a4; end: 1094df9eb;  */

void FUN_1094df9a4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1094df75c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094df9ec; end: 1094dfc8b;  */

undefined8 * FUN_1094df9ec(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 1,param_2[1],param_2[2]);
  }
  else {
    uVar8 = param_2[2];
    uVar7 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar8;
    param_1[1] = uVar7;
  }
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  FUN_1094cf9dc(param_1 + 8,param_2 + 8);
  FUN_1094dfc8c(param_1 + 0xd,param_2 + 0xd);
  FUN_1094dfc8c(param_1 + 0x12,param_2 + 0x12);
  FUN_1094d7a14(param_1 + 0x17,param_2 + 0x17);
  FUN_1094e01d0(param_1 + 0x1c,param_2 + 0x1c);
  uVar7 = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x21] = uVar7;
  param_1[0x23] = param_2[0x23];
  uVar7 = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar7;
  uVar7 = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x26] = uVar7;
  lVar4 = param_2[0x28];
  param_1[0x28] = lVar4;
  param_1[0x29] = param_1 + 0x22;
  param_1[0x2a] = param_1 + 0x2b;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 0x10c) < 3) {
    puVar5 = (undefined8 *)param_2[0x2a];
    puVar6 = (undefined8 *)param_1[0x2a];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0x10c) = 0;
    func_0x000109a84868(param_1 + 0x21,param_2 + 0x21);
  }
  uVar7 = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2d] = uVar7;
  param_1[0x2f] = param_2[0x2f];
  uVar7 = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x30] = uVar7;
  uVar7 = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x32] = uVar7;
  lVar4 = param_2[0x34];
  param_1[0x34] = lVar4;
  param_1[0x35] = param_1 + 0x2e;
  param_1[0x36] = param_1 + 0x37;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 0x16c) < 3) {
    puVar5 = (undefined8 *)param_2[0x36];
    puVar6 = (undefined8 *)param_1[0x36];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0x16c) = 0;
    func_0x000109a84868(param_1 + 0x2d);
  }
  uVar7 = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x39] = uVar7;
  uVar8 = param_2[0x3c];
  uVar7 = param_2[0x3b];
  uVar10 = param_2[0x3e];
  uVar9 = param_2[0x3d];
  uVar12 = param_2[0x40];
  uVar11 = param_2[0x3f];
  uVar13 = *(undefined8 *)((long)param_2 + 0x205);
  *(undefined8 *)((long)param_1 + 0x20d) = *(undefined8 *)((long)param_2 + 0x20d);
  *(undefined8 *)((long)param_1 + 0x205) = uVar13;
  param_1[0x3e] = uVar10;
  param_1[0x3d] = uVar9;
  param_1[0x40] = uVar12;
  param_1[0x3f] = uVar11;
  param_1[0x3c] = uVar8;
  param_1[0x3b] = uVar7;
  FUN_1094e0774(param_1 + 0x43,param_2 + 0x43);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  return param_1;
}



/* Entry: 1094dfc8c; end: 1094dfcff;  */

undefined8 * FUN_1094dfc8c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_1094dfd00(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_1094dff0c(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 1094dfd00; end: 1094dfdcf;  */

undefined1  [16] FUN_1094dfd00(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x25;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *aplStack_88 [3];
  
  plVar8 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar8 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (param_2 >= plVar12 && param_2 != plVar12) {
LAB_1094dfd48:
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
        plVar8 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        plVar8 = param_1;
        func_0x000107c31944();
        plVar4 = (long *)param_1[1];
        if (plVar4 != (long *)0x0) {
          uVar5 = (long)plVar4 - 1;
          if (((ulong)plVar4 & uVar5) == 0) {
            unaff_x25 = (long *)(uVar5 & (ulong)plVar8);
          }
          else {
            unaff_x25 = plVar8;
            if (plVar4 <= plVar8) {
              uVar7 = 0;
              if (plVar4 != (long *)0x0) {
                uVar7 = (ulong)plVar8 / (ulong)plVar4;
              }
              unaff_x25 = (long *)((long)plVar8 - uVar7 * (long)plVar4);
            }
          }
          puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
          if (puVar6 != (undefined8 *)0x0) {
            for (plVar12 = (long *)*puVar6; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
              plVar9 = (long *)plVar12[1];
              if (plVar9 == plVar8) {
                plVar9 = param_1;
                func_0x000104c4fbc4(param_1,plVar12 + 2,param_2);
                if (((ulong)plVar9 & 1) != 0) {
                  uVar3 = 0;
                  goto LAB_1094e0100;
                }
              }
              else {
                if (((ulong)plVar4 & uVar5) == 0) {
                  plVar9 = (long *)((ulong)plVar9 & uVar5);
                }
                else if (plVar4 <= plVar9) {
                  uVar7 = 0;
                  if (plVar4 != (long *)0x0) {
                    uVar7 = (ulong)plVar9 / (ulong)plVar4;
                  }
                  plVar9 = (long *)((long)plVar9 - uVar7 * (long)plVar4);
                }
                if (plVar9 != unaff_x25) break;
              }
            }
          }
        }
        FUN_1094e014c(aplStack_88,param_1,plVar8,param_3);
        if ((plVar4 == (long *)0x0) ||
           (*(float *)(param_1 + 4) * (float)plVar4 < (float)(param_1[3] + 1))) {
          uVar5 = 1;
          if ((long *)0x2 < plVar4) {
            uVar5 = (ulong)(((ulong)plVar4 & (long)plVar4 - 1U) != 0);
          }
          uVar5 = uVar5 | (long)plVar4 << 1;
          uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar5 <= uVar7) {
            uVar5 = uVar7;
          }
          FUN_1094dfd00(param_1,uVar5);
          plVar4 = (long *)param_1[1];
          if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
            unaff_x25 = (long *)((long)plVar4 - 1U & (ulong)plVar8);
          }
          else {
            unaff_x25 = plVar8;
            if (plVar4 <= plVar8) {
              uVar5 = 0;
              if (plVar4 != (long *)0x0) {
                uVar5 = (ulong)plVar8 / (ulong)plVar4;
              }
              unaff_x25 = (long *)((long)plVar8 - uVar5 * (long)plVar4);
            }
          }
        }
        lVar2 = *param_1;
        plVar8 = *(long **)(lVar2 + (long)unaff_x25 * 8);
        if (plVar8 == (long *)0x0) {
          plVar8 = param_1 + 2;
          *aplStack_88[0] = *plVar8;
          *plVar8 = (long)aplStack_88[0];
          *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar8;
          if (*aplStack_88[0] != 0) {
            plVar8 = *(long **)(*aplStack_88[0] + 8);
            if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
              plVar8 = (long *)((ulong)plVar8 & (long)plVar4 - 1U);
            }
            else if (plVar4 <= plVar8) {
              uVar5 = 0;
              if (plVar4 != (long *)0x0) {
                uVar5 = (ulong)plVar8 / (ulong)plVar4;
              }
              plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar4);
            }
            *(long **)(*param_1 + (long)plVar8 * 8) = aplStack_88[0];
          }
        }
        else {
          *aplStack_88[0] = *plVar8;
          *plVar8 = (long)aplStack_88[0];
        }
        param_1[3] = param_1[3] + 1;
        uVar3 = 1;
        plVar12 = aplStack_88[0];
LAB_1094e0100:
        auVar15._8_8_ = uVar3;
        auVar15._0_8_ = plVar12;
        return auVar15;
      }
      lVar1 = (long)param_2 << 3;
      __Znwm();
      lVar2 = *param_1;
      *param_1 = lVar1;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      plVar4 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
        plVar4 = (long *)((long)plVar4 + 1);
      } while (param_2 != plVar4);
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        plVar12 = (long *)plVar4[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar5);
        }
        else if (param_2 <= plVar12) {
          uVar7 = 0;
          if (param_2 != (long *)0x0) {
            uVar7 = (ulong)plVar12 / (ulong)param_2;
          }
          plVar12 = (long *)((long)plVar12 - uVar7 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar12 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar4;
        while (plVar9 != (long *)0x0) {
          plVar11 = (long *)plVar9[1];
          if (((ulong)param_2 & uVar5) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar5);
          }
          else if (param_2 <= plVar11) {
            uVar7 = 0;
            if (param_2 != (long *)0x0) {
              uVar7 = (ulong)plVar11 / (ulong)param_2;
            }
            plVar11 = (long *)((long)plVar11 - uVar7 * (long)param_2);
          }
          plVar10 = plVar9;
          if (plVar11 != plVar12) {
            lVar1 = *param_1;
            if (*(long *)(lVar1 + (long)plVar11 * 8) == 0) {
              *(long **)(lVar1 + (long)plVar11 * 8) = plVar4;
              plVar12 = plVar11;
            }
            else {
              *plVar4 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar1 + (long)plVar11 * 8);
              **(long **)(lVar1 + (long)plVar11 * 8) = (long)plVar9;
              plVar10 = plVar4;
            }
          }
          plVar4 = plVar10;
          plVar9 = (long *)*plVar10;
        }
      }
    }
    auVar14._8_8_ = plVar8;
    auVar14._0_8_ = lVar2;
    return auVar14;
  }
  if (param_2 < plVar12) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (param_2 <= plVar8) {
      param_2 = plVar8;
    }
    if (param_2 < plVar12) goto LAB_1094dfd48;
  }
  auVar13._8_8_ = plVar4;
  auVar13._0_8_ = plVar8;
  return auVar13;
}



/* Entry: 1094dfdd0; end: 1094dff0b;  */

undefined1  [16] FUN_1094dfdd0(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *unaff_x25;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *aplStack_88 [3];
  
  uVar13 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      uVar13 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      plVar9 = param_1;
      func_0x000107c31944();
      plVar10 = (long *)param_1[1];
      if (plVar10 != (long *)0x0) {
        uVar13 = (long)plVar10 - 1;
        if (((ulong)plVar10 & uVar13) == 0) {
          unaff_x25 = (long *)(uVar13 & (ulong)plVar9);
        }
        else {
          unaff_x25 = plVar9;
          if (plVar10 <= plVar9) {
            uVar5 = 0;
            if (plVar10 != (long *)0x0) {
              uVar5 = (ulong)plVar9 / (ulong)plVar10;
            }
            unaff_x25 = (long *)((long)plVar9 - uVar5 * (long)plVar10);
          }
        }
        puVar7 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
        if (puVar7 != (undefined8 *)0x0) {
          for (plVar12 = (long *)*puVar7; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            plVar8 = (long *)plVar12[1];
            if (plVar8 == plVar9) {
              plVar8 = param_1;
              func_0x000104c4fbc4(param_1,plVar12 + 2,param_2);
              if (((ulong)plVar8 & 1) != 0) {
                uVar4 = 0;
                goto LAB_1094e0100;
              }
            }
            else {
              if (((ulong)plVar10 & uVar13) == 0) {
                plVar8 = (long *)((ulong)plVar8 & uVar13);
              }
              else if (plVar10 <= plVar8) {
                uVar5 = 0;
                if (plVar10 != (long *)0x0) {
                  uVar5 = (ulong)plVar8 / (ulong)plVar10;
                }
                plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar10);
              }
              if (plVar8 != unaff_x25) break;
            }
          }
        }
      }
      FUN_1094e014c(aplStack_88,param_1,plVar9,param_3);
      if ((plVar10 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar10 < (float)(param_1[3] + 1))) {
        uVar13 = 1;
        if ((long *)0x2 < plVar10) {
          uVar13 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
        }
        uVar13 = uVar13 | (long)plVar10 << 1;
        uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar13 <= uVar5) {
          uVar13 = uVar5;
        }
        FUN_1094dfd00(param_1,uVar13);
        plVar10 = (long *)param_1[1];
        if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
          unaff_x25 = (long *)((long)plVar10 - 1U & (ulong)plVar9);
        }
        else {
          unaff_x25 = plVar9;
          if (plVar10 <= plVar9) {
            uVar13 = 0;
            if (plVar10 != (long *)0x0) {
              uVar13 = (ulong)plVar9 / (ulong)plVar10;
            }
            unaff_x25 = (long *)((long)plVar9 - uVar13 * (long)plVar10);
          }
        }
      }
      lVar3 = *param_1;
      plVar9 = *(long **)(lVar3 + (long)unaff_x25 * 8);
      if (plVar9 == (long *)0x0) {
        plVar9 = param_1 + 2;
        *aplStack_88[0] = *plVar9;
        *plVar9 = (long)aplStack_88[0];
        *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar9;
        if (*aplStack_88[0] != 0) {
          plVar9 = *(long **)(*aplStack_88[0] + 8);
          if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
            plVar9 = (long *)((ulong)plVar9 & (long)plVar10 - 1U);
          }
          else if (plVar10 <= plVar9) {
            uVar13 = 0;
            if (plVar10 != (long *)0x0) {
              uVar13 = (ulong)plVar9 / (ulong)plVar10;
            }
            plVar9 = (long *)((long)plVar9 - uVar13 * (long)plVar10);
          }
          *(long **)(*param_1 + (long)plVar9 * 8) = aplStack_88[0];
        }
      }
      else {
        *aplStack_88[0] = *plVar9;
        *plVar9 = (long)aplStack_88[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar4 = 1;
      plVar12 = aplStack_88[0];
LAB_1094e0100:
      auVar15._8_8_ = uVar4;
      auVar15._0_8_ = plVar12;
      return auVar15;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      uVar5 = plVar9[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        if ((param_2 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        plVar12 = plVar10;
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar5 = uVar11;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar2 + uVar11 * 8);
            **(long **)(lVar2 + uVar11 * 8) = (long)plVar10;
            plVar12 = plVar9;
          }
        }
        plVar9 = plVar12;
        plVar10 = (long *)*plVar12;
      }
    }
  }
  auVar14._8_8_ = uVar13;
  auVar14._0_8_ = lVar3;
  return auVar14;
}



/* Entry: 1094dff0c; end: 1094e014b;  */

undefined1  [16] FUN_1094dff0c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_68 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1094e0100;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  FUN_1094e014c(aplStack_68,param_1,plVar6,param_3);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_1094dfd00(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*aplStack_68[0] != 0) {
      plVar6 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_68[0];
LAB_1094e0100:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 1094e014c; end: 1094e01cf;  */

void FUN_1094e014c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_1094de4bc(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1094e01d0; end: 1094e0243;  */

undefined8 * FUN_1094e01d0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_1094e0244(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_1094e0450(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 1094e0244; end: 1094e0313;  */

undefined1  [16] FUN_1094e0244(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x25;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *aplStack_88 [3];
  
  plVar8 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar8 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (param_2 >= plVar12 && param_2 != plVar12) {
LAB_1094e028c:
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
        plVar8 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        plVar8 = param_1;
        func_0x000107c31944();
        plVar4 = (long *)param_1[1];
        if (plVar4 != (long *)0x0) {
          uVar5 = (long)plVar4 - 1;
          if (((ulong)plVar4 & uVar5) == 0) {
            unaff_x25 = (long *)(uVar5 & (ulong)plVar8);
          }
          else {
            unaff_x25 = plVar8;
            if (plVar4 <= plVar8) {
              uVar7 = 0;
              if (plVar4 != (long *)0x0) {
                uVar7 = (ulong)plVar8 / (ulong)plVar4;
              }
              unaff_x25 = (long *)((long)plVar8 - uVar7 * (long)plVar4);
            }
          }
          puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
          if (puVar6 != (undefined8 *)0x0) {
            for (plVar12 = (long *)*puVar6; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
              plVar9 = (long *)plVar12[1];
              if (plVar9 == plVar8) {
                plVar9 = param_1;
                func_0x000104c4fbc4(param_1,plVar12 + 2,param_2);
                if (((ulong)plVar9 & 1) != 0) {
                  uVar3 = 0;
                  goto LAB_1094e0644;
                }
              }
              else {
                if (((ulong)plVar4 & uVar5) == 0) {
                  plVar9 = (long *)((ulong)plVar9 & uVar5);
                }
                else if (plVar4 <= plVar9) {
                  uVar7 = 0;
                  if (plVar4 != (long *)0x0) {
                    uVar7 = (ulong)plVar9 / (ulong)plVar4;
                  }
                  plVar9 = (long *)((long)plVar9 - uVar7 * (long)plVar4);
                }
                if (plVar9 != unaff_x25) break;
              }
            }
          }
        }
        FUN_1094e0690(aplStack_88,param_1,plVar8,param_3);
        if ((plVar4 == (long *)0x0) ||
           (*(float *)(param_1 + 4) * (float)plVar4 < (float)(param_1[3] + 1))) {
          uVar5 = 1;
          if ((long *)0x2 < plVar4) {
            uVar5 = (ulong)(((ulong)plVar4 & (long)plVar4 - 1U) != 0);
          }
          uVar5 = uVar5 | (long)plVar4 << 1;
          uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar5 <= uVar7) {
            uVar5 = uVar7;
          }
          FUN_1094e0244(param_1,uVar5);
          plVar4 = (long *)param_1[1];
          if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
            unaff_x25 = (long *)((long)plVar4 - 1U & (ulong)plVar8);
          }
          else {
            unaff_x25 = plVar8;
            if (plVar4 <= plVar8) {
              uVar5 = 0;
              if (plVar4 != (long *)0x0) {
                uVar5 = (ulong)plVar8 / (ulong)plVar4;
              }
              unaff_x25 = (long *)((long)plVar8 - uVar5 * (long)plVar4);
            }
          }
        }
        lVar2 = *param_1;
        plVar8 = *(long **)(lVar2 + (long)unaff_x25 * 8);
        if (plVar8 == (long *)0x0) {
          plVar8 = param_1 + 2;
          *aplStack_88[0] = *plVar8;
          *plVar8 = (long)aplStack_88[0];
          *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar8;
          if (*aplStack_88[0] != 0) {
            plVar8 = *(long **)(*aplStack_88[0] + 8);
            if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
              plVar8 = (long *)((ulong)plVar8 & (long)plVar4 - 1U);
            }
            else if (plVar4 <= plVar8) {
              uVar5 = 0;
              if (plVar4 != (long *)0x0) {
                uVar5 = (ulong)plVar8 / (ulong)plVar4;
              }
              plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar4);
            }
            *(long **)(*param_1 + (long)plVar8 * 8) = aplStack_88[0];
          }
        }
        else {
          *aplStack_88[0] = *plVar8;
          *plVar8 = (long)aplStack_88[0];
        }
        param_1[3] = param_1[3] + 1;
        uVar3 = 1;
        plVar12 = aplStack_88[0];
LAB_1094e0644:
        auVar15._8_8_ = uVar3;
        auVar15._0_8_ = plVar12;
        return auVar15;
      }
      lVar1 = (long)param_2 << 3;
      __Znwm();
      lVar2 = *param_1;
      *param_1 = lVar1;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      plVar4 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
        plVar4 = (long *)((long)plVar4 + 1);
      } while (param_2 != plVar4);
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        plVar12 = (long *)plVar4[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar5);
        }
        else if (param_2 <= plVar12) {
          uVar7 = 0;
          if (param_2 != (long *)0x0) {
            uVar7 = (ulong)plVar12 / (ulong)param_2;
          }
          plVar12 = (long *)((long)plVar12 - uVar7 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar12 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar4;
        while (plVar9 != (long *)0x0) {
          plVar11 = (long *)plVar9[1];
          if (((ulong)param_2 & uVar5) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar5);
          }
          else if (param_2 <= plVar11) {
            uVar7 = 0;
            if (param_2 != (long *)0x0) {
              uVar7 = (ulong)plVar11 / (ulong)param_2;
            }
            plVar11 = (long *)((long)plVar11 - uVar7 * (long)param_2);
          }
          plVar10 = plVar9;
          if (plVar11 != plVar12) {
            lVar1 = *param_1;
            if (*(long *)(lVar1 + (long)plVar11 * 8) == 0) {
              *(long **)(lVar1 + (long)plVar11 * 8) = plVar4;
              plVar12 = plVar11;
            }
            else {
              *plVar4 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar1 + (long)plVar11 * 8);
              **(long **)(lVar1 + (long)plVar11 * 8) = (long)plVar9;
              plVar10 = plVar4;
            }
          }
          plVar4 = plVar10;
          plVar9 = (long *)*plVar10;
        }
      }
    }
    auVar14._8_8_ = plVar8;
    auVar14._0_8_ = lVar2;
    return auVar14;
  }
  if (param_2 < plVar12) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (param_2 <= plVar8) {
      param_2 = plVar8;
    }
    if (param_2 < plVar12) goto LAB_1094e028c;
  }
  auVar13._8_8_ = plVar4;
  auVar13._0_8_ = plVar8;
  return auVar13;
}



/* Entry: 1094e0314; end: 1094e044f;  */

undefined1  [16] FUN_1094e0314(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *unaff_x25;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *aplStack_88 [3];
  
  uVar13 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      uVar13 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      plVar9 = param_1;
      func_0x000107c31944();
      plVar10 = (long *)param_1[1];
      if (plVar10 != (long *)0x0) {
        uVar13 = (long)plVar10 - 1;
        if (((ulong)plVar10 & uVar13) == 0) {
          unaff_x25 = (long *)(uVar13 & (ulong)plVar9);
        }
        else {
          unaff_x25 = plVar9;
          if (plVar10 <= plVar9) {
            uVar5 = 0;
            if (plVar10 != (long *)0x0) {
              uVar5 = (ulong)plVar9 / (ulong)plVar10;
            }
            unaff_x25 = (long *)((long)plVar9 - uVar5 * (long)plVar10);
          }
        }
        puVar7 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
        if (puVar7 != (undefined8 *)0x0) {
          for (plVar12 = (long *)*puVar7; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            plVar8 = (long *)plVar12[1];
            if (plVar8 == plVar9) {
              plVar8 = param_1;
              func_0x000104c4fbc4(param_1,plVar12 + 2,param_2);
              if (((ulong)plVar8 & 1) != 0) {
                uVar4 = 0;
                goto LAB_1094e0644;
              }
            }
            else {
              if (((ulong)plVar10 & uVar13) == 0) {
                plVar8 = (long *)((ulong)plVar8 & uVar13);
              }
              else if (plVar10 <= plVar8) {
                uVar5 = 0;
                if (plVar10 != (long *)0x0) {
                  uVar5 = (ulong)plVar8 / (ulong)plVar10;
                }
                plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar10);
              }
              if (plVar8 != unaff_x25) break;
            }
          }
        }
      }
      FUN_1094e0690(aplStack_88,param_1,plVar9,param_3);
      if ((plVar10 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar10 < (float)(param_1[3] + 1))) {
        uVar13 = 1;
        if ((long *)0x2 < plVar10) {
          uVar13 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
        }
        uVar13 = uVar13 | (long)plVar10 << 1;
        uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar13 <= uVar5) {
          uVar13 = uVar5;
        }
        FUN_1094e0244(param_1,uVar13);
        plVar10 = (long *)param_1[1];
        if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
          unaff_x25 = (long *)((long)plVar10 - 1U & (ulong)plVar9);
        }
        else {
          unaff_x25 = plVar9;
          if (plVar10 <= plVar9) {
            uVar13 = 0;
            if (plVar10 != (long *)0x0) {
              uVar13 = (ulong)plVar9 / (ulong)plVar10;
            }
            unaff_x25 = (long *)((long)plVar9 - uVar13 * (long)plVar10);
          }
        }
      }
      lVar3 = *param_1;
      plVar9 = *(long **)(lVar3 + (long)unaff_x25 * 8);
      if (plVar9 == (long *)0x0) {
        plVar9 = param_1 + 2;
        *aplStack_88[0] = *plVar9;
        *plVar9 = (long)aplStack_88[0];
        *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar9;
        if (*aplStack_88[0] != 0) {
          plVar9 = *(long **)(*aplStack_88[0] + 8);
          if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
            plVar9 = (long *)((ulong)plVar9 & (long)plVar10 - 1U);
          }
          else if (plVar10 <= plVar9) {
            uVar13 = 0;
            if (plVar10 != (long *)0x0) {
              uVar13 = (ulong)plVar9 / (ulong)plVar10;
            }
            plVar9 = (long *)((long)plVar9 - uVar13 * (long)plVar10);
          }
          *(long **)(*param_1 + (long)plVar9 * 8) = aplStack_88[0];
        }
      }
      else {
        *aplStack_88[0] = *plVar9;
        *plVar9 = (long)aplStack_88[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar4 = 1;
      plVar12 = aplStack_88[0];
LAB_1094e0644:
      auVar15._8_8_ = uVar4;
      auVar15._0_8_ = plVar12;
      return auVar15;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      uVar5 = plVar9[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        if ((param_2 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        plVar12 = plVar10;
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar5 = uVar11;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar2 + uVar11 * 8);
            **(long **)(lVar2 + uVar11 * 8) = (long)plVar10;
            plVar12 = plVar9;
          }
        }
        plVar9 = plVar12;
        plVar10 = (long *)*plVar12;
      }
    }
  }
  auVar14._8_8_ = uVar13;
  auVar14._0_8_ = lVar3;
  return auVar14;
}



/* Entry: 1094e0450; end: 1094e068f;  */

undefined1  [16] FUN_1094e0450(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_68 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1094e0644;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  FUN_1094e0690(aplStack_68,param_1,plVar6,param_3);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_1094e0244(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*aplStack_68[0] != 0) {
      plVar6 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_68[0];
LAB_1094e0644:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 1094e0690; end: 1094e073b;  */

void FUN_1094e0690(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_4,param_4[1]);
  }
  else {
    uVar2 = *param_4;
    puVar1[3] = param_4[1];
    puVar1[2] = uVar2;
    puVar1[4] = param_4[2];
  }
  puVar1[5] = param_4[3];
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1094e073c; end: 1094e0773;  */

long * FUN_1094e073c(long *param_1)

{
  long lVar1;
  
  func_0x0001094de6c0(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094e0774; end: 1094e07e7;  */

undefined8 * FUN_1094e0774(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_1094e07e8(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_1094e09f4(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 1094e07e8; end: 1094e08b7;  */

undefined1  [16] FUN_1094e07e8(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x26;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long *aplStack_98 [3];
  
  plVar9 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar9 = param_2;
  }
  plVar13 = (long *)param_1[1];
  if (param_2 >= plVar13 && param_2 != plVar13) {
LAB_1094e0830:
    plVar9 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
        plVar9 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        plVar9 = param_1;
        func_0x000107c2ac8c();
        plVar5 = (long *)param_1[1];
        if (plVar5 != (long *)0x0) {
          uVar6 = (long)plVar5 - 1;
          if (((ulong)plVar5 & uVar6) == 0) {
            unaff_x26 = (long *)(uVar6 & (ulong)plVar9);
          }
          else {
            unaff_x26 = plVar9;
            if (plVar5 <= plVar9) {
              uVar8 = 0;
              if (plVar5 != (long *)0x0) {
                uVar8 = (ulong)plVar9 / (ulong)plVar5;
              }
              unaff_x26 = (long *)((long)plVar9 - uVar8 * (long)plVar5);
            }
          }
          puVar7 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
          if ((puVar7 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar7, plVar13 != (long *)0x0))
          {
            lVar2 = *param_2;
            lVar1 = param_2[1];
            do {
              plVar10 = (long *)plVar13[1];
              if (plVar10 == plVar9) {
                if (plVar13[3] == lVar1) {
                  lVar3 = plVar13[2];
                  _memcmp(lVar3,lVar2,lVar1);
                  if ((int)lVar3 == 0) {
                    uVar4 = 0;
                    goto LAB_1094e0c04;
                  }
                }
              }
              else {
                if (((ulong)plVar5 & uVar6) == 0) {
                  plVar10 = (long *)((ulong)plVar10 & uVar6);
                }
                else if (plVar5 <= plVar10) {
                  uVar8 = 0;
                  if (plVar5 != (long *)0x0) {
                    uVar8 = (ulong)plVar10 / (ulong)plVar5;
                  }
                  plVar10 = (long *)((long)plVar10 - uVar8 * (long)plVar5);
                }
                if (plVar10 != unaff_x26) break;
              }
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
        }
        FUN_1094e0c48(aplStack_98,param_1,plVar9,param_3);
        if ((plVar5 == (long *)0x0) ||
           (*(float *)(param_1 + 4) * (float)plVar5 < (float)(param_1[3] + 1))) {
          uVar6 = 1;
          if ((long *)0x2 < plVar5) {
            uVar6 = (ulong)(((ulong)plVar5 & (long)plVar5 - 1U) != 0);
          }
          uVar6 = uVar6 | (long)plVar5 << 1;
          uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar6 <= uVar8) {
            uVar6 = uVar8;
          }
          FUN_1094e07e8(param_1,uVar6);
          plVar5 = (long *)param_1[1];
          if (((ulong)plVar5 & (long)plVar5 - 1U) == 0) {
            unaff_x26 = (long *)((long)plVar5 - 1U & (ulong)plVar9);
          }
          else {
            unaff_x26 = plVar9;
            if (plVar5 <= plVar9) {
              uVar6 = 0;
              if (plVar5 != (long *)0x0) {
                uVar6 = (ulong)plVar9 / (ulong)plVar5;
              }
              unaff_x26 = (long *)((long)plVar9 - uVar6 * (long)plVar5);
            }
          }
        }
        lVar2 = *param_1;
        plVar9 = *(long **)(lVar2 + (long)unaff_x26 * 8);
        if (plVar9 == (long *)0x0) {
          plVar9 = param_1 + 2;
          *aplStack_98[0] = *plVar9;
          *plVar9 = (long)aplStack_98[0];
          *(long **)(lVar2 + (long)unaff_x26 * 8) = plVar9;
          if (*aplStack_98[0] != 0) {
            plVar9 = *(long **)(*aplStack_98[0] + 8);
            if (((ulong)plVar5 & (long)plVar5 - 1U) == 0) {
              plVar9 = (long *)((ulong)plVar9 & (long)plVar5 - 1U);
            }
            else if (plVar5 <= plVar9) {
              uVar6 = 0;
              if (plVar5 != (long *)0x0) {
                uVar6 = (ulong)plVar9 / (ulong)plVar5;
              }
              plVar9 = (long *)((long)plVar9 - uVar6 * (long)plVar5);
            }
            *(long **)(*param_1 + (long)plVar9 * 8) = aplStack_98[0];
          }
        }
        else {
          *aplStack_98[0] = *plVar9;
          *plVar9 = (long)aplStack_98[0];
        }
        param_1[3] = param_1[3] + 1;
        uVar4 = 1;
        plVar13 = aplStack_98[0];
LAB_1094e0c04:
        auVar16._8_8_ = uVar4;
        auVar16._0_8_ = plVar13;
        return auVar16;
      }
      lVar1 = (long)param_2 << 3;
      __Znwm();
      lVar2 = *param_1;
      *param_1 = lVar1;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      plVar5 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
        plVar5 = (long *)((long)plVar5 + 1);
      } while (param_2 != plVar5);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        plVar13 = (long *)plVar5[1];
        uVar6 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar6) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar6);
        }
        else if (param_2 <= plVar13) {
          uVar8 = 0;
          if (param_2 != (long *)0x0) {
            uVar8 = (ulong)plVar13 / (ulong)param_2;
          }
          plVar13 = (long *)((long)plVar13 - uVar8 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar13 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar5;
        while (plVar10 != (long *)0x0) {
          plVar12 = (long *)plVar10[1];
          if (((ulong)param_2 & uVar6) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar6);
          }
          else if (param_2 <= plVar12) {
            uVar8 = 0;
            if (param_2 != (long *)0x0) {
              uVar8 = (ulong)plVar12 / (ulong)param_2;
            }
            plVar12 = (long *)((long)plVar12 - uVar8 * (long)param_2);
          }
          plVar11 = plVar10;
          if (plVar12 != plVar13) {
            lVar1 = *param_1;
            if (*(long *)(lVar1 + (long)plVar12 * 8) == 0) {
              *(long **)(lVar1 + (long)plVar12 * 8) = plVar5;
              plVar13 = plVar12;
            }
            else {
              *plVar5 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar1 + (long)plVar12 * 8);
              **(long **)(lVar1 + (long)plVar12 * 8) = (long)plVar10;
              plVar11 = plVar5;
            }
          }
          plVar5 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    auVar15._8_8_ = plVar9;
    auVar15._0_8_ = lVar2;
    return auVar15;
  }
  if (param_2 < plVar13) {
    plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar9) {
      plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
    }
    if (param_2 <= plVar9) {
      param_2 = plVar9;
    }
    if (param_2 < plVar13) goto LAB_1094e0830;
  }
  auVar14._8_8_ = plVar5;
  auVar14._0_8_ = plVar9;
  return auVar14;
}



/* Entry: 1094e08b8; end: 1094e09f3;  */

undefined1  [16] FUN_1094e08b8(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *unaff_x26;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long *aplStack_98 [3];
  
  puVar6 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
      puVar6 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      plVar8 = param_1;
      func_0x000107c2ac8c();
      plVar10 = (long *)param_1[1];
      if (plVar10 != (long *)0x0) {
        uVar5 = (long)plVar10 - 1;
        if (((ulong)plVar10 & uVar5) == 0) {
          unaff_x26 = (long *)(uVar5 & (ulong)plVar8);
        }
        else {
          unaff_x26 = plVar8;
          if (plVar10 <= plVar8) {
            uVar9 = 0;
            if (plVar10 != (long *)0x0) {
              uVar9 = (ulong)plVar8 / (ulong)plVar10;
            }
            unaff_x26 = (long *)((long)plVar8 - uVar9 * (long)plVar10);
          }
        }
        puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
        if ((puVar6 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar6, plVar12 != (long *)0x0)) {
          uVar3 = *param_2;
          lVar2 = param_2[1];
          do {
            plVar7 = (long *)plVar12[1];
            if (plVar7 == plVar8) {
              if (plVar12[3] == lVar2) {
                lVar1 = plVar12[2];
                _memcmp(lVar1,uVar3,lVar2);
                if ((int)lVar1 == 0) {
                  uVar3 = 0;
                  goto LAB_1094e0c04;
                }
              }
            }
            else {
              if (((ulong)plVar10 & uVar5) == 0) {
                plVar7 = (long *)((ulong)plVar7 & uVar5);
              }
              else if (plVar10 <= plVar7) {
                uVar9 = 0;
                if (plVar10 != (long *)0x0) {
                  uVar9 = (ulong)plVar7 / (ulong)plVar10;
                }
                plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar10);
              }
              if (plVar7 != unaff_x26) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
      FUN_1094e0c48(aplStack_98,param_1,plVar8,param_3);
      if ((plVar10 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar10 < (float)(param_1[3] + 1))) {
        uVar5 = 1;
        if ((long *)0x2 < plVar10) {
          uVar5 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
        }
        uVar5 = uVar5 | (long)plVar10 << 1;
        uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar5 <= uVar9) {
          uVar5 = uVar9;
        }
        FUN_1094e07e8(param_1,uVar5);
        plVar10 = (long *)param_1[1];
        if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
          unaff_x26 = (long *)((long)plVar10 - 1U & (ulong)plVar8);
        }
        else {
          unaff_x26 = plVar8;
          if (plVar10 <= plVar8) {
            uVar5 = 0;
            if (plVar10 != (long *)0x0) {
              uVar5 = (ulong)plVar8 / (ulong)plVar10;
            }
            unaff_x26 = (long *)((long)plVar8 - uVar5 * (long)plVar10);
          }
        }
      }
      lVar2 = *param_1;
      plVar8 = *(long **)(lVar2 + (long)unaff_x26 * 8);
      if (plVar8 == (long *)0x0) {
        plVar8 = param_1 + 2;
        *aplStack_98[0] = *plVar8;
        *plVar8 = (long)aplStack_98[0];
        *(long **)(lVar2 + (long)unaff_x26 * 8) = plVar8;
        if (*aplStack_98[0] != 0) {
          plVar8 = *(long **)(*aplStack_98[0] + 8);
          if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
            plVar8 = (long *)((ulong)plVar8 & (long)plVar10 - 1U);
          }
          else if (plVar10 <= plVar8) {
            uVar5 = 0;
            if (plVar10 != (long *)0x0) {
              uVar5 = (ulong)plVar8 / (ulong)plVar10;
            }
            plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar10);
          }
          *(long **)(*param_1 + (long)plVar8 * 8) = aplStack_98[0];
        }
      }
      else {
        *aplStack_98[0] = *plVar8;
        *plVar8 = (long)aplStack_98[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar3 = 1;
      plVar12 = aplStack_98[0];
LAB_1094e0c04:
      auVar14._8_8_ = uVar3;
      auVar14._0_8_ = plVar12;
      return auVar14;
    }
    lVar1 = (long)param_2 << 3;
    __Znwm();
    lVar2 = *param_1;
    *param_1 = lVar1;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    puVar4 = (undefined8 *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar4 * 8) = 0;
      puVar4 = (undefined8 *)((long)puVar4 + 1);
    } while (param_2 != puVar4);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      puVar4 = (undefined8 *)plVar8[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        puVar4 = (undefined8 *)((ulong)puVar4 & uVar5);
      }
      else if (param_2 <= puVar4) {
        uVar9 = 0;
        if (param_2 != (undefined8 *)0x0) {
          uVar9 = (ulong)puVar4 / (ulong)param_2;
        }
        puVar4 = (undefined8 *)((long)puVar4 - uVar9 * (long)param_2);
      }
      *(long **)(*param_1 + (long)puVar4 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar8;
      while (plVar10 != (long *)0x0) {
        puVar11 = (undefined8 *)plVar10[1];
        if (((ulong)param_2 & uVar5) == 0) {
          puVar11 = (undefined8 *)((ulong)puVar11 & uVar5);
        }
        else if (param_2 <= puVar11) {
          uVar9 = 0;
          if (param_2 != (undefined8 *)0x0) {
            uVar9 = (ulong)puVar11 / (ulong)param_2;
          }
          puVar11 = (undefined8 *)((long)puVar11 - uVar9 * (long)param_2);
        }
        plVar12 = plVar10;
        if (puVar11 != puVar4) {
          lVar1 = *param_1;
          if (*(long *)(lVar1 + (long)puVar11 * 8) == 0) {
            *(long **)(lVar1 + (long)puVar11 * 8) = plVar8;
            puVar4 = puVar11;
          }
          else {
            *plVar8 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar1 + (long)puVar11 * 8);
            **(long **)(lVar1 + (long)puVar11 * 8) = (long)plVar10;
            plVar12 = plVar8;
          }
        }
        plVar8 = plVar12;
        plVar10 = (long *)*plVar12;
      }
    }
  }
  auVar13._8_8_ = puVar6;
  auVar13._0_8_ = lVar2;
  return auVar13;
}



/* Entry: 1094e09f4; end: 1094e0c47;  */

undefined1  [16] FUN_1094e09f4(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x26;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *aplStack_78 [3];
  
  plVar7 = param_1;
  func_0x000107c2ac8c(param_1,*param_2,param_2[1]);
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x26 = (long *)(uVar10 & (ulong)plVar7);
    }
    else {
      unaff_x26 = plVar7;
      if (plVar9 <= plVar7) {
        uVar6 = 0;
        if (plVar9 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x26 = (long *)((long)plVar7 - uVar6 * (long)plVar9);
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar3 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar3, plVar8 != (long *)0x0)) {
      uVar2 = *param_2;
      lVar5 = param_2[1];
      do {
        plVar4 = (long *)plVar8[1];
        if (plVar4 == plVar7) {
          if (plVar8[3] == lVar5) {
            lVar1 = plVar8[2];
            _memcmp(lVar1,uVar2,lVar5);
            if ((int)lVar1 == 0) {
              uVar2 = 0;
              goto LAB_1094e0c04;
            }
          }
        }
        else {
          if (((ulong)plVar9 & uVar10) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar10);
          }
          else if (plVar9 <= plVar4) {
            uVar6 = 0;
            if (plVar9 != (long *)0x0) {
              uVar6 = (ulong)plVar4 / (ulong)plVar9;
            }
            plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar9);
          }
          if (plVar4 != unaff_x26) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  FUN_1094e0c48(aplStack_78,param_1,plVar7,param_3);
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    uVar10 = 1;
    if ((long *)0x2 < plVar9) {
      uVar10 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)plVar9 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar6) {
      uVar10 = uVar6;
    }
    FUN_1094e07e8(param_1,uVar10);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x26 = plVar7;
      if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x26 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
    }
  }
  lVar5 = *param_1;
  plVar7 = *(long **)(lVar5 + (long)unaff_x26 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *aplStack_78[0] = *plVar7;
    *plVar7 = (long)aplStack_78[0];
    *(long **)(lVar5 + (long)unaff_x26 * 8) = plVar7;
    if (*aplStack_78[0] != 0) {
      plVar7 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar7 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar7;
    *plVar7 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
  plVar8 = aplStack_78[0];
LAB_1094e0c04:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 1094e0c48; end: 1094e0cbf;  */

void FUN_1094e0c48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  uVar2 = *param_4;
  puVar1[3] = param_4[1];
  puVar1[2] = uVar2;
  FUN_1094df878(puVar1 + 4,param_4 + 2);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1094e0cc0; end: 1094e0cf7;  */

long * FUN_1094e0cc0(long *param_1)

{
  long lVar1;
  
  FUN_1094dee4c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094e0cf8; end: 1094e0e57;  */

long FUN_1094e0cf8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  FUN_1094e0cc0(param_1 + 0x218);
  if (*(long *)(param_1 + 0x1a0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x1a0) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x168);
    }
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (0 < *(int *)(param_1 + 0x16c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x1a8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x16c));
  }
  lVar5 = *(long *)(param_1 + 0x1b0);
  if (lVar5 != param_1 + 0x1b8 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x140) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x108);
    }
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  if (0 < *(int *)(param_1 + 0x10c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x148);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x10c));
  }
  lVar5 = *(long *)(param_1 + 0x150);
  if (lVar5 != param_1 + 0x158 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  FUN_1094e073c(param_1 + 0xe0);
  func_0x0001094d8004(param_1 + 0xb8);
  FUN_1094dda24(param_1 + 0x90);
  FUN_1094dda24(param_1 + 0x68);
  func_0x0001094cffd4(param_1 + 0x40);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 1094e0e58; end: 1094e0e9f;  */

undefined8 * FUN_1094e0e58(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  cVar2 = *(char *)(param_1 + 0x49);
  if (cVar2 == *(char *)(param_2 + 0x49)) {
    if (cVar2 != '\0') {
      *param_1 = *param_2;
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        __ZdlPv(param_1[1]);
      }
      uVar10 = param_2[2];
      uVar9 = param_2[1];
      param_1[3] = param_2[3];
      param_1[2] = uVar10;
      param_1[1] = uVar9;
      *(undefined1 *)((long)param_2 + 0x1f) = 0;
      *(undefined1 *)(param_2 + 1) = 0;
      uVar9 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar9;
      param_1[6] = param_2[6];
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
      FUN_1094e11c8(param_1 + 8,param_2 + 8);
      func_0x0001094e12bc(param_1 + 0xd,param_2 + 0xd);
      func_0x0001094e12bc(param_1 + 0x12,param_2 + 0x12);
      func_0x0001094dc088(param_1 + 0x17,param_2 + 0x17);
      func_0x0001094e13b0(param_1 + 0x1c,param_2 + 0x1c);
      if (param_1[0x28] != 0) {
        piVar1 = (int *)(param_1[0x28] + 0x14);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(param_1 + 0x21);
        }
      }
      param_1[0x28] = 0;
      param_1[0x24] = 0;
      param_1[0x23] = 0;
      param_1[0x26] = 0;
      param_1[0x25] = 0;
      if (0 < *(int *)((long)param_1 + 0x10c)) {
        lVar5 = 0;
        lVar6 = param_1[0x29];
        do {
          *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)((long)param_1 + 0x10c));
      }
      piVar1 = (int *)((long)param_2 + 0x10c);
      uVar9 = param_2[0x21];
      iVar4 = *(int *)((long)param_2 + 0x10c);
      param_1[0x22] = param_2[0x22];
      param_1[0x21] = uVar9;
      param_1[0x23] = param_2[0x23];
      uVar9 = param_2[0x24];
      param_1[0x25] = param_2[0x25];
      param_1[0x24] = uVar9;
      uVar9 = param_2[0x26];
      param_1[0x27] = param_2[0x27];
      param_1[0x26] = uVar9;
      param_1[0x28] = param_2[0x28];
      puVar7 = (undefined8 *)param_1[0x2a];
      puVar8 = param_1 + 0x2b;
      if (puVar7 != puVar8) {
        if (puVar7 != (undefined8 *)0x0) {
          _free(puVar7[-1]);
          iVar4 = *piVar1;
        }
        param_1[0x29] = param_1 + 0x22;
        param_1[0x2a] = puVar8;
        puVar7 = puVar8;
      }
      puVar8 = (undefined8 *)param_2[0x2a];
      if (iVar4 < 3) {
        *puVar7 = *puVar8;
        puVar7[1] = puVar8[1];
      }
      else {
        param_1[0x29] = param_2[0x29];
        param_1[0x2a] = puVar8;
        param_2[0x29] = param_2 + 0x22;
        param_2[0x2a] = param_2 + 0x2b;
      }
      *(undefined4 *)(param_2 + 0x21) = 0x42ff0000;
      *(undefined8 *)((long)param_2 + 0x114) = 0;
      piVar1[0] = 0;
      piVar1[1] = 0;
      *(undefined8 *)((long)param_2 + 0x124) = 0;
      *(undefined8 *)((long)param_2 + 0x11c) = 0;
      *(undefined8 *)((long)param_2 + 0x134) = 0;
      *(undefined8 *)((long)param_2 + 300) = 0;
      param_2[0x28] = 0;
      param_2[0x27] = 0;
      if (param_1[0x34] != 0) {
        piVar1 = (int *)(param_1[0x34] + 0x14);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(param_1 + 0x2d);
        }
      }
      param_1[0x34] = 0;
      param_1[0x30] = 0;
      param_1[0x2f] = 0;
      param_1[0x32] = 0;
      param_1[0x31] = 0;
      if (0 < *(int *)((long)param_1 + 0x16c)) {
        lVar5 = 0;
        lVar6 = param_1[0x35];
        do {
          *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)((long)param_1 + 0x16c));
      }
      piVar1 = (int *)((long)param_2 + 0x16c);
      uVar9 = param_2[0x2d];
      iVar4 = *(int *)((long)param_2 + 0x16c);
      param_1[0x2e] = param_2[0x2e];
      param_1[0x2d] = uVar9;
      param_1[0x2f] = param_2[0x2f];
      uVar9 = param_2[0x30];
      param_1[0x31] = param_2[0x31];
      param_1[0x30] = uVar9;
      uVar9 = param_2[0x32];
      param_1[0x33] = param_2[0x33];
      param_1[0x32] = uVar9;
      param_1[0x34] = param_2[0x34];
      puVar7 = (undefined8 *)param_1[0x36];
      puVar8 = param_1 + 0x37;
      if (puVar7 != puVar8) {
        if (puVar7 != (undefined8 *)0x0) {
          _free(puVar7[-1]);
          iVar4 = *piVar1;
        }
        param_1[0x35] = param_1 + 0x2e;
        param_1[0x36] = puVar8;
        puVar7 = puVar8;
      }
      puVar8 = (undefined8 *)param_2[0x36];
      if (iVar4 < 3) {
        *puVar7 = *puVar8;
        puVar7[1] = puVar8[1];
      }
      else {
        param_1[0x35] = param_2[0x35];
        param_1[0x36] = puVar8;
        param_2[0x35] = param_2 + 0x2e;
        param_2[0x36] = param_2 + 0x37;
      }
      *(undefined4 *)(param_2 + 0x2d) = 0x42ff0000;
      *(undefined8 *)((long)param_2 + 0x174) = 0;
      piVar1[0] = 0;
      piVar1[1] = 0;
      *(undefined8 *)((long)param_2 + 0x184) = 0;
      *(undefined8 *)((long)param_2 + 0x17c) = 0;
      *(undefined8 *)((long)param_2 + 0x194) = 0;
      *(undefined8 *)((long)param_2 + 0x18c) = 0;
      param_2[0x34] = 0;
      param_2[0x33] = 0;
      uVar9 = param_2[0x39];
      param_1[0x3a] = param_2[0x3a];
      param_1[0x39] = uVar9;
      uVar9 = param_2[0x3b];
      param_1[0x3c] = param_2[0x3c];
      param_1[0x3b] = uVar9;
      uVar10 = param_2[0x3e];
      uVar9 = param_2[0x3d];
      uVar12 = param_2[0x40];
      uVar11 = param_2[0x3f];
      uVar13 = *(undefined8 *)((long)param_2 + 0x205);
      *(undefined8 *)((long)param_1 + 0x20d) = *(undefined8 *)((long)param_2 + 0x20d);
      *(undefined8 *)((long)param_1 + 0x205) = uVar13;
      param_1[0x3e] = uVar10;
      param_1[0x3d] = uVar9;
      param_1[0x40] = uVar12;
      param_1[0x3f] = uVar11;
      func_0x0001094e14a4(param_1 + 0x43,param_2 + 0x43);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
      return param_1;
    }
  }
  else if (cVar2 == '\0') {
    FUN_1094e1598();
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  else {
    FUN_1094e0cf8();
    *(undefined1 *)(param_1 + 0x49) = 0;
  }
  return param_1;
}



/* Entry: 1094e0ea0; end: 1094e11c7;  */

undefined8 * FUN_1094e0ea0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *param_1 = *param_2;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  uVar10 = param_2[2];
  uVar9 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar10;
  param_1[1] = uVar9;
  *(undefined1 *)((long)param_2 + 0x1f) = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  FUN_1094e11c8(param_1 + 8,param_2 + 8);
  func_0x0001094e12bc(param_1 + 0xd,param_2 + 0xd);
  func_0x0001094e12bc(param_1 + 0x12,param_2 + 0x12);
  func_0x0001094dc088(param_1 + 0x17,param_2 + 0x17);
  func_0x0001094e13b0(param_1 + 0x1c,param_2 + 0x1c);
  if (param_1[0x28] != 0) {
    piVar1 = (int *)(param_1[0x28] + 0x14);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x21);
    }
  }
  param_1[0x28] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  if (0 < *(int *)((long)param_1 + 0x10c)) {
    lVar5 = 0;
    lVar6 = param_1[0x29];
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x10c));
  }
  piVar1 = (int *)((long)param_2 + 0x10c);
  uVar9 = param_2[0x21];
  iVar4 = *(int *)((long)param_2 + 0x10c);
  param_1[0x22] = param_2[0x22];
  param_1[0x21] = uVar9;
  param_1[0x23] = param_2[0x23];
  uVar9 = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar9;
  uVar9 = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x26] = uVar9;
  param_1[0x28] = param_2[0x28];
  puVar7 = (undefined8 *)param_1[0x2a];
  puVar8 = param_1 + 0x2b;
  if (puVar7 != puVar8) {
    if (puVar7 != (undefined8 *)0x0) {
      _free(puVar7[-1]);
      iVar4 = *piVar1;
    }
    param_1[0x29] = param_1 + 0x22;
    param_1[0x2a] = puVar8;
    puVar7 = puVar8;
  }
  puVar8 = (undefined8 *)param_2[0x2a];
  if (iVar4 < 3) {
    *puVar7 = *puVar8;
    puVar7[1] = puVar8[1];
  }
  else {
    param_1[0x29] = param_2[0x29];
    param_1[0x2a] = puVar8;
    param_2[0x29] = param_2 + 0x22;
    param_2[0x2a] = param_2 + 0x2b;
  }
  *(undefined4 *)(param_2 + 0x21) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x114) = 0;
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined8 *)((long)param_2 + 0x124) = 0;
  *(undefined8 *)((long)param_2 + 0x11c) = 0;
  *(undefined8 *)((long)param_2 + 0x134) = 0;
  *(undefined8 *)((long)param_2 + 300) = 0;
  param_2[0x28] = 0;
  param_2[0x27] = 0;
  if (param_1[0x34] != 0) {
    piVar1 = (int *)(param_1[0x34] + 0x14);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x2d);
    }
  }
  param_1[0x34] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  if (0 < *(int *)((long)param_1 + 0x16c)) {
    lVar5 = 0;
    lVar6 = param_1[0x35];
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x16c));
  }
  piVar1 = (int *)((long)param_2 + 0x16c);
  uVar9 = param_2[0x2d];
  iVar4 = *(int *)((long)param_2 + 0x16c);
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2d] = uVar9;
  param_1[0x2f] = param_2[0x2f];
  uVar9 = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x30] = uVar9;
  uVar9 = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x32] = uVar9;
  param_1[0x34] = param_2[0x34];
  puVar7 = (undefined8 *)param_1[0x36];
  puVar8 = param_1 + 0x37;
  if (puVar7 != puVar8) {
    if (puVar7 != (undefined8 *)0x0) {
      _free(puVar7[-1]);
      iVar4 = *piVar1;
    }
    param_1[0x35] = param_1 + 0x2e;
    param_1[0x36] = puVar8;
    puVar7 = puVar8;
  }
  puVar8 = (undefined8 *)param_2[0x36];
  if (iVar4 < 3) {
    *puVar7 = *puVar8;
    puVar7[1] = puVar8[1];
  }
  else {
    param_1[0x35] = param_2[0x35];
    param_1[0x36] = puVar8;
    param_2[0x35] = param_2 + 0x2e;
    param_2[0x36] = param_2 + 0x37;
  }
  *(undefined4 *)(param_2 + 0x2d) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x174) = 0;
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined8 *)((long)param_2 + 0x184) = 0;
  *(undefined8 *)((long)param_2 + 0x17c) = 0;
  *(undefined8 *)((long)param_2 + 0x194) = 0;
  *(undefined8 *)((long)param_2 + 0x18c) = 0;
  param_2[0x34] = 0;
  param_2[0x33] = 0;
  uVar9 = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x39] = uVar9;
  uVar9 = param_2[0x3b];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3b] = uVar9;
  uVar10 = param_2[0x3e];
  uVar9 = param_2[0x3d];
  uVar12 = param_2[0x40];
  uVar11 = param_2[0x3f];
  uVar13 = *(undefined8 *)((long)param_2 + 0x205);
  *(undefined8 *)((long)param_1 + 0x20d) = *(undefined8 *)((long)param_2 + 0x20d);
  *(undefined8 *)((long)param_1 + 0x205) = uVar13;
  param_1[0x3e] = uVar10;
  param_1[0x3d] = uVar9;
  param_1[0x40] = uVar12;
  param_1[0x3f] = uVar11;
  func_0x0001094e14a4(param_1 + 0x43,param_2 + 0x43);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  return param_1;
}



/* Entry: 1094e11c8; end: 1094e1597;  */

void FUN_1094e11c8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x0001094e1268();
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = lVar2;
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar2 + 8);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1094e1598; end: 1094e1793;  */

undefined8 * FUN_1094e1598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  uVar3 = param_2[2];
  uVar2 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  FUN_1094e1794(param_1 + 8,param_2 + 8);
  func_0x0001094e1800(param_1 + 0xd,param_2 + 0xd);
  func_0x0001094e1800(param_1 + 0x12,param_2 + 0x12);
  FUN_1094d77f4(param_1 + 0x17,param_2 + 0x17);
  func_0x0001094e186c(param_1 + 0x1c,param_2 + 0x1c);
  uVar2 = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x21] = uVar2;
  param_1[0x23] = param_2[0x23];
  uVar2 = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar2;
  uVar2 = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x26] = uVar2;
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_1 + 0x22;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = param_1 + 0x2b;
  puVar1 = (undefined8 *)param_2[0x2a];
  if (*(int *)((long)param_2 + 0x10c) < 3) {
    param_1[0x2b] = *puVar1;
    param_1[0x2c] = puVar1[1];
  }
  else {
    param_1[0x29] = param_2[0x29];
    param_1[0x2a] = puVar1;
    param_2[0x29] = param_2 + 0x22;
    param_2[0x2a] = param_2 + 0x2b;
  }
  *(undefined4 *)(param_2 + 0x21) = 0x42ff0000;
  param_2[0x28] = 0;
  param_2[0x27] = 0;
  *(undefined8 *)((long)param_2 + 0x124) = 0;
  *(undefined8 *)((long)param_2 + 0x11c) = 0;
  *(undefined8 *)((long)param_2 + 0x134) = 0;
  *(undefined8 *)((long)param_2 + 300) = 0;
  *(undefined8 *)((long)param_2 + 0x114) = 0;
  *(undefined8 *)((long)param_2 + 0x10c) = 0;
  uVar2 = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2d] = uVar2;
  param_1[0x2f] = param_2[0x2f];
  uVar2 = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x30] = uVar2;
  uVar2 = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x32] = uVar2;
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_1 + 0x2e;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x36] = param_1 + 0x37;
  puVar1 = (undefined8 *)param_2[0x36];
  if (*(int *)((long)param_2 + 0x16c) < 3) {
    param_1[0x37] = *puVar1;
    param_1[0x38] = puVar1[1];
  }
  else {
    param_1[0x35] = param_2[0x35];
    param_1[0x36] = puVar1;
    param_2[0x35] = param_2 + 0x2e;
    param_2[0x36] = param_2 + 0x37;
  }
  *(undefined4 *)(param_2 + 0x2d) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x174) = 0;
  *(undefined8 *)((long)param_2 + 0x16c) = 0;
  *(undefined8 *)((long)param_2 + 0x184) = 0;
  *(undefined8 *)((long)param_2 + 0x17c) = 0;
  *(undefined8 *)((long)param_2 + 0x194) = 0;
  *(undefined8 *)((long)param_2 + 0x18c) = 0;
  param_2[0x34] = 0;
  param_2[0x33] = 0;
  uVar2 = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x39] = uVar2;
  uVar3 = param_2[0x3c];
  uVar2 = param_2[0x3b];
  uVar5 = param_2[0x3e];
  uVar4 = param_2[0x3d];
  uVar7 = param_2[0x40];
  uVar6 = param_2[0x3f];
  uVar8 = *(undefined8 *)((long)param_2 + 0x205);
  *(undefined8 *)((long)param_1 + 0x20d) = *(undefined8 *)((long)param_2 + 0x20d);
  *(undefined8 *)((long)param_1 + 0x205) = uVar8;
  param_1[0x3e] = uVar5;
  param_1[0x3d] = uVar4;
  param_1[0x40] = uVar7;
  param_1[0x3f] = uVar6;
  param_1[0x3c] = uVar3;
  param_1[0x3b] = uVar2;
  func_0x0001094e18d8(param_1 + 0x43,param_2 + 0x43);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  return param_1;
}



/* Entry: 1094e1794; end: 1094e1943;  */

void FUN_1094e1794(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1094e1944; end: 1094e1a27;  */

long FUN_1094e1944(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 1094e1a28; end: 1094e1c7f;  */

undefined1  [16]
FUN_1094e1a28(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x27;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x27 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1094e1c30;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x27) break;
        }
      }
    }
  }
  FUN_1094e1c80(aplStack_78,param_1,plVar6,param_3,param_4,param_5);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_1094cfa50(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_1094e1c30:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 1094e1c80; end: 1094e1d03;  */

void FUN_1094e1c80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_1094e1d04(puVar1 + 2,*param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1094e1d04; end: 1094e1d63;  */

undefined8 * FUN_1094e1d04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0x3f0000003f800000;
  return param_1;
}



/* Entry: 1094e1d64; end: 1094e200f;  */

long FUN_1094e1d64(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



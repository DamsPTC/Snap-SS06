/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a89ef88; end: 10a89f223;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a89ef88(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  int aiStack_70 [2];
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&uStack_90,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_a8,&uStack_90,*param_1);
  if ((undefined8 *)CONCAT44(uStack_8c,uStack_90) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_8c,uStack_90))();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_b0);
  plVar4 = (long *)*param_1;
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  (**(code **)(*plVar4 + 0x128))(auStack_88,plVar4,puVar2,uVar1);
  uStack_90 = 6;
  FUN_10a8419d0(auStack_80,plVar4,*param_3,(param_3[1] - *param_3 >> 3) * -0x5555555555555555);
  puStack_40 = &uStack_90;
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  (**(code **)(*plVar4 + 0x128))(&ppuStack_60,plVar4,puVar2,uVar1);
  aiStack_70[0] = 6;
  ppuStack_68 = ppuStack_60;
  uStack_38 = 3;
  (**(code **)(*plVar4 + 0x58))(plVar4);
  ppuStack_60 = &puStack_a8;
  ppuStack_48 = &puStack_40;
  plStack_58 = plVar4;
  puStack_50 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar3)) &&
       (*(undefined8 **)((long)&ppuStack_68 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&ppuStack_68 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10a89f224; end: 10a89f27f;  */

void FUN_10a89f224(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  lStack_28 = param_1 + 0x28;
  FUN_10a842110(&lStack_28);
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  func_0x00010a004dac(param_1);
  return;
}



/* Entry: 10a89f280; end: 10a89f293;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a89f280(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  int aiStack_70 [2];
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = (undefined8 *)*puVar4;
  func_0x000109884c0c(&uStack_90,puVar3 + 1,*puVar3);
  func_0x000109884820(&puStack_a8,&uStack_90,*puVar3);
  if ((undefined8 *)CONCAT44(uStack_8c,uStack_90) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_8c,uStack_90))();
  }
  (**(code **)(*(long *)*puVar3 + 0x30))(&puStack_b0);
  plVar6 = (long *)*puVar3;
  uVar1 = puVar4[3];
  plVar2 = (long *)puVar4[2];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x27)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x27);
    plVar2 = puVar4 + 2;
  }
  (**(code **)(*plVar6 + 0x128))(auStack_88,plVar6,plVar2,uVar1);
  uStack_90 = 6;
  FUN_10a8419d0(auStack_80,plVar6,puVar4[5],
                ((long)(puVar4[6] - puVar4[5]) >> 3) * -0x5555555555555555);
  puStack_40 = &uStack_90;
  uVar1 = puVar4[9];
  puVar3 = (undefined8 *)puVar4[8];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x57)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x57);
    puVar3 = puVar4 + 8;
  }
  (**(code **)(*plVar6 + 0x128))(&ppuStack_60,plVar6,puVar3,uVar1);
  aiStack_70[0] = 6;
  ppuStack_68 = ppuStack_60;
  uStack_38 = 3;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_a8;
  ppuStack_48 = &puStack_40;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar5)) &&
       (*(undefined8 **)((long)&ppuStack_68 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&ppuStack_68 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x30);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10a89f294; end: 10a89f2f7;  */

void FUN_10a89f294(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    lStack_28 = lVar1 + 0x28;
    FUN_10a842110(&lStack_28);
    if (*(char *)(lVar1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x10));
    }
    func_0x00010a004dac(lVar1);
    __ZdlPv();
  }
  return;
}



/* Entry: 10a89f2f8; end: 10a89f30f;  */

void FUN_10a89f2f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a89f310; end: 10a89f423;  */

void FUN_10a89f310(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar7 = param_4;
  FUN_10a89cc94(param_4,param_3);
  if (lVar7 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  if (*(char *)(lVar7 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 0x20));
  }
  else {
    uVar15 = *(undefined8 *)(lVar7 + 0x20);
    uVar14 = *(undefined8 *)(lVar7 + 0x18);
    param_1[2] = *(undefined8 *)(lVar7 + 0x28);
    param_1[1] = uVar15;
    *param_1 = uVar14;
  }
  if (*(char *)(lVar7 + 0x47) < '\0') {
    func_0x000107c3192c(param_1 + 3,*(undefined8 *)(lVar7 + 0x30),*(undefined8 *)(lVar7 + 0x38));
  }
  else {
    uVar15 = *(undefined8 *)(lVar7 + 0x38);
    uVar14 = *(undefined8 *)(lVar7 + 0x30);
    param_1[5] = *(undefined8 *)(lVar7 + 0x40);
    param_1[4] = uVar15;
    param_1[3] = uVar14;
  }
  lVar8 = *(long *)(lVar7 + 0x50);
  uVar14 = *(undefined8 *)(lVar7 + 0x48);
  param_1[7] = *(undefined8 *)(lVar7 + 0x50);
  param_1[6] = uVar14;
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
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_10a89cd34(param_4,lVar7);
  plVar1 = (long *)(param_2 + 0x140);
  plVar6 = plVar1;
  FUN_10a89d40c(plVar1,param_3);
  if (plVar6 == (long *)0x0) {
    return;
  }
  uVar10 = *(ulong *)(param_2 + 0x148);
  lVar7 = *plVar6;
  uVar9 = plVar6[1];
  uVar11 = uVar10 - 1;
  if ((uVar10 & uVar11) == 0) {
    uVar9 = uVar11 & uVar9;
  }
  else if (uVar10 <= uVar9) {
    uVar13 = 0;
    if (uVar10 != 0) {
      uVar13 = uVar9 / uVar10;
    }
    uVar9 = uVar9 - uVar13 * uVar10;
  }
  plVar5 = *(long **)(*plVar1 + uVar9 * 8);
  do {
    plVar12 = plVar5;
    plVar5 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar6);
  if (plVar12 == (long *)(param_2 + 0x150)) {
LAB_10a89d538:
    if (lVar7 == 0) {
LAB_10a89d568:
      *(undefined8 *)(*plVar1 + uVar9 * 8) = 0;
      lVar7 = *plVar6;
      goto LAB_10a89d570;
    }
    uVar13 = *(ulong *)(lVar7 + 8);
    if ((uVar10 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar10 <= uVar13) {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar13 / uVar10;
      }
      uVar13 = uVar13 - uVar4 * uVar10;
    }
    if (uVar13 != uVar9) goto LAB_10a89d568;
  }
  else {
    uVar13 = plVar12[1];
    if ((uVar10 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar10 <= uVar13) {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar13 / uVar10;
      }
      uVar13 = uVar13 - uVar4 * uVar10;
    }
    if (uVar13 != uVar9) goto LAB_10a89d538;
LAB_10a89d570:
    if (lVar7 == 0) goto LAB_10a89d5ac;
  }
  uVar13 = *(ulong *)(lVar7 + 8);
  if ((uVar10 & uVar11) == 0) {
    uVar13 = uVar13 & uVar11;
  }
  else if (uVar10 <= uVar13) {
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar13 / uVar10;
    }
    uVar13 = uVar13 - uVar11 * uVar10;
  }
  if (uVar13 != uVar9) {
    *(long **)(*plVar1 + uVar13 * 8) = plVar12;
    lVar7 = *plVar6;
  }
LAB_10a89d5ac:
  *plVar12 = lVar7;
  *plVar6 = 0;
  *(long *)(param_2 + 0x158) = *(long *)(param_2 + 0x158) + -1;
  FUN_10a0803a0(plVar6 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 10a89f424; end: 10a89f737;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a89f424(code ***param_1,code **param_2,long *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code ***pppcVar5;
  code ***pppcVar6;
  long *plVar7;
  code **ppcVar8;
  long *plVar9;
  code **ppcVar10;
  long lVar11;
  code **ppcVar12;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  int aiStack_160 [2];
  undefined8 *puStack_158;
  undefined1 auStack_150 [16];
  int aiStack_140 [2];
  code **ppcStack_138;
  code **ppcStack_130;
  code **ppcStack_128;
  undefined1 *puStack_120;
  undefined1 **ppuStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  code **ppcStack_100;
  long *plStack_f8;
  code ***pppcStack_f0;
  code ***pppcStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  code **ppcStack_d0;
  code ***pppcStack_c8;
  code *pcStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  code **ppcStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppcStack_e8 = param_1;
  plVar7 = param_3;
  ppcVar12 = param_2;
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010a89f4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_1)(param_2,param_3,param_1);
      return;
    }
  }
  else {
    pppcVar6 = param_1;
    ppcVar8 = param_2;
    plVar9 = param_3;
    if (*(char *)(param_1 + 8) == '\x02') {
      pppcVar5 = param_1;
      ppcVar10 = param_2;
      FUN_10a688b40();
      if (pppcVar5 == (code ***)0x0) {
        pppcVar6 = (code ***)0x0;
        ppcVar8 = (code **)0x0;
        if (ppcVar10 != (code **)0x0) {
          pppcStack_c8 = (code ***)param_1[1];
          ppcStack_d0 = *param_1;
          if (param_1[1] != (code **)0x0) {
            ppcVar12 = param_1[1] + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppcVar12,0x10);
              if (bVar3) {
                *ppcVar12 = *ppcVar12 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          pcStack_c0 = (code *)0x0;
          plStack_b8 = (long *)0x0;
          uStack_b0 = 0;
          FUN_10a841c20(&pcStack_c0,*param_2,param_2[1],
                        ((long)param_2[1] - (long)*param_2 >> 3) * -0x5555555555555555);
          if (*(char *)((long)param_3 + 0x17) < '\0') {
            func_0x000107c3192c(&lStack_a8,*param_3,param_3[1]);
          }
          else {
            plStack_a0 = (long *)param_3[1];
            lStack_a8 = *param_3;
            lStack_98 = param_3[2];
          }
          pcStack_88 = FUN_10a89f9c4;
          ppuStack_80 = &PTR_FUN_110c24d28;
          plVar7 = (long *)0x40;
          __Znwm();
          plVar7[1] = (long)pppcStack_c8;
          *plVar7 = (long)ppcStack_d0;
          ppcStack_d0 = (code **)0x0;
          pppcStack_c8 = (code ***)0x0;
          plVar7[2] = 0;
          plVar7[3] = 0;
          plVar7[4] = 0;
          plVar9 = plStack_b8;
          FUN_10a841c20(plVar7 + 2,pcStack_c0,plStack_b8,
                        ((long)plStack_b8 - (long)pcStack_c0 >> 3) * -0x5555555555555555);
          if (lStack_98 < 0) {
            plVar9 = plStack_a0;
            func_0x000107c3192c(plVar7 + 5,lStack_a8);
          }
          else {
            plVar7[6] = (long)plStack_a0;
            plVar7[5] = lStack_a8;
            plVar7[7] = lStack_98;
          }
          ppcVar12 = &pcStack_88;
          ppcVar8 = &pcStack_88;
          plStack_78 = plVar7;
          FUN_10a4634ec(ppcVar10);
          (*(code *)*ppuStack_80)(&ppuStack_80);
          if (lStack_98 < 0) {
            __ZdlPv(lStack_a8);
          }
          pppcVar6 = &ppcStack_90;
          ppcStack_90 = &pcStack_c0;
          FUN_10a842110();
          pppcStack_e8 = pppcStack_c8;
          if (pppcStack_c8 != (code ***)0x0) {
            pppcVar5 = pppcStack_c8 + 1;
            do {
              ppcVar10 = *pppcVar5;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppcVar5,0x10);
              if (bVar3) {
                *pppcVar5 = (code **)((long)ppcVar10 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (ppcVar10 == (code **)0x0) {
              (*(*pppcStack_c8)[2])(pppcStack_c8);
              pppcVar6 = pppcStack_e8;
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
          }
        }
      }
      else {
        *pppcVar5 = (code **)CONCAT44((int)((ulong)*pppcVar5 >> 0x20) + 1,(int)*pppcVar5 + 1);
        pppcVar6 = (code ***)*param_1;
        plVar9 = param_3;
        FUN_10a89f738();
        iVar4 = *(int *)((long)pppcVar5 + 4) + -1;
        *(int *)((long)pppcVar5 + 4) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)pppcVar5 = 0;
        }
      }
    }
    param_1 = pppcVar6;
    param_2 = ppcVar8;
    param_3 = plVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
  }
  ___stack_chk_fail();
  ppcStack_90 = ppcVar12;
  FUN_10a842110(&ppcStack_90);
  func_0x00010a004dac(plVar7);
  __ZdlPv();
  FUN_10a89f978(&ppcStack_d0);
  pppcVar6 = param_1;
  __Unwind_Resume();
  pcStack_d8 = FUN_10a89f738;
  ppcStack_100 = ppcVar12;
  plStack_f8 = plVar7;
  pppcStack_f0 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&ppcStack_130,pppcVar6 + 1,*pppcVar6);
  func_0x000109884820(&puStack_168,&ppcStack_130,*pppcVar6);
  if (ppcStack_130 != (code **)0x0) {
    (**(code **)*ppcStack_130)();
  }
  (**(code **)(**pppcVar6 + 0x30))(&puStack_170);
  ppcVar12 = *pppcVar6;
  FUN_10a8419d0(auStack_150,ppcVar12,*param_2,
                ((long)param_2[1] - (long)*param_2 >> 3) * -0x5555555555555555);
  uVar1 = param_3[1];
  plVar7 = (long *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    plVar7 = param_3;
  }
  (**(code **)(*ppcVar12 + 0x128))(&ppcStack_130,ppcVar12,plVar7,uVar1);
  aiStack_140[0] = 6;
  ppcStack_138 = ppcStack_130;
  puStack_110 = auStack_150;
  uStack_108 = 2;
  (**(code **)(*ppcVar12 + 0x58))(ppcVar12);
  ppcStack_130 = (code **)&puStack_168;
  ppuStack_118 = &puStack_110;
  ppcStack_128 = ppcVar12;
  puStack_120 = (undefined1 *)&puStack_170;
  func_0x0001098960c0(aiStack_160);
  if ((3 < aiStack_160[0]) && (puStack_158 != (undefined8 *)0x0)) {
    (**(code **)*puStack_158)();
  }
  lVar11 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_140 + lVar11)) &&
       (*(undefined8 **)((long)&ppcStack_138 + lVar11) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&ppcStack_138 + lVar11))();
    }
    lVar11 = lVar11 + -0x10;
  } while (lVar11 != -0x20);
  if (puStack_170 != (undefined8 *)0x0) {
    (**(code **)*puStack_170)();
  }
  if (puStack_168 != (undefined8 *)0x0) {
    (**(code **)*puStack_168)();
  }
  return;
}



/* Entry: 10a89f738; end: 10a89f977;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a89f738(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined1 auStack_80 [16];
  int aiStack_70 [2];
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined1 **ppuStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_98,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_a0);
  plVar4 = (long *)*param_1;
  FUN_10a8419d0(auStack_80,plVar4,*param_2,(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  (**(code **)(*plVar4 + 0x128))(&ppuStack_60,plVar4,puVar2,uVar1);
  aiStack_70[0] = 6;
  ppuStack_68 = ppuStack_60;
  puStack_40 = auStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar4 + 0x58))(plVar4);
  ppuStack_60 = &puStack_98;
  ppuStack_48 = &puStack_40;
  plStack_58 = plVar4;
  puStack_50 = (undefined1 *)&puStack_a0;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar3)) &&
       (*(undefined8 **)((long)&ppuStack_68 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&ppuStack_68 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a89f978; end: 10a89f9c3;  */

void FUN_10a89f978(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  lStack_28 = param_1 + 0x10;
  FUN_10a842110(&lStack_28);
  func_0x00010a004dac(param_1);
  return;
}



/* Entry: 10a89f9c4; end: 10a89f9d3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a89f9c4(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined1 auStack_80 [16];
  int aiStack_70 [2];
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined1 **ppuStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = (undefined8 *)*puVar3;
  func_0x000109884c0c(&ppuStack_60,puVar2 + 1,*puVar2);
  func_0x000109884820(&puStack_98,&ppuStack_60,*puVar2);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar2 + 0x30))(&puStack_a0);
  plVar5 = (long *)*puVar2;
  FUN_10a8419d0(auStack_80,plVar5,puVar3[2],
                ((long)(puVar3[3] - puVar3[2]) >> 3) * -0x5555555555555555);
  uVar1 = puVar3[6];
  puVar2 = (undefined8 *)puVar3[5];
  if (-1 < (char)*(byte *)((long)puVar3 + 0x3f)) {
    uVar1 = (ulong)*(byte *)((long)puVar3 + 0x3f);
    puVar2 = puVar3 + 5;
  }
  (**(code **)(*plVar5 + 0x128))(&ppuStack_60,plVar5,puVar2,uVar1);
  aiStack_70[0] = 6;
  ppuStack_68 = ppuStack_60;
  puStack_40 = auStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar5 + 0x58))(plVar5);
  ppuStack_60 = &puStack_98;
  ppuStack_48 = &puStack_40;
  plStack_58 = plVar5;
  puStack_50 = (undefined1 *)&puStack_a0;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar4 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar4)) &&
       (*(undefined8 **)((long)&ppuStack_68 + lVar4) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&ppuStack_68 + lVar4))();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a89f9d4; end: 10a89fa27;  */

void FUN_10a89f9d4(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x28));
    }
    lStack_28 = lVar1 + 0x10;
    FUN_10a842110(&lStack_28);
    func_0x00010a004dac(lVar1);
    __ZdlPv();
  }
  return;
}



/* Entry: 10a89fa28; end: 10a89fa3f;  */

void FUN_10a89fa28(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a89fa40; end: 10a89fae7;  */

undefined8 * FUN_10a89fa40(undefined8 *param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10a76ab8c(param_1 + 6);
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(param_1[3]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 10a89fae8; end: 10a89fb2b;  */

void FUN_10a89fae8(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10a89fb2c; end: 10a89fcc3;  */

/* WARNING: Removing unreachable block (ram,0x00010a89fc84) */

void FUN_10a89fb2c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  long lStack_b0;
  long *plStack_a8;
  long lStack_80;
  long *plStack_78;
  char cStack_70;
  undefined1 auStack_68 [48];
  long lStack_38;
  long *plStack_30;
  char cStack_28;
  
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  FUN_10a89eabc(auStack_68,*(long *)(*param_1 + 0x3a8),*puVar5,*(long *)(*param_1 + 0x3a8) + 0x50);
  if (cStack_28 == '\x01') {
    lStack_b0 = lStack_38;
    plStack_a8 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lStack_38 != 0) {
      FUN_10a89ebd0(lStack_38,auStack_68,puVar5 + 2,puVar5 + 8);
    }
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
      }
    }
  }
  else {
    FUN_10a89f310(&lStack_b0,*(long *)(*param_1 + 0x3a8),*puVar5,*(long *)(*param_1 + 0x3a8) + 0x78)
    ;
    if (cStack_70 == '\x01') {
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (lStack_80 != 0) {
        FUN_10a89f424(lStack_80,puVar5 + 2,puVar5 + 8);
      }
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
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
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
        }
      }
    }
    func_0x00010a89fa40(&lStack_b0);
  }
  func_0x00010a89fa94(auStack_68);
  return;
}



/* Entry: 10a89fcc4; end: 10a89fd13;  */

void FUN_10a89fcc4(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x20));
    }
    lStack_28 = lVar1 + 8;
    FUN_10a842110(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a89fd14; end: 10a89fd2b;  */

void FUN_10a89fd14(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a89fd2c; end: 10a89fe2f;  */

void FUN_10a89fd2c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined1 auStack_78 [56];
  long *plStack_40;
  char cStack_38;
  
  func_0x00010ae02ecc(0,*(undefined4 *)(param_2 + 0x10));
  ppuVar4 = &PTR_PTR_113303380;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar4,&PTR_PTR_113303380);
  FUN_10a89fe58(auStack_78,*(long *)(*param_1 + 0x3a8),*(undefined4 *)(param_2 + 0x10),
                *(long *)(*param_1 + 0x3a8) + 0xa0);
  if (cStack_38 == '\x01') {
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a89fe30();
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
  }
  FUN_10a89ff6c(auStack_78);
  return;
}



/* Entry: 10a89fe30; end: 10a89fe57;  */

void FUN_10a89fe30(code **param_1,long param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined ***pppuStack_a0;
  code **ppcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  code *pcStack_50;
  long lStack_28;
  
  if (param_1 != (code **)0x0) {
    if (*(char *)(param_1 + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a89fe54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**param_1)();
      return;
    }
    if (*(char *)(param_1 + 8) == '\x02') {
      lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppcVar5 = param_1;
      FUN_10a688b40();
      if (ppcVar5 == (code **)0x0) {
        pppuVar6 = (undefined ***)0x0;
        if (param_2 != 0) {
          pcStack_50 = param_1[1];
          pcStack_58 = *param_1;
          if (param_1[1] != (code *)0x0) {
            pcVar1 = param_1[1] + 8;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar3) {
                *(long *)pcVar1 = *(long *)pcVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          pcStack_68 = FUN_10a05e8a0;
          ppuStack_60 = &PTR_DAT_110b9fa70;
          ppcVar5 = &pcStack_68;
          uStack_78 = 0;
          uStack_70 = 0;
          FUN_10a4634ec(param_2,&pcStack_68);
          pppuVar6 = &ppuStack_60;
          (*(code *)*ppuStack_60)();
        }
      }
      else {
        *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
        pppuVar6 = (undefined ***)*param_1;
        FUN_10a05e740();
        iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
        *(int *)((long)ppcVar5 + 4) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)ppcVar5 = 0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        return;
      }
      ___stack_chk_fail();
      (*(code *)*ppuStack_60)(ppcVar5 + 1);
      func_0x00010a004dac(&uStack_78);
      pppuVar7 = pppuVar6;
      __Unwind_Resume();
      pcStack_88 = FUN_10a05e740;
      pppuStack_a0 = pppuVar6;
      ppcStack_98 = ppcVar5;
      puStack_90 = &stack0xfffffffffffffff0;
      func_0x000109884c0c(&puStack_b0,pppuVar7 + 1,*pppuVar7);
      func_0x000109884820(&puStack_a8,&puStack_b0,*pppuVar7);
      if (puStack_b0 != (undefined8 *)0x0) {
        (**(code **)*puStack_b0)();
      }
      (**(code **)(**pppuVar7 + 0x30))(&puStack_b0);
      FUN_10a05e824(*pppuVar7,&puStack_b0,&puStack_a8);
      if (puStack_b0 != (undefined8 *)0x0) {
        (**(code **)*puStack_b0)();
      }
      if (puStack_a8 != (undefined8 *)0x0) {
        (**(code **)*puStack_a8)();
      }
      return;
    }
  }
  return;
}



/* Entry: 10a89fe58; end: 10a89ff6b;  */

void FUN_10a89fe58(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar7 = param_4;
  FUN_10a89ce9c(param_4,param_3);
  if (lVar7 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  if (*(char *)(lVar7 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 0x20));
  }
  else {
    uVar15 = *(undefined8 *)(lVar7 + 0x20);
    uVar14 = *(undefined8 *)(lVar7 + 0x18);
    param_1[2] = *(undefined8 *)(lVar7 + 0x28);
    param_1[1] = uVar15;
    *param_1 = uVar14;
  }
  if (*(char *)(lVar7 + 0x47) < '\0') {
    func_0x000107c3192c(param_1 + 3,*(undefined8 *)(lVar7 + 0x30),*(undefined8 *)(lVar7 + 0x38));
  }
  else {
    uVar15 = *(undefined8 *)(lVar7 + 0x38);
    uVar14 = *(undefined8 *)(lVar7 + 0x30);
    param_1[5] = *(undefined8 *)(lVar7 + 0x40);
    param_1[4] = uVar15;
    param_1[3] = uVar14;
  }
  lVar8 = *(long *)(lVar7 + 0x50);
  uVar14 = *(undefined8 *)(lVar7 + 0x48);
  param_1[7] = *(undefined8 *)(lVar7 + 0x50);
  param_1[6] = uVar14;
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
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_10a89cf3c(param_4,lVar7);
  plVar1 = (long *)(param_2 + 0x140);
  plVar6 = plVar1;
  FUN_10a89d40c(plVar1,param_3);
  if (plVar6 == (long *)0x0) {
    return;
  }
  uVar10 = *(ulong *)(param_2 + 0x148);
  lVar7 = *plVar6;
  uVar9 = plVar6[1];
  uVar11 = uVar10 - 1;
  if ((uVar10 & uVar11) == 0) {
    uVar9 = uVar11 & uVar9;
  }
  else if (uVar10 <= uVar9) {
    uVar13 = 0;
    if (uVar10 != 0) {
      uVar13 = uVar9 / uVar10;
    }
    uVar9 = uVar9 - uVar13 * uVar10;
  }
  plVar5 = *(long **)(*plVar1 + uVar9 * 8);
  do {
    plVar12 = plVar5;
    plVar5 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar6);
  if (plVar12 == (long *)(param_2 + 0x150)) {
LAB_10a89d538:
    if (lVar7 == 0) {
LAB_10a89d568:
      *(undefined8 *)(*plVar1 + uVar9 * 8) = 0;
      lVar7 = *plVar6;
      goto LAB_10a89d570;
    }
    uVar13 = *(ulong *)(lVar7 + 8);
    if ((uVar10 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar10 <= uVar13) {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar13 / uVar10;
      }
      uVar13 = uVar13 - uVar4 * uVar10;
    }
    if (uVar13 != uVar9) goto LAB_10a89d568;
  }
  else {
    uVar13 = plVar12[1];
    if ((uVar10 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar10 <= uVar13) {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar13 / uVar10;
      }
      uVar13 = uVar13 - uVar4 * uVar10;
    }
    if (uVar13 != uVar9) goto LAB_10a89d538;
LAB_10a89d570:
    if (lVar7 == 0) goto LAB_10a89d5ac;
  }
  uVar13 = *(ulong *)(lVar7 + 8);
  if ((uVar10 & uVar11) == 0) {
    uVar13 = uVar13 & uVar11;
  }
  else if (uVar10 <= uVar13) {
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar13 / uVar10;
    }
    uVar13 = uVar13 - uVar11 * uVar10;
  }
  if (uVar13 != uVar9) {
    *(long **)(*plVar1 + uVar13 * 8) = plVar12;
    lVar7 = *plVar6;
  }
LAB_10a89d5ac:
  *plVar12 = lVar7;
  *plVar6 = 0;
  *(long *)(param_2 + 0x158) = *(long *)(param_2 + 0x158) + -1;
  FUN_10a0803a0(plVar6 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 10a89ff6c; end: 10a89ffbf;  */

undefined8 * FUN_10a89ff6c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010a042b54(param_1 + 6);
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(param_1[3]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 10a89ffc0; end: 10a89ffdb;  */

void FUN_10a89ffc0(void)

{
  return;
}



/* Entry: 10a89ffdc; end: 10a8a00df;  */

void FUN_10a89ffdc(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined1 auStack_78 [56];
  long *plStack_40;
  char cStack_38;
  
  func_0x00010ae02ecc(0,*(undefined4 *)(param_2 + 0x10));
  ppuVar4 = &PTR_PTR_113303380;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar4,&PTR_PTR_113303380);
  FUN_10a89fe58(auStack_78,*(long *)(*param_1 + 0x3a8),*(undefined4 *)(param_2 + 0x10),
                *(long *)(*param_1 + 0x3a8) + 0x118);
  if (cStack_38 == '\x01') {
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a89fe30();
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
  }
  FUN_10a89ff6c(auStack_78);
  return;
}



/* Entry: 10a8a00e0; end: 10a8a00fb;  */

void FUN_10a8a00e0(void)

{
  return;
}



/* Entry: 10a8a00fc; end: 10a8a01ff;  */

void FUN_10a8a00fc(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined1 auStack_78 [56];
  long *plStack_40;
  char cStack_38;
  
  func_0x00010ae02ecc(0,*(undefined4 *)(param_2 + 0x10));
  ppuVar4 = &PTR_PTR_1133033c8;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar4,&PTR_PTR_1133033c8);
  FUN_10a89fe58(auStack_78,*(long *)(*param_1 + 0x3a8),*(undefined4 *)(param_2 + 0x10),
                *(long *)(*param_1 + 0x3a8) + 200);
  if (cStack_38 == '\x01') {
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a89fe30();
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
  }
  FUN_10a89ff6c(auStack_78);
  return;
}



/* Entry: 10a8a0200; end: 10a8a021b;  */

void FUN_10a8a0200(void)

{
  return;
}



/* Entry: 10a8a021c; end: 10a8a05df;  */

void FUN_10a8a021c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 ******ppppppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 ******ppppppuVar8;
  ulong uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 *****pppppuStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 *****pppppuStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  long lStack_80;
  long *plStack_78;
  int aiStack_70 [2];
  long lStack_68;
  long *plStack_60;
  char cStack_58;
  
  uVar9 = *(ulong *)(*param_1 + 0x3a8);
  FUN_10a89c598(aiStack_70,uVar9,*(undefined4 *)(param_2 + 0x10));
  if (cStack_58 != '\x01') {
    return;
  }
  iStack_88 = aiStack_70[0];
  plStack_78 = plStack_60;
  lStack_80 = lStack_68;
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar7 = (ulong)*(uint *)(param_2 + 0x14);
  FUN_10a85ec08();
  if (0x7ffffffffffffff7 < uVar9) {
    func_0x000109ffde50();
    goto LAB_10a8a0578;
  }
  if (uVar9 < 0x17) {
    uStack_90 = CONCAT17((char)uVar9,(undefined7)uStack_90);
    ppppppuVar8 = &pppppuStack_a0;
    if (uVar9 != 0) goto LAB_10a8a02ec;
    uVar7 = 0;
  }
  else {
    ppppppuVar3 = (undefined8 ******)0x19;
    if ((uVar9 | 7) != 0x17) {
      ppppppuVar3 = (undefined8 ******)((uVar9 | 7) + 1);
    }
    ppppppuVar8 = ppppppuVar3;
    __Znwm();
    uStack_90 = (ulong)ppppppuVar3 | 0x8000000000000000;
    pppppuStack_a0 = ppppppuVar8;
    uStack_98 = uVar9;
LAB_10a8a02ec:
    _memmove(ppppppuVar8,uVar7,uVar9);
  }
  *(undefined1 *)((long)ppppppuVar8 + uVar9) = 0;
  if (iStack_88 != 100) {
    if (*(char *)(param_2 + 0x2f) < '\0') {
      func_0x000107c3192c(&pppppuStack_c0,*(undefined8 *)(param_2 + 0x18),
                          *(undefined8 *)(param_2 + 0x20));
    }
    else {
      uStack_b8 = *(ulong *)(param_2 + 0x20);
      pppppuStack_c0 = *(undefined8 ******)(param_2 + 0x18);
      uStack_b0 = *(ulong *)(param_2 + 0x28);
    }
    goto LAB_10a8a03a4;
  }
  uVar9 = (ulong)*(uint *)(param_2 + 0x14);
  func_0x00010a85ec3c(uVar9);
  if (0x7ffffffffffffff7 < uVar7) {
    func_0x000109ffde50();
LAB_10a8a0578:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8a057c);
    (*pcVar6)();
  }
  if (uVar7 < 0x17) {
    uStack_b0 = CONCAT17((char)uVar7,(undefined7)uStack_b0);
    ppppppuVar8 = &pppppuStack_c0;
    if (uVar7 != 0) goto LAB_10a8a0380;
  }
  else {
    ppppppuVar3 = (undefined8 ******)0x19;
    if ((uVar7 | 7) != 0x17) {
      ppppppuVar3 = (undefined8 ******)((uVar7 | 7) + 1);
    }
    ppppppuVar8 = ppppppuVar3;
    __Znwm();
    uStack_b0 = (ulong)ppppppuVar3 | 0x8000000000000000;
    pppppuStack_c0 = ppppppuVar8;
    uStack_b8 = uVar7;
LAB_10a8a0380:
    _memmove(ppppppuVar8,uVar9,uVar7);
  }
  *(undefined1 *)((long)ppppppuVar8 + uVar7) = 0;
LAB_10a8a03a4:
  func_0x00010ae02ecc(0,*(undefined4 *)(param_2 + 0x10));
  FUN_10ae03140();
  FUN_10ae03140();
  ppuVar10 = &PTR_PTR_113303410;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  FUN_10ae0314c();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar10,&PTR_PTR_113303410);
  plVar1 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar2 = plStack_78 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (lStack_80 != 0) {
    FUN_10a7576b4(lStack_80,&pppppuStack_a0,&pppppuStack_c0);
  }
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    do {
      lVar11 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((long)uStack_b0 < 0) {
    __ZdlPv(pppppuStack_c0);
  }
  if ((long)uStack_90 < 0) {
    __ZdlPv(pppppuStack_a0);
  }
  plVar1 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar2 = plStack_78 + 1;
    do {
      lVar11 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if ((cStack_58 == '\x01') && (plStack_60 != (long *)0x0)) {
    plVar1 = plStack_60 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
    }
  }
  return;
}



/* Entry: 10a8a05e0; end: 10a8a0623;  */

void FUN_10a8a05e0(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10a8a0624; end: 10a8a07a3;  */

void FUN_10a8a0624(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  char cStack_38;
  
  lVar7 = *(long *)(*param_1 + 0x3a8);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  lVar6 = lVar7 + 0x168;
  FUN_10a89d23c(lVar6,uVar3);
  if (lVar6 == 0) {
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    cStack_38 = '\0';
  }
  else {
    if (*(char *)(lVar6 + 0x2f) < '\0') {
      func_0x000107c3192c(&uStack_60,*(undefined8 *)(lVar6 + 0x18),*(undefined8 *)(lVar6 + 0x20));
    }
    else {
      uStack_58 = *(undefined8 *)(lVar6 + 0x20);
      uStack_60 = *(ulong *)(lVar6 + 0x18);
      uStack_50 = *(undefined8 *)(lVar6 + 0x28);
    }
    plStack_40 = *(long **)(lVar6 + 0x38);
    puStack_48 = *(undefined8 **)(lVar6 + 0x30);
    if (*(long *)(lVar6 + 0x38) != 0) {
      plVar1 = (long *)(*(long *)(lVar6 + 0x38) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    cStack_38 = '\x01';
    FUN_10a89d2dc(lVar7 + 0x168,lVar6);
    FUN_10a89dc3c(lVar7 + 0x140,uVar3);
    plVar1 = plStack_40;
    if (cStack_38 == '\x01') {
      if (plStack_40 != (long *)0x0) {
        plVar2 = plStack_40 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (puStack_48 != (undefined8 *)0x0) {
        if (*(char *)(puStack_48 + 8) == '\x01') {
          (*(code *)*puStack_48)(param_2 + 0x18,puStack_48);
        }
        else if (*(char *)(puStack_48 + 8) == '\x02') {
          FUN_10a05aad0(puStack_48,param_2 + 0x18);
        }
      }
      if (plVar1 != (long *)0x0) {
        plVar2 = plVar1 + 1;
        do {
          lVar6 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
  }
  FUN_10a8a07a4(&uStack_60);
  return;
}



/* Entry: 10a8a07a4; end: 10a8a07e7;  */

undefined8 * FUN_10a8a07a4(undefined8 *param_1)

{
  if (*(char *)(param_1 + 5) == '\x01') {
    func_0x00010a07a8a8(param_1 + 3);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 10a8a07e8; end: 10a8a082b;  */

void FUN_10a8a07e8(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10a8a082c; end: 10a8a1b63;  */

/* WARNING: Possible PIC construction at 0x00010a8a1c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a8a1c08) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_10a8a082c(long *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  long *plVar1;
  ulong uVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined *puVar8;
  undefined1 ****ppppuVar9;
  undefined5 *puVar10;
  undefined1 ***pppuVar11;
  undefined1 *****pppppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  undefined8 **ppuVar16;
  undefined4 *puVar17;
  long lVar18;
  undefined1 **ppuVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long lStack_2f0;
  long *plStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  uint uStack_2b0;
  undefined2 uStack_2ac;
  undefined2 uStack_2aa;
  undefined6 uStack_2a8;
  undefined1 uStack_2a2;
  undefined1 uStack_2a1;
  undefined1 uStack_2a0;
  undefined5 uStack_29f;
  undefined1 uStack_29a;
  byte bStack_299;
  undefined8 uStack_298;
  undefined1 ****ppppuStack_290;
  undefined1 ***pppuStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 ****ppppuStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  char cStack_249;
  undefined5 uStack_248;
  undefined3 uStack_243;
  undefined5 uStack_240;
  undefined1 uStack_23b;
  undefined2 uStack_23a;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 ****ppppuStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 ****ppppuStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 ****ppppuStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined5 uStack_1c8;
  undefined3 uStack_1c3;
  undefined5 uStack_1c0;
  undefined1 uStack_1bb;
  undefined2 uStack_1ba;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 ****ppppuStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  byte abStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  byte bStack_161;
  long *plStack_160;
  long lStack_158;
  long lStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  int iStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 auStack_118 [56];
  long lStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [40];
  long lStack_a8;
  undefined *puStack_a0;
  long *plStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2f0 = 0;
  plStack_2e8 = (long *)0x0;
  plVar7 = *(long **)(param_2 + 8);
  puVar17 = param_2;
  if (((plVar7 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_2e8 = plVar7, plVar7 == (long *)0x0)) ||
     (lStack_2f0 = *(long *)(param_2 + 6), lStack_2f0 == 0)) goto LAB_10a8a1900;
  lVar21 = *(long *)(param_2 + 4);
  lStack_158 = param_1[1];
  plStack_160 = (long *)*param_1;
  lStack_150 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_140 = param_1[4];
  plStack_148 = (long *)param_1[3];
  lStack_138 = param_1[5];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iStack_130 = (int)param_1[6];
  lStack_128 = param_1[7];
  lStack_120 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_118,param_1 + 9);
  lStack_e0 = param_1[0x10];
  uStack_d8 = (undefined4)param_1[0x11];
  FUN_10a0424c4(auStack_d0,param_1 + 0x12);
  lVar21 = *(long *)(lVar21 + 0x18);
  if (iStack_130 - 200U < 100) {
    FUN_109ffe064(&uStack_178,lStack_128);
    if (-1 < (char)bStack_161) {
      uStack_170 = (ulong)bStack_161;
    }
    if (uStack_170 == 0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        param_5 = (undefined1 *)0x5ad;
        func_0x00010ae06f08(0,1);
      }
      lStack_a8._0_4_ = 1;
      puStack_a0 = &UNK_10f67f80a;
      puVar17 = (undefined4 *)&lStack_a8;
      FUN_10a865734(lVar21,puVar17);
    }
    else {
      plStack_90 = (long *)0x0;
      FUN_109fc89b4(abStack_188,&uStack_178,&lStack_a8);
      if (plStack_90 == &lStack_a8) {
        lVar18 = 0x20;
LAB_10a8a0a40:
        (**(code **)(*plStack_90 + lVar18))();
      }
      else if (plStack_90 != (long *)0x0) {
        lVar18 = 0x28;
        goto LAB_10a8a0a40;
      }
      if (abStack_188[0] == 9) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          param_5 = (undefined1 *)0x5b8;
          func_0x00010ae06f08(0,1);
        }
        ppppuStack_1a8 = (undefined1 ****)CONCAT44(ppppuStack_1a8._4_4_,1);
        puStack_1a0 = &UNK_10f67f897;
        FUN_10a865734(lVar21,&ppppuStack_1a8);
      }
      else {
        uStack_1b8._7_1_ = '\r';
        uStack_1c8 = 0x6674616c70;
        uStack_1c3 = 0x6d726f;
        uStack_1c0 = 0x6e656b6f54;
        uStack_1bb = 0;
        ppppuStack_1a8 = (undefined1 ****)abStack_188;
        puStack_1a0 = (undefined *)0x0;
        uStack_198 = 0;
        uStack_190 = 0x8000000000000000;
        if (abStack_188[0] == 1) {
          puVar8 = puStack_180;
          func_0x0001093793a4(puStack_180,&uStack_1c8);
          puStack_1a0 = puVar8;
          if (uStack_1b8._7_1_ < '\0') {
            __ZdlPv(CONCAT35(uStack_1c3,uStack_1c8));
          }
        }
        else if (abStack_188[0] == 2) {
          uStack_198 = *(undefined8 *)(puStack_180 + 8);
        }
        else {
          uStack_190 = 1;
        }
        uStack_1d8._7_1_ = '\f';
        ppppuStack_1e8 = (undefined1 ****)0x6e65697265707865;
        puStack_1e0 = (undefined *)CONCAT35(puStack_1e0._5_3_,0x64496563);
        uStack_1c8 = SUB85(abStack_188,0);
        uStack_1c3 = (undefined3)((ulong)abStack_188 >> 0x28);
        uStack_1c0 = 0;
        uStack_1bb = 0;
        uStack_1ba = 0;
        uStack_1b8 = 0;
        uStack_1b0 = 0x8000000000000000;
        if (abStack_188[0] == 1) {
          puVar8 = puStack_180;
          func_0x0001093793a4(puStack_180,&ppppuStack_1e8);
          uStack_1c0 = SUB85(puVar8,0);
          uStack_1bb = (undefined1)((ulong)puVar8 >> 0x28);
          uStack_1ba = (undefined2)((ulong)puVar8 >> 0x30);
          if (uStack_1d8._7_1_ < '\0') {
            __ZdlPv(ppppuStack_1e8);
          }
        }
        else if (abStack_188[0] == 2) {
          uStack_1b8 = *(undefined8 *)(puStack_180 + 8);
        }
        else {
          uStack_1b0 = 1;
        }
        uStack_1f8._7_1_ = '\t';
        ppppuStack_208 = (undefined1 ****)0x496e6f6973736573;
        puStack_200 = (undefined *)CONCAT62(puStack_200._2_6_,100);
        ppppuStack_1e8 = (undefined1 ****)abStack_188;
        puStack_1e0 = (undefined *)0x0;
        uStack_1d8 = 0;
        uStack_1d0 = 0x8000000000000000;
        if (abStack_188[0] == 1) {
          puVar8 = puStack_180;
          func_0x0001093793a4(puStack_180,&ppppuStack_208);
          puStack_1e0 = puVar8;
          if (uStack_1f8._7_1_ < '\0') {
            __ZdlPv(ppppuStack_208);
          }
        }
        else if (abStack_188[0] == 2) {
          uStack_1d8 = *(undefined8 *)(puStack_180 + 8);
        }
        else {
          uStack_1d0 = 1;
        }
        uStack_218._7_1_ = '\f';
        ppppuStack_228 = (undefined1 ****)0x6d726f6674616c70;
        puStack_220 = (undefined *)CONCAT35(puStack_220._5_3_,0x65707954);
        ppppuStack_208 = (undefined1 ****)abStack_188;
        puStack_200 = (undefined *)0x0;
        uStack_1f8 = 0;
        uStack_1f0 = 0x8000000000000000;
        if (abStack_188[0] == 1) {
          puVar8 = puStack_180;
          func_0x0001093793a4(puStack_180,&ppppuStack_228);
          puStack_200 = puVar8;
          if (uStack_218._7_1_ < '\0') {
            __ZdlPv(ppppuStack_228);
          }
        }
        else if (abStack_188[0] == 2) {
          uStack_1f8 = *(undefined8 *)(puStack_180 + 8);
        }
        else {
          uStack_1f0 = 1;
        }
        uStack_238._7_1_ = '\r';
        uStack_248 = 0x7365547369;
        uStack_243 = 0x6e6974;
        uStack_240 = 0x65646f4d67;
        uStack_23b = 0;
        ppppuStack_228 = (undefined1 ****)abStack_188;
        puStack_220 = (undefined *)0x0;
        uStack_218 = 0;
        uStack_210 = 0x8000000000000000;
        if (abStack_188[0] == 1) {
          puVar8 = puStack_180;
          func_0x0001093793a4(puStack_180,&uStack_248);
          puStack_220 = puVar8;
          if (uStack_238._7_1_ < '\0') {
            __ZdlPv(CONCAT35(uStack_243,uStack_248));
          }
        }
        else if (abStack_188[0] == 2) {
          uStack_218 = *(undefined8 *)(puStack_180 + 8);
        }
        else {
          uStack_210 = 1;
        }
        uStack_260 = CONCAT17(0x14,(undefined7)uStack_260);
        puStack_268 = (undefined *)0x616e45676e696b61;
        ppppuStack_270 = (undefined1 ****)0x6d686374614d7369;
        uStack_260 = CONCAT35(uStack_260._5_3_,0x64656c62);
        uStack_248 = SUB85(abStack_188,0);
        uStack_243 = (undefined3)((ulong)abStack_188 >> 0x28);
        uStack_240 = 0;
        uStack_23b = 0;
        uStack_23a = 0;
        uStack_238 = 0;
        uStack_230 = 0x8000000000000000;
        if (abStack_188[0] == 1) {
          puVar8 = puStack_180;
          func_0x0001093793a4(puStack_180,&ppppuStack_270);
          uStack_240 = SUB85(puVar8,0);
          uStack_23b = (undefined1)((ulong)puVar8 >> 0x28);
          uStack_23a = (undefined2)((ulong)puVar8 >> 0x30);
          if (uStack_260 < 0) {
            __ZdlPv(ppppuStack_270);
          }
        }
        else if (abStack_188[0] == 2) {
          uStack_238 = *(undefined8 *)(puStack_180 + 8);
        }
        else {
          uStack_230 = 1;
        }
        cStack_249 = '\0';
        ppppuStack_270 = (undefined1 ****)abStack_188;
        puStack_268 = (undefined *)0x0;
        uStack_260 = 0;
        uStack_258 = 0x8000000000000000;
        if (abStack_188[0] == 2) {
          uStack_260 = *(long *)(puStack_180 + 8);
        }
        else if (abStack_188[0] == 1) {
          puStack_268 = puStack_180 + 8;
        }
        else {
          uStack_258 = 1;
        }
        ppppuVar9 = (undefined1 ****)&ppppuStack_1a8;
        func_0x000109379420(ppppuVar9,&ppppuStack_270);
        if (((ulong)ppppuVar9 & 1) == 0) {
          lVar18 = *(long *)(lVar21 + 0x378);
          func_0x00010937b950(&ppppuStack_1a8);
          func_0x00010937c804(&ppppuStack_270);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (lVar18 + 0x60,&ppppuStack_270);
          if (uStack_260 < 0) {
            __ZdlPv(ppppuStack_270);
          }
        }
        ppppuStack_270 = (undefined1 ****)abStack_188;
        puStack_268 = (undefined *)0x0;
        uStack_260 = 0;
        uStack_258 = 0x8000000000000000;
        if (abStack_188[0] == 2) {
          uStack_260 = *(long *)(puStack_180 + 8);
        }
        else if (abStack_188[0] == 1) {
          puStack_268 = puStack_180 + 8;
        }
        else {
          uStack_258 = 1;
        }
        puVar10 = &uStack_1c8;
        func_0x000109379420(puVar10,&ppppuStack_270);
        if (((ulong)puVar10 & 1) == 0) {
          lVar22 = *(long *)(lVar21 + 0x378);
          lVar18 = (long)*(char *)(lVar22 + 0x47);
          if (lVar18 < 0) {
            lVar18 = *(long *)(lVar22 + 0x38);
          }
          if (lVar18 == 0) {
            func_0x00010937b950(&uStack_1c8);
            func_0x00010937c804(&ppppuStack_270);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (lVar22 + 0x30,&ppppuStack_270);
            if (uStack_260 < 0) {
              __ZdlPv(ppppuStack_270);
            }
          }
        }
        ppppuStack_270 = (undefined1 ****)abStack_188;
        puStack_268 = (undefined *)0x0;
        uStack_260 = 0;
        uStack_258 = 0x8000000000000000;
        if (abStack_188[0] == 2) {
          uStack_260 = *(long *)(puStack_180 + 8);
        }
        else if (abStack_188[0] == 1) {
          puStack_268 = puStack_180 + 8;
        }
        else {
          uStack_258 = 1;
        }
        ppppuVar9 = (undefined1 ****)&ppppuStack_208;
        func_0x000109379420(ppppuVar9,&ppppuStack_270);
        if (((ulong)ppppuVar9 & 1) == 0) {
          lVar18 = *(long *)(lVar21 + 0x378);
          func_0x00010937b950(&ppppuStack_208);
          func_0x00010937c804(&ppppuStack_270);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (lVar18 + 0x78,&ppppuStack_270);
          if (uStack_260 < 0) {
            __ZdlPv(ppppuStack_270);
          }
        }
        lVar22 = *(long *)(lVar21 + 0x378);
        lVar18 = (long)*(char *)(lVar22 + 0x5f);
        if (lVar18 < 0) {
          plVar7 = *(long **)(lVar22 + 0x48);
          lVar18 = *(long *)(lVar22 + 0x50);
        }
        else {
          plVar7 = (long *)(lVar22 + 0x48);
        }
        if ((lVar18 == 0x18) &&
           ((*plVar7 == 0x2e6970612e706367 && plVar7[1] == 0x7461686370616e73) &&
            plVar7[2] == 0x3334343a6d6f632e)) {
          lVar18 = (long)*(char *)(lVar22 + 0x8f);
          if (lVar18 < 0) {
            plVar7 = *(long **)(lVar22 + 0x78);
            lVar18 = *(long *)(lVar22 + 0x80);
          }
          else {
            plVar7 = (long *)(lVar22 + 0x78);
          }
          if ((lVar18 != 8) || (*plVar7 != 0x7461686370616e73)) {
            (**(code **)(**(long **)(lVar21 + 0x368) + 0x100))
                      (*(long **)(lVar21 + 0x368),"auth_token_format","oauth2");
          }
        }
        ppppuStack_270 = (undefined1 ****)abStack_188;
        puStack_268 = (undefined *)0x0;
        uStack_260 = 0;
        uStack_258 = 0x8000000000000000;
        if (abStack_188[0] == 2) {
          uStack_260 = *(long *)(puStack_180 + 8);
        }
        else if (abStack_188[0] == 1) {
          puStack_268 = puStack_180 + 8;
        }
        else {
          uStack_258 = 1;
        }
        ppppuVar9 = (undefined1 ****)&ppppuStack_228;
        func_0x000109379420(ppppuVar9,&ppppuStack_270);
        if (((ulong)ppppuVar9 & 1) == 0) {
          lVar18 = *(long *)(lVar21 + 0x378);
          func_0x00010937b950(&ppppuStack_228);
          func_0x00010938d198();
          *(char *)(lVar18 + 0xa9) = (char)ppppuStack_270;
        }
        ppppuStack_270 = (undefined1 ****)abStack_188;
        puStack_268 = (undefined *)0x0;
        uStack_260 = 0;
        uStack_258 = 0x8000000000000000;
        if (abStack_188[0] == 2) {
          uStack_260 = *(long *)(puStack_180 + 8);
        }
        else if (abStack_188[0] == 1) {
          puStack_268 = puStack_180 + 8;
        }
        else {
          uStack_258 = 1;
        }
        ppppuVar9 = (undefined1 ****)&ppppuStack_1e8;
        func_0x000109379420(ppppuVar9,&ppppuStack_270);
        if (((ulong)ppppuVar9 & 1) == 0) {
          lVar18 = *(long *)(lVar21 + 0x378);
          func_0x00010937b950(&ppppuStack_1e8);
          func_0x00010937c804(&ppppuStack_270);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (lVar18 + 0x18,&ppppuStack_270);
          if (uStack_260 < 0) {
            __ZdlPv(ppppuStack_270);
          }
        }
        ppppuStack_270 = (undefined1 ****)abStack_188;
        puStack_268 = (undefined *)0x0;
        uStack_260 = 0;
        uStack_258 = 0x8000000000000000;
        if (abStack_188[0] == 2) {
          uStack_260 = *(long *)(puStack_180 + 8);
        }
        else if (abStack_188[0] == 1) {
          puStack_268 = puStack_180 + 8;
        }
        else {
          uStack_258 = 1;
        }
        puVar10 = &uStack_248;
        func_0x000109379420(puVar10,&ppppuStack_270);
        if (((ulong)puVar10 & 1) == 0) {
          func_0x00010937b950(&uStack_248);
          func_0x00010938d198();
          uVar23 = (ulong)ppppuStack_270 & 0xff;
          cStack_249 = (char)ppppuStack_270;
        }
        else {
          uVar23 = 0;
        }
        uStack_280._7_1_ = '\t';
        ppppuStack_290 = (undefined1 ****)0x4965636166727573;
        pppuStack_288 = (undefined1 ***)CONCAT62(pppuStack_288._2_6_,100);
        ppppuStack_270 = (undefined1 ****)abStack_188;
        puStack_268 = (undefined *)0x0;
        uStack_260 = 0;
        uStack_258 = 0x8000000000000000;
        if (abStack_188[0] == 1) {
          puVar8 = puStack_180;
          func_0x0001093793a4(puStack_180,&ppppuStack_290);
          puStack_268 = puVar8;
          if (uStack_280._7_1_ < '\0') {
            __ZdlPv(ppppuStack_290);
          }
        }
        else if (abStack_188[0] == 2) {
          uStack_260 = *(long *)(puStack_180 + 8);
        }
        else {
          uStack_258 = 1;
        }
        ppppuStack_290 = (undefined1 ****)abStack_188;
        pppuStack_288 = (undefined1 ***)0x0;
        uStack_280 = (undefined1 **)0x0;
        uStack_278 = 0x8000000000000000;
        if (abStack_188[0] == 2) {
          uStack_280 = *(undefined1 ***)(puStack_180 + 8);
        }
        else if (abStack_188[0] == 1) {
          pppuStack_288 = (undefined1 ***)(puStack_180 + 8);
        }
        else {
          uStack_278 = 1;
        }
        ppppuVar9 = (undefined1 ****)&ppppuStack_270;
        func_0x000109379420(ppppuVar9,&ppppuStack_290);
        if (((ulong)ppppuVar9 & 1) == 0) {
          ppppuVar9 = (undefined1 ****)&ppppuStack_270;
          func_0x000109386768();
          if (*(char *)ppppuVar9 == '\x01') {
            ppppuVar9 = (undefined1 ****)&ppppuStack_270;
            func_0x000109386768();
            bStack_299 = '\x0e';
            uStack_2b0 = 0x766e6f63;
            uStack_2ac = 0x7265;
            uStack_2aa = 0x6173;
            uStack_2a8 = 0x64496e6f6974;
            uStack_2a2 = 0;
            pppuStack_288 = (undefined1 ***)0x0;
            uStack_280 = (undefined1 **)0x0;
            uStack_278 = 0x8000000000000000;
            ppppuStack_290 = ppppuVar9;
            if (*(char *)ppppuVar9 == '\x01') {
              pppuVar11 = ppppuVar9[1];
              func_0x0001093793a4(pppuVar11,&uStack_2b0);
              pppuStack_288 = pppuVar11;
              if ((char)bStack_299 < '\0') {
                __ZdlPv(CONCAT26(uStack_2aa,CONCAT24(uStack_2ac,uStack_2b0)));
              }
            }
            else if (*(char *)ppppuVar9 == '\x02') {
              uStack_280 = ppppuVar9[1][1];
            }
            else {
              uStack_278 = 1;
            }
            ppppuVar9 = (undefined1 ****)&ppppuStack_270;
            func_0x000109386768();
            uStack_2b0 = (uint)ppppuVar9;
            uStack_2ac = (undefined2)((ulong)ppppuVar9 >> 0x20);
            uStack_2aa = (undefined2)((ulong)ppppuVar9 >> 0x30);
            uStack_2a8 = 0;
            uStack_2a2 = 0;
            uStack_2a1 = 0;
            uStack_2a0 = 0;
            uStack_29f = 0;
            uStack_29a = 0;
            bStack_299 = 0;
            uStack_298 = 0x8000000000000000;
            if (*(char *)ppppuVar9 == '\x02') {
              ppuVar19 = ppppuVar9[1][1];
              uStack_2a0 = SUB81(ppuVar19,0);
              uStack_29f = (undefined5)((ulong)ppuVar19 >> 8);
              uStack_29a = (undefined1)((ulong)ppuVar19 >> 0x30);
              bStack_299 = (byte)((ulong)ppuVar19 >> 0x38);
            }
            else if (*(char *)ppppuVar9 == '\x01') {
              pppuVar11 = ppppuVar9[1] + 1;
              uStack_2a8 = SUB86(pppuVar11,0);
              uStack_2a2 = (undefined1)((ulong)pppuVar11 >> 0x30);
              uStack_2a1 = (undefined1)((ulong)pppuVar11 >> 0x38);
            }
            else {
              uStack_298 = 1;
            }
            pppppuVar12 = &ppppuStack_290;
            func_0x000109379420(pppppuVar12,&uStack_2b0);
            if (((ulong)pppppuVar12 & 1) == 0) {
              pppppuVar12 = &ppppuStack_290;
              func_0x000109386768();
              if (*(char *)pppppuVar12 == '\x03') {
                lVar18 = *(long *)(lVar21 + 0x378);
                func_0x000109386768(&ppppuStack_290);
                func_0x00010937c804(&uStack_2b0);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (lVar18 + 0x90,&uStack_2b0);
                if ((char)bStack_299 < '\0') {
                  __ZdlPv(CONCAT26(uStack_2aa,CONCAT24(uStack_2ac,uStack_2b0)));
                }
              }
            }
          }
        }
        plVar7 = *(long **)(lVar21 + 0x378);
        (**(code **)(*plVar7 + 0x48))();
        uVar2 = plVar7[1];
        if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
          uVar2 = (ulong)*(byte *)((long)plVar7 + 0x17);
        }
        if ((uVar2 == 0) && ((uVar23 & 1) == 0)) {
          lVar22 = *(long *)(lVar21 + 0x378);
          lVar18 = (long)*(char *)(lVar22 + 0x5f);
          if (lVar18 < 0) {
            plVar7 = *(long **)(lVar22 + 0x48);
            lVar18 = *(long *)(lVar22 + 0x50);
          }
          else {
            plVar7 = (long *)(lVar22 + 0x48);
          }
          if (((lVar18 == 0x18) &&
              ((*plVar7 == 0x2e6970612e706367 && plVar7[1] == 0x7461686370616e73) &&
               plVar7[2] == 0x3334343a6d6f632e)) && ((*(byte *)(lVar22 + 0xa9) & 1) != 0)) {
            ppppuStack_290 = (undefined1 ****)0x0;
            pppuStack_288 = (undefined1 ***)0x0;
            lVar18 = *(long *)(lVar21 + 0x430);
            if (lVar18 != 0) {
              __ZNSt3__119__shared_weak_count4lockEv();
              if (lVar18 != 0) {
                ppppuStack_290 = *(undefined1 *****)(lVar21 + 0x428);
              }
              pppuStack_288 = (undefined1 ***)lVar18;
              if (ppppuStack_290 != (undefined1 ****)0x0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (*(long *)(lVar21 + 0x378) + 0x18,ppppuStack_290 + 0x1f);
              }
            }
            FUN_10a8995d8(&ppppuStack_290);
          }
        }
        *(char *)(lVar21 + 0x4b9) = (char)uVar23;
        uStack_2a8 = 0x533256646573;
        uStack_2b0 = 0x75547369;
        uStack_2ac = 0x6e72;
        uStack_2aa = 0x6142;
        uStack_2a2 = 0x75;
        uStack_2a1 = 0x70;
        uStack_2a0 = 0x70;
        uStack_29f = 0x646574726f;
        uStack_29a = 0;
        bStack_299 = '\x16';
        ppppuStack_290 = (undefined1 ****)abStack_188;
        pppuStack_288 = (undefined1 ***)0x0;
        uStack_280 = (undefined1 **)0x0;
        uStack_278 = 0x8000000000000000;
        if (abStack_188[0] == 1) {
          puVar8 = puStack_180;
          func_0x0001093793a4(puStack_180,&uStack_2b0);
          pppuStack_288 = (undefined1 ***)puVar8;
          if ((char)bStack_299 < '\0') {
            __ZdlPv(CONCAT26(uStack_2aa,CONCAT24(uStack_2ac,uStack_2b0)));
          }
        }
        else if (abStack_188[0] == 2) {
          uStack_280 = *(undefined1 ***)(puStack_180 + 8);
        }
        else {
          uStack_278 = 1;
        }
        uStack_2b0 = (uint)abStack_188;
        uStack_2ac = (undefined2)((ulong)abStack_188 >> 0x20);
        uStack_2aa = (undefined2)((ulong)abStack_188 >> 0x30);
        uStack_2a8 = 0;
        uStack_2a2 = 0;
        uStack_2a1 = 0;
        uStack_2a0 = 0;
        uStack_29f = 0;
        uStack_29a = 0;
        bStack_299 = 0;
        uStack_298 = 0x8000000000000000;
        if (abStack_188[0] == 2) {
          uVar20 = *(undefined8 *)(puStack_180 + 8);
          uStack_2a0 = (undefined1)uVar20;
          uStack_29f = (undefined5)((ulong)uVar20 >> 8);
          uStack_29a = (undefined1)((ulong)uVar20 >> 0x30);
          bStack_299 = (byte)((ulong)uVar20 >> 0x38);
        }
        else if (abStack_188[0] == 1) {
          puStack_180 = puStack_180 + 8;
          uStack_2a8 = SUB86(puStack_180,0);
          uStack_2a2 = (undefined1)((ulong)puStack_180 >> 0x30);
          uStack_2a1 = (undefined1)((ulong)puStack_180 >> 0x38);
        }
        else {
          uStack_298 = 1;
        }
        pppppuVar12 = &ppppuStack_290;
        func_0x000109379420(pppppuVar12,&uStack_2b0);
        if (((ulong)pppppuVar12 & 1) == 0) {
          pppppuVar12 = &ppppuStack_290;
          func_0x000109386768();
          if (*(char *)pppppuVar12 == '\x04') {
            func_0x00010937b950(&ppppuStack_290);
            func_0x00010938d198();
            *(undefined1 *)(lVar21 + 0x4ba) = (undefined1)uStack_2b0;
          }
        }
        plVar7 = *(long **)(lVar21 + 0x378);
        if ((plVar7[0x76] == 0) || ((uVar23 & 1) != 0)) {
          (**(code **)(*plVar7 + 0x48))();
          uVar2 = plVar7[1];
          if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
            uVar2 = (ulong)*(byte *)((long)plVar7 + 0x17);
          }
          if ((uVar2 == 0) && ((uVar23 & 1) == 0)) {
            lVar18 = *(long *)(lVar21 + 0x378);
            bStack_299 = 0x10;
            uStack_2b0 = 0;
            uStack_2ac = 0;
            uStack_2aa = 0;
            uStack_2a8 = 0;
            uStack_2a2 = 0;
            uStack_2a1 = 0;
            uStack_2a0 = 0;
            ppuVar15 = &PTR___tlv_bootstrap_11340ddc8;
            (*(code *)PTR___tlv_bootstrap_11340ddc8)();
            uVar23 = 0;
            do {
              FUN_10a0095ac();
              puStack_2c8 = (undefined8 *)0x3d00000000;
              ppuVar16 = &puStack_2c8;
              func_0x00010937f57c(ppuVar16,ppuVar15,&puStack_2c8);
              uVar2 = CONCAT17(uStack_2a1,CONCAT16(uStack_2a2,uStack_2a8));
              if (-1 < (char)bStack_299) {
                uVar2 = (ulong)bStack_299;
              }
              if (uVar2 < uVar23) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8a1978);
                (*pcVar6)();
              }
              puVar3 = (uint *)CONCAT26(uStack_2aa,CONCAT24(uStack_2ac,uStack_2b0));
              if (-1 < (char)bStack_299) {
                puVar3 = &uStack_2b0;
              }
              *(undefined *)((long)puVar3 + uVar23) = (&UNK_10e4b07dc)[(int)ppuVar16];
              uVar23 = uVar23 + 1;
            } while (uVar23 != 0x10);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (lVar18 + 0x18,&uStack_2b0);
            if ((char)bStack_299 < '\0') {
              __ZdlPv(CONCAT26(uStack_2aa,CONCAT24(uStack_2ac,uStack_2b0)));
            }
          }
          plVar24 = *(long **)(lVar21 + 0x378);
          plVar7 = plVar24;
          (**(code **)(*plVar24 + 0x48))();
          lVar18 = *(long *)(lVar21 + 0x378);
          uStack_2b0 = CONCAT31(uStack_2b0._1_3_,*(undefined1 *)(lVar18 + 0xa9)) & 0xffffff01;
          FUN_10a8a1b64(plVar24 + 0xc,plVar24 + 6,plVar7,lVar18 + 0x78,&uStack_2b0,&cStack_249);
          ppuVar15 = &PTR_PTR_113303458;
          FUN_10ae079a0();
          param_5 = (undefined1 *)(lVar18 + 0x78);
          func_0x00010a8a1c20();
          FUN_10ae07cd4(ppuVar15,&PTR_PTR_113303458);
          lVar18 = *(long *)(lVar21 + 0x378);
          lVar22 = (long)*(char *)(lVar18 + 0x77);
          if (lVar22 < 0) {
            lVar22 = *(long *)(lVar18 + 0x68);
          }
          if (lVar22 != 0) {
            lVar22 = (long)*(char *)(lVar18 + 0x47);
            if (lVar22 < 0) {
              lVar22 = *(long *)(lVar18 + 0x38);
            }
            if (lVar22 != 0) {
              FUN_10a869c30(lVar21);
              goto LAB_10a8a18b0;
            }
          }
          if ((bRam000000011330a9e8 & 1) != 0) {
            param_5 = (undefined1 *)0x614;
            func_0x00010ae06f08(0,1);
          }
          uStack_2b0 = 1;
          uStack_2a8 = 0x10f67f902;
          uStack_2a2 = 0;
          uStack_2a1 = 0;
          FUN_10a865734(lVar21,&uStack_2b0);
        }
        else {
          puVar13 = (undefined8 *)0x20;
          __Znwm();
          uStack_2b0 = (uint)puVar13;
          uStack_2ac = (undefined2)((ulong)puVar13 >> 0x20);
          uStack_2aa = (undefined2)((ulong)puVar13 >> 0x30);
          uStack_2a0 = 0x20;
          uStack_29f = 0;
          uStack_29a = 0;
          bStack_299 = 0x80;
          uStack_2a8 = 0x1b;
          uStack_2a2 = 0;
          uStack_2a1 = 0;
          puVar13[1] = 0x63656a6552676e69;
          *puVar13 = 0x6b616d686374614d;
          *(undefined8 *)((long)puVar13 + 0x13) = 0x746e65696c437942;
          *(undefined8 *)((long)puVar13 + 0xb) = 0x64657463656a6552;
          *(undefined1 *)((long)puVar13 + 0x1b) = 0;
          puVar13 = (undefined8 *)0x48;
          __Znwm();
          uStack_2b8 = 0x8000000000000048;
          uStack_2c0 = 0x45;
          puVar13[5] = 0x6e696c6e6f206f6e;
          puVar13[4] = 0x203b746e65696c63;
          puVar13[7] = 0x726320736177206e;
          puVar13[6] = 0x6f69737365732065;
          *(undefined8 *)((long)puVar13 + 0x3d) = 0x6465746165726320;
          puVar13[1] = 0x2073617720676e69;
          *puVar13 = 0x6b616d686374614d;
          puVar13[3] = 0x2065687420796220;
          puVar13[2] = 0x64657463656a6572;
          *(undefined1 *)((long)puVar13 + 0x45) = 0;
          puVar14 = (undefined8 *)0x48;
          puStack_2c8 = puVar13;
          __Znwm();
          lStack_2d0 = -0x7fffffffffffffb8;
          uStack_2d8 = 0x45;
          puVar14[5] = 0x6e696c6e6f206f6e;
          puVar14[4] = 0x203b746e65696c63;
          puVar14[7] = 0x726320736177206e;
          puVar14[6] = 0x6f69737365732065;
          *(undefined8 *)((long)puVar14 + 0x3d) = 0x6465746165726320;
          puVar14[1] = 0x2073617720676e69;
          *puVar14 = 0x6b616d686374614d;
          puVar14[3] = 0x2065687420796220;
          puVar14[2] = 0x64657463656a6572;
          *(undefined1 *)((long)puVar14 + 0x45) = 0;
          puStack_2e0 = puVar14;
          FUN_10a8658fc(lVar21,&uStack_2b0);
          if (lStack_2d0 < 0) {
            __ZdlPv(puStack_2e0);
          }
          __ZdlPv(puVar13);
          if ((char)bStack_299 < '\0') {
            __ZdlPv(CONCAT26(uStack_2aa,CONCAT24(uStack_2ac,uStack_2b0)));
          }
        }
      }
LAB_10a8a18b0:
      puVar17 = (undefined4 *)(ulong)abStack_188[0];
      func_0x000109380ffc(&puStack_180,puVar17);
    }
    if ((char)bStack_161 < '\0') {
      __ZdlPv(uStack_178);
    }
  }
  else {
    if ((bRam000000011330a9e8 & 1) != 0) {
      param_5 = (undefined1 *)0x5a2;
      func_0x00010ae06f08(0,1);
    }
    lStack_a8._0_4_ = 1;
    puStack_a0 = &UNK_10f67f7a0;
    puVar17 = (undefined4 *)&lStack_a8;
    FUN_10a865734(lVar21,puVar17);
  }
  func_0x000104c4f944(auStack_d0);
  plVar7 = &lStack_128;
  FUN_10a042634();
  if (lStack_138 < 0) {
    plVar7 = plStack_148;
    __ZdlPv();
  }
  if (lStack_150 < 0) {
    plVar7 = plStack_160;
    __ZdlPv();
  }
LAB_10a8a1900:
  plVar24 = plStack_2e8;
  if (plStack_2e8 != (long *)0x0) {
    plVar1 = plStack_2e8 + 1;
    do {
      lVar21 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plVar24;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    FUN_10a8995d8(&ppppuStack_290);
    func_0x000109380ffc(&puStack_180);
    if ((char)bStack_161 < '\0') {
      __ZdlPv(uStack_178);
    }
    FUN_10a05bd10(&plStack_160);
    func_0x00010a05a86c(&lStack_2f0);
    __Unwind_Resume();
    uVar23 = plVar7[1];
    plVar24 = (long *)*plVar7;
    if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
      uVar23 = (ulong)*(byte *)((long)plVar7 + 0x17);
      plVar24 = plVar7;
    }
    lVar21 = 0;
    FUN_10ae03140(0,plVar24,uVar23);
    FUN_10ae03140();
    FUN_10ae03140();
    FUN_10ae03140();
    auVar26[8] = *param_5;
    auVar26._0_8_ = (lVar21 + 3U & 0xfffffffffffffffc) + 4;
    auVar26._9_7_ = 0;
    return auVar26;
  }
  auVar25._8_8_ = puVar17;
  auVar25._0_8_ = plVar7;
  return auVar25;
}



/* Entry: 10a8a1b64; end: 10a8a1cd7;  */

/* WARNING: Possible PIC construction at 0x00010a8a1c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a8a1c08) */

undefined1  [16] FUN_10a8a1b64(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *in_x4;
  undefined1 auVar4 [16];
  
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  lVar3 = 0;
  FUN_10ae03140(0,puVar2,uVar1);
  FUN_10ae03140();
  FUN_10ae03140();
  FUN_10ae03140();
  auVar4[8] = *in_x4;
  auVar4._0_8_ = (lVar3 + 3U & 0xfffffffffffffffc) + 4;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10a8a1cd8; end: 10a8a1d03;  */

undefined8 * FUN_10a8a1cd8(long param_1)

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



/* Entry: 10a8a1d04; end: 10a8a1f77;  */

long * FUN_10a8a1d04(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *unaff_x21;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)param_3[3];
  plVar5 = plVar4;
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar5 = plVar4;
    unaff_x21 = param_3;
    plStack_90 = plVar4;
    if (plVar4 != (long *)0x0) {
      lVar6 = param_3[2];
      lStack_98 = lVar6;
      if (lVar6 != 0) {
        if (*(char *)((long)param_3 + 0x37) < '\0') {
          func_0x000107c3192c(&plStack_e0,param_3[4],param_3[5]);
        }
        else {
          lStack_d8 = param_3[5];
          plStack_e0 = (long *)param_3[4];
          lStack_d0 = param_3[6];
        }
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          func_0x000107c3192c(&plStack_c8,*param_1,param_1[1]);
        }
        else {
          lStack_c0 = param_1[1];
          plStack_c8 = (long *)*param_1;
          lStack_b8 = param_1[2];
        }
        plStack_a0 = (long *)param_3[3];
        lStack_a8 = param_3[2];
        if (param_3[3] != 0) {
          plVar5 = (long *)(param_3[3] + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pcStack_88 = FUN_10a8a1fc4;
        ppuStack_80 = &PTR_FUN_110c24e18;
        param_3 = (long *)0x48;
        lStack_b0 = param_2;
        __Znwm();
        param_3[1] = lStack_d8;
        *param_3 = (long)plStack_e0;
        param_3[2] = lStack_d0;
        lStack_d8 = 0;
        lStack_d0 = 0;
        plStack_e0 = (long *)0x0;
        if (lStack_b8 < 0) {
          func_0x000107c3192c(param_3 + 3,plStack_c8,lStack_c0);
        }
        else {
          param_3[4] = lStack_c0;
          param_3[3] = (long)plStack_c8;
          param_3[5] = lStack_b8;
        }
        param_3[6] = lStack_b0;
        param_3[8] = (long)plStack_a0;
        param_3[7] = lStack_a8;
        lStack_a8 = 0;
        plStack_a0 = (long *)0x0;
        plStack_78 = param_3;
        FUN_10a860860(lVar6,&pcStack_88);
        (*(code *)*ppuStack_80)(&ppuStack_80);
        plVar5 = plStack_a0;
        if (plStack_a0 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (lStack_b8 < 0) {
          plVar5 = plStack_c8;
          __ZdlPv();
        }
        if (lStack_d0 < 0) {
          plVar5 = plStack_e0;
          __ZdlPv();
        }
      }
      plVar1 = plVar4 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      unaff_x21 = param_3;
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar5 = plVar4;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar5;
  }
  ___stack_chk_fail();
  if (*(char *)((long)unaff_x21 + 0x17) < '\0') {
    __ZdlPv(*unaff_x21);
  }
  __ZdlPv(unaff_x21);
  FUN_10a8a1f78(&plStack_e0);
  FUN_10a5ca2e0(&lStack_98);
  __Unwind_Resume();
  if (plVar5[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)plVar5 + 0x2f) < '\0') {
    __ZdlPv(plVar5[3]);
  }
  if (*(char *)((long)plVar5 + 0x17) < '\0') {
    __ZdlPv(*plVar5);
  }
  return plVar5;
}



/* Entry: 10a8a1f78; end: 10a8a1fc3;  */

undefined8 * FUN_10a8a1f78(undefined8 *param_1)

{
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a8a1fc4; end: 10a8a3307;  */

void FUN_10a8a1fc4(undefined ******param_1,undefined ******param_2,undefined ******param_3)

{
  undefined *****pppppuVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  undefined ******ppppppuVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined ******ppppppuVar10;
  undefined *****pppppuVar11;
  undefined *****pppppuVar12;
  undefined ****ppppuVar13;
  undefined *****pppppuVar14;
  undefined *****pppppuVar15;
  long lVar16;
  undefined ******unaff_x20;
  undefined ******ppppppuVar17;
  undefined ******unaff_x21;
  undefined *****pppppuVar18;
  undefined ******unaff_x23;
  undefined ******unaff_x24;
  undefined ******ppppppuVar19;
  undefined ******ppppppuVar20;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  int aiStack_360 [2];
  undefined8 *puStack_358;
  undefined1 auStack_350 [16];
  int aiStack_340 [2];
  double dStack_338;
  undefined8 **ppuStack_330;
  undefined ****ppppuStack_328;
  undefined1 *puStack_320;
  undefined1 **ppuStack_318;
  undefined1 *puStack_310;
  undefined8 uStack_308;
  undefined *****pppppuStack_300;
  undefined *****pppppuStack_2f8;
  undefined *****pppppuStack_2f0;
  undefined *****pppppuStack_2e8;
  undefined *****pppppuStack_2e0;
  undefined *****pppppuStack_2d8;
  undefined1 *puStack_2d0;
  code *pcStack_2c8;
  undefined4 uStack_2c0;
  undefined1 uStack_2bc;
  undefined *****pppppuStack_2b8;
  ulong uStack_2b0;
  code *pcStack_2a8;
  code *pcStack_2a0;
  code *pcStack_298;
  code *pcStack_290;
  code *pcStack_288;
  code *pcStack_280;
  code *pcStack_278;
  code *pcStack_270;
  code *pcStack_268;
  code *pcStack_260;
  code *pcStack_258;
  code *pcStack_250;
  code *pcStack_248;
  undefined *****pppppuStack_240;
  undefined *****pppppuStack_238;
  undefined ****ppppuStack_230;
  undefined *****pppppuStack_228;
  undefined *****pppppuStack_220;
  undefined *****pppppuStack_218;
  undefined *****pppppuStack_210;
  undefined ****ppppuStack_208;
  undefined ****ppppuStack_200;
  undefined *****pppppuStack_1f8;
  undefined *****pppppuStack_1f0;
  undefined *****pppppuStack_1e8;
  undefined *****pppppuStack_1e0;
  undefined *****pppppuStack_1d8;
  undefined *****pppppuStack_1d0;
  undefined *****pppppuStack_1c0;
  undefined ****ppppuStack_1b8;
  undefined ****ppppuStack_1b0;
  undefined *****pppppuStack_1a8;
  undefined *****pppppuStack_1a0;
  undefined *****pppppuStack_198;
  char cStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  char cStack_171;
  undefined ****ppppuStack_170;
  undefined ****ppppuStack_168;
  undefined ****ppppuStack_160;
  undefined ****ppppuStack_150;
  undefined4 uStack_148;
  undefined ****ppppuStack_140;
  long lStack_138;
  undefined *****pppppuStack_130;
  undefined *****pppppuStack_128;
  undefined ****ppppuStack_120;
  undefined *****pppppuStack_118;
  undefined *****pppppuStack_110;
  undefined *****pppppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined ****ppppuStack_e8;
  undefined ****ppppuStack_e0;
  undefined ****ppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  undefined *****pppppuStack_b0;
  undefined *****pppppuStack_a8;
  undefined *****pppppuStack_a0;
  undefined ****ppppuStack_98;
  undefined *****pppppuStack_90;
  undefined *****pppppuStack_88;
  undefined *****pppppuStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar18 = param_2[2];
  pppppuStack_1e8 = param_1[1];
  pppppuStack_1f0 = *param_1;
  *param_1 = (undefined *****)0x0;
  param_1[1] = (undefined *****)0x0;
  if (*(int *)pppppuStack_1f0[0x3d] == 4) goto LAB_10a8a2fec;
  if (*(char *)((long)pppppuVar18 + 0x2f) < '\0') {
    if (pppppuVar18[4] == (undefined ****)0x0) goto LAB_10a8a212c;
  }
  else if (*(char *)((long)pppppuVar18 + 0x2f) == '\0') {
LAB_10a8a212c:
    ppuVar9 = &PTR_PTR_1133052f8;
    FUN_10ae079a0(0,&PTR_PTR_1133052f8);
    FUN_10ae07cd4(ppuVar9,&PTR_PTR_1133052f8);
    pppppuStack_130 = (undefined *****)CONCAT44(pppppuStack_130._4_4_,1);
    pppppuStack_128 = (undefined *****)&UNK_10f67eeab;
    param_2 = &pppppuStack_130;
    param_1 = (undefined ******)pppppuStack_1f0;
    FUN_10a865734(pppppuStack_1f0,param_2);
    goto LAB_10a8a2fec;
  }
  pppppuVar12 = (undefined *****)pppppuStack_1f0[0x6a];
  func_0x000107c2b054(&ppppuStack_1b0,&UNK_10f67f9df);
  if (pppppuVar12 != (undefined *****)0x0) {
    ppppuVar13 = pppppuVar12[0x11b];
    func_0x000107c2b054(&pppppuStack_130,"true");
    param_3 = &pppppuStack_130;
    FUN_10a76bdb0(ppppuVar13,&ppppuStack_1b0);
    if ((long)ppppuStack_120 < 0) {
      __ZdlPv(pppppuStack_130);
    }
  }
  if ((long)pppppuStack_1a0 < 0) {
    __ZdlPv(ppppuStack_1b0);
  }
  uVar8 = (ulong)*(uint *)(pppppuVar18 + 6);
  FUN_10a87358c(pppppuStack_1f0);
  pppppuVar12 = pppppuStack_1f0;
  if (*(char *)(pppppuStack_1f0 + 0x84) != '\x02') {
    ppppppuVar17 = (undefined ******)pppppuStack_1f0[0x73];
    pppppuVar14 = (undefined *****)pppppuStack_1f0[0x74];
    if (pppppuVar14 != (undefined *****)0x0) {
      pppppuVar11 = pppppuVar14 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
        if (bVar4) {
          *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppuStack_1c0 = (undefined *****)ppppppuVar17;
    ppppuStack_1b8 = (undefined ****)pppppuVar14;
    if (ppppppuVar17 != (undefined ******)0x0) {
      if (*(char *)(ppppppuVar17 + 8) == '\x01') {
        pppppuVar12 = *ppppppuVar17;
        pppppuStack_130 = pppppuStack_1f0;
        pppppuStack_128 = pppppuStack_1e8;
        if ((undefined ******)pppppuStack_1e8 != (undefined ******)0x0) {
          ppppppuVar20 = (undefined ******)(pppppuStack_1e8 + 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
            if (bVar4) {
              *ppppppuVar20 = (undefined *****)((long)*ppppppuVar20 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        (*(code *)pppppuVar12)(&pppppuStack_130,(long)*(char *)(pppppuStack_1f0 + 0x84));
        param_3 = ppppppuVar17;
        if ((undefined ******)pppppuStack_128 != (undefined ******)0x0) {
          ppppppuVar17 = (undefined ******)(pppppuStack_128 + 1);
          do {
            pppppuVar12 = *ppppppuVar17;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar17,0x10);
            if (bVar4) {
              *ppppppuVar17 = (undefined *****)((long)pppppuVar12 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
            ppppppuVar20 = (undefined ******)pppppuStack_128;
          } while (cVar3 != '\0');
LAB_10a8a21c0:
          if (pppppuVar12 == (undefined *****)0x0) {
            (*(code *)(*ppppppuVar20)[2])(ppppppuVar20);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar20);
          }
        }
      }
      else if (*(char *)(ppppppuVar17 + 8) == '\x02') {
        unaff_x21 = ppppppuVar17;
        FUN_10a688b40();
        pppppuVar11 = pppppuStack_1e8;
        if (unaff_x21 == (undefined ******)0x0) {
          if (uVar8 != 0) {
            pppppuStack_118 = ppppppuVar17[1];
            ppppuStack_120 = (undefined ****)*ppppppuVar17;
            if (ppppppuVar17[1] != (undefined *****)0x0) {
              pppppuVar15 = ppppppuVar17[1] + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppuVar15,0x10);
                if (bVar4) {
                  *pppppuVar15 = (undefined ****)((long)*pppppuVar15 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            pppppuStack_1a0 = pppppuStack_1f0;
            pppppuStack_198 = pppppuStack_1e8;
            if ((undefined ******)pppppuStack_1e8 != (undefined ******)0x0) {
              ppppppuVar17 = (undefined ******)(pppppuStack_1e8 + 1);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar17,0x10);
                if (bVar4) {
                  *ppppppuVar17 = (undefined *****)((long)*ppppppuVar17 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            cStack_190 = *(char *)(pppppuVar12 + 0x84);
            pppppuStack_130 = (undefined *****)FUN_10a8a34e4;
            pppppuStack_128 = (undefined *****)&PTR_FUN_110c24e00;
            ppppuStack_1b0 = (undefined ****)0x0;
            pppppuStack_1a8 = (undefined *****)0x0;
            pppppuStack_110 = pppppuStack_1f0;
            pppppuStack_108 = pppppuStack_1e8;
            if ((undefined ******)pppppuStack_1e8 != (undefined ******)0x0) {
              ppppppuVar17 = (undefined ******)(pppppuStack_1e8 + 1);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar17,0x10);
                if (bVar4) {
                  *ppppppuVar17 = (undefined *****)((long)*ppppppuVar17 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            unaff_x21 = (undefined ******)&ppppuStack_1b0;
            pppuStack_100 = (undefined ***)CONCAT71(pppuStack_100._1_7_,cStack_190);
            FUN_10a4634ec(uVar8,&pppppuStack_130);
            (*(code *)*pppppuStack_128)(&pppppuStack_128);
            if ((undefined ******)pppppuVar11 != (undefined ******)0x0) {
              ppppppuVar17 = (undefined ******)(pppppuVar11 + 1);
              do {
                pppppuVar12 = *ppppppuVar17;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar17,0x10);
                if (bVar4) {
                  *ppppppuVar17 = (undefined *****)((long)pppppuVar12 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (pppppuVar12 == (undefined *****)0x0) {
                (*(code *)(*pppppuVar11)[2])(pppppuVar11);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar11);
              }
            }
            if ((undefined ******)pppppuStack_1a8 != (undefined ******)0x0) {
              ppppppuVar17 = (undefined ******)(pppppuStack_1a8 + 1);
              do {
                pppppuVar12 = *ppppppuVar17;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar17,0x10);
                if (bVar4) {
                  *ppppppuVar17 = (undefined *****)((long)pppppuVar12 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
                ppppppuVar20 = (undefined ******)pppppuStack_1a8;
              } while (cVar3 != '\0');
              goto LAB_10a8a21c0;
            }
          }
        }
        else {
          *unaff_x21 = (undefined *****)
                       CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
          param_3 = (undefined ******)(pppppuVar12 + 0x84);
          FUN_10a8a3308(*ppppppuVar17,&pppppuStack_1f0);
          iVar5 = *(int *)((long)unaff_x21 + 4) + -1;
          *(int *)((long)unaff_x21 + 4) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)unaff_x21 = 0;
          }
        }
      }
    }
    if (pppppuVar14 != (undefined *****)0x0) {
      pppppuVar12 = pppppuVar14 + 1;
      do {
        ppppuVar13 = *pppppuVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppuVar12,0x10);
        if (bVar4) {
          *pppppuVar12 = (undefined ****)((long)ppppuVar13 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppuVar13 == (undefined ****)0x0) {
        (*(code *)(*pppppuVar14)[2])(pppppuVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar14);
      }
    }
  }
  unaff_x20 = (undefined ******)pppppuStack_1f0;
  ppppppuVar17 = (undefined ******)pppppuStack_1f0[0x86];
  if ((ppppppuVar17 != (undefined ******)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), pppppuStack_128 = (undefined *****)ppppppuVar17,
     ppppppuVar17 != (undefined ******)0x0)) {
    pppppuStack_130 = unaff_x20[0x85];
    if ((undefined ******)pppppuStack_130 != (undefined ******)0x0) {
      FUN_10aaf0c14(pppppuStack_130,&pppppuStack_1f0);
    }
    ppppppuVar20 = ppppppuVar17 + 1;
    do {
      pppppuVar12 = *ppppppuVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
      if (bVar4) {
        *ppppppuVar20 = (undefined *****)((long)pppppuVar12 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppppuVar12 == (undefined *****)0x0) {
      (*(code *)(*ppppppuVar17)[2])(ppppppuVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar17);
    }
  }
  if ((*(byte *)((long)pppppuStack_1f0[0x6f] + 0xa9) & 1) == 0) {
LAB_10a8a2398:
    ppppppuVar17 = (undefined ******)(pppppuStack_1f0 + 0x4a);
  }
  else {
    if (*(char *)((long)pppppuStack_1f0 + 0x267) < '\0') {
      if ((undefined *****)pppppuStack_1f0[0x4b] != (undefined *****)0x0) goto LAB_10a8a2398;
    }
    else if (*(char *)((long)pppppuStack_1f0 + 0x267) != '\0') goto LAB_10a8a2398;
    ppppppuVar17 = (undefined ******)pppppuStack_1f0[0x6f];
    (*(code *)(*ppppppuVar17)[9])();
  }
  if (*(char *)((long)ppppppuVar17 + 0x17) < '\0') {
    param_3 = (undefined ******)ppppppuVar17[1];
    func_0x000107c3192c(&pppppuStack_1e0,*ppppppuVar17);
  }
  else {
    pppppuStack_1d8 = ppppppuVar17[1];
    pppppuStack_1e0 = *ppppppuVar17;
    pppppuStack_1d0 = ppppppuVar17[2];
  }
  unaff_x23 = (undefined ******)pppppuStack_1f0;
  ppppuVar13 = pppppuVar18[1];
  if (-1 < (char)*(byte *)((long)pppppuVar18 + 0x17)) {
    ppppuVar13 = (undefined ****)(ulong)*(byte *)((long)pppppuVar18 + 0x17);
  }
  if (ppppuVar13 == (undefined ****)0x0) {
LAB_10a8a2578:
    ppuVar9 = &PTR_PTR_113304a40;
    FUN_10ae079a0(0,&PTR_PTR_113304a40);
    FUN_10ae07cd4(ppuVar9,&PTR_PTR_113304a40);
    pppppuStack_130 = (undefined *****)CONCAT44(pppppuStack_130._4_4_,1);
    pppppuStack_128 = (undefined *****)&UNK_10f67eeab;
    param_2 = &pppppuStack_130;
    param_1 = unaff_x23;
    FUN_10a865734(unaff_x23,param_2);
  }
  else {
    ppppuVar13 = pppppuVar18[4];
    if (-1 < (char)*(byte *)((long)pppppuVar18 + 0x2f)) {
      ppppuVar13 = (undefined ****)(ulong)*(byte *)((long)pppppuVar18 + 0x2f);
    }
    if (ppppuVar13 == (undefined ****)0x0) goto LAB_10a8a2578;
    pppppuVar12 = (undefined *****)pppppuStack_1f0[0x6a];
    func_0x000107c2b054(&ppppuStack_1b0,&UNK_10f67eec1);
    if (pppppuVar12 != (undefined *****)0x0) {
      ppppuVar13 = pppppuVar12[0x11b];
      func_0x000107c2b054(&pppppuStack_130,"true");
      FUN_10a76bdb0(ppppuVar13,&ppppuStack_1b0,&pppppuStack_130);
      if ((long)ppppuStack_120 < 0) {
        __ZdlPv(pppppuStack_130);
      }
    }
    if ((long)pppppuStack_1a0 < 0) {
      __ZdlPv(ppppuStack_1b0);
    }
    ppppppuVar17 = (undefined ******)unaff_x23[0x3d];
    unaff_x20 = (undefined ******)unaff_x23[0x3e];
    if (unaff_x20 != (undefined ******)0x0) {
      ppppppuVar20 = unaff_x20 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
        if (bVar4) {
          *ppppppuVar20 = (undefined *****)((long)*ppppppuVar20 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppuVar12 = unaff_x23[0x6d];
    unaff_x21 = (undefined ******)unaff_x23[0x6e];
    if (unaff_x21 != (undefined ******)0x0) {
      ppppppuVar20 = unaff_x21 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
        if (bVar4) {
          *ppppppuVar20 = (undefined *****)((long)*ppppppuVar20 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppuStack_200 = (undefined ****)(pppppuVar18 + 3);
    pppppuStack_1f8 = unaff_x23[0x77];
    ppppppuVar20 = (undefined ******)unaff_x23[0x78];
    if (ppppppuVar20 != (undefined ******)0x0) {
      ppppppuVar19 = ppppppuVar20 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
        if (bVar4) {
          *ppppppuVar19 = (undefined *****)((long)*ppppppuVar19 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppppuVar19 = unaff_x23 + 0x40;
    FUN_10a8979c4(pppppuVar18,ppppppuVar19);
    ppuVar9 = &PTR_PTR_1133040a8;
    FUN_10ae079a0();
    func_0x00010a897a18();
    FUN_10ae07cd4(ppuVar9,&PTR_PTR_1133040a8);
    pppppuVar14 = (undefined *****)*pppppuVar18;
    if (-1 < *(char *)((long)pppppuVar18 + 0x17)) {
      pppppuVar14 = pppppuVar18;
    }
    pppppuVar11 = (undefined *****)pppppuVar18[3];
    if (-1 < *(char *)((long)pppppuVar18 + 0x2f)) {
      pppppuVar11 = (undefined *****)ppppuStack_200;
    }
    ppppppuVar10 = ppppppuVar19;
    if (*(char *)((long)unaff_x23 + 0x217) < '\0') {
      ppppppuVar10 = (undefined ******)*ppppppuVar19;
    }
    (*(code *)(*unaff_x23[0x6d])[0xb])
              (unaff_x23[0x6d],pppppuVar14,pppppuVar11,ppppppuVar10,unaff_x23);
    unaff_x24 = (undefined ******)pppppuStack_1f8;
    if (*(char *)(unaff_x23[0x6f] + 0x15) == '\x01') {
      pppppuVar11 = unaff_x23[0x46];
      ppppuStack_140 = (undefined ****)(pppppuVar11 + 0xd);
      if (*(char *)((long)pppppuVar11 + 0x7f) < '\0') {
        ppppuStack_140 = (undefined ****)*ppppuStack_140;
      }
      ppppuVar13 = (undefined ****)(long)*(char *)((long)pppppuVar11 + 0x5f);
      if ((long)ppppuVar13 < 0) {
        ppppuStack_150 = pppppuVar11[9];
        ppppuVar13 = pppppuVar11[10];
      }
      else {
        ppppuStack_150 = (undefined ****)(pppppuVar11 + 9);
      }
      uStack_148 = SUB84(ppppuVar13,0);
      ppppppuVar10 = unaff_x23;
      pppppuStack_220 = (undefined *****)ppppppuVar20;
      pppppuStack_218 = (undefined *****)unaff_x21;
      pppppuStack_210 = (undefined *****)unaff_x20;
      FUN_10a86a698();
      if (((ulong)pppppuVar14 >> 0x20 & 1) != 0) {
        *(char *)((long)unaff_x23 + 0x4bb) = '\x01';
        func_0x000107c2b054(&pppppuStack_130,&UNK_10f67d9eb);
        FUN_10a86a770(unaff_x23,&DAT_10f2f03d9,7,&pppppuStack_130);
        if ((long)ppppuStack_120 < 0) {
          __ZdlPv(pppppuStack_130);
        }
      }
      ppppuVar13 = pppppuVar18[1];
      pppppuVar11 = (undefined *****)*pppppuVar18;
      if (-1 < (char)*(byte *)((long)pppppuVar18 + 0x17)) {
        ppppuVar13 = (undefined ****)(ulong)*(byte *)((long)pppppuVar18 + 0x17);
        pppppuVar11 = pppppuVar18;
      }
      pppppuStack_238 = (undefined *****)ppppppuVar17;
      pppppuStack_228 = (undefined *****)ppppppuVar10;
      ppppuStack_208 = (undefined ****)pppppuVar12;
      FUN_10ae03140(0,pppppuVar11,ppppuVar13);
      FUN_10ae03140();
      FUN_10ae03140();
      FUN_10ae03140();
      FUN_10ae03140();
      func_0x00010ae02f4c();
      func_0x00010ae02ecc();
      ppppuStack_230 = (undefined ****)pppppuVar14;
      func_0x00010ae02ecc();
      ppuVar9 = &PTR_PTR_113305ee0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae0314c();
      FUN_10ae0314c();
      FUN_10ae0314c();
      FUN_10ae0314c();
      func_0x00010ae02f5c();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      FUN_10ae07cd4(ppuVar9,&PTR_PTR_113305ee0);
      pppppuVar12 = (undefined *****)*pppppuVar18;
      if (-1 < *(char *)((long)pppppuVar18 + 0x17)) {
        pppppuVar12 = pppppuVar18;
      }
      ppppppuVar17 = (undefined ******)pppppuStack_1e0;
      if (-1 < (long)pppppuStack_1d0) {
        ppppppuVar17 = &pppppuStack_1e0;
      }
      pppppuVar14 = (undefined *****)pppppuVar18[3];
      if (-1 < *(char *)((long)pppppuVar18 + 0x2f)) {
        pppppuVar14 = (undefined *****)ppppuStack_200;
      }
      ppppppuVar20 = ppppppuVar19;
      if (*(char *)((long)unaff_x23 + 0x217) < '\0') {
        ppppppuVar20 = (undefined ******)*ppppppuVar19;
      }
      pppppuVar15 = unaff_x23[0x6d];
      __ZNSt3__19to_stringEi(&pppppuStack_130,0x17d);
      ppppuVar13 = ppppuStack_120;
      ppppppuVar10 = (undefined ******)pppppuStack_130;
      pppppuVar11 = unaff_x23[0x6f];
      (*(code *)(*pppppuVar11)[9])();
      if (-1 < (long)ppppuVar13) {
        ppppppuVar10 = &pppppuStack_130;
      }
      pppppuVar1 = (undefined *****)*pppppuVar11;
      if (-1 < *(char *)((long)pppppuVar11 + 0x17)) {
        pppppuVar1 = pppppuVar11;
      }
      uStack_2c0 = *(undefined4 *)(unaff_x23[0x6f] + 0x72);
      uStack_2bc = *(undefined1 *)((long)unaff_x23[0x6f] + 0xab);
      uStack_2b0 = (ulong)ppppuStack_230 & 0xffffffff;
      pcStack_248 = FUN_10a863980;
      pppppuStack_240 = (undefined *****)unaff_x23;
      pcStack_258 = FUN_10a865734;
      pcStack_250 = FUN_10a865cf4;
      pcStack_268 = FUN_10a864db8;
      pcStack_260 = FUN_10a865444;
      pcStack_278 = FUN_10a86bd04;
      pcStack_270 = FUN_10a86c264;
      pcStack_288 = FUN_10a86add4;
      pcStack_280 = FUN_10a86b5d4;
      pcStack_298 = FUN_10a86453c;
      pcStack_290 = FUN_10a86ad60;
      pcStack_2a8 = FUN_10a861020;
      pcStack_2a0 = FUN_10a862608;
      pppppuStack_2b8 = pppppuStack_228;
      (*(code *)(*pppppuVar15)[1])
                (pppppuVar15,pppppuVar12,ppppppuVar17,pppppuVar14,ppppppuVar20,ppppppuVar10,
                 pppppuVar1,&ppppuStack_150);
      if ((long)ppppuStack_120 < 0) {
        __ZdlPv(pppppuStack_130);
      }
      unaff_x20 = (undefined ******)pppppuStack_210;
      unaff_x21 = (undefined ******)pppppuStack_218;
      ppppppuVar20 = (undefined ******)pppppuStack_220;
      FUN_10a86c6f8(&pppppuStack_130,&UNK_10f67eeea,10);
      ppppppuVar17 = (undefined ******)pppppuStack_238;
      func_0x00010a21ba78(unaff_x23 + 0x79,&pppppuStack_130);
      pppppuVar12 = pppppuStack_128;
      if ((undefined ******)pppppuStack_128 != (undefined ******)0x0) {
        ppppppuVar10 = (undefined ******)(pppppuStack_128 + 1);
        do {
          pppppuVar14 = *ppppppuVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
          if (bVar4) {
            *ppppppuVar10 = (undefined *****)((long)pppppuVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppppuVar14 == (undefined *****)0x0) {
          (*(code *)(*pppppuStack_128)[2])(pppppuStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar12);
        }
      }
      unaff_x24 = (undefined ******)pppppuStack_1f8;
      ppppppuVar10 = (undefined ******)unaff_x23[0x79];
      pppppuStack_130 = (undefined *****)ppppppuVar17;
      pppppuStack_128 = (undefined *****)unaff_x20;
      if (unaff_x20 != (undefined ******)0x0) {
        ppppppuVar7 = unaff_x20 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
          if (bVar4) {
            *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppppuStack_120 = ppppuStack_208;
      pppppuStack_118 = (undefined *****)unaff_x21;
      if (unaff_x21 != (undefined ******)0x0) {
        ppppppuVar7 = unaff_x21 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
          if (bVar4) {
            *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pppppuStack_110 = pppppuStack_1f8;
      pppppuStack_108 = (undefined *****)ppppppuVar20;
      if (ppppppuVar20 != (undefined ******)0x0) {
        ppppppuVar7 = ppppppuVar20 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
          if (bVar4) {
            *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pppppuVar12 = ppppppuVar10[2];
      if (pppppuVar12 == (undefined *****)0x0) {
        ppppppuVar7 = (undefined ******)0x40;
        __Znwm();
        *ppppppuVar7 = (undefined *****)ppppppuVar17;
        ppppppuVar7[1] = (undefined *****)unaff_x20;
        ppppppuVar7[2] = (undefined *****)ppppuStack_208;
        ppppppuVar7[3] = (undefined *****)unaff_x21;
        ppppppuVar7[4] = (undefined *****)unaff_x24;
        ppppppuVar7[5] = (undefined *****)ppppppuVar20;
        ppppppuVar7[7] = (undefined *****)0x10a8a38a8;
        ppppuStack_1b0 = (undefined ****)FUN_10a8a3680;
        pppppuStack_1a8 = (undefined *****)ppppppuVar7;
        pppppuStack_1a0 = (undefined *****)ppppppuVar10;
        (*(code *)**ppppppuVar10)(ppppppuVar10,&ppppuStack_1b0);
      }
      else {
        ppppuStack_170 = (undefined ****)0x0;
        (*(code *)(*pppppuVar12)[5])(pppppuVar12,0,&ppppuStack_170);
        if ((undefined *****)ppppuStack_170 != (undefined *****)0x0) {
          func_0x0001092af97c(&ppppuStack_170);
          goto LAB_10a8a3084;
        }
        ppppppuVar7 = (undefined ******)0x48;
        __Znwm();
        *ppppppuVar7 = (undefined *****)ppppppuVar17;
        ppppppuVar7[1] = (undefined *****)unaff_x20;
        pppppuStack_130 = (undefined *****)0x0;
        pppppuStack_128 = (undefined *****)0x0;
        ppppppuVar7[2] = (undefined *****)ppppuStack_208;
        ppppppuVar7[3] = (undefined *****)unaff_x21;
        ppppuStack_120 = (undefined ****)0x0;
        pppppuStack_118 = (undefined *****)0x0;
        ppppppuVar7[4] = (undefined *****)unaff_x24;
        ppppppuVar7[5] = (undefined *****)ppppppuVar20;
        pppppuStack_110 = (undefined *****)0x0;
        pppppuStack_108 = (undefined *****)0x0;
        ppppppuVar7[7] = (undefined *****)FUN_10a8a385c;
        ppppppuVar7[8] = pppppuVar12;
        ppppuStack_1b0 = (undefined ****)FUN_10a8a3650;
        pppppuStack_1a8 = (undefined *****)ppppppuVar7;
        pppppuStack_1a0 = (undefined *****)ppppppuVar10;
        (*(code *)**ppppppuVar10)(ppppppuVar10,&ppppuStack_1b0);
        __ZNSt13exception_ptrD1Ev(&ppppuStack_170);
      }
      ppppuStack_170 = (undefined ****)0x0;
      __ZNSt13exception_ptrD1Ev(&ppppuStack_170);
      pppppuVar12 = (undefined *****)ppppuStack_208;
      if ((*(byte *)((long)unaff_x23 + 0x4b9) & 1) == 0) {
        if (*(char *)((long)unaff_x23 + 0x217) < '\0') {
          func_0x000107c3192c(&ppppuStack_170,unaff_x23[0x40],unaff_x23[0x41]);
        }
        else {
          ppppuStack_168 = (undefined ****)unaff_x23[0x41];
          ppppuStack_170 = (undefined ****)*ppppppuVar19;
          ppppuStack_160 = (undefined ****)unaff_x23[0x42];
        }
        __ZNSt3__19to_stringEi(&uStack_188,0x17d);
        uVar2 = *(undefined4 *)(unaff_x23[0x6f] + 0x72);
        FUN_10a86c6f8(&pppppuStack_130,&UNK_10f67eef5,6);
        func_0x00010a21ba78(unaff_x23 + 0x7f,&pppppuStack_130);
        pppppuVar12 = pppppuStack_128;
        if ((undefined ******)pppppuStack_128 != (undefined ******)0x0) {
          ppppppuVar19 = (undefined ******)(pppppuStack_128 + 1);
          do {
            pppppuVar14 = *ppppppuVar19;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
            if (bVar4) {
              *ppppppuVar19 = (undefined *****)((long)pppppuVar14 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (pppppuVar14 == (undefined *****)0x0) {
            (*(code *)(*pppppuStack_128)[2])(pppppuStack_128);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar12);
          }
        }
        ppppppuVar19 = (undefined ******)unaff_x23[0x7f];
        if (*(char *)((long)pppppuVar18 + 0x17) < '\0') {
          func_0x000107c3192c(&pppppuStack_130,*pppppuVar18,pppppuVar18[1]);
        }
        else {
          pppppuStack_128 = (undefined *****)pppppuVar18[1];
          pppppuStack_130 = (undefined *****)*pppppuVar18;
          ppppuStack_120 = pppppuVar18[2];
        }
        if ((long)pppppuStack_1d0 < 0) {
          func_0x000107c3192c(&pppppuStack_118,pppppuStack_1e0,pppppuStack_1d8);
        }
        else {
          pppppuStack_110 = pppppuStack_1d8;
          pppppuStack_118 = pppppuStack_1e0;
          pppppuStack_108 = pppppuStack_1d0;
        }
        if (*(char *)((long)pppppuVar18 + 0x2f) < '\0') {
          func_0x000107c3192c(&pppuStack_100,pppppuVar18[3],pppppuVar18[4]);
        }
        else {
          pppuStack_f8 = ppppuStack_200[1];
          pppuStack_100 = *ppppuStack_200;
          pppuStack_f0 = ppppuStack_200[2];
        }
        if ((long)ppppuStack_160 < 0) {
          func_0x000107c3192c(&ppppuStack_e8,ppppuStack_170,ppppuStack_168);
        }
        else {
          ppppuStack_e0 = ppppuStack_168;
          ppppuStack_e8 = ppppuStack_170;
          ppppuStack_d8 = ppppuStack_160;
        }
        if (cStack_171 < '\0') {
          func_0x000107c3192c(&uStack_d0,uStack_188,uStack_180);
        }
        else {
          uStack_c8 = uStack_180;
          uStack_d0 = uStack_188;
        }
        pppppuVar12 = (undefined *****)ppppuStack_208;
        pppppuStack_b0 = (undefined *****)unaff_x23;
        pppppuStack_a8 = (undefined *****)ppppppuVar17;
        pppppuStack_a0 = (undefined *****)unaff_x20;
        if (unaff_x20 != (undefined ******)0x0) {
          ppppppuVar10 = unaff_x20 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
            if (bVar4) {
              *ppppppuVar10 = (undefined *****)((long)*ppppppuVar10 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        ppppuStack_98 = ppppuStack_208;
        pppppuStack_90 = (undefined *****)unaff_x21;
        if (unaff_x21 != (undefined ******)0x0) {
          ppppppuVar10 = unaff_x21 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
            if (bVar4) {
              *ppppppuVar10 = (undefined *****)((long)*ppppppuVar10 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pppppuStack_88 = pppppuStack_1f8;
        pppppuStack_80 = (undefined *****)ppppppuVar20;
        if (ppppppuVar20 != (undefined ******)0x0) {
          ppppppuVar10 = ppppppuVar20 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
            if (bVar4) {
              *ppppppuVar10 = (undefined *****)((long)*ppppppuVar10 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pppppuVar18 = ppppppuVar19[2];
        uStack_b8 = uVar2;
        if (pppppuVar18 == (undefined *****)0x0) {
          ppppppuVar10 = (undefined ******)0xc8;
          __Znwm();
          FUN_10a8a3958();
          ppppppuVar10[0x18] = (undefined *****)0x10a8a3d1c;
          ppppuStack_1b0 = (undefined ****)FUN_10a8a3a84;
          pppppuStack_1a8 = (undefined *****)ppppppuVar10;
          pppppuStack_1a0 = (undefined *****)ppppppuVar19;
          (*(code *)**ppppppuVar19)(ppppppuVar19,&ppppuStack_1b0);
        }
        else {
          lStack_138 = 0;
          (*(code *)(*pppppuVar18)[5])(pppppuVar18,0,&lStack_138);
          if (lStack_138 != 0) {
            func_0x0001092af97c(&lStack_138);
            goto LAB_10a8a3084;
          }
          ppppppuVar10 = (undefined ******)0xd0;
          __Znwm();
          FUN_10a8a3958();
          ppppppuVar10[0x18] = (undefined *****)FUN_10a8a3d00;
          ppppppuVar10[0x19] = pppppuVar18;
          ppppuStack_1b0 = (undefined ****)0x10a8a3928;
          pppppuStack_1a8 = (undefined *****)ppppppuVar10;
          pppppuStack_1a0 = (undefined *****)ppppppuVar19;
          (*(code *)**ppppppuVar19)(ppppppuVar19,&ppppuStack_1b0);
          __ZNSt13exception_ptrD1Ev(&lStack_138);
        }
        lStack_138 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_138);
        func_0x00010a86caa0(&pppppuStack_130);
        unaff_x24 = (undefined ******)pppppuStack_1f8;
        if (cStack_171 < '\0') {
          __ZdlPv(uStack_188);
        }
        if ((long)ppppuStack_160 < 0) {
          __ZdlPv(ppppuStack_170);
        }
      }
    }
    param_3 = (undefined ******)0x7;
    FUN_10a86c6f8(&pppppuStack_130,&UNK_10f67eefc);
    func_0x00010a21ba78(unaff_x23 + 0x7b,&pppppuStack_130);
    pppppuVar18 = pppppuStack_128;
    if ((undefined ******)pppppuStack_128 != (undefined ******)0x0) {
      ppppppuVar19 = (undefined ******)(pppppuStack_128 + 1);
      do {
        pppppuVar14 = *ppppppuVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
        if (bVar4) {
          *ppppppuVar19 = (undefined *****)((long)pppppuVar14 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppuVar14 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_128)[2])(pppppuStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar18);
      }
    }
    ppppppuVar19 = (undefined ******)unaff_x23[0x7b];
    if (unaff_x20 != (undefined ******)0x0) {
      ppppppuVar10 = unaff_x20 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
        if (bVar4) {
          *ppppppuVar10 = (undefined *****)((long)*ppppppuVar10 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (unaff_x21 != (undefined ******)0x0) {
      ppppppuVar10 = unaff_x21 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
        if (bVar4) {
          *ppppppuVar10 = (undefined *****)((long)*ppppppuVar10 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (ppppppuVar20 != (undefined ******)0x0) {
      ppppppuVar10 = ppppppuVar20 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
        if (bVar4) {
          *ppppppuVar10 = (undefined *****)((long)*ppppppuVar10 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppuVar18 = ppppppuVar19[2];
    pppppuStack_130 = (undefined *****)ppppppuVar17;
    pppppuStack_128 = (undefined *****)unaff_x20;
    ppppuStack_120 = (undefined ****)pppppuVar12;
    pppppuStack_118 = (undefined *****)unaff_x21;
    pppppuStack_110 = (undefined *****)unaff_x24;
    pppppuStack_108 = (undefined *****)ppppppuVar20;
    if (pppppuVar18 == (undefined *****)0x0) {
      ppppppuVar10 = (undefined ******)0x40;
      __Znwm();
      *ppppppuVar10 = (undefined *****)ppppppuVar17;
      ppppppuVar10[1] = (undefined *****)unaff_x20;
      ppppppuVar10[2] = pppppuVar12;
      ppppppuVar10[3] = (undefined *****)unaff_x21;
      ppppppuVar10[4] = (undefined *****)unaff_x24;
      ppppppuVar10[5] = (undefined *****)ppppppuVar20;
      ppppppuVar10[7] = (undefined *****)0x10a8a3fc4;
      ppppuStack_1b0 = (undefined ****)FUN_10a8a3d9c;
      param_2 = (undefined ******)&ppppuStack_1b0;
      pppppuStack_1a8 = (undefined *****)ppppppuVar10;
      pppppuStack_1a0 = (undefined *****)ppppppuVar19;
      (*(code *)**ppppppuVar19)(ppppppuVar19,param_2);
    }
    else {
      ppppuStack_150 = (undefined ****)0x0;
      param_3 = (undefined ******)&ppppuStack_150;
      (*(code *)(*pppppuVar18)[5])(pppppuVar18,0);
      if ((undefined *****)ppppuStack_150 != (undefined *****)0x0) {
        pppppuStack_220 = (undefined *****)ppppppuVar20;
        pppppuStack_218 = (undefined *****)unaff_x21;
        pppppuStack_210 = (undefined *****)unaff_x20;
        func_0x0001092af97c(&ppppuStack_150);
LAB_10a8a3084:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8a3088);
        (*pcVar6)();
      }
      ppppppuVar10 = (undefined ******)0x48;
      __Znwm();
      *ppppppuVar10 = (undefined *****)ppppppuVar17;
      ppppppuVar10[1] = (undefined *****)unaff_x20;
      ppppppuVar10[2] = pppppuVar12;
      ppppppuVar10[3] = (undefined *****)unaff_x21;
      ppppppuVar10[4] = (undefined *****)unaff_x24;
      ppppppuVar10[5] = (undefined *****)ppppppuVar20;
      ppppppuVar10[7] = (undefined *****)FUN_10a8a3f78;
      ppppppuVar10[8] = pppppuVar18;
      ppppuStack_1b0 = (undefined ****)0x10a8a3d6c;
      param_2 = (undefined ******)&ppppuStack_1b0;
      pppppuStack_1a8 = (undefined *****)ppppppuVar10;
      pppppuStack_1a0 = (undefined *****)ppppppuVar19;
      (*(code *)**ppppppuVar19)(ppppppuVar19,param_2);
      __ZNSt13exception_ptrD1Ev(&ppppuStack_150);
    }
    ppppuStack_150 = (undefined ****)0x0;
    param_1 = (undefined ******)&ppppuStack_150;
    __ZNSt13exception_ptrD1Ev();
    if (((ulong)unaff_x23[0x6f][0x15] & 1) == 0) {
      pppppuStack_130 = (undefined *****)FUN_10a8a4044;
      pppppuStack_128 = (undefined *****)&PTR_FUN_110c24e48;
      param_2 = &pppppuStack_130;
      FUN_10a860860(unaff_x23,param_2);
      param_1 = &pppppuStack_128;
      (*(code *)*pppppuStack_128)();
    }
    if (ppppppuVar20 != (undefined ******)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = ppppppuVar20;
    }
    if (unaff_x21 != (undefined ******)0x0) {
      param_1 = unaff_x21;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (unaff_x20 != (undefined ******)0x0) {
      param_1 = unaff_x20;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if ((long)pppppuStack_1d0 < 0) {
    param_1 = (undefined ******)pppppuStack_1e0;
    __ZdlPv();
  }
LAB_10a8a2fec:
  pppppuVar18 = pppppuStack_1e8;
  if ((undefined ******)pppppuStack_1e8 != (undefined ******)0x0) {
    ppppppuVar17 = (undefined ******)(pppppuStack_1e8 + 1);
    do {
      pppppuVar12 = *ppppppuVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar17,0x10);
      if (bVar4) {
        *ppppppuVar17 = (undefined *****)((long)pppppuVar12 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppppuVar12 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_1e8)[2])(pppppuStack_1e8);
      param_1 = (undefined ******)pppppuVar18;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_128)(unaff_x23 + 1);
    FUN_10a5ca2e0(unaff_x21 + 2);
    func_0x00010a004dac(&ppppuStack_1b0);
    func_0x00010a8933ec(&pppppuStack_1c0);
    FUN_10a5ca2e0(&pppppuStack_1f0);
    ppppppuVar17 = param_1;
    __Unwind_Resume();
    pppppuStack_2d8 = pppppuVar18;
    pcStack_2c8 = FUN_10a8a3308;
    pppppuStack_300 = (undefined *****)unaff_x24;
    pppppuStack_2f8 = (undefined *****)unaff_x23;
    pppppuStack_2f0 = (undefined *****)param_1;
    pppppuStack_2e8 = (undefined *****)unaff_x21;
    pppppuStack_2e0 = (undefined *****)unaff_x20;
    puStack_2d0 = &stack0xfffffffffffffff0;
    func_0x000109884c0c(&ppuStack_330,ppppppuVar17 + 1,*ppppppuVar17);
    func_0x000109884820(&puStack_368,&ppuStack_330,*ppppppuVar17);
    if (ppuStack_330 != (undefined8 **)0x0) {
      (*(code *)**ppuStack_330)();
    }
    (*(code *)(**ppppppuVar17)[6])(&puStack_370);
    pppppuVar18 = *ppppppuVar17;
    FUN_10a724820(auStack_350,pppppuVar18,param_2);
    aiStack_340[0] = 3;
    dStack_338 = (double)(int)*(char *)param_3;
    uStack_308 = 2;
    puStack_310 = auStack_350;
    (*(code *)(*pppppuVar18)[0xb])(pppppuVar18);
    ppuStack_330 = &puStack_368;
    ppuStack_318 = &puStack_310;
    ppppuStack_328 = (undefined ****)pppppuVar18;
    puStack_320 = (undefined1 *)&puStack_370;
    func_0x0001098960c0(aiStack_360);
    if ((3 < aiStack_360[0]) && (puStack_358 != (undefined8 *)0x0)) {
      (**(code **)*puStack_358)();
    }
    lVar16 = 0;
    do {
      if ((3 < *(int *)((long)aiStack_340 + lVar16)) &&
         (*(undefined8 **)((long)&dStack_338 + lVar16) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)&dStack_338 + lVar16))();
      }
      lVar16 = lVar16 + -0x10;
    } while (lVar16 != -0x20);
    if (puStack_370 != (undefined8 *)0x0) {
      (**(code **)*puStack_370)();
    }
    if (puStack_368 != (undefined8 *)0x0) {
      (**(code **)*puStack_368)();
    }
    return;
  }
  return;
}



/* Entry: 10a8a3308; end: 10a8a34e3;  */

void FUN_10a8a3308(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  double dStack_78;
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
  FUN_10a724820(auStack_90,plVar2,param_2);
  aiStack_80[0] = 3;
  dStack_78 = (double)(int)*param_3;
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
       (*(undefined8 **)((long)&dStack_78 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&dStack_78 + lVar1))();
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



/* Entry: 10a8a34e4; end: 10a8a34f7;  */

void FUN_10a8a34e4(long param_1)

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
  double dStack_78;
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
  FUN_10a724820(auStack_90,plVar3,param_1 + 0x20);
  aiStack_80[0] = 3;
  dStack_78 = (double)(int)*(char *)(param_1 + 0x30);
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
       (*(undefined8 **)((long)&dStack_78 + lVar2) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&dStack_78 + lVar2))();
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



/* Entry: 10a8a34f8; end: 10a8a351f;  */

long FUN_10a8a34f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a5ca2e0(param_1 + 0x18);
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



/* Entry: 10a8a3520; end: 10a8a3567;  */

void FUN_10a8a3520(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c24e00;
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
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x28);
  return;
}



/* Entry: 10a8a3568; end: 10a8a35c3;  */

void FUN_10a8a3568(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[8] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(char *)((long)puVar1 + 0x2f) < '\0') {
      __ZdlPv(puVar1[3]);
    }
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a8a35c4; end: 10a8a35db;  */

void FUN_10a8a35c4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a8a35dc; end: 10a8a361b;  */

void FUN_10a8a35dc(long param_1)

{
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a8a361c; end: 10a8a364f;  */

void FUN_10a8a361c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110c24e30;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10a8a3650; end: 10a8a367f;  */

void FUN_10a8a3650(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  FUN_10a8a3680();
                    /* WARNING: Could not recover jumptable at 0x00010a8a367c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a8a3680; end: 10a8a385b;  */

void FUN_10a8a3680(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  int *piVar6;
  long *plStack_38;
  long *plStack_28;
  
  plStack_28 = (long *)0x0;
  plVar3 = (long *)param_1[1];
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_28 = plVar3;
    if (plVar3 != (long *)0x0) {
      piVar6 = (int *)*param_1;
      goto LAB_10a8a36bc;
    }
  }
  piVar6 = (int *)0x0;
LAB_10a8a36bc:
  plStack_38 = (long *)0x0;
  plVar3 = (long *)param_1[3];
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar3;
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)param_1[2];
      if (((piVar6 != (int *)0x0) && (plVar3 != (long *)0x0)) && (*piVar6 != 4)) {
        ppuVar4 = &PTR_PTR_113303508;
        FUN_10ae079a0(0,&PTR_PTR_113303508);
        FUN_10ae07cd4(ppuVar4,&PTR_PTR_113303508);
        (**(code **)(*plVar3 + 0x20))();
      }
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  if (plStack_28 != (long *)0x0) {
    plVar3 = plStack_28 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  (*(code *)param_1[7])(param_1);
  return;
}



/* Entry: 10a8a385c; end: 10a8a3957;  */

void FUN_10a8a385c(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)(param_1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a8a3958; end: 10a8a3a83;  */

undefined8 * FUN_10a8a3958(undefined8 *param_1,undefined8 *param_2)

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
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  if (*(char *)((long)param_2 + 0x47) < '\0') {
    func_0x000107c3192c(param_1 + 6,param_2[6],param_2[7]);
  }
  else {
    uVar2 = param_2[7];
    uVar1 = param_2[6];
    param_1[8] = param_2[8];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
  }
  uVar2 = param_2[10];
  uVar1 = param_2[9];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[9] = 0;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xc] = 0;
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar1;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  uVar1 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar1;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  uVar1 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar1;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  return param_1;
}



/* Entry: 10a8a3a84; end: 10a8a3cff;  */

void FUN_10a8a3a84(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined **ppuVar8;
  long lVar9;
  int *piVar10;
  undefined *puStack_58;
  undefined4 uStack_50;
  undefined *puStack_48;
  long *plStack_40;
  long *plStack_38;
  int *piStack_30;
  long *plStack_28;
  
  piStack_30 = (int *)0x0;
  plStack_28 = (long *)0x0;
  plVar7 = (long *)param_1[0x12];
  if (plVar7 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_28 = plVar7;
    if (plVar7 != (long *)0x0) {
      piVar10 = (int *)param_1[0x11];
      piStack_30 = piVar10;
      goto LAB_10a8a3ac0;
    }
  }
  piVar10 = (int *)0x0;
LAB_10a8a3ac0:
  plStack_40 = (long *)0x0;
  plStack_38 = (long *)0x0;
  plVar7 = (long *)param_1[0x14];
  if (plVar7 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar7;
    if (plVar7 != (long *)0x0) {
      plStack_40 = (long *)param_1[0x13];
      if (((piVar10 != (int *)0x0) && (plStack_40 != (long *)0x0)) && (*piVar10 != 4)) {
        ppuVar8 = &PTR_PTR_113303580;
        FUN_10ae079a0(0,&PTR_PTR_113303580);
        FUN_10ae07cd4(ppuVar8,&PTR_PTR_113303580);
        puStack_58 = &UNK_10f67d9eb;
        uStack_50 = 0;
        puStack_48 = &UNK_10f67d9eb;
        plVar7 = (long *)*param_1;
        if (-1 < *(char *)((long)param_1 + 0x17)) {
          plVar7 = param_1;
        }
        plVar1 = (long *)param_1[3];
        if (-1 < *(char *)((long)param_1 + 0x2f)) {
          plVar1 = param_1 + 3;
        }
        plVar2 = (long *)param_1[6];
        if (-1 < *(char *)((long)param_1 + 0x47)) {
          plVar2 = param_1 + 6;
        }
        plVar3 = (long *)param_1[9];
        if (-1 < *(char *)((long)param_1 + 0x5f)) {
          plVar3 = param_1 + 9;
        }
        plVar4 = (long *)param_1[0xc];
        if (-1 < *(char *)((long)param_1 + 0x77)) {
          plVar4 = param_1 + 0xc;
        }
        (**(code **)(*plStack_40 + 0x108))
                  (plStack_40,plVar7,plVar1,plVar2,plVar3,plVar4,&puStack_58,(int)param_1[0xf],
                   FUN_10a866330,FUN_10a8665e8,FUN_10a8668a4,param_1[0x10]);
      }
    }
  }
  plVar7 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  (*(code *)param_1[0x18])(param_1);
  return;
}



/* Entry: 10a8a3d00; end: 10a8a3d37;  */

void FUN_10a8a3d00(long param_1)

{
  if (param_1 != 0) {
    func_0x00010a86caa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a8a3d38; end: 10a8a3d9b;  */

undefined * FUN_10a8a3d38(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
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
  
  ppuVar6 = &PTR_PTR_1133035a8;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0(0);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
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
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a8a3d9c; end: 10a8a3f77;  */

void FUN_10a8a3d9c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  int *piVar6;
  long *plStack_38;
  long *plStack_28;
  
  plStack_28 = (long *)0x0;
  plVar3 = (long *)param_1[1];
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_28 = plVar3;
    if (plVar3 != (long *)0x0) {
      piVar6 = (int *)*param_1;
      goto LAB_10a8a3dd8;
    }
  }
  piVar6 = (int *)0x0;
LAB_10a8a3dd8:
  plStack_38 = (long *)0x0;
  plVar3 = (long *)param_1[3];
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar3;
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)param_1[2];
      if (((piVar6 != (int *)0x0) && (plVar3 != (long *)0x0)) && (*piVar6 != 4)) {
        ppuVar4 = &PTR_PTR_1133035e0;
        FUN_10ae079a0(0,&PTR_PTR_1133035e0);
        FUN_10ae07cd4(ppuVar4,&PTR_PTR_1133035e0);
        (**(code **)(*plVar3 + 0x80))();
      }
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  if (plStack_28 != (long *)0x0) {
    plVar3 = plStack_28 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  (*(code *)param_1[7])(param_1);
  return;
}



/* Entry: 10a8a3f78; end: 10a8a4043;  */

void FUN_10a8a3f78(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)(param_1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a8a4044; end: 10a8a4193;  */

void FUN_10a8a4044(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plStack_48 = (long *)param_1[1];
  lStack_50 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  **(undefined4 **)(lStack_50 + 0x1e8) = 2;
  lVar4 = *(long *)(lStack_50 + 0x378);
  plVar3 = (long *)0xb0;
  __Znwm();
  plVar5 = plVar3 + 1;
  *plVar5 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110c249a8;
  plStack_40 = plVar3 + 3;
  *plStack_40 = (long)&PTR_DAT_110c23e40;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x15] = 0;
  plVar3[0x14] = 0;
  plStack_38 = plVar3;
  FUN_10a896b9c(lVar4 + 0xb0,&lStack_50,&plStack_40);
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
  }
  if (*(char *)(*(long *)(lStack_50 + 0x588) + 8) == '\x01') {
    FUN_10a896b00(lStack_50 + 0x580,lStack_50,plStack_48);
  }
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a8a4194; end: 10a8a41a7;  */

void FUN_10a8a4194(void)

{
  return;
}



/* Entry: 10a8a41a8; end: 10a8a41e7;  */

/* WARNING: Possible PIC construction at 0x00010a8a420c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a8a4210) */
/* WARNING: Removing unreachable block (ram,0x00010a8a4220) */
/* WARNING: Removing unreachable block (ram,0x00010a8a4224) */
/* WARNING: Removing unreachable block (ram,0x00010a8a423c) */
/* WARNING: Removing unreachable block (ram,0x00010a8a4240) */

undefined1  [16] FUN_10a8a41a8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      auVar3._8_8_ = param_2;
      auVar3._0_8_ = param_1;
      return auVar3;
    }
  }
  uVar2 = 0;
  FUN_10a043ecc();
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = 4;
  return auVar4;
}



/* Entry: 10a8a41e8; end: 10a8a42c7;  */

/* WARNING: Possible PIC construction at 0x00010a8a420c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a8a4210) */
/* WARNING: Removing unreachable block (ram,0x00010a8a4220) */
/* WARNING: Removing unreachable block (ram,0x00010a8a4224) */
/* WARNING: Removing unreachable block (ram,0x00010a8a423c) */
/* WARNING: Removing unreachable block (ram,0x00010a8a4240) */

undefined1  [16] FUN_10a8a41e8(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 4;
  return auVar1;
}



/* Entry: 10a8a42c8; end: 10a8a42d7;  */

void FUN_10a8a42c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c24e70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a8a42d8; end: 10a8a42f7;  */

void FUN_10a8a42d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c24e70;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8a42f8; end: 10a8a435b;  */

void FUN_10a8a42f8(long param_1)

{
  FUN_10a0803a0(param_1 + 0x78);
  func_0x00010a042b54(param_1 + 0x68);
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  if (-1 < *(char *)(param_1 + 0x2f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a8a435c; end: 10a8a435f;  */

void FUN_10a8a435c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8a4360; end: 10a8a44d3;  */

/* WARNING: Removing unreachable block (ram,0x00010a8a43c4) */
/* WARNING: Removing unreachable block (ram,0x00010a8a4424) */

void FUN_10a8a4360(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char cStack_59;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_21;
  
  plStack_78 = (long *)param_1[1];
  lVar5 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lStack_80 = lVar5;
  func_0x000107c2b054(&uStack_38,&UNK_10f67fa04);
  lVar5 = *(long *)(lVar5 + 0x350);
  func_0x000107c2b054(auStack_50,&UNK_10f67fa20);
  uStack_68 = uStack_30;
  uStack_70 = uStack_38;
  cStack_59 = cStack_21;
  if (lVar5 != 0) {
    FUN_10a76bdb0(*(undefined8 *)(lVar5 + 0x8d8),auStack_50,&uStack_70);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(uStack_70);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  FUN_10a898f78(*(long *)(lStack_80 + 0x378) + 0xf8,&lStack_80,&uStack_38);
  plVar4 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a8a44d4; end: 10a8a44e7;  */

void FUN_10a8a44d4(void)

{
  return;
}



/* Entry: 10a8a44e8; end: 10a8a4577;  */

void FUN_10a8a44e8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != lVar3) {
    uVar2 = (*(long *)(param_1 + 0x10) - lVar3) * 8 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar2 == uVar4) {
    FUN_10a8a4578(param_1);
    lVar3 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  puVar1 = (undefined8 *)(*(long *)(lVar3 + (uVar4 >> 6) * 8) + (uVar4 & 0x3f) * 0x40);
  *puVar1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(puVar1 + 1,param_2 + 1);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 10a8a4578; end: 10a8a4887;  */

void FUN_10a8a4578(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  if (0x3f < param_1[4]) {
    param_1[4] = param_1[4] - 0x40;
    puVar10 = (undefined8 *)param_1[1] + 1;
    uVar3 = *(undefined8 *)param_1[1];
LAB_10a8a45b0:
    param_1[1] = (ulong)puVar10;
    puVar10 = (undefined8 *)param_1[2];
    if (puVar10 == (undefined8 *)param_1[3]) {
      uVar15 = *param_1;
      uVar5 = param_1[1];
      if (uVar5 < uVar15 || uVar5 - uVar15 == 0) {
        uVar8 = (long)((long)puVar10 - uVar15) >> 2;
        if ((long)puVar10 - uVar15 == 0) {
          uVar8 = 1;
        }
        uVar15 = uVar8;
        FUN_10a8a4984();
        puVar11 = (undefined8 *)(uVar15 + (uVar8 >> 2) * 8);
        lVar12 = param_1[2] - (long)param_1[1];
        puVar10 = puVar11;
        if (lVar12 != 0) {
          puVar10 = (undefined8 *)((long)puVar11 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar11;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar8 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar11;
        param_1[2] = (ulong)puVar10;
        param_1[3] = uVar15 + uVar5 * 8;
        if (uVar8 != 0) {
          __ZdlPv(uVar8);
          puVar10 = (undefined8 *)param_1[2];
        }
      }
      else {
        lVar12 = (((long)(uVar5 - uVar15) >> 3) + 1) / 2;
        lVar13 = uVar5 + lVar12 * -8;
        lVar1 = (long)puVar10 - uVar5;
        if (lVar1 != 0) {
          _memmove(lVar13,uVar5,lVar1);
          uVar5 = param_1[1];
        }
        puVar10 = (undefined8 *)(lVar13 + lVar1);
        param_1[1] = uVar5 + lVar12 * -8;
        param_1[2] = (ulong)puVar10;
      }
    }
    *puVar10 = uVar3;
    param_1[2] = param_1[2] + 8;
    return;
  }
  puVar11 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar15 = (long)puVar11 - (long)puVar10;
  if (uVar15 < (ulong)((long)puVar9 - (long)puVar7)) {
    uVar3 = 0x1000;
    __Znwm();
    if (puVar9 == puVar11) {
      if (puVar10 == puVar7) {
        uVar15 = (long)puVar9 - (long)puVar10 >> 2;
        if (puVar11 == puVar10) {
          uVar15 = 1;
        }
        lVar12 = uVar15 * 2;
        FUN_10a8a4984();
        puVar10 = (undefined8 *)(uVar15 + (lVar12 + 6U & 0xfffffffffffffff8));
        lVar12 = param_1[2] - (long)param_1[1];
        puVar11 = puVar10;
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)((long)puVar10 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar10;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar5 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar10;
        param_1[2] = (ulong)puVar11;
        param_1[3] = uVar15 + (long)param_2 * 8;
        if (uVar5 != 0) {
          __ZdlPv(uVar5);
          puVar10 = (undefined8 *)param_1[1];
        }
      }
      puVar10[-1] = uVar3;
      puVar10 = (undefined8 *)param_1[1];
      param_1[1] = (ulong)(puVar10 + -1);
      uVar3 = puVar10[-1];
      goto LAB_10a8a45b0;
    }
    *puVar11 = uVar3;
    param_1[2] = param_1[2] + 8;
  }
  else {
    puVar6 = (undefined8 *)((long)puVar9 - (long)puVar7 >> 2);
    if (puVar9 == puVar7) {
      puVar6 = (undefined8 *)0x1;
    }
    FUN_10a8a4984();
    uVar3 = 0x1000;
    puVar4 = param_2;
    __Znwm();
    puVar7 = (undefined8 *)((long)puVar6 + uVar15);
    puVar9 = puVar6 + (long)param_2;
    puVar2 = puVar6;
    if (uVar15 == (long)param_2 * 8) {
      if ((long)uVar15 < 1) {
        puVar7 = (undefined8 *)((long)puVar7 - (long)puVar6 >> 2);
        if (puVar11 == puVar10) {
          puVar7 = (undefined8 *)0x1;
        }
        puVar2 = puVar7;
        FUN_10a8a4984();
        puVar7 = puVar2 + ((ulong)puVar7 >> 2);
        puVar9 = puVar2 + (long)puVar4;
        if (puVar6 != (undefined8 *)0x0) {
          __ZdlPv(puVar6);
        }
      }
      else {
        lVar12 = ((long)puVar7 - (long)puVar6 >> 3) + 1;
        puVar7 = puVar7 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
      }
    }
    puVar10 = puVar7 + 1;
    *puVar7 = uVar3;
    puVar11 = (undefined8 *)param_1[2];
    puVar6 = puVar2;
    if (puVar11 != (undefined8 *)param_1[1]) {
      do {
        puVar2 = puVar6;
        puVar14 = puVar7;
        if (puVar7 == puVar6) {
          if (puVar10 < puVar9) {
            lVar12 = ((long)puVar9 - (long)puVar10 >> 3) + 1;
            lVar1 = (long)puVar10 - (long)puVar6;
            lVar13 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar10 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
            puVar14 = (undefined8 *)((long)puVar10 - lVar1);
            if (lVar13 != 0) {
              _memmove(puVar14,puVar7,lVar13);
              puVar4 = puVar7;
            }
          }
          else {
            puVar14 = (undefined8 *)((long)puVar9 - (long)puVar6 >> 2);
            if ((long)puVar9 - (long)puVar6 == 0) {
              puVar14 = (undefined8 *)0x1;
            }
            puVar2 = puVar14;
            FUN_10a8a4984();
            puVar14 = (undefined8 *)((long)puVar2 + ((long)puVar14 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar14;
            if (lVar12 != 0) {
              puVar10 = (undefined8 *)((long)puVar14 + lVar12);
              puVar9 = puVar14;
              do {
                *puVar9 = *puVar7;
                lVar12 = lVar12 + -8;
                puVar9 = puVar9 + 1;
                puVar7 = puVar7 + 1;
              } while (lVar12 != 0);
            }
            puVar9 = puVar2 + (long)puVar4;
            if (puVar6 != (undefined8 *)0x0) {
              __ZdlPv(puVar6);
            }
          }
        }
        puVar11 = puVar11 + -1;
        puVar7 = puVar14 + -1;
        *puVar7 = *puVar11;
        puVar6 = puVar2;
      } while (puVar11 != (undefined8 *)param_1[1]);
    }
    uVar15 = *param_1;
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar10;
    param_1[3] = (ulong)puVar9;
    if (uVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a8a4888; end: 10a8a4983;  */

void FUN_10a8a4888(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_10a8a4984();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a8a4984; end: 10a8a49b7;  */

void FUN_10a8a4984(undefined8 *param_1,undefined **param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  byte **ppbVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined **unaff_x20;
  ulong uVar14;
  undefined **ppuVar15;
  undefined **unaff_x21;
  code *pcVar16;
  undefined **unaff_x22;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  long *plStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined *puStack_268;
  long *plStack_260;
  byte *pbStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined7 uStack_230;
  undefined1 uStack_229;
  undefined8 uStack_228;
  undefined8 uStack_220;
  byte *pbStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  byte *pbStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined5 uStack_1d0;
  undefined1 uStack_1cb;
  undefined2 uStack_1ca;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  byte *pbStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  byte *pbStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  byte abStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  byte bStack_151;
  long *plStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  long lStack_128;
  uint uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [56];
  undefined **ppuStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [40];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_80;
  long lStack_78;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  pcStack_28 = FUN_10a8a49b8;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_268 = (undefined *)0x0;
  plStack_260 = (long *)0x0;
  plVar4 = (long *)param_2[4];
  puStack_30 = &stack0xfffffffffffffff0;
  uStack_238 = (byte *)CONCAT44(uStack_238._4_4_,(undefined4)uStack_238);
  if (plVar4 == (long *)0x0) goto LAB_10a8a51a8;
  __ZNSt3__119__shared_weak_count4lockEv();
  unaff_x20 = param_2;
  plStack_260 = plVar4;
  uStack_238 = (byte *)CONCAT44(uStack_238._4_4_,(undefined4)uStack_238);
  if ((plVar4 == (long *)0x0) ||
     (puStack_268 = param_2[3],
     uStack_238 = (byte *)CONCAT44(uStack_238._4_4_,(undefined4)uStack_238),
     puStack_268 == (undefined *)0x0)) goto LAB_10a8a51a8;
  unaff_x21 = (undefined **)&uStack_1d8;
  plVar4 = *(long **)(param_2[2] + 0x18);
  uStack_148 = param_1[1];
  plStack_150 = (long *)*param_1;
  lStack_140 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  uStack_130 = param_1[4];
  plStack_138 = (long *)param_1[3];
  lStack_128 = param_1[5];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_120 = *(uint *)(param_1 + 6);
  lStack_118 = param_1[7];
  uStack_110 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_108,param_1 + 9);
  ppuStack_d0 = (undefined **)param_1[0x10];
  uStack_c8 = *(undefined4 *)(param_1 + 0x11);
  FUN_10a0424c4(auStack_c0,param_1 + 0x12);
  ppuVar15 = ppuStack_d0;
  lVar13 = *plVar4;
  unaff_x20 = (undefined **)(ulong)uStack_120;
  if (uStack_120 - 200 < 100) {
    ppuVar8 = ppuStack_d0;
    FUN_109ffe064(&uStack_168,lStack_118,ppuStack_d0);
    param_3 = (int)ppuVar8;
    if (-1 < (char)bStack_151) {
      uStack_160 = (ulong)bStack_151;
    }
    if (uStack_160 == 0) {
      ppuVar15 = &PTR_PTR_1133058a0;
      ppuVar8 = ppuVar15;
      FUN_10ae079a0(0,&PTR_PTR_1133058a0);
      FUN_10ae07cd4(ppuVar8,&PTR_PTR_1133058a0);
      puStack_98._0_4_ = 1;
      puStack_90 = &UNK_10f67eeab;
      FUN_10a865734(lVar13,&puStack_98);
    }
    else {
      ppuStack_80 = (undefined **)0x0;
      unaff_x22 = &puStack_98;
      param_3 = 0;
      FUN_109fc89b4(abStack_178,&uStack_168,&puStack_98,0,0);
      if (ppuStack_80 == unaff_x22) {
        lVar11 = 0x20;
LAB_10a8a4ba8:
        (**(code **)(*ppuStack_80 + lVar11))();
      }
      else if (ppuStack_80 != (undefined **)0x0) {
        lVar11 = 0x28;
        goto LAB_10a8a4ba8;
      }
      if (abStack_178[0] == 9) {
        func_0x00010ae02f70(0,ppuVar15);
        unaff_x21 = &PTR_PTR_113305b38;
        unaff_x22 = unaff_x21;
        FUN_10ae079a0();
        func_0x00010ae02f80();
        FUN_10ae07cd4(unaff_x22,&PTR_PTR_113305b38);
        pbStack_198 = (byte *)CONCAT44(pbStack_198._4_4_,1);
        puStack_190 = &UNK_10f67eeab;
        FUN_10a865734(lVar13,&pbStack_198);
      }
      else {
        uStack_1a8._7_1_ = '\t';
        pbStack_1b8 = (byte *)0x656b6f5468747561;
        puStack_1b0 = (undefined *)CONCAT62(puStack_1b0._2_6_,0x6e);
        pbStack_198 = abStack_178;
        puStack_190 = (undefined *)0x0;
        uStack_188 = 0;
        uStack_180 = 0x8000000000000000;
        if (abStack_178[0] == 1) {
          puVar5 = puStack_170;
          func_0x0001093793a4(puStack_170,&pbStack_1b8);
          puStack_190 = puVar5;
          if (uStack_1a8._7_1_ < '\0') {
            __ZdlPv(pbStack_1b8);
          }
        }
        else if (abStack_178[0] == 2) {
          uStack_188 = *(undefined8 *)(puStack_170 + 8);
        }
        else {
          uStack_180 = 1;
        }
        uStack_1c8._7_1_ = '\r';
        uStack_1d8._0_5_ = 0x6674616c70;
        uStack_1d8._5_3_ = 0x6d726f;
        uStack_1d0 = 0x6e656b6f54;
        uStack_1cb = 0;
        pbStack_1b8 = abStack_178;
        puStack_1b0 = (undefined *)0x0;
        uStack_1a8 = 0;
        uStack_1a0 = 0x8000000000000000;
        if (abStack_178[0] == 1) {
          puVar5 = puStack_170;
          func_0x0001093793a4(puStack_170,&uStack_1d8);
          puStack_1b0 = puVar5;
          if (uStack_1c8._7_1_ < '\0') {
            __ZdlPv(CONCAT35(uStack_1d8._5_3_,(undefined5)uStack_1d8));
          }
        }
        else if (abStack_178[0] == 2) {
          uStack_1a8 = *(undefined8 *)(puStack_170 + 8);
        }
        else {
          uStack_1a0 = 1;
        }
        uStack_1e8._7_1_ = '\f';
        pbStack_1f8 = (byte *)0x6d726f6674616c70;
        puStack_1f0 = (undefined *)CONCAT35(puStack_1f0._5_3_,0x65707954);
        uStack_1d8._0_5_ = SUB85(abStack_178,0);
        uStack_1d8._5_3_ = (undefined3)((ulong)abStack_178 >> 0x28);
        uStack_1d0 = 0;
        uStack_1cb = 0;
        uStack_1ca = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0x8000000000000000;
        if (abStack_178[0] == 1) {
          puVar5 = puStack_170;
          func_0x0001093793a4(puStack_170,&pbStack_1f8);
          uStack_1d0 = SUB85(puVar5,0);
          uStack_1cb = (undefined1)((ulong)puVar5 >> 0x28);
          uStack_1ca = (undefined2)((ulong)puVar5 >> 0x30);
          if (uStack_1e8._7_1_ < '\0') {
            __ZdlPv(pbStack_1f8);
          }
        }
        else if (abStack_178[0] == 2) {
          uStack_1c8 = *(undefined8 *)(puStack_170 + 8);
        }
        else {
          uStack_1c0 = 1;
        }
        uStack_208._7_1_ = '\f';
        pbStack_218 = (byte *)0x6e65697265707865;
        puStack_210 = (undefined *)CONCAT35(puStack_210._5_3_,0x64496563);
        pbStack_1f8 = abStack_178;
        puStack_1f0 = (undefined *)0x0;
        uStack_1e8 = 0;
        uStack_1e0 = 0x8000000000000000;
        if (abStack_178[0] == 1) {
          puVar5 = puStack_170;
          func_0x0001093793a4(puStack_170,&pbStack_218);
          puStack_1f0 = puVar5;
          if (uStack_208._7_1_ < '\0') {
            __ZdlPv(pbStack_218);
          }
        }
        else if (abStack_178[0] == 2) {
          uStack_1e8 = *(undefined8 *)(puStack_170 + 8);
        }
        else {
          uStack_1e0 = 1;
        }
        uStack_228._7_1_ = '\x0f';
        uStack_238._0_4_ = 0x61727564;
        uStack_238._4_4_ = 0x6e6f6974;
        uStack_230 = 0x73646e6f636553;
        uStack_229 = 0;
        pbStack_218 = abStack_178;
        puStack_210 = (undefined *)0x0;
        uStack_208 = 0;
        uStack_200 = 0x8000000000000000;
        if (abStack_178[0] == 1) {
          puVar5 = puStack_170;
          func_0x0001093793a4(puStack_170,&uStack_238);
          puStack_210 = puVar5;
          if (uStack_228._7_1_ < '\0') {
            __ZdlPv(CONCAT44(uStack_238._4_4_,(undefined4)uStack_238));
          }
        }
        else if (abStack_178[0] == 2) {
          uStack_208 = *(undefined8 *)(puStack_170 + 8);
        }
        else {
          uStack_200 = 1;
        }
        uStack_238 = abStack_178;
        uStack_230 = 0;
        uStack_229 = 0;
        uStack_228 = 0;
        uStack_220 = 0x8000000000000000;
        if (abStack_178[0] == 2) {
          uStack_228 = *(long *)(puStack_170 + 8);
        }
        else if (abStack_178[0] == 1) {
          uStack_230 = SUB87(puStack_170 + 8,0);
          uStack_229 = (undefined1)((ulong)(puStack_170 + 8) >> 0x38);
        }
        else {
          uStack_220 = 1;
        }
        ppbVar6 = &pbStack_198;
        func_0x000109379420(ppbVar6,&uStack_238);
        if (((ulong)ppbVar6 & 1) == 0) {
          pbStack_258 = abStack_178;
          puStack_250 = (undefined *)0x0;
          lStack_248 = 0;
          uStack_240 = 0x8000000000000000;
          if (abStack_178[0] == 2) {
            lStack_248 = *(long *)(puStack_170 + 8);
          }
          else if (abStack_178[0] == 1) {
            puStack_250 = puStack_170 + 8;
          }
          else {
            uStack_240 = 1;
          }
          ppbVar6 = &pbStack_218;
          func_0x000109379420(ppbVar6,&pbStack_258);
          if (((ulong)ppbVar6 & 1) == 0) {
            func_0x00010937b950(&pbStack_198);
            func_0x00010937c804(&uStack_238);
            func_0x00010937b950(&pbStack_218);
            func_0x00010937ba88();
            uVar14 = (ulong)pbStack_258 & 0xffffffff;
            param_3 = (int)pbStack_258;
            func_0x00010ae02ecc(0,uVar14);
            ppuVar15 = &PTR_PTR_113304120;
            FUN_10ae079a0();
            func_0x00010ae02edc();
            FUN_10ae07cd4(ppuVar15,&PTR_PTR_113304120);
            ppuVar15 = (undefined **)(plVar4 + 1);
            FUN_10a8a54c8(ppuVar15,&uStack_238,uVar14);
            __ZNSt3__16chrono12steady_clock3nowEv();
            unaff_x22 = (undefined **)plVar4[9];
            unaff_x21 = *(undefined ***)(lVar13 + 0x350);
            puVar5 = &UNK_10f67fa44;
            if ((*(byte *)(*(long *)(lVar13 + 0x378) + 0xa9) & 1) == 0) {
              puVar5 = &UNK_10f67fa5d;
            }
            func_0x000107c2b054(&pbStack_258,puVar5);
            if (unaff_x21 != (undefined **)0x0) {
              FUN_10a76bf18((double)(((long)ppuVar15 - (long)unaff_x22) / 1000000),unaff_x21[0x11b],
                            &pbStack_258);
            }
            if (lStack_248 < 0) {
              __ZdlPv(pbStack_258);
            }
            if (uStack_228 < 0) {
              __ZdlPv(uStack_238);
            }
            goto LAB_10a8a5158;
          }
        }
        uStack_238 = abStack_178;
        uStack_230 = 0;
        uStack_229 = 0;
        uStack_228 = 0;
        uStack_220 = 0x8000000000000000;
        if (abStack_178[0] == 2) {
          uStack_228 = *(long *)(puStack_170 + 8);
        }
        else if (abStack_178[0] == 1) {
          uStack_230 = SUB87(puStack_170 + 8,0);
          uStack_229 = (undefined1)((ulong)(puStack_170 + 8) >> 0x38);
        }
        else {
          uStack_220 = 1;
        }
        ppbVar6 = &pbStack_1b8;
        func_0x000109379420(ppbVar6,&uStack_238);
        if (((ulong)ppbVar6 & 1) == 0) {
          pbStack_258 = abStack_178;
          puStack_250 = (undefined *)0x0;
          lStack_248 = 0;
          uStack_240 = 0x8000000000000000;
          if (abStack_178[0] == 2) {
            lStack_248 = *(long *)(puStack_170 + 8);
          }
          else if (abStack_178[0] == 1) {
            puStack_250 = puStack_170 + 8;
          }
          else {
            uStack_240 = 1;
          }
          puVar9 = &uStack_1d8;
          func_0x000109379420(puVar9,&pbStack_258);
          if (((ulong)puVar9 & 1) == 0) {
            lVar11 = *(long *)(lVar13 + 0x378);
            func_0x00010937b950(&pbStack_1b8);
            func_0x00010937c804(&uStack_238);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (lVar11 + 0x60,&uStack_238);
            if (uStack_228 < 0) {
              __ZdlPv(uStack_238);
            }
            ppuVar15 = *(undefined ***)(lVar13 + 0x378);
            func_0x00010937b950(&uStack_1d8);
            func_0x00010937c804(&uStack_238);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (ppuVar15 + 0xf,&uStack_238);
            if (uStack_228 < 0) {
              __ZdlPv(uStack_238);
            }
            lVar11 = *(long *)(lVar13 + 0x378);
            uVar12 = (ulong)*(char *)(lVar11 + 0x47);
            uVar14 = uVar12;
            if ((long)uVar12 < 0) {
              uVar14 = *(ulong *)(lVar11 + 0x38);
            }
            if (uVar14 == 0) {
              uStack_238 = abStack_178;
              uStack_230 = 0;
              uStack_229 = 0;
              uStack_228 = 0;
              uStack_220 = 0x8000000000000000;
              if (abStack_178[0] == 2) {
                uStack_228 = *(long *)(puStack_170 + 8);
              }
              else if (abStack_178[0] == 1) {
                uStack_230 = SUB87(puStack_170 + 8,0);
                uStack_229 = (undefined1)((ulong)(puStack_170 + 8) >> 0x38);
              }
              else {
                uStack_220 = 1;
              }
              ppbVar6 = &pbStack_1f8;
              func_0x000109379420(ppbVar6,&uStack_238);
              if ((int)ppbVar6 != 0) {
                lVar11 = *(long *)(lVar13 + 0x378);
                uVar12 = (ulong)*(byte *)(lVar11 + 0x47);
                goto LAB_10a8a52f4;
              }
              func_0x00010937b950(&pbStack_1f8);
              func_0x00010937c804(&uStack_238);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (*(long *)(lVar13 + 0x378) + 0x30,&uStack_238);
              if (uStack_228 < 0) {
                __ZdlPv(uStack_238);
              }
              lVar11 = *(long *)(lVar13 + 0x378);
            }
            else {
LAB_10a8a52f4:
              if (((uint)uVar12 >> 7 & 1) == 0) {
                uVar12 = uVar12 & 0xff;
              }
              else {
                uVar12 = *(ulong *)(lVar11 + 0x38);
              }
              if (uVar12 == 0) {
                FUN_10a8a5564();
                uStack_238._0_4_ = 1;
                uStack_230 = 0x10f67eeab;
                uStack_229 = 0;
                FUN_10a865734(lVar13,&uStack_238);
                goto LAB_10a8a5158;
              }
            }
            lVar10 = lVar11 + 0x30;
            FUN_10a8a5598(lVar11 + 0x60,lVar11 + 0x78,lVar10);
            param_3 = (int)lVar10;
            FUN_10a872930(lVar13,plVar4 + 1);
            goto LAB_10a8a5158;
          }
        }
        ppuVar15 = &PTR_PTR_113304348;
        ppuVar8 = ppuVar15;
        FUN_10ae079a0(0,&PTR_PTR_113304348);
        FUN_10ae07cd4(ppuVar8,&PTR_PTR_113304348);
        uStack_238._0_4_ = 1;
        uStack_230 = 0x10f67eeab;
        uStack_229 = 0;
        FUN_10a865734(lVar13,&uStack_238);
      }
LAB_10a8a5158:
      func_0x000109380ffc(&puStack_170,abStack_178[0]);
    }
    unaff_x20 = ppuVar15;
    if ((char)bStack_151 < '\0') {
      __ZdlPv(uStack_168);
    }
  }
  else {
    func_0x00010ae02ecc(0,unaff_x20);
    unaff_x21 = &PTR_PTR_113304bc0;
    unaff_x22 = unaff_x21;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(unaff_x22,&PTR_PTR_113304bc0);
    puStack_98._0_4_ = 1;
    puStack_90 = &UNK_10f67eeab;
    FUN_10a865734(lVar13,&puStack_98);
  }
  func_0x000104c4f944(auStack_c0);
  plVar4 = &lStack_118;
  FUN_10a042634();
  if (lStack_128 < 0) {
    plVar4 = plStack_138;
    __ZdlPv();
  }
  if (lStack_140 < 0) {
    plVar4 = plStack_150;
    __ZdlPv();
  }
LAB_10a8a51a8:
  plVar7 = plStack_260;
  if (plStack_260 != (long *)0x0) {
    plVar1 = plStack_260 + 1;
    do {
      lVar13 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_260 + 0x10))(plStack_260);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar4 = plVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    if (uStack_228 < 0) {
      __ZdlPv(uStack_238);
    }
    puVar9 = (undefined8 *)(ulong)abStack_178[0];
    func_0x000109380ffc(&puStack_170);
    if ((char)bStack_151 < '\0') {
      __ZdlPv(uStack_168);
    }
    FUN_10a05bd10(&plStack_150);
    func_0x00010a05a86c(&puStack_268);
    plVar7 = plVar4;
    __Unwind_Resume();
    pcStack_278 = FUN_10a8a54c8;
    pcVar16 = (code *)*plVar7;
    ppuStack_2a0 = unaff_x22;
    ppuStack_298 = unaff_x21;
    ppuStack_290 = unaff_x20;
    plStack_288 = plVar4;
    ppuStack_280 = &puStack_30;
    if (*(char *)((long)puVar9 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_2c0,*puVar9,puVar9[1]);
    }
    else {
      uStack_2b8 = puVar9[1];
      uStack_2c0 = *puVar9;
      lStack_2b0 = puVar9[2];
    }
    (*pcVar16)(&uStack_2c0,(long)param_3,plVar7);
    if (lStack_2b0 < 0) {
      __ZdlPv(uStack_2c0);
    }
    return;
  }
  return;
}



/* Entry: 10a8a49b8; end: 10a8a54c7;  */

void FUN_10a8a49b8(undefined8 *param_1,undefined **param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  byte **ppbVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined **unaff_x20;
  ulong uVar14;
  undefined **ppuVar15;
  undefined **unaff_x21;
  code *pcVar16;
  undefined **unaff_x22;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  long *plStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined *puStack_248;
  long *plStack_240;
  byte *pbStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined7 uStack_210;
  undefined1 uStack_209;
  undefined8 uStack_208;
  undefined8 uStack_200;
  byte *pbStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  byte *pbStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined5 uStack_1b0;
  undefined1 uStack_1ab;
  undefined2 uStack_1aa;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  byte *pbStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  byte *pbStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  byte abStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  byte bStack_131;
  long *plStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  long lStack_108;
  uint uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [56];
  undefined **ppuStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [40];
  undefined *puStack_78;
  undefined *puStack_70;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_248 = (undefined *)0x0;
  plStack_240 = (long *)0x0;
  plVar4 = (long *)param_2[4];
  uStack_218 = (byte *)CONCAT44(uStack_218._4_4_,(undefined4)uStack_218);
  if (plVar4 == (long *)0x0) goto LAB_10a8a51a8;
  __ZNSt3__119__shared_weak_count4lockEv();
  unaff_x20 = param_2;
  plStack_240 = plVar4;
  uStack_218 = (byte *)CONCAT44(uStack_218._4_4_,(undefined4)uStack_218);
  if ((plVar4 == (long *)0x0) ||
     (puStack_248 = param_2[3],
     uStack_218 = (byte *)CONCAT44(uStack_218._4_4_,(undefined4)uStack_218),
     puStack_248 == (undefined *)0x0)) goto LAB_10a8a51a8;
  unaff_x21 = (undefined **)&uStack_1b8;
  plVar4 = *(long **)(param_2[2] + 0x18);
  uStack_128 = param_1[1];
  plStack_130 = (long *)*param_1;
  lStack_120 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  uStack_110 = param_1[4];
  plStack_118 = (long *)param_1[3];
  lStack_108 = param_1[5];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_100 = *(uint *)(param_1 + 6);
  lStack_f8 = param_1[7];
  uStack_f0 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_e8,param_1 + 9);
  ppuStack_b0 = (undefined **)param_1[0x10];
  uStack_a8 = *(undefined4 *)(param_1 + 0x11);
  FUN_10a0424c4(auStack_a0,param_1 + 0x12);
  ppuVar15 = ppuStack_b0;
  lVar13 = *plVar4;
  unaff_x20 = (undefined **)(ulong)uStack_100;
  if (uStack_100 - 200 < 100) {
    ppuVar8 = ppuStack_b0;
    FUN_109ffe064(&uStack_148,lStack_f8,ppuStack_b0);
    param_3 = (int)ppuVar8;
    if (-1 < (char)bStack_131) {
      uStack_140 = (ulong)bStack_131;
    }
    if (uStack_140 == 0) {
      ppuVar15 = &PTR_PTR_1133058a0;
      ppuVar8 = ppuVar15;
      FUN_10ae079a0(0,&PTR_PTR_1133058a0);
      FUN_10ae07cd4(ppuVar8,&PTR_PTR_1133058a0);
      puStack_78._0_4_ = 1;
      puStack_70 = &UNK_10f67eeab;
      FUN_10a865734(lVar13,&puStack_78);
    }
    else {
      ppuStack_60 = (undefined **)0x0;
      unaff_x22 = &puStack_78;
      param_3 = 0;
      FUN_109fc89b4(abStack_158,&uStack_148,&puStack_78,0,0);
      if (ppuStack_60 == unaff_x22) {
        lVar11 = 0x20;
LAB_10a8a4ba8:
        (**(code **)(*ppuStack_60 + lVar11))();
      }
      else if (ppuStack_60 != (undefined **)0x0) {
        lVar11 = 0x28;
        goto LAB_10a8a4ba8;
      }
      if (abStack_158[0] == 9) {
        func_0x00010ae02f70(0,ppuVar15);
        unaff_x21 = &PTR_PTR_113305b38;
        unaff_x22 = unaff_x21;
        FUN_10ae079a0();
        func_0x00010ae02f80();
        FUN_10ae07cd4(unaff_x22,&PTR_PTR_113305b38);
        pbStack_178 = (byte *)CONCAT44(pbStack_178._4_4_,1);
        puStack_170 = &UNK_10f67eeab;
        FUN_10a865734(lVar13,&pbStack_178);
      }
      else {
        uStack_188._7_1_ = '\t';
        pbStack_198 = (byte *)0x656b6f5468747561;
        puStack_190 = (undefined *)CONCAT62(puStack_190._2_6_,0x6e);
        pbStack_178 = abStack_158;
        puStack_170 = (undefined *)0x0;
        uStack_168 = 0;
        uStack_160 = 0x8000000000000000;
        if (abStack_158[0] == 1) {
          puVar5 = puStack_150;
          func_0x0001093793a4(puStack_150,&pbStack_198);
          puStack_170 = puVar5;
          if (uStack_188._7_1_ < '\0') {
            __ZdlPv(pbStack_198);
          }
        }
        else if (abStack_158[0] == 2) {
          uStack_168 = *(undefined8 *)(puStack_150 + 8);
        }
        else {
          uStack_160 = 1;
        }
        uStack_1a8._7_1_ = '\r';
        uStack_1b8._0_5_ = 0x6674616c70;
        uStack_1b8._5_3_ = 0x6d726f;
        uStack_1b0 = 0x6e656b6f54;
        uStack_1ab = 0;
        pbStack_198 = abStack_158;
        puStack_190 = (undefined *)0x0;
        uStack_188 = 0;
        uStack_180 = 0x8000000000000000;
        if (abStack_158[0] == 1) {
          puVar5 = puStack_150;
          func_0x0001093793a4(puStack_150,&uStack_1b8);
          puStack_190 = puVar5;
          if (uStack_1a8._7_1_ < '\0') {
            __ZdlPv(CONCAT35(uStack_1b8._5_3_,(undefined5)uStack_1b8));
          }
        }
        else if (abStack_158[0] == 2) {
          uStack_188 = *(undefined8 *)(puStack_150 + 8);
        }
        else {
          uStack_180 = 1;
        }
        uStack_1c8._7_1_ = '\f';
        pbStack_1d8 = (byte *)0x6d726f6674616c70;
        puStack_1d0 = (undefined *)CONCAT35(puStack_1d0._5_3_,0x65707954);
        uStack_1b8._0_5_ = SUB85(abStack_158,0);
        uStack_1b8._5_3_ = (undefined3)((ulong)abStack_158 >> 0x28);
        uStack_1b0 = 0;
        uStack_1ab = 0;
        uStack_1aa = 0;
        uStack_1a8 = 0;
        uStack_1a0 = 0x8000000000000000;
        if (abStack_158[0] == 1) {
          puVar5 = puStack_150;
          func_0x0001093793a4(puStack_150,&pbStack_1d8);
          uStack_1b0 = SUB85(puVar5,0);
          uStack_1ab = (undefined1)((ulong)puVar5 >> 0x28);
          uStack_1aa = (undefined2)((ulong)puVar5 >> 0x30);
          if (uStack_1c8._7_1_ < '\0') {
            __ZdlPv(pbStack_1d8);
          }
        }
        else if (abStack_158[0] == 2) {
          uStack_1a8 = *(undefined8 *)(puStack_150 + 8);
        }
        else {
          uStack_1a0 = 1;
        }
        uStack_1e8._7_1_ = '\f';
        pbStack_1f8 = (byte *)0x6e65697265707865;
        puStack_1f0 = (undefined *)CONCAT35(puStack_1f0._5_3_,0x64496563);
        pbStack_1d8 = abStack_158;
        puStack_1d0 = (undefined *)0x0;
        uStack_1c8 = 0;
        uStack_1c0 = 0x8000000000000000;
        if (abStack_158[0] == 1) {
          puVar5 = puStack_150;
          func_0x0001093793a4(puStack_150,&pbStack_1f8);
          puStack_1d0 = puVar5;
          if (uStack_1e8._7_1_ < '\0') {
            __ZdlPv(pbStack_1f8);
          }
        }
        else if (abStack_158[0] == 2) {
          uStack_1c8 = *(undefined8 *)(puStack_150 + 8);
        }
        else {
          uStack_1c0 = 1;
        }
        uStack_208._7_1_ = '\x0f';
        uStack_218._0_4_ = 0x61727564;
        uStack_218._4_4_ = 0x6e6f6974;
        uStack_210 = 0x73646e6f636553;
        uStack_209 = 0;
        pbStack_1f8 = abStack_158;
        puStack_1f0 = (undefined *)0x0;
        uStack_1e8 = 0;
        uStack_1e0 = 0x8000000000000000;
        if (abStack_158[0] == 1) {
          puVar5 = puStack_150;
          func_0x0001093793a4(puStack_150,&uStack_218);
          puStack_1f0 = puVar5;
          if (uStack_208._7_1_ < '\0') {
            __ZdlPv(CONCAT44(uStack_218._4_4_,(undefined4)uStack_218));
          }
        }
        else if (abStack_158[0] == 2) {
          uStack_1e8 = *(undefined8 *)(puStack_150 + 8);
        }
        else {
          uStack_1e0 = 1;
        }
        uStack_218 = abStack_158;
        uStack_210 = 0;
        uStack_209 = 0;
        uStack_208 = 0;
        uStack_200 = 0x8000000000000000;
        if (abStack_158[0] == 2) {
          uStack_208 = *(long *)(puStack_150 + 8);
        }
        else if (abStack_158[0] == 1) {
          uStack_210 = SUB87(puStack_150 + 8,0);
          uStack_209 = (undefined1)((ulong)(puStack_150 + 8) >> 0x38);
        }
        else {
          uStack_200 = 1;
        }
        ppbVar6 = &pbStack_178;
        func_0x000109379420(ppbVar6,&uStack_218);
        if (((ulong)ppbVar6 & 1) == 0) {
          pbStack_238 = abStack_158;
          puStack_230 = (undefined *)0x0;
          lStack_228 = 0;
          uStack_220 = 0x8000000000000000;
          if (abStack_158[0] == 2) {
            lStack_228 = *(long *)(puStack_150 + 8);
          }
          else if (abStack_158[0] == 1) {
            puStack_230 = puStack_150 + 8;
          }
          else {
            uStack_220 = 1;
          }
          ppbVar6 = &pbStack_1f8;
          func_0x000109379420(ppbVar6,&pbStack_238);
          if (((ulong)ppbVar6 & 1) == 0) {
            func_0x00010937b950(&pbStack_178);
            func_0x00010937c804(&uStack_218);
            func_0x00010937b950(&pbStack_1f8);
            func_0x00010937ba88();
            uVar14 = (ulong)pbStack_238 & 0xffffffff;
            param_3 = (int)pbStack_238;
            func_0x00010ae02ecc(0,uVar14);
            ppuVar15 = &PTR_PTR_113304120;
            FUN_10ae079a0();
            func_0x00010ae02edc();
            FUN_10ae07cd4(ppuVar15,&PTR_PTR_113304120);
            ppuVar15 = (undefined **)(plVar4 + 1);
            FUN_10a8a54c8(ppuVar15,&uStack_218,uVar14);
            __ZNSt3__16chrono12steady_clock3nowEv();
            unaff_x22 = (undefined **)plVar4[9];
            unaff_x21 = *(undefined ***)(lVar13 + 0x350);
            puVar5 = &UNK_10f67fa44;
            if ((*(byte *)(*(long *)(lVar13 + 0x378) + 0xa9) & 1) == 0) {
              puVar5 = &UNK_10f67fa5d;
            }
            func_0x000107c2b054(&pbStack_238,puVar5);
            if (unaff_x21 != (undefined **)0x0) {
              FUN_10a76bf18((double)(((long)ppuVar15 - (long)unaff_x22) / 1000000),unaff_x21[0x11b],
                            &pbStack_238);
            }
            if (lStack_228 < 0) {
              __ZdlPv(pbStack_238);
            }
            if (uStack_208 < 0) {
              __ZdlPv(uStack_218);
            }
            goto LAB_10a8a5158;
          }
        }
        uStack_218 = abStack_158;
        uStack_210 = 0;
        uStack_209 = 0;
        uStack_208 = 0;
        uStack_200 = 0x8000000000000000;
        if (abStack_158[0] == 2) {
          uStack_208 = *(long *)(puStack_150 + 8);
        }
        else if (abStack_158[0] == 1) {
          uStack_210 = SUB87(puStack_150 + 8,0);
          uStack_209 = (undefined1)((ulong)(puStack_150 + 8) >> 0x38);
        }
        else {
          uStack_200 = 1;
        }
        ppbVar6 = &pbStack_198;
        func_0x000109379420(ppbVar6,&uStack_218);
        if (((ulong)ppbVar6 & 1) == 0) {
          pbStack_238 = abStack_158;
          puStack_230 = (undefined *)0x0;
          lStack_228 = 0;
          uStack_220 = 0x8000000000000000;
          if (abStack_158[0] == 2) {
            lStack_228 = *(long *)(puStack_150 + 8);
          }
          else if (abStack_158[0] == 1) {
            puStack_230 = puStack_150 + 8;
          }
          else {
            uStack_220 = 1;
          }
          puVar9 = &uStack_1b8;
          func_0x000109379420(puVar9,&pbStack_238);
          if (((ulong)puVar9 & 1) == 0) {
            lVar11 = *(long *)(lVar13 + 0x378);
            func_0x00010937b950(&pbStack_198);
            func_0x00010937c804(&uStack_218);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (lVar11 + 0x60,&uStack_218);
            if (uStack_208 < 0) {
              __ZdlPv(uStack_218);
            }
            ppuVar15 = *(undefined ***)(lVar13 + 0x378);
            func_0x00010937b950(&uStack_1b8);
            func_0x00010937c804(&uStack_218);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (ppuVar15 + 0xf,&uStack_218);
            if (uStack_208 < 0) {
              __ZdlPv(uStack_218);
            }
            lVar11 = *(long *)(lVar13 + 0x378);
            uVar12 = (ulong)*(char *)(lVar11 + 0x47);
            uVar14 = uVar12;
            if ((long)uVar12 < 0) {
              uVar14 = *(ulong *)(lVar11 + 0x38);
            }
            if (uVar14 == 0) {
              uStack_218 = abStack_158;
              uStack_210 = 0;
              uStack_209 = 0;
              uStack_208 = 0;
              uStack_200 = 0x8000000000000000;
              if (abStack_158[0] == 2) {
                uStack_208 = *(long *)(puStack_150 + 8);
              }
              else if (abStack_158[0] == 1) {
                uStack_210 = SUB87(puStack_150 + 8,0);
                uStack_209 = (undefined1)((ulong)(puStack_150 + 8) >> 0x38);
              }
              else {
                uStack_200 = 1;
              }
              ppbVar6 = &pbStack_1d8;
              func_0x000109379420(ppbVar6,&uStack_218);
              if ((int)ppbVar6 != 0) {
                lVar11 = *(long *)(lVar13 + 0x378);
                uVar12 = (ulong)*(byte *)(lVar11 + 0x47);
                goto LAB_10a8a52f4;
              }
              func_0x00010937b950(&pbStack_1d8);
              func_0x00010937c804(&uStack_218);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (*(long *)(lVar13 + 0x378) + 0x30,&uStack_218);
              if (uStack_208 < 0) {
                __ZdlPv(uStack_218);
              }
              lVar11 = *(long *)(lVar13 + 0x378);
            }
            else {
LAB_10a8a52f4:
              if (((uint)uVar12 >> 7 & 1) == 0) {
                uVar12 = uVar12 & 0xff;
              }
              else {
                uVar12 = *(ulong *)(lVar11 + 0x38);
              }
              if (uVar12 == 0) {
                FUN_10a8a5564();
                uStack_218._0_4_ = 1;
                uStack_210 = 0x10f67eeab;
                uStack_209 = 0;
                FUN_10a865734(lVar13,&uStack_218);
                goto LAB_10a8a5158;
              }
            }
            lVar10 = lVar11 + 0x30;
            FUN_10a8a5598(lVar11 + 0x60,lVar11 + 0x78,lVar10);
            param_3 = (int)lVar10;
            FUN_10a872930(lVar13,plVar4 + 1);
            goto LAB_10a8a5158;
          }
        }
        ppuVar15 = &PTR_PTR_113304348;
        ppuVar8 = ppuVar15;
        FUN_10ae079a0(0,&PTR_PTR_113304348);
        FUN_10ae07cd4(ppuVar8,&PTR_PTR_113304348);
        uStack_218._0_4_ = 1;
        uStack_210 = 0x10f67eeab;
        uStack_209 = 0;
        FUN_10a865734(lVar13,&uStack_218);
      }
LAB_10a8a5158:
      func_0x000109380ffc(&puStack_150,abStack_158[0]);
    }
    unaff_x20 = ppuVar15;
    if ((char)bStack_131 < '\0') {
      __ZdlPv(uStack_148);
    }
  }
  else {
    func_0x00010ae02ecc(0,unaff_x20);
    unaff_x21 = &PTR_PTR_113304bc0;
    unaff_x22 = unaff_x21;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(unaff_x22,&PTR_PTR_113304bc0);
    puStack_78._0_4_ = 1;
    puStack_70 = &UNK_10f67eeab;
    FUN_10a865734(lVar13,&puStack_78);
  }
  func_0x000104c4f944(auStack_a0);
  plVar4 = &lStack_f8;
  FUN_10a042634();
  if (lStack_108 < 0) {
    plVar4 = plStack_118;
    __ZdlPv();
  }
  if (lStack_120 < 0) {
    plVar4 = plStack_130;
    __ZdlPv();
  }
LAB_10a8a51a8:
  plVar7 = plStack_240;
  if (plStack_240 != (long *)0x0) {
    plVar1 = plStack_240 + 1;
    do {
      lVar13 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar4 = plVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (uStack_208 < 0) {
      __ZdlPv(uStack_218);
    }
    puVar9 = (undefined8 *)(ulong)abStack_158[0];
    func_0x000109380ffc(&puStack_150);
    if ((char)bStack_131 < '\0') {
      __ZdlPv(uStack_148);
    }
    FUN_10a05bd10(&plStack_130);
    func_0x00010a05a86c(&puStack_248);
    plVar7 = plVar4;
    __Unwind_Resume();
    pcStack_258 = FUN_10a8a54c8;
    pcVar16 = (code *)*plVar7;
    ppuStack_280 = unaff_x22;
    ppuStack_278 = unaff_x21;
    ppuStack_270 = unaff_x20;
    plStack_268 = plVar4;
    puStack_260 = &stack0xfffffffffffffff0;
    if (*(char *)((long)puVar9 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_2a0,*puVar9,puVar9[1]);
    }
    else {
      uStack_298 = puVar9[1];
      uStack_2a0 = *puVar9;
      lStack_290 = puVar9[2];
    }
    (*pcVar16)(&uStack_2a0,(long)param_3,plVar7);
    if (lStack_290 < 0) {
      __ZdlPv(uStack_2a0);
    }
    return;
  }
  return;
}



/* Entry: 10a8a54c8; end: 10a8a5563;  */

void FUN_10a8a54c8(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  pcVar1 = (code *)*param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_50,*param_2,param_2[1]);
  }
  else {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  (*pcVar1)(&uStack_50,(long)param_3,param_1);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return;
}



/* Entry: 10a8a5564; end: 10a8a5597;  */

undefined * FUN_10a8a5564(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
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
  
  ppuVar6 = &PTR_PTR_113303918;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0(0);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
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
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a8a5598; end: 10a8a5693;  */

undefined * FUN_10a8a5598(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
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
  
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar1 = param_1;
  }
  FUN_10ae03140(0,puVar1,uVar3);
  FUN_10ae03140();
  FUN_10ae03140();
  ppuVar7 = &PTR_PTR_113303950;
  ppuVar6 = ppuVar7;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae0314c();
  FUN_10ae0314c();
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
    puVar9 = ppuVar6[0x12];
    puVar8 = ppuVar6[0xb];
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
    puStack_8e0 = puVar8;
    puStack_8d8 = puVar9;
    uStack_8d0 = (ulong)(puVar9 != (undefined *)0x0);
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



/* Entry: 10a8a5694; end: 10a8a56bf;  */

undefined8 * FUN_10a8a5694(long param_1)

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



/* Entry: 10a8a56c0; end: 10a8a56ef;  */

void FUN_10a8a56c0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  FUN_10a8a56f0();
                    /* WARNING: Could not recover jumptable at 0x00010a8a56ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a8a56f0; end: 10a8a5853;  */

void FUN_10a8a56f0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  long *plVar6;
  
  plVar3 = (long *)param_1[1];
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      plVar6 = (long *)*param_1;
      if (plVar6 != (long *)0x0) {
        ppuVar4 = &PTR_PTR_113303a20;
        FUN_10ae079a0(0,&PTR_PTR_113303a20);
        FUN_10ae07cd4(ppuVar4,&PTR_PTR_113303a20);
        (**(code **)(*plVar6 + 0xa8))(plVar6);
      }
      plVar6 = plVar3 + 1;
      do {
        lVar5 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  (*(code *)param_1[5])(param_1);
  return;
}



/* Entry: 10a8a5854; end: 10a8a5907;  */

void FUN_10a8a5854(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)(param_1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a8a5908; end: 10a8a5993;  */

void FUN_10a8a5908(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  uVar2 = *param_1;
  plVar3 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10a869744(uVar2,param_2 + 0x10);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
      return;
    }
  }
  return;
}



/* Entry: 10a8a5994; end: 10a8a59cf;  */

void FUN_10a8a5994(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a8a59d0; end: 10a8a5a87;  */

void FUN_10a8a59d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  long lVar6;
  
  lVar6 = *param_1;
  plVar2 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  ppuVar5 = &PTR_PTR_113303b18;
  FUN_10ae079a0(0,&PTR_PTR_113303b18);
  FUN_10ae07cd4(ppuVar5,&PTR_PTR_113303b18);
  FUN_10a869e80(lVar6,lVar6 + 0x530);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar2);
      return;
    }
  }
  return;
}



/* Entry: 10a8a5a88; end: 10a8a5a9b;  */

void FUN_10a8a5a88(void)

{
  return;
}



/* Entry: 10a8a5a9c; end: 10a8a5b5f;  */

bool FUN_10a8a5a9c(long param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8a5b04);
    (*pcVar1)();
  }
  (*(code *)**(undefined8 **)
              (*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 6) * 8) +
               (*(ulong *)(param_1 + 0x20) & 0x3f) * 0x40 + 8))();
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar2 = 0x7f < *(ulong *)(param_1 + 0x20);
  if (bVar2) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x40;
  }
  return bVar2;
}



/* Entry: 10a8a5b60; end: 10a8a5c13;  */

void FUN_10a8a5b60(long *param_1,long param_2)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  code **ppcVar13;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  plVar10 = *(long **)(param_2 + 0x10);
  lVar12 = *param_1;
  if (plVar10 == (long *)0x0 || (char)plVar10[8] != '\x02') {
    if (plVar10 == (long *)0x0 || (char)plVar10[8] != '\x01') {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010a8a5ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*plVar10)(lVar12 + 0x18,plVar10);
    return;
  }
  ppcVar13 = (code **)(lVar12 + 0x18);
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar10;
  ppcVar8 = ppcVar13;
  FUN_10a688b40();
  if (plVar5 == (long *)0x0) {
    ppcVar9 = (code **)0x0;
    ppuVar6 = (undefined8 **)0x0;
    if (ppcVar8 != (code **)0x0) {
      ppuStack_98 = (undefined8 **)plVar10[1];
      lStack_a0 = *plVar10;
      if (plVar10[1] != 0) {
        plVar10 = (long *)(plVar10[1] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(char *)(lVar12 + 0x2f) < '\0') {
        func_0x000107c3192c(&ppuStack_90,*ppcVar13,*(undefined8 *)(lVar12 + 0x20));
      }
      else {
        uStack_88 = *(undefined8 *)(lVar12 + 0x20);
        ppuStack_90 = (undefined8 **)*ppcVar13;
        lStack_80 = *(long *)(lVar12 + 0x28);
      }
      pcStack_78 = FUN_10a05aec4;
      ppcVar13 = &pcStack_78;
      FUN_10a05af2c(apuStack_70,&PTR_FUN_110b9f388,&lStack_a0);
      ppcVar9 = &pcStack_78;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      ppuVar6 = apuStack_70;
      (*(code *)*apuStack_70[0])();
      if (lStack_80 < 0) {
        ppuVar6 = ppuStack_90;
        __ZdlPv();
      }
      ppuVar7 = ppuStack_98;
      if (ppuStack_98 != (undefined8 **)0x0) {
        ppuVar1 = ppuStack_98 + 1;
        do {
          puVar11 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = (undefined8 *)((long)puVar11 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar11 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_98)[2])(ppuStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar6 = ppuVar7;
        }
      }
    }
  }
  else {
    *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
    ppuVar6 = (undefined8 **)*plVar10;
    ppcVar9 = ppcVar13;
    FUN_10a05aca4(ppuVar6,ppcVar13);
    iVar4 = *(int *)((long)plVar5 + 4) + -1;
    *(int *)((long)plVar5 + 4) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)plVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a004dac(&lStack_a0);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a05aca4;
  ppcStack_c0 = ppcVar13;
  ppuStack_b8 = ppuVar6;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,ppuVar7 + 1,*ppuVar7);
  func_0x000109884820(&puStack_c8,&puStack_d0,*ppuVar7);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**ppuVar7 + 0x30))(&puStack_d0);
  FUN_10a05adc0(*ppuVar7,&puStack_d0,&puStack_c8,ppcVar9);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a8a5c14; end: 10a8a5da3;  */

void FUN_10a8a5c14(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010a88aaac(aiStack_70,plVar1,*param_2,param_2[1]);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
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



/* Entry: 10a8a5da4; end: 10a8a5db3;  */

void FUN_10a8a5da4(long param_1)

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
  func_0x00010a88aaac(aiStack_70,plVar2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  uStack_38 = 1;
  piStack_40 = aiStack_70;
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



/* Entry: 10a8a5db4; end: 10a8a5ddb;  */

long FUN_10a8a5db4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a5c92ec(param_1 + 0x18);
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



/* Entry: 10a8a5ddc; end: 10a8a5e9b;  */

void FUN_10a8a5ddc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c24f30;
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



/* Entry: 10a8a5e9c; end: 10a8a633f;  */

long * FUN_10a8a5e9c(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  char **ppcVar6;
  char cVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lStack_198;
  long *plStack_190;
  undefined6 uStack_188;
  undefined2 uStack_182;
  undefined6 uStack_180;
  undefined1 uStack_17a;
  undefined1 uStack_179;
  undefined8 uStack_178;
  undefined8 uStack_170;
  char *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  char acStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
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
  long lStack_68;
  undefined *puStack_60;
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_198 = 0;
  plStack_190 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x20);
  if (((plVar4 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_190 = plVar4, plVar4 == (long *)0x0)) ||
     (lStack_198 = *(long *)(param_2 + 0x18), lStack_198 == 0)) goto LAB_10a8a61e0;
  plVar4 = *(long **)(*(long *)(param_2 + 0x10) + 0x18);
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
  lVar10 = *plVar4;
  if ((*(long *)(lVar10 + 0x368) != 0) && (**(int **)(lVar10 + 0x1e8) != 4)) {
    if (iStack_f0 - 200U < 100) {
      FUN_109ffe064(&uStack_138,lStack_e8,lStack_a0);
      if (-1 < (char)bStack_121) {
        uStack_130 = (ulong)bStack_121;
      }
      if (uStack_130 == 0) {
LAB_10a8a6160:
        ppuVar8 = &PTR_PTR_1133046d0;
        FUN_10ae079a0(0,&PTR_PTR_1133046d0);
        FUN_10ae07cd4(ppuVar8,&PTR_PTR_1133046d0);
        pcStack_168 = (char *)CONCAT44(pcStack_168._4_4_,1);
        puStack_160 = &UNK_10f67fa8d;
        FUN_10a865734(lVar10,&pcStack_168);
      }
      else {
        plStack_50 = (long *)0x0;
        FUN_109fc89b4(acStack_148,&uStack_138,&lStack_68,0,0);
        if (plStack_50 == &lStack_68) {
          lVar9 = 0x20;
LAB_10a8a6054:
          (**(code **)(*plStack_50 + lVar9))();
        }
        else if (plStack_50 != (long *)0x0) {
          lVar9 = 0x28;
          goto LAB_10a8a6054;
        }
        if (acStack_148[0] == '\t') {
          cVar7 = '\t';
LAB_10a8a6154:
          func_0x000109380ffc(&puStack_140,cVar7);
          goto LAB_10a8a6160;
        }
        uStack_178._7_1_ = '\x0e';
        uStack_188 = 0x6e7265747865;
        uStack_182 = 0x6c61;
        uStack_180 = 0x644972657355;
        uStack_17a = 0;
        pcStack_168 = acStack_148;
        puStack_160 = (undefined *)0x0;
        uStack_158 = 0;
        uStack_150 = 0x8000000000000000;
        if (acStack_148[0] == '\x01') {
          puVar5 = puStack_140;
          func_0x0001093793a4(puStack_140,&uStack_188);
          puStack_160 = puVar5;
          if (uStack_178._7_1_ < '\0') {
            __ZdlPv(CONCAT26(uStack_182,uStack_188));
          }
        }
        else if (acStack_148[0] == '\x02') {
          uStack_158 = *(undefined8 *)(puStack_140 + 8);
        }
        else {
          uStack_150 = 1;
        }
        uStack_188 = SUB86(acStack_148,0);
        uStack_182 = (undefined2)((ulong)acStack_148 >> 0x30);
        uStack_180 = 0;
        uStack_17a = 0;
        uStack_179 = 0;
        uStack_178 = 0;
        uStack_170 = 0x8000000000000000;
        if (acStack_148[0] == '\x02') {
          uStack_178 = *(long *)(puStack_140 + 8);
        }
        else if (acStack_148[0] == '\x01') {
          puStack_140 = puStack_140 + 8;
          uStack_180 = SUB86(puStack_140,0);
          uStack_17a = (undefined1)((ulong)puStack_140 >> 0x30);
          uStack_179 = (undefined1)((ulong)puStack_140 >> 0x38);
        }
        else {
          uStack_170 = 1;
        }
        ppcVar6 = &pcStack_168;
        func_0x000109379420(ppcVar6,&uStack_188);
        cVar7 = acStack_148[0];
        if (((ulong)ppcVar6 & 1) != 0) goto LAB_10a8a6154;
        lVar9 = *(long *)(lVar10 + 0x230);
        func_0x00010937b950(&pcStack_168);
        func_0x00010937c804(&uStack_188);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar9 + 0x18,&uStack_188);
        if (uStack_178 < 0) {
          __ZdlPv(CONCAT26(uStack_182,uStack_188));
        }
        plVar4 = plVar4 + 1;
        (*(code *)*plVar4)(lVar10 + 0x230,plVar4);
        func_0x000109380ffc(&puStack_140,acStack_148[0]);
      }
      if ((char)bStack_121 < '\0') {
        __ZdlPv(uStack_138);
      }
    }
    else {
      func_0x00010ae02ecc(0,iStack_f0);
      ppuVar8 = &PTR_PTR_113304c00;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      FUN_10ae07cd4(ppuVar8,&PTR_PTR_113304c00);
      lStack_68._0_4_ = 1;
      puStack_60 = &UNK_10f67fa72;
      FUN_10a865734(lVar10,&lStack_68);
    }
  }
  func_0x000104c4f944(auStack_90);
  plVar4 = &lStack_e8;
  FUN_10a042634();
  if (lStack_f8 < 0) {
    plVar4 = plStack_108;
    __ZdlPv();
  }
  if (lStack_110 < 0) {
    plVar4 = plStack_120;
    __ZdlPv();
  }
LAB_10a8a61e0:
  plVar3 = plStack_190;
  if (plStack_190 != (long *)0x0) {
    plVar1 = plStack_190 + 1;
    do {
      lVar10 = *plVar1;
      cVar7 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *plVar1 = lVar10 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_190 + 0x10))(plStack_190);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar4 = plVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (uStack_178 < 0) {
      __ZdlPv(CONCAT26(uStack_182,uStack_188));
    }
    func_0x000109380ffc(&puStack_140,acStack_148[0]);
    if ((char)bStack_121 < '\0') {
      __ZdlPv(uStack_138);
    }
    FUN_10a05bd10(&plStack_120);
    func_0x00010a05a86c(&lStack_198);
    __Unwind_Resume();
    plVar3 = (long *)plVar4[3];
    if (plVar3 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar3 != (long *)0x0) {
        if (plVar4[2] != 0) {
          FUN_10a05c0fc(plVar4[2],plVar4[1]);
        }
        plVar1 = plVar3 + 1;
        do {
          lVar10 = *plVar1;
          cVar7 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar2) {
            *plVar1 = lVar10 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      if (plVar4[3] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    return plVar4 + 1;
  }
  return plVar4;
}



/* Entry: 10a8a6340; end: 10a8a636b;  */

undefined8 * FUN_10a8a6340(long param_1)

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



/* Entry: 10a8a636c; end: 10a8a63fb;  */

void FUN_10a8a636c(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_2 + 0x20);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    if (*(long *)(param_2 + 0x18) != 0) {
      ppuVar5 = &PTR_PTR_113303b40;
      FUN_10ae079a0(0,&PTR_PTR_113303b40);
      FUN_10ae07cd4(ppuVar5,&PTR_PTR_113303b40);
    }
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a8a63fc; end: 10a8a6427;  */

undefined8 * FUN_10a8a63fc(long param_1)

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



/* Entry: 10a8a6428; end: 10a8a64b7;  */

void FUN_10a8a6428(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_2 + 0x20);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    if (*(long *)(param_2 + 0x18) != 0) {
      ppuVar5 = &PTR_PTR_113303b78;
      FUN_10ae079a0(0,&PTR_PTR_113303b78);
      FUN_10ae07cd4(ppuVar5,&PTR_PTR_113303b78);
    }
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a8a64b8; end: 10a8a64e3;  */

undefined8 * FUN_10a8a64b8(long param_1)

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



/* Entry: 10a8a64e4; end: 10a8a6943;  */

long * FUN_10a8a64e4(long *param_1,long param_2)

{
  long *plVar1;
  undefined6 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  char **ppcVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lStack_198;
  long *plStack_190;
  undefined6 uStack_188;
  undefined2 uStack_182;
  undefined6 uStack_180;
  undefined1 uStack_17a;
  undefined1 uStack_179;
  undefined8 uStack_178;
  undefined8 uStack_170;
  char *pcStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  char acStack_148 [8];
  long lStack_140;
  undefined8 uStack_138;
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
  plVar5 = *(long **)(param_2 + 0x20);
  plVar7 = plVar5;
  if (plVar5 == (long *)0x0) goto LAB_10a8a6810;
  __ZNSt3__119__shared_weak_count4lockEv();
  plVar7 = plVar5;
  plStack_190 = plVar5;
  if (plVar5 == (long *)0x0) goto LAB_10a8a6810;
  lStack_198 = *(long *)(param_2 + 0x18);
  if (lStack_198 != 0) {
    lVar11 = *(long *)(param_2 + 0x10);
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
    if (iStack_f0 - 200U < 100) {
      lVar11 = *(long *)(lVar11 + 0x18);
      FUN_109ffe064(&uStack_138,lStack_e8,lStack_a0);
      if (-1 < (char)bStack_121) {
        uStack_130 = (ulong)bStack_121;
      }
      if (uStack_130 == 0) {
        ppuVar8 = &PTR_PTR_113304778;
        FUN_10ae079a0(0,&PTR_PTR_113304778);
        FUN_10ae07cd4(ppuVar8,&PTR_PTR_113304778);
      }
      else {
        plStack_50 = (long *)0x0;
        FUN_109fc89b4(acStack_148,&uStack_138,alStack_68,0,0);
        if (plStack_50 == alStack_68) {
          lVar10 = 0x20;
LAB_10a8a6670:
          (**(code **)(*plStack_50 + lVar10))();
        }
        else if (plStack_50 != (long *)0x0) {
          lVar10 = 0x28;
          goto LAB_10a8a6670;
        }
        if (acStack_148[0] == '\t') {
          ppuVar8 = &PTR_PTR_113305030;
LAB_10a8a6778:
          ppuVar9 = ppuVar8;
          FUN_10ae079a0(0,ppuVar8);
          FUN_10ae07cd4(ppuVar9,ppuVar8);
        }
        else {
          uStack_178._7_1_ = '\x0e';
          uStack_188 = 0x67617373656d;
          uStack_182 = 0x4365;
          uStack_180 = 0x746e65746e6f;
          uStack_17a = 0;
          pcStack_168 = acStack_148;
          lStack_160 = 0;
          uStack_158 = 0;
          uStack_150 = 0x8000000000000000;
          if (acStack_148[0] == '\x01') {
            lVar10 = lStack_140;
            func_0x0001093793a4(lStack_140,&uStack_188);
            lStack_160 = lVar10;
            if (uStack_178._7_1_ < '\0') {
              __ZdlPv(CONCAT26(uStack_182,uStack_188));
            }
          }
          else if (acStack_148[0] == '\x02') {
            uStack_158 = *(undefined8 *)(lStack_140 + 8);
          }
          else {
            uStack_150 = 1;
          }
          uStack_188 = SUB86(acStack_148,0);
          uStack_182 = (undefined2)((ulong)acStack_148 >> 0x30);
          uStack_180 = 0;
          uStack_17a = 0;
          uStack_179 = 0;
          uStack_178 = 0;
          uStack_170 = 0x8000000000000000;
          if (acStack_148[0] == '\x02') {
            uStack_178 = *(long *)(lStack_140 + 8);
          }
          else if (acStack_148[0] == '\x01') {
            lStack_140 = lStack_140 + 8;
            uStack_180 = (undefined6)lStack_140;
            uStack_17a = (undefined1)((ulong)lStack_140 >> 0x30);
            uStack_179 = (undefined1)((ulong)lStack_140 >> 0x38);
          }
          else {
            uStack_170 = 1;
          }
          ppcVar6 = &pcStack_168;
          func_0x000109379420(ppcVar6,&uStack_188);
          if ((int)ppcVar6 != 0) {
            ppuVar8 = &PTR_PTR_113305438;
            goto LAB_10a8a6778;
          }
          func_0x00010937b950(&pcStack_168);
          func_0x00010937c804(&uStack_188);
          ppuVar8 = &PTR_PTR_113304cc0;
          FUN_10ae079a0(0,&PTR_PTR_113304cc0);
          FUN_10ae07cd4(ppuVar8,&PTR_PTR_113304cc0);
          plVar7 = *(long **)(lVar11 + 0x368);
          if (plVar7 != (long *)0x0) {
            puVar2 = (undefined6 *)CONCAT26(uStack_182,uStack_188);
            if (-1 < uStack_178) {
              puVar2 = &uStack_188;
            }
            (**(code **)(*plVar7 + 0xf8))(plVar7,puVar2);
          }
          if (uStack_178 < 0) {
            __ZdlPv(CONCAT26(uStack_182,uStack_188));
          }
        }
        func_0x000109380ffc(&lStack_140,acStack_148[0]);
      }
      if ((char)bStack_121 < '\0') {
        __ZdlPv(uStack_138);
      }
    }
    else {
      ppuVar8 = &PTR_PTR_113304c80;
      FUN_10ae079a0(0,&PTR_PTR_113304c80);
      FUN_10ae07cd4(ppuVar8,&PTR_PTR_113304c80);
    }
    func_0x000104c4f944(auStack_90);
    plVar7 = &lStack_e8;
    FUN_10a042634();
    if (lStack_f8 < 0) {
      plVar7 = plStack_108;
      __ZdlPv();
    }
    if (lStack_110 < 0) {
      plVar7 = plStack_120;
      __ZdlPv();
    }
  }
  plVar1 = plVar5 + 1;
  do {
    lVar11 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    plVar7 = plVar5;
  }
LAB_10a8a6810:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar7;
  }
  ___stack_chk_fail();
  if (uStack_178 < 0) {
    __ZdlPv(CONCAT26(uStack_182,uStack_188));
  }
  func_0x000109380ffc(&lStack_140,acStack_148[0]);
  if ((char)bStack_121 < '\0') {
    __ZdlPv(uStack_138);
  }
  FUN_10a05bd10(&plStack_120);
  func_0x00010a05a86c(&lStack_198);
  __Unwind_Resume();
  plVar5 = (long *)plVar7[3];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (plVar7[2] != 0) {
        FUN_10a05c0fc(plVar7[2],plVar7[1]);
      }
      plVar1 = plVar5 + 1;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plVar7[3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar7 + 1;
}



/* Entry: 10a8a6944; end: 10a8a696f;  */

undefined8 * FUN_10a8a6944(long param_1)

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



/* Entry: 10a8a6970; end: 10a8a6adb;  */

long * FUN_10a8a6970(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [56];
  long lStack_70;
  undefined4 uStack_68;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = *(long **)(param_2 + 0x20);
  plVar4 = plVar3;
  if ((plVar3 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 = plVar3, plVar3 != (long *)0x0)) {
    if (*(long *)(param_2 + 0x18) != 0) {
      plVar8 = (long *)*param_1;
      lVar6 = param_1[2];
      *param_1 = 0;
      param_1[1] = 0;
      plVar9 = (long *)param_1[3];
      param_1[2] = 0;
      param_1[3] = 0;
      lVar7 = param_1[5];
      param_1[4] = 0;
      param_1[5] = 0;
      lStack_b8 = param_1[7];
      lStack_b0 = param_1[8];
      param_1[7] = 0;
      (**(code **)(param_1[9] + 0x10))(auStack_a8,param_1 + 9);
      lStack_70 = param_1[0x10];
      uStack_68 = (undefined4)param_1[0x11];
      FUN_10a0424c4(auStack_60,param_1 + 0x12);
      ppuVar5 = &PTR_PTR_113303bf0;
      FUN_10ae079a0(0,&PTR_PTR_113303bf0);
      FUN_10ae07cd4(ppuVar5,&PTR_PTR_113303bf0);
      func_0x000104c4f944(auStack_60);
      plVar4 = &lStack_b8;
      FUN_10a042634();
      if (lVar7 < 0) {
        __ZdlPv();
        plVar4 = plVar9;
      }
      if (lVar6 < 0) {
        __ZdlPv();
        plVar4 = plVar8;
      }
    }
    plVar9 = plVar3 + 1;
    do {
      lVar6 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar4 = plVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar4;
  }
  ___stack_chk_fail();
  plVar3 = (long *)plVar4[3];
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      if (plVar4[2] != 0) {
        FUN_10a05c0fc(plVar4[2],plVar4[1]);
      }
      plVar9 = plVar3 + 1;
      do {
        lVar6 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (plVar4[3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar4 + 1;
}



/* Entry: 10a8a6adc; end: 10a8a6b07;  */

undefined8 * FUN_10a8a6adc(long param_1)

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



/* Entry: 10a8a6b08; end: 10a8a6c73;  */

long * FUN_10a8a6b08(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [56];
  long lStack_70;
  undefined4 uStack_68;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = *(long **)(param_2 + 0x20);
  plVar4 = plVar3;
  if ((plVar3 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 = plVar3, plVar3 != (long *)0x0)) {
    if (*(long *)(param_2 + 0x18) != 0) {
      plVar8 = (long *)*param_1;
      lVar6 = param_1[2];
      *param_1 = 0;
      param_1[1] = 0;
      plVar9 = (long *)param_1[3];
      param_1[2] = 0;
      param_1[3] = 0;
      lVar7 = param_1[5];
      param_1[4] = 0;
      param_1[5] = 0;
      lStack_b8 = param_1[7];
      lStack_b0 = param_1[8];
      param_1[7] = 0;
      (**(code **)(param_1[9] + 0x10))(auStack_a8,param_1 + 9);
      lStack_70 = param_1[0x10];
      uStack_68 = (undefined4)param_1[0x11];
      FUN_10a0424c4(auStack_60,param_1 + 0x12);
      ppuVar5 = &PTR_PTR_113303c78;
      FUN_10ae079a0(0,&PTR_PTR_113303c78);
      FUN_10ae07cd4(ppuVar5,&PTR_PTR_113303c78);
      func_0x000104c4f944(auStack_60);
      plVar4 = &lStack_b8;
      FUN_10a042634();
      if (lVar7 < 0) {
        __ZdlPv();
        plVar4 = plVar9;
      }
      if (lVar6 < 0) {
        __ZdlPv();
        plVar4 = plVar8;
      }
    }
    plVar9 = plVar3 + 1;
    do {
      lVar6 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar4 = plVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar4;
  }
  ___stack_chk_fail();
  plVar3 = (long *)plVar4[3];
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      if (plVar4[2] != 0) {
        FUN_10a05c0fc(plVar4[2],plVar4[1]);
      }
      plVar9 = plVar3 + 1;
      do {
        lVar6 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (plVar4[3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar4 + 1;
}



/* Entry: 10a8a6c74; end: 10a8a6caf;  */

undefined8 * FUN_10a8a6c74(long param_1)

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



/* Entry: 10a8a6cb0; end: 10a8a6ccf;  */

void FUN_10a8a6cb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c25008;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8a6cd0; end: 10a8a6cdf;  */

void FUN_10a8a6cd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a8a6cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109681e20; end: 109681e53;  */

undefined8 * FUN_109681e20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 109681e54; end: 1096822fb;  */

undefined *** FUN_109681e54(undefined ***param_1,undefined ***param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  uint unaff_w25;
  ulong uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined **appuStack_a0 [2];
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10969bc60(&ppuStack_b0);
  pppuVar7 = &ppuStack_90;
  pppuVar11 = param_1;
  (*(code *)(*param_1)[8])(param_1,pppuVar7,1,1);
  if ((int)pppuVar11 == 1) {
    uVar12 = 0;
    uVar10 = 0;
    do {
      uVar12 = ((ulong)ppuStack_90 & 0x7f) << (uVar10 & 0x3f) | uVar12;
      unaff_w25 = (uint)uVar12;
      if (-1 < (char)ppuStack_90) {
        pppuVar11 = param_1;
        pppuVar7 = param_2;
        (*(code *)(*param_1)[8])(param_1,param_2,8,1);
        if (1 < unaff_w25) {
          if (((ulong)pppuVar11 & 0xffffffff) != 1) goto LAB_10968216c;
          pppuVar7 = &ppuStack_90;
          pppuVar11 = param_1;
          (*(code *)(*param_1)[8])(param_1,pppuVar7,1,1);
          if ((int)pppuVar11 != 1) goto LAB_10968216c;
          uVar12 = 0;
          uVar10 = 0;
          goto LAB_109682130;
        }
        if (((ulong)pppuVar11 & 0xffffffff) != 1) goto LAB_109682274;
        pppuVar7 = &ppuStack_90;
        pppuVar11 = param_1;
        (*(code *)(*param_1)[8])(param_1,pppuVar7,4,1);
        if ((int)pppuVar11 != 1) goto LAB_109682274;
        pppuVar7 = (undefined ***)((ulong)ppuStack_90 & 0xffffffff);
        if ((int)ppuStack_90 < 0) goto LAB_109682274;
        func_0x000109681b04(param_2 + 4);
        pppuVar11 = (undefined ***)param_2[4];
        goto LAB_1096821b8;
      }
      pppuVar7 = &ppuStack_90;
      pppuVar11 = param_1;
      (*(code *)(*param_1)[8])(param_1,pppuVar7,1,1);
      uVar10 = uVar10 + 7;
    } while ((int)pppuVar11 == 1);
  }
  pppuVar11 = (undefined ***)0x0;
  goto LAB_109681f00;
  while( true ) {
    pppuVar7 = &ppuStack_90;
    pppuVar11 = param_1;
    (*(code *)(*param_1)[8])(param_1,pppuVar7,1,1);
    uVar10 = uVar10 + 7;
    if ((int)pppuVar11 != 1) break;
LAB_109682130:
    uVar12 = ((ulong)ppuStack_90 & 0x7f) << (uVar10 & 0x3f) | uVar12;
    if (-1 < (char)ppuStack_90) {
      func_0x000109681b04(param_2 + 4,uVar12);
      pppuVar11 = (undefined ***)param_2[4];
      pppuVar5 = (undefined ***)param_2[5];
      goto LAB_1096821ec;
    }
  }
LAB_10968216c:
  pppuVar11 = (undefined ***)0x0;
  unaff_w25 = 1;
  goto LAB_109681f00;
LAB_1096821ec:
  if (pppuVar11 == pppuVar5) goto LAB_10968220c;
  pppuVar6 = param_1;
  pppuVar7 = pppuVar11;
  func_0x00010967ff4c();
  if (((ulong)pppuVar6 & 1) == 0) goto LAB_10968216c;
  pppuVar11 = pppuVar11 + 7;
  goto LAB_1096821ec;
LAB_1096821b8:
  if (pppuVar11 == (undefined ***)param_2[5]) goto LAB_10968220c;
  pppuVar5 = param_1;
  pppuVar7 = pppuVar11;
  func_0x00010967ff4c();
  if (((ulong)pppuVar5 & 1) == 0) goto LAB_109682274;
  pppuVar11 = pppuVar11 + 7;
  goto LAB_1096821b8;
LAB_10968220c:
  pppuVar7 = &ppuStack_90;
  pppuVar11 = param_1;
  (*(code *)(*param_1)[8])(param_1,pppuVar7,1,1);
  if ((int)pppuVar11 == 1) {
    uVar12 = 0;
    uVar10 = 0;
    do {
      uVar12 = ((ulong)ppuStack_90 & 0x7f) << (uVar10 & 0x3f) | uVar12;
      if (-1 < (char)ppuStack_90) {
        pppuVar7 = (undefined ***)(uVar12 & 0xffffffff);
        func_0x0001096819f8(param_2 + 1);
        pppuVar11 = (undefined ***)0x1;
        goto LAB_109681f00;
      }
      pppuVar7 = &ppuStack_90;
      pppuVar11 = param_1;
      (*(code *)(*param_1)[8])(param_1,pppuVar7,1,1);
      uVar10 = uVar10 + 7;
    } while ((int)pppuVar11 == 1);
  }
LAB_109682274:
  pppuVar11 = (undefined ***)0x0;
LAB_109681f00:
  pppuVar6 = (undefined ***)param_2[2];
  for (pppuVar5 = (undefined ***)param_2[1]; pppuVar5 != pppuVar6; pppuVar5 = pppuVar5 + 8) {
    if ((((ulong)pppuVar11 & 1) == 0) ||
       (pppuVar11 = param_1, pppuVar7 = pppuVar5, (*(code *)(*param_1)[8])(param_1,pppuVar5,1,1),
       (int)pppuVar11 != 1)) {
      pppuVar11 = (undefined ***)0x0;
    }
    else {
      pppuVar7 = &ppuStack_90;
      pppuVar11 = param_1;
      func_0x000109682e34(param_1,pppuVar7,pppuVar5 + 2,pppuVar5 + 5);
    }
    if (*(char *)pppuVar5 == '\0') {
      func_0x000107c2ace8(&ppuStack_c0);
      if (unaff_w25 == 0) {
        if ((int)pppuVar11 != 0) {
          pppuVar11 = param_1;
          FUN_109697d7c(param_1,&ppuStack_c0);
        }
      }
      else if ((int)pppuVar11 != 0) {
        (*(code *)ppuStack_b0[5])(appuStack_a0,&ppuStack_b0,param_1);
        pppuVar7 = appuStack_a0;
        ___dynamic_cast(pppuVar7,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
        if (pppuVar7 == (undefined ***)0x0) {
          func_0x000107c2acdc();
        }
        ppuVar13 = pppuVar7[1];
        if (ppuVar13 != (undefined **)0x0) {
          ppuVar14 = ppuVar13 + -1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
            if (bVar2) {
              *(int *)ppuVar14 = *(int *)ppuVar14 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        ppuStack_88 = ppuStack_b8;
        ppuStack_c0 = &PTR_FUN_110b00af0;
        ppuStack_90 = &PTR_FUN_110b01d60;
        ppuStack_b8 = ppuVar13;
        func_0x000107c2acd4(&ppuStack_90);
        appuStack_a0[0] = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(appuStack_a0);
        lVar3 = lStack_a8 + -0x20;
        func_0x0001096966c0(lVar3,uRam000000011382aa08);
        pppuVar11 = (undefined ***)(ulong)(lVar3 == 0);
      }
      pppuVar7 = (undefined ***)(ppuStack_b8 + 1);
      if (*(char *)((long)ppuStack_b8 + 0x1f) < '\0') {
        pppuVar7 = (undefined ***)*pppuVar7;
      }
      pppuVar4 = param_2;
      FUN_10968152c(param_2,pppuVar7,pppuVar5[2],pppuVar5[3]);
      pppuVar5[1] = (undefined **)pppuVar4;
      ppuStack_c0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_c0);
    }
    else {
      pppuVar5[1] = (undefined **)0x0;
    }
  }
  ppuStack_b0 = &PTR_FUN_110b01d60;
  pppuVar5 = &ppuStack_b0;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar11;
  }
  ___stack_chk_fail();
  FUN_109696618(&ppuStack_b0);
  __Unwind_Resume();
  ppuVar14 = pppuVar7[1];
  ppuVar13 = *pppuVar7;
  if (pppuVar7[1] != (undefined **)0x0) {
    ppuVar9 = pppuVar7[1] + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar2) {
        *ppuVar9 = *ppuVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuVar9 = pppuVar5[1];
  pppuVar5[1] = ppuVar14;
  *pppuVar5 = ppuVar13;
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar13 = ppuVar9 + 1;
    do {
      puVar8 = *ppuVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
      if (bVar2) {
        *ppuVar13 = puVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar8 == (undefined *)0x0) {
      (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
    }
  }
  return pppuVar5;
}



/* Entry: 1096822fc; end: 1096824d3;  */

undefined8 * FUN_1096822fc(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
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



/* Entry: 1096824d4; end: 109682613;  */

long * FUN_1096824d4(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar5 = (lVar7 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar5 < 0x492492492492493) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar4 * -0x2492492492492492;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x249249249249248 < (ulong)(lVar4 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    plStack_38 = param_1;
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_109682694();
    }
    lVar7 = (long)plVar3 + lVar7;
    plStack_40 = plVar3 + uVar6 * 7;
    plStack_58 = plVar3;
    plStack_50 = (long *)lVar7;
    plStack_48 = (long *)lVar7;
    FUN_109682614(lVar7,param_2);
    plStack_48 = (long *)(lVar7 + 0x38);
    lVar7 = lVar7 + (*param_1 - param_1[1]);
    func_0x0001096826dc(param_1,*param_1,param_1[1],lVar7);
    plVar3 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar7;
    lVar7 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar7;
    func_0x00010968279c(&plStack_58);
    return plVar3;
  }
  FUN_109682680();
  func_0x00010968279c(&plStack_58);
  __Unwind_Resume();
  lVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar7;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_109285684();
  lVar7 = param_2[6];
  lVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = lVar4;
  if (lVar7 != 0) {
    plVar3 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return param_1;
}



/* Entry: 109682614; end: 10968267f;  */

undefined8 * FUN_109682614(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_109285684();
  lVar4 = param_2[6];
  uVar5 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar5;
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
  return param_1;
}



/* Entry: 109682680; end: 109682693;  */

void FUN_109682680(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if ((undefined8 *)0x492492492492492 < param_2) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar2 = *puVar1;
        param_4[1] = puVar1[1];
        *param_4 = uVar2;
        param_4[3] = 0;
        param_4[4] = 0;
        param_4[2] = 0;
        uVar2 = puVar1[2];
        param_4[3] = puVar1[3];
        param_4[2] = uVar2;
        param_4[4] = puVar1[4];
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        uVar2 = puVar1[5];
        param_4[6] = puVar1[6];
        param_4[5] = uVar2;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1 = puVar1 + 7;
        param_4 = param_4 + 7;
      } while (puVar1 != param_3);
      do {
        func_0x000109682760(param_2);
        param_2 = param_2 + 7;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x38);
  return;
}



/* Entry: 109682694; end: 1096827e7;  */

void FUN_109682694(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((undefined8 *)0x492492492492492 < param_2) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar2 = *puVar1;
        param_4[1] = puVar1[1];
        *param_4 = uVar2;
        param_4[3] = 0;
        param_4[4] = 0;
        param_4[2] = 0;
        uVar2 = puVar1[2];
        param_4[3] = puVar1[3];
        param_4[2] = uVar2;
        param_4[4] = puVar1[4];
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        uVar2 = puVar1[5];
        param_4[6] = puVar1[6];
        param_4[5] = uVar2;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1 = puVar1 + 7;
        param_4 = param_4 + 7;
      } while (puVar1 != param_3);
      do {
        func_0x000109682760(param_2);
        param_2 = param_2 + 7;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x38);
  return;
}



/* Entry: 1096827e8; end: 109682857;  */

void FUN_1096827e8(long *param_1)

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
        func_0x000109682444(lVar2);
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



/* Entry: 109682858; end: 1096828db;  */

void FUN_109682858(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1096828dc(param_1,param_4);
    lVar1 = param_1;
    FUN_109682928(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 1096828dc; end: 109682927;  */

long * FUN_1096828dc(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  
  if (param_2 < 0x492492492492493) {
    plVar1 = param_1;
    FUN_109682694();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 7);
    return plVar1;
  }
  FUN_109682680();
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_1096829ac(param_4,param_2);
    param_4 = param_4 + 7;
  }
  return param_4;
}



/* Entry: 109682928; end: 1096829ab;  */

long FUN_109682928(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_1096829ac(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  return param_4;
}



/* Entry: 1096829ac; end: 109682a17;  */

undefined8 * FUN_1096829ac(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_109285684();
  lVar4 = param_2[6];
  uVar5 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar5;
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
  return param_1;
}



/* Entry: 109682a18; end: 109682a87;  */

void FUN_109682a18(long *param_1)

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
        lVar2 = lVar2 + -0x38;
        func_0x000109682760(lVar2);
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



/* Entry: 109682a88; end: 109682c1f;  */

void FUN_109682a88(long *param_1,ulong param_2,long *param_3,long *param_4)

{
  uint *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  undefined1 uStack_a8;
  byte bStack_a7;
  undefined1 uStack_a6;
  byte bStack_a5;
  undefined1 uStack_a4;
  byte bStack_a3;
  undefined1 uStack_a2;
  byte bStack_a1;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  puVar4 = (undefined4 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar4 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    lVar9 = (long)puVar4 - *param_1;
    uVar3 = param_2 + (lVar9 >> 3) * 0x6db6db6db6db6db7;
    if (0x492492492492492 < uVar3) {
      FUN_109682680();
      func_0x00010968279c(&plStack_58);
      __Unwind_Resume();
      uVar8 = param_3[1] - *param_3 >> 2;
      uVar3 = uVar8;
      if (0x7f < uVar8) {
        do {
          bStack_a7 = (byte)uVar3 | 0x80;
          (**(code **)(*param_1 + 0x48))(param_1,&bStack_a7,1,1);
          uVar8 = uVar3 >> 7;
          uVar7 = uVar3 >> 0xe;
          uVar3 = uVar8;
        } while (uVar7 != 0);
      }
      uStack_a8 = (undefined1)uVar8;
      (**(code **)(*param_1 + 0x48))(param_1,&uStack_a8,1,1);
      puVar1 = (uint *)param_3[1];
      for (puVar10 = (uint *)*param_3; puVar10 != puVar1; puVar10 = puVar10 + 1) {
        uVar8 = (ulong)(int)*puVar10;
        uVar3 = uVar8;
        if (0x7f < *puVar10) {
          do {
            bStack_a5 = (byte)uVar3 | 0x80;
            (**(code **)(*param_1 + 0x48))(param_1,&bStack_a5,1,1);
            uVar8 = uVar3 >> 7;
            uVar7 = uVar3 >> 0xe;
            uVar3 = uVar8;
          } while (uVar7 != 0);
        }
        uStack_a6 = (undefined1)uVar8;
        (**(code **)(*param_1 + 0x48))(param_1,&uStack_a6,1,1);
      }
      uVar8 = param_4[1] - *param_4 >> 2;
      uVar3 = uVar8;
      if (0x7f < uVar8) {
        do {
          bStack_a3 = (byte)uVar3 | 0x80;
          (**(code **)(*param_1 + 0x48))(param_1,&bStack_a3,1,1);
          uVar8 = uVar3 >> 7;
          uVar7 = uVar3 >> 0xe;
          uVar3 = uVar8;
        } while (uVar7 != 0);
      }
      uStack_a4 = (undefined1)uVar8;
      (**(code **)(*param_1 + 0x48))(param_1,&uStack_a4,1,1);
      puVar1 = (uint *)param_4[1];
      for (puVar10 = (uint *)*param_4; puVar10 != puVar1; puVar10 = puVar10 + 1) {
        uVar8 = (ulong)(int)*puVar10;
        uVar3 = uVar8;
        if (0x7f < *puVar10) {
          do {
            bStack_a1 = (byte)uVar3 | 0x80;
            (**(code **)(*param_1 + 0x48))(param_1,&bStack_a1,1,1);
            uVar8 = uVar3 >> 7;
            uVar7 = uVar3 >> 0xe;
            uVar3 = uVar8;
          } while (uVar7 != 0);
        }
        uStack_a2 = (undefined1)uVar8;
        (**(code **)(*param_1 + 0x48))(param_1,&uStack_a2,1,1);
      }
      return;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar6 * -0x2492492492492492;
    if (uVar8 < uVar3 || uVar8 - uVar3 == 0) {
      uVar8 = uVar3;
    }
    if (0x249249249249248 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
      uVar8 = 0x492492492492492;
    }
    plStack_38 = param_1;
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_109682694();
    }
    plStack_50 = (long *)((long)plVar2 + lVar9);
    puVar5 = (undefined4 *)((long)plStack_50 + param_2 * 0xe * 4);
    puVar4 = (undefined4 *)plStack_50;
    do {
      *puVar4 = 0xffffffff;
      *(undefined8 *)(puVar4 + 4) = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(undefined8 *)(puVar4 + 6) = 0;
      *(undefined8 *)(puVar4 + 0xc) = 0;
      *(undefined8 *)(puVar4 + 10) = 0;
      puVar4 = puVar4 + 0xe;
    } while (puVar4 != puVar5);
    lVar9 = (long)plStack_50 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_48 = (long *)puVar5;
    plStack_40 = plVar2 + uVar8 * 7;
    func_0x0001096826dc(param_1,*param_1,param_1[1],lVar9);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar5;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar8 * 7);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010968279c(&plStack_58);
  }
  else {
    puVar5 = puVar4;
    if (param_2 != 0) {
      puVar5 = puVar4 + param_2 * 0xe;
      do {
        *puVar4 = 0xffffffff;
        *(undefined8 *)(puVar4 + 4) = 0;
        *(undefined8 *)(puVar4 + 2) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        *(undefined8 *)(puVar4 + 6) = 0;
        *(undefined8 *)(puVar4 + 0xc) = 0;
        *(undefined8 *)(puVar4 + 10) = 0;
        puVar4 = puVar4 + 0xe;
      } while (puVar4 != puVar5);
    }
    param_1[1] = (long)puVar5;
  }
  return;
}



/* Entry: 109682c20; end: 109683063;  */

void FUN_109682c20(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  undefined1 uStack_48;
  byte bStack_47;
  undefined1 uStack_46;
  byte bStack_45;
  undefined1 uStack_44;
  byte bStack_43;
  undefined1 uStack_42;
  byte bStack_41;
  
  uVar5 = param_3[1] - *param_3 >> 2;
  uVar3 = uVar5;
  if (0x7f < uVar5) {
    do {
      bStack_47 = (byte)uVar3 | 0x80;
      (**(code **)(*param_1 + 0x48))(param_1,&bStack_47,1,1);
      uVar5 = uVar3 >> 7;
      uVar2 = uVar3 >> 0xe;
      uVar3 = uVar5;
    } while (uVar2 != 0);
  }
  uStack_48 = (undefined1)uVar5;
  (**(code **)(*param_1 + 0x48))(param_1,&uStack_48,1,1);
  puVar1 = (uint *)param_3[1];
  for (puVar4 = (uint *)*param_3; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    uVar5 = (ulong)(int)*puVar4;
    uVar3 = uVar5;
    if (0x7f < *puVar4) {
      do {
        bStack_45 = (byte)uVar3 | 0x80;
        (**(code **)(*param_1 + 0x48))(param_1,&bStack_45,1,1);
        uVar5 = uVar3 >> 7;
        uVar2 = uVar3 >> 0xe;
        uVar3 = uVar5;
      } while (uVar2 != 0);
    }
    uStack_46 = (undefined1)uVar5;
    (**(code **)(*param_1 + 0x48))(param_1,&uStack_46,1,1);
  }
  uVar5 = param_4[1] - *param_4 >> 2;
  uVar3 = uVar5;
  if (0x7f < uVar5) {
    do {
      bStack_43 = (byte)uVar3 | 0x80;
      (**(code **)(*param_1 + 0x48))(param_1,&bStack_43,1,1);
      uVar5 = uVar3 >> 7;
      uVar2 = uVar3 >> 0xe;
      uVar3 = uVar5;
    } while (uVar2 != 0);
  }
  uStack_44 = (undefined1)uVar5;
  (**(code **)(*param_1 + 0x48))(param_1,&uStack_44,1,1);
  puVar1 = (uint *)param_4[1];
  for (puVar4 = (uint *)*param_4; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    uVar5 = (ulong)(int)*puVar4;
    uVar3 = uVar5;
    if (0x7f < *puVar4) {
      do {
        bStack_41 = (byte)uVar3 | 0x80;
        (**(code **)(*param_1 + 0x48))(param_1,&bStack_41,1,1);
        uVar5 = uVar3 >> 7;
        uVar2 = uVar3 >> 0xe;
        uVar3 = uVar5;
      } while (uVar2 != 0);
    }
    uStack_42 = (undefined1)uVar5;
    (**(code **)(*param_1 + 0x48))(param_1,&uStack_42,1,1);
  }
  return;
}



/* Entry: 109683064; end: 109683097;  */

void FUN_109683064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109683098; end: 10968317f;  */

undefined8 * FUN_109683098(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
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
  *param_1 = &PTR_FUN_110b00b38;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x58);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  *puVar1 = &PTR_FUN_110b00c48;
  puVar1[1] = 0xffffffffffffffff;
  if (lRam000000011382a8f0 != -1) {
    puStack_28 = &uStack_31;
    ppuStack_30 = &puStack_28;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x11382a8f0,&ppuStack_30,FUN_1096836b0);
  }
  return param_1;
}



/* Entry: 109683180; end: 1096831b3;  */

undefined8 * FUN_109683180(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096831b4; end: 1096831c7;  */

void FUN_1096831b4(long param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **appuStack_60 [2];
  undefined **appuStack_50 [2];
  
  lVar7 = *(long *)(param_1 + 8);
  FUN_10969bc60(appuStack_50);
  appuStack_60[0] = (undefined **)CONCAT71(appuStack_60[0]._1_7_,2);
  (**(code **)(*param_2 + 0x48))(param_2,appuStack_60,1,1);
  (**(code **)(*param_2 + 0x48))(param_2,lVar7 + 8,8,1);
  uVar8 = (*(long *)(lVar7 + 0x30) - *(long *)(lVar7 + 0x28) >> 3) * 0x6db6db6db6db6db7;
  uVar6 = uVar8;
  if (0x7f < uVar8) {
    do {
      appuStack_60[0] = (undefined **)(CONCAT71(appuStack_60[0]._1_7_,(char)uVar6) | 0x80);
      (**(code **)(*param_2 + 0x48))(param_2,appuStack_60,1,1);
      uVar8 = uVar6 >> 7;
      uVar5 = uVar6 >> 0xe;
      uVar6 = uVar8;
    } while (uVar5 != 0);
  }
  appuStack_60[0] = (undefined **)CONCAT71(appuStack_60[0]._1_7_,(char)uVar8);
  (**(code **)(*param_2 + 0x48))(param_2,appuStack_60,1,1);
  lVar2 = *(long *)(lVar7 + 0x30);
  for (lVar9 = *(long *)(lVar7 + 0x28); lVar9 != lVar2; lVar9 = lVar9 + 0x38) {
    FUN_10967fe9c(param_2,lVar9);
  }
  uVar8 = *(long *)(lVar7 + 0x18) - *(long *)(lVar7 + 0x10);
  uVar6 = uVar8 & 0x3fffffe000;
  uVar8 = (long)(uVar8 * 0x4000000) >> 0x20;
  while( true ) {
    appuStack_60[0]._1_7_ = (undefined7)((ulong)appuStack_60[0] >> 8);
    if (uVar6 == 0) break;
    appuStack_60[0] = (undefined **)(CONCAT71(appuStack_60[0]._1_7_,(char)uVar8) | 0x80);
    (**(code **)(*param_2 + 0x48))(param_2,appuStack_60,1,1);
    uVar6 = uVar8 >> 0xe;
    uVar8 = uVar8 >> 7;
  }
  appuStack_60[0] = (undefined **)CONCAT71(appuStack_60[0]._1_7_,(char)uVar8);
  (**(code **)(*param_2 + 0x48))(param_2,appuStack_60,1,1);
  pcVar3 = *(char **)(lVar7 + 0x18);
  for (pcVar1 = *(char **)(lVar7 + 0x10); pcVar1 != pcVar3; pcVar1 = pcVar1 + 0x40) {
    (**(code **)(*param_2 + 0x48))(param_2,pcVar1,1,1);
    FUN_109682c20(param_2,appuStack_60,pcVar1 + 0x10,pcVar1 + 0x28);
    if (*pcVar1 == '\0') {
      uVar10 = **(undefined8 **)(*(long *)(pcVar1 + 8) + 0x10);
      uVar4 = uVar10;
      _strlen(uVar10);
      FUN_109697928(appuStack_60,uVar10,uVar4);
      (*(code *)appuStack_50[0][4])(appuStack_50,param_2,appuStack_60);
      appuStack_60[0] = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(appuStack_60);
    }
  }
  appuStack_50[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_50);
  return;
}



/* Entry: 1096831c8; end: 109683297;  */

undefined8 FUN_1096831c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lStack_50;
  int iStack_48;
  
  FUN_109681e54(param_2,*(long *)(param_1 + 8) + 8);
  if ((int)param_2 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(lVar1 + 0x10);
    if (0 < (int)((ulong)(*(long *)(lVar1 + 0x18) - lVar2) >> 6)) {
      lVar4 = 0;
      iVar5 = 0;
      iVar6 = 1;
      do {
        iVar3 = iVar6;
        if (*(char *)(lVar2 + lVar4) == '\x02') {
          lStack_50 = lVar1 + 8;
          iStack_48 = iVar6;
          FUN_109683298(lVar1 + 0x40,&lStack_50);
          lVar1 = *(long *)(param_1 + 8);
          iVar3 = iVar5 + 1;
        }
        iVar5 = iVar5 + 1;
        lVar2 = *(long *)(lVar1 + 0x10);
        iVar6 = iVar6 + 1;
        lVar4 = lVar4 + 0x40;
      } while (iVar3 < (int)((ulong)(*(long *)(lVar1 + 0x18) - lVar2) >> 6));
    }
  }
  return param_2;
}



/* Entry: 109683298; end: 10968335f;  */

void FUN_109683298(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar9 = *param_2;
    puVar8[1] = param_2[1];
    *puVar8 = uVar9;
    puVar8 = puVar8 + 2;
  }
  else {
    lVar7 = (long)puVar8 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_109683394();
      *param_1 = (long)&PTR_FUN_110b01d60;
      func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    plVar3 = param_1;
    FUN_1096833a8();
    puVar2 = (undefined8 *)((long)plVar3 + lVar7);
    uVar9 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar9;
    puVar8 = puVar2 + 2;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar7 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar3 + uVar5 * 2);
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return;
}



/* Entry: 109683360; end: 109683393;  */

void FUN_109683360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109683394; end: 1096833a7;  */

void FUN_109683394(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar3 = plVar1[1];
    lVar2 = lVar4;
    if (lVar3 != lVar4) {
      do {
        lVar3 = lVar3 + -0x38;
        func_0x000109682760(lVar3);
      } while (lVar3 != lVar4);
      lVar2 = *plVar1;
    }
    plVar1[1] = lVar4;
    __ZdlPv(lVar2);
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  return;
}



/* Entry: 1096833a8; end: 1096833db;  */

void FUN_1096833a8(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000104c4f740();
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x38;
        func_0x000109682760(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1096833dc; end: 10968343f;  */

void FUN_1096833dc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x38;
        func_0x000109682760(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109683440; end: 10968345b;  */

void FUN_109683440(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 10968345c; end: 1096834a3;  */

void FUN_10968345c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096834a4; end: 109683513;  */

undefined8 * FUN_1096834a4(undefined8 *param_1)

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



/* Entry: 109683514; end: 10968356b;  */

void FUN_109683514(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b00b58;
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



/* Entry: 10968356c; end: 109683573;  */

void FUN_10968356c(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 109683574; end: 1096835bf;  */

void FUN_109683574(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_109683098(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096835c0; end: 1096835ef;  */

bool FUN_1096835c0(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b00b58,0);
  return param_1 != 0;
}



/* Entry: 1096835f0; end: 1096835fb;  */

void FUN_1096835f0(undefined1 *param_1,undefined1 *param_2)

{
  *param_2 = *param_1;
  return;
}



/* Entry: 1096835fc; end: 1096836af;  */

long FUN_1096835fc(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x28;
  FUN_109682a18(&lStack_28);
  lStack_28 = param_1 + 0x10;
  FUN_1096827e8(&lStack_28);
  return param_1;
}



/* Entry: 1096836b0; end: 10968388f;  */

void FUN_1096836b0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *extraout_x8;
  int *piStack_58;
  int *piStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000109683f80();
  FUN_109684730();
  FUN_1096881d8();
  FUN_109689fa8();
  FUN_10968a314();
  FUN_10968a6c0();
  FUN_10968adec();
  FUN_10968bb04();
  FUN_10968cef8();
  FUN_10968f0bc();
  FUN_10968098c(&UNK_10dfda970,FUN_109683890);
  uStack_38 = 0x1800000018;
  uStack_40 = 0x18;
  piStack_50 = (int *)0x0;
  uStack_48 = 0;
  piStack_58 = (int *)0x0;
  FUN_109522b28(&piStack_58,&uStack_40,auStack_30,4);
  FUN_109680a78(&UNK_10dfda970,1,&piStack_58,FUN_109683a40);
  if (piStack_58 != (int *)0x0) {
    piStack_50 = piStack_58;
    __ZdlPv();
  }
  FUN_10968098c(&UNK_10dfda977,FUN_109683ab8);
  uStack_38 = 0x1800000018;
  uStack_40 = 0x18;
  piStack_50 = (int *)0x0;
  uStack_48 = 0;
  piStack_58 = (int *)0x0;
  FUN_109522b28(&piStack_58,&uStack_40,auStack_30,4);
  FUN_109680a78(&UNK_10dfda977,1,&piStack_58,FUN_109683bc0);
  if (piStack_58 != (int *)0x0) {
    piStack_50 = piStack_58;
    __ZdlPv();
  }
  FUN_10968098c(&UNK_10dfda988,FUN_109683c38);
  uStack_38 = 0x1800000018;
  uStack_40 = 0x18;
  piStack_50 = (int *)0x0;
  uStack_48 = 0;
  piStack_58 = (int *)0x0;
  FUN_109522b28(&piStack_58,&uStack_40,auStack_30,4);
  FUN_109680a78(&UNK_10dfda988,1,&piStack_58,FUN_109683ce8);
  piVar2 = piStack_58;
  if (piStack_58 != (int *)0x0) {
    piStack_50 = piStack_58;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_58 != (int *)0x0) {
    piStack_50 = piStack_58;
    __ZdlPv();
  }
  __Unwind_Resume();
  puVar3 = *(undefined4 **)(piVar2 + 2);
  lVar4 = (long)*piVar2;
  puVar1 = (undefined4 *)((long)puVar3 + ((lVar4 << 0x20) >> 0x1e));
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = 0;
  if (lVar4 != 0) {
    FUN_10925b938(extraout_x8,lVar4);
    puVar5 = (undefined4 *)extraout_x8[1];
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      *puVar5 = *puVar3;
      puVar5 = puVar5 + 1;
    }
    extraout_x8[1] = puVar5;
  }
  return;
}



/* Entry: 109683890; end: 1096838af;  */

void FUN_109683890(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 1096838b0; end: 109683953;  */

void FUN_1096838b0(undefined8 param_1,int *param_2,long param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_44;
  
  puVar4 = *(undefined4 **)(param_2 + 4);
  if (*param_2 == 0) {
    puVar6 = puVar4 + 1;
  }
  else {
    lVar3 = (long)*param_2 << 2;
    iVar1 = 1;
    piVar2 = *(int **)(param_2 + 2);
    do {
      iVar1 = *piVar2 * iVar1;
      lVar3 = lVar3 + -4;
      piVar2 = piVar2 + 1;
    } while (lVar3 != 0);
    if (iVar1 == 0) {
      return;
    }
    puVar6 = puVar4 + iVar1;
  }
  do {
    uVar7 = **(undefined4 **)(param_3 + 0x10);
    uStack_4c = **(undefined4 **)(param_4 + 0x10);
    uStack_44 = 0;
    uStack_50 = uVar7;
    FUN_109683954(&uStack_50,param_1);
    puVar5 = puVar4 + 1;
    *puVar4 = uVar7;
    puVar4 = puVar5;
  } while (puVar5 != puVar6);
  return;
}



/* Entry: 109683954; end: 109683a3f;  */

float FUN_109683954(float param_1,float param_2,long param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((*(byte *)(param_3 + 0xc) & 1) == 0) {
    uVar4 = param_4[1];
    uVar2 = param_4[3];
    uVar3 = *param_4;
    uVar1 = param_4[2];
    do {
      do {
        uVar6 = uVar1;
        uVar5 = uVar2;
        uVar3 = uVar3 ^ uVar3 << 0xb;
        uVar4 = uVar4 ^ uVar4 << 0xb;
        uVar3 = (uVar3 ^ uVar3 >> 8) - uVar5;
        uVar1 = uVar3 ^ uVar5 >> 0x13;
        fVar7 = ((float)uVar1 / 4.2949673e+09) * 2.0 + -1.0;
        uVar2 = (uVar4 ^ uVar4 >> 8) - uVar1 ^ uVar3 >> 0x13;
        fVar10 = ((float)uVar2 / 4.2949673e+09) * 2.0 + -1.0;
        fVar9 = fVar10 * fVar10 + fVar7 * fVar7;
        uVar4 = uVar5;
        uVar3 = uVar6;
      } while (1.0 < fVar9);
    } while (fVar9 == 0.0);
    *param_4 = uVar6;
    param_4[1] = uVar5;
    param_4[2] = uVar1;
    param_4[3] = uVar2;
    fVar8 = fVar9;
    _logf();
    fVar9 = SQRT((fVar8 * -2.0) / fVar9);
    *(float *)(param_3 + 8) = fVar10 * fVar9;
    *(undefined1 *)(param_3 + 0xc) = 1;
    fVar7 = fVar7 * fVar9;
  }
  else {
    *(undefined1 *)(param_3 + 0xc) = 0;
    fVar7 = *(float *)(param_3 + 8);
  }
  return param_1 + param_2 * fVar7;
}



/* Entry: 109683a40; end: 109683ab7;  */

void FUN_109683a40(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar3 = *param_2;
  lVar1 = param_2[2];
  lVar2 = param_2[3];
  uStack_18 = *(undefined8 *)(lVar3 + 8);
  lStack_20 = *(long *)(lVar3 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_20) >> 2);
  uStack_30 = *(undefined8 *)(lVar1 + 8);
  lStack_38 = *(long *)(lVar1 + 0x10);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_38) >> 2);
  uStack_48 = *(undefined8 *)(lVar2 + 8);
  lStack_50 = *(long *)(lVar2 + 0x10);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_50) >> 2);
  FUN_1096838b0(param_1,auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 109683ab8; end: 109683ad7;  */

void FUN_109683ab8(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109683ad8; end: 109683bbf;  */

void FUN_109683ad8(undefined8 param_1,int *param_2,long param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_64;
  
  fVar10 = **(float **)(param_3 + 0x10);
  fVar12 = **(float **)(param_4 + 0x10);
  pfVar7 = *(float **)(param_2 + 4);
  if (*param_2 == 0) {
    pfVar9 = pfVar7 + 1;
  }
  else {
    lVar6 = (long)*param_2 << 2;
    iVar4 = 1;
    piVar5 = *(int **)(param_2 + 2);
    do {
      iVar4 = *piVar5 * iVar4;
      lVar6 = lVar6 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar6 != 0);
    if (iVar4 == 0) {
      return;
    }
    pfVar9 = pfVar7 + iVar4;
  }
  fVar15 = fVar10 + fVar12 * 2.0;
  do {
    fVar13 = **(float **)(param_3 + 0x10);
    uVar14 = **(undefined4 **)(param_4 + 0x10);
    do {
      uStack_64 = 0;
      fStack_70 = fVar13;
      uStack_6c = uVar14;
      fVar11 = fVar13;
      FUN_109683954(fVar13,uVar14,&fStack_70,param_1);
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (fVar10 + fVar12 * -2.0 <= fVar11) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar11) && !NAN(fVar15)) {
          bVar1 = fVar11 < fVar15;
          bVar2 = fVar11 == fVar15;
          bVar3 = false;
        }
      }
    } while (!bVar2 && bVar1 == bVar3);
    pfVar8 = pfVar7 + 1;
    *pfVar7 = fVar11;
    pfVar7 = pfVar8;
  } while (pfVar8 != pfVar9);
  return;
}



/* Entry: 109683bc0; end: 109683c37;  */

void FUN_109683bc0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar3 = *param_2;
  lVar1 = param_2[2];
  lVar2 = param_2[3];
  uStack_18 = *(undefined8 *)(lVar3 + 8);
  lStack_20 = *(long *)(lVar3 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_20) >> 2);
  uStack_30 = *(undefined8 *)(lVar1 + 8);
  lStack_38 = *(long *)(lVar1 + 0x10);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_38) >> 2);
  uStack_48 = *(undefined8 *)(lVar2 + 8);
  lStack_50 = *(long *)(lVar2 + 0x10);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_50) >> 2);
  FUN_109683ad8(param_1,auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 109683c38; end: 109683ce7;  */

void FUN_109683c38(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109683ce8; end: 109683d5f;  */

void FUN_109683ce8(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar3 = *param_2;
  lVar1 = param_2[2];
  lVar2 = param_2[3];
  uStack_18 = *(undefined8 *)(lVar3 + 8);
  lStack_20 = *(long *)(lVar3 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_20) >> 2);
  uStack_30 = *(undefined8 *)(lVar1 + 8);
  lStack_38 = *(long *)(lVar1 + 0x10);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_38) >> 2);
  uStack_48 = *(undefined8 *)(lVar2 + 8);
  lStack_50 = *(long *)(lVar2 + 0x10);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_50) >> 2);
  func_0x000109683c58(param_1,auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 109683d60; end: 109683da3;  */

long * FUN_109683d60(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 != 0) {
    _free(*(undefined8 *)(lVar1 + -8));
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109683da4; end: 109683e27;  */

undefined8 * FUN_109683da4(undefined4 param_1,undefined8 *param_2,long param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_24;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_24 = param_1;
  FUN_1092d1c20(param_2,param_3,param_3 + param_4 * 4,param_4);
  iVar1 = 1;
  for (piVar2 = (int *)*param_2; piVar2 != (int *)param_2[1]; piVar2 = piVar2 + 1) {
    iVar1 = *piVar2 * iVar1;
  }
  FUN_109683e28(param_2 + 3,iVar1,&uStack_24);
  return param_2;
}



/* Entry: 109683e28; end: 109683e93;  */

long * FUN_109683e28(long *param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)
           (((-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2) - 4 | 0xc)
           + 4);
  func_0x000109699314(puVar1,0x10);
  *param_1 = (long)puVar1;
  if (0 < (int)param_2) {
    uVar3 = *param_3;
    uVar2 = (int)param_2 + 1;
    do {
      *puVar1 = uVar3;
      uVar2 = uVar2 - 1;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
  }
  return param_1;
}



/* Entry: 109683e94; end: 109683f03;  */

void FUN_109683e94(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    FUN_10925b938(param_1,param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 109683f04; end: 109684033;  */

long * FUN_109683f04(long *param_1,long *param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  lVar1 = *param_2;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *param_1 = lVar1;
  if (*(char *)(*(long *)(*param_2 + 8) + (long)(int)param_2[1] * 0x40) != '\x03') {
    puStack_38 = &UNK_10f57bc27;
    puStack_30 = &UNK_10f57bb8e;
    uStack_28 = 0x49;
    FUN_109699380(&puStack_38);
  }
  return param_1;
}



/* Entry: 109684034; end: 10968405b;  */

void FUN_109684034(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 10968405c; end: 10968411f;  */

void FUN_10968405c(undefined8 param_1)

{
  uint uVar1;
  int *piVar2;
  float *pfVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  int *piStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  piStack_40 = (int *)0x0;
  uStack_38 = 0;
  piStack_48 = (int *)0x0;
  FUN_109522b28(&piStack_48,&uStack_30,&lStack_28,2);
  pfVar3 = (float *)0x0;
  FUN_109680a78(param_1,0,&piStack_48,FUN_1096841a8);
  piVar2 = piStack_48;
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar2 == 0) {
    uVar6 = 1;
  }
  else {
    lVar5 = (long)*piVar2 << 2;
    uVar6 = 1;
    piVar4 = *(int **)(piVar2 + 2);
    do {
      uVar1 = *piVar4 * (int)uVar6;
      uVar6 = (ulong)uVar1;
      lVar5 = lVar5 + -4;
      piVar4 = piVar4 + 1;
    } while (lVar5 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  pfVar7 = *(float **)(piVar2 + 4);
  do {
    fVar8 = *pfVar3;
    if (fVar8 < 0.0) {
      _expf();
      fVar8 = fVar8 + -1.0;
    }
    *pfVar7 = fVar8;
    uVar6 = uVar6 - 1;
    pfVar3 = pfVar3 + 1;
    pfVar7 = pfVar7 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 109684120; end: 1096841a7;  */

void FUN_109684120(int *param_1,float *param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  
  if (*param_1 == 0) {
    uVar4 = 1;
  }
  else {
    lVar3 = (long)*param_1 << 2;
    uVar4 = 1;
    piVar2 = *(int **)(param_1 + 2);
    do {
      uVar1 = *piVar2 * (int)uVar4;
      uVar4 = (ulong)uVar1;
      lVar3 = lVar3 + -4;
      piVar2 = piVar2 + 1;
    } while (lVar3 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  pfVar5 = *(float **)(param_1 + 4);
  do {
    fVar6 = *param_2;
    if (fVar6 < 0.0) {
      _expf();
      fVar6 = fVar6 + -1.0;
    }
    *pfVar5 = fVar6;
    uVar4 = uVar4 - 1;
    param_2 = param_2 + 1;
    pfVar5 = pfVar5 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 1096841a8; end: 1096841e7;  */

void FUN_1096841a8(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  FUN_109684120(auStack_28,*(undefined8 *)(param_2[1] + 8));
  return;
}



/* Entry: 1096841e8; end: 109684263;  */

void FUN_1096841e8(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109684264; end: 109684327;  */

void FUN_109684264(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  float fVar9;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_48,FUN_109684328);
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  lVar2 = *plVar3;
  uVar6 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  if ((uVar6 & 0x3fffffffc) == 0) {
    uVar6 = 1;
  }
  else {
    lVar8 = ((long)(uVar6 * 0x40000000) >> 0x20) << 2;
    uVar6 = 1;
    piVar7 = *(int **)(lVar2 + 0x10);
    do {
      uVar1 = *piVar7 * (int)uVar6;
      uVar6 = (ulong)uVar1;
      lVar8 = lVar8 + -4;
      piVar7 = piVar7 + 1;
    } while (lVar8 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  pfVar4 = *(float **)(plVar3[1] + 8);
  pfVar5 = *(float **)(lVar2 + 8);
  do {
    fVar9 = 0.0;
    if (0.0 <= *pfVar4) {
      fVar9 = *pfVar4;
    }
    *pfVar5 = fVar9;
    uVar6 = uVar6 - 1;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 109684328; end: 1096843b7;  */

void FUN_109684328(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  float fVar8;
  
  lVar1 = *param_2;
  pfVar3 = *(float **)(param_2[1] + 8);
  pfVar4 = *(float **)(lVar1 + 8);
  uVar5 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar7 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar6 = *(int **)(lVar1 + 0x10);
    do {
      uVar2 = *piVar6 * (int)uVar5;
      uVar5 = (ulong)uVar2;
      lVar7 = lVar7 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar7 != 0);
    if ((int)uVar2 < 1) {
      return;
    }
  }
  do {
    fVar8 = 0.0;
    if (0.0 <= *pfVar3) {
      fVar8 = *pfVar3;
    }
    *pfVar4 = fVar8;
    uVar5 = uVar5 - 1;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 1096843b8; end: 10968447b;  */

void FUN_1096843b8(undefined8 param_1)

{
  uint uVar1;
  int *piVar2;
  float *pfVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  int *piStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  piStack_40 = (int *)0x0;
  uStack_38 = 0;
  piStack_48 = (int *)0x0;
  FUN_109522b28(&piStack_48,&uStack_30,&lStack_28,2);
  pfVar3 = (float *)0x0;
  FUN_109680a78(param_1,0,&piStack_48,FUN_109684520);
  piVar2 = piStack_48;
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar2 == 0) {
    uVar6 = 1;
  }
  else {
    lVar5 = (long)*piVar2 << 2;
    uVar6 = 1;
    piVar4 = *(int **)(piVar2 + 2);
    do {
      uVar1 = *piVar4 * (int)uVar6;
      uVar6 = (ulong)uVar1;
      lVar5 = lVar5 + -4;
      piVar4 = piVar4 + 1;
    } while (lVar5 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  pfVar7 = *(float **)(piVar2 + 4);
  do {
    fVar8 = *pfVar3;
    if (0.0 <= fVar8) {
      fVar8 = -fVar8;
      _expf();
      fVar8 = 1.0 / (fVar8 + 1.0);
    }
    else {
      _expf();
      fVar8 = 1.0 - 1.0 / (fVar8 + 1.0);
    }
    *pfVar7 = fVar8;
    uVar6 = uVar6 - 1;
    pfVar3 = pfVar3 + 1;
    pfVar7 = pfVar7 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 10968447c; end: 10968451f;  */

void FUN_10968447c(int *param_1,float *param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  
  if (*param_1 == 0) {
    uVar4 = 1;
  }
  else {
    lVar3 = (long)*param_1 << 2;
    uVar4 = 1;
    piVar2 = *(int **)(param_1 + 2);
    do {
      uVar1 = *piVar2 * (int)uVar4;
      uVar4 = (ulong)uVar1;
      lVar3 = lVar3 + -4;
      piVar2 = piVar2 + 1;
    } while (lVar3 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  pfVar5 = *(float **)(param_1 + 4);
  do {
    fVar6 = *param_2;
    if (0.0 <= fVar6) {
      fVar6 = -fVar6;
      _expf();
      fVar6 = 1.0 / (fVar6 + 1.0);
    }
    else {
      _expf();
      fVar6 = 1.0 - 1.0 / (fVar6 + 1.0);
    }
    *pfVar5 = fVar6;
    uVar4 = uVar4 - 1;
    param_2 = param_2 + 1;
    pfVar5 = pfVar5 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 109684520; end: 10968455f;  */

void FUN_109684520(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  FUN_10968447c(auStack_28,*(undefined8 *)(param_2[1] + 8));
  return;
}



/* Entry: 109684560; end: 10968457f;  */

void FUN_109684560(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109684580; end: 1096845ef;  */

void FUN_109684580(int *param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  if (*param_1 == 0) {
    uVar5 = 1;
  }
  else {
    lVar3 = (long)*param_1 << 2;
    uVar5 = 1;
    piVar2 = *(int **)(param_1 + 2);
    do {
      uVar1 = *piVar2 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar3 = lVar3 + -4;
      piVar2 = piVar2 + 1;
    } while (lVar3 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar6 = *(undefined4 **)(param_1 + 4);
  do {
    uVar7 = *puVar4;
    _tanhf();
    *puVar6 = uVar7;
    uVar5 = uVar5 - 1;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 1096845f0; end: 1096846b3;  */

void FUN_1096845f0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_48,FUN_1096846b4);
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  lVar2 = *plVar3;
  puVar7 = *(undefined4 **)(plVar3[1] + 8);
  puVar8 = *(undefined4 **)(lVar2 + 8);
  uVar5 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar6 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar4 = *(int **)(lVar2 + 0x10);
    do {
      uVar1 = *piVar4 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar6 = lVar6 + -4;
      piVar4 = piVar4 + 1;
    } while (lVar6 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  do {
    uVar9 = *puVar7;
    _tanhf();
    *puVar8 = uVar9;
    uVar5 = uVar5 - 1;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 1096846b4; end: 10968472f;  */

void FUN_1096846b4(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  lVar1 = *param_2;
  puVar6 = *(undefined4 **)(param_2[1] + 8);
  puVar7 = *(undefined4 **)(lVar1 + 8);
  uVar4 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  if ((uVar4 & 0x3fffffffc) == 0) {
    uVar4 = 1;
  }
  else {
    lVar5 = ((long)(uVar4 * 0x40000000) >> 0x20) << 2;
    uVar4 = 1;
    piVar3 = *(int **)(lVar1 + 0x10);
    do {
      uVar2 = *piVar3 * (int)uVar4;
      uVar4 = (ulong)uVar2;
      lVar5 = lVar5 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar5 != 0);
    if ((int)uVar2 < 1) {
      return;
    }
  }
  do {
    uVar8 = *puVar6;
    _tanhf();
    *puVar7 = uVar8;
    uVar4 = uVar4 - 1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 109684730; end: 1096847ff;  */

void FUN_109684730(void)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  func_0x0001096847b4();
  FUN_1096856a8();
  FUN_109685a44();
  FUN_109685da0();
  FUN_10968098c(&UNK_10dfdaaaf,FUN_1096860fc);
  FUN_10968616c(&UNK_10dfdaaaf,FUN_109686114);
  FUN_10968652c();
  FUN_10968098c(&UNK_10dfdaaaa,FUN_109686ccc);
  FUN_109686d3c(&UNK_10dfdaaaa,FUN_109686ce4);
  FUN_10968705c();
  FUN_10968739c();
  FUN_10968098c(&UNK_10dfdaa91,FUN_109687b48);
  FUN_109687bb8(&UNK_10dfdaa91,FUN_109687b60);
  ppiVar3 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x2800000028;
  uStack_30 = 0x28;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  piVar2 = (int *)0x0;
  FUN_109680a78(&UNK_10dfdaa91,0,&piStack_50,FUN_109688160);
  piVar1 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar1 != 0) {
    if ((*piVar2 == 0) || (*(int *)(*(long *)(piVar2 + 2) + (long)*piVar2 * 4 + -4) == 1)) {
      if ((*(int *)ppiVar3 == 0) ||
         (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
        pcVar4 = FUN_1096880c0;
      }
      else {
        pcVar4 = (code *)0x1096880e8;
      }
    }
    else if ((*(int *)ppiVar3 == 0) ||
            (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
      pcVar4 = (code *)0x109688110;
    }
    else {
      pcVar4 = (code *)0x109688138;
    }
    pcStack_58 = FUN_109687fc0;
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(piVar2 + 4);
    uStack_98 = *(undefined8 *)(piVar2 + 2);
    uStack_a0 = *(undefined8 *)piVar2;
    uStack_b0 = *(undefined8 *)((long)ppiVar3 + 0x10);
    uStack_b8 = *(undefined8 *)((long)ppiVar3 + 8);
    uStack_c0 = *ppiVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_10968528c(&uStack_80,&uStack_a0,&uStack_c0,pcVar4);
    return;
  }
  **(undefined8 **)(piVar1 + 4) =
       CONCAT44((float)((ulong)**(undefined8 **)(piVar2 + 4) >> 0x20) -
                (float)((ulong)**(undefined8 **)((long)ppiVar3 + 0x10) >> 0x20),
                (float)**(undefined8 **)(piVar2 + 4) -
                (float)**(undefined8 **)((long)ppiVar3 + 0x10));
  return;
}



/* Entry: 109684800; end: 109684817;  */

void FUN_109684800(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  puVar4 = *(uint **)(param_2 + 2);
  uVar9 = *param_2;
  puVar5 = *(uint **)(param_2 + 6);
  uVar8 = param_2[4];
  puVar3 = puVar4;
  uVar1 = uVar9;
  if ((int)uVar9 < (int)uVar8) {
    do {
      uVar9 = uVar8;
      uVar8 = uVar1;
      puVar4 = puVar5;
      puVar5 = puVar3;
      puVar3 = puVar4;
      uVar1 = uVar9;
    } while ((int)uVar9 < (int)uVar8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1092d1c20(param_1,puVar4,(long)puVar4 + ((long)((ulong)uVar9 << 0x20) >> 0x1e),
                (long)(int)uVar9);
  if (0 < (int)uVar8) {
    lVar6 = *param_1;
    lVar7 = (long)(int)(uVar9 - uVar8);
    do {
      uVar2 = *(uint *)(lVar6 + lVar7 * 4);
      uVar1 = *puVar5;
      uVar8 = uVar2 ^ uVar1 ^ 1;
      if (uVar1 != 1 && uVar2 != 1) {
        uVar8 = uVar1 & uVar2;
      }
      *(uint *)(lVar6 + lVar7 * 4) = uVar8;
      lVar7 = lVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar7 < (int)uVar9);
  }
  return;
}



/* Entry: 109684818; end: 1096848e7;  */

void FUN_109684818(long *param_1,uint param_2,uint *param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  
  puVar4 = param_3;
  uVar1 = param_2;
  if ((int)param_2 < (int)param_4) {
    do {
      param_2 = param_4;
      param_4 = uVar1;
      param_3 = param_5;
      param_5 = puVar4;
      puVar4 = param_3;
      uVar1 = param_2;
    } while ((int)param_2 < (int)param_4);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1092d1c20(param_1,param_3,(long)param_3 + ((long)((ulong)param_2 << 0x20) >> 0x1e),
                (long)(int)param_2);
  if (0 < (int)param_4) {
    lVar5 = *param_1;
    lVar6 = (long)(int)(param_2 - param_4);
    do {
      uVar3 = *(uint *)(lVar5 + lVar6 * 4);
      uVar2 = *param_5;
      uVar1 = uVar3 ^ uVar2 ^ 1;
      if (uVar2 != 1 && uVar3 != 1) {
        uVar1 = uVar2 & uVar3;
      }
      *(uint *)(lVar5 + lVar6 * 4) = uVar1;
      lVar6 = lVar6 + 1;
      param_5 = param_5 + 1;
    } while (lVar6 < (int)param_2);
  }
  return;
}



/* Entry: 1096848e8; end: 10968493f;  */

void FUN_1096848e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = param_1[2];
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  uStack_40 = param_2[2];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_60 = param_3[2];
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  FUN_109684a0c(&uStack_30,&uStack_50,&uStack_70);
  return;
}



/* Entry: 109684940; end: 109684a0b;  */

void FUN_109684940(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  ppiVar3 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0x18;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  piVar2 = (int *)0x0;
  FUN_109680a78(param_1,0,&piStack_50,FUN_109684f50);
  piVar1 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar1 != 0) {
    if ((*piVar2 == 0) || (*(int *)(*(long *)(piVar2 + 2) + (long)*piVar2 * 4 + -4) == 1)) {
      if ((*(int *)ppiVar3 == 0) ||
         (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
        pcVar4 = FUN_109684b0c;
      }
      else {
        pcVar4 = (code *)0x109684b34;
      }
    }
    else if ((*(int *)ppiVar3 == 0) ||
            (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
      pcVar4 = (code *)0x109684b5c;
    }
    else {
      pcVar4 = (code *)0x109684b84;
    }
    pcStack_58 = FUN_109684a0c;
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(piVar2 + 4);
    uStack_98 = *(undefined8 *)(piVar2 + 2);
    uStack_a0 = *(undefined8 *)piVar2;
    uStack_b0 = *(undefined8 *)((long)ppiVar3 + 0x10);
    uStack_b8 = *(undefined8 *)((long)ppiVar3 + 8);
    uStack_c0 = *ppiVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_109684bac(&uStack_80,&uStack_a0,&uStack_c0,pcVar4);
    return;
  }
  **(float **)(piVar1 + 4) = **(float **)(piVar2 + 4) + **(float **)((long)ppiVar3 + 0x10);
  return;
}



/* Entry: 109684a0c; end: 109684b0b;  */

void FUN_109684a0c(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*param_1 != 0) {
    if ((*param_2 == 0) || (*(int *)(*(long *)(param_2 + 2) + (long)*param_2 * 4 + -4) == 1)) {
      if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
        pcVar1 = FUN_109684b0c;
      }
      else {
        pcVar1 = (code *)0x109684b34;
      }
    }
    else if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
      pcVar1 = (code *)0x109684b5c;
    }
    else {
      pcVar1 = (code *)0x109684b84;
    }
    uStack_20 = *(undefined8 *)(param_1 + 4);
    uStack_28 = *(undefined8 *)(param_1 + 2);
    uStack_30 = *(undefined8 *)param_1;
    uStack_40 = *(undefined8 *)(param_2 + 4);
    uStack_48 = *(undefined8 *)(param_2 + 2);
    uStack_50 = *(undefined8 *)param_2;
    uStack_60 = *(undefined8 *)(param_3 + 4);
    uStack_68 = *(undefined8 *)(param_3 + 2);
    uStack_70 = *(undefined8 *)param_3;
    FUN_109684bac(&uStack_30,&uStack_50,&uStack_70,pcVar1);
    return;
  }
  **(float **)(param_1 + 4) = **(float **)(param_2 + 4) + **(float **)(param_3 + 4);
  return;
}



/* Entry: 109684b0c; end: 109684bab;  */

void FUN_109684b0c(float *param_1,float *param_2,float *param_3,int param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (0 < param_4) {
    fVar2 = *param_2;
    fVar3 = *param_3;
    lVar1 = (long)param_4;
    do {
      *param_1 = fVar2 + fVar3;
      lVar1 = lVar1 + -1;
      param_1 = param_1 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 109684bac; end: 109684e0b;  */

void FUN_109684bac(int *param_1,long *param_2,long *param_3,code *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_80;
  long lStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  long lStack_40;
  
  lStack_90 = param_2[2];
  lStack_98 = param_2[1];
  lStack_a0 = *param_2;
  FUN_109684e4c(&lStack_68,&lStack_a0);
  lStack_b0 = param_3[2];
  lStack_b8 = param_3[1];
  lStack_c0 = *param_3;
  FUN_109684e4c(&lStack_a0,&lStack_c0);
  FUN_10925b8c4(&lStack_c0,(long)*param_1 + -1);
  if (*param_1 == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(*(long *)(param_1 + 2) + (long)*param_1 * 4 + -4);
  }
  lVar8 = *(long *)(param_1 + 4);
  while( true ) {
    (*param_4)(lVar8,lStack_68,lStack_a0,(long)iVar5);
    if ((int)((ulong)(lStack_b8 - lStack_c0) >> 2) < 1) break;
    lVar7 = *(long *)(param_1 + 2);
    uVar6 = (ulong)(lStack_b8 - lStack_c0) >> 2 & 0x7fffffff;
    while (iVar2 = *(int *)(lStack_c0 + -4 + uVar6 * 4) + 1,
          *(int *)(lVar7 + -4 + uVar6 * 4) <= iVar2) {
      *(undefined4 *)(lStack_c0 + -4 + uVar6 * 4) = 0;
      bVar1 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar1) goto LAB_109684d74;
    }
    *(int *)(lStack_c0 + uVar6 * 4 + -4) = iVar2;
    if ((long)uVar6 < 1) goto LAB_109684d74;
    if (lStack_60 != lStack_58) {
      uVar4 = (((int)((ulong)(lStack_58 - lStack_60) >> 2) - *param_1) + (int)uVar6) - 1;
      uVar3 = uVar4;
      if (0x7fffffff < uVar4) {
        uVar3 = 0xffffffff;
      }
      iVar2 = *(int *)(lStack_48 + (long)(int)uVar3 * 4 + 4);
      lStack_68 = lStack_68 + (long)iVar2 * -4;
      if ((-1 < (int)uVar4) && (*(int *)(lStack_48 + (ulong)uVar3 * 4) != iVar2)) {
        lStack_68 = lStack_68 + (long)*(int *)(lStack_60 + (ulong)uVar3 * 4) * 4;
      }
    }
    if (lStack_98 != lStack_90) {
      uVar4 = (((int)((ulong)(lStack_90 - lStack_98) >> 2) - *param_1) + (int)uVar6) - 1;
      uVar3 = uVar4;
      if (0x7fffffff < uVar4) {
        uVar3 = 0xffffffff;
      }
      iVar2 = *(int *)(lStack_80 + (long)(int)uVar3 * 4 + 4);
      lStack_a0 = lStack_a0 + (long)iVar2 * -4;
      if ((-1 < (int)uVar4) && (*(int *)(lStack_80 + (ulong)uVar3 * 4) != iVar2)) {
        lStack_a0 = lStack_a0 + (long)*(int *)(lStack_98 + (ulong)uVar3 * 4) * 4;
      }
    }
    lVar8 = lVar8 + (long)iVar5 * 4;
  }
  if (lStack_c0 != 0) {
LAB_109684d74:
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  return;
}



/* Entry: 109684e0c; end: 109684e4b;  */

long FUN_109684e0c(long param_1)

{
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



/* Entry: 109684e4c; end: 109684f4f;  */

undefined8 * FUN_109684e4c(undefined8 *param_1,int *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  *param_1 = *(undefined8 *)(param_2 + 4);
  iVar6 = *param_2;
  uVar4 = (ulong)iVar6;
  lVar7 = *(long *)(param_2 + 2);
  FUN_10925b8c4(param_1 + 1,uVar4);
  if (0 < iVar6) {
    lVar2 = param_1[1];
    lVar5 = lVar2 + uVar4 * 4;
    *(undefined4 *)(lVar5 + -4) = 1;
    if (iVar6 != 1) {
      iVar6 = *(int *)(lVar5 + -4);
      do {
        iVar6 = *(int *)(lVar7 + -4 + uVar4 * 4) * iVar6;
        *(int *)(lVar2 + -8 + uVar4 * 4) = iVar6;
        bVar1 = 2 < uVar4;
        uVar4 = uVar4 - 1;
      } while (bVar1);
    }
  }
  lVar7 = *(long *)(param_2 + 2);
  lVar5 = param_1[1];
  iVar6 = (int)*(undefined8 *)param_2;
  FUN_10925b8c4(param_1 + 4,(long)iVar6);
  if (1 < iVar6) {
    lVar3 = param_1[4];
    lVar2 = (ulong)(iVar6 - 2) << 2;
    iVar6 = *(int *)(lVar3 + (ulong)(iVar6 - 2) * 4 + 4);
    do {
      iVar6 = iVar6 + (*(int *)(lVar7 + lVar2) + -1) * *(int *)(lVar5 + lVar2);
      *(int *)(lVar3 + lVar2) = iVar6;
      lVar2 = lVar2 + -4;
    } while (lVar2 != -4);
  }
  return param_1;
}



/* Entry: 109684f50; end: 10968501f;  */

void FUN_109684f50(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  uStack_48 = *(undefined8 *)(lVar3 + 8);
  lStack_50 = *(long *)(lVar3 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_50) >> 2);
  FUN_109684a0c(auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 109685020; end: 1096850eb;  */

void FUN_109685020(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  code *pcVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  code *pcStack_58;
  int *piStack_50;
  int *piStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  ppiVar3 = &piStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x2800000028;
  uStack_30 = 0x28;
  piStack_48 = (int *)0x0;
  uStack_40 = 0;
  piStack_50 = (int *)0x0;
  FUN_109522b28(&piStack_50,&uStack_38,auStack_2c,3);
  piVar2 = (int *)0x0;
  FUN_109680a78(param_1,0,&piStack_50,FUN_109685630);
  piVar1 = piStack_50;
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_50 != (int *)0x0) {
    piStack_48 = piStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar1 != 0) {
    if ((*piVar2 == 0) || (*(int *)(*(long *)(piVar2 + 2) + (long)*piVar2 * 4 + -4) == 1)) {
      if ((*(int *)ppiVar3 == 0) ||
         (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
        pcVar4 = FUN_1096851ec;
      }
      else {
        pcVar4 = (code *)0x109685214;
      }
    }
    else if ((*(int *)ppiVar3 == 0) ||
            (*(int *)(*(long *)((long)ppiVar3 + 8) + (long)*(int *)ppiVar3 * 4 + -4) == 1)) {
      pcVar4 = (code *)0x10968523c;
    }
    else {
      pcVar4 = (code *)0x109685264;
    }
    pcStack_58 = FUN_1096850ec;
    uStack_70 = *(undefined8 *)(piVar1 + 4);
    uStack_78 = *(undefined8 *)(piVar1 + 2);
    uStack_80 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(piVar2 + 4);
    uStack_98 = *(undefined8 *)(piVar2 + 2);
    uStack_a0 = *(undefined8 *)piVar2;
    uStack_b0 = *(undefined8 *)((long)ppiVar3 + 0x10);
    uStack_b8 = *(undefined8 *)((long)ppiVar3 + 8);
    uStack_c0 = *ppiVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_10968528c(&uStack_80,&uStack_a0,&uStack_c0,pcVar4);
    return;
  }
  **(undefined8 **)(piVar1 + 4) =
       CONCAT44((float)((ulong)**(undefined8 **)(piVar2 + 4) >> 0x20) +
                (float)((ulong)**(undefined8 **)((long)ppiVar3 + 0x10) >> 0x20),
                (float)**(undefined8 **)(piVar2 + 4) +
                (float)**(undefined8 **)((long)ppiVar3 + 0x10));
  return;
}



/* Entry: 1096850ec; end: 1096851eb;  */

void FUN_1096850ec(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*param_1 != 0) {
    if ((*param_2 == 0) || (*(int *)(*(long *)(param_2 + 2) + (long)*param_2 * 4 + -4) == 1)) {
      if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
        pcVar1 = FUN_1096851ec;
      }
      else {
        pcVar1 = (code *)0x109685214;
      }
    }
    else if ((*param_3 == 0) || (*(int *)(*(long *)(param_3 + 2) + (long)*param_3 * 4 + -4) == 1)) {
      pcVar1 = (code *)0x10968523c;
    }
    else {
      pcVar1 = (code *)0x109685264;
    }
    uStack_20 = *(undefined8 *)(param_1 + 4);
    uStack_28 = *(undefined8 *)(param_1 + 2);
    uStack_30 = *(undefined8 *)param_1;
    uStack_40 = *(undefined8 *)(param_2 + 4);
    uStack_48 = *(undefined8 *)(param_2 + 2);
    uStack_50 = *(undefined8 *)param_2;
    uStack_60 = *(undefined8 *)(param_3 + 4);
    uStack_68 = *(undefined8 *)(param_3 + 2);
    uStack_70 = *(undefined8 *)param_3;
    FUN_10968528c(&uStack_30,&uStack_50,&uStack_70,pcVar1);
    return;
  }
  **(undefined8 **)(param_1 + 4) =
       CONCAT44((float)((ulong)**(undefined8 **)(param_2 + 4) >> 0x20) +
                (float)((ulong)**(undefined8 **)(param_3 + 4) >> 0x20),
                (float)**(undefined8 **)(param_2 + 4) + (float)**(undefined8 **)(param_3 + 4));
  return;
}



/* Entry: 1096851ec; end: 10968528b;  */

void FUN_1096851ec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (0 < param_4) {
    uVar2 = *param_2;
    uVar3 = *param_3;
    lVar1 = (long)param_4;
    do {
      *param_1 = CONCAT44((float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar3 >> 0x20),
                          (float)uVar2 + (float)uVar3);
      lVar1 = lVar1 + -1;
      param_1 = param_1 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 10968528c; end: 1096854eb;  */

void FUN_10968528c(int *param_1,long *param_2,long *param_3,code *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_80;
  long lStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  long lStack_40;
  
  lStack_90 = param_2[2];
  lStack_98 = param_2[1];
  lStack_a0 = *param_2;
  FUN_10968552c(&lStack_68,&lStack_a0);
  lStack_b0 = param_3[2];
  lStack_b8 = param_3[1];
  lStack_c0 = *param_3;
  FUN_10968552c(&lStack_a0,&lStack_c0);
  FUN_10925b8c4(&lStack_c0,(long)*param_1 + -1);
  if (*param_1 == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(*(long *)(param_1 + 2) + (long)*param_1 * 4 + -4);
  }
  lVar8 = *(long *)(param_1 + 4);
  while( true ) {
    (*param_4)(lVar8,lStack_68,lStack_a0,(long)iVar5);
    if ((int)((ulong)(lStack_b8 - lStack_c0) >> 2) < 1) break;
    lVar7 = *(long *)(param_1 + 2);
    uVar6 = (ulong)(lStack_b8 - lStack_c0) >> 2 & 0x7fffffff;
    while (iVar2 = *(int *)(lStack_c0 + -4 + uVar6 * 4) + 1,
          *(int *)(lVar7 + -4 + uVar6 * 4) <= iVar2) {
      *(undefined4 *)(lStack_c0 + -4 + uVar6 * 4) = 0;
      bVar1 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar1) goto LAB_109685454;
    }
    *(int *)(lStack_c0 + uVar6 * 4 + -4) = iVar2;
    if ((long)uVar6 < 1) goto LAB_109685454;
    if (lStack_60 != lStack_58) {
      uVar4 = (((int)((ulong)(lStack_58 - lStack_60) >> 2) - *param_1) + (int)uVar6) - 1;
      uVar3 = uVar4;
      if (0x7fffffff < uVar4) {
        uVar3 = 0xffffffff;
      }
      iVar2 = *(int *)(lStack_48 + (long)(int)uVar3 * 4 + 4);
      lStack_68 = lStack_68 + (long)iVar2 * -8;
      if ((-1 < (int)uVar4) && (*(int *)(lStack_48 + (ulong)uVar3 * 4) != iVar2)) {
        lStack_68 = lStack_68 + (long)*(int *)(lStack_60 + (ulong)uVar3 * 4) * 8;
      }
    }
    if (lStack_98 != lStack_90) {
      uVar4 = (((int)((ulong)(lStack_90 - lStack_98) >> 2) - *param_1) + (int)uVar6) - 1;
      uVar3 = uVar4;
      if (0x7fffffff < uVar4) {
        uVar3 = 0xffffffff;
      }
      iVar2 = *(int *)(lStack_80 + (long)(int)uVar3 * 4 + 4);
      lStack_a0 = lStack_a0 + (long)iVar2 * -8;
      if ((-1 < (int)uVar4) && (*(int *)(lStack_80 + (ulong)uVar3 * 4) != iVar2)) {
        lStack_a0 = lStack_a0 + (long)*(int *)(lStack_98 + (ulong)uVar3 * 4) * 8;
      }
    }
    lVar8 = lVar8 + (long)iVar5 * 8;
  }
  if (lStack_c0 != 0) {
LAB_109685454:
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  return;
}



/* Entry: 1096854ec; end: 10968552b;  */

long FUN_1096854ec(long param_1)

{
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



/* Entry: 10968552c; end: 10968562f;  */

undefined8 * FUN_10968552c(undefined8 *param_1,int *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  *param_1 = *(undefined8 *)(param_2 + 4);
  iVar6 = *param_2;
  uVar4 = (ulong)iVar6;
  lVar7 = *(long *)(param_2 + 2);
  FUN_10925b8c4(param_1 + 1,uVar4);
  if (0 < iVar6) {
    lVar2 = param_1[1];
    lVar5 = lVar2 + uVar4 * 4;
    *(undefined4 *)(lVar5 + -4) = 1;
    if (iVar6 != 1) {
      iVar6 = *(int *)(lVar5 + -4);
      do {
        iVar6 = *(int *)(lVar7 + -4 + uVar4 * 4) * iVar6;
        *(int *)(lVar2 + -8 + uVar4 * 4) = iVar6;
        bVar1 = 2 < uVar4;
        uVar4 = uVar4 - 1;
      } while (bVar1);
    }
  }
  lVar7 = *(long *)(param_2 + 2);
  lVar5 = param_1[1];
  iVar6 = (int)*(undefined8 *)param_2;
  FUN_10925b8c4(param_1 + 4,(long)iVar6);
  if (1 < iVar6) {
    lVar3 = param_1[4];
    lVar2 = (ulong)(iVar6 - 2) << 2;
    iVar6 = *(int *)(lVar3 + (ulong)(iVar6 - 2) * 4 + 4);
    do {
      iVar6 = iVar6 + (*(int *)(lVar7 + lVar2) + -1) * *(int *)(lVar5 + lVar2);
      *(int *)(lVar3 + lVar2) = iVar6;
      lVar2 = lVar2 + -4;
    } while (lVar2 != -4);
  }
  return param_1;
}



/* Entry: 109685630; end: 1096856a7;  */

void FUN_109685630(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  uStack_48 = *(undefined8 *)(lVar3 + 8);
  lStack_50 = *(long *)(lVar3 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_50) >> 2);
  FUN_1096850ec(auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 1096856a8; end: 1096856f3;  */

void FUN_1096856a8(void)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdaab5,FUN_1096856f4);
  FUN_10968573c(&UNK_10dfdaab5,FUN_109685714);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x2800000028;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = &lStack_48;
  piVar2 = (int *)0x0;
  FUN_109680a78(&UNK_10dfdaab5,0,plVar3,0x1096859e8);
  lVar7 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar7);
  if (*piVar2 == 0) {
    uVar4 = 1;
  }
  else {
    lVar7 = (long)*piVar2 << 2;
    uVar4 = 1;
    piVar5 = *(int **)(piVar2 + 2);
    do {
      uVar1 = *piVar5 * (int)uVar4;
      uVar4 = (ulong)uVar1;
      lVar7 = lVar7 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar7 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar6 = *(undefined8 **)(piVar2 + 4);
  puVar8 = (undefined8 *)plVar3[2];
  do {
    *puVar6 = *puVar8;
    uVar4 = uVar4 - 1;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 1096856f4; end: 109685713;  */

void FUN_1096856f4(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109685714; end: 10968573b;  */

void FUN_109685714(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_109685800(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10968573c; end: 1096857ff;  */

void FUN_10968573c(undefined8 param_1)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = &lStack_48;
  piVar2 = (int *)0x0;
  FUN_109680a78(param_1,0,plVar3,0x109685850);
  lVar7 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar7);
  if (*piVar2 == 0) {
    uVar4 = 1;
  }
  else {
    lVar7 = (long)*piVar2 << 2;
    uVar4 = 1;
    piVar5 = *(int **)(piVar2 + 2);
    do {
      uVar1 = *piVar5 * (int)uVar4;
      uVar4 = (ulong)uVar1;
      lVar7 = lVar7 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar7 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar6 = *(undefined4 **)(piVar2 + 4);
  puVar8 = (undefined4 *)plVar3[2];
  do {
    *puVar6 = *puVar8;
    uVar4 = uVar4 - 1;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 109685800; end: 1096858ab;  */

void FUN_109685800(undefined8 param_1,int *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  
  if (*param_2 == 0) {
    uVar2 = 1;
  }
  else {
    lVar5 = (long)*param_2 << 2;
    uVar2 = 1;
    piVar3 = *(int **)(param_2 + 2);
    do {
      uVar1 = *piVar3 * (int)uVar2;
      uVar2 = (ulong)uVar1;
      lVar5 = lVar5 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar5 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar4 = *(undefined4 **)(param_2 + 4);
  puVar6 = *(undefined4 **)(param_3 + 0x10);
  do {
    *puVar4 = *puVar6;
    uVar2 = uVar2 - 1;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar2 != 0);
  return;
}



/* Entry: 1096858ac; end: 1096858d3;  */

void FUN_1096858ac(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_109685998(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1096858d4; end: 109685997;  */

void FUN_1096858d4(undefined8 param_1)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x2800000028;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = &lStack_48;
  piVar2 = (int *)0x0;
  FUN_109680a78(param_1,0,plVar3,0x1096859e8);
  lVar7 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar7);
  if (*piVar2 == 0) {
    uVar4 = 1;
  }
  else {
    lVar7 = (long)*piVar2 << 2;
    uVar4 = 1;
    piVar5 = *(int **)(piVar2 + 2);
    do {
      uVar1 = *piVar5 * (int)uVar4;
      uVar4 = (ulong)uVar1;
      lVar7 = lVar7 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar7 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar6 = *(undefined8 **)(piVar2 + 4);
  puVar8 = (undefined8 *)plVar3[2];
  do {
    *puVar6 = *puVar8;
    uVar4 = uVar4 - 1;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 109685998; end: 109685a43;  */

void FUN_109685998(undefined8 param_1,int *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (*param_2 == 0) {
    uVar2 = 1;
  }
  else {
    lVar5 = (long)*param_2 << 2;
    uVar2 = 1;
    piVar3 = *(int **)(param_2 + 2);
    do {
      uVar1 = *piVar3 * (int)uVar2;
      uVar2 = (ulong)uVar1;
      lVar5 = lVar5 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar5 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 4);
  puVar6 = *(undefined8 **)(param_3 + 0x10);
  do {
    *puVar4 = *puVar6;
    uVar2 = uVar2 - 1;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar2 != 0);
  return;
}



/* Entry: 109685a44; end: 109685a8f;  */

void FUN_109685a44(void)

{
  uint uVar1;
  int *piVar2;
  undefined8 *puVar3;
  int **ppiVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdaabc,FUN_109685a90);
  FUN_109685b0c(&UNK_10dfdaabc,0x109685ab0);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x2800000028;
  piStack_40 = (int *)0x0;
  uStack_38 = 0;
  piStack_48 = (int *)0x0;
  FUN_109522b28(&piStack_48,&uStack_30,&lStack_28,2);
  ppiVar4 = &piStack_48;
  puVar3 = (undefined8 *)0x0;
  FUN_109680a78(&UNK_10dfdaabc,0,ppiVar4,FUN_109685d60);
  piVar2 = piStack_48;
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar2 == 0) {
    uVar5 = 1;
  }
  else {
    lVar8 = (long)*piVar2 << 2;
    uVar5 = 1;
    piVar6 = *(int **)(piVar2 + 2);
    do {
      uVar1 = *piVar6 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar8 = lVar8 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar8 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar7 = *(undefined8 **)(piVar2 + 4);
  do {
    *puVar7 = CONCAT44((float)((ulong)*puVar3 >> 0x20) + (float)((ulong)*ppiVar4 >> 0x20),
                       (float)*puVar3 + SUB84(*ppiVar4,0));
    uVar5 = uVar5 - 1;
    puVar3 = puVar3 + 1;
    ppiVar4 = ppiVar4 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109685a90; end: 109685b0b;  */

void FUN_109685a90(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109685b0c; end: 109685bcf;  */

void FUN_109685b0c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  int *piVar7;
  float *pfVar8;
  long lVar9;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_48,FUN_109685bd0);
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  lVar2 = *plVar3;
  pfVar4 = *(float **)(plVar3[1] + 8);
  pfVar5 = *(float **)(lVar2 + 8);
  uVar6 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  pfVar8 = pfVar5;
  if ((uVar6 & 0x3fffffffc) == 0) {
    uVar6 = 1;
  }
  else {
    lVar9 = ((long)(uVar6 * 0x40000000) >> 0x20) << 2;
    uVar6 = 1;
    piVar7 = *(int **)(lVar2 + 0x10);
    do {
      uVar1 = *piVar7 * (int)uVar6;
      uVar6 = (ulong)uVar1;
      lVar9 = lVar9 + -4;
      piVar7 = piVar7 + 1;
    } while (lVar9 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  do {
    *pfVar8 = *pfVar5 + *pfVar4;
    uVar6 = uVar6 - 1;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar8 = pfVar8 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 109685bd0; end: 109685c47;  */

void FUN_109685bd0(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  int *piVar6;
  float *pfVar7;
  long lVar8;
  
  lVar1 = *param_2;
  pfVar3 = *(float **)(param_2[1] + 8);
  pfVar4 = *(float **)(lVar1 + 8);
  uVar5 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  pfVar7 = pfVar4;
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar8 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar6 = *(int **)(lVar1 + 0x10);
    do {
      uVar2 = *piVar6 * (int)uVar5;
      uVar5 = (ulong)uVar2;
      lVar8 = lVar8 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar8 != 0);
    if ((int)uVar2 < 1) {
      return;
    }
  }
  do {
    *pfVar7 = *pfVar4 + *pfVar3;
    uVar5 = uVar5 - 1;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109685c48; end: 109685d0b;  */

void FUN_109685c48(undefined8 param_1)

{
  uint uVar1;
  int *piVar2;
  undefined8 *puVar3;
  int **ppiVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x2800000028;
  piStack_40 = (int *)0x0;
  uStack_38 = 0;
  piStack_48 = (int *)0x0;
  FUN_109522b28(&piStack_48,&uStack_30,&lStack_28,2);
  ppiVar4 = &piStack_48;
  puVar3 = (undefined8 *)0x0;
  FUN_109680a78(param_1,0,ppiVar4,FUN_109685d60);
  piVar2 = piStack_48;
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar2 == 0) {
    uVar5 = 1;
  }
  else {
    lVar8 = (long)*piVar2 << 2;
    uVar5 = 1;
    piVar6 = *(int **)(piVar2 + 2);
    do {
      uVar1 = *piVar6 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar8 = lVar8 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar8 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar7 = *(undefined8 **)(piVar2 + 4);
  do {
    *puVar7 = CONCAT44((float)((ulong)*puVar3 >> 0x20) + (float)((ulong)*ppiVar4 >> 0x20),
                       (float)*puVar3 + SUB84(*ppiVar4,0));
    uVar5 = uVar5 - 1;
    puVar3 = puVar3 + 1;
    ppiVar4 = ppiVar4 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109685d0c; end: 109685d5f;  */

void FUN_109685d0c(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (*param_1 == 0) {
    uVar2 = 1;
  }
  else {
    lVar5 = (long)*param_1 << 2;
    uVar2 = 1;
    piVar3 = *(int **)(param_1 + 2);
    do {
      uVar1 = *piVar3 * (int)uVar2;
      uVar2 = (ulong)uVar1;
      lVar5 = lVar5 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar5 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 4);
  do {
    *puVar4 = CONCAT44((float)((ulong)*param_2 >> 0x20) + (float)((ulong)*param_3 >> 0x20),
                       (float)*param_2 + (float)*param_3);
    uVar2 = uVar2 - 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar2 != 0);
  return;
}



/* Entry: 109685d60; end: 109685d9f;  */

void FUN_109685d60(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  FUN_109685d0c(auStack_28,uStack_18,*(undefined8 *)(param_2[1] + 8));
  return;
}



/* Entry: 109685da0; end: 109685deb;  */

void FUN_109685da0(void)

{
  uint uVar1;
  int *piVar2;
  undefined8 *puVar3;
  int **ppiVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdaac7,FUN_109685dec);
  FUN_109685e68(&UNK_10dfdaac7,0x109685e0c);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x2800000028;
  piStack_40 = (int *)0x0;
  uStack_38 = 0;
  piStack_48 = (int *)0x0;
  FUN_109522b28(&piStack_48,&uStack_30,&lStack_28,2);
  ppiVar4 = &piStack_48;
  puVar3 = (undefined8 *)0x0;
  FUN_109680a78(&UNK_10dfdaac7,0,ppiVar4,FUN_1096860bc);
  piVar2 = piStack_48;
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*piVar2 == 0) {
    uVar5 = 1;
  }
  else {
    lVar8 = (long)*piVar2 << 2;
    uVar5 = 1;
    piVar6 = *(int **)(piVar2 + 2);
    do {
      uVar1 = *piVar6 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar8 = lVar8 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar8 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  puVar7 = *(undefined8 **)(piVar2 + 4);
  do {
    *puVar7 = CONCAT44((float)((ulong)*puVar3 >> 0x20) - (float)((ulong)*ppiVar4 >> 0x20),
                       (float)*puVar3 - SUB84(*ppiVar4,0));
    uVar5 = uVar5 - 1;
    puVar3 = puVar3 + 1;
    ppiVar4 = ppiVar4 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109685dec; end: 109685e67;  */

void FUN_109685dec(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109685e68; end: 109685f2b;  */

void FUN_109685e68(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  int *piVar7;
  float *pfVar8;
  long lVar9;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_48,FUN_109685f2c);
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  lVar2 = *plVar3;
  pfVar4 = *(float **)(plVar3[1] + 8);
  pfVar5 = *(float **)(lVar2 + 8);
  uVar6 = *(long *)(lVar2 + 0x18) - (long)*(int **)(lVar2 + 0x10);
  pfVar8 = pfVar5;
  if ((uVar6 & 0x3fffffffc) == 0) {
    uVar6 = 1;
  }
  else {
    lVar9 = ((long)(uVar6 * 0x40000000) >> 0x20) << 2;
    uVar6 = 1;
    piVar7 = *(int **)(lVar2 + 0x10);
    do {
      uVar1 = *piVar7 * (int)uVar6;
      uVar6 = (ulong)uVar1;
      lVar9 = lVar9 + -4;
      piVar7 = piVar7 + 1;
    } while (lVar9 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  do {
    *pfVar8 = *pfVar5 - *pfVar4;
    uVar6 = uVar6 - 1;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar8 = pfVar8 + 1;
  } while (uVar6 != 0);
  return;
}



/* Entry: 109685f2c; end: 109685fa3;  */

void FUN_109685f2c(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  int *piVar6;
  float *pfVar7;
  long lVar8;
  
  lVar1 = *param_2;
  pfVar3 = *(float **)(param_2[1] + 8);
  pfVar4 = *(float **)(lVar1 + 8);
  uVar5 = *(long *)(lVar1 + 0x18) - (long)*(int **)(lVar1 + 0x10);
  pfVar7 = pfVar4;
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar8 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar6 = *(int **)(lVar1 + 0x10);
    do {
      uVar2 = *piVar6 * (int)uVar5;
      uVar5 = (ulong)uVar2;
      lVar8 = lVar8 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar8 != 0);
    if ((int)uVar2 < 1) {
      return;
    }
  }
  do {
    *pfVar7 = *pfVar4 - *pfVar3;
    uVar5 = uVar5 - 1;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  } while (uVar5 != 0);
  return;
}



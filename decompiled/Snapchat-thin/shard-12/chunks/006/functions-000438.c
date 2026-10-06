/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1094a3dac; end: 1094a3e5b;  */

undefined8 * FUN_1094a3dac(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  puStack_28 = param_1 + 6;
  FUN_109378cec(&puStack_28);
  puStack_28 = param_1 + 3;
  FUN_109378cec(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1094a3e5c; end: 1094a3f17;  */

uint FUN_1094a3e5c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = (param_2 - param_1 >> 3) * 0x2e8ba2e8ba2e8ba3;
  lVar3 = param_4 - param_3 >> 3;
  lVar5 = lVar3 * 0x2e8ba2e8ba2e8ba3;
  lVar6 = lVar5;
  if (lVar4 <= lVar5) {
    lVar6 = lVar4;
  }
  if (0 < lVar6) {
    do {
      lVar1 = param_1;
      FUN_1094a3f18(param_1,param_1 + 0x18,param_3,param_3 + 0x18);
      if (((uint)lVar1 >> 7 & 1) != 0) {
        return 0xff;
      }
      lVar1 = param_3;
      FUN_1094a3f18(param_3,param_3 + 0x18,param_1,param_1 + 0x18);
      if (((uint)lVar1 >> 7 & 1) != 0) {
        return 1;
      }
      param_1 = param_1 + 0x58;
      param_3 = param_3 + 0x58;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  uVar2 = (uint)(lVar4 + lVar3 * -0x2e8ba2e8ba2e8ba3 != 0 && lVar5 <= lVar4);
  if (lVar4 < lVar5) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Entry: 1094a3f18; end: 1094a3fef;  */

uint FUN_1094a3f18(ulong param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  func_0x000107c2abd4(param_1,param_3);
  if ((param_1 & 0xff) != 0) {
    return -((uint)param_1 >> 7 & 1) | 1;
  }
  uVar3 = *param_2;
  uVar4 = *param_4;
  if (uVar3 == uVar4) {
    uVar3 = param_4[1];
    uVar4 = param_2[1];
    if (uVar4 == uVar3) {
      uVar3 = param_2[2];
      uVar1 = param_2[3];
      uVar4 = param_4[2];
      uVar2 = param_4[3];
      bVar6 = uVar1 != uVar2 && uVar1 < uVar2;
      if (uVar3 != uVar4) {
        bVar6 = uVar3 < uVar4;
      }
      if (!bVar6) {
        uVar5 = 0;
        if (uVar1 != uVar2) {
          uVar5 = (uint)(uVar2 < uVar1);
        }
        if (uVar3 != uVar4) {
          return (uint)(uVar4 < uVar3);
        }
        return uVar5;
      }
    }
    else if (uVar3 <= uVar4) {
      bVar6 = uVar4 <= uVar3;
      goto LAB_1094a3fd8;
    }
  }
  else if (uVar4 <= uVar3) {
    bVar6 = uVar3 <= uVar4;
LAB_1094a3fd8:
    return (uint)!bVar6;
  }
  return 0xff;
}



/* Entry: 1094a3ff0; end: 1094a4107;  */

undefined8 * FUN_1094a3ff0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_109379218(param_1 + 3,*param_3,param_3[1],(param_3[1] - *param_3 >> 3) * 0x2e8ba2e8ba2e8ba3);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_109379218(param_1 + 6,param_3[3],param_3[4],
                (param_3[4] - param_3[3] >> 3) * 0x2e8ba2e8ba2e8ba3);
  if (*(char *)((long)param_3 + 0x47) < '\0') {
    func_0x000107c3192c(param_1 + 9,param_3[6],param_3[7]);
  }
  else {
    lVar4 = param_3[7];
    lVar2 = param_3[6];
    param_1[0xb] = param_3[8];
    param_1[10] = lVar4;
    param_1[9] = lVar2;
  }
  return param_1;
}



/* Entry: 1094a4108; end: 1094a42b3;  */

void FUN_1094a4108(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1094a4108(*param_1);
    FUN_1094a4108(param_1[1]);
    func_0x0001094a4148(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1094a42b4; end: 1094a43c3;  */

undefined8 * FUN_1094a42b4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  
  plVar3 = (long *)param_1[1];
  plVar5 = param_1 + 1;
  while (plVar6 = plVar5, plVar3 != (long *)0x0) {
    while (plVar6 = plVar3, uVar1 = param_2, FUN_1094a3be4(param_2,plVar6 + 4), (int)uVar1 == 0) {
      plVar3 = plVar6 + 4;
      FUN_1094a3be4(plVar3,param_2);
      if ((int)plVar3 == 0) {
        if ((undefined8 *)*plVar5 != (undefined8 *)0x0) {
          return (undefined8 *)*plVar5;
        }
        goto LAB_1094a432c;
      }
      plVar5 = plVar6 + 1;
      plVar3 = (long *)*plVar5;
      if ((long *)*plVar5 == (long *)0x0) goto LAB_1094a432c;
    }
    plVar5 = plVar6;
    plVar3 = (long *)*plVar6;
  }
LAB_1094a432c:
  puVar2 = (undefined8 *)0x108;
  __Znwm();
  FUN_1094a35d8(puVar2 + 4,param_3);
  puVar2[0x20] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = plVar6;
  *plVar5 = (long)puVar2;
  puVar4 = puVar2;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar4 = (undefined8 *)*plVar5;
  }
  func_0x000107c27d40(param_1[1],puVar4);
  param_1[2] = param_1[2] + 1;
  return puVar2;
}



/* Entry: 1094a43c4; end: 1094a440b;  */

void FUN_1094a43c4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001094a4148(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094a440c; end: 1094a447f;  */

void FUN_1094a440c(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x40);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else if (plVar1 == (long *)(param_2 + 0x28)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x28);
    *(long *)(param_1 + 0x40) = param_1 + 0x28;
  }
  else {
    *(long **)(param_1 + 0x40) = plVar1;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}



/* Entry: 1094a4480; end: 1094a44a7;  */

long * FUN_1094a4480(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  FUN_1094a37ec(param_1 + 0x48);
  plVar1 = (long *)(param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == plVar1) {
    lVar3 = 0x18;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x20;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 1094a44a8; end: 1094a44b7;  */

void FUN_1094a44a8(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uStack_38;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  lVar3 = *(long *)(lVar4 + 0x48);
  if (lVar3 == 0) {
    FUN_1094362d4(3);
LAB_1094a3324:
    FUN_1094362d4(3);
    goto LAB_1094a332c;
  }
  if ((*(byte *)(lVar3 + 0x88) & 1) == 0) {
    uStack_38 = 0;
    lVar3 = *(long *)(lVar3 + 0x10);
    __ZNSt13exception_ptrD1Ev(&uStack_38);
    if (lVar3 != 0) goto LAB_1094a3308;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    plVar2 = *(long **)(lVar4 + 0x40);
    (**(code **)(*plVar2 + 0x28))(plVar2,&uStack_38);
    lVar3 = *(long *)(lVar4 + 0x48);
    if (lVar3 == 0) goto LAB_1094a3324;
    __ZNSt3__15mutex4lockEv(lVar3 + 0x18);
    if ((*(byte *)(lVar3 + 0x88) & 1) == 0) {
      uStack_38 = 0;
      lVar4 = *(long *)(lVar3 + 0x10);
      __ZNSt13exception_ptrD1Ev(&uStack_38);
      if (lVar4 == 0) {
        *(char *)(lVar3 + 0x8c) = (char)plVar2;
        *(uint *)(lVar3 + 0x88) = *(uint *)(lVar3 + 0x88) | 5;
        __ZNSt3__118condition_variable10notify_allEv(lVar3 + 0x58);
        __ZNSt3__15mutex6unlockEv(lVar3 + 0x18);
        return;
      }
    }
  }
  else {
LAB_1094a3308:
    FUN_1094362d4(2);
  }
  FUN_1094362d4(2);
LAB_1094a332c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094a3330);
  (*pcVar1)();
}



/* Entry: 1094a44b8; end: 1094a452f;  */

undefined8 * FUN_1094a44b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110af6de0;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1094a35d8(param_1 + 3,param_2 + 2);
  param_1[0x1f] = param_2[0x1e];
  (**(code **)(param_2[0x1f] + 0x10))(param_1 + 0x20,param_2 + 0x1f);
  return param_1;
}



/* Entry: 1094a4530; end: 1094a458f;  */

undefined8 * FUN_1094a4530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6de0;
  FUN_1094a338c(param_1 + 1);
  return param_1;
}



/* Entry: 1094a4590; end: 1094a45b3;  */

void FUN_1094a4590(long param_1,undefined8 param_2)

{
  FUN_1094a44b8(param_2,param_1 + 8);
  return;
}



/* Entry: 1094a45b4; end: 1094a45bb;  */

/* WARNING: Removing unreachable block (ram,0x0001094a33bc) */

long FUN_1094a45b4(long param_1)

{
  long lStack_28;
  
  (*(code *)**(undefined8 **)(param_1 + 0x100))((undefined8 *)(param_1 + 0x100));
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  FUN_1094a3794(param_1 + 0x68);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  lStack_28 = param_1 + 0x30;
  FUN_109378cec(&lStack_28);
  lStack_28 = param_1 + 0x18;
  FUN_109378cec(&lStack_28);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 8;
}



/* Entry: 1094a45bc; end: 1094a45e3;  */

void FUN_1094a45bc(long param_1)

{
  FUN_1094a338c(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1094a45e4; end: 1094a4c63;  */

undefined8 FUN_1094a45e4(long *****param_1,long ******param_2)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long ****pppplVar6;
  long *****ppppplVar7;
  long *plVar8;
  long *****ppppplVar9;
  long ******pppppplVar10;
  long ****pppplVar11;
  long lVar12;
  undefined8 uVar13;
  long ******unaff_x22;
  long ******pppppplVar14;
  long ******pppppplVar15;
  long ******pppppplVar16;
  long *****ppppplStack_118;
  long *plStack_110;
  char cStack_101;
  long *****ppppplStack_100;
  long *plStack_f8;
  long ****pppplStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 uStack_d0;
  long *****ppppplStack_c0;
  long ****pppplStack_b8;
  long ****pppplStack_b0;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  byte bStack_98;
  undefined2 uStack_90;
  undefined1 uStack_8e;
  long ****pppplStack_80;
  long *****ppppplStack_78;
  long ****pppplStack_70;
  byte bStack_68;
  undefined6 uStack_67;
  undefined1 uStack_61;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_c0 = (long *****)0x0;
  pppplStack_b8 = (long ****)0x0;
  ppppplVar7 = (long *****)param_1[2];
  if ((ppppplVar7 == (long *****)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), pppplStack_b8 = (long ****)ppppplVar7,
     ppppplVar7 == (long *****)0x0)) {
    uStack_d0 = 0;
    uStack_e8 = 0;
    pppplStack_f0 = (long ****)0x0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    goto LAB_1094a46d4;
  }
  pppppplVar15 = (long ******)param_1[1];
  uStack_d0 = 0;
  uStack_e8 = 0;
  pppplStack_f0 = (long ****)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  ppppplStack_c0 = (long *****)pppppplVar15;
  if (pppppplVar15 == (long ******)0x0) goto LAB_1094a46d4;
  bVar2 = *(byte *)(param_1 + 0x1e) & 2;
  if ((*(byte *)(param_1 + 0x1e) & 1) != 0) {
    bVar2 = 1;
  }
  (*(code *)(*param_1[0xd])[4])(&plStack_f8);
  func_0x000109d0a228(&pppplStack_b0,&plStack_f8);
  plVar8 = (long *)0x120;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110af4c20;
  unaff_x22 = (long ******)(plVar8 + 3);
  if (bStack_98 == 2) {
    ppppplStack_78 = ppppplStack_a8;
    pppplStack_80 = pppplStack_b0;
    pppplStack_b0 = (long ****)0x0;
    ppppplStack_a8 = (long *****)0x0;
  }
  else if (bStack_98 == 1) {
    ppppplStack_78 = ppppplStack_a8;
    pppplStack_80 = pppplStack_b0;
    pppplStack_70 = pppplStack_a0;
    ppppplStack_a8 = (long *****)0x0;
    pppplStack_a0 = (long ****)0x0;
    pppplStack_b0 = (long ****)0x0;
  }
  bStack_68 = bStack_98;
  uStack_60 = uStack_90;
  uStack_5e = uStack_8e;
  func_0x000109d03828(unaff_x22,param_1 + 3,1,&pppplStack_80,param_1 + 0xf,
                      *(undefined4 *)(param_1 + 0xc),bVar2);
  (*(code *)(&PTR_FUN_110af4bf0)[bStack_68])(&pppplStack_80);
  ppppplStack_118 = (long *****)unaff_x22;
  plStack_110 = plVar8;
  (*(code *)(&PTR_FUN_110af4bf0)[bStack_98])(&pppplStack_b0);
  plVar8 = plStack_f8;
  plStack_f8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  param_2 = &ppppplStack_118;
  func_0x000109d03fe8(&pppplStack_b0,*pppppplVar15[9],param_2,0);
  FUN_10938ab98(&pppplStack_80,&pppplStack_b0);
  pppplVar6 = pppplStack_80;
  pppplVar11 = pppplStack_f0;
  pppplStack_80 = (long ****)0x0;
  pppplStack_f0 = pppplVar6;
  if ((long *****)pppplVar11 != (long *****)0x0) {
    func_0x000109cda590();
    __ZdlPv();
  }
  pppppplVar15 = (long ******)((ulong)&pppplStack_f0 | 8);
  if ((long)uStack_d8 < 0) {
    __ZdlPv(uStack_e8);
  }
  pppplVar11 = pppplStack_80;
  pppppplVar15[1] = (long *****)pppplStack_70;
  *pppppplVar15 = ppppplStack_78;
  pppppplVar15[2] = (long *****)CONCAT17(uStack_61,CONCAT61(uStack_67,bStack_68));
  uStack_61 = 0;
  ppppplStack_78 = (long *****)((ulong)ppppplStack_78 & 0xffffffffffffff00);
  uStack_d0 = (undefined1)uStack_60;
  pppplStack_80 = (long ****)0x0;
  if (pppplVar11 != (long ****)0x0) {
    func_0x000109cda590();
    __ZdlPv();
  }
  if ((long *****)pppplStack_b0 != (long *****)0x0) {
    ppppplVar7 = (long *****)(pppplStack_b0 + 1);
    do {
      pppplVar11 = *ppppplVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
      if (bVar5) {
        *ppppplVar7 = (long ****)((long)pppplVar11 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (pppplVar11 == (long ****)0x0) {
      (*(code *)(*pppplStack_b0)[2])();
    }
  }
  ppppplVar7 = ppppplStack_c0;
  if ((long *****)pppplStack_f0 == (long *****)0x0) {
    uVar3 = uStack_e0;
    if (-1 < (long)uStack_d8) {
      uVar3 = uStack_d8 >> 0x38;
    }
    if (uVar3 == 0) {
      uVar13 = 2;
      goto LAB_1094a4a00;
    }
  }
  __ZNSt3__15mutex4lockEv(ppppplStack_c0 + 10);
  pppppplVar14 = (long ******)(ppppplVar7 + 6);
  pppppplVar10 = (long ******)*pppppplVar14;
  pppppplVar16 = pppppplVar14;
  while (pppppplVar10 != (long ******)0x0) {
    while( true ) {
      pppppplVar16 = pppppplVar10;
      ppppplVar9 = param_1 + 3;
      FUN_1094a3be4(ppppplVar9,pppppplVar16 + 4);
      if ((int)ppppplVar9 == 0) break;
      pppppplVar10 = (long ******)*pppppplVar16;
      pppppplVar14 = pppppplVar16;
      if ((long ******)*pppppplVar16 == (long ******)0x0) goto LAB_1094a4980;
    }
    pppppplVar10 = pppppplVar16 + 4;
    FUN_1094a3be4(pppppplVar10,param_1 + 3);
    if ((int)pppppplVar10 == 0) {
      ppppplVar9 = *pppppplVar14;
      if (ppppplVar9 != (long *****)0x0) goto LAB_1094a49e8;
      break;
    }
    pppppplVar14 = pppppplVar16 + 1;
    pppppplVar10 = (long ******)*pppppplVar14;
  }
LAB_1094a4980:
  ppppplVar9 = (long *****)0x118;
  __Znwm();
  pppppplVar10 = (long ******)(ppppplVar7 + 5);
  pppplStack_70 = (long ****)0x0;
  pppplStack_80 = (long ****)ppppplVar9;
  ppppplStack_78 = (long *****)pppppplVar10;
  FUN_1094a35d8(ppppplVar9 + 4,param_1 + 3);
  ppppplVar9[0x20] = (long ****)0x0;
  ppppplVar9[0x21] = (long ****)0x0;
  ppppplVar9[0x22] = (long ****)0x0;
  *ppppplVar9 = (long ****)0x0;
  ppppplVar9[1] = (long ****)0x0;
  ppppplVar9[2] = (long ****)pppppplVar16;
  *pppppplVar14 = ppppplVar9;
  if ((long *****)**pppppplVar10 != (long *****)0x0) {
    *pppppplVar10 = (long *****)**pppppplVar10;
    ppppplVar9 = *pppppplVar14;
  }
  func_0x000107c27d40(ppppplVar7[6],ppppplVar9);
  ppppplVar7[7] = (long ****)((long)ppppplVar7[7] + 1);
  ppppplVar9 = (long *****)pppplStack_80;
LAB_1094a49e8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(ppppplVar9 + 0x20);
  __ZNSt3__15mutex6unlockEv(ppppplVar7 + 10);
  uVar13 = 3;
  param_2 = pppppplVar15;
  unaff_x22 = (long ******)ppppplVar7;
LAB_1094a4a00:
  plVar8 = plStack_110;
  if (plStack_110 != (long *)0x0) {
    plVar1 = plStack_110 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  while( true ) {
    pppplVar11 = pppplStack_f0;
    if (*(char *)(param_1[0x20] + 1) == '\x01') {
      pppplStack_f0 = (long ****)0x0;
      pppplStack_b0 = pppplVar11;
      param_2 = (long ******)&pppplStack_b0;
      (*(code *)param_1[0x1f])((ulong)&pppplStack_f0 | 8,param_2,param_1 + 3,uVar13,param_1 + 0x1f);
      pppplVar11 = pppplStack_b0;
      pppplStack_b0 = (long ****)0x0;
      if ((long *****)pppplVar11 != (long *****)0x0) {
        func_0x000109cda590();
        __ZdlPv();
      }
    }
    if ((long)uStack_d8 < 0) {
      __ZdlPv(uStack_e8);
    }
    ppppplVar7 = (long *****)pppplStack_f0;
    pppplStack_f0 = (long ****)0x0;
    if (ppppplVar7 != (long *****)0x0) {
      func_0x000109cda590();
      __ZdlPv();
    }
    param_1 = (long *****)pppplStack_b8;
    if ((long *****)pppplStack_b8 != (long *****)0x0) {
      ppppplVar9 = (long *****)(pppplStack_b8 + 1);
      do {
        pppplVar11 = *ppppplVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppplVar9,0x10);
        if (bVar5) {
          *ppppplVar9 = (long ****)((long)pppplVar11 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (pppplVar11 == (long ****)0x0) {
        (*(code *)(*pppplStack_b8)[2])(pppplStack_b8);
        ppppplVar7 = param_1;
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) break;
    ___stack_chk_fail();
    if ((int)param_2 == 0) {
      do {
        __Unwind_Resume(ppppplVar7);
      } while ((int)param_2 == 0);
    }
    else {
      FUN_1094a4c64(&pppplStack_80);
    }
    __ZNSt3__15mutex6unlockEv(unaff_x22 + 10);
    func_0x00010938d5a8(&ppppplStack_118);
    ___cxa_begin_catch(ppppplVar7);
    (*(code *)(*param_1[0xd])[6])(&ppppplStack_118);
    ppppplStack_100 = ppppplStack_118;
    if (-1 < cStack_101) {
      ppppplStack_100 = (long *****)&ppppplStack_118;
    }
    FUN_1093780e0(&pppplStack_b0,&UNK_10f56e95d,&ppppplStack_100);
    param_2 = (long ******)&UNK_10f56e8cc;
    FUN_109388c6c(1,&UNK_10f56e8cc,&UNK_10f55aaab,0x70,&pppplStack_b0);
    if ((long)pppplStack_a0 < 0) {
      __ZdlPv(pppplStack_b0);
    }
    if (cStack_101 < '\0') {
      __ZdlPv(ppppplStack_118);
    }
    ___cxa_end_catch();
LAB_1094a46d4:
    uVar13 = 2;
  }
  return uVar13;
}



/* Entry: 1094a4c64; end: 1094a4d47;  */

void FUN_1094a4c64(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001094a422c(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094a4d48; end: 1094a4d53;  */

void FUN_1094a4d48(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001094a4d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1094a4d54; end: 1094a4db3;  */

void FUN_1094a4d54(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined1 auStack_28 [8];
  
  if (param_1 != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_28);
    __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    return;
  }
  lVar5 = 3;
  FUN_1094362d4();
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __Unwind_Resume();
  __ZNSt3__15mutex4lockEv(lVar5 + 0x18);
  if ((*(uint *)(lVar5 + 0x88) >> 1 & 1) == 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(uint *)(lVar5 + 0x88) = *(uint *)(lVar5 + 0x88) | 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar5 + 0x18);
    return;
  }
  FUN_1094362d4(1);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1094a4e0c);
  (*pcVar4)();
}



/* Entry: 1094a4db4; end: 1094a4e1f;  */

void FUN_1094a4db4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  if ((*(uint *)(param_1 + 0x88) >> 1 & 1) == 0) {
    plVar1 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x18);
    return;
  }
  FUN_1094362d4(1);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1094a4e0c);
  (*pcVar4)();
}



/* Entry: 1094a4e20; end: 1094a68cb;  */

/* WARNING: Removing unreachable block (ram,0x0001094a5f28) */
/* WARNING: Removing unreachable block (ram,0x0001094a5ea0) */
/* WARNING: Removing unreachable block (ram,0x0001094a5d68) */
/* WARNING: Removing unreachable block (ram,0x0001094a5c74) */
/* WARNING: Removing unreachable block (ram,0x0001094a5a9c) */
/* WARNING: Removing unreachable block (ram,0x0001094a5884) */
/* WARNING: Removing unreachable block (ram,0x0001094a57ac) */
/* WARNING: Removing unreachable block (ram,0x0001094a574c) */
/* WARNING: Removing unreachable block (ram,0x0001094a55e4) */
/* WARNING: Removing unreachable block (ram,0x0001094a54c0) */
/* WARNING: Removing unreachable block (ram,0x0001094a5460) */
/* WARNING: Removing unreachable block (ram,0x0001094a5280) */
/* WARNING: Removing unreachable block (ram,0x0001094a5114) */
/* WARNING: Removing unreachable block (ram,0x0001094a4ff8) */
/* WARNING: Removing unreachable block (ram,0x0001094a5154) */
/* WARNING: Removing unreachable block (ram,0x0001094a5430) */
/* WARNING: Removing unreachable block (ram,0x0001094a5490) */
/* WARNING: Removing unreachable block (ram,0x0001094a54f0) */
/* WARNING: Removing unreachable block (ram,0x0001094a561c) */
/* WARNING: Removing unreachable block (ram,0x0001094a577c) */
/* WARNING: Removing unreachable block (ram,0x0001094a57dc) */
/* WARNING: Removing unreachable block (ram,0x0001094a58bc) */
/* WARNING: Removing unreachable block (ram,0x0001094a5b3c) */
/* WARNING: Removing unreachable block (ram,0x0001094a5cac) */
/* WARNING: Removing unreachable block (ram,0x0001094a5e68) */
/* WARNING: Removing unreachable block (ram,0x0001094a5ed8) */
/* WARNING: Removing unreachable block (ram,0x0001094a5f60) */
/* WARNING: Removing unreachable block (ram,0x0001094a5bb8) */

long * FUN_1094a4e20(long *param_1,long *param_2,uint param_3)

{
  long *****ppppplVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong ****ppppuVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  char **ppcVar12;
  undefined1 uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long ******pppppplVar17;
  long *extraout_x8;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  char *pcVar21;
  ulong uVar23;
  int iVar24;
  long *plVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  long *****ppppplVar28;
  char *pcStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  char *pcStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  char *pcStack_380;
  long lStack_378;
  undefined1 *puStack_370;
  code *pcStack_368;
  long *plStack_358;
  long *plStack_350;
  long *plStack_348;
  ulong *puStack_340;
  ulong *puStack_338;
  long *plStack_330;
  long *plStack_328;
  long *plStack_320;
  ulong ***pppuStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong *puStack_300;
  ulong *puStack_2f8;
  undefined8 uStack_2f0;
  ulong *puStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  ulong *puStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  ulong *puStack_2b8;
  ulong *puStack_2b0;
  undefined8 uStack_2a8;
  ulong *puStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  ulong *apuStack_288 [2];
  char cStack_271;
  undefined1 auStack_270 [16];
  ulong *****pppppuStack_260;
  ulong *****pppppuStack_258;
  ulong ***pppuStack_250;
  undefined8 uStack_240;
  ulong *****pppppuStack_238;
  undefined8 uStack_230;
  undefined1 auStack_220 [16];
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *****ppppplStack_1b0;
  ulong ****ppppuStack_1a8;
  undefined7 uStack_1a0;
  char cStack_199;
  ulong *****pppppuStack_190;
  ulong *****pppppuStack_188;
  long **pplStack_180;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined7 uStack_128;
  undefined4 uStack_121;
  undefined1 uStack_11d;
  undefined4 uStack_11c;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_f8;
  ulong *****pppppuStack_f0;
  ulong *****pppppuStack_e8;
  ulong ***pppuStack_e0;
  ulong ****ppppuStack_d8;
  undefined8 uStack_d0;
  char cStack_b9;
  undefined4 uStack_b8;
  undefined8 auStack_b0 [2];
  char cStack_99;
  undefined4 uStack_98;
  long lStack_88;
  char *pcVar22;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = param_2[1];
  lVar19 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar19;
  if (lVar14 != 0) {
    plVar18 = (long *)(lVar14 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *plVar18 = *plVar18 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_328 = param_1;
  func_0x000107c31940(param_1 + 2,&UNK_10f56e975);
  puStack_338 = (ulong *)(param_1 + 5);
  param_1[6] = 0;
  *puStack_338 = 0;
  plVar25 = param_1 + 10;
  *(undefined4 *)plVar25 = 0x3f800000;
  param_1[9] = 0;
  plStack_348 = param_1 + 0xb;
  *plStack_348 = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  auVar27 = NEON_fmov(0x3f800000,4);
  pppppuStack_e8 = auVar27._8_8_;
  pppppuStack_f0 = auVar27._0_8_;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_1093c71a0(plStack_348,&pppppuStack_f0,&pppuStack_e0,4);
  plStack_330 = param_1 + 0xe;
  *plStack_330 = 0;
  plVar18 = param_1 + 0x10;
  *(undefined4 *)plVar18 = 0;
  plStack_320 = param_1 + 0x11;
  param_1[0x12] = 0;
  *plStack_320 = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  puStack_340 = (ulong *)(param_1 + 0x16);
  param_1[0x17] = 0;
  *puStack_340 = 0;
  plStack_358 = param_1 + 0x1c;
  *(undefined4 *)plStack_358 = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)((long)param_1 + 0xe4) = 1;
  *(undefined4 *)(param_1 + 0x1d) = 2;
  *(undefined1 *)((long)param_1 + 0xec) = 1;
  puVar8 = (undefined8 *)0x78;
  __Znwm();
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[7] = 0;
  puVar8[6] = 0;
  puVar8[9] = 0;
  puVar8[8] = 0;
  puVar8[0xb] = 0;
  puVar8[10] = 0;
  puVar8[0xd] = 0;
  puVar8[0xc] = 0;
  puVar8[0xe] = 0;
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  *(undefined4 *)(puVar8 + 3) = 0x3f800000;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  *(undefined2 *)(puVar8 + 7) = 0x200;
  *(undefined4 *)((long)puVar8 + 0x3a) = 0;
  *(undefined1 *)((long)puVar8 + 0x3e) = 0;
  *(undefined1 *)(puVar8 + 8) = 1;
  *(undefined1 *)((long)puVar8 + 0x4a) = 1;
  *(undefined2 *)((long)puVar8 + 0x4d) = 0x101;
  *(undefined2 *)((long)puVar8 + 0x53) = 0x101;
  *(undefined1 *)((long)puVar8 + 0x59) = 1;
  puVar8[0xc] = 100000;
  *(undefined4 *)((long)puVar8 + 0x6c) = 1;
  param_1[0x1e] = (long)puVar8;
  plStack_350 = param_1 + 0x1f;
  *plStack_350 = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_2 = (long *)*param_2;
  func_0x000107c31940(&pppppuStack_f0,&DAT_10f2ecb66);
  (**(code **)(*param_2 + 0x10))(&plStack_f8,param_2,&pppppuStack_f0);
  FUN_109380ad4(&uStack_110,plStack_f8);
  uStack_11d = 0;
  uStack_11c = 0;
  if (param_3 < 2) {
    puVar8 = (undefined8 *)&UNK_10f5676e2;
LAB_1094a504c:
    lStack_118 = 0xb;
    uStack_128 = (undefined7)*puVar8;
    uStack_121 = *(undefined4 *)((long)puVar8 + 7);
  }
  else {
    if (param_3 == 2) {
      puVar8 = (undefined8 *)&UNK_10f5676ee;
      goto LAB_1094a504c;
    }
    lStack_118 = 0xc;
    uStack_128 = 0x6769685f736f69;
    uStack_121 = 0x6e655f68;
    uStack_11d = 100;
  }
  lStack_118 = lStack_118 << 0x38;
  lStack_138 = lStack_108;
  uStack_140 = uStack_110;
  if (lStack_108 != 0) {
    plVar15 = (long *)(lStack_108 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = *plVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar8 = &uStack_110;
  FUN_1093781f4(puVar8,&uStack_128);
  if ((int)puVar8 != 0) {
    FUN_1094a68cc(&pppppuStack_f0,&uStack_110,&uStack_128);
    FUN_1094a7878(&uStack_140,&pppppuStack_f0);
    FUN_109380f8c(&pppppuStack_f0);
  }
  func_0x000107c31940(&pppppuStack_f0,&DAT_10f56e97e);
  FUN_1094a69fc(&uStack_140,&pppppuStack_f0,&uStack_110,plStack_328 + 2);
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_148 = 0;
  func_0x000107c31940(&pppppuStack_f0,&UNK_10f56e988);
  FUN_1094a69fc(&uStack_140,&pppppuStack_f0,&uStack_110,&uStack_158);
  if ((bRam0000000113732e18 & 1) == 0) {
    iVar24 = 0x13732e18;
    ___cxa_guard_acquire();
    if (iVar24 != 0) {
      func_0x000107c31940(&pppppuStack_f0,"disabled");
      ppppuStack_d8 = (ulong ****)((ulong)ppppuStack_d8 & 0xffffffff00000000);
      func_0x000107c31940(&uStack_d0,&UNK_10f56ea62);
      uStack_b8 = 1;
      func_0x000107c31940(auStack_b0,"auto");
      uStack_98 = 2;
      FUN_1094a78f8(&pppppuStack_f0,3);
      lVar19 = 0;
      do {
        if ((&cStack_99)[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_b0 + lVar19));
        }
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != -0x60);
      ___cxa_atexit(FUN_1094a78f4,0x113732e28,0x100000000);
      ___cxa_guard_release(0x113732e18);
    }
  }
  uVar9 = uStack_150;
  if (-1 < (long)uStack_148) {
    uVar9 = uStack_148 >> 0x38;
  }
  if (uVar9 != 0) {
    uVar9 = 0x113732e28;
    func_0x000107c31944(0x113732e28,&uStack_158);
    uVar5 = uRam0000000113732e30;
    if (uRam0000000113732e30 != 0) {
      uVar20 = uRam0000000113732e30 - 1;
      if ((uRam0000000113732e30 & uVar20) == 0) {
        uVar23 = uVar20 & uVar9;
      }
      else {
        uVar23 = uVar9;
        if (uRam0000000113732e30 <= uVar9) {
          uVar23 = 0;
          if (uRam0000000113732e30 != 0) {
            uVar23 = uVar9 / uRam0000000113732e30;
          }
          uVar23 = uVar9 - uVar23 * uRam0000000113732e30;
        }
      }
      plVar15 = *(long **)(lRam0000000113732e28 + uVar23 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        do {
          uVar16 = plVar15[1];
          if (uVar9 == uVar16) {
            uVar16 = 0;
            func_0x000104c4fbc4(0x113732e28,plVar15 + 2,&uStack_158);
            if ((uVar16 & 1) != 0) {
              uVar26 = (undefined4)plVar15[5];
              goto LAB_1094a5244;
            }
          }
          else {
            if ((uVar5 & uVar20) == 0) {
              uVar16 = uVar16 & uVar20;
            }
            else if (uVar5 <= uVar16) {
              uVar4 = 0;
              if (uVar5 != 0) {
                uVar4 = uVar16 / uVar5;
              }
              uVar16 = uVar16 - uVar4 * uVar5;
            }
            if (uVar16 != uVar23) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  uVar26 = 2;
LAB_1094a5244:
  *(undefined4 *)(plStack_328 + 0x1d) = uVar26;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  func_0x000107c31940(&pppppuStack_f0,&UNK_10f56e993);
  FUN_1094a69fc(&uStack_140,&pppppuStack_f0,&uStack_110,&uStack_170);
  if ((bRam0000000113732e20 & 1) == 0) {
    iVar24 = 0x13732e20;
    ___cxa_guard_acquire();
    if (iVar24 != 0) {
      func_0x000107c31940(&pppppuStack_f0,"disabled");
      ppppuStack_d8 = (ulong ****)((ulong)ppppuStack_d8 & 0xffffffffffffff00);
      func_0x000107c31940(&uStack_d0,&UNK_10f56ea6a);
      uStack_b8 = CONCAT31(uStack_b8._1_3_,1);
      FUN_1094a7e04(&pppppuStack_f0,2);
      lVar19 = 0;
      do {
        if ((&cStack_b9)[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)&uStack_d0 + lVar19));
        }
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != -0x40);
      ___cxa_atexit(FUN_1094a7e00,0x113732e50,0x100000000);
      ___cxa_guard_release(0x113732e20);
    }
  }
  uVar9 = uStack_168;
  if (-1 < (long)uStack_160) {
    uVar9 = uStack_160 >> 0x38;
  }
  if (uVar9 != 0) {
    uVar9 = 0x113732e50;
    func_0x000107c31944(0x113732e50,&uStack_170);
    uVar5 = uRam0000000113732e58;
    if (uRam0000000113732e58 != 0) {
      uVar20 = uRam0000000113732e58 - 1;
      if ((uRam0000000113732e58 & uVar20) == 0) {
        uVar23 = uVar20 & uVar9;
      }
      else {
        uVar23 = uVar9;
        if (uRam0000000113732e58 <= uVar9) {
          uVar23 = 0;
          if (uRam0000000113732e58 != 0) {
            uVar23 = uVar9 / uRam0000000113732e58;
          }
          uVar23 = uVar9 - uVar23 * uRam0000000113732e58;
        }
      }
      plVar15 = *(long **)(lRam0000000113732e50 + uVar23 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        do {
          uVar16 = plVar15[1];
          if (uVar9 == uVar16) {
            uVar16 = 0;
            func_0x000104c4fbc4(0x113732e50,plVar15 + 2,&uStack_170);
            if ((uVar16 & 1) != 0) {
              uVar13 = (undefined1)plVar15[5];
              goto LAB_1094a5370;
            }
          }
          else {
            if ((uVar5 & uVar20) == 0) {
              uVar16 = uVar16 & uVar20;
            }
            else if (uVar5 <= uVar16) {
              uVar4 = 0;
              if (uVar5 != 0) {
                uVar4 = uVar16 / uVar5;
              }
              uVar16 = uVar16 - uVar4 * uVar5;
            }
            if (uVar16 != uVar23) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  uVar13 = 1;
LAB_1094a5370:
  *(undefined1 *)((long)plStack_328 + 0xec) = uVar13;
  FUN_10925b8c4(&pppppuStack_190,2);
  func_0x000107c31940(&ppppplStack_1b0,&UNK_10f56e99c);
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  lStack_1b8 = 0;
  FUN_1094a6b30(&pppppuStack_f0,&uStack_110,&ppppplStack_1b0,&uStack_1c8);
  if (*(char *)((long)plStack_328 + 0x3f) < '\0') {
    __ZdlPv(*puStack_338);
  }
  puStack_338[1] = (ulong)pppppuStack_e8;
  *puStack_338 = (ulong)pppppuStack_f0;
  puStack_338[2] = (ulong)pppuStack_e0;
  pppuStack_e0 = (ulong ***)((ulong)pppuStack_e0 & 0xffffffffffffff);
  pppppuStack_f0 = (ulong *****)((ulong)pppppuStack_f0 & 0xffffffffffffff00);
  if (lStack_1b8 < 0) {
    __ZdlPv(uStack_1c8);
  }
  if (cStack_199 < '\0') {
    __ZdlPv(ppppplStack_1b0);
  }
  func_0x000107c31940(&pppppuStack_f0,&UNK_10f56e9a7);
  FUN_1094a6ca4(&uStack_110,&pppppuStack_f0,&pppppuStack_190);
  func_0x000107c31940(&pppppuStack_f0,&UNK_10f56e9b3);
  func_0x0001094a6db0(&uStack_110,&pppppuStack_f0,plVar25);
  func_0x000107c31940(&pppppuStack_f0,&DAT_10f56e9c3);
  func_0x0001094a6ea4(&uStack_110,&pppppuStack_f0,plStack_348);
  func_0x000107c31940(&pppppuStack_f0,&UNK_10f56e9d0);
  func_0x0001094a6db0(&uStack_110,&pppppuStack_f0,plVar18);
  func_0x000107c31940(&pppppuStack_f0,&UNK_10f56e9e1);
  func_0x0001094a6fb0(&uStack_110,&pppppuStack_f0,plStack_330);
  func_0x000107c31940(&ppppplStack_1b0,&UNK_10f56e9ee);
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  lStack_1d0 = 0;
  FUN_1094a6b30(&pppppuStack_f0,&uStack_110,&ppppplStack_1b0,&uStack_1e0);
  if (*(char *)((long)plStack_328 + 199) < '\0') {
    __ZdlPv(*puStack_340);
  }
  puStack_340[1] = (ulong)pppppuStack_e8;
  *puStack_340 = (ulong)pppppuStack_f0;
  puStack_340[2] = (ulong)pppuStack_e0;
  pppuStack_e0 = (ulong ***)((ulong)pppuStack_e0 & 0xffffffffffffff);
  pppppuStack_f0 = (ulong *****)((ulong)pppppuStack_f0 & 0xffffffffffffff00);
  if (lStack_1d0 < 0) {
    __ZdlPv(uStack_1e0);
  }
  if (cStack_199 < '\0') {
    __ZdlPv(ppppplStack_1b0);
  }
  func_0x000107c31940(&pppppuStack_f0,&DAT_10f311774);
  puVar8 = &uStack_140;
  FUN_1093781f4(puVar8,&pppppuStack_f0);
  if (((ulong)puVar8 & 1) == 0) {
    func_0x000107c31940(&ppppplStack_1b0,&DAT_10f311774);
    puVar8 = &uStack_110;
    FUN_1093781f4(puVar8,&ppppplStack_1b0);
    iVar24 = (int)puVar8;
    if (cStack_199 < '\0') {
      __ZdlPv(ppppplStack_1b0);
    }
  }
  else {
    iVar24 = 1;
  }
  if (iVar24 != 0) {
    func_0x000107c31940(&pppppuStack_f0,&DAT_10f311774);
    FUN_1094a70a8(&uStack_240,&uStack_140,&pppppuStack_f0,&uStack_110);
    func_0x000107c31940(&ppppplStack_1b0,&DAT_10f68f148);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    lStack_1e8 = 0;
    FUN_1094a6b30(&pppppuStack_f0,&uStack_240,&ppppplStack_1b0,&uStack_1f8);
    if (*(char *)((long)plStack_328 + 0x3f) < '\0') {
      __ZdlPv(*puStack_338);
    }
    puStack_338[1] = (ulong)pppppuStack_e8;
    *puStack_338 = (ulong)pppppuStack_f0;
    puStack_338[2] = (ulong)pppuStack_e0;
    pppuStack_e0 = (ulong ***)((ulong)pppuStack_e0 & 0xffffffffffffff);
    pppppuStack_f0 = (ulong *****)((ulong)pppppuStack_f0 & 0xffffffffffffff00);
    if (lStack_1e8 < 0) {
      __ZdlPv(uStack_1f8);
    }
    if (cStack_199 < '\0') {
      __ZdlPv(ppppplStack_1b0);
    }
    func_0x000107c31940(&ppppplStack_1b0,&DAT_10f68f0dc);
    lStack_210 = 0;
    lStack_208 = 0;
    uStack_200 = 0;
    func_0x0001094a71c0(&pppppuStack_f0,&uStack_240,&ppppplStack_1b0,&lStack_210);
    if ((long ******)pppppuStack_190 != (long ******)0x0) {
      pppppuStack_188 = pppppuStack_190;
      __ZdlPv();
    }
    pppppuStack_188 = pppppuStack_e8;
    pppppuStack_190 = pppppuStack_f0;
    pplStack_180 = (long **)pppuStack_e0;
    pppppuStack_e8 = (ulong *****)0x0;
    pppuStack_e0 = (ulong ***)0x0;
    pppppuStack_f0 = (ulong *****)0x0;
    if (lStack_210 != 0) {
      lStack_208 = lStack_210;
      __ZdlPv();
    }
    if (cStack_199 < '\0') {
      __ZdlPv(ppppplStack_1b0);
    }
    func_0x000107c31940(&pppppuStack_f0,&DAT_10f68f20c);
    func_0x0001094a6db0(&uStack_240,&pppppuStack_f0,plVar25);
    func_0x000107c31940(&pppppuStack_f0,"scale");
    func_0x0001094a6ea4(&uStack_240,&pppppuStack_f0,plStack_348);
    func_0x000107c31940(&pppppuStack_f0,&DAT_10f2dba38);
    func_0x0001094a6fb0(&uStack_240,&pppppuStack_f0,plStack_330);
    func_0x000107c31940(&pppppuStack_f0,&UNK_10f56e9fa);
    func_0x0001094a6db0(&uStack_240,&pppppuStack_f0,plVar18);
    FUN_109380f8c(&uStack_240);
  }
  if ((0 < *(int *)pppppuStack_190) && (iVar24 = *(int *)((long)pppppuStack_190 + 4), 0 < iVar24)) {
    *(int *)(plStack_328 + 8) = *(int *)pppppuStack_190;
    *(int *)((long)plStack_328 + 0x44) = iVar24;
    plStack_328[9] = 0x100000003;
  }
  func_0x000107c31940(&pppppuStack_f0,&DAT_10f2dd3d4);
  puVar8 = &uStack_140;
  FUN_1093781f4(puVar8,&pppppuStack_f0);
  if (((ulong)puVar8 & 1) == 0) {
    func_0x000107c31940(&ppppplStack_1b0,&DAT_10f2dd3d4);
    puVar8 = &uStack_110;
    FUN_1093781f4(puVar8,&ppppplStack_1b0);
    iVar24 = (int)puVar8;
    if (cStack_199 < '\0') {
      __ZdlPv(ppppplStack_1b0);
    }
  }
  else {
    iVar24 = 1;
  }
  if (iVar24 != 0) {
    func_0x000107c31940(&pppppuStack_f0,&DAT_10f2dd3d4);
    FUN_1094a70a8(auStack_220,&uStack_140,&pppppuStack_f0,&uStack_110);
    FUN_1094a72dc(&ppppplStack_1b0,auStack_220);
    uStack_240 = (long ******)0x0;
    pppppuStack_238 = (ulong *****)0x0;
    uStack_230 = (long ****)0x0;
    FUN_10925b8c4(&pppppuStack_260,2);
    ppppuVar6 = ppppuStack_1a8;
    for (ppppplVar1 = ppppplStack_1b0; ppppplVar1 != (long *****)ppppuVar6;
        ppppplVar1 = ppppplVar1 + 3) {
      FUN_1094a68cc(auStack_270,auStack_220,ppppplVar1);
      func_0x000107c31940(apuStack_288,&DAT_10f6389e8);
      puStack_2a0 = (ulong *)0x0;
      uStack_298 = 0;
      lStack_290 = 0;
      FUN_1094a6b30(&pppppuStack_f0,auStack_270,apuStack_288,&puStack_2a0);
      if ((long)uStack_230 < 0) {
        __ZdlPv(uStack_240);
      }
      pppppuStack_238 = pppppuStack_e8;
      uStack_240 = (long ******)pppppuStack_f0;
      uStack_230 = (long ****)pppuStack_e0;
      pppuStack_e0 = (ulong ***)((ulong)pppuStack_e0 & 0xffffffffffffff);
      pppppuStack_f0 = (ulong *****)((ulong)pppppuStack_f0 & 0xffffffffffffff00);
      if (lStack_290 < 0) {
        __ZdlPv(puStack_2a0);
      }
      if (cStack_271 < '\0') {
        __ZdlPv(apuStack_288[0]);
      }
      if ((long)uStack_230 < 0) {
        if ((long ******)pppppuStack_238 == (long ******)0x5) {
          if (*(int *)uStack_240 != 0x61727261 || *(char *)((long)uStack_240 + 4) != 'y')
          goto LAB_1094a6198;
          goto LAB_1094a5b14;
        }
        pppppplVar17 = uStack_240;
        if ((long ******)pppppuStack_238 != (long ******)0x7) goto LAB_1094a6198;
LAB_1094a59e8:
        if (*(int *)pppppplVar17 != 0x74786574 || *(int *)((long)pppppplVar17 + 3) != 0x65727574) {
LAB_1094a6198:
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (apuStack_288,&UNK_10f56ea06,&uStack_240);
          FUN_109259240(&pppppuStack_f0,apuStack_288,&UNK_10f560154);
          func_0x000105687ee0(&pppppuStack_f0);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1094a61cc);
          (*pcVar7)();
        }
        func_0x000107c31940(apuStack_288,&DAT_10f68f0dc);
        puStack_2b8 = (ulong *)0x0;
        puStack_2b0 = (ulong *)0x0;
        uStack_2a8 = 0;
        func_0x0001094a71c0(&pppppuStack_f0,auStack_270,apuStack_288,&puStack_2b8);
        if ((long ******)pppppuStack_260 != (long ******)0x0) {
          pppppuStack_258 = pppppuStack_260;
          __ZdlPv();
        }
        pppppuStack_258 = pppppuStack_e8;
        pppppuStack_260 = pppppuStack_f0;
        pppuStack_250 = pppuStack_e0;
        pppppuStack_e8 = (ulong *****)0x0;
        pppuStack_e0 = (ulong ***)0x0;
        pppppuStack_f0 = (ulong *****)0x0;
        if (puStack_2b8 != (ulong *)0x0) {
          puStack_2b0 = puStack_2b8;
          __ZdlPv();
        }
        if (cStack_271 < '\0') {
          __ZdlPv(apuStack_288[0]);
        }
        func_0x000107c31940(&pppppuStack_f0,&UNK_10f41549f);
        puVar10 = auStack_270;
        func_0x0001093782cc(puVar10,&pppppuStack_f0,0);
        ppppplVar28 = (long *****)*pppppuStack_260;
        if (*(char *)((long)ppppplVar1 + 0x17) < '\0') {
          func_0x000107c3192c(&pppppuStack_f0,*ppppplVar1,ppppplVar1[1]);
        }
        else {
          pppppuStack_f0 = (ulong *****)*ppppplVar1;
          pppppuStack_e8 = (ulong *****)ppppplVar1[1];
          pppuStack_e0 = (ulong ***)ppppplVar1[2];
        }
        uStack_d0._0_4_ = SUB84(puVar10,0);
        uStack_d0._4_4_ = 1;
        ppppuStack_d8 = (ulong ****)ppppplVar28;
        FUN_1094a8ac4(plStack_320,&pppppuStack_f0,&pppppuStack_f0);
      }
      else {
        if (uStack_230._7_1_ != '\x05') {
          if (uStack_230._7_1_ != '\a') goto LAB_1094a6198;
          pppppplVar17 = (long ******)&uStack_240;
          goto LAB_1094a59e8;
        }
        if ((int)uStack_240 != 0x61727261 || uStack_240._4_1_ != 'y') goto LAB_1094a6198;
LAB_1094a5b14:
        func_0x000107c31940(&pppppuStack_f0,&DAT_10f355a53);
        puVar10 = auStack_270;
        func_0x0001093782cc(puVar10,&pppppuStack_f0,0);
        if (*(char *)((long)ppppplVar1 + 0x17) < '\0') {
          func_0x000107c3192c(&pppppuStack_f0,*ppppplVar1,ppppplVar1[1]);
        }
        else {
          pppppuStack_f0 = (ulong *****)*ppppplVar1;
          pppppuStack_e8 = (ulong *****)ppppplVar1[1];
          pppuStack_e0 = (ulong ***)ppppplVar1[2];
        }
        ppppuStack_d8 = (ulong ****)0x100000001;
        uStack_d0._0_4_ = SUB84(puVar10,0);
        uStack_d0._4_4_ = 1;
        FUN_1094a8ac4(plStack_320,&pppppuStack_f0,&pppppuStack_f0);
      }
      FUN_109380f8c(auStack_270);
    }
    if ((long ******)pppppuStack_260 != (long ******)0x0) {
      pppppuStack_258 = pppppuStack_260;
      __ZdlPv();
    }
    if ((long)uStack_230 < 0) {
      __ZdlPv(uStack_240);
    }
    pppppuStack_f0 = (ulong *****)&ppppplStack_1b0;
    func_0x000104c607c8(&pppppuStack_f0);
    FUN_109380f8c(auStack_220);
  }
  func_0x000107c31940(&pppppuStack_f0,&DAT_10f3b93c3);
  puVar8 = &uStack_140;
  FUN_1093781f4(puVar8,&pppppuStack_f0);
  if (((ulong)puVar8 & 1) == 0) {
    func_0x000107c31940(&ppppplStack_1b0,&DAT_10f3b93c3);
    puVar8 = &uStack_110;
    FUN_1093781f4(puVar8,&ppppplStack_1b0);
    iVar24 = (int)puVar8;
    if (cStack_199 < '\0') {
      __ZdlPv(ppppplStack_1b0);
    }
  }
  else {
    iVar24 = 1;
  }
  if (iVar24 != 0) {
    func_0x000107c31940(&pppppuStack_f0,&DAT_10f3b93c3);
    FUN_1094a70a8(&uStack_240,&uStack_140,&pppppuStack_f0,&uStack_110);
    func_0x000107c31940(&ppppplStack_1b0,&DAT_10f68f148);
    puStack_2d0 = (ulong *)0x0;
    uStack_2c8 = 0;
    lStack_2c0 = 0;
    FUN_1094a6b30(&pppppuStack_f0,&uStack_240,&ppppplStack_1b0,&puStack_2d0);
    if (*(char *)((long)plStack_328 + 199) < '\0') {
      __ZdlPv(*puStack_340);
    }
    puStack_340[1] = (ulong)pppppuStack_e8;
    *puStack_340 = (ulong)pppppuStack_f0;
    puStack_340[2] = (ulong)pppuStack_e0;
    pppuStack_e0 = (ulong ***)((ulong)pppuStack_e0 & 0xffffffffffffff);
    pppppuStack_f0 = (ulong *****)((ulong)pppppuStack_f0 & 0xffffffffffffff00);
    if (lStack_2c0 < 0) {
      __ZdlPv(puStack_2d0);
    }
    if (cStack_199 < '\0') {
      __ZdlPv(ppppplStack_1b0);
    }
    func_0x000107c31940(&pppppuStack_f0,&UNK_10f56ea35);
    puVar8 = &uStack_240;
    FUN_1093781f4(puVar8,&pppppuStack_f0);
    if ((int)puVar8 != 0) {
      func_0x000107c31940(&ppppplStack_1b0,&UNK_10f56ea35);
      puStack_2e8 = (ulong *)0x0;
      uStack_2e0 = 0;
      lStack_2d8 = 0;
      FUN_1094a6b30(&pppppuStack_f0,&uStack_240,&ppppplStack_1b0,&puStack_2e8);
      if (*(char *)((long)plStack_328 + 0xdf) < '\0') {
        __ZdlPv(plStack_330[0xb]);
      }
      plStack_330[0xc] = (long)pppppuStack_e8;
      plStack_330[0xb] = (long)pppppuStack_f0;
      plStack_330[0xd] = (long)pppuStack_e0;
      pppuStack_e0 = (ulong ***)((ulong)pppuStack_e0 & 0xffffffffffffff);
      pppppuStack_f0 = (ulong *****)((ulong)pppppuStack_f0 & 0xffffffffffffff00);
      if (lStack_2d8 < 0) {
        __ZdlPv(puStack_2e8);
      }
      if (cStack_199 < '\0') {
        __ZdlPv(ppppplStack_1b0);
      }
    }
    FUN_109380f8c(&uStack_240);
  }
  func_0x000107c31940(&pppppuStack_f0,&UNK_10f56ea3a);
  puVar8 = &uStack_140;
  FUN_1093781f4(puVar8,&pppppuStack_f0);
  if (((ulong)puVar8 & 1) == 0) {
    func_0x000107c31940(&ppppplStack_1b0,&UNK_10f56ea3a);
    puVar8 = &uStack_110;
    FUN_1093781f4(puVar8,&ppppplStack_1b0);
    iVar24 = (int)puVar8;
    if (cStack_199 < '\0') {
      __ZdlPv(ppppplStack_1b0);
    }
  }
  else {
    iVar24 = 1;
  }
  if (iVar24 != 0) {
    func_0x000107c31940(&pppppuStack_f0,&UNK_10f56ea3a);
    FUN_1094a70a8(&uStack_240,&uStack_140,&pppppuStack_f0,&uStack_110);
    func_0x000107c31940(&pppppuStack_f0,"scale");
    puVar8 = &uStack_240;
    FUN_1093781f4(puVar8,&pppppuStack_f0);
    if ((int)puVar8 != 0) {
      *(undefined1 *)(plStack_330[0x10] + 0x1d) = 1;
      func_0x000107c31940(&pppppuStack_f0,"scale");
      uVar26 = FUN_1094a73d0(&uStack_240,&pppppuStack_f0);
      *(undefined4 *)(plStack_330[0x10] + 0x18) = uVar26;
    }
    func_0x000107c31940(&pppppuStack_f0,&DAT_10f56ea49);
    puVar8 = &uStack_240;
    FUN_1093781f4(puVar8,&pppppuStack_f0);
    if ((int)puVar8 != 0) {
      *(undefined1 *)(plStack_330[0x10] + 0x1c) = 1;
      func_0x000107c31940(&ppppplStack_1b0,&DAT_10f56ea49);
      puStack_300 = (ulong *)0x0;
      puStack_2f8 = (ulong *)0x0;
      uStack_2f0 = 0;
      FUN_1094a74cc(&pppppuStack_f0,&uStack_240,&ppppplStack_1b0,&puStack_300);
      plVar18 = (long *)plStack_330[0x10];
      if (*plVar18 != 0) {
        plVar18[1] = *plVar18;
        __ZdlPv();
        *plVar18 = 0;
        plVar18[1] = 0;
        plVar18[2] = 0;
      }
      plVar18[1] = (long)pppppuStack_e8;
      *plVar18 = (long)pppppuStack_f0;
      plVar18[2] = (long)pppuStack_e0;
      pppppuStack_f0 = (ulong *****)0x0;
      pppppuStack_e8 = (ulong *****)0x0;
      pppuStack_e0 = (ulong ***)0x0;
      if (puStack_300 != (ulong *)0x0) {
        puStack_2f8 = puStack_300;
        __ZdlPv();
      }
      if (cStack_199 < '\0') {
        __ZdlPv(ppppplStack_1b0);
      }
    }
    FUN_109380f8c(&uStack_240);
  }
  func_0x000107c31940(&ppppplStack_1b0,&UNK_10f56ea4e);
  pppuStack_318 = (ulong ***)0x0;
  uStack_310 = 0;
  uStack_308 = 0;
  FUN_1094a75e8(&pppppuStack_f0,&uStack_140,&ppppplStack_1b0,&uStack_110,&pppuStack_318);
  uStack_240 = (long ******)&pppuStack_318;
  func_0x000104c607c8(&uStack_240);
  if (cStack_199 < '\0') {
    __ZdlPv(ppppplStack_1b0);
  }
  FUN_10937dae0(&ppppplStack_1b0,&pppppuStack_f0);
  plVar25 = plStack_328;
  plVar18 = plStack_350;
  if (*plStack_350 != 0) {
    plStack_328[0x20] = *plStack_350;
    __ZdlPv();
    *plVar18 = 0;
    plVar18[1] = 0;
    plVar18[2] = 0;
  }
  plVar25[0x20] = (long)ppppuStack_1a8;
  plVar25[0x1f] = (long)ppppplStack_1b0;
  plVar25[0x21] = CONCAT17(cStack_199,uStack_1a0);
  func_0x000107c31940(&ppppplStack_1b0,&DAT_10f68e5aa);
  FUN_1094a775c(&uStack_140,&ppppplStack_1b0,&uStack_110,plStack_358);
  if (cStack_199 < '\0') {
    __ZdlPv(ppppplStack_1b0);
  }
  ppppplStack_1b0 = (long *****)&pppppuStack_f0;
  func_0x000104c607c8(&ppppplStack_1b0);
  if ((long ******)pppppuStack_190 != (long ******)0x0) {
    pppppuStack_188 = pppppuStack_190;
    __ZdlPv();
  }
  if ((long)uStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  if ((long)uStack_148 < 0) {
    __ZdlPv(uStack_158);
  }
  FUN_109380f8c(&uStack_140);
  if (lStack_118 < 0) {
    __ZdlPv(CONCAT17((undefined1)uStack_121,uStack_128));
  }
  FUN_109380f8c(&uStack_110);
  plVar18 = plStack_f8;
  plStack_f8 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return plStack_328;
  }
  ___stack_chk_fail();
  lVar19 = -0x40;
  pcVar22 = (char *)((long)plVar25 + 0x37);
  do {
    pcVar21 = pcVar22 + -0x20;
    if (*pcVar22 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar22 + -0x17));
    }
    lVar19 = lVar19 + 0x20;
    pcVar22 = pcVar21;
  } while (lVar19 != 0);
  ___cxa_guard_abort(0x113732e20);
  if ((long)uStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  if ((long)uStack_148 < 0) {
    __ZdlPv(uStack_158);
  }
  FUN_109380f8c(&uStack_140);
  if (lStack_118 < 0) {
    __ZdlPv(CONCAT17((undefined1)uStack_121,uStack_128));
  }
  FUN_109380f8c(&uStack_110);
  plVar25 = plStack_f8;
  plStack_f8 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 8))();
  }
  if (*plStack_350 != 0) {
    plStack_328[0x20] = *plStack_350;
    __ZdlPv();
  }
  lVar14 = plStack_330[0x10];
  plStack_330[0x10] = 0;
  if (lVar14 != 0) {
    FUN_1094a8624(plStack_330 + 0x10);
  }
  if (*(char *)((long)plStack_328 + 0xdf) < '\0') {
    __ZdlPv(plStack_330[0xb]);
  }
  if (*(char *)((long)plStack_328 + 199) < '\0') {
    __ZdlPv(*puStack_340);
  }
  func_0x0001094a866c(plStack_320);
  if (*plStack_348 != 0) {
    plStack_328[0xc] = *plStack_348;
    __ZdlPv();
  }
  if (*(char *)((long)plStack_328 + 0x3f) < '\0') {
    __ZdlPv(*puStack_338);
  }
  if (*(char *)((long)plStack_328 + 0x27) < '\0') {
    __ZdlPv(plStack_328[2]);
  }
  func_0x0001094776c4(plStack_328);
  __Unwind_Resume();
  pcStack_368 = FUN_1094a68cc;
  pcStack_3c0 = (char *)*plVar18;
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_388 = 0x8000000000000000;
  cVar2 = *pcStack_3c0;
  pcStack_3a0 = pcStack_3c0;
  pcStack_380 = pcVar21;
  lStack_378 = lVar19;
  puStack_370 = &stack0xfffffffffffffff0;
  if (cVar2 == '\x01') {
    uVar11 = *(undefined8 *)(pcStack_3c0 + 8);
    FUN_1093793a4();
    pcStack_3c0 = (char *)*plVar18;
    cVar2 = *pcStack_3c0;
    uStack_398 = uVar11;
LAB_1094a6944:
    lStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0x8000000000000000;
    if (cVar2 == '\x01') {
      lStack_3b8 = *(long *)(pcStack_3c0 + 8) + 8;
      goto LAB_1094a6988;
    }
    if (cVar2 != '\x02') {
      uStack_3a8 = 1;
      goto LAB_1094a6988;
    }
    uStack_3b0 = *(undefined8 *)(*(long *)(pcStack_3c0 + 8) + 8);
  }
  else {
    if (cVar2 != '\x02') {
      uStack_388 = 1;
      goto LAB_1094a6944;
    }
    uStack_3b0 = *(undefined8 *)(*(long *)(pcStack_3c0 + 8) + 8);
    uStack_390 = uStack_3b0;
  }
  uStack_3a8 = 0x8000000000000000;
  lStack_3b8 = 0;
LAB_1094a6988:
  ppcVar12 = &pcStack_3a0;
  FUN_109379420(ppcVar12,&pcStack_3c0);
  if ((int)ppcVar12 == 0) {
    ppcVar12 = &pcStack_3a0;
    FUN_10937b950(ppcVar12);
    plVar18 = extraout_x8;
    FUN_109380c8c(extraout_x8,ppcVar12);
  }
  else {
    pcStack_3c0 = (char *)((ulong)pcStack_3c0 & 0xffffffffffffff00);
    lStack_3b8 = 0;
    FUN_109380c8c(extraout_x8,&pcStack_3c0);
    plVar18 = &lStack_3b8;
    FUN_109380ffc(plVar18,(ulong)pcStack_3c0 & 0xff);
  }
  return plVar18;
}



/* Entry: 1094a68cc; end: 1094a69fb;  */

void FUN_1094a68cc(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pcStack_60 = (char *)*param_2;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x8000000000000000;
  cVar1 = *pcStack_60;
  pcStack_40 = pcStack_60;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_60 + 8);
    FUN_1093793a4();
    pcStack_60 = (char *)*param_2;
    cVar1 = *pcStack_60;
    uStack_38 = uVar2;
LAB_1094a6944:
    lStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_58 = *(long *)(pcStack_60 + 8) + 8;
      goto LAB_1094a6988;
    }
    if (cVar1 != '\x02') {
      uStack_48 = 1;
      goto LAB_1094a6988;
    }
    uStack_50 = *(undefined8 *)(*(long *)(pcStack_60 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_28 = 1;
      goto LAB_1094a6944;
    }
    uStack_50 = *(undefined8 *)(*(long *)(pcStack_60 + 8) + 8);
    uStack_30 = uStack_50;
  }
  uStack_48 = 0x8000000000000000;
  lStack_58 = 0;
LAB_1094a6988:
  ppcVar3 = &pcStack_40;
  FUN_109379420(ppcVar3,&pcStack_60);
  if ((int)ppcVar3 == 0) {
    ppcVar3 = &pcStack_40;
    FUN_10937b950(ppcVar3);
    FUN_109380c8c(param_1,ppcVar3);
  }
  else {
    pcStack_60 = (char *)((ulong)pcStack_60 & 0xffffffffffffff00);
    lStack_58 = 0;
    FUN_109380c8c(param_1,&pcStack_60);
    FUN_109380ffc(&lStack_58,(ulong)pcStack_60 & 0xff);
  }
  return;
}



/* Entry: 1094a69fc; end: 1094a6b2f;  */

void FUN_1094a69fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcStack_70 = (char *)*param_1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x8000000000000000;
  cVar1 = *pcStack_70;
  pcStack_50 = pcStack_70;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_70 + 8);
    FUN_1093793a4(uVar2,param_2);
    pcStack_70 = (char *)*param_1;
    cVar1 = *pcStack_70;
    uStack_48 = uVar2;
LAB_1094a6a84:
    lStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_68 = *(long *)(pcStack_70 + 8) + 8;
      goto LAB_1094a6ac8;
    }
    if (cVar1 != '\x02') {
      uStack_58 = 1;
      goto LAB_1094a6ac8;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_38 = 1;
      goto LAB_1094a6a84;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
    uStack_40 = uStack_60;
  }
  uStack_58 = 0x8000000000000000;
  lStack_68 = 0;
LAB_1094a6ac8:
  ppcVar3 = &pcStack_50;
  FUN_109379420(ppcVar3,&pcStack_70);
  if (((ulong)ppcVar3 & 1) == 0) {
    FUN_10937b950(&pcStack_50);
    FUN_10937c804(&pcStack_70);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      __ZdlPv(*param_4);
    }
    param_4[1] = lStack_68;
    *param_4 = pcStack_70;
    param_4[2] = uStack_60;
  }
  else {
    func_0x0001094a86e8(param_3,param_2,param_4);
  }
  return;
}



/* Entry: 1094a6b30; end: 1094a6ca3;  */

void FUN_1094a6b30(long *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  char **ppcVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  char *pcStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  char *pcStack_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_88 = (char *)*param_2;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0x8000000000000000;
  cVar1 = *pcStack_88;
  plVar3 = param_4;
  pcStack_68 = pcStack_88;
  if (cVar1 == '\x01') {
    uVar4 = *(undefined8 *)(pcStack_88 + 8);
    FUN_1093793a4();
    pcStack_88 = (char *)*param_2;
    cVar1 = *pcStack_88;
    uStack_60 = uVar4;
LAB_1094a6bc8:
    uStack_80 = 0;
    uStack_79 = 0;
    uStack_78 = 0;
    uStack_71 = 0;
    uStack_70 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      uStack_80 = (undefined7)(*(long *)(pcStack_88 + 8) + 8);
      uStack_79 = (undefined1)((ulong)(*(long *)(pcStack_88 + 8) + 8) >> 0x38);
    }
    else {
      if (cVar1 == '\x02') {
        uVar4 = *(undefined8 *)(*(long *)(pcStack_88 + 8) + 8);
        goto LAB_1094a6bec;
      }
      uStack_70 = 1;
    }
  }
  else {
    if (cVar1 != '\x02') {
      uStack_50 = 1;
      goto LAB_1094a6bc8;
    }
    uVar4 = *(undefined8 *)(*(long *)(pcStack_88 + 8) + 8);
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_41 = 0;
    uStack_58 = uVar4;
LAB_1094a6bec:
    uStack_70 = 0x8000000000000000;
    uStack_79 = 0;
    uStack_80 = 0;
    uStack_78 = (undefined7)uVar4;
    uStack_71 = (undefined1)((ulong)uVar4 >> 0x38);
  }
  ppcVar2 = &pcStack_68;
  FUN_109379420(ppcVar2,&pcStack_88);
  if ((int)ppcVar2 == 0) {
    ppcVar2 = &pcStack_68;
    FUN_10937b950();
    FUN_10937c804(&pcStack_88);
    uStack_40 = uStack_78;
    uStack_48 = uStack_80;
    uStack_41 = uStack_79;
    *param_1 = (long)pcStack_88;
    param_1[1] = CONCAT17(uStack_79,uStack_80);
    *(ulong *)((long)param_1 + 0xf) = CONCAT71(uStack_78,uStack_79);
    *(undefined1 *)((long)param_1 + 0x17) = uStack_71;
  }
  else {
    lVar5 = *param_4;
    param_1[1] = param_4[1];
    *param_1 = lVar5;
    param_1[2] = param_4[2];
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_98 = FUN_1094a6ca4;
  pcStack_f0 = *ppcVar2;
  uStack_c8 = 0;
  lStack_c0 = 0;
  uStack_b8 = 0x8000000000000000;
  cVar1 = *pcStack_f0;
  pcStack_d0 = pcStack_f0;
  plStack_b0 = param_4;
  plStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (cVar1 == '\x01') {
    uVar4 = *(undefined8 *)(pcStack_f0 + 8);
    FUN_1093793a4();
    pcStack_f0 = *ppcVar2;
    cVar1 = *pcStack_f0;
    uStack_c8 = uVar4;
LAB_1094a6d1c:
    lStack_e8 = 0;
    lStack_e0 = 0;
    uStack_d8 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_e8 = *(long *)(pcStack_f0 + 8) + 8;
      goto LAB_1094a6d60;
    }
    if (cVar1 != '\x02') {
      uStack_d8 = 1;
      goto LAB_1094a6d60;
    }
    lStack_e0 = *(long *)(*(long *)(pcStack_f0 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_b8 = 1;
      goto LAB_1094a6d1c;
    }
    lStack_e0 = *(long *)(*(long *)(pcStack_f0 + 8) + 8);
    lStack_c0 = lStack_e0;
  }
  uStack_d8 = 0x8000000000000000;
  lStack_e8 = 0;
LAB_1094a6d60:
  ppcVar2 = &pcStack_d0;
  FUN_109379420(ppcVar2,&pcStack_f0);
  if (((ulong)ppcVar2 & 1) == 0) {
    FUN_10937b950(&pcStack_d0);
    FUN_10937cf14(&pcStack_f0);
    if (*plVar3 != 0) {
      plVar3[1] = *plVar3;
      __ZdlPv();
    }
    plVar3[1] = lStack_e8;
    *plVar3 = (long)pcStack_f0;
    plVar3[2] = lStack_e0;
  }
  return;
}



/* Entry: 1094a6ca4; end: 1094a70a7;  */

void FUN_1094a6ca4(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  pcStack_60 = (char *)*param_1;
  uStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0x8000000000000000;
  cVar1 = *pcStack_60;
  pcStack_40 = pcStack_60;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_60 + 8);
    FUN_1093793a4();
    pcStack_60 = (char *)*param_1;
    cVar1 = *pcStack_60;
    uStack_38 = uVar2;
LAB_1094a6d1c:
    lStack_58 = 0;
    lStack_50 = 0;
    uStack_48 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_58 = *(long *)(pcStack_60 + 8) + 8;
      goto LAB_1094a6d60;
    }
    if (cVar1 != '\x02') {
      uStack_48 = 1;
      goto LAB_1094a6d60;
    }
    lStack_50 = *(long *)(*(long *)(pcStack_60 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_28 = 1;
      goto LAB_1094a6d1c;
    }
    lStack_50 = *(long *)(*(long *)(pcStack_60 + 8) + 8);
    lStack_30 = lStack_50;
  }
  uStack_48 = 0x8000000000000000;
  lStack_58 = 0;
LAB_1094a6d60:
  ppcVar3 = &pcStack_40;
  FUN_109379420(ppcVar3,&pcStack_60);
  if (((ulong)ppcVar3 & 1) == 0) {
    FUN_10937b950(&pcStack_40);
    FUN_10937cf14(&pcStack_60);
    if (*param_3 != 0) {
      param_3[1] = *param_3;
      __ZdlPv();
    }
    param_3[1] = lStack_58;
    *param_3 = (long)pcStack_60;
    param_3[2] = lStack_50;
  }
  return;
}



/* Entry: 1094a70a8; end: 1094a72db;  */

void FUN_1094a70a8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcStack_70 = (char *)*param_2;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x8000000000000000;
  cVar1 = *pcStack_70;
  pcStack_50 = pcStack_70;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_70 + 8);
    FUN_1093793a4(uVar2,param_3);
    pcStack_70 = (char *)*param_2;
    cVar1 = *pcStack_70;
    uStack_48 = uVar2;
LAB_1094a7130:
    lStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_68 = *(long *)(pcStack_70 + 8) + 8;
      goto LAB_1094a7174;
    }
    if (cVar1 != '\x02') {
      uStack_58 = 1;
      goto LAB_1094a7174;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_38 = 1;
      goto LAB_1094a7130;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
    uStack_40 = uStack_60;
  }
  uStack_58 = 0x8000000000000000;
  lStack_68 = 0;
LAB_1094a7174:
  ppcVar3 = &pcStack_50;
  FUN_109379420(ppcVar3,&pcStack_70);
  if ((int)ppcVar3 == 0) {
    ppcVar3 = &pcStack_50;
    FUN_10937b950(ppcVar3);
    FUN_109380c8c(param_1,ppcVar3);
  }
  else {
    FUN_1094a68cc(param_1,param_4,param_3);
  }
  return;
}



/* Entry: 1094a72dc; end: 1094a73cf;  */

void FUN_1094a72dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_e8 [48];
  undefined8 uStack_b8;
  char cStack_a1;
  undefined8 uStack_a0;
  char cStack_89;
  undefined1 auStack_88 [32];
  long lStack_68;
  undefined8 uStack_58;
  char cStack_41;
  undefined8 uStack_40;
  char cStack_29;
  undefined8 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_28 = *param_2;
  FUN_1094a830c(auStack_88,&uStack_28);
  func_0x0001094a838c(auStack_e8,&uStack_28);
  while( true ) {
    puVar1 = auStack_88;
    FUN_109379420(puVar1,auStack_e8);
    if ((int)puVar1 != 0) break;
    puVar1 = auStack_88;
    FUN_1094a8400(puVar1);
    func_0x000107c2ac70(param_1,puVar1);
    FUN_109386b30(auStack_88);
    lStack_68 = lStack_68 + 1;
  }
  if (cStack_89 < '\0') {
    __ZdlPv(uStack_a0);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(uStack_b8);
  }
  if (cStack_29 < '\0') {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(uStack_58);
  }
  return;
}



/* Entry: 1094a73d0; end: 1094a74cb;  */

ulong FUN_1094a73d0(ulong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcStack_70 = (char *)*param_2;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x8000000000000000;
  cVar1 = *pcStack_70;
  pcStack_50 = pcStack_70;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_70 + 8);
    FUN_1093793a4();
    pcStack_70 = (char *)*param_2;
    cVar1 = *pcStack_70;
    uStack_48 = uVar2;
LAB_1094a744c:
    lStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_68 = *(long *)(pcStack_70 + 8) + 8;
      goto LAB_1094a7490;
    }
    if (cVar1 != '\x02') {
      uStack_58 = 1;
      goto LAB_1094a7490;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_38 = 1;
      goto LAB_1094a744c;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
    uStack_40 = uStack_60;
  }
  uStack_58 = 0x8000000000000000;
  lStack_68 = 0;
LAB_1094a7490:
  ppcVar3 = &pcStack_50;
  FUN_109379420(ppcVar3,&pcStack_70);
  if (((ulong)ppcVar3 & 1) == 0) {
    FUN_10937b950(&pcStack_50);
    FUN_10938d050();
    param_1 = (ulong)pcStack_70 & 0xffffffff;
  }
  return param_1;
}



/* Entry: 1094a74cc; end: 1094a75e7;  */

void FUN_1094a74cc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcStack_70 = (char *)*param_2;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x8000000000000000;
  cVar1 = *pcStack_70;
  pcStack_50 = pcStack_70;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_70 + 8);
    FUN_1093793a4();
    pcStack_70 = (char *)*param_2;
    cVar1 = *pcStack_70;
    uStack_48 = uVar2;
LAB_1094a754c:
    lStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_68 = *(long *)(pcStack_70 + 8) + 8;
      goto LAB_1094a7590;
    }
    if (cVar1 != '\x02') {
      uStack_58 = 1;
      goto LAB_1094a7590;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_38 = 1;
      goto LAB_1094a754c;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
    uStack_40 = uStack_60;
  }
  uStack_58 = 0x8000000000000000;
  lStack_68 = 0;
LAB_1094a7590:
  ppcVar3 = &pcStack_50;
  FUN_109379420(ppcVar3,&pcStack_70);
  if ((int)ppcVar3 == 0) {
    FUN_10937b950(&pcStack_50);
    FUN_1094a87f4(&pcStack_70);
  }
  else {
    lStack_68 = param_4[1];
    pcStack_70 = (char *)*param_4;
    uStack_60 = param_4[2];
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
  }
  param_1[1] = lStack_68;
  *param_1 = pcStack_70;
  param_1[2] = uStack_60;
  return;
}



/* Entry: 1094a75e8; end: 1094a775b;  */

void FUN_1094a75e8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char acStack_98 [24];
  char *pcStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pcStack_80 = (char *)*param_2;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x8000000000000000;
  cVar1 = *pcStack_80;
  pcStack_60 = pcStack_80;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_80 + 8);
    FUN_1093793a4(uVar2,param_3);
    pcStack_80 = (char *)*param_2;
    cVar1 = *pcStack_80;
    uStack_58 = uVar2;
LAB_1094a7678:
    lStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_78 = *(long *)(pcStack_80 + 8) + 8;
      goto LAB_1094a76bc;
    }
    if (cVar1 != '\x02') {
      uStack_68 = 1;
      goto LAB_1094a76bc;
    }
    uStack_70 = *(undefined8 *)(*(long *)(pcStack_80 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_48 = 1;
      goto LAB_1094a7678;
    }
    uStack_70 = *(undefined8 *)(*(long *)(pcStack_80 + 8) + 8);
    uStack_50 = uStack_70;
  }
  uStack_68 = 0x8000000000000000;
  lStack_78 = 0;
LAB_1094a76bc:
  ppcVar3 = &pcStack_60;
  FUN_109379420(ppcVar3,&pcStack_80);
  if ((int)ppcVar3 == 0) {
    FUN_10937b950(&pcStack_60);
    FUN_10937c260(param_1);
  }
  else {
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    FUN_1094a9128(acStack_98,*param_5,param_5[1],(param_5[1] - *param_5 >> 3) * -0x5555555555555555)
    ;
    FUN_1094a8f9c(param_1,param_4,param_3,acStack_98);
    pcStack_80 = acStack_98;
    func_0x000104c607c8(&pcStack_80);
  }
  return;
}



/* Entry: 1094a775c; end: 1094a7877;  */

void FUN_1094a775c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcStack_70 = (char *)*param_1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x8000000000000000;
  cVar1 = *pcStack_70;
  pcStack_50 = pcStack_70;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_70 + 8);
    FUN_1093793a4(uVar2,param_2);
    pcStack_70 = (char *)*param_1;
    cVar1 = *pcStack_70;
    uStack_48 = uVar2;
LAB_1094a77e4:
    lStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_68 = *(long *)(pcStack_70 + 8) + 8;
      goto LAB_1094a7828;
    }
    if (cVar1 != '\x02') {
      uStack_58 = 1;
      goto LAB_1094a7828;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_38 = 1;
      goto LAB_1094a77e4;
    }
    uStack_60 = *(undefined8 *)(*(long *)(pcStack_70 + 8) + 8);
    uStack_40 = uStack_60;
  }
  uStack_58 = 0x8000000000000000;
  lStack_68 = 0;
LAB_1094a7828:
  ppcVar3 = &pcStack_50;
  FUN_109379420(ppcVar3,&pcStack_70);
  if (((ulong)ppcVar3 & 1) == 0) {
    FUN_10937b950(&pcStack_50);
    FUN_10937ba88();
    *param_4 = pcStack_70._0_4_;
  }
  else {
    FUN_1094a9268(param_3,param_2,param_4);
  }
  return;
}



/* Entry: 1094a7878; end: 1094a78f3;  */

undefined8 * FUN_1094a7878(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1094a78f4; end: 1094a78f7;  */

long * FUN_1094a78f4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
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



/* Entry: 1094a78f8; end: 1094a7d67;  */

void FUN_1094a78f8(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x23;
  long lVar16;
  
  uRam0000000113732e30 = 0;
  lRam0000000113732e28 = 0;
  uRam0000000113732e40 = 0;
  plRam0000000113732e38 = (long *)0x0;
  fRam0000000113732e48 = 1.0;
  if (param_2 != 0) {
    plVar1 = param_1 + param_2 * 4;
    do {
      uVar9 = 0x113732e28;
      func_0x000107c31944(0x113732e28,param_1);
      uVar10 = uRam0000000113732e30;
      if (uRam0000000113732e30 != 0) {
        uVar15 = uRam0000000113732e30 - 1;
        if ((uRam0000000113732e30 & uVar15) == 0) {
          unaff_x23 = uVar15 & uVar9;
        }
        else {
          unaff_x23 = uVar9;
          if (uRam0000000113732e30 <= uVar9) {
            uVar7 = 0;
            if (uRam0000000113732e30 != 0) {
              uVar7 = uVar9 / uRam0000000113732e30;
            }
            unaff_x23 = uVar9 - uVar7 * uRam0000000113732e30;
          }
        }
        plVar6 = *(long **)(lRam0000000113732e28 + unaff_x23 * 8);
        if (plVar6 != (long *)0x0) {
          for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            uVar7 = plVar6[1];
            if (uVar7 == uVar9) {
              uVar7 = 0x113732e28;
              func_0x000104c4fbc4(0x113732e28,plVar6 + 2,param_1);
              if ((uVar7 & 1) != 0) goto LAB_1094a7cb0;
            }
            else {
              if ((uVar10 & uVar15) == 0) {
                uVar7 = uVar7 & uVar15;
              }
              else if (uVar10 <= uVar7) {
                uVar8 = 0;
                if (uVar10 != 0) {
                  uVar8 = uVar7 / uVar10;
                }
                uVar7 = uVar7 - uVar8 * uVar10;
              }
              if (uVar7 != unaff_x23) break;
            }
          }
        }
      }
      plVar6 = (long *)0x30;
      __Znwm();
      *plVar6 = 0;
      plVar6[1] = uVar9;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        func_0x000107c3192c(plVar6 + 2,*param_1,param_1[1]);
      }
      else {
        lVar16 = param_1[1];
        lVar5 = *param_1;
        plVar6[4] = param_1[2];
        plVar6[3] = lVar16;
        plVar6[2] = lVar5;
      }
      *(int *)(plVar6 + 5) = (int)param_1[3];
      if ((uVar10 == 0) ||
         (fRam0000000113732e48 * (float)uVar10 < (float)(uRam0000000113732e40 + 1))) {
        uVar15 = 1;
        if (2 < uVar10) {
          uVar15 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar15 = uVar15 | uVar10 << 1;
        uVar10 = (ulong)((float)(uRam0000000113732e40 + 1) / fRam0000000113732e48);
        if (uVar15 <= uVar10) {
          uVar15 = uVar10;
        }
        if (uVar15 - 1 == 0) {
          uVar15 = 2;
        }
        else if ((uVar15 & uVar15 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        uVar7 = uRam0000000113732e30;
        if (uRam0000000113732e30 < uVar15) {
LAB_1094a7ab4:
          if (uVar15 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1094a7d28);
            (*pcVar4)();
          }
          lVar5 = uVar15 << 3;
          __Znwm();
          bVar2 = lRam0000000113732e28 != 0;
          lRam0000000113732e28 = lVar5;
          if (bVar2) {
            __ZdlPv();
          }
          uVar10 = 0;
          uRam0000000113732e30 = uVar15;
          do {
            *(undefined8 *)(lRam0000000113732e28 + uVar10 * 8) = 0;
            plVar11 = plRam0000000113732e38;
            uVar10 = uVar10 + 1;
          } while (uVar15 != uVar10);
          uVar10 = uVar15;
          if (plRam0000000113732e38 != (long *)0x0) {
            uVar7 = plRam0000000113732e38[1];
            uVar8 = uVar15 - 1;
            if ((uVar15 & uVar8) == 0) {
              uVar7 = uVar7 & uVar8;
            }
            else if (uVar15 <= uVar7) {
              uVar14 = 0;
              if (uVar15 != 0) {
                uVar14 = uVar7 / uVar15;
              }
              uVar7 = uVar7 - uVar14 * uVar15;
            }
            *(undefined8 *)(lRam0000000113732e28 + uVar7 * 8) = 0x113732e38;
            plVar12 = (long *)*plVar11;
            lVar5 = lRam0000000113732e28;
            while (lRam0000000113732e28 = lVar5, plVar12 != (long *)0x0) {
              uVar14 = plVar12[1];
              if ((uVar15 & uVar8) == 0) {
                uVar14 = uVar14 & uVar8;
              }
              else if (uVar15 <= uVar14) {
                uVar3 = 0;
                if (uVar15 != 0) {
                  uVar3 = uVar14 / uVar15;
                }
                uVar14 = uVar14 - uVar3 * uVar15;
              }
              plVar13 = plVar12;
              if (uVar14 != uVar7) {
                if (*(long *)(lVar5 + uVar14 * 8) == 0) {
                  *(long **)(lVar5 + uVar14 * 8) = plVar11;
                  uVar7 = uVar14;
                }
                else {
                  *plVar11 = *plVar12;
                  *plVar12 = **(long **)(lVar5 + uVar14 * 8);
                  **(undefined8 **)(lVar5 + uVar14 * 8) = plVar12;
                  plVar13 = plVar11;
                }
              }
              lVar5 = lRam0000000113732e28;
              plVar11 = plVar13;
              plVar12 = (long *)*plVar13;
            }
          }
        }
        else {
          uVar10 = uRam0000000113732e30;
          if (uVar15 < uRam0000000113732e30) {
            uVar10 = (ulong)((float)uRam0000000113732e40 / fRam0000000113732e48);
            if ((uRam0000000113732e30 < 3) ||
               ((uRam0000000113732e30 & uRam0000000113732e30 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar10) {
              uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
            }
            lVar5 = lRam0000000113732e28;
            if (uVar15 <= uVar10) {
              uVar15 = uVar10;
            }
            uVar10 = uRam0000000113732e30;
            if (uVar15 < uVar7) {
              if (uVar15 != 0) goto LAB_1094a7ab4;
              lRam0000000113732e28 = 0;
              if (lVar5 != 0) {
                __ZdlPv();
              }
              uRam0000000113732e30 = 0;
              uVar10 = 0;
            }
          }
        }
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x23 = uVar10 - 1 & uVar9;
        }
        else {
          unaff_x23 = uVar9;
          if (uVar10 <= uVar9) {
            uVar15 = 0;
            if (uVar10 != 0) {
              uVar15 = uVar9 / uVar10;
            }
            unaff_x23 = uVar9 - uVar15 * uVar10;
          }
        }
      }
      lVar5 = lRam0000000113732e28;
      plVar11 = *(long **)(lRam0000000113732e28 + unaff_x23 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar6 = (long)plRam0000000113732e38;
        plRam0000000113732e38 = plVar6;
        *(undefined8 *)(lVar5 + unaff_x23 * 8) = 0x113732e38;
        if (*plVar6 != 0) {
          uVar9 = *(ulong *)(*plVar6 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar9 = uVar9 & uVar10 - 1;
          }
          else if (uVar10 <= uVar9) {
            uVar15 = 0;
            if (uVar10 != 0) {
              uVar15 = uVar9 / uVar10;
            }
            uVar9 = uVar9 - uVar15 * uVar10;
          }
          *(long **)(lRam0000000113732e28 + uVar9 * 8) = plVar6;
        }
      }
      else {
        *plVar6 = *plVar11;
        *plVar11 = (long)plVar6;
      }
      uRam0000000113732e40 = uRam0000000113732e40 + 1;
LAB_1094a7cb0:
      param_1 = param_1 + 4;
    } while (param_1 != plVar1);
  }
  return;
}



/* Entry: 1094a7d68; end: 1094a7d9b;  */

void FUN_1094a7d68(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1094a7d9c; end: 1094a7dff;  */

long * FUN_1094a7d9c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
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



/* Entry: 1094a7e00; end: 1094a7e03;  */

long * FUN_1094a7e00(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
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



/* Entry: 1094a7e04; end: 1094a8273;  */

void FUN_1094a7e04(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x23;
  long lVar16;
  
  uRam0000000113732e58 = 0;
  lRam0000000113732e50 = 0;
  uRam0000000113732e68 = 0;
  plRam0000000113732e60 = (long *)0x0;
  fRam0000000113732e70 = 1.0;
  if (param_2 != 0) {
    plVar1 = param_1 + param_2 * 4;
    do {
      uVar9 = 0x113732e50;
      func_0x000107c31944(0x113732e50,param_1);
      uVar10 = uRam0000000113732e58;
      if (uRam0000000113732e58 != 0) {
        uVar15 = uRam0000000113732e58 - 1;
        if ((uRam0000000113732e58 & uVar15) == 0) {
          unaff_x23 = uVar15 & uVar9;
        }
        else {
          unaff_x23 = uVar9;
          if (uRam0000000113732e58 <= uVar9) {
            uVar7 = 0;
            if (uRam0000000113732e58 != 0) {
              uVar7 = uVar9 / uRam0000000113732e58;
            }
            unaff_x23 = uVar9 - uVar7 * uRam0000000113732e58;
          }
        }
        plVar6 = *(long **)(lRam0000000113732e50 + unaff_x23 * 8);
        if (plVar6 != (long *)0x0) {
          for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            uVar7 = plVar6[1];
            if (uVar7 == uVar9) {
              uVar7 = 0x113732e50;
              func_0x000104c4fbc4(0x113732e50,plVar6 + 2,param_1);
              if ((uVar7 & 1) != 0) goto LAB_1094a81bc;
            }
            else {
              if ((uVar10 & uVar15) == 0) {
                uVar7 = uVar7 & uVar15;
              }
              else if (uVar10 <= uVar7) {
                uVar8 = 0;
                if (uVar10 != 0) {
                  uVar8 = uVar7 / uVar10;
                }
                uVar7 = uVar7 - uVar8 * uVar10;
              }
              if (uVar7 != unaff_x23) break;
            }
          }
        }
      }
      plVar6 = (long *)0x30;
      __Znwm();
      *plVar6 = 0;
      plVar6[1] = uVar9;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        func_0x000107c3192c(plVar6 + 2,*param_1,param_1[1]);
      }
      else {
        lVar16 = param_1[1];
        lVar5 = *param_1;
        plVar6[4] = param_1[2];
        plVar6[3] = lVar16;
        plVar6[2] = lVar5;
      }
      *(char *)(plVar6 + 5) = (char)param_1[3];
      if ((uVar10 == 0) ||
         (fRam0000000113732e70 * (float)uVar10 < (float)(uRam0000000113732e68 + 1))) {
        uVar15 = 1;
        if (2 < uVar10) {
          uVar15 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar15 = uVar15 | uVar10 << 1;
        uVar10 = (ulong)((float)(uRam0000000113732e68 + 1) / fRam0000000113732e70);
        if (uVar15 <= uVar10) {
          uVar15 = uVar10;
        }
        if (uVar15 - 1 == 0) {
          uVar15 = 2;
        }
        else if ((uVar15 & uVar15 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        uVar7 = uRam0000000113732e58;
        if (uRam0000000113732e58 < uVar15) {
LAB_1094a7fc0:
          if (uVar15 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1094a8234);
            (*pcVar4)();
          }
          lVar5 = uVar15 << 3;
          __Znwm();
          bVar2 = lRam0000000113732e50 != 0;
          lRam0000000113732e50 = lVar5;
          if (bVar2) {
            __ZdlPv();
          }
          uVar10 = 0;
          uRam0000000113732e58 = uVar15;
          do {
            *(undefined8 *)(lRam0000000113732e50 + uVar10 * 8) = 0;
            plVar11 = plRam0000000113732e60;
            uVar10 = uVar10 + 1;
          } while (uVar15 != uVar10);
          uVar10 = uVar15;
          if (plRam0000000113732e60 != (long *)0x0) {
            uVar7 = plRam0000000113732e60[1];
            uVar8 = uVar15 - 1;
            if ((uVar15 & uVar8) == 0) {
              uVar7 = uVar7 & uVar8;
            }
            else if (uVar15 <= uVar7) {
              uVar14 = 0;
              if (uVar15 != 0) {
                uVar14 = uVar7 / uVar15;
              }
              uVar7 = uVar7 - uVar14 * uVar15;
            }
            *(undefined8 *)(lRam0000000113732e50 + uVar7 * 8) = 0x113732e60;
            plVar12 = (long *)*plVar11;
            lVar5 = lRam0000000113732e50;
            while (lRam0000000113732e50 = lVar5, plVar12 != (long *)0x0) {
              uVar14 = plVar12[1];
              if ((uVar15 & uVar8) == 0) {
                uVar14 = uVar14 & uVar8;
              }
              else if (uVar15 <= uVar14) {
                uVar3 = 0;
                if (uVar15 != 0) {
                  uVar3 = uVar14 / uVar15;
                }
                uVar14 = uVar14 - uVar3 * uVar15;
              }
              plVar13 = plVar12;
              if (uVar14 != uVar7) {
                if (*(long *)(lVar5 + uVar14 * 8) == 0) {
                  *(long **)(lVar5 + uVar14 * 8) = plVar11;
                  uVar7 = uVar14;
                }
                else {
                  *plVar11 = *plVar12;
                  *plVar12 = **(long **)(lVar5 + uVar14 * 8);
                  **(undefined8 **)(lVar5 + uVar14 * 8) = plVar12;
                  plVar13 = plVar11;
                }
              }
              lVar5 = lRam0000000113732e50;
              plVar11 = plVar13;
              plVar12 = (long *)*plVar13;
            }
          }
        }
        else {
          uVar10 = uRam0000000113732e58;
          if (uVar15 < uRam0000000113732e58) {
            uVar10 = (ulong)((float)uRam0000000113732e68 / fRam0000000113732e70);
            if ((uRam0000000113732e58 < 3) ||
               ((uRam0000000113732e58 & uRam0000000113732e58 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar10) {
              uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
            }
            lVar5 = lRam0000000113732e50;
            if (uVar15 <= uVar10) {
              uVar15 = uVar10;
            }
            uVar10 = uRam0000000113732e58;
            if (uVar15 < uVar7) {
              if (uVar15 != 0) goto LAB_1094a7fc0;
              lRam0000000113732e50 = 0;
              if (lVar5 != 0) {
                __ZdlPv();
              }
              uRam0000000113732e58 = 0;
              uVar10 = 0;
            }
          }
        }
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x23 = uVar10 - 1 & uVar9;
        }
        else {
          unaff_x23 = uVar9;
          if (uVar10 <= uVar9) {
            uVar15 = 0;
            if (uVar10 != 0) {
              uVar15 = uVar9 / uVar10;
            }
            unaff_x23 = uVar9 - uVar15 * uVar10;
          }
        }
      }
      lVar5 = lRam0000000113732e50;
      plVar11 = *(long **)(lRam0000000113732e50 + unaff_x23 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar6 = (long)plRam0000000113732e60;
        plRam0000000113732e60 = plVar6;
        *(undefined8 *)(lVar5 + unaff_x23 * 8) = 0x113732e60;
        if (*plVar6 != 0) {
          uVar9 = *(ulong *)(*plVar6 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar9 = uVar9 & uVar10 - 1;
          }
          else if (uVar10 <= uVar9) {
            uVar15 = 0;
            if (uVar10 != 0) {
              uVar15 = uVar9 / uVar10;
            }
            uVar9 = uVar9 - uVar15 * uVar10;
          }
          *(long **)(lRam0000000113732e50 + uVar9 * 8) = plVar6;
        }
      }
      else {
        *plVar6 = *plVar11;
        *plVar11 = (long)plVar6;
      }
      uRam0000000113732e68 = uRam0000000113732e68 + 1;
LAB_1094a81bc:
      param_1 = param_1 + 4;
    } while (param_1 != plVar1);
  }
  return;
}



/* Entry: 1094a8274; end: 1094a82a7;  */

void FUN_1094a8274(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1094a82a8; end: 1094a830b;  */

long * FUN_1094a82a8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
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



/* Entry: 1094a830c; end: 1094a83ff;  */

void FUN_1094a830c(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  pcStack_30 = (char *)*param_2;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0x8000000000000000;
  cVar1 = *pcStack_30;
  if (cVar1 == '\0') {
    uStack_18 = 1;
  }
  else if (cVar1 == '\x02') {
    uStack_20 = **(undefined8 **)(pcStack_30 + 8);
  }
  else if (cVar1 == '\x01') {
    uStack_28 = **(undefined8 **)(pcStack_30 + 8);
  }
  else {
    uStack_18 = 0;
  }
  FUN_1094a84ac(param_1,&pcStack_30);
  return;
}



/* Entry: 1094a8400; end: 1094a84ab;  */

undefined8 * FUN_1094a8400(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (*(char *)*param_1 != '\x01') {
    if (*(char *)*param_1 == '\x02') {
      if (param_1[4] != param_1[5]) {
        FUN_1094a850c(param_1 + 6);
        param_1[5] = param_1[4];
      }
      param_1 = param_1 + 6;
    }
    else {
      param_1 = param_1 + 9;
    }
    return param_1;
  }
  if (*(char *)*param_1 == '\x01') {
    return (undefined8 *)(param_1[1] + 0x20);
  }
  uVar2 = 0x20;
  ___cxa_allocate_exception(0x20);
  func_0x000107c31940(auStack_48,&UNK_10f56ea6e);
  FUN_10937951c(uVar2,0xcf,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4550,FUN_10937964c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094a85ec);
  (*pcVar1)();
}



/* Entry: 1094a84ac; end: 1094a850b;  */

undefined8 * FUN_1094a84ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = param_2[1];
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = uVar1;
  func_0x000107c31940(param_1 + 6,&DAT_10f62b058);
  func_0x000107c31940(param_1 + 9,"");
  return param_1;
}



/* Entry: 1094a850c; end: 1094a855b;  */

void FUN_1094a850c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  __ZNSt3__19to_stringEm(&uStack_38,param_2);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  return;
}



/* Entry: 1094a855c; end: 1094a8623;  */

long FUN_1094a855c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (*(char *)*param_1 == '\x01') {
    return param_1[1] + 0x20;
  }
  uVar2 = 0x20;
  ___cxa_allocate_exception(0x20);
  func_0x000107c31940(auStack_48,&UNK_10f56ea6e);
  FUN_10937951c(uVar2,0xcf,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4550,FUN_10937964c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094a85ec);
  (*pcVar1)();
}



/* Entry: 1094a8624; end: 1094a87f3;  */

void FUN_1094a8624(undefined8 param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      __ZdlPv(param_2[4]);
    }
    if (*param_2 != 0) {
      param_2[1] = *param_2;
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 1094a87f4; end: 1094a883b;  */

void FUN_1094a87f4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1094a883c(param_2,param_1);
  return;
}



/* Entry: 1094a883c; end: 1094a8937;  */

void FUN_1094a883c(byte *param_1,long *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte **ppbVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  byte *pbStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  if (*param_1 != 2) {
    uVar3 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_10937bcec(param_1);
    func_0x000107c31940(&pbStack_60,param_1);
    FUN_10928a5e0(&uStack_48,&UNK_10f56748c,&pbStack_60);
    FUN_10937bbbc(uVar3,0x12e,&uStack_48);
    ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1094a88e0);
    (*pcVar2)();
  }
  lStack_40 = 0;
  lStack_38 = 0;
  bVar1 = *param_1;
  uVar6 = (ulong)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar6 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
    }
    else if (bVar1 == 2) {
      uVar6 = (*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8) >> 4;
    }
    else {
      uVar6 = 1;
    }
  }
  func_0x0001073b504c(&lStack_40,uVar6);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x8000000000000000;
  bVar1 = *param_1;
  lVar7 = lStack_38;
  pbStack_80 = param_1;
  pbStack_60 = param_1;
  if (bVar1 == 0) {
    uStack_48 = 1;
  }
  else {
    if (bVar1 == 2) {
      uStack_50 = **(undefined8 **)(param_1 + 8);
      puStack_78 = (undefined8 *)0x0;
      uStack_68 = 0x8000000000000000;
      uStack_70 = (*(undefined8 **)(param_1 + 8))[1];
      goto LAB_1094a8a24;
    }
    if (bVar1 == 1) {
      puStack_78 = *(undefined8 **)(param_1 + 8) + 1;
      uStack_58 = **(undefined8 **)(param_1 + 8);
      uStack_68 = 0x8000000000000000;
      uStack_70 = 0;
      goto LAB_1094a8a24;
    }
    uStack_48 = 0;
  }
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_68 = 1;
LAB_1094a8a24:
  while( true ) {
    ppbVar4 = &pbStack_60;
    FUN_10937c708(ppbVar4,&pbStack_80);
    if (((ulong)ppbVar4 & 1) != 0) break;
    FUN_10937c560(&pbStack_60);
    FUN_10938d050();
    plVar5 = &lStack_40;
    func_0x000104c43fb8(plVar5,lVar7,&stack0xffffffffffffffdc);
    FUN_10937c698(&pbStack_60);
    lVar7 = (long)plVar5 + 4;
  }
  if (*param_2 != 0) {
    param_2[1] = *param_2;
    __ZdlPv();
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_2[1] = lStack_38;
  *param_2 = lStack_40;
  param_2[2] = 0;
  return;
}



/* Entry: 1094a8938; end: 1094a8ac3;  */

void FUN_1094a8938(byte *param_1,long *param_2)

{
  byte bVar1;
  byte **ppbVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  byte *pbStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined1 auStack_24 [4];
  
  lStack_40 = 0;
  lStack_38 = 0;
  lStack_30 = 0;
  bVar1 = *param_1;
  uVar4 = (ulong)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar4 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
    }
    else if (bVar1 == 2) {
      uVar4 = (*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8) >> 4;
    }
    else {
      uVar4 = 1;
    }
  }
  func_0x0001073b504c(&lStack_40,uVar4);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x8000000000000000;
  bVar1 = *param_1;
  lVar5 = lStack_38;
  pbStack_80 = param_1;
  pbStack_60 = param_1;
  if (bVar1 == 0) {
    uStack_48 = 1;
  }
  else {
    if (bVar1 == 2) {
      uStack_50 = **(undefined8 **)(param_1 + 8);
      puStack_78 = (undefined8 *)0x0;
      uStack_68 = 0x8000000000000000;
      uStack_70 = (*(undefined8 **)(param_1 + 8))[1];
      goto LAB_1094a8a24;
    }
    if (bVar1 == 1) {
      puStack_78 = *(undefined8 **)(param_1 + 8) + 1;
      uStack_58 = **(undefined8 **)(param_1 + 8);
      uStack_68 = 0x8000000000000000;
      uStack_70 = 0;
      goto LAB_1094a8a24;
    }
    uStack_48 = 0;
  }
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_68 = 1;
LAB_1094a8a24:
  while( true ) {
    ppbVar2 = &pbStack_60;
    FUN_10937c708(ppbVar2,&pbStack_80);
    if (((ulong)ppbVar2 & 1) != 0) break;
    FUN_10937c560(&pbStack_60);
    FUN_10938d050();
    plVar3 = &lStack_40;
    func_0x000104c43fb8(plVar3,lVar5,auStack_24);
    FUN_10937c698(&pbStack_60);
    lVar5 = (long)plVar3 + 4;
  }
  if (*param_2 != 0) {
    param_2[1] = *param_2;
    __ZdlPv();
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_2[1] = lStack_38;
  *param_2 = lStack_40;
  param_2[2] = lStack_30;
  return;
}



/* Entry: 1094a8ac4; end: 1094a8d3f;  */

void FUN_1094a8ac4(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x24;
  ulong uVar7;
  
  plVar5 = param_1;
  func_0x000107c31944();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x24 = (long *)(uVar7 & (ulong)plVar5);
    }
    else {
      unaff_x24 = plVar5;
      if (plVar6 <= plVar5) {
        uVar4 = 0;
        if (plVar6 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)plVar5 - uVar4 * (long)plVar6);
      }
    }
    plVar1 = *(long **)(*param_1 + (long)unaff_x24 * 8);
    if (plVar1 != (long *)0x0) {
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        plVar2 = (long *)plVar1[1];
        if (plVar2 == plVar5) {
          plVar2 = param_1;
          func_0x000104c4fbc4(param_1,plVar1 + 2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            return;
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar2 = (long *)((ulong)plVar2 & uVar7);
          }
          else if (plVar6 <= plVar2) {
            uVar4 = 0;
            if (plVar6 != (long *)0x0) {
              uVar4 = (ulong)plVar2 / (ulong)plVar6;
            }
            plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar6);
          }
          if (plVar2 != unaff_x24) break;
        }
      }
    }
  }
  plVar1 = (long *)0x38;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = (long)plVar5;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar1 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar1[3] = param_3[1];
    plVar1[2] = lVar3;
    plVar1[4] = param_3[2];
  }
  lVar3 = param_3[3];
  plVar1[6] = param_3[4];
  plVar1[5] = lVar3;
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar7 = 1;
    if ((long *)0x2 < plVar6) {
      uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar6 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    FUN_1094a8d40(param_1,uVar7);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar6 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x24 = plVar5;
      if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
    *(long **)(lVar3 + (long)unaff_x24 * 8) = plVar5;
    if (*plVar1 != 0) {
      plVar5 = *(long **)(*plVar1 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = plVar1;
    }
  }
  else {
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1094a8d40; end: 1094a8e0f;  */

void FUN_1094a8d40(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_1094a8d88:
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
        func_0x000104c4f740();
        if ((char)param_1[1] == '\x01') {
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
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_1094a8d88;
  }
  return;
}



/* Entry: 1094a8e10; end: 1094a8f9b;  */

void FUN_1094a8e10(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
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
      func_0x000104c4f740();
      if ((char)param_1[1] == '\x01') {
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
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 1094a8f9c; end: 1094a9127;  */

void FUN_1094a8f9c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,char ****param_4)

{
  char cVar1;
  char ***pppcVar2;
  char ****ppppcVar3;
  char ****ppppcStack_90;
  char ***pppcStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  char ***pppcStack_70;
  char ***pppcStack_68;
  char *pcStack_60;
  char ***pppcStack_58;
  char **ppcStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  ppppcStack_90 = (char ****)*param_2;
  ppcStack_50 = (char **)0x0;
  pcStack_48 = (char *)0x0;
  uStack_40 = 0x8000000000000000;
  cVar1 = *(char *)ppppcStack_90;
  pppcStack_58 = (char ***)ppppcStack_90;
  if (cVar1 == '\x01') {
    pppcVar2 = ppppcStack_90[1];
    FUN_1093793a4();
    ppppcStack_90 = (char ****)*param_2;
    cVar1 = *(char *)ppppcStack_90;
    ppcStack_50 = (char **)pppcVar2;
LAB_1094a9024:
    pppcStack_88 = (char ***)0x0;
    pcStack_80 = (char *)0x0;
    uStack_78 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      pppcStack_88 = ppppcStack_90[1] + 1;
      goto LAB_1094a9070;
    }
    if (cVar1 != '\x02') {
      uStack_78 = 1;
      goto LAB_1094a9070;
    }
    pcStack_80 = (char *)ppppcStack_90[1][1];
  }
  else {
    if (cVar1 != '\x02') {
      uStack_40 = 1;
      goto LAB_1094a9024;
    }
    pcStack_80 = (char *)ppppcStack_90[1][1];
    pcStack_48 = pcStack_80;
  }
  uStack_78 = 0x8000000000000000;
  pppcStack_88 = (char ***)0x0;
LAB_1094a9070:
  pcStack_60 = (char *)0x0;
  pppcStack_68 = (char ***)0x0;
  pppcStack_70 = (char ***)0x0;
  ppppcVar3 = &pppcStack_58;
  FUN_109379420(ppppcVar3,&ppppcStack_90);
  if ((int)ppppcVar3 == 0) {
    FUN_10937b950(&pppcStack_58);
    FUN_10937c260(&ppppcStack_90);
    param_4 = &pppcStack_70;
    func_0x000107c3193c(&pppcStack_70);
    pppcStack_68 = pppcStack_88;
    pppcStack_70 = (char ***)ppppcStack_90;
    pcStack_60 = pcStack_80;
    pppcStack_88 = (char ***)0x0;
    pcStack_80 = (char *)0x0;
    ppppcStack_90 = (char ****)0x0;
    puStack_38 = (undefined1 *)&ppppcStack_90;
    func_0x000104c607c8(&puStack_38);
    ppppcVar3 = (char ****)pppcStack_70;
    pppcVar2 = pppcStack_68;
  }
  else {
    ppppcVar3 = (char ****)*param_4;
    pppcVar2 = param_4[1];
  }
  param_1[1] = pppcVar2;
  *param_1 = ppppcVar3;
  param_1[2] = param_4[2];
  *param_4 = (char ***)0x0;
  param_4[1] = (char ***)0x0;
  param_4[2] = (char ***)0x0;
  ppppcStack_90 = &pppcStack_70;
  func_0x000104c607c8(&ppppcStack_90);
  return;
}



/* Entry: 1094a9128; end: 1094a91ab;  */

void FUN_1094a9128(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x000104c60728(param_1,param_4);
    lVar1 = param_1;
    FUN_1094a91ac(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 1094a91ac; end: 1094a9267;  */

undefined8 *
FUN_1094a91ac(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    param_4 = puStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_1093798f4(&uStack_60);
  return param_4;
}



/* Entry: 1094a9268; end: 1094a935b;  */

void FUN_1094a9268(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pcStack_60 = (char *)*param_1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x8000000000000000;
  cVar1 = *pcStack_60;
  pcStack_40 = pcStack_60;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_60 + 8);
    FUN_1093793a4();
    pcStack_60 = (char *)*param_1;
    cVar1 = *pcStack_60;
    uStack_38 = uVar2;
LAB_1094a92e0:
    lStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_58 = *(long *)(pcStack_60 + 8) + 8;
      goto LAB_1094a9324;
    }
    if (cVar1 != '\x02') {
      uStack_48 = 1;
      goto LAB_1094a9324;
    }
    uStack_50 = *(undefined8 *)(*(long *)(pcStack_60 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_28 = 1;
      goto LAB_1094a92e0;
    }
    uStack_50 = *(undefined8 *)(*(long *)(pcStack_60 + 8) + 8);
    uStack_30 = uStack_50;
  }
  uStack_48 = 0x8000000000000000;
  lStack_58 = 0;
LAB_1094a9324:
  ppcVar3 = &pcStack_40;
  FUN_109379420(ppcVar3,&pcStack_60);
  if (((ulong)ppcVar3 & 1) == 0) {
    FUN_10937b950(&pcStack_40);
    FUN_10937ba88();
    *param_3 = pcStack_60._0_4_;
  }
  return;
}



/* Entry: 1094a935c; end: 1094a94eb;  */

void FUN_1094a935c(char *param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char **ppcVar4;
  long lVar5;
  long lVar6;
  char *pcStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = (undefined8 *)0x40;
  __Znwm();
  lVar6 = 0;
  *puVar2 = &UNK_10dfcc7e1;
  puVar2[1] = param_2;
  puVar2[2] = &UNK_10dfcc7e5;
  puVar2[3] = param_2 + 4;
  puVar2[4] = &UNK_10dfcc7ec;
  puVar2[5] = param_2 + 8;
  puVar2[6] = &UNK_10dfcc7f1;
  puVar2[7] = param_2 + 0xc;
  do {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0x8000000000000000;
    cVar1 = *param_1;
    pcStack_70 = param_1;
    if (cVar1 == '\x01') {
      uVar3 = *(undefined8 *)(param_1 + 8);
      FUN_10938ce90(uVar3,(long)puVar2 + lVar6);
      cVar1 = *param_1;
      uStack_68 = uVar3;
LAB_1094a9434:
      lStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0x8000000000000000;
      if (cVar1 == '\x01') {
        lStack_88 = *(long *)(param_1 + 8) + 8;
      }
      else {
        if (cVar1 == '\x02') {
          lVar5 = *(long *)(param_1 + 8);
          goto LAB_1094a9454;
        }
        uStack_78 = 1;
      }
    }
    else {
      if (cVar1 != '\x02') {
        uStack_58 = 1;
        goto LAB_1094a9434;
      }
      lVar5 = *(long *)(param_1 + 8);
      uStack_60 = *(undefined8 *)(lVar5 + 8);
LAB_1094a9454:
      uStack_78 = 0x8000000000000000;
      lStack_88 = 0;
      uStack_80 = *(undefined8 *)(lVar5 + 8);
    }
    ppcVar4 = &pcStack_70;
    pcStack_90 = param_1;
    FUN_10937c708(ppcVar4,&pcStack_90);
    if (((ulong)ppcVar4 & 1) == 0) {
      FUN_10937c560(&pcStack_70);
      FUN_10937ba88();
      **(undefined4 **)((long)puVar2 + lVar6 + 8) = pcStack_90._0_4_;
    }
    lVar6 = lVar6 + 0x10;
    if (lVar6 == 0x40) {
      __ZdlPv(puVar2);
      return;
    }
  } while( true );
}



/* Entry: 1094a94ec; end: 1094a9533;  */

undefined8 FUN_1094a94ec(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 1094a9534; end: 1094a957b;  */

undefined8 FUN_1094a9534(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 1094a957c; end: 1094a95c3;  */

undefined8 FUN_1094a957c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 1094a95c4; end: 1094a963f;  */

undefined8 * FUN_1094a95c4(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uStack_28;
  undefined1 uStack_21;
  
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_110af6e90;
  uStack_28 = param_2;
  FUN_1094afe98(param_1 + 10,&uStack_21,&uStack_28);
  return param_1;
}



/* Entry: 1094a9640; end: 1094a9687;  */

undefined8 * FUN_1094a9640(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af74a8;
  func_0x0001094ae13c(param_1 + 8);
  func_0x0001094ae194(param_1 + 6);
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 1094a9688; end: 1094a9693;  */

void FUN_1094a9688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (*(long *)(param_1 + 0x50) + 0x20);
  return;
}



/* Entry: 1094a9694; end: 1094a9a77;  */

void FUN_1094a9694(long param_1,undefined4 *param_2,long *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  long *plVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x38);
  func_0x0001094b0458(param_1 + 0x218);
  func_0x0001094b04ac(param_1 + 0x240);
  func_0x0001094b0500(param_1 + 0x268);
  puVar1 = (undefined4 *)(param_1 + 0x100);
  if (puVar1 == param_2) goto LAB_1094a97d8;
  if (*(long *)(param_2 + 0xe) != 0) {
    piVar2 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0x138) + 0x14);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(puVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x104) < 1) {
    *puVar1 = *param_2;
LAB_1094a9780:
    if (2 < (int)param_2[1]) goto LAB_1094a97b4;
    *(undefined4 *)(param_1 + 0x104) = param_2[1];
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 2);
    puVar10 = *(undefined8 **)(param_2 + 0x12);
    puVar14 = *(undefined8 **)(param_1 + 0x148);
    *puVar14 = *puVar10;
    puVar14[1] = puVar10[1];
  }
  else {
    lVar9 = 0;
    lVar13 = *(long *)(param_1 + 0x140);
    do {
      *(undefined4 *)(lVar13 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x104));
    *puVar1 = *param_2;
    if (*(int *)(param_1 + 0x104) < 3) goto LAB_1094a9780;
LAB_1094a97b4:
    func_0x000109a84868(puVar1,param_2);
  }
  uVar17 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x110) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x120) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x130) = uVar17;
LAB_1094a97d8:
  plVar3 = (long *)(param_1 + 0x160);
  lVar13 = param_3[1] - *param_3;
  uVar11 = (lVar13 >> 3) * -0x5555555555555555;
  lVar9 = *(long *)(param_1 + 0x160);
  plVar12 = *(long **)(param_1 + 0x168);
  lVar16 = (long)plVar12 - lVar9;
  bVar8 = uVar11 < (ulong)((lVar16 >> 3) * -0x5555555555555555);
  uVar15 = uVar11 + (lVar16 >> 3) * 0x5555555555555555;
  if (bVar8 || uVar15 == 0) {
    if (bVar8) {
      while (plVar6 = plVar12, plVar6 != (long *)(lVar9 + lVar13)) {
        plVar12 = plVar6 + -3;
        if (*plVar12 != 0) {
          plVar6[-2] = *plVar12;
          __ZdlPv();
        }
      }
      *(long **)(param_1 + 0x168) = (long *)(lVar9 + lVar13);
    }
  }
  else if ((ulong)((*(long *)(param_1 + 0x170) - (long)plVar12 >> 3) * -0x5555555555555555) < uVar15
          ) {
    if (0xaaaaaaaaaaaaaaa < uVar11) {
      FUN_1092e30fc();
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1094a9a4c);
      (*pcVar7)();
    }
    lVar9 = *(long *)(param_1 + 0x170) - lVar9 >> 3;
    uVar15 = lVar9 * 0x5555555555555556;
    if (uVar15 < uVar11 || uVar15 + (lVar13 >> 3) * 0x5555555555555555 == 0) {
      uVar15 = uVar11;
    }
    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar15 = 0xaaaaaaaaaaaaaaa;
    }
    plVar12 = plVar3;
    plStack_68 = plVar3;
    FUN_1092e3110();
    lVar9 = (long)plVar12 + lVar16;
    lVar16 = (((lVar13 - lVar16) - 0x18U) / 0x18) * 0x18 + 0x18;
    _bzero(lVar9,lVar16);
    lVar13 = lVar9 - (*(long *)(param_1 + 0x168) - *(long *)(param_1 + 0x160));
    _memcpy(lVar13);
    puStack_88 = *(undefined8 **)(param_1 + 0x160);
    *(long *)(param_1 + 0x160) = lVar13;
    *(long *)(param_1 + 0x168) = lVar9 + lVar16;
    uStack_70 = *(undefined8 *)(param_1 + 0x170);
    *(long **)(param_1 + 0x170) = plVar12 + uVar15 * 3;
    puStack_80 = puStack_88;
    puStack_78 = puStack_88;
    func_0x0001092e3154(&puStack_88);
  }
  else {
    uVar15 = ((lVar13 - lVar16) - 0x18U) / 0x18;
    _bzero(plVar12,uVar15 * 0x18 + 0x18);
    *(long **)(param_1 + 0x168) = plVar12 + uVar15 * 3 + 3;
  }
  lVar9 = *param_3;
  if (param_3[1] != lVar9) {
    uVar15 = 0;
    do {
      plVar12 = (long *)(lVar9 + uVar15 * 0x18);
      puVar10 = (undefined8 *)*plVar12;
      puVar14 = (undefined8 *)plVar12[1];
      uVar11 = (long)puVar14 - (long)puVar10 >> 3;
      if (0x43 < uVar11) {
        uVar11 = 0x44;
      }
      puStack_88 = (undefined8 *)0x0;
      puStack_80 = (undefined8 *)0x0;
      puStack_78 = (undefined8 *)0x0;
      if (puVar14 != puVar10) {
        FUN_1092c6160(&puStack_88,uVar11);
        lVar9 = uVar11 << 3;
        puVar14 = puStack_80;
        do {
          puStack_80 = puVar14 + 1;
          *puVar14 = *puVar10;
          lVar9 = lVar9 + -8;
          puVar14 = puStack_80;
          puVar10 = puVar10 + 1;
        } while (lVar9 != 0);
      }
      plVar12 = (long *)(*plVar3 + uVar15 * 0x18);
      if (*plVar12 != 0) {
        plVar12[1] = *plVar12;
        __ZdlPv();
        *plVar12 = 0;
        plVar12[1] = 0;
        plVar12[2] = 0;
      }
      *plVar12 = (long)puStack_88;
      plVar12[1] = (long)puStack_80;
      plVar12[2] = (long)puStack_78;
      uVar15 = (ulong)((int)uVar15 + 1);
      lVar9 = *param_3;
      uVar11 = (param_3[1] - lVar9 >> 3) * -0x5555555555555555;
    } while (uVar15 <= uVar11 && uVar11 - uVar15 != 0);
  }
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x38);
  return;
}



/* Entry: 1094a9a78; end: 1094aa447;  */

bool FUN_1094a9a78(long param_1,long *param_2,undefined8 *param_3)

{
  long **pplVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  int iStack_1e4;
  long *plStack_178;
  long *plStack_170;
  char cStack_161;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long *plStack_120;
  long *plStack_118;
  undefined1 auStack_108 [16];
  long *plStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long **pplStack_d0;
  long *plStack_c8;
  long **pplStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *(long *)(param_1 + 0x50);
  plVar17 = (long *)*param_3;
  func_0x000107c31940(&plStack_c8,&DAT_10f2ecb66);
  (**(code **)(*plVar17 + 0x10))(&plStack_f8,plVar17,&plStack_c8);
  if (uStack_b8 < 0) {
    __ZdlPv(plStack_c8);
  }
  FUN_109380ad4(auStack_108,plStack_f8);
  uVar2 = *(undefined4 *)(lVar21 + 0x18);
  plVar9 = (long *)0x148;
  __Znwm();
  plVar26 = plVar9 + 1;
  *plVar26 = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_110af6fa8;
  plVar17 = plVar9 + 3;
  FUN_1094a4e20(plVar17,param_3,uVar2);
  plVar9[0x26] = 0;
  plVar9[0x25] = 0;
  plVar9[0x28] = 0;
  plVar9[0x27] = 0;
  plVar10 = (long *)0x70;
  __Znwm();
  plVar10[1] = 0;
  plVar10[2] = 0;
  plVar23 = plVar10 + 3;
  *plVar10 = (long)&PTR_FUN_110af7368;
  FUN_1094b4a60(plVar23,auStack_108);
  plStack_c8 = plVar23;
  pplStack_c0 = (long **)plVar10;
  FUN_1094b05b8(plVar9 + 0x25,&plStack_c8);
  pplVar1 = pplStack_c0;
  if (pplStack_c0 != (long **)0x0) {
    plVar10 = (long *)(pplStack_c0 + 1);
    do {
      lVar16 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 == 0) {
      (**(code **)((long)*pplStack_c0 + 0x10))(pplStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar1);
    }
  }
  func_0x000107c31940(&puStack_f0,&UNK_10f56ec70);
  plStack_150 = (long *)0x0;
  plStack_148 = (long *)0x0;
  lStack_140 = 0;
  FUN_1094a6b30(&plStack_c8,auStack_108,&puStack_f0,&plStack_150);
  if (lStack_140 < 0) {
    __ZdlPv(plStack_150);
  }
  if (uStack_e0._7_1_ < '\0') {
    __ZdlPv(puStack_f0);
  }
  uVar12 = (uint)(char)uStack_b8._7_1_;
  pplVar1 = pplStack_c0;
  if (-1 < (int)uVar12) {
    pplVar1 = (long **)(ulong)uStack_b8._7_1_;
  }
  if (pplVar1 != (long **)0x0) {
    (**(code **)(*(long *)*param_3 + 0x10))(&plStack_178,(long *)*param_3,&plStack_c8);
    FUN_109380ad4(&puStack_f0,plStack_178);
    plVar10 = plStack_178;
    plStack_178 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = (long *)0x60;
    __Znwm();
    plVar10[1] = 0;
    plVar10[2] = 0;
    plVar23 = plVar10 + 3;
    *plVar10 = (long)&PTR_FUN_110af6ff8;
    FUN_1094b6630(plVar23,&puStack_f0);
    plStack_178 = plVar23;
    plStack_170 = plVar10;
    func_0x0001094b061c(plVar9 + 0x27,&plStack_178);
    plVar10 = plStack_170;
    if (plStack_170 != (long *)0x0) {
      plVar23 = plStack_170 + 1;
      do {
        lVar16 = *plVar23;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *plVar23 = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    FUN_109380f8c(&puStack_f0);
    uVar12 = (uint)uStack_b8._7_1_;
  }
  if ((uVar12 >> 7 & 1) != 0) {
    __ZdlPv(plStack_c8);
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar6) {
      *plVar26 = *plVar26 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  plStack_150 = plVar17;
  plStack_148 = plVar9;
  plStack_120 = plVar17;
  plStack_118 = plVar9;
  if (*(char *)(lVar21 + 0x37) < '\0') {
    func_0x000107c3192c(&lStack_140,*(undefined8 *)(lVar21 + 0x20),*(undefined8 *)(lVar21 + 0x28));
  }
  else {
    lStack_138 = *(long *)(lVar21 + 0x28);
    lStack_140 = *(long *)(lVar21 + 0x20);
    lStack_130 = *(long *)(lVar21 + 0x30);
  }
  __ZNSt3__115recursive_mutex4lockEv(lVar21 + 0x38);
  puVar19 = *(undefined8 **)(lVar21 + 0xf8);
  pplStack_c0 = &plStack_c8;
  plStack_c8 = (long *)0x0;
  uStack_b8 = 0x5002000000;
  pcStack_b0 = FUN_1094b0e30;
  pcStack_a8 = FUN_1094b0ea4;
  plStack_88 = (long *)0x0;
  plVar17 = (long *)0x30;
  __Znwm();
  *plVar17 = (long)&PTR_FUN_110af7078;
  plVar17[2] = (long)plStack_148;
  plVar17[1] = (long)plStack_150;
  if (plStack_148 != (long *)0x0) {
    plVar9 = plStack_148 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (lStack_130 < 0) {
    func_0x000107c3192c(plVar17 + 3,lStack_140,lStack_138);
  }
  else {
    plVar17[4] = lStack_138;
    plVar17[3] = lStack_140;
    plVar17[5] = lStack_130;
  }
  puVar11 = (undefined8 *)0xa0;
  plStack_88 = plVar17;
  __Znwm();
  puVar11[2] = 0;
  puVar11[3] = 0x32aaaba7;
  puVar11[5] = 0;
  puVar11[4] = 0;
  puVar11[7] = 0;
  puVar11[6] = 0;
  puVar11[9] = 0;
  puVar11[8] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0x3cb0b1bb;
  *(undefined8 *)((long)puVar11 + 0x84) = 0;
  *(undefined8 *)((long)puVar11 + 0x7c) = 0;
  puVar11[0xd] = 0;
  puVar11[0xc] = 0;
  puVar11[0xf] = 0;
  puVar11[0xe] = 0;
  *puVar11 = &PTR_DAT_110af70e0;
  puVar11[1] = 0;
  plVar17 = pplStack_c0[9];
  puStack_80 = puVar11;
  if (plVar17 == (long *)0x0) {
    FUN_1094362d4(3);
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1094aa1b4);
    (*pcVar8)();
  }
  FUN_1094a4db4(plVar17);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0x42000000;
  uStack_e0 = FUN_1094b0ecc;
  puStack_d8 = &UNK_110af7038;
  pplStack_d0 = &plStack_c8;
  func_0x000104c62d88(puVar19[1],*puVar19,&puStack_f0);
  __Block_object_dispose(&plStack_c8,8);
  FUN_1094b0ff4(&puStack_80);
  if (plStack_88 == &lStack_a0) {
    lVar16 = 0x18;
  }
  else {
    if (plStack_88 == (long *)0x0) goto LAB_1094a9e98;
    lVar16 = 0x20;
  }
  (**(code **)(*plStack_88 + lVar16))();
LAB_1094a9e98:
  lVar16 = lVar21 + 0x178;
  plStack_c8 = param_2;
  FUN_1094b08f0(lVar16,param_2,&UNK_10dd5b8f9,&plStack_c8,&puStack_f0);
  plVar9 = *(long **)(lVar16 + 0x28);
  *(long **)(lVar16 + 0x28) = plVar17;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 1;
    do {
      lVar16 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  lVar16 = lVar21 + 0x1f0;
  plVar9 = param_2;
  FUN_1094b1684(lVar16,param_2,param_2);
  if (plStack_118 != (long *)0x0) {
    plVar10 = plStack_118 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar10 = *(long **)(lVar16 + 0x30);
  *(long **)(lVar16 + 0x30) = plStack_118;
  *(long **)(lVar16 + 0x28) = plStack_120;
  if (plVar10 != (long *)0x0) {
    plVar23 = plVar10 + 1;
    do {
      lVar16 = *plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  __ZNSt3__115recursive_mutex6unlockEv(lVar21 + 0x38);
  plVar10 = plStack_120;
  if ((*(uint *)(plStack_120[0x22] + 0x38) & 0xfffffffe) == 4) {
    (**(code **)(*(long *)*param_3 + 0x10))(&plStack_158,(long *)*param_3,plStack_120[0x24] + 8);
    puStack_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    lStack_70 = 0;
    plStack_c8 = (long *)(((ulong)plStack_c8 >> 8 & 0xffffff) << 8);
    uStack_b8 = 0x405fc00000000000;
    pplStack_c0 = (long **)0x405fc00000000000;
    pcStack_a8 = (code *)0x0;
    lStack_a0 = 0;
    pcStack_b0 = (code *)0x405fc00000000000;
    uStack_94 = 8;
    uStack_90 = 0x3f800000;
    plStack_88 = (long *)((ulong)plStack_88 & 0xffffffffffff0000);
    uStack_98 = *(undefined4 *)plVar10[0x24];
    plVar9 = (long *)0x258;
    __Znwm();
    (**(code **)(*plStack_158 + 0x20))(&plStack_160);
    plVar10 = plStack_160;
    func_0x000107c31940(&puStack_f0,"image");
    func_0x000107c31940(&plStack_178,&UNK_10f55a914);
    FUN_10959e090(plVar9,plVar10,&plStack_c8,1,&puStack_f0,&plStack_178);
    if (cStack_161 < '\0') {
      __ZdlPv(plStack_178);
    }
    if ((long)uStack_e0 < 0) {
      __ZdlPv(puStack_f0);
    }
    plVar23 = plStack_160;
    plStack_160 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 8))();
    }
    __ZNSt3__15mutex4lockEv(lVar21 + 0x78);
    lVar16 = lVar21 + 0x1a0;
    FUN_1094b1ad0(lVar16,param_2,param_2);
    func_0x0001094abe80(lVar16 + 0x28);
    __ZNSt3__15mutex6unlockEv(lVar21 + 0x78);
    if (lStack_70 < 0) {
      __ZdlPv(puStack_80);
    }
    plVar23 = plStack_158;
    plStack_158 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 8))();
    }
  }
  if (lStack_130 < 0) {
    __ZdlPv(lStack_140);
  }
  plVar23 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar26 = plStack_148 + 1;
    do {
      lVar16 = *plVar26;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *plVar26 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  plVar23 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar26 = plStack_118 + 1;
    do {
      lVar16 = *plVar26;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *plVar26 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
    }
  }
  FUN_109380f8c(auStack_108);
  plVar23 = plStack_f8;
  plStack_f8 = (long *)0x0;
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 8))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return true;
  }
  ___stack_chk_fail();
  func_0x0001094b0898(plVar10);
  __ZdlPv(plVar17);
  __ZNSt3__115recursive_mutex6unlockEv(lVar21 + 0x38);
  FUN_1094abea8(&plStack_150);
  func_0x0001094b0898(&plStack_120);
  FUN_109380f8c(auStack_108);
  plVar17 = plStack_f8;
  plStack_f8 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  __Unwind_Resume();
  lVar16 = plVar23[10];
  __ZNSt3__115recursive_mutex4lockEv(lVar16 + 0x38);
  lVar21 = lVar16 + 0x1f0;
  FUN_1094b1f1c(lVar21,plVar9);
  if (lVar21 == 0) {
    __ZNSt3__115recursive_mutex6unlockEv(lVar16 + 0x38);
  }
  else {
    uVar25 = lVar16 + 0x1f0;
    func_0x000107c31944(uVar25,plVar9);
    uVar20 = *(ulong *)(lVar16 + 0x1f8);
    if (uVar20 != 0) {
      uVar22 = uVar20 - 1;
      if ((uVar20 & uVar22) == 0) {
        uVar24 = uVar22 & uVar25;
      }
      else {
        uVar24 = uVar25;
        if (uVar20 <= uVar25) {
          uVar24 = 0;
          if (uVar20 != 0) {
            uVar24 = uVar25 / uVar20;
          }
          uVar24 = uVar25 - uVar24 * uVar20;
        }
      }
      puVar19 = *(undefined8 **)(*(long *)(lVar16 + 0x1f0) + uVar24 * 8);
      if ((puVar19 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar19, plVar17 != (long *)0x0)) {
LAB_1094aa4ec:
        uVar13 = plVar17[1];
        if (uVar13 == uVar25) {
          uVar13 = lVar16 + 0x1f0;
          func_0x000104c4fbc4(uVar13,plVar17 + 2,plVar9);
          if ((uVar13 & 1) == 0) goto LAB_1094aa538;
          uVar20 = *(ulong *)(lVar16 + 0x1f8);
          lVar15 = *plVar17;
          uVar25 = plVar17[1];
          uVar22 = uVar20 - 1;
          if ((uVar20 & uVar22) == 0) {
            uVar25 = uVar22 & uVar25;
          }
          else if (uVar20 <= uVar25) {
            uVar24 = 0;
            if (uVar20 != 0) {
              uVar24 = uVar25 / uVar20;
            }
            uVar25 = uVar25 - uVar24 * uVar20;
          }
          plVar10 = *(long **)(*(long *)(lVar16 + 0x1f0) + uVar25 * 8);
          do {
            plVar23 = plVar10;
            plVar10 = (long *)*plVar23;
          } while ((long *)*plVar23 != plVar17);
          if (plVar23 == (long *)(lVar16 + 0x200)) {
LAB_1094aa5c0:
            if (lVar15 == 0) {
LAB_1094aa5f4:
              *(undefined8 *)(*(long *)(lVar16 + 0x1f0) + uVar25 * 8) = 0;
              lVar15 = *plVar17;
              goto LAB_1094aa5fc;
            }
            uVar24 = *(ulong *)(lVar15 + 8);
            if ((uVar20 & uVar22) == 0) {
              uVar13 = uVar24 & uVar22;
            }
            else {
              uVar13 = uVar24;
              if (uVar20 <= uVar24) {
                uVar13 = 0;
                if (uVar20 != 0) {
                  uVar13 = uVar24 / uVar20;
                }
                uVar13 = uVar24 - uVar13 * uVar20;
              }
            }
            if (uVar13 != uVar25) goto LAB_1094aa5f4;
LAB_1094aa604:
            if ((uVar20 & uVar22) == 0) {
              uVar24 = uVar24 & uVar22;
            }
            else if (uVar20 <= uVar24) {
              uVar22 = 0;
              if (uVar20 != 0) {
                uVar22 = uVar24 / uVar20;
              }
              uVar24 = uVar24 - uVar22 * uVar20;
            }
            if (uVar24 != uVar25) {
              *(long **)(*(long *)(lVar16 + 0x1f0) + uVar24 * 8) = plVar23;
              lVar15 = *plVar17;
            }
          }
          else {
            uVar24 = plVar23[1];
            if ((uVar20 & uVar22) == 0) {
              uVar24 = uVar24 & uVar22;
            }
            else if (uVar20 <= uVar24) {
              uVar13 = 0;
              if (uVar20 != 0) {
                uVar13 = uVar24 / uVar20;
              }
              uVar24 = uVar24 - uVar13 * uVar20;
            }
            if (uVar24 != uVar25) goto LAB_1094aa5c0;
LAB_1094aa5fc:
            if (lVar15 != 0) {
              uVar24 = *(ulong *)(lVar15 + 8);
              goto LAB_1094aa604;
            }
          }
          *plVar23 = lVar15;
          *plVar17 = 0;
          *(long *)(lVar16 + 0x208) = *(long *)(lVar16 + 0x208) + -1;
          func_0x0001094b02b4(plVar17 + 2);
          __ZdlPv(plVar17);
        }
        else {
          if ((uVar20 & uVar22) == 0) {
            uVar13 = uVar13 & uVar22;
          }
          else if (uVar20 <= uVar13) {
            uVar7 = 0;
            if (uVar20 != 0) {
              uVar7 = uVar13 / uVar20;
            }
            uVar13 = uVar13 - uVar7 * uVar20;
          }
          if (uVar13 == uVar24) goto LAB_1094aa538;
        }
      }
    }
LAB_1094aa65c:
    plVar17 = (long *)(lVar16 + 0x218);
    plVar10 = plVar17;
    func_0x000107c31944(plVar17,plVar9);
    plVar23 = *(long **)(lVar16 + 0x220);
    if (plVar23 != (long *)0x0) {
      uVar25 = (long)plVar23 - 1;
      if (((ulong)plVar23 & uVar25) == 0) {
        plVar26 = (long *)(uVar25 & (ulong)plVar10);
      }
      else {
        plVar26 = plVar10;
        if (plVar23 <= plVar10) {
          uVar20 = 0;
          if (plVar23 != (long *)0x0) {
            uVar20 = (ulong)plVar10 / (ulong)plVar23;
          }
          plVar26 = (long *)((long)plVar10 - uVar20 * (long)plVar23);
        }
      }
      puVar19 = *(undefined8 **)(*plVar17 + (long)plVar26 * 8);
      if ((puVar19 != (undefined8 *)0x0) && (plVar18 = (long *)*puVar19, plVar18 != (long *)0x0)) {
LAB_1094aa6b4:
        plVar14 = (long *)plVar18[1];
        if (plVar14 == plVar10) {
          plVar14 = plVar17;
          func_0x000104c4fbc4(plVar17,plVar18 + 2,plVar9);
          if (((ulong)plVar14 & 1) == 0) goto LAB_1094aa700;
          uVar20 = *(ulong *)(lVar16 + 0x220);
          lVar15 = *plVar18;
          uVar25 = plVar18[1];
          uVar22 = uVar20 - 1;
          if ((uVar20 & uVar22) == 0) {
            uVar25 = uVar22 & uVar25;
          }
          else if (uVar20 <= uVar25) {
            uVar24 = 0;
            if (uVar20 != 0) {
              uVar24 = uVar25 / uVar20;
            }
            uVar25 = uVar25 - uVar24 * uVar20;
          }
          plVar10 = *(long **)(*plVar17 + uVar25 * 8);
          do {
            plVar23 = plVar10;
            plVar10 = (long *)*plVar23;
          } while ((long *)*plVar23 != plVar18);
          if (plVar23 == (long *)(lVar16 + 0x228)) {
LAB_1094aa788:
            if (lVar15 == 0) {
LAB_1094aa7bc:
              *(undefined8 *)(*plVar17 + uVar25 * 8) = 0;
              lVar15 = *plVar18;
              goto LAB_1094aa7c4;
            }
            uVar24 = *(ulong *)(lVar15 + 8);
            if ((uVar20 & uVar22) == 0) {
              uVar13 = uVar24 & uVar22;
            }
            else {
              uVar13 = uVar24;
              if (uVar20 <= uVar24) {
                uVar13 = 0;
                if (uVar20 != 0) {
                  uVar13 = uVar24 / uVar20;
                }
                uVar13 = uVar24 - uVar13 * uVar20;
              }
            }
            if (uVar13 != uVar25) goto LAB_1094aa7bc;
LAB_1094aa7cc:
            if ((uVar20 & uVar22) == 0) {
              uVar24 = uVar24 & uVar22;
            }
            else if (uVar20 <= uVar24) {
              uVar22 = 0;
              if (uVar20 != 0) {
                uVar22 = uVar24 / uVar20;
              }
              uVar24 = uVar24 - uVar22 * uVar20;
            }
            if (uVar24 != uVar25) {
              *(long **)(*plVar17 + uVar24 * 8) = plVar23;
              lVar15 = *plVar18;
            }
          }
          else {
            uVar24 = plVar23[1];
            if ((uVar20 & uVar22) == 0) {
              uVar24 = uVar24 & uVar22;
            }
            else if (uVar20 <= uVar24) {
              uVar13 = 0;
              if (uVar20 != 0) {
                uVar13 = uVar24 / uVar20;
              }
              uVar24 = uVar24 - uVar13 * uVar20;
            }
            if (uVar24 != uVar25) goto LAB_1094aa788;
LAB_1094aa7c4:
            if (lVar15 != 0) {
              uVar24 = *(ulong *)(lVar15 + 8);
              goto LAB_1094aa7cc;
            }
          }
          *plVar23 = lVar15;
          *plVar18 = 0;
          *(long *)(lVar16 + 0x230) = *(long *)(lVar16 + 0x230) + -1;
          FUN_1094ae730(plVar18 + 2);
          __ZdlPv(plVar18);
        }
        else {
          if (((ulong)plVar23 & uVar25) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar25);
          }
          else if (plVar23 <= plVar14) {
            uVar20 = 0;
            if (plVar23 != (long *)0x0) {
              uVar20 = (ulong)plVar14 / (ulong)plVar23;
            }
            plVar14 = (long *)((long)plVar14 - uVar20 * (long)plVar23);
          }
          if (plVar14 == plVar26) goto LAB_1094aa700;
        }
      }
    }
LAB_1094aa824:
    plVar17 = (long *)(lVar16 + 0x240);
    plVar10 = plVar17;
    func_0x000107c31944(plVar17,plVar9);
    plVar23 = *(long **)(lVar16 + 0x248);
    if (plVar23 != (long *)0x0) {
      uVar25 = (long)plVar23 - 1;
      if (((ulong)plVar23 & uVar25) == 0) {
        plVar26 = (long *)(uVar25 & (ulong)plVar10);
      }
      else {
        plVar26 = plVar10;
        if (plVar23 <= plVar10) {
          uVar20 = 0;
          if (plVar23 != (long *)0x0) {
            uVar20 = (ulong)plVar10 / (ulong)plVar23;
          }
          plVar26 = (long *)((long)plVar10 - uVar20 * (long)plVar23);
        }
      }
      puVar19 = *(undefined8 **)(*plVar17 + (long)plVar26 * 8);
      if ((puVar19 != (undefined8 *)0x0) && (plVar18 = (long *)*puVar19, plVar18 != (long *)0x0)) {
LAB_1094aa87c:
        plVar14 = (long *)plVar18[1];
        if (plVar14 == plVar10) {
          plVar14 = plVar17;
          func_0x000104c4fbc4(plVar17,plVar18 + 2,plVar9);
          if (((ulong)plVar14 & 1) == 0) goto LAB_1094aa8c8;
          uVar20 = *(ulong *)(lVar16 + 0x248);
          lVar15 = *plVar18;
          uVar25 = plVar18[1];
          uVar22 = uVar20 - 1;
          if ((uVar20 & uVar22) == 0) {
            uVar25 = uVar22 & uVar25;
          }
          else if (uVar20 <= uVar25) {
            uVar24 = 0;
            if (uVar20 != 0) {
              uVar24 = uVar25 / uVar20;
            }
            uVar25 = uVar25 - uVar24 * uVar20;
          }
          plVar10 = *(long **)(*plVar17 + uVar25 * 8);
          do {
            plVar23 = plVar10;
            plVar10 = (long *)*plVar23;
          } while ((long *)*plVar23 != plVar18);
          if (plVar23 == (long *)(lVar16 + 0x250)) {
LAB_1094aa950:
            if (lVar15 == 0) {
LAB_1094aa984:
              *(undefined8 *)(*plVar17 + uVar25 * 8) = 0;
              lVar15 = *plVar18;
              goto LAB_1094aa98c;
            }
            uVar24 = *(ulong *)(lVar15 + 8);
            if ((uVar20 & uVar22) == 0) {
              uVar13 = uVar24 & uVar22;
            }
            else {
              uVar13 = uVar24;
              if (uVar20 <= uVar24) {
                uVar13 = 0;
                if (uVar20 != 0) {
                  uVar13 = uVar24 / uVar20;
                }
                uVar13 = uVar24 - uVar13 * uVar20;
              }
            }
            if (uVar13 != uVar25) goto LAB_1094aa984;
LAB_1094aa994:
            if ((uVar20 & uVar22) == 0) {
              uVar24 = uVar24 & uVar22;
            }
            else if (uVar20 <= uVar24) {
              uVar22 = 0;
              if (uVar20 != 0) {
                uVar22 = uVar24 / uVar20;
              }
              uVar24 = uVar24 - uVar22 * uVar20;
            }
            if (uVar24 != uVar25) {
              *(long **)(*plVar17 + uVar24 * 8) = plVar23;
              lVar15 = *plVar18;
            }
          }
          else {
            uVar24 = plVar23[1];
            if ((uVar20 & uVar22) == 0) {
              uVar24 = uVar24 & uVar22;
            }
            else if (uVar20 <= uVar24) {
              uVar13 = 0;
              if (uVar20 != 0) {
                uVar13 = uVar24 / uVar20;
              }
              uVar24 = uVar24 - uVar13 * uVar20;
            }
            if (uVar24 != uVar25) goto LAB_1094aa950;
LAB_1094aa98c:
            if (lVar15 != 0) {
              uVar24 = *(ulong *)(lVar15 + 8);
              goto LAB_1094aa994;
            }
          }
          *plVar23 = lVar15;
          *plVar18 = 0;
          *(long *)(lVar16 + 600) = *(long *)(lVar16 + 600) + -1;
          FUN_1094b0368(plVar18 + 2);
          __ZdlPv(plVar18);
        }
        else {
          if (((ulong)plVar23 & uVar25) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar25);
          }
          else if (plVar23 <= plVar14) {
            uVar20 = 0;
            if (plVar23 != (long *)0x0) {
              uVar20 = (ulong)plVar14 / (ulong)plVar23;
            }
            plVar14 = (long *)((long)plVar14 - uVar20 * (long)plVar23);
          }
          if (plVar14 == plVar26) goto LAB_1094aa8c8;
        }
      }
    }
LAB_1094aa9ec:
    func_0x0001094b2048(lVar16 + 0x178,plVar9);
    if (*(long *)(lVar16 + 0x168) != *(long *)(lVar16 + 0x160)) {
      uVar12 = 1;
      do {
        iStack_1e4 = uVar12 - 1;
        lVar15 = lVar16 + 0x268;
        func_0x0001094b22d8(lVar15,&iStack_1e4);
        if (lVar15 != 0) {
          bVar3 = *(byte *)(lVar15 + 0x2f);
          uVar25 = *(ulong *)(lVar15 + 0x20);
          if (-1 < (char)bVar3) {
            uVar25 = (ulong)bVar3;
          }
          bVar4 = *(byte *)((long)plVar9 + 0x17);
          uVar20 = plVar9[1];
          if (-1 < (char)bVar4) {
            uVar20 = (ulong)bVar4;
          }
          if (uVar25 == uVar20) {
            plVar17 = (long *)*(long *)(lVar15 + 0x18);
            if (-1 < (char)bVar3) {
              plVar17 = (long *)(lVar15 + 0x18);
            }
            plVar10 = (long *)*plVar9;
            if (-1 < (char)bVar4) {
              plVar10 = plVar9;
            }
            _memcmp(plVar17,plVar10);
            if ((int)plVar17 == 0) {
              FUN_1094b2378(lVar16 + 0x268,lVar15);
            }
          }
        }
        uVar20 = (*(long *)(lVar16 + 0x168) - *(long *)(lVar16 + 0x160) >> 3) * -0x5555555555555555;
        uVar25 = (ulong)uVar12;
        uVar12 = uVar12 + 1;
      } while (uVar25 <= uVar20 && uVar20 - uVar25 != 0);
    }
    __ZNSt3__115recursive_mutex6unlockEv(lVar16 + 0x38);
    __ZNSt3__15mutex4lockEv(lVar16 + 0x78);
    uVar25 = lVar16 + 0x1a0;
    func_0x000107c31944(uVar25,plVar9);
    uVar20 = *(ulong *)(lVar16 + 0x1a8);
    if (uVar20 != 0) {
      uVar22 = uVar20 - 1;
      if ((uVar20 & uVar22) == 0) {
        uVar24 = uVar22 & uVar25;
      }
      else {
        uVar24 = uVar25;
        if (uVar20 <= uVar25) {
          uVar24 = 0;
          if (uVar20 != 0) {
            uVar24 = uVar25 / uVar20;
          }
          uVar24 = uVar25 - uVar24 * uVar20;
        }
      }
      puVar19 = *(undefined8 **)(*(long *)(lVar16 + 0x1a0) + uVar24 * 8);
      if ((puVar19 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar19, plVar17 != (long *)0x0)) {
LAB_1094aab0c:
        uVar13 = plVar17[1];
        if (uVar13 == uVar25) {
          uVar13 = lVar16 + 0x1a0;
          func_0x000104c4fbc4(uVar13,plVar17 + 2,plVar9);
          if ((uVar13 & 1) == 0) goto LAB_1094aab58;
          uVar20 = *(ulong *)(lVar16 + 0x1a8);
          lVar15 = *plVar17;
          uVar25 = plVar17[1];
          uVar22 = uVar20 - 1;
          if ((uVar20 & uVar22) == 0) {
            uVar25 = uVar22 & uVar25;
          }
          else if (uVar20 <= uVar25) {
            uVar24 = 0;
            if (uVar20 != 0) {
              uVar24 = uVar25 / uVar20;
            }
            uVar25 = uVar25 - uVar24 * uVar20;
          }
          plVar10 = *(long **)(*(long *)(lVar16 + 0x1a0) + uVar25 * 8);
          do {
            plVar23 = plVar10;
            plVar10 = (long *)*plVar23;
          } while ((long *)*plVar23 != plVar17);
          if (plVar23 == (long *)(lVar16 + 0x1b0)) {
LAB_1094aabe0:
            if (lVar15 == 0) {
LAB_1094aac14:
              *(undefined8 *)(*(long *)(lVar16 + 0x1a0) + uVar25 * 8) = 0;
              lVar15 = *plVar17;
              goto LAB_1094aac1c;
            }
            uVar24 = *(ulong *)(lVar15 + 8);
            if ((uVar20 & uVar22) == 0) {
              uVar13 = uVar24 & uVar22;
            }
            else {
              uVar13 = uVar24;
              if (uVar20 <= uVar24) {
                uVar13 = 0;
                if (uVar20 != 0) {
                  uVar13 = uVar24 / uVar20;
                }
                uVar13 = uVar24 - uVar13 * uVar20;
              }
            }
            if (uVar13 != uVar25) goto LAB_1094aac14;
LAB_1094aac24:
            if ((uVar20 & uVar22) == 0) {
              uVar24 = uVar24 & uVar22;
            }
            else if (uVar20 <= uVar24) {
              uVar22 = 0;
              if (uVar20 != 0) {
                uVar22 = uVar24 / uVar20;
              }
              uVar24 = uVar24 - uVar22 * uVar20;
            }
            if (uVar24 != uVar25) {
              *(long **)(*(long *)(lVar16 + 0x1a0) + uVar24 * 8) = plVar23;
              lVar15 = *plVar17;
            }
          }
          else {
            uVar24 = plVar23[1];
            if ((uVar20 & uVar22) == 0) {
              uVar24 = uVar24 & uVar22;
            }
            else if (uVar20 <= uVar24) {
              uVar13 = 0;
              if (uVar20 != 0) {
                uVar13 = uVar24 / uVar20;
              }
              uVar24 = uVar24 - uVar13 * uVar20;
            }
            if (uVar24 != uVar25) goto LAB_1094aabe0;
LAB_1094aac1c:
            if (lVar15 != 0) {
              uVar24 = *(ulong *)(lVar15 + 8);
              goto LAB_1094aac24;
            }
          }
          *plVar23 = lVar15;
          *plVar17 = 0;
          *(long *)(lVar16 + 0x1b8) = *(long *)(lVar16 + 0x1b8) + -1;
          func_0x0001094b019c(plVar17 + 2);
          __ZdlPv(plVar17);
        }
        else {
          if ((uVar20 & uVar22) == 0) {
            uVar13 = uVar13 & uVar22;
          }
          else if (uVar20 <= uVar13) {
            uVar7 = 0;
            if (uVar20 != 0) {
              uVar7 = uVar13 / uVar20;
            }
            uVar13 = uVar13 - uVar7 * uVar20;
          }
          if (uVar13 == uVar24) goto LAB_1094aab58;
        }
      }
    }
LAB_1094aac7c:
    uVar25 = lVar16 + 0x1c8;
    func_0x000107c31944(uVar25,plVar9);
    uVar20 = *(ulong *)(lVar16 + 0x1d0);
    if (uVar20 != 0) {
      uVar22 = uVar20 - 1;
      if ((uVar20 & uVar22) == 0) {
        uVar24 = uVar22 & uVar25;
      }
      else {
        uVar24 = uVar25;
        if (uVar20 <= uVar25) {
          uVar24 = 0;
          if (uVar20 != 0) {
            uVar24 = uVar25 / uVar20;
          }
          uVar24 = uVar25 - uVar24 * uVar20;
        }
      }
      puVar19 = *(undefined8 **)(*(long *)(lVar16 + 0x1c8) + uVar24 * 8);
      if ((puVar19 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar19, plVar17 != (long *)0x0)) {
LAB_1094aacd0:
        uVar13 = plVar17[1];
        if (uVar13 == uVar25) {
          uVar13 = lVar16 + 0x1c8;
          func_0x000104c4fbc4(uVar13,plVar17 + 2,plVar9);
          if ((uVar13 & 1) == 0) goto LAB_1094aad1c;
          uVar20 = *(ulong *)(lVar16 + 0x1d0);
          lVar15 = *plVar17;
          uVar25 = plVar17[1];
          uVar22 = uVar20 - 1;
          if ((uVar20 & uVar22) == 0) {
            uVar25 = uVar22 & uVar25;
          }
          else if (uVar20 <= uVar25) {
            uVar24 = 0;
            if (uVar20 != 0) {
              uVar24 = uVar25 / uVar20;
            }
            uVar25 = uVar25 - uVar24 * uVar20;
          }
          plVar9 = *(long **)(*(long *)(lVar16 + 0x1c8) + uVar25 * 8);
          do {
            plVar10 = plVar9;
            plVar9 = (long *)*plVar10;
          } while ((long *)*plVar10 != plVar17);
          if (plVar10 == (long *)(lVar16 + 0x1d8)) {
LAB_1094aada4:
            if (lVar15 == 0) {
LAB_1094aadd8:
              *(undefined8 *)(*(long *)(lVar16 + 0x1c8) + uVar25 * 8) = 0;
              lVar15 = *plVar17;
              goto LAB_1094aade0;
            }
            uVar24 = *(ulong *)(lVar15 + 8);
            if ((uVar20 & uVar22) == 0) {
              uVar13 = uVar24 & uVar22;
            }
            else {
              uVar13 = uVar24;
              if (uVar20 <= uVar24) {
                uVar13 = 0;
                if (uVar20 != 0) {
                  uVar13 = uVar24 / uVar20;
                }
                uVar13 = uVar24 - uVar13 * uVar20;
              }
            }
            if (uVar13 != uVar25) goto LAB_1094aadd8;
LAB_1094aade8:
            if ((uVar20 & uVar22) == 0) {
              uVar24 = uVar24 & uVar22;
            }
            else if (uVar20 <= uVar24) {
              uVar22 = 0;
              if (uVar20 != 0) {
                uVar22 = uVar24 / uVar20;
              }
              uVar24 = uVar24 - uVar22 * uVar20;
            }
            if (uVar24 != uVar25) {
              *(long **)(*(long *)(lVar16 + 0x1c8) + uVar24 * 8) = plVar10;
              lVar15 = *plVar17;
            }
          }
          else {
            uVar24 = plVar10[1];
            if ((uVar20 & uVar22) == 0) {
              uVar24 = uVar24 & uVar22;
            }
            else if (uVar20 <= uVar24) {
              uVar13 = 0;
              if (uVar20 != 0) {
                uVar13 = uVar24 / uVar20;
              }
              uVar24 = uVar24 - uVar13 * uVar20;
            }
            if (uVar24 != uVar25) goto LAB_1094aada4;
LAB_1094aade0:
            if (lVar15 != 0) {
              uVar24 = *(ulong *)(lVar15 + 8);
              goto LAB_1094aade8;
            }
          }
          *plVar10 = lVar15;
          *plVar17 = 0;
          *(long *)(lVar16 + 0x1e0) = *(long *)(lVar16 + 0x1e0) + -1;
          func_0x0001094b0218(plVar17 + 2);
          __ZdlPv(plVar17);
        }
        else {
          if ((uVar20 & uVar22) == 0) {
            uVar13 = uVar13 & uVar22;
          }
          else if (uVar20 <= uVar13) {
            uVar7 = 0;
            if (uVar20 != 0) {
              uVar7 = uVar13 / uVar20;
            }
            uVar13 = uVar13 - uVar7 * uVar20;
          }
          if (uVar13 == uVar24) goto LAB_1094aad1c;
        }
      }
    }
LAB_1094aae40:
    __ZNSt3__15mutex6unlockEv(lVar16 + 0x78);
  }
  return lVar21 != 0;
LAB_1094aa538:
  plVar17 = (long *)*plVar17;
  if (plVar17 == (long *)0x0) goto LAB_1094aa65c;
  goto LAB_1094aa4ec;
LAB_1094aa700:
  plVar18 = (long *)*plVar18;
  if (plVar18 == (long *)0x0) goto LAB_1094aa824;
  goto LAB_1094aa6b4;
LAB_1094aa8c8:
  plVar18 = (long *)*plVar18;
  if (plVar18 == (long *)0x0) goto LAB_1094aa9ec;
  goto LAB_1094aa87c;
LAB_1094aab58:
  plVar17 = (long *)*plVar17;
  if (plVar17 == (long *)0x0) goto LAB_1094aac7c;
  goto LAB_1094aab0c;
LAB_1094aad1c:
  plVar17 = (long *)*plVar17;
  if (plVar17 == (long *)0x0) goto LAB_1094aae40;
  goto LAB_1094aacd0;
}



/* Entry: 1094aa448; end: 1094aae8b;  */

bool FUN_1094aa448(long param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  int iStack_64;
  
  lVar14 = *(long *)(param_1 + 0x50);
  __ZNSt3__115recursive_mutex4lockEv(lVar14 + 0x38);
  lVar4 = lVar14 + 0x1f0;
  FUN_1094b1f1c(lVar4,param_2);
  if (lVar4 == 0) {
    __ZNSt3__115recursive_mutex6unlockEv(lVar14 + 0x38);
  }
  else {
    uVar18 = lVar14 + 0x1f0;
    func_0x000107c31944(uVar18,param_2);
    uVar13 = *(ulong *)(lVar14 + 0x1f8);
    if (uVar13 != 0) {
      uVar15 = uVar13 - 1;
      if ((uVar13 & uVar15) == 0) {
        uVar17 = uVar15 & uVar18;
      }
      else {
        uVar17 = uVar18;
        if (uVar13 <= uVar18) {
          uVar17 = 0;
          if (uVar13 != 0) {
            uVar17 = uVar18 / uVar13;
          }
          uVar17 = uVar18 - uVar17 * uVar13;
        }
      }
      puVar6 = *(undefined8 **)(*(long *)(lVar14 + 0x1f0) + uVar17 * 8);
      if ((puVar6 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar6, plVar10 != (long *)0x0)) {
LAB_1094aa4ec:
        uVar7 = plVar10[1];
        if (uVar7 == uVar18) {
          uVar7 = lVar14 + 0x1f0;
          func_0x000104c4fbc4(uVar7,plVar10 + 2,param_2);
          if ((uVar7 & 1) == 0) goto LAB_1094aa538;
          uVar13 = *(ulong *)(lVar14 + 0x1f8);
          lVar9 = *plVar10;
          uVar18 = plVar10[1];
          uVar15 = uVar13 - 1;
          if ((uVar13 & uVar15) == 0) {
            uVar18 = uVar15 & uVar18;
          }
          else if (uVar13 <= uVar18) {
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar17 = uVar18 / uVar13;
            }
            uVar18 = uVar18 - uVar17 * uVar13;
          }
          plVar5 = *(long **)(*(long *)(lVar14 + 0x1f0) + uVar18 * 8);
          do {
            plVar16 = plVar5;
            plVar5 = (long *)*plVar16;
          } while ((long *)*plVar16 != plVar10);
          if (plVar16 == (long *)(lVar14 + 0x200)) {
LAB_1094aa5c0:
            if (lVar9 == 0) {
LAB_1094aa5f4:
              *(undefined8 *)(*(long *)(lVar14 + 0x1f0) + uVar18 * 8) = 0;
              lVar9 = *plVar10;
              goto LAB_1094aa5fc;
            }
            uVar17 = *(ulong *)(lVar9 + 8);
            if ((uVar13 & uVar15) == 0) {
              uVar7 = uVar17 & uVar15;
            }
            else {
              uVar7 = uVar17;
              if (uVar13 <= uVar17) {
                uVar7 = 0;
                if (uVar13 != 0) {
                  uVar7 = uVar17 / uVar13;
                }
                uVar7 = uVar17 - uVar7 * uVar13;
              }
            }
            if (uVar7 != uVar18) goto LAB_1094aa5f4;
LAB_1094aa604:
            if ((uVar13 & uVar15) == 0) {
              uVar17 = uVar17 & uVar15;
            }
            else if (uVar13 <= uVar17) {
              uVar15 = 0;
              if (uVar13 != 0) {
                uVar15 = uVar17 / uVar13;
              }
              uVar17 = uVar17 - uVar15 * uVar13;
            }
            if (uVar17 != uVar18) {
              *(long **)(*(long *)(lVar14 + 0x1f0) + uVar17 * 8) = plVar16;
              lVar9 = *plVar10;
            }
          }
          else {
            uVar17 = plVar16[1];
            if ((uVar13 & uVar15) == 0) {
              uVar17 = uVar17 & uVar15;
            }
            else if (uVar13 <= uVar17) {
              uVar7 = 0;
              if (uVar13 != 0) {
                uVar7 = uVar17 / uVar13;
              }
              uVar17 = uVar17 - uVar7 * uVar13;
            }
            if (uVar17 != uVar18) goto LAB_1094aa5c0;
LAB_1094aa5fc:
            if (lVar9 != 0) {
              uVar17 = *(ulong *)(lVar9 + 8);
              goto LAB_1094aa604;
            }
          }
          *plVar16 = lVar9;
          *plVar10 = 0;
          *(long *)(lVar14 + 0x208) = *(long *)(lVar14 + 0x208) + -1;
          func_0x0001094b02b4(plVar10 + 2);
          __ZdlPv(plVar10);
        }
        else {
          if ((uVar13 & uVar15) == 0) {
            uVar7 = uVar7 & uVar15;
          }
          else if (uVar13 <= uVar7) {
            uVar3 = 0;
            if (uVar13 != 0) {
              uVar3 = uVar7 / uVar13;
            }
            uVar7 = uVar7 - uVar3 * uVar13;
          }
          if (uVar7 == uVar17) goto LAB_1094aa538;
        }
      }
    }
LAB_1094aa65c:
    plVar10 = (long *)(lVar14 + 0x218);
    plVar5 = plVar10;
    func_0x000107c31944(plVar10,param_2);
    plVar16 = *(long **)(lVar14 + 0x220);
    if (plVar16 != (long *)0x0) {
      uVar18 = (long)plVar16 - 1;
      if (((ulong)plVar16 & uVar18) == 0) {
        plVar19 = (long *)(uVar18 & (ulong)plVar5);
      }
      else {
        plVar19 = plVar5;
        if (plVar16 <= plVar5) {
          uVar13 = 0;
          if (plVar16 != (long *)0x0) {
            uVar13 = (ulong)plVar5 / (ulong)plVar16;
          }
          plVar19 = (long *)((long)plVar5 - uVar13 * (long)plVar16);
        }
      }
      puVar6 = *(undefined8 **)(*plVar10 + (long)plVar19 * 8);
      if ((puVar6 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar6, plVar12 != (long *)0x0)) {
LAB_1094aa6b4:
        plVar8 = (long *)plVar12[1];
        if (plVar8 == plVar5) {
          plVar8 = plVar10;
          func_0x000104c4fbc4(plVar10,plVar12 + 2,param_2);
          if (((ulong)plVar8 & 1) == 0) goto LAB_1094aa700;
          uVar13 = *(ulong *)(lVar14 + 0x220);
          lVar9 = *plVar12;
          uVar18 = plVar12[1];
          uVar15 = uVar13 - 1;
          if ((uVar13 & uVar15) == 0) {
            uVar18 = uVar15 & uVar18;
          }
          else if (uVar13 <= uVar18) {
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar17 = uVar18 / uVar13;
            }
            uVar18 = uVar18 - uVar17 * uVar13;
          }
          plVar5 = *(long **)(*plVar10 + uVar18 * 8);
          do {
            plVar16 = plVar5;
            plVar5 = (long *)*plVar16;
          } while ((long *)*plVar16 != plVar12);
          if (plVar16 == (long *)(lVar14 + 0x228)) {
LAB_1094aa788:
            if (lVar9 == 0) {
LAB_1094aa7bc:
              *(undefined8 *)(*plVar10 + uVar18 * 8) = 0;
              lVar9 = *plVar12;
              goto LAB_1094aa7c4;
            }
            uVar17 = *(ulong *)(lVar9 + 8);
            if ((uVar13 & uVar15) == 0) {
              uVar7 = uVar17 & uVar15;
            }
            else {
              uVar7 = uVar17;
              if (uVar13 <= uVar17) {
                uVar7 = 0;
                if (uVar13 != 0) {
                  uVar7 = uVar17 / uVar13;
                }
                uVar7 = uVar17 - uVar7 * uVar13;
              }
            }
            if (uVar7 != uVar18) goto LAB_1094aa7bc;
LAB_1094aa7cc:
            if ((uVar13 & uVar15) == 0) {
              uVar17 = uVar17 & uVar15;
            }
            else if (uVar13 <= uVar17) {
              uVar15 = 0;
              if (uVar13 != 0) {
                uVar15 = uVar17 / uVar13;
              }
              uVar17 = uVar17 - uVar15 * uVar13;
            }
            if (uVar17 != uVar18) {
              *(long **)(*plVar10 + uVar17 * 8) = plVar16;
              lVar9 = *plVar12;
            }
          }
          else {
            uVar17 = plVar16[1];
            if ((uVar13 & uVar15) == 0) {
              uVar17 = uVar17 & uVar15;
            }
            else if (uVar13 <= uVar17) {
              uVar7 = 0;
              if (uVar13 != 0) {
                uVar7 = uVar17 / uVar13;
              }
              uVar17 = uVar17 - uVar7 * uVar13;
            }
            if (uVar17 != uVar18) goto LAB_1094aa788;
LAB_1094aa7c4:
            if (lVar9 != 0) {
              uVar17 = *(ulong *)(lVar9 + 8);
              goto LAB_1094aa7cc;
            }
          }
          *plVar16 = lVar9;
          *plVar12 = 0;
          *(long *)(lVar14 + 0x230) = *(long *)(lVar14 + 0x230) + -1;
          FUN_1094ae730(plVar12 + 2);
          __ZdlPv(plVar12);
        }
        else {
          if (((ulong)plVar16 & uVar18) == 0) {
            plVar8 = (long *)((ulong)plVar8 & uVar18);
          }
          else if (plVar16 <= plVar8) {
            uVar13 = 0;
            if (plVar16 != (long *)0x0) {
              uVar13 = (ulong)plVar8 / (ulong)plVar16;
            }
            plVar8 = (long *)((long)plVar8 - uVar13 * (long)plVar16);
          }
          if (plVar8 == plVar19) goto LAB_1094aa700;
        }
      }
    }
LAB_1094aa824:
    plVar10 = (long *)(lVar14 + 0x240);
    plVar5 = plVar10;
    func_0x000107c31944(plVar10,param_2);
    plVar16 = *(long **)(lVar14 + 0x248);
    if (plVar16 != (long *)0x0) {
      uVar18 = (long)plVar16 - 1;
      if (((ulong)plVar16 & uVar18) == 0) {
        plVar19 = (long *)(uVar18 & (ulong)plVar5);
      }
      else {
        plVar19 = plVar5;
        if (plVar16 <= plVar5) {
          uVar13 = 0;
          if (plVar16 != (long *)0x0) {
            uVar13 = (ulong)plVar5 / (ulong)plVar16;
          }
          plVar19 = (long *)((long)plVar5 - uVar13 * (long)plVar16);
        }
      }
      puVar6 = *(undefined8 **)(*plVar10 + (long)plVar19 * 8);
      if ((puVar6 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar6, plVar12 != (long *)0x0)) {
LAB_1094aa87c:
        plVar8 = (long *)plVar12[1];
        if (plVar8 == plVar5) {
          plVar8 = plVar10;
          func_0x000104c4fbc4(plVar10,plVar12 + 2,param_2);
          if (((ulong)plVar8 & 1) == 0) goto LAB_1094aa8c8;
          uVar13 = *(ulong *)(lVar14 + 0x248);
          lVar9 = *plVar12;
          uVar18 = plVar12[1];
          uVar15 = uVar13 - 1;
          if ((uVar13 & uVar15) == 0) {
            uVar18 = uVar15 & uVar18;
          }
          else if (uVar13 <= uVar18) {
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar17 = uVar18 / uVar13;
            }
            uVar18 = uVar18 - uVar17 * uVar13;
          }
          plVar5 = *(long **)(*plVar10 + uVar18 * 8);
          do {
            plVar16 = plVar5;
            plVar5 = (long *)*plVar16;
          } while ((long *)*plVar16 != plVar12);
          if (plVar16 == (long *)(lVar14 + 0x250)) {
LAB_1094aa950:
            if (lVar9 == 0) {
LAB_1094aa984:
              *(undefined8 *)(*plVar10 + uVar18 * 8) = 0;
              lVar9 = *plVar12;
              goto LAB_1094aa98c;
            }
            uVar17 = *(ulong *)(lVar9 + 8);
            if ((uVar13 & uVar15) == 0) {
              uVar7 = uVar17 & uVar15;
            }
            else {
              uVar7 = uVar17;
              if (uVar13 <= uVar17) {
                uVar7 = 0;
                if (uVar13 != 0) {
                  uVar7 = uVar17 / uVar13;
                }
                uVar7 = uVar17 - uVar7 * uVar13;
              }
            }
            if (uVar7 != uVar18) goto LAB_1094aa984;
LAB_1094aa994:
            if ((uVar13 & uVar15) == 0) {
              uVar17 = uVar17 & uVar15;
            }
            else if (uVar13 <= uVar17) {
              uVar15 = 0;
              if (uVar13 != 0) {
                uVar15 = uVar17 / uVar13;
              }
              uVar17 = uVar17 - uVar15 * uVar13;
            }
            if (uVar17 != uVar18) {
              *(long **)(*plVar10 + uVar17 * 8) = plVar16;
              lVar9 = *plVar12;
            }
          }
          else {
            uVar17 = plVar16[1];
            if ((uVar13 & uVar15) == 0) {
              uVar17 = uVar17 & uVar15;
            }
            else if (uVar13 <= uVar17) {
              uVar7 = 0;
              if (uVar13 != 0) {
                uVar7 = uVar17 / uVar13;
              }
              uVar17 = uVar17 - uVar7 * uVar13;
            }
            if (uVar17 != uVar18) goto LAB_1094aa950;
LAB_1094aa98c:
            if (lVar9 != 0) {
              uVar17 = *(ulong *)(lVar9 + 8);
              goto LAB_1094aa994;
            }
          }
          *plVar16 = lVar9;
          *plVar12 = 0;
          *(long *)(lVar14 + 600) = *(long *)(lVar14 + 600) + -1;
          FUN_1094b0368(plVar12 + 2);
          __ZdlPv(plVar12);
        }
        else {
          if (((ulong)plVar16 & uVar18) == 0) {
            plVar8 = (long *)((ulong)plVar8 & uVar18);
          }
          else if (plVar16 <= plVar8) {
            uVar13 = 0;
            if (plVar16 != (long *)0x0) {
              uVar13 = (ulong)plVar8 / (ulong)plVar16;
            }
            plVar8 = (long *)((long)plVar8 - uVar13 * (long)plVar16);
          }
          if (plVar8 == plVar19) goto LAB_1094aa8c8;
        }
      }
    }
LAB_1094aa9ec:
    func_0x0001094b2048(lVar14 + 0x178,param_2);
    if (*(long *)(lVar14 + 0x168) != *(long *)(lVar14 + 0x160)) {
      uVar11 = 1;
      do {
        iStack_64 = uVar11 - 1;
        lVar9 = lVar14 + 0x268;
        func_0x0001094b22d8(lVar9,&iStack_64);
        if (lVar9 != 0) {
          bVar1 = *(byte *)(lVar9 + 0x2f);
          uVar18 = *(ulong *)(lVar9 + 0x20);
          if (-1 < (char)bVar1) {
            uVar18 = (ulong)bVar1;
          }
          bVar2 = *(byte *)((long)param_2 + 0x17);
          uVar13 = param_2[1];
          if (-1 < (char)bVar2) {
            uVar13 = (ulong)bVar2;
          }
          if (uVar18 == uVar13) {
            plVar10 = (long *)*(long *)(lVar9 + 0x18);
            if (-1 < (char)bVar1) {
              plVar10 = (long *)(lVar9 + 0x18);
            }
            plVar5 = (long *)*param_2;
            if (-1 < (char)bVar2) {
              plVar5 = param_2;
            }
            _memcmp(plVar10,plVar5);
            if ((int)plVar10 == 0) {
              FUN_1094b2378(lVar14 + 0x268,lVar9);
            }
          }
        }
        uVar13 = (*(long *)(lVar14 + 0x168) - *(long *)(lVar14 + 0x160) >> 3) * -0x5555555555555555;
        uVar18 = (ulong)uVar11;
        uVar11 = uVar11 + 1;
      } while (uVar18 <= uVar13 && uVar13 - uVar18 != 0);
    }
    __ZNSt3__115recursive_mutex6unlockEv(lVar14 + 0x38);
    __ZNSt3__15mutex4lockEv(lVar14 + 0x78);
    uVar18 = lVar14 + 0x1a0;
    func_0x000107c31944(uVar18,param_2);
    uVar13 = *(ulong *)(lVar14 + 0x1a8);
    if (uVar13 != 0) {
      uVar15 = uVar13 - 1;
      if ((uVar13 & uVar15) == 0) {
        uVar17 = uVar15 & uVar18;
      }
      else {
        uVar17 = uVar18;
        if (uVar13 <= uVar18) {
          uVar17 = 0;
          if (uVar13 != 0) {
            uVar17 = uVar18 / uVar13;
          }
          uVar17 = uVar18 - uVar17 * uVar13;
        }
      }
      puVar6 = *(undefined8 **)(*(long *)(lVar14 + 0x1a0) + uVar17 * 8);
      if ((puVar6 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar6, plVar10 != (long *)0x0)) {
LAB_1094aab0c:
        uVar7 = plVar10[1];
        if (uVar7 == uVar18) {
          uVar7 = lVar14 + 0x1a0;
          func_0x000104c4fbc4(uVar7,plVar10 + 2,param_2);
          if ((uVar7 & 1) == 0) goto LAB_1094aab58;
          uVar13 = *(ulong *)(lVar14 + 0x1a8);
          lVar9 = *plVar10;
          uVar18 = plVar10[1];
          uVar15 = uVar13 - 1;
          if ((uVar13 & uVar15) == 0) {
            uVar18 = uVar15 & uVar18;
          }
          else if (uVar13 <= uVar18) {
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar17 = uVar18 / uVar13;
            }
            uVar18 = uVar18 - uVar17 * uVar13;
          }
          plVar5 = *(long **)(*(long *)(lVar14 + 0x1a0) + uVar18 * 8);
          do {
            plVar16 = plVar5;
            plVar5 = (long *)*plVar16;
          } while ((long *)*plVar16 != plVar10);
          if (plVar16 == (long *)(lVar14 + 0x1b0)) {
LAB_1094aabe0:
            if (lVar9 == 0) {
LAB_1094aac14:
              *(undefined8 *)(*(long *)(lVar14 + 0x1a0) + uVar18 * 8) = 0;
              lVar9 = *plVar10;
              goto LAB_1094aac1c;
            }
            uVar17 = *(ulong *)(lVar9 + 8);
            if ((uVar13 & uVar15) == 0) {
              uVar7 = uVar17 & uVar15;
            }
            else {
              uVar7 = uVar17;
              if (uVar13 <= uVar17) {
                uVar7 = 0;
                if (uVar13 != 0) {
                  uVar7 = uVar17 / uVar13;
                }
                uVar7 = uVar17 - uVar7 * uVar13;
              }
            }
            if (uVar7 != uVar18) goto LAB_1094aac14;
LAB_1094aac24:
            if ((uVar13 & uVar15) == 0) {
              uVar17 = uVar17 & uVar15;
            }
            else if (uVar13 <= uVar17) {
              uVar15 = 0;
              if (uVar13 != 0) {
                uVar15 = uVar17 / uVar13;
              }
              uVar17 = uVar17 - uVar15 * uVar13;
            }
            if (uVar17 != uVar18) {
              *(long **)(*(long *)(lVar14 + 0x1a0) + uVar17 * 8) = plVar16;
              lVar9 = *plVar10;
            }
          }
          else {
            uVar17 = plVar16[1];
            if ((uVar13 & uVar15) == 0) {
              uVar17 = uVar17 & uVar15;
            }
            else if (uVar13 <= uVar17) {
              uVar7 = 0;
              if (uVar13 != 0) {
                uVar7 = uVar17 / uVar13;
              }
              uVar17 = uVar17 - uVar7 * uVar13;
            }
            if (uVar17 != uVar18) goto LAB_1094aabe0;
LAB_1094aac1c:
            if (lVar9 != 0) {
              uVar17 = *(ulong *)(lVar9 + 8);
              goto LAB_1094aac24;
            }
          }
          *plVar16 = lVar9;
          *plVar10 = 0;
          *(long *)(lVar14 + 0x1b8) = *(long *)(lVar14 + 0x1b8) + -1;
          func_0x0001094b019c(plVar10 + 2);
          __ZdlPv(plVar10);
        }
        else {
          if ((uVar13 & uVar15) == 0) {
            uVar7 = uVar7 & uVar15;
          }
          else if (uVar13 <= uVar7) {
            uVar3 = 0;
            if (uVar13 != 0) {
              uVar3 = uVar7 / uVar13;
            }
            uVar7 = uVar7 - uVar3 * uVar13;
          }
          if (uVar7 == uVar17) goto LAB_1094aab58;
        }
      }
    }
LAB_1094aac7c:
    uVar18 = lVar14 + 0x1c8;
    func_0x000107c31944(uVar18,param_2);
    uVar13 = *(ulong *)(lVar14 + 0x1d0);
    if (uVar13 != 0) {
      uVar15 = uVar13 - 1;
      if ((uVar13 & uVar15) == 0) {
        uVar17 = uVar15 & uVar18;
      }
      else {
        uVar17 = uVar18;
        if (uVar13 <= uVar18) {
          uVar17 = 0;
          if (uVar13 != 0) {
            uVar17 = uVar18 / uVar13;
          }
          uVar17 = uVar18 - uVar17 * uVar13;
        }
      }
      puVar6 = *(undefined8 **)(*(long *)(lVar14 + 0x1c8) + uVar17 * 8);
      if ((puVar6 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar6, plVar10 != (long *)0x0)) {
LAB_1094aacd0:
        uVar7 = plVar10[1];
        if (uVar7 == uVar18) {
          uVar7 = lVar14 + 0x1c8;
          func_0x000104c4fbc4(uVar7,plVar10 + 2,param_2);
          if ((uVar7 & 1) == 0) goto LAB_1094aad1c;
          uVar13 = *(ulong *)(lVar14 + 0x1d0);
          lVar9 = *plVar10;
          uVar18 = plVar10[1];
          uVar15 = uVar13 - 1;
          if ((uVar13 & uVar15) == 0) {
            uVar18 = uVar15 & uVar18;
          }
          else if (uVar13 <= uVar18) {
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar17 = uVar18 / uVar13;
            }
            uVar18 = uVar18 - uVar17 * uVar13;
          }
          plVar5 = *(long **)(*(long *)(lVar14 + 0x1c8) + uVar18 * 8);
          do {
            plVar16 = plVar5;
            plVar5 = (long *)*plVar16;
          } while ((long *)*plVar16 != plVar10);
          if (plVar16 == (long *)(lVar14 + 0x1d8)) {
LAB_1094aada4:
            if (lVar9 == 0) {
LAB_1094aadd8:
              *(undefined8 *)(*(long *)(lVar14 + 0x1c8) + uVar18 * 8) = 0;
              lVar9 = *plVar10;
              goto LAB_1094aade0;
            }
            uVar17 = *(ulong *)(lVar9 + 8);
            if ((uVar13 & uVar15) == 0) {
              uVar7 = uVar17 & uVar15;
            }
            else {
              uVar7 = uVar17;
              if (uVar13 <= uVar17) {
                uVar7 = 0;
                if (uVar13 != 0) {
                  uVar7 = uVar17 / uVar13;
                }
                uVar7 = uVar17 - uVar7 * uVar13;
              }
            }
            if (uVar7 != uVar18) goto LAB_1094aadd8;
LAB_1094aade8:
            if ((uVar13 & uVar15) == 0) {
              uVar17 = uVar17 & uVar15;
            }
            else if (uVar13 <= uVar17) {
              uVar15 = 0;
              if (uVar13 != 0) {
                uVar15 = uVar17 / uVar13;
              }
              uVar17 = uVar17 - uVar15 * uVar13;
            }
            if (uVar17 != uVar18) {
              *(long **)(*(long *)(lVar14 + 0x1c8) + uVar17 * 8) = plVar16;
              lVar9 = *plVar10;
            }
          }
          else {
            uVar17 = plVar16[1];
            if ((uVar13 & uVar15) == 0) {
              uVar17 = uVar17 & uVar15;
            }
            else if (uVar13 <= uVar17) {
              uVar7 = 0;
              if (uVar13 != 0) {
                uVar7 = uVar17 / uVar13;
              }
              uVar17 = uVar17 - uVar7 * uVar13;
            }
            if (uVar17 != uVar18) goto LAB_1094aada4;
LAB_1094aade0:
            if (lVar9 != 0) {
              uVar17 = *(ulong *)(lVar9 + 8);
              goto LAB_1094aade8;
            }
          }
          *plVar16 = lVar9;
          *plVar10 = 0;
          *(long *)(lVar14 + 0x1e0) = *(long *)(lVar14 + 0x1e0) + -1;
          func_0x0001094b0218(plVar10 + 2);
          __ZdlPv(plVar10);
        }
        else {
          if ((uVar13 & uVar15) == 0) {
            uVar7 = uVar7 & uVar15;
          }
          else if (uVar13 <= uVar7) {
            uVar3 = 0;
            if (uVar13 != 0) {
              uVar3 = uVar7 / uVar13;
            }
            uVar7 = uVar7 - uVar3 * uVar13;
          }
          if (uVar7 == uVar17) goto LAB_1094aad1c;
        }
      }
    }
LAB_1094aae40:
    __ZNSt3__15mutex6unlockEv(lVar14 + 0x78);
  }
  return lVar4 != 0;
LAB_1094aa538:
  plVar10 = (long *)*plVar10;
  if (plVar10 == (long *)0x0) goto LAB_1094aa65c;
  goto LAB_1094aa4ec;
LAB_1094aa700:
  plVar12 = (long *)*plVar12;
  if (plVar12 == (long *)0x0) goto LAB_1094aa824;
  goto LAB_1094aa6b4;
LAB_1094aa8c8:
  plVar12 = (long *)*plVar12;
  if (plVar12 == (long *)0x0) goto LAB_1094aa9ec;
  goto LAB_1094aa87c;
LAB_1094aab58:
  plVar10 = (long *)*plVar10;
  if (plVar10 == (long *)0x0) goto LAB_1094aac7c;
  goto LAB_1094aab0c;
LAB_1094aad1c:
  plVar10 = (long *)*plVar10;
  if (plVar10 == (long *)0x0) goto LAB_1094aae40;
  goto LAB_1094aacd0;
}



/* Entry: 1094aae8c; end: 1094ab45b;  */

/* WARNING: Removing unreachable block (ram,0x0001094ab2d0) */

ulong FUN_1094aae8c(long param_1,undefined4 param_2,undefined8 *param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 uStack_154;
  long lStack_150;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  long *plStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = param_1 + 0x1f0;
  puVar11 = param_3;
  FUN_1094b1f1c();
  uVar10 = SUB84(puVar11,0);
  if (lVar6 == 0) {
LAB_1094ab2ec:
    return (ulong)(lVar6 != 0);
  }
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 != (long *)0x0) {
    uVar13 = *(undefined8 *)(param_1 + 8);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar8 = plVar7 + 1;
      do {
        lVar12 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uStack_80 = uVar13;
      plStack_78 = plVar7;
      uStack_70 = param_2;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_68,*param_3,param_3[1]);
      }
      else {
        uStack_60 = param_3[1];
        uStack_68 = *param_3;
        uStack_58 = param_3[2];
      }
      lVar12 = param_1 + 0x1f0;
      FUN_1094b1684(lVar12,param_3,param_3);
      if ((*(uint *)(*(long *)(*(long *)(lVar12 + 0x28) + 0x110) + 0x38) & 0xfffffffe) == 4) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plStack_100 = *(long **)(lVar12 + 0x30);
        uStack_108 = *(undefined8 *)(lVar12 + 0x28);
        if (*(long *)(lVar12 + 0x30) != 0) {
          plVar1 = (long *)(*(long *)(lVar12 + 0x30) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_118 = uVar13;
        plStack_110 = plVar7;
        if (*(char *)((long)param_3 + 0x17) < '\0') {
          func_0x000107c3192c(&uStack_f8,*param_3,param_3[1]);
        }
        else {
          uStack_f0 = param_3[1];
          uStack_f8 = *param_3;
          lStack_e8 = param_3[2];
        }
        uStack_d8 = *(undefined8 *)(param_1 + 0x108);
        uStack_e0 = *(ulong *)(param_1 + 0x100);
        uStack_c8 = *(undefined8 *)(param_1 + 0x118);
        uStack_d0 = *(undefined8 *)(param_1 + 0x110);
        uStack_b8 = *(undefined8 *)(param_1 + 0x128);
        uStack_c0 = *(undefined8 *)(param_1 + 0x120);
        lStack_a8 = *(long *)(param_1 + 0x138);
        uStack_b0 = *(undefined8 *)(param_1 + 0x130);
        puStack_a0 = &uStack_d8;
        iVar3 = *(int *)(param_1 + 0x104);
        uStack_90 = 0;
        uStack_88 = 0;
        if (*(long *)(param_1 + 0x138) != 0) {
          piVar2 = (int *)(*(long *)(param_1 + 0x138) + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          iVar3 = *(int *)(param_1 + 0x104);
        }
        puStack_98 = &uStack_90;
        if (iVar3 < 3) {
          uStack_90 = **(undefined8 **)(param_1 + 0x148);
          uStack_88 = (*(undefined8 **)(param_1 + 0x148))[1];
        }
        else {
          uStack_e0 = uStack_e0 & 0xffffffff;
          func_0x000109a84868(&uStack_e0,param_1 + 0x100);
        }
        if (*(int *)(param_1 + 0x1c) == 0) {
          __ZNSt3__15mutex4lockEv(param_1 + 0x78);
          FUN_1094abed8(&plStack_120,*(undefined8 *)(param_1 + 0xf8),&uStack_118);
          plVar1 = plStack_120;
          plStack_120 = (long *)0x0;
          lVar12 = param_1 + 0x1c8;
          FUN_1094b2580(lVar12,param_3,param_3);
          plVar8 = *(long **)(lVar12 + 0x28);
          *(long **)(lVar12 + 0x28) = plVar1;
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 1;
            do {
              lVar12 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
          if (plStack_120 != (long *)0x0) {
            plVar1 = plStack_120 + 1;
            do {
              lVar12 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_120 + 0x10))();
            }
          }
          __ZNSt3__15mutex6unlockEv(param_1 + 0x78);
          FUN_1094ac1ec(&uStack_80);
        }
        else {
          FUN_1094acc10(auStack_128,*(undefined8 *)(param_1 + 0xf8),&uStack_80);
          __ZNSt3__16futureIvED1Ev(auStack_128);
          __ZNSt3__15mutex4lockEv(param_1 + 0x78);
          FUN_1094abed8(&plStack_120,*(undefined8 *)(param_1 + 0xf8),&uStack_118);
          plVar1 = plStack_120;
          plStack_120 = (long *)0x0;
          lVar12 = param_1 + 0x1c8;
          FUN_1094b2580(lVar12,param_3,param_3);
          plVar8 = *(long **)(lVar12 + 0x28);
          *(long **)(lVar12 + 0x28) = plVar1;
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 1;
            do {
              lVar12 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
          if (plStack_120 != (long *)0x0) {
            plVar1 = plStack_120 + 1;
            do {
              lVar12 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_120 + 0x10))();
            }
          }
          __ZNSt3__15mutex6unlockEv(param_1 + 0x78);
        }
        if (lStack_a8 != 0) {
          piVar2 = (int *)(lStack_a8 + 0x14);
          do {
            iVar3 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(&uStack_e0);
          }
        }
        lStack_a8 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        if (0 < uStack_e0._4_4_) {
          lVar12 = 0;
          do {
            *(undefined4 *)((long)puStack_a0 + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < uStack_e0._4_4_);
        }
        if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
          _free(puStack_98[-1]);
        }
        if (lStack_e8 < 0) {
          __ZdlPv(uStack_f8);
        }
        plVar1 = plStack_100;
        if (plStack_100 != (long *)0x0) {
          plVar8 = plStack_100 + 1;
          do {
            lVar12 = *plVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_100 + 0x10))(plStack_100);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        if (plStack_110 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      else if (*(int *)(param_1 + 0x1c) == 0) {
        FUN_1094ac1ec(&uStack_80);
      }
      else {
        FUN_1094acc10(auStack_130,*(undefined8 *)(param_1 + 0xf8),&uStack_80);
        __ZNSt3__16futureIvED1Ev(auStack_130);
      }
      if (plStack_78 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      goto LAB_1094ab2ec;
    }
  }
  lVar12 = 0;
  FUN_1092315e8();
  func_0x000104bd46a0();
  FUN_1094ace14(&uStack_118);
  FUN_1094aced8(&uStack_80);
  __ZNSt3__119__shared_weak_count14__release_weakEv();
  lVar6 = lVar12;
  __Unwind_Resume();
  uStack_154 = uVar10;
  lStack_150 = lVar12;
  __ZNSt3__115recursive_mutex4lockEv(lVar6 + 0x38);
  FUN_1094b379c(lVar6 + 0x268,&uStack_154);
  plVar7 = (long *)(lVar6 + 0x228);
  while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
    func_0x0001094b37d0(plVar7 + 5,&uStack_154);
  }
  plVar7 = (long *)(lVar6 + 0x250);
  while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
    FUN_1094b3a1c(plVar7 + 5,&uStack_154);
  }
  uVar9 = lVar6 + 0x38;
  __ZNSt3__115recursive_mutex6unlockEv(uVar9);
  return uVar9;
}



/* Entry: 1094ab45c; end: 1094ab4f3;  */

void FUN_1094ab45c(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined4 uStack_24;
  
  uStack_24 = param_2;
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x38);
  FUN_1094b379c(param_1 + 0x268,&uStack_24);
  plVar1 = (long *)(param_1 + 0x228);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    func_0x0001094b37d0(plVar1 + 5,&uStack_24);
  }
  plVar1 = (long *)(param_1 + 0x250);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_1094b3a1c(plVar1 + 5,&uStack_24);
  }
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x38);
  return;
}



/* Entry: 1094ab4f4; end: 1094ab7a7;  */

void FUN_1094ab4f4(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long *extraout_x8;
  long lVar8;
  undefined8 *puVar9;
  long *unaff_x19;
  undefined8 ***unaff_x22;
  undefined8 ***pppuVar10;
  long *unaff_x23;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long *plStack_108;
  undefined8 **ppuStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined8 *apuStack_e8 [8];
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  code *pcStack_88;
  long alStack_80 [3];
  long *plStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)param_1[2];
  plVar6 = plVar4;
  plVar5 = param_2;
  if (plVar4 != (long *)0x0) {
    pppuVar10 = (undefined8 ***)param_1[1];
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar6 = plVar4;
    unaff_x22 = pppuVar10;
    if (plVar4 != (long *)0x0) {
      unaff_x23 = plVar4 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
        if (bVar3) {
          *unaff_x23 = *unaff_x23 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = plVar4 + 1;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
        if (bVar3) {
          *unaff_x23 = *unaff_x23 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lStack_f0 = *param_2;
      unaff_x22 = &ppuStack_100;
      param_2 = param_2 + 1;
      ppuStack_100 = pppuVar10;
      plStack_f8 = plVar4;
      (**(code **)(*param_2 + 0x10))(apuStack_e8);
      iVar7 = (int)param_2;
      if (*(int *)((long)param_1 + 0x1c) == 0) {
        FUN_1094acf14(&ppuStack_100);
      }
      else {
        puVar11 = (undefined8 *)param_1[0x1f];
        unaff_x23 = &lStack_a8;
        lStack_a8 = 0;
        uStack_98 = 0x5002000000;
        pcStack_90 = FUN_1094b355c;
        pcStack_88 = FUN_1094b35d0;
        plStack_68 = (long *)0x0;
        plVar5 = (long *)0x58;
        plStack_a0 = unaff_x23;
        __Znwm();
        param_1 = alStack_80;
        *plVar5 = (long)&PTR_FUN_110af72c0;
        plVar5[2] = (long)plStack_f8;
        plVar5[1] = (long)ppuStack_100;
        ppuStack_100 = (undefined8 ***)0x0;
        plStack_f8 = (long *)0x0;
        plVar5[3] = lStack_f0;
        (*(code *)apuStack_e8[0][2])(plVar5 + 4,apuStack_e8);
        plStack_68 = plVar5;
        __ZNSt3__17promiseIvEC1Ev(auStack_60);
        __ZNSt3__17promiseIvE10get_futureEv(auStack_130,plStack_a0 + 9);
        puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_120 = 0x42000000;
        pcStack_118 = FUN_1094b3cb0;
        puStack_110 = &UNK_110af7280;
        plStack_108 = &lStack_a8;
        func_0x000104c62d88(puVar11[1],*puVar11,&puStack_128);
        iVar7 = 8;
        __Block_object_dispose(&lStack_a8);
        __ZNSt3__17promiseIvED1Ev(auStack_60);
        if (plStack_68 == param_1) {
          lVar8 = 0x18;
LAB_1094ab6c8:
          (**(code **)(*plStack_68 + lVar8))();
        }
        else if (plStack_68 != (long *)0x0) {
          lVar8 = 0x20;
          goto LAB_1094ab6c8;
        }
        __ZNSt3__16futureIvED1Ev(auStack_130);
      }
      (*(code *)*apuStack_e8[0])(apuStack_e8);
      if (plStack_f8 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      unaff_x19 = plVar4;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
      goto LAB_1094ab738;
    }
  }
  iVar7 = (int)plVar5;
  FUN_1092315e8();
LAB_1094ab738:
  ___stack_chk_fail();
  if (iVar7 != 0) {
    func_0x000104bd46a0();
    __Block_object_dispose(&lStack_a8,8);
    __ZNSt3__17promiseIvED1Ev(unaff_x23 + 9);
    FUN_109477174(param_1);
    (*(code *)*apuStack_e8[0])(unaff_x22 + 3);
    if (plStack_f8 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
  }
  __Unwind_Resume();
  __ZNSt3__15mutex4lockEv(plVar6 + 0x17);
  lVar8 = plVar6[0x52];
  lVar13 = plVar6[0x55];
  lVar12 = plVar6[0x54];
  iVar7 = *(int *)((long)plVar6 + 0x294);
  extraout_x8[1] = plVar6[0x53];
  *extraout_x8 = lVar8;
  extraout_x8[3] = lVar13;
  extraout_x8[2] = lVar12;
  lVar8 = plVar6[0x59];
  lVar14 = plVar6[0x56];
  lVar13 = plVar6[0x59];
  lVar12 = plVar6[0x58];
  extraout_x8[5] = plVar6[0x57];
  extraout_x8[4] = lVar14;
  extraout_x8[7] = lVar13;
  extraout_x8[6] = lVar12;
  extraout_x8[10] = 0;
  extraout_x8[8] = (long)(extraout_x8 + 1);
  extraout_x8[9] = (long)(extraout_x8 + 10);
  extraout_x8[0xb] = 0;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    iVar7 = *(int *)((long)plVar6 + 0x294);
  }
  if (iVar7 < 3) {
    puVar11 = (undefined8 *)plVar6[0x5b];
    puVar9 = (undefined8 *)extraout_x8[9];
    *puVar9 = *puVar11;
    puVar9[1] = puVar11[1];
  }
  else {
    *(undefined4 *)((long)extraout_x8 + 4) = 0;
    func_0x000109a84868(extraout_x8,plVar6 + 0x52);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(plVar6 + 0x17);
  return;
}



/* Entry: 1094ab7a8; end: 1094ab863;  */

void FUN_1094ab7a8(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0xb8);
  uVar8 = *(undefined8 *)(param_2 + 0x290);
  uVar10 = *(undefined8 *)(param_2 + 0x2a8);
  uVar9 = *(undefined8 *)(param_2 + 0x2a0);
  iVar2 = *(int *)(param_2 + 0x294);
  param_1[1] = *(undefined8 *)(param_2 + 0x298);
  *param_1 = uVar8;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  lVar6 = *(long *)(param_2 + 0x2c8);
  uVar10 = *(undefined8 *)(param_2 + 0x2b0);
  uVar9 = *(undefined8 *)(param_2 + 0x2c8);
  uVar8 = *(undefined8 *)(param_2 + 0x2c0);
  param_1[5] = *(undefined8 *)(param_2 + 0x2b8);
  param_1[4] = uVar10;
  param_1[7] = uVar9;
  param_1[6] = uVar8;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = *(int *)(param_2 + 0x294);
  }
  if (iVar2 < 3) {
    puVar5 = *(undefined8 **)(param_2 + 0x2d8);
    puVar7 = (undefined8 *)param_1[9];
    *puVar7 = *puVar5;
    puVar7[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1,param_2 + 0x290);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0xb8);
  return;
}



/* Entry: 1094ab864; end: 1094aba93;  */

void FUN_1094ab864(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x50);
  __ZNSt3__115recursive_mutex4lockEv(lVar7 + 0x38);
  if (*(long *)(lVar7 + 0x138) != 0) {
    piVar1 = (int *)(*(long *)(lVar7 + 0x138) + 0x14);
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
      func_0x000109a848d4(lVar7 + 0x100);
    }
  }
  *(undefined8 *)(lVar7 + 0x138) = 0;
  *(undefined8 *)(lVar7 + 0x118) = 0;
  *(undefined8 *)(lVar7 + 0x110) = 0;
  *(undefined8 *)(lVar7 + 0x128) = 0;
  *(undefined8 *)(lVar7 + 0x120) = 0;
  if (0 < *(int *)(lVar7 + 0x104)) {
    lVar5 = 0;
    lVar6 = *(long *)(lVar7 + 0x140);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar7 + 0x104));
  }
  FUN_1092cc400(lVar7 + 0x160);
  if (*(long *)(lVar7 + 0x208) != 0) {
    func_0x0001094b0278(*(undefined8 *)(lVar7 + 0x200));
    *(undefined8 *)(lVar7 + 0x200) = 0;
    lVar5 = *(long *)(lVar7 + 0x1f8);
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)(*(long *)(lVar7 + 0x1f0) + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
    }
    *(undefined8 *)(lVar7 + 0x208) = 0;
  }
  func_0x0001094b0458(lVar7 + 0x218);
  func_0x0001094b04ac(lVar7 + 0x240);
  func_0x0001094b0500(lVar7 + 0x268);
  if (*(long *)(lVar7 + 400) != 0) {
    func_0x0001094b00c4(lVar7 + 0x178,*(undefined8 *)(lVar7 + 0x188));
    *(undefined8 *)(lVar7 + 0x188) = 0;
    lVar5 = *(long *)(lVar7 + 0x180);
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)(*(long *)(lVar7 + 0x178) + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
    }
    *(undefined8 *)(lVar7 + 400) = 0;
  }
  __ZNSt3__115recursive_mutex6unlockEv(lVar7 + 0x38);
  __ZNSt3__15mutex4lockEv(lVar7 + 0xb8);
  if (*(long *)(lVar7 + 0x2c8) != 0) {
    piVar1 = (int *)(*(long *)(lVar7 + 0x2c8) + 0x14);
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
      func_0x000109a848d4(lVar7 + 0x290);
    }
  }
  *(undefined8 *)(lVar7 + 0x2c8) = 0;
  *(undefined8 *)(lVar7 + 0x2a8) = 0;
  *(undefined8 *)(lVar7 + 0x2a0) = 0;
  *(undefined8 *)(lVar7 + 0x2b8) = 0;
  *(undefined8 *)(lVar7 + 0x2b0) = 0;
  if (0 < *(int *)(lVar7 + 0x294)) {
    lVar5 = 0;
    lVar6 = *(long *)(lVar7 + 0x2d0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar7 + 0x294));
  }
  __ZNSt3__15mutex6unlockEv(lVar7 + 0xb8);
  __ZNSt3__15mutex4lockEv(lVar7 + 0x78);
  if (*(long *)(lVar7 + 0x1b8) != 0) {
    func_0x0001094b0160(*(undefined8 *)(lVar7 + 0x1b0));
    *(undefined8 *)(lVar7 + 0x1b0) = 0;
    lVar5 = *(long *)(lVar7 + 0x1a8);
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)(*(long *)(lVar7 + 0x1a0) + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
    }
    *(undefined8 *)(lVar7 + 0x1b8) = 0;
  }
  if (*(long *)(lVar7 + 0x1e0) != 0) {
    func_0x0001094b01dc(*(undefined8 *)(lVar7 + 0x1d8));
    *(undefined8 *)(lVar7 + 0x1d8) = 0;
    lVar5 = *(long *)(lVar7 + 0x1d0);
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)(*(long *)(lVar7 + 0x1c8) + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
    }
    *(undefined8 *)(lVar7 + 0x1e0) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar7 + 0x78);
  return;
}



/* Entry: 1094aba94; end: 1094abc53;  */

undefined8 * FUN_1094aba94(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110af6ee8;
  *(undefined4 *)(param_1 + 3) = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 7);
  param_1[0xf] = 0x32aaaba7;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x32aaaba7;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[2] = 0x32aaaba7;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((long)puVar1 + 0x49) = 0;
  *(undefined8 *)((long)puVar1 + 0x41) = 0;
  puVar2 = &UNK_10f573308;
  _dispatch_queue_create(&UNK_10f573308,0);
  *puVar1 = puVar2;
  _dispatch_group_create();
  puVar1[1] = puVar2;
  param_1[0x1f] = puVar1;
  *(undefined4 *)(param_1 + 0x20) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = param_1 + 0x21;
  param_1[0x29] = param_1 + 0x2a;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0x3f800000;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0x3f800000;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x52) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x29c) = 0;
  *(undefined8 *)((long)param_1 + 0x294) = 0;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  *(undefined8 *)((long)param_1 + 0x2a4) = 0;
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = param_1 + 0x53;
  param_1[0x5b] = param_1 + 0x5c;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  return param_1;
}



/* Entry: 1094abc54; end: 1094abe67;  */

undefined8 * FUN_1094abc54(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110af6ee8;
  FUN_1094a310c(param_1 + 0x1f);
  if (param_1[0x59] != 0) {
    piVar1 = (int *)(param_1[0x59] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x52);
    }
  }
  param_1[0x59] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  if (0 < *(int *)((long)param_1 + 0x294)) {
    lVar5 = 0;
    lVar7 = param_1[0x5a];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x294));
  }
  puVar6 = (undefined8 *)param_1[0x5b];
  if (puVar6 != param_1 + 0x5c && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  FUN_1094b03dc(param_1 + 0x4d);
  func_0x0001094b032c(param_1[0x4a]);
  lVar5 = param_1[0x48];
  param_1[0x48] = 0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  func_0x0001094b02f0(param_1[0x45]);
  lVar5 = param_1[0x43];
  param_1[0x43] = 0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  func_0x0001094b0278(param_1[0x40]);
  lVar5 = param_1[0x3e];
  param_1[0x3e] = 0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  func_0x0001094b01dc(param_1[0x3b]);
  lVar5 = param_1[0x39];
  param_1[0x39] = 0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  func_0x0001094b0160(param_1[0x36]);
  lVar5 = param_1[0x34];
  param_1[0x34] = 0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  func_0x0001094b008c(param_1 + 0x2f);
  puStack_28 = param_1 + 0x2c;
  FUN_1092cc3c0(&puStack_28);
  if (param_1[0x27] != 0) {
    piVar1 = (int *)(param_1[0x27] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x20);
    }
  }
  param_1[0x27] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  if (0 < *(int *)((long)param_1 + 0x104)) {
    lVar5 = 0;
    lVar7 = param_1[0x28];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x104));
  }
  puVar6 = (undefined8 *)param_1[0x29];
  if (puVar6 != param_1 + 0x2a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  FUN_109476864(param_1 + 0x1f,0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x17);
  __ZNSt3__15mutexD1Ev(param_1 + 0xf);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 7);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1094abe68; end: 1094abe6b;  */

undefined8 * FUN_1094abe68(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110af6ee8;
  FUN_1094a310c(param_1 + 0x1f);
  if (param_1[0x59] != 0) {
    piVar1 = (int *)(param_1[0x59] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x52);
    }
  }
  param_1[0x59] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  if (0 < *(int *)((long)param_1 + 0x294)) {
    lVar5 = 0;
    lVar7 = param_1[0x5a];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x294));
  }
  puVar6 = (undefined8 *)param_1[0x5b];
  if (puVar6 != param_1 + 0x5c && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  FUN_1094b03dc(param_1 + 0x4d);
  func_0x0001094b032c(param_1[0x4a]);
  lVar5 = param_1[0x48];
  param_1[0x48] = 0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  func_0x0001094b02f0(param_1[0x45]);
  lVar5 = param_1[0x43];
  param_1[0x43] = 0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  func_0x0001094b0278(param_1[0x40]);
  lVar5 = param_1[0x3e];
  param_1[0x3e] = 0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  func_0x0001094b01dc(param_1[0x3b]);
  lVar5 = param_1[0x39];
  param_1[0x39] = 0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  func_0x0001094b0160(param_1[0x36]);
  lVar5 = param_1[0x34];
  param_1[0x34] = 0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  func_0x0001094b008c(param_1 + 0x2f);
  puStack_28 = param_1 + 0x2c;
  FUN_1092cc3c0(&puStack_28);
  if (param_1[0x27] != 0) {
    piVar1 = (int *)(param_1[0x27] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x20);
    }
  }
  param_1[0x27] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  if (0 < *(int *)((long)param_1 + 0x104)) {
    lVar5 = 0;
    lVar7 = param_1[0x28];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x104));
  }
  puVar6 = (undefined8 *)param_1[0x29];
  if (puVar6 != param_1 + 0x2a && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  FUN_109476864(param_1 + 0x1f,0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x17);
  __ZNSt3__15mutexD1Ev(param_1 + 0xf);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 7);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1094abe6c; end: 1094abea7;  */

void FUN_1094abe6c(void)

{
  FUN_1094abc54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094abea8; end: 1094abed7;  */

long FUN_1094abea8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
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



/* Entry: 1094abed8; end: 1094ac1eb;  */

/* WARNING: Removing unreachable block (ram,0x0001094ac4cc) */
/* WARNING: Removing unreachable block (ram,0x0001094ac4d0) */
/* WARNING: Removing unreachable block (ram,0x0001094ac4d8) */
/* WARNING: Removing unreachable block (ram,0x0001094ac4e0) */
/* WARNING: Removing unreachable block (ram,0x0001094ac4e4) */
/* WARNING: Removing unreachable block (ram,0x0001094ac504) */
/* WARNING: Removing unreachable block (ram,0x0001094ac50c) */
/* WARNING: Removing unreachable block (ram,0x0001094ac520) */
/* WARNING: Removing unreachable block (ram,0x0001094ac530) */

void FUN_1094abed8(long *param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  ulong unaff_x28;
  float fVar24;
  undefined4 auStack_368 [2];
  uint *puStack_360;
  undefined8 uStack_358;
  uint uStack_350;
  int iStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  long lStack_318;
  undefined4 *puStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  ulong uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 *puStack_248;
  undefined4 uStack_1c8;
  undefined8 uStack_1c4;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  long lStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  code *pcStack_80;
  code *pcStack_78;
  long alStack_70 [3];
  long *plStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  lStack_88 = 0x5002000000;
  pcStack_80 = FUN_1094b2984;
  pcStack_78 = FUN_1094b29f8;
  plStack_58 = (long *)0x0;
  plVar10 = (long *)0xa0;
  __Znwm();
  *plVar10 = (long)&PTR_FUN_110af7158;
  lVar12 = param_3[1];
  lVar16 = *param_3;
  plVar10[2] = param_3[1];
  plVar10[1] = lVar16;
  if (lVar12 != 0) {
    plVar11 = (long *)(lVar12 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar12 = param_3[2];
  plVar10[4] = param_3[3];
  plVar10[3] = lVar12;
  if (param_3[3] != 0) {
    plVar11 = (long *)(param_3[3] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (*(char *)((long)param_3 + 0x37) < '\0') {
    func_0x000107c3192c(plVar10 + 5,param_3[4],param_3[5]);
  }
  else {
    lVar12 = param_3[4];
    plVar10[6] = param_3[5];
    plVar10[5] = lVar12;
    plVar10[7] = param_3[6];
  }
  lVar12 = param_3[7];
  plVar10[9] = param_3[8];
  plVar10[8] = lVar12;
  iVar4 = *(int *)((long)param_3 + 0x3c);
  lVar12 = param_3[9];
  lVar19 = param_3[0xc];
  lVar16 = param_3[0xb];
  plVar10[0xb] = param_3[10];
  plVar10[10] = lVar12;
  plVar10[0xd] = lVar19;
  plVar10[0xc] = lVar16;
  lVar12 = param_3[0xe];
  lVar16 = param_3[0xd];
  plVar10[0xf] = param_3[0xe];
  plVar10[0xe] = lVar16;
  plVar10[0x12] = 0;
  plVar10[0x10] = (long)(plVar10 + 9);
  plVar10[0x11] = (long)(plVar10 + 0x12);
  plVar10[0x13] = 0;
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    iVar4 = *(int *)((long)param_3 + 0x3c);
  }
  if (iVar4 < 3) {
    puVar13 = (undefined8 *)param_3[0x10];
    puVar20 = (undefined8 *)plVar10[0x11];
    *puVar20 = *puVar13;
    puVar20[1] = puVar13[1];
  }
  else {
    *(undefined4 *)((long)plVar10 + 0x44) = 0;
    func_0x000109a84868();
  }
  puVar13 = (undefined8 *)0xa8;
  plStack_58 = plVar10;
  __Znwm();
  puVar13[2] = 0;
  puVar13[3] = 0x32aaaba7;
  puVar13[5] = 0;
  puVar13[4] = 0;
  puVar13[7] = 0;
  puVar13[6] = 0;
  puVar13[9] = 0;
  puVar13[8] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0x3cb0b1bb;
  *(undefined8 *)((long)puVar13 + 0x84) = 0;
  *(undefined8 *)((long)puVar13 + 0x7c) = 0;
  puVar13[0xd] = 0;
  puVar13[0xc] = 0;
  puVar13[0xf] = 0;
  puVar13[0xe] = 0;
  *puVar13 = &PTR_FUN_110af71c0;
  puVar13[1] = 0;
  puStack_50 = puVar13;
  if (puStack_90[9] == 0) {
    FUN_1094362d4(3);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1094ac164);
    (*pcVar9)();
  }
  *param_1 = puStack_90[9];
  FUN_1094a4db4();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  pcStack_b0 = FUN_1094b2a20;
  puStack_a8 = &UNK_110af7118;
  puStack_a0 = &uStack_98;
  func_0x000104c62d88(param_2[1],*param_2,&puStack_c0);
  __Block_object_dispose(&uStack_98,8);
  FUN_1094b2ba8(&puStack_50);
  plVar11 = plStack_58;
  if (plStack_58 == alStack_70) {
    lVar12 = 0x18;
LAB_1094ac11c:
    (**(code **)(*plStack_58 + lVar12))();
  }
  else if (plStack_58 != (long *)0x0) {
    lVar12 = 0x20;
    goto LAB_1094ac11c;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001094b0898(plVar10 + 3);
  if (lStack_88 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZdlPv(&uStack_98);
  __Unwind_Resume();
  plVar10 = (long *)plVar11[1];
  if (plVar10 == (long *)0x0) {
    return;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar10 == (long *)0x0) {
    return;
  }
  lVar12 = *plVar11;
  lStack_158 = lVar12;
  plStack_150 = plVar10;
  if (lVar12 == 0) goto LAB_1094aca90;
  __ZNSt3__115recursive_mutex4lockEv(lVar12 + 0x38);
  plVar2 = plVar11 + 3;
  lVar16 = lVar12 + 0x218;
  FUN_1094ae1ec(lVar16,plVar2);
  if (lVar16 != 0) {
    lVar16 = lVar12 + 0x218;
    uStack_290 = plVar2;
    FUN_1094ae2d0(lVar16,plVar2,&uStack_290);
    plVar21 = plVar11 + 2;
    lVar16 = lVar16 + 0x28;
    FUN_1094ae848(lVar16,(int)*plVar21);
    if (lVar16 != 0) {
      lVar16 = lVar12 + 0x268;
      uStack_290 = plVar21;
      FUN_1094ae8e8(lVar16,plVar21,&UNK_10dd5b8f9,&uStack_290,&uStack_1c8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar16 + 0x18,plVar2)
      ;
      __ZNSt3__115recursive_mutex6unlockEv(lVar12 + 0x38);
      goto LAB_1094aca90;
    }
  }
  plVar11 = plVar11 + 2;
  FUN_1094add1c(&uStack_168,lVar12,plVar11,plVar2);
  uStack_1c8 = 0x42ff0000;
  lStack_188 = (long)&uStack_1c4 + 4;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1c4 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_19c = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  lStack_190 = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  puStack_180 = &uStack_178;
  FUN_1094b6d5c(uStack_168,lVar12 + 0x100,*(long *)(lVar12 + 0x160) + (long)(int)*plVar11 * 0x18,
                &uStack_1c8);
  lVar16 = lVar12 + 0x178;
  FUN_1094aed70(lVar16,plVar2);
  if (lVar16 == 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_2f0,&UNK_10f56eb69,plVar2);
    plVar10 = &uStack_2f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar10,&DAT_10f68f57e,1);
    lStack_288 = plVar10[1];
    uStack_290 = (long *)*plVar10;
    lStack_280 = plVar10[2];
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = 0;
    puVar13 = uStack_290;
    if (-1 < lStack_280) {
      puVar13 = &uStack_290;
    }
    FUN_109389218(&UNK_10f56ea98,0x11d,puVar13);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1094acb48);
    (*pcVar9)();
  }
  lVar16 = lVar12 + 0x178;
  uStack_290 = plVar2;
  FUN_1094b08f0(lVar16,plVar2,&UNK_10dd5b8f9,&uStack_290,&uStack_2f0);
  puVar13 = *(undefined8 **)(lVar16 + 0x28);
  FUN_1094aee54();
  FUN_1094c6988(&uStack_290,*puVar13,&uStack_1c8);
  uStack_2e8 = lStack_288;
  uStack_2f0 = uStack_290;
  uStack_2d8 = uStack_278;
  uStack_2e0 = lStack_280;
  uStack_2c8 = uStack_268;
  uStack_2d0 = uStack_270;
  uStack_2b0 = (ulong)&uStack_2f0 | 8;
  lStack_2b8 = lStack_258;
  uStack_2c0 = uStack_260;
  uStack_2a0 = 0;
  uStack_298 = 0;
  if (lStack_258 != 0) {
    piVar1 = (int *)(lStack_258 + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puStack_2a8 = &uStack_2a0;
  if (uStack_290._4_4_ < 3) {
    uStack_2a0 = *puStack_248;
    uStack_298 = puStack_248[1];
  }
  else {
    uStack_2f0 = (long *)((ulong)uStack_290 & 0xffffffff);
    func_0x000109a84868(&uStack_2f0,&uStack_290);
  }
  uStack_350 = 0x42ff0000;
  puStack_310 = &uStack_348;
  uStack_344 = 0;
  uStack_340 = 0;
  iStack_34c = 0;
  uStack_348 = 0;
  uStack_334 = 0;
  uStack_330 = 0;
  uStack_33c = 0;
  uStack_338 = 0;
  uStack_324 = 0;
  uStack_32c = 0;
  uStack_328 = 0;
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_31c = 0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uVar7 = (uint)uStack_2f0 >> 3 & 0x1ff;
  puStack_308 = &uStack_300;
  if (uVar7 == 3) {
    plStack_148 = (long *)CONCAT44(plStack_148._4_4_,0x1010000);
    plStack_140 = &uStack_2f0;
    uStack_138 = 0;
    auStack_368[0] = 0x2010000;
    uStack_358 = 0;
    puStack_360 = &uStack_350;
    FUN_109ac9fc8(&plStack_148,auStack_368,1,0);
  }
  else if (uVar7 == 0) {
    plStack_148 = (long *)CONCAT44(plStack_148._4_4_,0x1010000);
    plStack_140 = &uStack_2f0;
    uStack_138 = 0;
    auStack_368[0] = 0x2010000;
    puStack_360 = &uStack_350;
    uStack_358 = 0;
    FUN_109ac9fc8(&plStack_148,auStack_368,8,0);
  }
  else {
    if (lStack_2b8 != 0) {
      piVar1 = (int *)(lStack_2b8 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lStack_318 = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_340 = 0;
    uStack_33c = 0;
    uStack_328 = 0;
    uStack_324 = 0;
    uStack_330 = 0;
    uStack_32c = 0;
    uStack_350 = (uint)uStack_2f0;
    if (uStack_2f0._4_4_ < 3) {
      iStack_34c = uStack_2f0._4_4_;
      uStack_348 = (undefined4)uStack_2e8;
      uStack_344 = (undefined4)((ulong)uStack_2e8 >> 0x20);
      uStack_300 = *puStack_2a8;
      uStack_2f8 = puStack_2a8[1];
    }
    else {
      func_0x000109a84868(&uStack_350,&uStack_2f0);
    }
    uStack_338 = (undefined4)uStack_2d8;
    uStack_334 = (undefined4)((ulong)uStack_2d8 >> 0x20);
    uStack_340 = (undefined4)uStack_2e0;
    uStack_33c = (undefined4)((ulong)uStack_2e0 >> 0x20);
    uStack_328 = (undefined4)uStack_2c8;
    uStack_324 = (undefined4)((ulong)uStack_2c8 >> 0x20);
    uStack_330 = (undefined4)uStack_2d0;
    uStack_32c = (undefined4)((ulong)uStack_2d0 >> 0x20);
    uStack_320 = (undefined4)uStack_2c0;
    uStack_31c = (undefined4)((ulong)uStack_2c0 >> 0x20);
    lStack_318 = lStack_2b8;
  }
  lVar19 = lStack_158;
  lVar16 = lStack_158 + 0x218;
  plStack_148 = plVar2;
  FUN_1094ae2d0(lVar16,plVar2,&plStack_148);
  plVar10 = (long *)(lVar16 + 0x28);
  iVar4 = (int)*plVar11;
  uVar22 = (ulong)iVar4;
  uVar23 = *(ulong *)(lVar16 + 0x30);
  if (uVar23 != 0) {
    uVar14 = uVar23 - 1;
    if ((uVar23 & uVar14) == 0) {
      unaff_x28 = uVar14 & uVar22;
    }
    else {
      unaff_x28 = uVar22;
      if (uVar23 <= uVar22) {
        uVar17 = 0;
        if (uVar23 != 0) {
          uVar17 = uVar22 / uVar23;
        }
        unaff_x28 = uVar22 - uVar17 * uVar23;
      }
    }
    puVar13 = *(undefined8 **)(*plVar10 + unaff_x28 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar21 = (long *)*puVar13; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
        uVar17 = plVar21[1];
        if (uVar17 == uVar22) {
          if ((int)plVar21[2] == iVar4) goto LAB_1094ac7a0;
        }
        else {
          if ((uVar23 & uVar14) == 0) {
            uVar17 = uVar17 & uVar14;
          }
          else if (uVar23 <= uVar17) {
            uVar8 = 0;
            if (uVar23 != 0) {
              uVar8 = uVar17 / uVar23;
            }
            uVar17 = uVar17 - uVar8 * uVar23;
          }
          if (uVar17 != unaff_x28) break;
        }
      }
    }
  }
  plVar21 = (long *)0x78;
  __Znwm();
  uStack_138 = 1;
  *plVar21 = 0;
  plVar21[1] = uVar22;
  *(int *)(plVar21 + 2) = iVar4;
  *(undefined4 *)(plVar21 + 3) = 0x42ff0000;
  plVar21[10] = 0;
  plVar21[9] = 0;
  *(undefined8 *)((long)plVar21 + 0x44) = 0;
  *(undefined8 *)((long)plVar21 + 0x3c) = 0;
  *(undefined8 *)((long)plVar21 + 0x34) = 0;
  *(undefined8 *)((long)plVar21 + 0x2c) = 0;
  *(undefined8 *)((long)plVar21 + 0x24) = 0;
  *(undefined8 *)((long)plVar21 + 0x1c) = 0;
  plVar21[0xd] = 0;
  plVar21[0xb] = (long)(plVar21 + 4);
  plVar21[0xc] = (long)(plVar21 + 0xd);
  plVar21[0xe] = 0;
  fVar24 = (float)(*(long *)(lVar16 + 0x40) + 1);
  plStack_148 = plVar21;
  plStack_140 = plVar10;
  if ((uVar23 == 0) || (*(float *)(lVar16 + 0x48) * (float)uVar23 < fVar24)) {
    if (uVar23 < 3) {
      uVar14 = 1;
    }
    else {
      uVar14 = (ulong)((uVar23 & uVar23 - 1) != 0);
    }
    uVar14 = uVar14 | uVar23 << 1;
    uVar23 = (ulong)(fVar24 / *(float *)(lVar16 + 0x48));
    if (uVar14 <= uVar23) {
      uVar14 = uVar23;
    }
    FUN_1094aef18(plVar10,uVar14);
    uVar23 = *(ulong *)(lVar16 + 0x30);
    if ((uVar23 & uVar23 - 1) == 0) {
      unaff_x28 = uVar23 - 1 & uVar22;
    }
    else {
      unaff_x28 = uVar22;
      if (uVar23 <= uVar22) {
        uVar14 = 0;
        if (uVar23 != 0) {
          uVar14 = uVar22 / uVar23;
        }
        unaff_x28 = uVar22 - uVar14 * uVar23;
      }
    }
  }
  lVar18 = *plVar10;
  plVar15 = *(long **)(lVar18 + unaff_x28 * 8);
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)(lVar16 + 0x38);
    *plVar21 = *plVar15;
    *plVar15 = (long)plVar21;
    *(long **)(lVar18 + unaff_x28 * 8) = plVar15;
    if (*plVar21 != 0) {
      uVar22 = *(ulong *)(*plVar21 + 8);
      if ((uVar23 & uVar23 - 1) == 0) {
        uVar22 = uVar22 & uVar23 - 1;
      }
      else if (uVar23 <= uVar22) {
        uVar14 = 0;
        if (uVar23 != 0) {
          uVar14 = uVar22 / uVar23;
        }
        uVar22 = uVar22 - uVar14 * uVar23;
      }
      plVar15 = (long *)(*plVar10 + uVar22 * 8);
      goto LAB_1094ac790;
    }
  }
  else {
    *plVar21 = *plVar15;
LAB_1094ac790:
    *plVar15 = (long)plVar21;
  }
  *(long *)(lVar16 + 0x40) = *(long *)(lVar16 + 0x40) + 1;
LAB_1094ac7a0:
  puVar3 = (uint *)(plVar21 + 3);
  if (puVar3 != &uStack_350) {
    if (lStack_318 != 0) {
      piVar1 = (int *)(lStack_318 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (plVar21[10] != 0) {
      piVar1 = (int *)(plVar21[10] + 0x14);
      do {
        iVar4 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(puVar3);
      }
    }
    plVar21[10] = 0;
    plVar21[6] = 0;
    plVar21[5] = 0;
    plVar21[8] = 0;
    plVar21[7] = 0;
    if (*(int *)((long)plVar21 + 0x1c) < 1) {
      *puVar3 = uStack_350;
LAB_1094ac848:
      if (2 < iStack_34c) goto LAB_1094ac87c;
      *(int *)((long)plVar21 + 0x1c) = iStack_34c;
      plVar21[4] = CONCAT44(uStack_344,uStack_348);
      puVar13 = (undefined8 *)plVar21[0xc];
      *puVar13 = *puStack_308;
      puVar13[1] = puStack_308[1];
    }
    else {
      lVar16 = 0;
      lVar19 = plVar21[0xb];
      do {
        *(undefined4 *)(lVar19 + lVar16 * 4) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)((long)plVar21 + 0x1c));
      *puVar3 = uStack_350;
      if (*(int *)((long)plVar21 + 0x1c) < 3) goto LAB_1094ac848;
LAB_1094ac87c:
      func_0x000109a84868(puVar3,&uStack_350);
    }
    plVar21[6] = CONCAT44(uStack_334,uStack_338);
    plVar21[5] = CONCAT44(uStack_33c,uStack_340);
    plVar21[8] = CONCAT44(uStack_324,uStack_328);
    plVar21[7] = CONCAT44(uStack_32c,uStack_330);
    plVar21[10] = lStack_318;
    plVar21[9] = CONCAT44(uStack_31c,uStack_320);
    lVar19 = lStack_158;
  }
  lVar19 = lVar19 + 0x268;
  plStack_148 = plVar11;
  FUN_1094ae8e8(lVar19,plVar11,&UNK_10dd5b8f9,&plStack_148,auStack_368);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar19 + 0x18,plVar2);
  if (lStack_318 != 0) {
    piVar1 = (int *)(lStack_318 + 0x14);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_350);
    }
  }
  lStack_318 = 0;
  uStack_338 = 0;
  uStack_334 = 0;
  uStack_340 = 0;
  uStack_33c = 0;
  uStack_328 = 0;
  uStack_324 = 0;
  uStack_330 = 0;
  uStack_32c = 0;
  if (0 < iStack_34c) {
    lVar16 = 0;
    do {
      puStack_310[lVar16] = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_34c);
  }
  if (puStack_308 != &uStack_300 && puStack_308 != (undefined8 *)0x0) {
    _free(puStack_308[-1]);
  }
  if (lStack_2b8 != 0) {
    piVar1 = (int *)(lStack_2b8 + 0x14);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_2f0);
    }
  }
  lStack_2b8 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  if (0 < uStack_2f0._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_2b0 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_2f0._4_4_);
  }
  if (puStack_2a8 != &uStack_2a0 && puStack_2a8 != (undefined8 *)0x0) {
    _free(puStack_2a8[-1]);
  }
  FUN_1094af130(&uStack_290);
  if (lStack_190 != 0) {
    piVar1 = (int *)(lStack_190 + 0x14);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_1c8);
    }
  }
  lStack_190 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  if (0 < (int)uStack_1c4) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_188 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uStack_1c4);
  }
  if (puStack_180 != &uStack_178 && puStack_180 != (undefined8 *)0x0) {
    _free(puStack_180[-1]);
  }
  if (plStack_160 != (long *)0x0) {
    plVar10 = plStack_160 + 1;
    do {
      lVar16 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_160);
    }
  }
  plVar10 = plStack_150;
  __ZNSt3__115recursive_mutex6unlockEv(lVar12 + 0x38);
  if (plVar10 == (long *)0x0) {
    return;
  }
LAB_1094aca90:
  plVar11 = plVar10 + 1;
  do {
    lVar12 = *plVar11;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar6) {
      *plVar11 = lVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar12 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
  return;
}



/* Entry: 1094ac1ec; end: 1094acc0f;  */

/* WARNING: Removing unreachable block (ram,0x0001094ac4cc) */
/* WARNING: Removing unreachable block (ram,0x0001094ac4d0) */
/* WARNING: Removing unreachable block (ram,0x0001094ac4d8) */
/* WARNING: Removing unreachable block (ram,0x0001094ac4e0) */
/* WARNING: Removing unreachable block (ram,0x0001094ac4e4) */
/* WARNING: Removing unreachable block (ram,0x0001094ac504) */
/* WARNING: Removing unreachable block (ram,0x0001094ac50c) */
/* WARNING: Removing unreachable block (ram,0x0001094ac520) */
/* WARNING: Removing unreachable block (ram,0x0001094ac530) */

void FUN_1094ac1ec(long *param_1)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  ulong unaff_x28;
  float fVar22;
  undefined4 auStack_2a8 [2];
  uint *puStack_2a0;
  undefined8 uStack_298;
  uint uStack_290;
  int iStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  long lStack_258;
  undefined4 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 *puStack_188;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  long lStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  
  plVar10 = (long *)param_1[1];
  if (plVar10 == (long *)0x0) {
    return;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar10 == (long *)0x0) {
    return;
  }
  lVar18 = *param_1;
  lStack_98 = lVar18;
  plStack_90 = plVar10;
  if (lVar18 == 0) goto LAB_1094aca90;
  __ZNSt3__115recursive_mutex4lockEv(lVar18 + 0x38);
  plVar1 = param_1 + 3;
  lVar14 = lVar18 + 0x218;
  FUN_1094ae1ec(lVar14,plVar1);
  if (lVar14 != 0) {
    lVar14 = lVar18 + 0x218;
    uStack_1d0 = plVar1;
    FUN_1094ae2d0(lVar14,plVar1,&uStack_1d0);
    plVar19 = param_1 + 2;
    lVar14 = lVar14 + 0x28;
    FUN_1094ae848(lVar14,(int)*plVar19);
    if (lVar14 != 0) {
      lVar14 = lVar18 + 0x268;
      uStack_1d0 = plVar19;
      FUN_1094ae8e8(lVar14,plVar19,&UNK_10dd5b8f9,&uStack_1d0,&uStack_108);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar14 + 0x18,plVar1)
      ;
      __ZNSt3__115recursive_mutex6unlockEv(lVar18 + 0x38);
      goto LAB_1094aca90;
    }
  }
  param_1 = param_1 + 2;
  FUN_1094add1c(&uStack_a8,lVar18,param_1,plVar1);
  uStack_108 = 0x42ff0000;
  lStack_c8 = (long)&uStack_104 + 4;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_104 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_dc = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  lStack_d0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  puStack_c0 = &uStack_b8;
  FUN_1094b6d5c(uStack_a8,lVar18 + 0x100,*(long *)(lVar18 + 0x160) + (long)(int)*param_1 * 0x18,
                &uStack_108);
  lVar14 = lVar18 + 0x178;
  FUN_1094aed70(lVar14,plVar1);
  if (lVar14 == 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_230,&UNK_10f56eb69,plVar1);
    plVar10 = &uStack_230;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar10,&DAT_10f68f57e,1);
    lStack_1c8 = plVar10[1];
    uStack_1d0 = (long *)*plVar10;
    lStack_1c0 = plVar10[2];
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = 0;
    puVar11 = uStack_1d0;
    if (-1 < lStack_1c0) {
      puVar11 = &uStack_1d0;
    }
    FUN_109389218(&UNK_10f56ea98,0x11d,puVar11);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1094acb48);
    (*pcVar9)();
  }
  lVar14 = lVar18 + 0x178;
  uStack_1d0 = plVar1;
  FUN_1094b08f0(lVar14,plVar1,&UNK_10dd5b8f9,&uStack_1d0,&uStack_230);
  puVar11 = *(undefined8 **)(lVar14 + 0x28);
  FUN_1094aee54();
  FUN_1094c6988(&uStack_1d0,*puVar11,&uStack_108);
  uStack_228 = lStack_1c8;
  uStack_230 = uStack_1d0;
  uStack_218 = uStack_1b8;
  uStack_220 = lStack_1c0;
  uStack_208 = uStack_1a8;
  uStack_210 = uStack_1b0;
  uStack_1f0 = (ulong)&uStack_230 | 8;
  lStack_1f8 = lStack_198;
  uStack_200 = uStack_1a0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  if (lStack_198 != 0) {
    piVar2 = (int *)(lStack_198 + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puStack_1e8 = &uStack_1e0;
  if (uStack_1d0._4_4_ < 3) {
    uStack_1e0 = *puStack_188;
    uStack_1d8 = puStack_188[1];
  }
  else {
    uStack_230 = (long *)((ulong)uStack_1d0 & 0xffffffff);
    func_0x000109a84868(&uStack_230,&uStack_1d0);
  }
  uStack_290 = 0x42ff0000;
  puStack_250 = &uStack_288;
  uStack_284 = 0;
  uStack_280 = 0;
  iStack_28c = 0;
  uStack_288 = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_264 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  uVar7 = (uint)uStack_230 >> 3 & 0x1ff;
  puStack_248 = &uStack_240;
  if (uVar7 == 3) {
    plStack_88 = (long *)CONCAT44(plStack_88._4_4_,0x1010000);
    plStack_80 = &uStack_230;
    uStack_78 = 0;
    auStack_2a8[0] = 0x2010000;
    uStack_298 = 0;
    puStack_2a0 = &uStack_290;
    FUN_109ac9fc8(&plStack_88,auStack_2a8,1,0);
  }
  else if (uVar7 == 0) {
    plStack_88 = (long *)CONCAT44(plStack_88._4_4_,0x1010000);
    plStack_80 = &uStack_230;
    uStack_78 = 0;
    auStack_2a8[0] = 0x2010000;
    puStack_2a0 = &uStack_290;
    uStack_298 = 0;
    FUN_109ac9fc8(&plStack_88,auStack_2a8,8,0);
  }
  else {
    if (lStack_1f8 != 0) {
      piVar2 = (int *)(lStack_1f8 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lStack_258 = 0;
    uStack_278 = 0;
    uStack_274 = 0;
    uStack_280 = 0;
    uStack_27c = 0;
    uStack_268 = 0;
    uStack_264 = 0;
    uStack_270 = 0;
    uStack_26c = 0;
    uStack_290 = (uint)uStack_230;
    if (uStack_230._4_4_ < 3) {
      iStack_28c = uStack_230._4_4_;
      uStack_288 = (undefined4)uStack_228;
      uStack_284 = (undefined4)((ulong)uStack_228 >> 0x20);
      uStack_240 = *puStack_1e8;
      uStack_238 = puStack_1e8[1];
    }
    else {
      func_0x000109a84868(&uStack_290,&uStack_230);
    }
    uStack_278 = (undefined4)uStack_218;
    uStack_274 = (undefined4)((ulong)uStack_218 >> 0x20);
    uStack_280 = (undefined4)uStack_220;
    uStack_27c = (undefined4)((ulong)uStack_220 >> 0x20);
    uStack_268 = (undefined4)uStack_208;
    uStack_264 = (undefined4)((ulong)uStack_208 >> 0x20);
    uStack_270 = (undefined4)uStack_210;
    uStack_26c = (undefined4)((ulong)uStack_210 >> 0x20);
    uStack_260 = (undefined4)uStack_200;
    uStack_25c = (undefined4)((ulong)uStack_200 >> 0x20);
    lStack_258 = lStack_1f8;
  }
  lVar17 = lStack_98;
  lVar14 = lStack_98 + 0x218;
  plStack_88 = plVar1;
  FUN_1094ae2d0(lVar14,plVar1,&plStack_88);
  plVar10 = (long *)(lVar14 + 0x28);
  iVar4 = (int)*param_1;
  uVar20 = (ulong)iVar4;
  uVar21 = *(ulong *)(lVar14 + 0x30);
  if (uVar21 != 0) {
    uVar12 = uVar21 - 1;
    if ((uVar21 & uVar12) == 0) {
      unaff_x28 = uVar12 & uVar20;
    }
    else {
      unaff_x28 = uVar20;
      if (uVar21 <= uVar20) {
        uVar15 = 0;
        if (uVar21 != 0) {
          uVar15 = uVar20 / uVar21;
        }
        unaff_x28 = uVar20 - uVar15 * uVar21;
      }
    }
    puVar11 = *(undefined8 **)(*plVar10 + unaff_x28 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      for (plVar19 = (long *)*puVar11; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        uVar15 = plVar19[1];
        if (uVar15 == uVar20) {
          if ((int)plVar19[2] == iVar4) goto LAB_1094ac7a0;
        }
        else {
          if ((uVar21 & uVar12) == 0) {
            uVar15 = uVar15 & uVar12;
          }
          else if (uVar21 <= uVar15) {
            uVar8 = 0;
            if (uVar21 != 0) {
              uVar8 = uVar15 / uVar21;
            }
            uVar15 = uVar15 - uVar8 * uVar21;
          }
          if (uVar15 != unaff_x28) break;
        }
      }
    }
  }
  plVar19 = (long *)0x78;
  __Znwm();
  uStack_78 = 1;
  *plVar19 = 0;
  plVar19[1] = uVar20;
  *(int *)(plVar19 + 2) = iVar4;
  *(undefined4 *)(plVar19 + 3) = 0x42ff0000;
  plVar19[10] = 0;
  plVar19[9] = 0;
  *(undefined8 *)((long)plVar19 + 0x44) = 0;
  *(undefined8 *)((long)plVar19 + 0x3c) = 0;
  *(undefined8 *)((long)plVar19 + 0x34) = 0;
  *(undefined8 *)((long)plVar19 + 0x2c) = 0;
  *(undefined8 *)((long)plVar19 + 0x24) = 0;
  *(undefined8 *)((long)plVar19 + 0x1c) = 0;
  plVar19[0xd] = 0;
  plVar19[0xb] = (long)(plVar19 + 4);
  plVar19[0xc] = (long)(plVar19 + 0xd);
  plVar19[0xe] = 0;
  fVar22 = (float)(*(long *)(lVar14 + 0x40) + 1);
  plStack_88 = plVar19;
  plStack_80 = plVar10;
  if ((uVar21 == 0) || (*(float *)(lVar14 + 0x48) * (float)uVar21 < fVar22)) {
    if (uVar21 < 3) {
      uVar12 = 1;
    }
    else {
      uVar12 = (ulong)((uVar21 & uVar21 - 1) != 0);
    }
    uVar12 = uVar12 | uVar21 << 1;
    uVar21 = (ulong)(fVar22 / *(float *)(lVar14 + 0x48));
    if (uVar12 <= uVar21) {
      uVar12 = uVar21;
    }
    FUN_1094aef18(plVar10,uVar12);
    uVar21 = *(ulong *)(lVar14 + 0x30);
    if ((uVar21 & uVar21 - 1) == 0) {
      unaff_x28 = uVar21 - 1 & uVar20;
    }
    else {
      unaff_x28 = uVar20;
      if (uVar21 <= uVar20) {
        uVar12 = 0;
        if (uVar21 != 0) {
          uVar12 = uVar20 / uVar21;
        }
        unaff_x28 = uVar20 - uVar12 * uVar21;
      }
    }
  }
  lVar16 = *plVar10;
  plVar13 = *(long **)(lVar16 + unaff_x28 * 8);
  if (plVar13 == (long *)0x0) {
    plVar13 = (long *)(lVar14 + 0x38);
    *plVar19 = *plVar13;
    *plVar13 = (long)plVar19;
    *(long **)(lVar16 + unaff_x28 * 8) = plVar13;
    if (*plVar19 != 0) {
      uVar20 = *(ulong *)(*plVar19 + 8);
      if ((uVar21 & uVar21 - 1) == 0) {
        uVar20 = uVar20 & uVar21 - 1;
      }
      else if (uVar21 <= uVar20) {
        uVar12 = 0;
        if (uVar21 != 0) {
          uVar12 = uVar20 / uVar21;
        }
        uVar20 = uVar20 - uVar12 * uVar21;
      }
      plVar13 = (long *)(*plVar10 + uVar20 * 8);
      goto LAB_1094ac790;
    }
  }
  else {
    *plVar19 = *plVar13;
LAB_1094ac790:
    *plVar13 = (long)plVar19;
  }
  *(long *)(lVar14 + 0x40) = *(long *)(lVar14 + 0x40) + 1;
LAB_1094ac7a0:
  puVar3 = (uint *)(plVar19 + 3);
  if (puVar3 != &uStack_290) {
    if (lStack_258 != 0) {
      piVar2 = (int *)(lStack_258 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (plVar19[10] != 0) {
      piVar2 = (int *)(plVar19[10] + 0x14);
      do {
        iVar4 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(puVar3);
      }
    }
    plVar19[10] = 0;
    plVar19[6] = 0;
    plVar19[5] = 0;
    plVar19[8] = 0;
    plVar19[7] = 0;
    if (*(int *)((long)plVar19 + 0x1c) < 1) {
      *puVar3 = uStack_290;
LAB_1094ac848:
      if (2 < iStack_28c) goto LAB_1094ac87c;
      *(int *)((long)plVar19 + 0x1c) = iStack_28c;
      plVar19[4] = CONCAT44(uStack_284,uStack_288);
      puVar11 = (undefined8 *)plVar19[0xc];
      *puVar11 = *puStack_248;
      puVar11[1] = puStack_248[1];
    }
    else {
      lVar14 = 0;
      lVar17 = plVar19[0xb];
      do {
        *(undefined4 *)(lVar17 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)((long)plVar19 + 0x1c));
      *puVar3 = uStack_290;
      if (*(int *)((long)plVar19 + 0x1c) < 3) goto LAB_1094ac848;
LAB_1094ac87c:
      func_0x000109a84868(puVar3,&uStack_290);
    }
    plVar19[6] = CONCAT44(uStack_274,uStack_278);
    plVar19[5] = CONCAT44(uStack_27c,uStack_280);
    plVar19[8] = CONCAT44(uStack_264,uStack_268);
    plVar19[7] = CONCAT44(uStack_26c,uStack_270);
    plVar19[10] = lStack_258;
    plVar19[9] = CONCAT44(uStack_25c,uStack_260);
    lVar17 = lStack_98;
  }
  lVar17 = lVar17 + 0x268;
  plStack_88 = param_1;
  FUN_1094ae8e8(lVar17,param_1,&UNK_10dd5b8f9,&plStack_88,auStack_2a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar17 + 0x18,plVar1);
  if (lStack_258 != 0) {
    piVar2 = (int *)(lStack_258 + 0x14);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_290);
    }
  }
  lStack_258 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  if (0 < iStack_28c) {
    lVar14 = 0;
    do {
      puStack_250[lVar14] = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < iStack_28c);
  }
  if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
    _free(puStack_248[-1]);
  }
  if (lStack_1f8 != 0) {
    piVar2 = (int *)(lStack_1f8 + 0x14);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_230);
    }
  }
  lStack_1f8 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  if (0 < uStack_230._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(uStack_1f0 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_230._4_4_);
  }
  if (puStack_1e8 != &uStack_1e0 && puStack_1e8 != (undefined8 *)0x0) {
    _free(puStack_1e8[-1]);
  }
  FUN_1094af130(&uStack_1d0);
  if (lStack_d0 != 0) {
    piVar2 = (int *)(lStack_d0 + 0x14);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_108);
    }
  }
  lStack_d0 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  if (0 < (int)uStack_104) {
    lVar14 = 0;
    do {
      *(undefined4 *)(lStack_c8 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)uStack_104);
  }
  if (puStack_c0 != &uStack_b8 && puStack_c0 != (undefined8 *)0x0) {
    _free(puStack_c0[-1]);
  }
  if (plStack_a0 != (long *)0x0) {
    plVar10 = plStack_a0 + 1;
    do {
      lVar14 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  plVar10 = plStack_90;
  __ZNSt3__115recursive_mutex6unlockEv(lVar18 + 0x38);
  if (plVar10 == (long *)0x0) {
    return;
  }
LAB_1094aca90:
  plVar1 = plVar10 + 1;
  do {
    lVar18 = *plVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar18 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
  return;
}



/* Entry: 1094acc10; end: 1094ace13;  */

long * FUN_1094acc10(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  code *pcStack_80;
  code *pcStack_78;
  long alStack_70 [3];
  long *plStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  lStack_88 = 0x5002000000;
  pcStack_80 = FUN_1094b355c;
  pcStack_78 = FUN_1094b35d0;
  plStack_58 = (long *)0x0;
  plVar5 = (long *)0x38;
  __Znwm();
  *plVar5 = (long)&PTR_FUN_110af7238;
  lVar6 = param_3[1];
  lVar8 = *param_3;
  plVar5[2] = param_3[1];
  plVar5[1] = lVar8;
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(int *)(plVar5 + 3) = (int)param_3[2];
  if (*(char *)((long)param_3 + 0x2f) < '\0') {
    func_0x000107c3192c(plVar5 + 4,param_3[3],param_3[4]);
  }
  else {
    lVar6 = param_3[3];
    plVar5[5] = param_3[4];
    plVar5[4] = lVar6;
    plVar5[6] = param_3[5];
  }
  plStack_58 = plVar5;
  __ZNSt3__17promiseIvEC1Ev(auStack_50);
  __ZNSt3__17promiseIvE10get_futureEv(param_1,puStack_90 + 9);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  pcStack_b0 = FUN_1094b35f8;
  puStack_a8 = &UNK_110af71f8;
  puStack_a0 = &uStack_98;
  func_0x000104c62d88(param_2[1],*param_2,&puStack_c0);
  __Block_object_dispose(&uStack_98,8);
  __ZNSt3__17promiseIvED1Ev(auStack_50);
  plVar5 = plStack_58;
  if (plStack_58 == alStack_70) {
    lVar6 = 0x18;
  }
  else {
    if (plStack_58 == (long *)0x0) goto LAB_1094acd7c;
    lVar6 = 0x20;
  }
  (**(code **)(*plStack_58 + lVar6))();
LAB_1094acd7c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar5;
  }
  ___stack_chk_fail();
  if (lStack_88 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZdlPv(&uStack_98);
  __Unwind_Resume();
  if (plVar5[0xe] != 0) {
    piVar1 = (int *)(plVar5[0xe] + 0x14);
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
      func_0x000109a848d4(plVar5 + 7);
    }
  }
  plVar5[0xe] = 0;
  plVar5[10] = 0;
  plVar5[9] = 0;
  plVar5[0xc] = 0;
  plVar5[0xb] = 0;
  if (0 < *(int *)((long)plVar5 + 0x3c)) {
    lVar6 = 0;
    lVar8 = plVar5[0xf];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)plVar5 + 0x3c));
  }
  plVar7 = (long *)plVar5[0x10];
  if (plVar7 != plVar5 + 0x11 && plVar7 != (long *)0x0) {
    _free(plVar7[-1]);
  }
  if (*(char *)((long)plVar5 + 0x37) < '\0') {
    __ZdlPv(plVar5[4]);
  }
  func_0x0001094b0898(plVar5 + 2);
  if (plVar5[1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return plVar5;
}



/* Entry: 1094ace14; end: 1094aced7;  */

long FUN_1094ace14(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x70) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x38);
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x78);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x3c));
  }
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 != param_1 + 0x88 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x0001094b0898(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1094aced8; end: 1094acf13;  */

long FUN_1094aced8(long param_1)

{
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1094acf14; end: 1094add1b;  */

void FUN_1094acf14(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_128;
  long lStack_120;
  undefined1 *puStack_118;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  long *plStack_80;
  long *aplStack_78 [3];
  
  plVar8 = (long *)param_1[1];
  if ((plVar8 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0))
  {
    lVar24 = *param_1;
    lStack_88 = lVar24;
    plStack_80 = plVar8;
    if (lVar24 != 0) {
      __ZNSt3__115recursive_mutex4lockEv(lVar24 + 0x38);
      uStack_f0._0_4_ = 0x42ff0000;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_f0._4_4_ = 0;
      uStack_e8 = 0;
      plStack_158 = &uStack_f0;
      uVar16 = (ulong)plStack_158 | 8;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      uStack_c4 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_160 = (long *)CONCAT44(uStack_160._4_4_,0x2010000);
      lStack_150 = 0;
      uStack_b0 = uVar16;
      puStack_a8 = &uStack_a0;
      FUN_109a479a0(lVar24 + 0x100,&uStack_160);
      lVar15 = lVar24;
      if (*(long *)(lVar24 + 0x168) != *(long *)(lVar24 + 0x160)) {
        uVar23 = 0;
        puVar19 = (undefined8 *)((ulong)&uStack_1c0 | 4);
LAB_1094acff4:
        uVar25 = *(ulong *)(lVar15 + 0x270);
        iVar22 = (int)uVar23;
        if (uVar25 != 0) {
          uVar26 = (ulong)iVar22;
          uVar27 = uVar25 - 1;
          if ((uVar25 & uVar27) == 0) {
            uVar17 = uVar27 & uVar26;
          }
          else {
            uVar17 = uVar26;
            if (uVar25 <= uVar26) {
              uVar17 = 0;
              if (uVar25 != 0) {
                uVar17 = uVar26 / uVar25;
              }
              uVar17 = uVar26 - uVar17 * uVar25;
            }
          }
          plVar8 = (long *)(lVar15 + 0x268);
          plVar20 = *(long **)(*plVar8 + uVar17 * 8);
          if (plVar20 != (long *)0x0) {
            do {
              while( true ) {
                plVar20 = (long *)*plVar20;
                if (plVar20 == (long *)0x0) goto LAB_1094ad864;
                uVar21 = plVar20[1];
                if (uVar21 != uVar26) break;
                if (*(int *)(plVar20 + 2) == iVar22) {
                  if ((uVar25 & uVar27) == 0) {
                    uVar17 = uVar27 & uVar26;
                  }
                  else {
                    uVar17 = uVar26;
                    if (uVar25 <= uVar26) {
                      uVar17 = 0;
                      if (uVar25 != 0) {
                        uVar17 = uVar26 / uVar25;
                      }
                      uVar17 = uVar26 - uVar17 * uVar25;
                    }
                  }
                  puVar13 = *(undefined8 **)(*plVar8 + uVar17 * 8);
                  if ((puVar13 == (undefined8 *)0x0) ||
                     (plVar20 = (long *)*puVar13, plVar20 == (long *)0x0)) goto LAB_1094ad108;
                  goto LAB_1094ad0bc;
                }
              }
              if ((uVar25 & uVar27) == 0) {
                uVar21 = uVar21 & uVar27;
              }
              else if (uVar25 <= uVar21) {
                uVar5 = 0;
                if (uVar25 != 0) {
                  uVar5 = uVar21 / uVar25;
                }
                uVar21 = uVar21 - uVar5 * uVar25;
              }
            } while (uVar21 == uVar17);
          }
        }
        goto LAB_1094ad864;
      }
LAB_1094ad880:
      __ZNSt3__115recursive_mutex6unlockEv(lVar24 + 0x38);
      __ZNSt3__15mutex4lockEv(lVar15 + 0xb8);
      if (*(long *)(lVar15 + 0x2c8) != 0) {
        piVar1 = (int *)(*(long *)(lVar15 + 0x2c8) + 0x14);
        do {
          iVar22 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar22 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar22 + -1 == 0) {
          func_0x000109a848d4(lVar15 + 0x290);
        }
      }
      *(undefined8 *)(lVar15 + 0x2c8) = 0;
      *(undefined8 *)(lVar15 + 0x2a8) = 0;
      *(undefined8 *)(lVar15 + 0x2a0) = 0;
      *(undefined8 *)(lVar15 + 0x2b8) = 0;
      *(undefined8 *)(lVar15 + 0x2b0) = 0;
      if (0 < *(int *)(lVar15 + 0x294)) {
        lVar24 = 0;
        lVar18 = *(long *)(lVar15 + 0x2d0);
        do {
          *(undefined4 *)(lVar18 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < *(int *)(lVar15 + 0x294));
      }
      *(ulong *)(lVar15 + 0x298) = CONCAT44(uStack_e4,uStack_e8);
      *(ulong *)(lVar15 + 0x290) = CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
      *(ulong *)(lVar15 + 0x2a8) = CONCAT44(uStack_d4,uStack_d8);
      *(ulong *)(lVar15 + 0x2a0) = CONCAT44(uStack_dc,uStack_e0);
      *(ulong *)(lVar15 + 0x2b8) = CONCAT44(uStack_c4,uStack_c8);
      *(ulong *)(lVar15 + 0x2b0) = CONCAT44(uStack_cc,uStack_d0);
      *(long *)(lVar15 + 0x2c8) = lStack_b8;
      *(ulong *)(lVar15 + 0x2c0) = CONCAT44(uStack_bc,uStack_c0);
      puVar13 = *(undefined8 **)(lVar15 + 0x2d8);
      puVar19 = (undefined8 *)(lVar15 + 0x2e0);
      if (puVar13 != puVar19) {
        if (puVar13 != (undefined8 *)0x0) {
          _free(puVar13[-1]);
        }
        *(undefined8 **)(lVar15 + 0x2d8) = puVar19;
        *(long *)(lVar15 + 0x2d0) = lVar15 + 0x298;
        puVar13 = puVar19;
      }
      puVar19 = (undefined8 *)((ulong)&uStack_f0 | 4);
      if (uStack_f0._4_4_ < 3) {
        *puVar13 = *puStack_a8;
        puVar13[1] = puStack_a8[1];
      }
      else {
        *(undefined8 **)(lVar15 + 0x2d8) = puStack_a8;
        *(ulong *)(lVar15 + 0x2d0) = uStack_b0;
        uStack_b0 = uVar16;
        puStack_a8 = &uStack_a0;
      }
      uStack_f0._0_4_ = 0x42ff0000;
      puVar19[1] = 0;
      *puVar19 = 0;
      puVar19[3] = 0;
      puVar19[2] = 0;
      puVar19[5] = 0;
      puVar19[4] = 0;
      *(undefined8 *)((long)puVar19 + 0x34) = 0;
      *(undefined8 *)((long)puVar19 + 0x2c) = 0;
      __ZNSt3__15mutex6unlockEv(lVar15 + 0xb8);
      (*(code *)param_1[2])(1,param_1 + 2);
      if (lStack_b8 != 0) {
        piVar1 = (int *)(lStack_b8 + 0x14);
        do {
          iVar22 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar22 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar22 + -1 == 0) {
          func_0x000109a848d4(&uStack_f0);
        }
      }
      lStack_b8 = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      if (0 < uStack_f0._4_4_) {
        lVar24 = 0;
        do {
          *(undefined4 *)(uStack_b0 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < uStack_f0._4_4_);
      }
      if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
        _free(puStack_a8[-1]);
      }
      if (plStack_80 == (long *)0x0) {
        return;
      }
    }
    plVar20 = plStack_80;
    plVar8 = plStack_80 + 1;
    do {
      lVar24 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar24 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  return;
LAB_1094ad0bc:
  do {
    uVar21 = plVar20[1];
    if (uVar21 == uVar26) {
      if ((int)plVar20[2] == iVar22) goto LAB_1094ad210;
    }
    else {
      if ((uVar25 & uVar27) == 0) {
        uVar21 = uVar21 & uVar27;
      }
      else if (uVar25 <= uVar21) {
        uVar5 = 0;
        if (uVar25 != 0) {
          uVar5 = uVar21 / uVar25;
        }
        uVar21 = uVar21 - uVar5 * uVar25;
      }
      if (uVar21 != uVar17) break;
    }
    plVar20 = (long *)*plVar20;
  } while (plVar20 != (long *)0x0);
LAB_1094ad108:
  plVar20 = (long *)0x30;
  __Znwm();
  *plVar20 = 0;
  plVar20[1] = uVar26;
  *(int *)(plVar20 + 2) = iVar22;
  plVar20[4] = 0;
  plVar20[5] = 0;
  plVar20[3] = 0;
  fVar28 = (float)(*(long *)(lVar15 + 0x280) + 1);
  lStack_150 = 1;
  plStack_158 = plVar8;
  if (*(float *)(lVar15 + 0x288) * (float)uVar25 < fVar28) {
    uVar25 = (ulong)((uVar25 & uVar27) != 0 || uVar25 < 3) | uVar25 << 1;
    uVar27 = (ulong)(fVar28 / *(float *)(lVar15 + 0x288));
    if (uVar25 <= uVar27) {
      uVar25 = uVar27;
    }
    FUN_1094aeb14(plVar8,uVar25);
    uVar25 = *(ulong *)(lVar15 + 0x270);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar17 = uVar25 - 1 & uVar26;
    }
    else {
      uVar27 = 0;
      if (uVar25 != 0) {
        uVar27 = uVar26 / uVar25;
      }
      uVar17 = uVar26;
      if (uVar25 <= uVar26) {
        uVar17 = uVar26 - uVar27 * uVar25;
      }
    }
  }
  lVar18 = *plVar8;
  plVar14 = *(long **)(lVar18 + uVar17 * 8);
  if (plVar14 == (long *)0x0) {
    *plVar20 = *(long *)(lVar15 + 0x278);
    *(long **)(lVar15 + 0x278) = plVar20;
    *(long *)(lVar18 + uVar17 * 8) = lVar15 + 0x278;
    if (*plVar20 != 0) {
      uVar26 = *(ulong *)(*plVar20 + 8);
      if ((uVar25 & uVar25 - 1) == 0) {
        uVar26 = uVar26 & uVar25 - 1;
      }
      else if (uVar25 <= uVar26) {
        uVar27 = 0;
        if (uVar25 != 0) {
          uVar27 = uVar26 / uVar25;
        }
        uVar26 = uVar26 - uVar27 * uVar25;
      }
      plVar14 = (long *)(*plVar8 + uVar26 * 8);
      goto LAB_1094ad200;
    }
  }
  else {
    *plVar20 = *plVar14;
LAB_1094ad200:
    *plVar14 = (long)plVar20;
  }
  *(long *)(lVar15 + 0x280) = *(long *)(lVar15 + 0x280) + 1;
LAB_1094ad210:
  plVar20 = plVar20 + 3;
  lVar18 = lVar15 + 0x218;
  FUN_1094ae1ec(lVar18,plVar20);
  if (lVar18 != 0) {
    lVar18 = lVar15 + 0x218;
    uStack_160 = plVar20;
    FUN_1094ae2d0(lVar18,plVar20,&uStack_160);
    lVar18 = lVar18 + 0x28;
    FUN_1094ae848(lVar18,uVar23);
    if (lVar18 != 0) {
      lVar18 = lVar15 + 0x1f0;
      FUN_1094b1684(lVar18,plVar20,plVar20);
      uStack_160 = (long *)CONCAT44(uStack_160._4_4_,iVar22);
      FUN_1094add1c(&uStack_100,lVar15,&uStack_160,plVar20);
      uVar6 = uStack_100;
      iVar2 = *(int *)(*(long *)(*(long *)(lVar18 + 0x28) + 0x110) + 0x38);
      if (2 < iVar2) {
        if (iVar2 == 3) {
          lVar15 = lVar15 + 0x218;
          uStack_160 = plVar20;
          FUN_1094ae2d0(lVar15,plVar20,&uStack_160);
          uStack_160 = (long *)CONCAT44(uStack_160._4_4_,iVar22);
          lVar15 = lVar15 + 0x28;
          FUN_1094af9d0(lVar15,uVar23,&uStack_160);
          FUN_1094b9790(uVar6,lVar15 + 0x18,0,1,&uStack_f0);
          goto LAB_1094ad828;
        }
        if (iVar2 == 4) {
          __ZNSt3__15mutex4lockEv(lVar15 + 0x78);
          lVar18 = lVar15 + 0x1c8;
          FUN_1094afc0c(lVar18,plVar20);
          if (lVar18 == 0) {
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&uStack_1c0,&UNK_10f56ebc9,plVar20);
            puVar19 = &uStack_1c0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (puVar19,&DAT_10f68f57e,1);
            plStack_158 = (long *)puVar19[1];
            uStack_160 = (long *)*puVar19;
            lStack_150 = puVar19[2];
            puVar19[1] = 0;
            puVar19[2] = 0;
            *puVar19 = 0;
            plVar8 = uStack_160;
            if (-1 < lStack_150) {
              plVar8 = &uStack_160;
            }
            FUN_109389218(&UNK_10f56ea98,0x185,plVar8);
            goto LAB_1094adbd0;
          }
          lVar18 = lVar15 + 0x1c8;
          FUN_1094b2580(lVar18,plVar20,plVar20);
          uVar12 = *(undefined8 *)(lVar18 + 0x28);
          FUN_1094afcf0(uVar12);
          __ZNSt3__15mutex6unlockEv(lVar15 + 0x78);
          uVar6 = uStack_100;
          lVar15 = lVar15 + 0x218;
          uStack_160 = plVar20;
          FUN_1094ae2d0(lVar15,plVar20,&uStack_160);
          uStack_160 = (long *)CONCAT44(uStack_160._4_4_,iVar22);
          lVar15 = lVar15 + 0x28;
          FUN_1094af9d0(lVar15,uVar23,&uStack_160);
          FUN_1094ba6c8(uVar6,&uStack_f0,lVar15 + 0x18,uVar12);
          goto LAB_1094ad828;
        }
        if (iVar2 != 5) goto LAB_1094ad828;
        __ZNSt3__15mutex4lockEv(lVar15 + 0x78);
        lVar9 = lVar15 + 0x1a0;
        FUN_1094afdb4(lVar9,plVar20);
        if (lVar9 == 0) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&uStack_1c0,&UNK_10f56ec02,plVar20);
          puVar19 = &uStack_1c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar19,&DAT_10f68f57e,1);
          plStack_158 = (long *)puVar19[1];
          uStack_160 = (long *)*puVar19;
          lStack_150 = puVar19[2];
          puVar19[1] = 0;
          puVar19[2] = 0;
          *puVar19 = 0;
          plVar8 = uStack_160;
          if (-1 < lStack_150) {
            plVar8 = &uStack_160;
          }
          FUN_109389218(&UNK_10f56ea98,0x18e,plVar8);
          goto LAB_1094adbd0;
        }
        lVar9 = lVar15 + 0x1a0;
        FUN_1094b1ad0(lVar9,plVar20,plVar20);
        lVar10 = lVar15 + 0x1c8;
        FUN_1094afc0c(lVar10,plVar20);
        if (lVar10 == 0) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&uStack_1c0,&UNK_10f56ec31,plVar20);
          puVar19 = &uStack_1c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar19,&DAT_10f68f57e,1);
          plStack_158 = (long *)puVar19[1];
          uStack_160 = (long *)*puVar19;
          lStack_150 = puVar19[2];
          puVar19[1] = 0;
          puVar19[2] = 0;
          *puVar19 = 0;
          plVar8 = uStack_160;
          if (-1 < lStack_150) {
            plVar8 = &uStack_160;
          }
          FUN_109389218(&UNK_10f56ea98,0x193,plVar8);
          goto LAB_1094adbd0;
        }
        lVar10 = lVar15 + 0x1c8;
        FUN_1094b2580(lVar10,plVar20,plVar20);
        lVar11 = *(long *)(lVar10 + 0x28);
        FUN_1094afcf0();
        lVar10 = lVar15 + 0x218;
        uStack_160 = plVar20;
        FUN_1094ae2d0(lVar10,plVar20,&uStack_160);
        uStack_160 = (long *)CONCAT44(uStack_160._4_4_,iVar22);
        lVar10 = lVar10 + 0x28;
        FUN_1094af9d0(lVar10,uVar23,&uStack_160);
        FUN_1094af248(&uStack_160,lVar10 + 0x18,(long)*(int *)(lVar10 + 0x24),lVar9 + 0x28,
                      *(undefined4 *)(*(long *)(*(long *)(lVar18 + 0x28) + 0x120) + 0x38));
        __ZNSt3__15mutex6unlockEv(lVar15 + 0x78);
        uStack_1c0._0_4_ = 0x42ff0000;
        *(undefined8 *)((long)puVar19 + 0x34) = 0;
        *(undefined8 *)((long)puVar19 + 0x2c) = 0;
        puVar19[3] = 0;
        puVar19[2] = 0;
        puVar19[5] = 0;
        puVar19[4] = 0;
        puVar19[1] = 0;
        *puVar19 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        puStack_180 = &uStack_1b8;
        puStack_178 = &uStack_170;
        if (*(int *)(*(long *)(*(long *)(lVar18 + 0x28) + 0x110) + 0x3c) == 2) {
          lVar18 = *(long *)(lVar11 + 8);
          puVar13 = (undefined8 *)(lVar18 + -0x60);
          if (&uStack_1c0 != puVar13) {
            if (*(long *)(lVar18 + -0x28) != 0) {
              piVar1 = (int *)(*(long *)(lVar18 + -0x28) + 0x14);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lStack_188 != 0) {
                piVar1 = (int *)(lStack_188 + 0x14);
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
                  func_0x000109a848d4(&uStack_1c0);
                }
              }
            }
            lStack_188 = 0;
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            if (uStack_1c0._4_4_ < 1) {
              uStack_1c0._0_4_ = *(undefined4 *)puVar13;
LAB_1094ad68c:
              iVar2 = *(int *)(lVar18 + -0x5c);
              if (2 < iVar2) goto LAB_1094ad6c0;
              uStack_1b8 = *(undefined8 *)(lVar18 + -0x58);
              puVar13 = *(undefined8 **)(lVar18 + -0x18);
              *puStack_178 = *puVar13;
              puStack_178[1] = puVar13[1];
              uStack_1c0._4_4_ = iVar2;
            }
            else {
              lVar15 = 0;
              do {
                *(undefined4 *)((long)puStack_180 + lVar15 * 4) = 0;
                lVar15 = lVar15 + 1;
              } while (lVar15 < uStack_1c0._4_4_);
              uStack_1c0._0_4_ = *(undefined4 *)puVar13;
              if (uStack_1c0._4_4_ < 3) goto LAB_1094ad68c;
LAB_1094ad6c0:
              func_0x000109a84868(&uStack_1c0,puVar13);
            }
            uStack_1a8 = *(undefined8 *)(lVar18 + -0x48);
            uStack_1b0 = *(undefined8 *)(lVar18 + -0x50);
            uStack_198 = *(undefined8 *)(lVar18 + -0x38);
            uStack_1a0 = *(undefined8 *)(lVar18 + -0x40);
            lStack_188 = *(long *)(lVar18 + -0x28);
            uStack_190 = *(undefined8 *)(lVar18 + -0x30);
            lVar15 = lStack_88;
          }
        }
        uVar6 = uStack_100;
        lVar15 = lVar15 + 0x218;
        aplStack_78[0] = plVar20;
        FUN_1094ae2d0(lVar15,plVar20,aplStack_78);
        aplStack_78[0] = (long *)CONCAT44(aplStack_78[0]._4_4_,iVar22);
        lVar15 = lVar15 + 0x28;
        FUN_1094af9d0(lVar15,uVar23,aplStack_78);
        FUN_1094be120(uVar6,&uStack_f0,lVar15 + 0x18,lVar11,&uStack_160,&uStack_1c0);
        if (lStack_188 != 0) {
          piVar1 = (int *)(lStack_188 + 0x14);
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
            func_0x000109a848d4(&uStack_1c0);
          }
        }
        lStack_188 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        if (0 < uStack_1c0._4_4_) {
          lVar15 = 0;
          do {
            *(undefined4 *)((long)puStack_180 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < uStack_1c0._4_4_);
        }
        if (puStack_178 != &uStack_170 && puStack_178 != (undefined8 *)0x0) {
          _free(puStack_178[-1]);
        }
        if (lStack_128 != 0) {
          piVar1 = (int *)(lStack_128 + 0x14);
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
            func_0x000109a848d4(&uStack_160);
          }
        }
        lStack_128 = 0;
        uStack_148 = 0;
        lStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        if (0 < uStack_160._4_4_) {
          lVar15 = 0;
          do {
            *(undefined4 *)(lStack_120 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < uStack_160._4_4_);
        }
        if (puStack_118 != auStack_110 && puStack_118 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_118 + -8));
        }
        goto LAB_1094ad828;
      }
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          lVar15 = lVar15 + 0x218;
          uStack_160 = plVar20;
          FUN_1094ae2d0(lVar15,plVar20,&uStack_160);
          uStack_160 = (long *)CONCAT44(uStack_160._4_4_,iVar22);
          lVar15 = lVar15 + 0x28;
          FUN_1094af9d0(lVar15,uVar23,&uStack_160);
          puVar13 = (undefined8 *)(lVar15 + 0x18);
          if (&uStack_f0 == puVar13) goto LAB_1094ad828;
          if (*(long *)(lVar15 + 0x50) != 0) {
            piVar1 = (int *)(*(long *)(lVar15 + 0x50) + 0x14);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (lStack_b8 != 0) {
            piVar1 = (int *)(lStack_b8 + 0x14);
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
              func_0x000109a848d4(&uStack_f0);
            }
          }
          lStack_b8 = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          if (uStack_f0._4_4_ < 1) {
            uStack_f0._0_4_ = *(undefined4 *)puVar13;
LAB_1094ad62c:
            iVar2 = *(int *)(lVar15 + 0x1c);
            if (2 < iVar2) goto LAB_1094ad660;
            uStack_e8 = (undefined4)*(undefined8 *)(lVar15 + 0x20);
            uStack_e4 = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x20) >> 0x20);
            puVar13 = *(undefined8 **)(lVar15 + 0x60);
            *puStack_a8 = *puVar13;
            puStack_a8[1] = puVar13[1];
            uStack_f0._4_4_ = iVar2;
          }
          else {
            lVar18 = 0;
            do {
              *(undefined4 *)(uStack_b0 + lVar18 * 4) = 0;
              lVar18 = lVar18 + 1;
            } while (lVar18 < uStack_f0._4_4_);
            uStack_f0._0_4_ = *(undefined4 *)puVar13;
            if (uStack_f0._4_4_ < 3) goto LAB_1094ad62c;
LAB_1094ad660:
            func_0x000109a84868(&uStack_f0,puVar13);
          }
          uStack_d8 = (undefined4)*(undefined8 *)(lVar15 + 0x30);
          uStack_d4 = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20);
          uStack_e0 = (undefined4)*(undefined8 *)(lVar15 + 0x28);
          uStack_dc = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x28) >> 0x20);
          uStack_c8 = (undefined4)*(undefined8 *)(lVar15 + 0x40);
          uStack_c4 = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x40) >> 0x20);
          uStack_d0 = (undefined4)*(undefined8 *)(lVar15 + 0x38);
          uStack_cc = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x38) >> 0x20);
          lStack_b8 = *(long *)(lVar15 + 0x50);
          uStack_c0 = (undefined4)*(undefined8 *)(lVar15 + 0x48);
          uStack_bc = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x48) >> 0x20);
          goto LAB_1094ad828;
        }
        if (iVar2 != 2) goto LAB_1094ad828;
      }
      lVar15 = lVar15 + 0x218;
      uStack_160 = plVar20;
      FUN_1094ae2d0(lVar15,plVar20,&uStack_160);
      uStack_160 = (long *)CONCAT44(uStack_160._4_4_,iVar22);
      lVar15 = lVar15 + 0x28;
      FUN_1094af9d0(lVar15,uVar23,&uStack_160);
      FUN_1094b9790(uVar6,lVar15 + 0x18,
                    *(undefined1 *)(*(long *)(*(long *)(lVar18 + 0x28) + 0x110) + 0x2f),1,&uStack_f0
                   );
LAB_1094ad828:
      plVar8 = plStack_f8;
      lVar15 = lStack_88;
      if (plStack_f8 != (long *)0x0) {
        plVar20 = plStack_f8 + 1;
        do {
          lVar18 = *plVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *plVar20 = lVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          lVar15 = lStack_88;
        }
      }
LAB_1094ad864:
      uVar23 = (ulong)(iVar22 + 1);
      uVar25 = (*(long *)(lVar15 + 0x168) - *(long *)(lVar15 + 0x160) >> 3) * -0x5555555555555555;
      if (uVar25 < uVar23 || uVar25 - uVar23 == 0) goto LAB_1094ad880;
      goto LAB_1094acff4;
    }
  }
  FUN_109389218(&UNK_10f56ea98,0x174,&UNK_10f56eb9d);
LAB_1094adbd0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1094adbd4);
  (*pcVar7)();
}



/* Entry: 1094add1c; end: 1094ae0d7;  */

void FUN_1094add1c(long *param_1,long param_2,int *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x38);
  plVar7 = (long *)(param_2 + 0x240);
  plVar14 = plVar7;
  func_0x000107c31944(plVar7,param_4);
  plVar15 = *(long **)(param_2 + 0x248);
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      plVar18 = (long *)(uVar16 & (ulong)plVar14);
    }
    else {
      plVar18 = plVar14;
      if (plVar15 <= plVar14) {
        uVar10 = 0;
        if (plVar15 != (long *)0x0) {
          uVar10 = (ulong)plVar14 / (ulong)plVar15;
        }
        plVar18 = (long *)((long)plVar14 - uVar10 * (long)plVar15);
      }
    }
    plVar8 = *(long **)(*plVar7 + (long)plVar18 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        plVar9 = (long *)plVar8[1];
        if (plVar14 == plVar9) {
          plVar9 = plVar7;
          func_0x000104c4fbc4(plVar7,plVar8 + 2,param_4);
          if (((ulong)plVar9 & 1) != 0) {
            plVar14 = plVar7;
            FUN_1094b3e0c(plVar7,param_4,param_4);
            uVar16 = plVar14[6];
            if (uVar16 != 0) {
              uVar10 = (ulong)*param_3;
              uVar11 = uVar16 - 1;
              if ((uVar16 & uVar11) == 0) {
                uVar12 = uVar11 & uVar10;
              }
              else {
                uVar12 = uVar10;
                if (uVar16 <= uVar10) {
                  uVar12 = 0;
                  if (uVar16 != 0) {
                    uVar12 = uVar10 / uVar16;
                  }
                  uVar12 = uVar10 - uVar12 * uVar16;
                }
              }
              plVar14 = *(long **)(plVar14[5] + uVar12 * 8);
              if (plVar14 != (long *)0x0) goto LAB_1094ae020;
            }
            break;
          }
        }
        else {
          if (((ulong)plVar15 & uVar16) == 0) {
            plVar9 = (long *)((ulong)plVar9 & uVar16);
          }
          else if (plVar15 <= plVar9) {
            uVar10 = 0;
            if (plVar15 != (long *)0x0) {
              uVar10 = (ulong)plVar9 / (ulong)plVar15;
            }
            plVar9 = (long *)((long)plVar9 - uVar10 * (long)plVar15);
          }
          if (plVar9 != plVar18) break;
        }
      }
    }
  }
  goto LAB_1094ade00;
  while( true ) {
    if ((uVar16 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar16 <= uVar13) {
      uVar4 = 0;
      if (uVar16 != 0) {
        uVar4 = uVar13 / uVar16;
      }
      uVar13 = uVar13 - uVar4 * uVar16;
    }
    if (uVar13 != uVar12) break;
LAB_1094ae020:
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) break;
    uVar13 = plVar14[1];
    if (uVar13 == uVar10) {
      if (*(int *)(plVar14 + 2) == *param_3) {
        FUN_1094b3e0c(plVar7,param_4,param_4);
        plVar7 = plVar7 + 5;
        FUN_1094b4220(plVar7,*param_3,param_3);
        puVar6 = (undefined8 *)plVar7[4];
        lVar21 = plVar7[4];
        lVar17 = plVar7[3];
        goto LAB_1094adf84;
      }
      goto LAB_1094ae020;
    }
  }
LAB_1094ade00:
  lVar17 = param_2 + 0x1f0;
  FUN_1094b1f1c(lVar17,param_4);
  if (lVar17 == 0) {
    FUN_109389218(&UNK_10f56ea98,0x1da,&UNK_10f56eb2c);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1094ae0b8);
    (*pcVar5)();
  }
  lVar17 = param_2 + 0x1f0;
  FUN_1094b1684(lVar17,param_4,param_4);
  FUN_1094b3e0c(plVar7,param_4,param_4);
  plVar7 = plVar7 + 5;
  FUN_1094b4220(plVar7,*param_3,param_3);
  lVar17 = *(long *)(lVar17 + 0x28);
  plVar14 = *(long **)(lVar17 + 0x118);
  uVar20 = *(undefined8 *)(lVar17 + 0x118);
  uVar19 = *(undefined8 *)(lVar17 + 0x110);
  puVar6 = (undefined8 *)0x1f8;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110af7318;
  puVar1 = puVar6 + 3;
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = *plVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar15 = *(long **)(lVar17 + 0x128);
  uStack_78 = *(undefined8 *)(lVar17 + 0x128);
  uStack_80 = *(undefined8 *)(lVar17 + 0x120);
  uStack_70 = uVar19;
  uStack_68 = uVar20;
  if (plVar15 == (long *)0x0) {
    FUN_1094b96a0(puVar1,&uStack_70,&uStack_80);
  }
  else {
    plVar18 = plVar15 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *plVar18 = *plVar18 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_1094b96a0(puVar1,&uStack_70,&uStack_80);
    do {
      lVar17 = *plVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *plVar18 = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14 + 1;
    do {
      lVar17 = *plVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  plVar14 = (long *)plVar7[4];
  plVar7[3] = (long)puVar1;
  plVar7[4] = (long)puVar6;
  if (plVar14 == (long *)0x0) {
    *param_1 = plVar7[3];
    param_1[1] = (long)puVar6;
  }
  else {
    plVar15 = plVar14 + 1;
    do {
      lVar17 = *plVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
    puVar6 = (undefined8 *)plVar7[4];
    lVar21 = plVar7[4];
    lVar17 = plVar7[3];
LAB_1094adf84:
    param_1[1] = lVar21;
    *param_1 = lVar17;
    if (puVar6 == (undefined8 *)0x0) goto LAB_1094adfac;
  }
  plVar7 = puVar6 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_1094adfac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_2 + 0x38);
  return;
}



/* Entry: 1094ae0d8; end: 1094ae1eb;  */

undefined8 * FUN_1094ae0d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6e90;
  func_0x0001094b0034(param_1 + 10);
  *param_1 = &PTR_FUN_110af74a8;
  func_0x0001094ae13c(param_1 + 8);
  func_0x0001094ae194(param_1 + 6);
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 1094ae1ec; end: 1094ae2cf;  */

long FUN_1094ae1ec(long *param_1,undefined8 param_2)

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



/* Entry: 1094ae2d0; end: 1094ae6e7;  */

long * FUN_1094ae2d0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar6 = (long *)*param_3;
  plVar5 = (long *)0x50;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*plVar6,plVar6[1]);
  }
  else {
    lVar4 = plVar6[1];
    lVar3 = *plVar6;
    plVar5[4] = plVar6[2];
    plVar5[3] = lVar4;
    plVar5[2] = lVar3;
  }
  plVar5[8] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[5] = 0;
  *(undefined4 *)(plVar5 + 9) = 0x3f800000;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1094ae5f8;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_1094ae480:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1094ae6d0);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_1094ae480;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_1094ae5f8:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1094ae6e8; end: 1094ae72f;  */

void FUN_1094ae6e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1094ae730(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094ae730; end: 1094ae7a3;  */

void FUN_1094ae730(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[5];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1094ae7a4(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[3];
  param_1[3] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 1094ae7a4; end: 1094ae847;  */

void FUN_1094ae7a4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x14);
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
      func_0x000109a848d4(param_1 + 8);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x48);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc));
  }
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 == param_1 + 0x58 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 1094ae848; end: 1094ae8e7;  */

long * FUN_1094ae848(long *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1094ae8e8; end: 1094aeb13;  */

undefined1  [16] FUN_1094ae8e8(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar5; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar6 = plVar8[1];
        if (uVar6 == uVar10) {
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_1094aead4;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar9 <= uVar6) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar1 * uVar9;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x30;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  *(undefined4 *)(plVar8 + 2) = *(undefined4 *)*param_4;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[3] = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_1094aeb14(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar4 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_1094aeac4;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_1094aeac4:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_1094aead4:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 1094aeb14; end: 1094aebe3;  */

void FUN_1094aeb14(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_1094aeb5c:
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
        func_0x000104c4f740();
        if ((char)param_1[1] == '\x01') {
          if (*(char *)(param_2 + 0x2f) < '\0') {
            __ZdlPv(*(undefined8 *)(param_2 + 0x18));
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
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_1094aeb5c;
  }
  return;
}



/* Entry: 1094aebe4; end: 1094aed6f;  */

void FUN_1094aebe4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
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
      func_0x000104c4f740();
      if ((char)param_1[1] == '\x01') {
        if (*(char *)(param_2 + 0x2f) < '\0') {
          __ZdlPv(*(undefined8 *)(param_2 + 0x18));
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
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 1094aed70; end: 1094aee53;  */

long FUN_1094aed70(long *param_1,undefined8 param_2)

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



/* Entry: 1094aee54; end: 1094aef17;  */

long FUN_1094aee54(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  long lStack_40;
  char cStack_38;
  
  lStack_40 = param_1 + 0x18;
  cStack_38 = '\x01';
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(param_1,&lStack_40);
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  __ZNSt13exception_ptrD1Ev(&uStack_48);
  if (lVar2 == 0) {
    if (cStack_38 == '\x01') {
      __ZNSt3__15mutex6unlockEv(lStack_40);
    }
    return param_1 + 0x90;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_50,(long *)(param_1 + 0x10));
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094aeee8);
  (*pcVar1)();
}



/* Entry: 1094aef18; end: 1094af0e7;  */

void FUN_1094aef18(long *param_1,long *param_2)

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
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
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
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000104c4f740();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    FUN_1094ae7a4(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1094af0e8; end: 1094af12f;  */

void FUN_1094af0e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1094ae7a4(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094af130; end: 1094af247;  */

long FUN_1094af130(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 1094af248; end: 1094af9cf;  */

long * FUN_1094af248(undefined4 *param_1,long param_2,int param_3,undefined8 *param_4,int param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  bool bVar7;
  int *piVar8;
  int *piVar9;
  long *plVar10;
  int iVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 auStack_1d0 [2];
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined4 auStack_1b8 [2];
  int *piStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long lStack_168;
  undefined4 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined2 uStack_fc;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [4];
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  int iStack_8c;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar3 = *(int *)(param_2 + 8);
  iVar4 = *(int *)(param_2 + 0xc);
  auStack_f8._0_4_ = 0x42ff0000;
  uStack_ec = 0;
  uStack_e8 = 0;
  stack0xffffffffffffff0c = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_cc = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  lStack_c0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_1a0._0_4_ = 0x1010000;
  uStack_230._0_4_ = 0x2010000;
  uStack_228 = auStack_f8;
  puStack_b8 = auStack_f0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_198 = (undefined4)param_2;
  uStack_194 = (undefined4)((ulong)param_2 >> 0x20);
  uStack_190 = 0;
  uStack_18c = 0;
  iVar11 = param_3;
  if (iVar3 < iVar4) {
    iVar11 = (int)(((float)param_3 * (float)iVar4) / (float)iVar3);
  }
  uStack_220 = 0;
  uStack_21c = 0;
  iVar2 = (int)(((float)param_3 * (float)iVar3) / (float)iVar4);
  if (iVar3 < iVar4) {
    iVar2 = param_3;
  }
  uStack_120 = (long *)CONCAT44(iVar2,iVar11);
  puStack_b0 = &uStack_a8;
  FUN_109b0f718(0,0,&uStack_1a0,&uStack_230,&uStack_120,1);
  FUN_10959fba0(*param_4,auStack_f8);
  uStack_120 = (long *)0x0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_fc = 0x101;
  FUN_10937017c(&lStack_138);
  if (lStack_130 != lStack_138) {
    uVar22 = 0;
    puVar24 = (undefined8 *)((ulong)&uStack_1a0 | 4);
    do {
      FUN_10959f584(&uStack_1a0,*param_4,uVar22,&uStack_120);
      puVar23 = (undefined8 *)(lStack_138 + uVar22 * 0x60);
      if (puVar23[7] != 0) {
        piVar8 = (int *)(puVar23[7] + 0x14);
        do {
          iVar3 = *piVar8;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar7) {
            *piVar8 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(puVar23);
        }
      }
      puVar23[7] = 0;
      puVar23[3] = 0;
      puVar23[2] = 0;
      puVar23[5] = 0;
      puVar23[4] = 0;
      if (0 < *(int *)((long)puVar23 + 4)) {
        lVar13 = 0;
        lVar17 = puVar23[8];
        do {
          *(undefined4 *)(lVar17 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)((long)puVar23 + 4));
      }
      puVar23[1] = CONCAT44(uStack_194,uStack_198);
      *puVar23 = CONCAT44(uStack_1a0._4_4_,(undefined4)uStack_1a0);
      puVar23[3] = CONCAT44(uStack_184,uStack_188);
      puVar23[2] = CONCAT44(uStack_18c,uStack_190);
      puVar23[5] = CONCAT44(uStack_174,uStack_178);
      puVar23[4] = CONCAT44(uStack_17c,uStack_180);
      puVar23[7] = lStack_168;
      puVar23[6] = CONCAT44(uStack_16c,uStack_170);
      puVar18 = (undefined8 *)puVar23[9];
      puVar1 = puVar23 + 10;
      if (puVar18 != puVar1) {
        if (puVar18 != (undefined8 *)0x0) {
          _free(puVar18[-1]);
        }
        puVar23[8] = puVar23 + 1;
        puVar23[9] = puVar1;
        puVar18 = puVar1;
      }
      if (uStack_1a0._4_4_ < 3) {
        *puVar18 = *puStack_158;
        puVar18[1] = puStack_158[1];
        uStack_1a0._0_4_ = 0x42ff0000;
        puVar24[1] = 0;
        *puVar24 = 0;
        puVar24[3] = 0;
        puVar24[2] = 0;
        puVar24[5] = 0;
        puVar24[4] = 0;
        *(undefined8 *)((long)puVar24 + 0x34) = 0;
        *(undefined8 *)((long)puVar24 + 0x2c) = 0;
        if (puStack_158 != &uStack_150) {
          _free(puStack_158[-1]);
        }
      }
      else {
        puVar23[9] = puStack_158;
        puVar23[8] = puStack_160;
      }
      uVar22 = (ulong)((int)uVar22 + 1);
      uVar14 = (lStack_130 - lStack_138 >> 5) * -0x5555555555555555;
    } while (uVar22 <= uVar14 && uVar14 - uVar22 != 0);
  }
  uStack_228._0_4_ = 0;
  uStack_228._4_4_ = 0;
  uStack_230._0_4_ = 0;
  uStack_230._4_4_ = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_1a0._0_4_ = 0x42ff0000;
  puStack_160 = &uStack_198;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_1a0._4_4_ = 0;
  uStack_198 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_174 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  puStack_158 = &uStack_150;
  iStack_90 = iVar2;
  iStack_8c = iVar11;
  FUN_109a83fd0(&uStack_1a0,2,&iStack_90,2);
  puVar24 = &uStack_1a0;
  FUN_109a48880(puVar24,&uStack_230);
  if (lStack_130 != lStack_138) {
    uVar22 = 0;
    uVar14 = 1;
    do {
      uStack_220 = 0;
      uStack_21c = 0;
      uStack_230._0_4_ = 0x1010000;
      uStack_228 = (undefined1 *)(lStack_138 + uVar22 * 0x60);
      uStack_80 = 0;
      iStack_90 = 0x1010000;
      auStack_1b8[0] = 0x2010000;
      uStack_1a8 = 0;
      piStack_1b0 = (int *)&uStack_1a0;
      puStack_88 = &uStack_1a0;
      FUN_109a91d90();
      puVar23 = &uStack_230;
      FUN_109a293c4(puVar23,&iStack_90,auStack_1b8,puVar24,2,&PTR_FUN_1132e8bd0,0,0);
      uVar22 = (lStack_130 - lStack_138 >> 5) * -0x5555555555555555;
      bVar7 = uVar14 <= uVar22;
      lVar13 = uVar22 - uVar14;
      puVar24 = puVar23;
      uVar22 = uVar14;
      uVar14 = (ulong)((int)uVar14 + 1);
    } while (bVar7 && lVar13 != 0);
  }
  piVar8 = &iStack_90;
  FUN_10937017c(piVar8,(long)param_5);
  puStack_1c8 = (undefined8 *)CONCAT44(iStack_8c,iStack_90);
  if (puStack_88 != puStack_1c8) {
    uVar22 = 0;
    uVar14 = 1;
    do {
      uStack_220 = 0;
      uStack_21c = 0;
      uStack_230._0_4_ = 0x1010000;
      uStack_228 = (undefined1 *)(lStack_138 + uVar22 * 0x60);
      uStack_1a8 = 0;
      auStack_1b8[0] = 0x1010000;
      puStack_1c8 = puStack_1c8 + uVar22 * 0xc;
      auStack_1d0[0] = 0x2010000;
      uStack_1c0 = 0;
      uStack_98 = 0x3ff0000000000000;
      piStack_1b0 = (int *)&uStack_1a0;
      FUN_109a91d90();
      piVar9 = (int *)&uStack_230;
      FUN_109a293c4(piVar9,auStack_1b8,auStack_1d0,piVar8,5,&PTR_FUN_1132e8cd0,1,&uStack_98);
      puStack_1c8 = (undefined8 *)CONCAT44(iStack_8c,iStack_90);
      uVar22 = ((long)puStack_88 - (long)puStack_1c8 >> 5) * -0x5555555555555555;
      bVar7 = uVar14 <= uVar22;
      lVar13 = uVar22 - uVar14;
      piVar8 = piVar9;
      uVar22 = uVar14;
      uVar14 = (ulong)((int)uVar14 + 1);
    } while (bVar7 && lVar13 != 0);
  }
  uStack_230._0_4_ = 0x42ff0000;
  uStack_228._4_4_ = 0;
  uStack_220 = 0;
  uStack_230._4_4_ = 0;
  uStack_228._0_4_ = 0;
  puStack_1f0 = &uStack_228;
  uStack_214 = 0;
  uStack_210 = 0;
  uStack_21c = 0;
  uStack_218 = 0;
  uStack_204 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  auStack_1b8[0] = 0x1050000;
  piStack_1b0 = &iStack_90;
  uStack_1a8 = 0;
  uVar22 = 0x2010000;
  auStack_1d0[0] = 0x2010000;
  uStack_1c0 = 0;
  puStack_1e8 = &uStack_1e0;
  puStack_1c8 = &uStack_230;
  FUN_109a3ecac(auStack_1b8,auStack_1d0);
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  uStack_1a8 = 0;
  auStack_1b8[0] = 0x1010000;
  auStack_1d0[0] = 0x2010000;
  uStack_1c0 = 0;
  uStack_98 = NEON_rev64(**(undefined8 **)(param_2 + 0x40),4);
  puVar12 = auStack_1d0;
  puVar24 = &uStack_98;
  puStack_1c8 = (undefined8 *)param_1;
  piStack_1b0 = (int *)&uStack_230;
  FUN_109b0f718(0,0,auStack_1b8,puVar12,puVar24,1);
  iVar11 = (int)puVar12;
  if (lStack_1f8 != 0) {
    piVar8 = (int *)(lStack_1f8 + 0x14);
    do {
      iVar3 = *piVar8;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar7) {
        *piVar8 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_230);
    }
  }
  lStack_1f8 = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  if (0 < uStack_230._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)((long)puStack_1f0 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_230._4_4_);
  }
  if (puStack_1e8 != &uStack_1e0 && puStack_1e8 != (undefined8 *)0x0) {
    _free(puStack_1e8[-1]);
  }
  uStack_230 = &iStack_90;
  FUN_1093702c4(&uStack_230);
  if (lStack_168 != 0) {
    piVar8 = (int *)(lStack_168 + 0x14);
    do {
      iVar3 = *piVar8;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar7) {
        *piVar8 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_1a0);
    }
  }
  lStack_168 = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  if (0 < uStack_1a0._4_4_) {
    lVar13 = 0;
    do {
      puStack_160[lVar13] = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_1a0._4_4_);
  }
  if (puStack_158 != &uStack_150 && puStack_158 != (undefined8 *)0x0) {
    _free(puStack_158[-1]);
  }
  uStack_1a0 = &lStack_138;
  FUN_1093702c4(&uStack_1a0);
  plVar10 = uStack_120;
  if (uStack_120 != (long *)0x0) {
    __ZdlPv();
  }
  if (lStack_c0 != 0) {
    piVar8 = (int *)(lStack_c0 + 0x14);
    do {
      iVar3 = *piVar8;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar7) {
        *piVar8 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      plVar10 = (long *)auStack_f8;
      func_0x000109a848d4();
    }
  }
  lStack_c0 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  if (0 < (int)auStack_f8._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)(puStack_b8 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)auStack_f8._4_4_);
  }
  if (puStack_b0 != &uStack_a8 && puStack_b0 != (undefined8 *)0x0) {
    plVar10 = (long *)puStack_b0[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return plVar10;
  }
  ___stack_chk_fail();
  if (iVar11 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_a8);
    func_0x00010567aa40(&uStack_230);
    uStack_230 = &iStack_90;
    FUN_1093702c4(&uStack_230);
    func_0x00010567aa40(&uStack_1a0);
    uStack_1a0 = &lStack_138;
    FUN_1093702c4(&uStack_1a0);
    if (uStack_120 != (long *)0x0) {
      __ZdlPv();
    }
    func_0x00010567aa40(auStack_f8);
  }
  __Unwind_Resume();
  uVar21 = (ulong)iVar11;
  uVar14 = plVar10[1];
  if (uVar14 != 0) {
    uVar15 = uVar14 - 1;
    if ((uVar14 & uVar15) == 0) {
      uVar22 = uVar15 & uVar21;
    }
    else {
      uVar22 = uVar21;
      if (uVar14 <= uVar21) {
        uVar22 = 0;
        if (uVar14 != 0) {
          uVar22 = uVar21 / uVar14;
        }
        uVar22 = uVar21 - uVar22 * uVar14;
      }
    }
    plVar19 = *(long **)(*plVar10 + uVar22 * 8);
    if (plVar19 != (long *)0x0) {
      for (plVar19 = (long *)*plVar19; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        uVar20 = plVar19[1];
        if (uVar20 == uVar21) {
          if (*(int *)(plVar19 + 2) == iVar11) {
            return plVar19;
          }
        }
        else {
          if ((uVar14 & uVar15) == 0) {
            uVar20 = uVar20 & uVar15;
          }
          else if (uVar14 <= uVar20) {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar20 / uVar14;
            }
            uVar20 = uVar20 - uVar6 * uVar14;
          }
          if (uVar20 != uVar22) break;
        }
      }
    }
  }
  plVar19 = (long *)0x78;
  __Znwm();
  *plVar19 = 0;
  plVar19[1] = uVar21;
  *(undefined4 *)(plVar19 + 2) = *(undefined4 *)puVar24;
  *(undefined4 *)(plVar19 + 3) = 0x42ff0000;
  *(undefined8 *)((long)plVar19 + 0x24) = 0;
  *(undefined8 *)((long)plVar19 + 0x1c) = 0;
  *(undefined8 *)((long)plVar19 + 0x34) = 0;
  *(undefined8 *)((long)plVar19 + 0x2c) = 0;
  *(undefined8 *)((long)plVar19 + 0x44) = 0;
  *(undefined8 *)((long)plVar19 + 0x3c) = 0;
  plVar19[10] = 0;
  plVar19[9] = 0;
  plVar19[0xd] = 0;
  plVar19[0xb] = (long)(plVar19 + 4);
  plVar19[0xc] = (long)(plVar19 + 0xd);
  plVar19[0xe] = 0;
  if ((uVar14 == 0) || (*(float *)(plVar10 + 4) * (float)uVar14 < (float)(plVar10[3] + 1))) {
    uVar22 = 1;
    if (2 < uVar14) {
      uVar22 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar22 = uVar22 | uVar14 << 1;
    uVar14 = (ulong)((float)(plVar10[3] + 1) / *(float *)(plVar10 + 4));
    if (uVar22 <= uVar14) {
      uVar22 = uVar14;
    }
    FUN_1094aef18(plVar10,uVar22);
    uVar14 = plVar10[1];
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar22 = uVar14 - 1 & uVar21;
    }
    else {
      uVar22 = uVar21;
      if (uVar14 <= uVar21) {
        uVar22 = 0;
        if (uVar14 != 0) {
          uVar22 = uVar21 / uVar14;
        }
        uVar22 = uVar21 - uVar22 * uVar14;
      }
    }
  }
  lVar13 = *plVar10;
  plVar16 = *(long **)(lVar13 + uVar22 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = plVar10 + 2;
    *plVar19 = *plVar16;
    *plVar16 = (long)plVar19;
    *(long **)(lVar13 + uVar22 * 8) = plVar16;
    if (*plVar19 == 0) goto LAB_1094afbd0;
    uVar22 = *(ulong *)(*plVar19 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar22 = uVar22 & uVar14 - 1;
    }
    else if (uVar14 <= uVar22) {
      uVar21 = 0;
      if (uVar14 != 0) {
        uVar21 = uVar22 / uVar14;
      }
      uVar22 = uVar22 - uVar21 * uVar14;
    }
    plVar16 = (long *)(*plVar10 + uVar22 * 8);
  }
  else {
    *plVar19 = *plVar16;
  }
  *plVar16 = (long)plVar19;
LAB_1094afbd0:
  plVar10[3] = plVar10[3] + 1;
  return plVar19;
}



/* Entry: 1094af9d0; end: 1094afc0b;  */

long * FUN_1094af9d0(long *param_1,int param_2,undefined4 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  uVar8 = (ulong)param_2;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar2 = uVar7 - 1;
    if ((uVar7 & uVar2) == 0) {
      unaff_x24 = uVar2 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar5 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar5 = plVar4[1];
        if (uVar5 == uVar8) {
          if (*(int *)(plVar4 + 2) == param_2) {
            return plVar4;
          }
        }
        else {
          if ((uVar7 & uVar2) == 0) {
            uVar5 = uVar5 & uVar2;
          }
          else if (uVar7 <= uVar5) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar1 * uVar7;
          }
          if (uVar5 != unaff_x24) break;
        }
      }
    }
  }
  plVar4 = (long *)0x78;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = uVar8;
  *(undefined4 *)(plVar4 + 2) = *param_3;
  *(undefined4 *)(plVar4 + 3) = 0x42ff0000;
  *(undefined8 *)((long)plVar4 + 0x24) = 0;
  *(undefined8 *)((long)plVar4 + 0x1c) = 0;
  *(undefined8 *)((long)plVar4 + 0x34) = 0;
  *(undefined8 *)((long)plVar4 + 0x2c) = 0;
  *(undefined8 *)((long)plVar4 + 0x44) = 0;
  *(undefined8 *)((long)plVar4 + 0x3c) = 0;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plVar4[0xd] = 0;
  plVar4[0xb] = (long)(plVar4 + 4);
  plVar4[0xc] = (long)(plVar4 + 0xd);
  plVar4[0xe] = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar2 = uVar2 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_1094aef18(param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar2 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar3;
    if (*plVar4 == 0) goto LAB_1094afbd0;
    uVar8 = *(ulong *)(*plVar4 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar8 = uVar8 & uVar7 - 1;
    }
    else if (uVar7 <= uVar8) {
      uVar2 = 0;
      if (uVar7 != 0) {
        uVar2 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar2 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar4 = *plVar3;
  }
  *plVar3 = (long)plVar4;
LAB_1094afbd0:
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080e862c; end: 1080e8653;  */

long FUN_1080e862c(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_1080e918c(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 1080e8654; end: 1080e869b;  */

void FUN_1080e8654(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  long *unaff_x19;
  
  func_0x0001080e9974();
  if (!(bool)in_ZR) {
    lVar1 = *param_2;
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
      do {
        func_0x0001080e9918();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *unaff_x19 = lVar1;
    FUN_1080e9024();
  }
  return;
}



/* Entry: 1080e869c; end: 1080e8713;  */

void FUN_1080e869c(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  long lVar3;
  undefined1 auStack_38 [8];
  
  lVar3 = *param_3;
  plVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long **)(lVar3 + 0x38) = plVar1;
  lVar3 = *(long *)(lVar3 + 0x30);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
    do {
      func_0x0001080e9918();
      lVar3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = lVar3;
  FUN_1080e9c98(auStack_38,*param_3);
  func_0x0001080e9930();
  lVar3 = *(long *)(param_2 + 0x20);
  FUN_1080e8654(*param_3 + 0x48,lVar3 + 0x48);
  FUN_1080e8654(lVar3 + 0x48,param_3);
  lVar2 = *param_3;
  *(long *)(lVar2 + 0x40) = lVar3;
  if (*(long *)(lVar2 + 0x48) != 0) {
    *(long *)(*(long *)(lVar2 + 0x48) + 0x40) = lVar2;
  }
  return;
}



/* Entry: 1080e8714; end: 1080e873b;  */

void FUN_1080e8714(void)

{
  undefined1 in_ZR;
  
  func_0x0001080e9974();
  if (!(bool)in_ZR) {
    func_0x0001080e9a00();
    func_0x0001078bdbb8();
  }
  return;
}



/* Entry: 1080e873c; end: 1080e894f;  */

void FUN_1080e873c(ulong *param_1,long *param_2,ulong *param_3,long param_4,ulong param_5)

{
  long lVar1;
  undefined1 uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined8 uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b8 [88];
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  auStack_b8[0] = 0;
  uStack_60 = 0;
  puVar3 = param_1;
  plVar11 = param_2;
  func_0x000105c3b044();
  if ((int)puVar3 != 0) {
    plVar11 = (long *)&UNK_10f47a982;
    puVar3 = (ulong *)auStack_b8;
    func_0x0001080e8a3c();
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar8 = (long)puVar3 - param_1[2];
  if (lVar8 == 0 || (long)puVar3 < (long)param_1[2]) {
    lVar8 = 0;
  }
  uVar4 = *(ulong *)(param_1[5] + 0x40);
  FUN_1080e97c8();
  uStack_c0 = uVar4;
  while( true ) {
    iVar10 = (int)param_5;
    uVar2 = true;
    if (uStack_c0 == param_1[4]) break;
    if (((ulong)param_2 & 0xfffffffd) == 0) {
      uVar2 = lVar8 == *(long *)(uStack_c0 + 0x38);
      if (lVar8 < *(long *)(uStack_c0 + 0x38)) break;
    }
    if ((int)param_2 - 1U < 2) {
      uVar2 = param_1[1] == *param_1;
      if (param_1[1] <= *param_1) break;
    }
    if (*(long *)(uStack_c0 + 0x28) == 0) {
      param_5 = (ulong)(((ulong)param_2 & 0xfffffffd) == 0);
      param_3 = &uStack_c0;
      param_4 = lVar8;
      FUN_1080e8950(&lStack_c8,param_1);
LAB_1080e8834:
      plVar11 = &lStack_c8;
      func_0x0001080e8a6c(&uStack_c0);
      lVar5 = lStack_c8;
    }
    else {
      plVar11 = (long *)(uStack_c0 + 0x30);
      if (((*(long *)(*plVar11 + 0x10) == 0) || (*(long *)(*(long *)(*plVar11 + 0x10) + 8) != 0)) ||
         ((((ulong)param_2 & 0xfffffffd) == 0 && (lVar8 < *(long *)(uStack_c0 + 0x38))))) {
        lVar5 = *(long *)(uStack_c0 + 0x40);
        FUN_1080e97c8();
        lStack_c8 = lVar5;
        goto LAB_1080e8834;
      }
      FUN_1080e9a14();
      param_1[1] = param_1[1] - (long)plVar11;
      func_0x0001080e89ec(param_1 + 6,uStack_c0 + 0x20);
      lVar5 = *(long *)(uStack_c0 + 0x28);
      FUN_1080e97c8();
      FUN_1080e9c98(&lStack_c8,uStack_c0);
      func_0x0001080e8a94(&uStack_c0,0);
      if (*(long *)(lVar5 + 0x18) == 0) {
        param_5 = (ulong)(((ulong)param_2 & 0xfffffffd) == 0);
        lVar9 = lVar5 + 0x20;
        FUN_1080e82ec(param_1 + 6);
        lVar1 = lStack_c8;
        param_3 = (ulong *)(lVar9 + 8);
        param_4 = lVar8;
        FUN_1080e8950(&uStack_d0,param_1);
        if (lVar5 == lVar1) {
          FUN_1080e8654(&lStack_c8,&uStack_d0);
        }
        FUN_1080e9024(uStack_d0);
      }
      plVar11 = &lStack_c8;
      FUN_1080e8654(&uStack_c0);
      func_0x0001080e9930();
    }
    FUN_1080e9024(lVar5);
  }
  FUN_1080e9024();
  plVar6 = (long *)auStack_b8;
  FUN_1080e8dd4();
  func_0x0001080e98bc(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *param_3;
  plVar7 = (long *)(uVar4 + 0x30);
  if ((((*(long *)(*plVar7 + 0x10) != 0) && (*(long *)(*(long *)(*plVar7 + 0x10) + 8) == 0)) &&
      (*(long *)(uVar4 + 0x18) == 0)) && ((iVar10 == 0 || (*(long *)(uVar4 + 0x38) <= param_4)))) {
    FUN_1080e9a14();
    plVar11[1] = plVar11[1] - (long)plVar7;
    func_0x0001080e89ec(plVar11 + 6,uVar4 + 0x20);
    uVar4 = *param_3;
    plVar11 = (long *)(uVar4 + 0x48);
    lVar5 = *(long *)(uVar4 + 0x40);
    lVar8 = lVar5;
    if (*plVar11 != 0) {
      *(long *)(*plVar11 + 0x40) = lVar5;
      lVar8 = *(long *)(uVar4 + 0x40);
    }
    if (lVar8 != 0) {
      FUN_1080e8654(lVar8 + 0x48,plVar11);
    }
    *(undefined8 *)(uVar4 + 0x40) = 0;
    func_0x0001080e8a94(plVar11,0);
    FUN_1080e97c8();
    *plVar6 = lVar5;
    return;
  }
  lVar8 = *(long *)(uVar4 + 0x40);
  FUN_1080e97c8();
  *plVar6 = lVar8;
  return;
}



/* Entry: 1080e8950; end: 1080e89eb;  */

void FUN_1080e8950(long *param_1,long param_2,long *param_3,long param_4,int param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_3;
  plVar1 = (long *)(lVar4 + 0x30);
  if ((((*(long *)(*plVar1 + 0x10) != 0) && (*(long *)(*(long *)(*plVar1 + 0x10) + 8) == 0)) &&
      (*(long *)(lVar4 + 0x18) == 0)) && ((param_5 == 0 || (*(long *)(lVar4 + 0x38) <= param_4)))) {
    FUN_1080e9a14();
    *(long *)(param_2 + 8) = *(long *)(param_2 + 8) - (long)plVar1;
    FUN_1080e89ec(param_2 + 0x30,lVar4 + 0x20);
    lVar2 = *param_3;
    plVar1 = (long *)(lVar2 + 0x48);
    lVar3 = *(long *)(lVar2 + 0x40);
    lVar4 = lVar3;
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 0x40) = lVar3;
      lVar4 = *(long *)(lVar2 + 0x40);
    }
    if (lVar4 != 0) {
      FUN_1080e8654(lVar4 + 0x48,plVar1);
    }
    *(undefined8 *)(lVar2 + 0x40) = 0;
    func_0x0001080e8a94(plVar1,0);
    FUN_1080e97c8();
    *param_1 = lVar3;
    return;
  }
  lVar4 = *(long *)(lVar4 + 0x40);
  FUN_1080e97c8();
  *param_1 = lVar4;
  return;
}



/* Entry: 1080e89ec; end: 1080e8acf;  */

bool FUN_1080e89ec(long *param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  
  plVar2 = param_1;
  FUN_1080e82ec();
  bVar1 = (long *)(*param_1 + param_1[3]) != plVar2;
  if (bVar1) {
    FUN_1080e96e4(param_1,plVar2,param_2);
  }
  return bVar1;
}



/* Entry: 1080e8ad0; end: 1080e8c67;  */

void FUN_1080e8ad0(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  plVar4 = param_3;
  FUN_1080e82ec(param_2 + 0x30);
  func_0x0001080e99ec();
  if (!(bool)in_ZR) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x28) + 0x40);
    FUN_1080e97c8();
    lVar5 = plVar4[1];
    lStack_68 = lVar3;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
      plVar4 = (long *)(*(long *)(lVar5 + 0x10) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    while (lStack_68 != *(long *)(param_2 + 0x20)) {
      lVar3 = lStack_68;
      if (*(long *)(lStack_68 + 0x28) != 0) {
        lVar3 = *(long *)(lStack_68 + 0x28);
      }
      if (*(long *)(lVar3 + 0x20) == *param_3) {
        lVar3 = lStack_68 + 0x30;
        FUN_1080e9a14();
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) - lVar3;
        func_0x0001080e89ec(param_2 + 0x30,lStack_68 + 0x20);
        FUN_1080e9c98(&lStack_58,lStack_68);
      }
      else {
        lVar3 = *(long *)(lStack_68 + 0x40);
        FUN_1080e97c8();
        lStack_58 = lVar3;
      }
      func_0x0001080e8a6c(&lStack_68,&lStack_58);
      FUN_1080e9024(lStack_58);
    }
    FUN_1080e9024(lVar5);
    func_0x0001080e9930();
  }
  lStack_68 = 0;
  FUN_1080e8c68(&lStack_58,param_3,&lStack_68,param_4);
  func_0x0001080e9c4c(*(undefined8 *)(param_2 + 0x20),&lStack_58);
  FUN_1080e862c(param_2 + 0x30,param_3);
  FUN_1080e8654();
  lVar3 = lStack_58 + 0x30;
  FUN_1080e9a14();
  *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + lVar3;
  func_0x0001080e9904(&lStack_68);
  *param_1 = 1;
  param_1[1] = lStack_68;
  *(undefined4 *)(param_1 + 2) = uStack_60;
  func_0x0001078bdbb8(0);
  FUN_1080e9024(lStack_58);
  return;
}



/* Entry: 1080e8c68; end: 1080e8ca7;  */

void FUN_1080e8c68(undefined8 *param_1,long *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x0001080e98d0();
  FUN_1080e97f8(auStack_38);
  *param_1 = auStack_38[0];
  func_0x0001080e98bc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_2[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_2 + lVar3)) {
        FUN_1080e8d24(param_2[1] + lVar2);
        lVar1 = param_2[3];
      }
      lVar2 = lVar2 + 0x10;
    }
    __ZdlPv();
    param_2[5] = 0;
    *param_2 = (long)&UNK_10dd5b8b0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1080e8ca8; end: 1080e8d23;  */

void FUN_1080e8ca8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_1080e8d24(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x10;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 1080e8d24; end: 1080e8d4b;  */

undefined8 FUN_1080e8d24(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1080e9000(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 1080e8d4c; end: 1080e8d8b;  */

void FUN_1080e8d4c(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x00010b9a76d8();
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



/* Entry: 1080e8d8c; end: 1080e8dd3;  */

undefined8 * FUN_1080e8d8c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0x1b;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  func_0x00010bd3f3dc(param_1 + 7,param_2,0x1b);
  func_0x00010b9a7630(param_1);
  return param_1;
}



/* Entry: 1080e8dd4; end: 1080e8e0f;  */

void FUN_1080e8dd4(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x00010b9a76d8();
  }
  return;
}



/* Entry: 1080e8e10; end: 1080e8e77;  */

void FUN_1080e8e10(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 *extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x0001080e98d0();
  func_0x0001080e9998();
  func_0x0001080e99d8();
  FUN_1080e8eec();
  lVar2 = lStack_40;
  lStack_40 = 0;
  FUN_1080e8e78(param_1,lVar2 + 0x18);
  FUN_1080e8ff0();
  func_0x0001080e98bc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8 = puVar1;
  extraout_x8[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_1080e8e78;
    lStack_68 = extraout_x8[1];
    puStack_70 = puVar1;
    puStack_60 = &stack0xfffffffffffffff0;
    if (lStack_68 != 0) {
      do {
        func_0x0001080e9918();
        puVar3 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8180(puVar3,&puStack_70);
    func_0x0001003a824c(&puStack_70);
    return;
  }
  return;
}



/* Entry: 1080e8e78; end: 1080e8e93;  */

void FUN_1080e8e78(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x0001080e9918();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8180(lVar1,&lStack_20);
    func_0x0001003a824c(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1080e8e94; end: 1080e8ebb;  */

long FUN_1080e8e94(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1080e8ebc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1080e8ebc; end: 1080e8eeb;  */

void FUN_1080e8ebc(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x276276276276277) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x68);
    return;
  }
  func_0x000104bfe188();
  func_0x0001080e9958();
  FUN_1080e8f34();
  return;
}



/* Entry: 1080e8eec; end: 1080e8f0b;  */

void FUN_1080e8eec(void)

{
  func_0x0001080e9958();
  FUN_1080e8f34();
  return;
}



/* Entry: 1080e8f0c; end: 1080e8f0f;  */

void FUN_1080e8f0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20388;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080e8f10; end: 1080e8f23;  */

void FUN_1080e8f10(void)

{
  FUN_1080e8f7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080e8f24; end: 1080e8f33;  */

void FUN_1080e8f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080e8f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080e8f34; end: 1080e8f7b;  */

undefined8 FUN_1080e8f34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001080e9a48(param_1,param_2,&uStack_28,&uStack_30);
  func_0x0001078bdbb8(uStack_30);
  FUN_1080e9024(0);
  return param_1;
}



/* Entry: 1080e8f7c; end: 1080e8f8f;  */

void FUN_1080e8f7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20388;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080e8f90; end: 1080e8fef;  */

void FUN_1080e8f90(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x0001080e9918();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8180(param_2,&uStack_20);
    func_0x0001003a824c(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080e8ff0; end: 1080e8fff;  */

void FUN_1080e8ff0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080e9000; end: 1080e9023;  */

undefined8 * FUN_1080e9000(undefined8 *param_1)

{
  FUN_1080e9024(*param_1);
  return param_1;
}



/* Entry: 1080e9024; end: 1080e9057;  */

void FUN_1080e9024(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080e9058; end: 1080e90a7;  */

long FUN_1080e9058(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_1080e90cc();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 1080e90a8; end: 1080e90cb;  */

void FUN_1080e90a8(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_1080e916c(&lStack_18);
  return;
}



/* Entry: 1080e90cc; end: 1080e916b;  */

bool FUN_1080e90cc(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar1 = 0;
  uVar4 = param_3 >> 7;
  uVar2 = param_1[3];
  lVar3 = *param_1;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar6 = *(ulong *)(lVar3 + uVar4);
    uVar5 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar7 = *param_2;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar8 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar4 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      *param_4 = uVar8;
      if (*(long *)(param_1[1] + uVar8 * 0x10) == lVar7) goto LAB_1080e9160;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
LAB_1080e9160:
  return uVar5 != 0;
}



/* Entry: 1080e916c; end: 1080e918b;  */

void FUN_1080e916c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,*param_2);
  return;
}



/* Entry: 1080e918c; end: 1080e922b;  */

void FUN_1080e918c(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = param_2;
  FUN_1080e90a8();
  plVar5 = param_2;
  plVar7 = param_3;
  FUN_1080e922c(param_2,param_3,plVar4);
  uVar6 = SUB81(plVar7,0);
  if (((ulong)plVar7 & 1) != 0) {
    plVar7 = (long *)(param_2[1] + (long)plVar5 * 0x10);
    lVar8 = *param_3;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plVar7 = lVar8;
    plVar7[1] = 0;
    *(byte *)(*param_2 + (long)plVar5) = (byte)plVar4 & 0x7f;
    func_0x0001080e9980();
  }
  lVar8 = param_2[1];
  *param_1 = *param_2 + (long)plVar5;
  param_1[1] = lVar8 + (long)plVar5 * 0x10;
  *(undefined1 *)(param_1 + 2) = uVar6;
  return;
}



/* Entry: 1080e922c; end: 1080e92e7;  */

undefined1  [16] FUN_1080e922c(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  lVar6 = 0;
  uVar3 = param_3 >> 7;
  while( true ) {
    uVar3 = uVar3 & param_1[3];
    uVar7 = *(ulong *)(*param_1 + uVar3);
    uVar4 = uVar7 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar4 = uVar4 + 0xfefefefefefefeff & (uVar4 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar1 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      plVar5 = (long *)(uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[3]);
      if (*(long *)(param_1[1] + (long)plVar5 * 0x10) == *param_2) {
        uVar2 = 0;
        goto LAB_1080e92c8;
      }
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar6 = lVar6 + 8;
    uVar3 = lVar6 + uVar3;
  }
  FUN_1080e92e8(param_1,param_3);
  uVar2 = 1;
  plVar5 = param_1;
LAB_1080e92c8:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = plVar5;
  return auVar8;
}



/* Entry: 1080e92e8; end: 1080e93b7;  */

void FUN_1080e92e8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_1080e93b8(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_1080e9330;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_1080e9330;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_1080e938c:
    FUN_1080e93f8(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_1080e938c;
    }
    func_0x0001080e9520(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_1080e93b8(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_1080e9330:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 1080e93b8; end: 1080e93f7;  */

ulong FUN_1080e93b8(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 1080e93f8; end: 1080e96af;  */

void FUN_1080e93f8(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x10;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_1080e96b0();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_1080e93b8(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_1080e96d0(param_1[1] + lVar4 * 0x10,lVar5);
    }
    lVar5 = lVar5 + 0x10;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1080e96b0; end: 1080e96cf;  */

void FUN_1080e96b0(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,*param_1);
  return;
}



/* Entry: 1080e96d0; end: 1080e96e3;  */

undefined8 FUN_1080e96d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1080e9000(param_2 + 1);
  func_0x00010007e5d0(param_2);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 1080e96e4; end: 1080e9723;  */

void FUN_1080e96e4(long *param_1,ulong *param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  FUN_1080e8d24(param_3);
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 1080e9724; end: 1080e97c7;  */

void FUN_1080e9724(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 1080e97c8; end: 1080e97f7;  */

ulong FUN_1080e97c8(ulong param_1)

{
  ulong uVar1;
  
  if ((param_1 != 0) && (uVar1 = param_1, func_0x00010b9a5818(), (uVar1 & 1) == 0)) {
    func_0x00010b9a5890();
    func_0x0001080e99c4();
    FUN_1080e9814();
    return uVar1;
  }
  return param_1;
}



/* Entry: 1080e97f8; end: 1080e9813;  */

void FUN_1080e97f8(void)

{
  func_0x0001080e99c4();
  FUN_1080e9814();
  return;
}



/* Entry: 1080e9814; end: 1080e987b;  */

undefined1 * FUN_1080e9814(undefined8 param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *in_x3;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  func_0x0001080e98d0();
  func_0x0001080e9998();
  func_0x0001080e99d8();
  FUN_1080e987c();
  lVar1 = lStack_40;
  lStack_40 = 0;
  FUN_1080e8e78(param_1,lVar1 + 0x18);
  FUN_1080e8ff0(auStack_50);
  func_0x0001080e98bc(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001080e9958();
  FUN_1080e989c();
  return in_x3;
}



/* Entry: 1080e987c; end: 1080e989b;  */

void FUN_1080e987c(void)

{
  func_0x0001080e9958();
  FUN_1080e989c();
  return;
}



/* Entry: 1080e989c; end: 1080e98bb;  */

void FUN_1080e989c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x0001080e9a48(param_1,param_2,&uStack_18);
  return;
}



/* Entry: 1080e98bc; end: 1080e9a13;  */

void FUN_1080e98bc(void)

{
  return;
}



/* Entry: 1080e9a14; end: 1080e9b3b;  */

long FUN_1080e9a14(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(*param_1 + 0x18);
  iVar1 = *(int *)(lVar3 + 0x20);
  iVar2 = *(int *)(lVar3 + 0x24);
  lVar3 = lVar3 + 0x10;
  func_0x00010835c63c(lVar3);
  return (long)(iVar2 * iVar1 * (int)lVar3);
}



/* Entry: 1080e9b3c; end: 1080e9b3f;  */

undefined8 * FUN_1080e9b3c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110a203d8;
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + -1;
    param_1[5] = 0;
  }
  FUN_1080e9000(param_1 + 9);
  func_0x0001078bdb94(param_1 + 6);
  func_0x0001003a8c94(param_1 + 4);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1080e9b40; end: 1080e9b53;  */

void FUN_1080e9b40(void)

{
  func_0x0001080e9adc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080e9b54; end: 1080e9be3;  */

void FUN_1080e9b54(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uStack_50;
  long lStack_48;
  
  *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + 1;
  lVar1 = param_2;
  FUN_1080e97c8();
  lStack_48 = lVar1;
  func_0x000108140900(&uStack_50,*(undefined8 *)(param_2 + 0x30),param_4,param_5);
  FUN_1080e9be4(param_1,param_3,&lStack_48,&uStack_50);
  func_0x0001078bdbb8(uStack_50);
  FUN_1080e9024(lStack_48);
  return;
}



/* Entry: 1080e9be4; end: 1080e9c97;  */

void FUN_1080e9be4(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined8 auStack_38 [3];
  
  func_0x0001080e9e14();
  FUN_1080e9d08(auStack_38);
  *param_1 = auStack_38[0];
  func_0x0001080e9df4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  FUN_1080e97c8();
  *extraout_x8 = uVar1;
  return;
}



/* Entry: 1080e9c98; end: 1080e9d07;  */

void FUN_1080e9c98(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_2 + 0x48);
  lVar2 = *(long *)(param_2 + 0x40);
  lVar1 = lVar2;
  if (*plVar3 != 0) {
    *(long *)(*plVar3 + 0x40) = lVar2;
    lVar1 = *(long *)(param_2 + 0x40);
  }
  if (lVar1 != 0) {
    FUN_1080e8654(lVar1 + 0x48,plVar3);
  }
  *(undefined8 *)(param_2 + 0x40) = 0;
  func_0x0001080e8a94(plVar3,0);
  FUN_1080e97c8();
  *param_1 = lVar2;
  return;
}



/* Entry: 1080e9d08; end: 1080e9d33;  */

void FUN_1080e9d08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1080e9d34(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1080e9d34; end: 1080e9db7;  */

undefined8 *
FUN_1080e9d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 auStack_50 [2];
  long lStack_40;
  
  puVar2 = auStack_50;
  func_0x0001080e9e14();
  FUN_1080e8e94(auStack_50,1);
  FUN_1080e9db8(lStack_40,param_3,param_4,param_5);
  lVar1 = lStack_40;
  lStack_40 = 0;
  FUN_1080e8e78(param_1,lVar1 + 0x18);
  FUN_1080e8ff0();
  func_0x0001080e9df4();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110a20388;
  puVar2[1] = 0;
  func_0x0001080e9a48(puVar2 + 3);
  return puVar2;
}



/* Entry: 1080e9db8; end: 1080e9deb;  */

undefined8 * FUN_1080e9db8(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a20388;
  param_1[1] = 0;
  func_0x0001080e9a48(param_1 + 3);
  return param_1;
}



/* Entry: 1080e9dec; end: 1080e9e27;  */

void FUN_1080e9dec(void)

{
  return;
}



/* Entry: 1080e9e28; end: 1080e9ee7;  */

undefined8 * FUN_1080e9e28(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  *param_1 = &PTR_FUN_110a20420;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x32aaaba7;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  lVar1 = *param_2;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x0001080eb3b0();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[0xc] = lVar1;
  param_1[0xd] = param_3;
  FUN_1080e80fc(param_1 + 0xe,param_3,param_4);
  param_1[0x1a] = 0;
  return param_1;
}



/* Entry: 1080e9ee8; end: 1080e9eeb;  */

undefined8 * FUN_1080e9ee8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20420;
  func_0x0001080e81d4(param_1 + 0xe);
  func_0x000104bd5214(param_1 + 0xc);
  func_0x00010b9a1f08(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1080e9eec; end: 1080e9eff;  */

void FUN_1080e9eec(void)

{
  func_0x0001080e9e9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080e9f00; end: 1080ea00b;  */

ulong FUN_1080e9f00(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int extraout_w10;
  long *plVar6;
  ulong uStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  
  if ((param_2 != 0) && (uVar4 = param_2, func_0x00010b9a5818(), (uVar4 & 1) == 0)) {
    func_0x00010b9a5890();
    return 3;
  }
  puVar5 = (undefined8 *)0x58;
  uStack_60 = param_2;
  __Znwm();
  plVar6 = puVar5 + 1;
  *plVar6 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110a204d8;
  puVar1 = puVar5 + 3;
  FUN_1080cbe58(&puStack_58,param_3);
  FUN_1080eb448(puVar1,&uStack_60,param_4,&puStack_58);
  func_0x000104bfe1e0(&puStack_58);
  if ((puVar5[5] == 0) || (*(long *)(puVar5[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_58 = puVar1;
    puStack_50 = puVar5;
    func_0x0001003a8180(puVar5 + 4,&puStack_58);
    func_0x0001003a824c(&puStack_58);
    if (puVar5[5] == 0) goto LAB_1080e9fdc;
  }
  do {
    func_0x0001080eb38c();
  } while (extraout_w10 != 0);
LAB_1080e9fdc:
  *param_1 = (long)puVar1;
  func_0x0001003a916c(puVar1);
  func_0x0001080eaa24(uStack_60);
  return uStack_60;
}



/* Entry: 1080ea00c; end: 1080ea013;  */

undefined8 FUN_1080ea00c(void)

{
  return 3;
}



/* Entry: 1080ea014; end: 1080ea127;  */

/* WARNING: Possible PIC construction at 0x0001080ea054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080ea058) */
/* WARNING: Removing unreachable block (ram,0x0001080ea090) */
/* WARNING: Removing unreachable block (ram,0x0001080ea098) */
/* WARNING: Removing unreachable block (ram,0x0001080ea09c) */
/* WARNING: Removing unreachable block (ram,0x0001080ea0a4) */
/* WARNING: Removing unreachable block (ram,0x0001080ea124) */
/* WARNING: Removing unreachable block (ram,0x0001080ea168) */
/* WARNING: Removing unreachable block (ram,0x0001080ea160) */
/* WARNING: Removing unreachable block (ram,0x0001080eb428) */
/* WARNING: Removing unreachable block (ram,0x0001080ea10c) */

void FUN_1080ea014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int extraout_w10;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  func_0x0001080eb37c();
  uStack_a8 = 0x1080ea058;
  uStack_c0 = param_8;
  uStack_b8 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  uStack_80 = param_5;
  uStack_7c = param_4;
  func_0x0001080eaa5c(&uStack_d0);
  lStack_98 = lStack_c8;
  uStack_a0 = uStack_d0;
  if (lStack_c8 != 0) {
    do {
      func_0x0001080eb38c();
    } while (extraout_w10 != 0);
  }
  func_0x0001080eb3e4();
  return;
}



/* Entry: 1080ea128; end: 1080ea1af;  */

void FUN_1080ea128(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  int extraout_w10;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x0001080eb37c();
  uStack_28 = extraout_x8;
  FUN_1080eab08(auStack_38);
  *param_1 = auStack_38[0];
  func_0x0001080eb368(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1080eaa5c(&uStack_70);
    extraout_x8_00[1] = lStack_68;
    *extraout_x8_00 = uStack_70;
    if (lStack_68 != 0) {
      do {
        func_0x0001080eb38c();
      } while (extraout_w10 != 0);
    }
    func_0x0001080eb3e4();
    return;
  }
  return;
}



/* Entry: 1080ea1b0; end: 1080ea317;  */

long * FUN_1080ea1b0(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar6;
  float fVar7;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar5 = param_2;
  func_0x0001080eb37c();
  uVar4 = *plVar5 == 1;
  uStack_38 = extraout_x8;
  if ((bool)uVar4) {
    FUN_1080ca570(&lStack_48,param_1 + 7);
    lVar6 = param_2[1];
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
      do {
        func_0x0001080eb38c();
      } while (extraout_w10 != 0);
    }
    lStack_50 = lVar6;
    if (lStack_48 != 0) {
      fVar7 = *(float *)(param_2 + 2);
      uVar4 = fVar7 == 1.0;
      if (1.0 < fVar7) {
        func_0x00010b98c0f8(&lStack_58,*(float *)(lStack_48 + 0x68) / fVar7);
        lVar3 = lStack_48;
        lStack_48 = lStack_58;
        lStack_58 = 0;
        FUN_1080cb940(lVar3);
        FUN_1080cb940(lStack_58);
      }
      func_0x0001081409d0(&lStack_58,lVar6,&lStack_48);
      FUN_1080e8714(&lStack_50,&lStack_58);
      func_0x0001078bdbb8(lStack_58);
    }
    lVar6 = lStack_50;
    if ((lStack_50 != 0) && (*(long *)(lStack_50 + 0x10) != 0)) {
      do {
        func_0x0001080eb38c();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001078bdbb8(lVar6);
    FUN_1080cb940(lStack_48);
    lStack_48 = 1;
    lStack_40 = lVar6;
    func_0x0001080eb400();
    func_0x0001080cb554(&lStack_48);
    plVar5 = (long *)0x0;
    FUN_1080cb914();
  }
  else {
    lStack_48 = 2;
    lStack_40 = param_2[1];
    if (lStack_40 != 0) {
      plVar5 = (long *)(lStack_40 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x0001080eb400();
    plVar5 = &lStack_48;
    func_0x0001080cb554();
  }
  func_0x0001080eb368(uStack_38);
  if ((bool)uVar4) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x0001080eb3ec();
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  FUN_1080eae1c(*param_1);
  return param_1;
}



/* Entry: 1080ea318; end: 1080ea3eb;  */

void FUN_1080ea318(long *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001080eb3ec();
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x18))();
  }
  FUN_1080eae1c(*unaff_x19);
  return;
}



/* Entry: 1080ea3ec; end: 1080ea61f;  */

void FUN_1080ea3ec(undefined1 *param_1,code **param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  code **ppcVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined **extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  long lVar6;
  int extraout_w11;
  long *plVar7;
  code *apcStack_120 [2];
  code *apcStack_110 [2];
  code *pcStack_100;
  undefined **ppuStack_f8;
  long *plStack_f0;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  puVar1 = &uStack_80;
  func_0x0001080eb37c();
  uStack_38 = extraout_x8;
  if (*(long *)(param_1 + 0xd0) != 0) {
    plVar7 = *(long **)(param_1 + 0x60);
    func_0x0001080ea16c(&uStack_80);
    pcStack_68 = FUN_1080ea984;
    ppuStack_60 = &PTR_FUN_110a204a8;
    uStack_50 = uStack_78;
    uStack_58 = uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    param_2 = &pcStack_68;
    (**(code **)(*plVar7 + 0x30))(plVar7,param_2,*(long *)(param_1 + 0xd0) * 1000000000);
    (*(code *)*ppuStack_60)(&ppuStack_60);
    func_0x0001080eaae4();
    param_1 = (undefined1 *)puVar1;
  }
  func_0x0001080eb368(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppcVar3 = apcStack_120;
  puVar2 = param_1;
  func_0x0001080eb37c();
  uStack_b8 = extraout_x8_00;
  func_0x0001080eb3f8(*(undefined8 *)(puVar2 + 0x10));
  if ((apcStack_120[0] != (code *)0x0) && ((*(byte *)(*(long *)(param_1 + 0x10) + 0xb8) & 1) == 0))
  {
    lVar6 = *(long *)(param_1 + 0x10);
    FUN_1080e8208(&pcStack_d0,apcStack_120[0] + 0x70,lVar6 + 0x28,*(undefined4 *)(lVar6 + 0x30),
                  *(undefined4 *)(lVar6 + 0x34));
    in_ZR = pcStack_d0 == (code *)0x1;
    if ((bool)in_ZR) {
      pcStack_100 = pcStack_d0;
      if ((ppuStack_c8 != (undefined **)0x0) && (ppuStack_c8[2] != (undefined *)0x0)) {
        do {
          func_0x0001080eb3b0();
          ppuStack_c8 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      plStack_f0 = (long *)CONCAT44(plStack_f0._4_4_,uStack_c0);
      param_2 = &pcStack_100;
      ppuStack_f8 = ppuStack_c8;
      FUN_1080ea1b0(*(undefined8 *)(param_1 + 0x10));
      func_0x0001080e9030(&pcStack_100);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x10);
      plVar7 = *(long **)(lVar6 + 0x48);
      if (*(long *)(lVar6 + 0x10) != 0) {
        do {
          func_0x0001080eb38c();
        } while (extraout_w10 != 0);
      }
      pcStack_100 = FUN_1080eb130;
      ppuStack_f8 = &PTR_FUN_110a20608;
      plVar4 = (long *)0x8;
      __Znwm();
      if (*(long *)(lVar6 + 0x10) != 0) {
        do {
          func_0x0001080eb38c();
        } while (extraout_w10_00 != 0);
      }
      *plVar4 = lVar6;
      plStack_f0 = plVar4;
      (**(code **)(*plVar7 + 0x20))(apcStack_110,plVar7,lVar6 + 0x28,&pcStack_100);
      (*(code *)*ppuStack_f8)(&ppuStack_f8);
      func_0x0001003a916c(lVar6);
      param_2 = apcStack_110;
      FUN_1080ebd54(*(undefined8 *)(param_1 + 0x10));
      func_0x0001080eb314(apcStack_110);
    }
    ppcVar3 = &pcStack_d0;
    func_0x0001080e9030();
  }
  func_0x0001080eb3e4();
  func_0x0001080eb368(uStack_b8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *ppcVar3 = (code *)0x0;
    ppcVar3[1] = (code *)0x0;
    pcVar5 = param_2[1];
    if (pcVar5 != (code *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      ppcVar3[1] = pcVar5;
      if (pcVar5 != (code *)0x0) {
        *ppcVar3 = *param_2;
      }
    }
    return;
  }
  return;
}



/* Entry: 1080ea620; end: 1080ea67f;  */

void FUN_1080ea620(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1080ea680; end: 1080ea6d7;  */

undefined8 * FUN_1080ea680(long param_1)

{
  FUN_1080eae1c(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 1080ea6d8; end: 1080ea8ef;  */

void FUN_1080ea6d8(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long lVar2;
  long *plVar3;
  long alStack_110 [2];
  undefined1 auStack_100 [24];
  long lStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined8 auStack_d0 [3];
  undefined8 **ppuStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  long lStack_70;
  undefined1 auStack_68 [8];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar1 = alStack_110;
  func_0x0001080eb37c();
  plVar3 = *(long **)(param_1 + 0x10);
  uStack_48 = extraout_x8;
  func_0x0001080eb3f8(*plVar3);
  if ((alStack_110[0] != 0) && ((*(byte *)(*plVar3 + 0xb8) & 1) == 0)) {
    lVar2 = *plVar3;
    FUN_1080e8208(alStack_60,alStack_110[0] + 0x70,lVar2 + 0x28,*(undefined4 *)(lVar2 + 0x30),
                  *(undefined4 *)(lVar2 + 0x34));
    in_ZR = alStack_60[0] == 1;
    if ((bool)in_ZR) {
      func_0x0001080eb41c();
    }
    else {
      FUN_108140a90(&lStack_70,plVar3 + 1);
      in_ZR = lStack_70 == 1;
      if ((bool)in_ZR) {
        lVar2 = *plVar3;
        FUN_1080e8ad0(&ppuStack_88,alStack_110[0] + 0x70,lVar2 + 0x28,auStack_68,
                      *(undefined4 *)(lVar2 + 0x30),*(undefined4 *)(lVar2 + 0x34));
        func_0x0001080e831c(alStack_60,&ppuStack_88);
        func_0x0001080e9030(&ppuStack_88);
        func_0x0001080eb41c();
      }
      else {
        func_0x00010b99fc44(&lStack_e8,auStack_68);
        plVar1 = &lStack_e8;
        func_0x00010b99f828();
        lVar2 = *plVar1;
        if (lVar2 == 0) {
          puStack_e0 = &UNK_10f7d0ef0;
          uStack_d8 = 0;
        }
        else {
          puStack_e0 = (undefined *)(lVar2 + 0x18);
          uStack_d8 = (ulong)*(uint *)(lVar2 + 0xc);
        }
        func_0x0001003b055c(auStack_d0,&puStack_e0);
        FUN_1080e74fc(&ppuStack_b8,auStack_d0,&UNK_10f47a8fa);
        FUN_1080e771c(auStack_100,*plVar3 + 0x28);
        func_0x0001080e751c(&uStack_a0,&ppuStack_b8,auStack_100);
        FUN_1080e74fc(&ppuStack_88,&uStack_a0,&DAT_10f62a9ea);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_b8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
        func_0x000104bda960(lStack_e8);
        in_ZR = bStack_71 == 0;
        uStack_b0 = uStack_80;
        ppuStack_b8 = ppuStack_88;
        if (-1 < (char)bStack_71) {
          uStack_b0 = (ulong)bStack_71;
          ppuStack_b8 = &ppuStack_88;
        }
        func_0x00010b99f5a8(auStack_d0,&ppuStack_b8);
        uStack_a0 = 2;
        uStack_98 = auStack_d0[0];
        auStack_d0[0] = 0;
        FUN_1080ea1b0(*plVar3,&uStack_a0);
        func_0x0001080e9030(&uStack_a0);
        func_0x000104bda960(auStack_d0[0]);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_88);
      }
      func_0x0001078c47a0(&lStack_70);
    }
    plVar1 = alStack_60;
    func_0x0001080e9030();
  }
  func_0x0001080eb3e4();
  func_0x0001080eb368(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (plVar1[1] == 0) {
      return;
    }
    FUN_1080ea318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080ea8f0; end: 1080ea90f;  */

void FUN_1080ea8f0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1080ea318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080ea910; end: 1080ea913;  */

void FUN_1080ea910(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080ea914; end: 1080ea983;  */

void FUN_1080ea914(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w11;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110a20488;
  plVar1 = (long *)0x20;
  __Znwm();
  lVar2 = *plVar3;
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x0001080eb3b0();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *plVar1 = lVar2;
  func_0x000104c6257c(plVar1 + 1,plVar3 + 1);
  param_1[1] = plVar1;
  return;
}



/* Entry: 1080ea984; end: 1080ea9cb;  */

void FUN_1080ea984(long param_1)

{
  long alStack_30 [2];
  
  FUN_1080ea620(alStack_30,param_1 + 0x10);
  if (alStack_30[0] != 0) {
    FUN_1080e873c(alStack_30[0] + 0x70,0);
    FUN_1080ea3ec(alStack_30[0]);
  }
  func_0x0001080eb3e4();
  return;
}



/* Entry: 1080ea9cc; end: 1080eaa33;  */

void FUN_1080ea9cc(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001080eb3ec();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1080eaa34; end: 1080eaa47;  */

void FUN_1080eaa34(void)

{
  func_0x0001080eaa50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080eaa48; end: 1080eaa5b;  */

void FUN_1080eaa48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080eb3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080eaa5c; end: 1080eab07;  */

void FUN_1080eaa5c(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x0001080eb38c();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x0001003ae9f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        do {
          func_0x0001080eb38c();
        } while (extraout_w10 != 0);
      }
    }
    func_0x0001003a824c(&lStack_30);
  }
  return;
}



/* Entry: 1080eab08; end: 1080eab3f;  */

void FUN_1080eab08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uStack_11;
  
  FUN_1080eab40(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1080eab40; end: 1080eabfb;  */

void FUN_1080eab40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  
  puVar1 = auStack_70;
  func_0x0001080eb37c();
  uStack_58 = extraout_x8;
  FUN_1080eac18(auStack_70,1);
  FUN_1080eac70(lStack_60,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  lVar2 = lStack_60;
  lStack_60 = 0;
  FUN_1080eabfc(param_1,lVar2 + 0x18);
  FUN_1080eade8();
  func_0x0001080eb368(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_78 = FUN_1080eabfc;
    lStack_88 = extraout_x8_00[1];
    puStack_90 = puVar1;
    puStack_80 = &stack0xfffffffffffffff0;
    if (lStack_88 != 0) {
      do {
        func_0x0001080eb3b0();
        puVar3 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8180(puVar3,&puStack_90);
    func_0x0001003a824c(&puStack_90);
    return;
  }
  return;
}



/* Entry: 1080eabfc; end: 1080eac17;  */

void FUN_1080eabfc(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x0001080eb3b0();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8180(lVar1,&lStack_20);
    func_0x0001003a824c(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1080eac18; end: 1080eac3f;  */

long FUN_1080eac18(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1080eac40();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1080eac40; end: 1080eac6f;  */

undefined8 * FUN_1080eac40(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x12f684bda12f685) {
    puVar1 = (undefined8 *)(param_2 * 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a20528;
  FUN_1080eacc0(param_1 + 3);
  return param_1;
}



/* Entry: 1080eac70; end: 1080eac9f;  */

undefined8 * FUN_1080eac70(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a20528;
  FUN_1080eacc0(param_1 + 3);
  return param_1;
}



/* Entry: 1080eaca0; end: 1080eaca3;  */

void FUN_1080eaca0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20528;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080eaca4; end: 1080eacb7;  */

void FUN_1080eaca4(void)

{
  FUN_1080ead58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080eacb8; end: 1080eacbf;  */

void FUN_1080eacb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080eb3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080eacc0; end: 1080ead57;  */

undefined8
FUN_1080eacc0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_4;
  uVar2 = *param_5;
  FUN_1080cb9a8(auStack_60,param_8);
  FUN_1080ebbdc(param_1,&uStack_50,param_3,uVar1,uVar2,param_6,param_7,auStack_60);
  func_0x0001080cba7c(auStack_60);
  func_0x0001080eaae4(&uStack_50);
  return param_1;
}



/* Entry: 1080ead58; end: 1080ead63;  */

void FUN_1080ead58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20528;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080ead64; end: 1080eadc3;  */

void FUN_1080ead64(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x0001080eb3b0();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8180(param_2,&uStack_20);
    func_0x0001003a824c(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080eadc4; end: 1080eade7;  */

void FUN_1080eadc4(long param_1)

{
  func_0x0001080eb3ec();
  if (param_1 != 0) {
    func_0x0001003a81fc();
  }
  return;
}



/* Entry: 1080eade8; end: 1080eadf7;  */

void FUN_1080eade8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080eadf8; end: 1080eae1b;  */

undefined8 * FUN_1080eadf8(undefined8 *param_1)

{
  FUN_1080eae1c(*param_1);
  return param_1;
}



/* Entry: 1080eae1c; end: 1080eae27;  */

void FUN_1080eae1c(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080eae28; end: 1080eae47;  */

void FUN_1080eae28(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1080eae48(&uStack_11,param_1);
  return;
}



/* Entry: 1080eae48; end: 1080eaed7;  */

/* WARNING: Possible PIC construction at 0x0001080eae70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080eae74) */
/* WARNING: Removing unreachable block (ram,0x0001080eaeac) */
/* WARNING: Removing unreachable block (ram,0x0001080eaea4) */
/* WARNING: Removing unreachable block (ram,0x0001080eb428) */

undefined1 * FUN_1080eae48(void)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x0001080eb37c();
  uStack_38 = 1;
  FUN_1080eaed8();
  return auStack_40;
}



/* Entry: 1080eaed8; end: 1080eaf03;  */

undefined8 * FUN_1080eaed8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a20578;
  FUN_1080eaf54(param_1 + 3);
  return param_1;
}



/* Entry: 1080eaf04; end: 1080eaf33;  */

undefined8 * FUN_1080eaf04(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a20578;
  FUN_1080eaf54(param_1 + 3);
  return param_1;
}



/* Entry: 1080eaf34; end: 1080eaf37;  */

void FUN_1080eaf34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a20578;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080eaf38; end: 1080eaf4b;  */

void FUN_1080eaf38(void)

{
  FUN_1080eb0f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



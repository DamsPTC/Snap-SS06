/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10867e808; end: 10867e917;  */

void FUN_10867e808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  long lVar1;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long lStack_78;
  
  func_0x00010868050c();
  if (param_1 == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x000108680538();
    uStack_98 = 0;
    uStack_90 = 0;
    puStack_a0 = &uStack_98;
    uStack_a8 = 0xffffffffffffffff;
    func_0x00010867f564(&lStack_80,param_2,&uStack_a8);
    param_1 = unaff_x19 + 0xa8;
    FUN_10867ec88(param_1,&lStack_80);
    FUN_10867f600(&lStack_80);
    func_0x00010867f620(&puStack_a0);
  }
  FUN_10867eca0(param_1 + 0x28,param_4);
  FUN_10867eabc(&lStack_80,param_1 + 0x28,param_3);
  for (lVar1 = lStack_80; lVar1 != lStack_78; lVar1 = lVar1 + 0x20) {
    FUN_10867eb90();
  }
  FUN_10867f4c4(&lStack_80);
  func_0x0001086804fc();
  return;
}



/* Entry: 10867e918; end: 10867e94f;  */

void FUN_10867e918(void)

{
  func_0x000108680494();
  FUN_10867f264();
  func_0x000108680480();
  func_0x0001086804d0();
  return;
}



/* Entry: 10867e950; end: 10867e987;  */

void FUN_10867e950(void)

{
  func_0x000108680494();
  FUN_10867f388();
  func_0x000108680480();
  func_0x0001086804d0();
  return;
}



/* Entry: 10867e988; end: 10867e9c3;  */

void FUN_10867e988(long param_1)

{
  long unaff_x20;
  long *aplStack_30 [2];
  
  func_0x000107c320ac();
  param_1 = param_1 + 0xa8;
  FUN_10867f9b8();
  if (param_1 != 0) {
    FUN_10867fa94(unaff_x20 + 0xa8,param_1);
  }
  func_0x00010867ee68(aplStack_30,unaff_x20 + 0x78);
  if (aplStack_30[0] != (long *)0x0) {
    (**(code **)(*aplStack_30[0] + 0x10))(aplStack_30[0],0x120098);
  }
  func_0x000107c28abc(aplStack_30);
  return;
}



/* Entry: 10867e9c4; end: 10867ea27;  */

void FUN_10867e9c4(long param_1,undefined8 param_2)

{
  long *aplStack_30 [2];
  
  func_0x00010867ee68(aplStack_30,param_1 + 0x78);
  if (aplStack_30[0] != (long *)0x0) {
    (**(code **)(*aplStack_30[0] + 0x10))(aplStack_30[0],0x120098,param_2,1);
  }
  func_0x000107c28abc(aplStack_30);
  return;
}



/* Entry: 10867ea28; end: 10867eabb;  */

void FUN_10867ea28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 extraout_x8;
  long lVar2;
  long lStack_48;
  long lStack_40;
  
  func_0x00010868050c();
  if (param_1 != 0) {
    FUN_10867eabc(&lStack_48,param_1 + 0x28,param_3);
    lVar1 = lStack_40;
    for (lVar2 = lStack_48; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
      FUN_10867eb90();
    }
    if (lStack_48 != lStack_40) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000108680538();
      *(undefined8 *)(param_1 + 0x48) = extraout_x8;
    }
    func_0x0001086804fc();
    FUN_10867f4c4(&lStack_48);
  }
  return;
}



/* Entry: 10867eabc; end: 10867eb8f;  */

void FUN_10867eabc(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lStack_48;
  
  plVar1 = param_2 + 1;
  lStack_48 = param_3;
  FUN_1086802d8(plVar1,&lStack_48);
  FUN_108680310(param_2 + 1,param_2[1],plVar1);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar3 = lStack_48;
  while ((lVar3 = lVar3 + 1, plVar1 != param_2 + 2 && (lVar3 == plVar1[4]))) {
    FUN_10867ef20(param_1,plVar1 + 5);
    plVar2 = param_2 + 1;
    func_0x000108680348(plVar2,plVar1);
    plVar1 = plVar2;
  }
  lVar3 = *param_2;
  if (*param_2 <= lStack_48) {
    lVar3 = lStack_48;
  }
  *param_2 = lVar3;
  return;
}



/* Entry: 10867eb90; end: 10867ec1b;  */

void FUN_10867eb90(long param_1,long param_2)

{
  long *aplStack_30 [2];
  
  FUN_10867ee38(aplStack_30,param_1 + 0x68);
  if (aplStack_30[0] != (long *)0x0) {
    if (*(long *)(param_2 + 0x18) != 0) {
      (**(code **)(*aplStack_30[0] + 0x28))();
    }
    if (*(long *)(param_2 + 8) != 0) {
      (**(code **)(*aplStack_30[0] + 0x10))();
    }
    if (*(long *)(param_2 + 0x10) != 0) {
      (**(code **)(*aplStack_30[0] + 0x18))();
    }
  }
  func_0x000107c28adc(aplStack_30);
  return;
}



/* Entry: 10867ec1c; end: 10867ec87;  */

void FUN_10867ec1c(long *param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long alStack_b8 [2];
  undefined1 auStack_a8 [16];
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_38;
  
  plVar5 = (long *)param_1[4];
  (**(code **)(*plVar5 + 0x10))();
  plVar6 = (long *)param_1[4];
  if (((ulong)plVar5 & 1) != 0) {
    (**(code **)(*plVar6 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00010867ec68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1);
    return;
  }
  (**(code **)(*plVar6 + 0x20))();
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)param_1[5];
  plVar5 = plVar6;
  if ((long)plVar6 <= (long)plVar7) {
    plVar5 = plVar7;
  }
  if ((long)plVar7 < 1) {
    plVar5 = plVar6;
  }
  plVar6 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  plVar6 = plVar6 + (long)plVar5 * 0x1e848;
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x18))();
  if ((char)param_1[10] == '\x01') {
    if ((param_1[7] - (long)plVar6 < 1000000) ||
       ((long)((ulong)(param_1[7] - (long)plVar6) / 1000000) < param_1[5])) goto LAB_10867ede4;
    func_0x00010089b2d0(param_1 + 8);
  }
  param_1[7] = (long)plVar6;
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  uStack_80 = *(undefined8 *)(lVar1 + 0x60);
  uStack_88 = *(undefined8 *)(lVar1 + 0x58);
  if (*(long *)(lVar1 + 0x60) != 0) {
    plVar5 = (long *)(*(long *)(lVar1 + 0x60) + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = (long *)param_1[7];
  }
  pcStack_98 = FUN_1086800e4;
  ppuStack_90 = &PTR_FUN_110a61ff0;
  alStack_b8[0] = 0;
  alStack_b8[1] = 0;
  func_0x00010bcce9b8(auStack_a8,lVar2,&pcStack_98,plVar6);
  func_0x0001086804ec();
  FUN_10868009c(param_1 + 8,auStack_a8);
  func_0x000100688f2c(auStack_a8);
  plVar5 = alStack_b8;
  func_0x000107c28ad8();
LAB_10867ede4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    func_0x000100688f2c(auStack_a8);
    plVar7 = alStack_b8;
    func_0x000107c28ad8();
    func_0x0001086804b0();
    func_0x00010089b290();
    if (plVar7 != (long *)0x0) {
      func_0x00010089b308();
      plVar5[1] = (long)plVar7;
      if (plVar7 != (long *)0x0) {
        *plVar5 = *plVar6;
      }
    }
    return;
  }
  return;
}



/* Entry: 10867ec88; end: 10867ec9f;  */

void FUN_10867ec88(void)

{
  FUN_10867fc7c();
  return;
}



/* Entry: 10867eca0; end: 10867ecd7;  */

long * FUN_10867eca0(long *param_1,long *param_2)

{
  long *plVar1;
  long unaff_x19;
  long *unaff_x20;
  
  plVar1 = param_1 + 1;
  if (*param_1 < *param_2) {
    FUN_10867ee98();
    func_0x000107c320ac();
    *plVar1 = *param_2;
    func_0x00010867f684(plVar1 + 1,param_2 + 1);
    func_0x00010867f6a4(unaff_x20 + 2,unaff_x19 + 0x10);
    func_0x00010867f6c4(plVar1 + 3,param_2 + 3);
    return unaff_x20;
  }
  return plVar1;
}



/* Entry: 10867ecd8; end: 10867ee37;  */

void FUN_10867ecd8(long *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long alStack_b8 [2];
  undefined1 auStack_a8 [16];
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_1[5];
  lVar1 = param_2;
  if (param_2 <= lVar6) {
    lVar1 = lVar6;
  }
  if (lVar6 < 1) {
    lVar1 = param_2;
  }
  plVar7 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  plVar7 = plVar7 + lVar1 * 0x1e848;
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x18))();
  if ((char)param_1[10] == '\x01') {
    if ((param_1[7] - (long)plVar7 < 1000000) ||
       ((long)((ulong)(param_1[7] - (long)plVar7) / 1000000) < param_1[5])) goto LAB_10867ede4;
    func_0x00010089b2d0(param_1 + 8);
  }
  param_1[7] = (long)plVar7;
  lVar1 = param_1[1];
  lVar6 = param_1[2];
  uStack_80 = *(undefined8 *)(lVar1 + 0x60);
  uStack_88 = *(undefined8 *)(lVar1 + 0x58);
  if (*(long *)(lVar1 + 0x60) != 0) {
    plVar4 = (long *)(*(long *)(lVar1 + 0x60) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7 = (long *)param_1[7];
  }
  pcStack_98 = FUN_1086800e4;
  ppuStack_90 = &PTR_FUN_110a61ff0;
  alStack_b8[0] = 0;
  alStack_b8[1] = 0;
  func_0x00010bcce9b8(auStack_a8,lVar6,&pcStack_98,plVar7);
  func_0x0001086804ec();
  FUN_10868009c(param_1 + 8,auStack_a8);
  func_0x000100688f2c(auStack_a8);
  plVar4 = alStack_b8;
  func_0x000107c28ad8();
LAB_10867ede4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    func_0x000100688f2c(auStack_a8);
    plVar5 = alStack_b8;
    func_0x000107c28ad8();
    func_0x0001086804b0();
    func_0x00010089b290();
    if (plVar5 != (long *)0x0) {
      func_0x00010089b308();
      plVar4[1] = (long)plVar5;
      if (plVar5 != (long *)0x0) {
        *plVar4 = *plVar7;
      }
    }
    return;
  }
  return;
}



/* Entry: 10867ee38; end: 10867ee97;  */

void FUN_10867ee38(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010089b290();
  if (param_1 != 0) {
    func_0x00010089b308();
    unaff_x19[1] = param_1;
    if (param_1 != 0) {
      *unaff_x19 = *unaff_x20;
    }
  }
  return;
}



/* Entry: 10867ee98; end: 10867eecb;  */

long FUN_10867ee98(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1086801f0(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 10867eecc; end: 10867ef1f;  */

void FUN_10867eecc(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c320ac();
  *param_1 = *param_2;
  func_0x00010867f684(param_1 + 1,param_2 + 1);
  func_0x00010867f6a4(unaff_x20 + 0x10,unaff_x19 + 0x10);
  func_0x00010867f6c4(param_1 + 3,param_2 + 3);
  return;
}



/* Entry: 10867ef20; end: 10867ef5b;  */

long FUN_10867ef20(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010867f6e4();
    lVar2 = uVar1 + 0x20;
  }
  else {
    lVar2 = param_1;
    FUN_10867f708();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x20;
}



/* Entry: 10867ef5c; end: 10867ef5f;  */

undefined8 * FUN_10867ef5c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110a61f78;
  plVar1 = (long *)param_1[0x17];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010867fc5c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0x15];
  param_1[0x15] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x000107c28ac4(param_1 + 0xf);
  func_0x000107c28ac0(param_1 + 0xd);
  *param_1 = &PTR_FUN_110a62018;
  func_0x0001006899b8(param_1 + 8);
  func_0x0001086801b4(param_1 + 4);
  func_0x000107c27c20(param_1 + 2);
  func_0x000107c28ad8(param_1 + 0xb);
  return param_1;
}



/* Entry: 10867ef60; end: 10867ef73;  */

void FUN_10867ef60(void)

{
  func_0x0001086803d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10867ef74; end: 10867f023;  */

void FUN_10867ef74(long *param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long alStack_b8 [2];
  undefined1 auStack_a8 [16];
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_38;
  
  plVar10 = param_1 + 0x17;
  plVar8 = param_1;
  uVar7 = 0x7fffffffffffffff;
  while (uVar9 = uVar7, plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
    while (__ZNSt3__16chrono12steady_clock3nowEv(), plVar10[9] <= (long)plVar8) {
      if (plVar10[8] != 0) {
        FUN_10867e9c4(param_1,plVar10 + 2);
      }
      plVar8 = param_1 + 0x15;
      FUN_10867fa94(plVar8,plVar10);
      plVar10 = plVar8;
      if (plVar8 == (long *)0x0) goto LAB_10867effc;
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar7 = (plVar10[9] - (long)plVar8) / 1000000;
    uVar7 = uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU);
    if ((long)uVar9 <= (long)uVar7) {
      uVar7 = uVar9;
    }
  }
LAB_10867effc:
  if (param_1[0x18] == 0) {
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_1[5];
  uVar7 = uVar9;
  if ((long)uVar9 <= (long)uVar6) {
    uVar7 = uVar6;
  }
  if ((long)uVar6 < 1) {
    uVar7 = uVar9;
  }
  plVar8 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  plVar8 = plVar8 + uVar7 * 0x1e848;
  plVar10 = param_1;
  (**(code **)(*param_1 + 0x18))();
  if ((char)param_1[10] == '\x01') {
    if ((param_1[7] - (long)plVar8 < 1000000) ||
       ((long)((ulong)(param_1[7] - (long)plVar8) / 1000000) < param_1[5])) goto LAB_10867ede4;
    func_0x00010089b2d0(param_1 + 8);
  }
  param_1[7] = (long)plVar8;
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  uStack_80 = *(undefined8 *)(lVar1 + 0x60);
  uStack_88 = *(undefined8 *)(lVar1 + 0x58);
  if (*(long *)(lVar1 + 0x60) != 0) {
    plVar10 = (long *)(*(long *)(lVar1 + 0x60) + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar8 = (long *)param_1[7];
  }
  pcStack_98 = FUN_1086800e4;
  ppuStack_90 = &PTR_FUN_110a61ff0;
  alStack_b8[0] = 0;
  alStack_b8[1] = 0;
  func_0x00010bcce9b8(auStack_a8,lVar2,&pcStack_98,plVar8);
  func_0x0001086804ec();
  FUN_10868009c(param_1 + 8,auStack_a8);
  func_0x000100688f2c(auStack_a8);
  plVar10 = alStack_b8;
  func_0x000107c28ad8();
LAB_10867ede4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x000100688f2c(auStack_a8);
  plVar5 = alStack_b8;
  func_0x000107c28ad8();
  func_0x0001086804b0();
  func_0x00010089b290();
  if (plVar5 != (long *)0x0) {
    func_0x00010089b308();
    plVar10[1] = (long)plVar5;
    if (plVar5 != (long *)0x0) {
      *plVar10 = *plVar8;
    }
  }
  return;
}



/* Entry: 10867f024; end: 10867f027;  */

void FUN_10867f024(void)

{
  return;
}



/* Entry: 10867f028; end: 10867f087;  */

undefined8 * FUN_10867f028(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  func_0x00010867f058(param_1 + 1,param_3);
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



/* Entry: 10867f088; end: 10867f093;  */

undefined8 * FUN_10867f088(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a94718;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_10867f0d0(param_1,param_2);
  return param_1;
}



/* Entry: 10867f094; end: 10867f0cf;  */

undefined8 * FUN_10867f094(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a94718;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_10867f0d0(param_1,param_3);
  return param_1;
}



/* Entry: 10867f0d0; end: 10867f133;  */

long FUN_10867f0d0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_108917a20(param_1);
    }
    else {
      FUN_1089179f0(param_1);
    }
  }
  return param_1;
}



/* Entry: 10867f134; end: 10867f187;  */

long FUN_10867f134(long param_1)

{
  func_0x00010867f168(param_1 + 0x18);
  FUN_10867f1bc(param_1 + 0x10);
  FUN_10867f210(param_1 + 8);
  return param_1;
}



/* Entry: 10867f188; end: 10867f19f;  */

void FUN_10867f188(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1088fc38c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10867f1a0; end: 10867f1bb;  */

void FUN_10867f1a0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1088fc38c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10867f1bc; end: 10867f1db;  */

void FUN_10867f1bc(void)

{
  func_0x00010868052c();
  FUN_10867f1dc();
  return;
}



/* Entry: 10867f1dc; end: 10867f1f3;  */

void FUN_10867f1dc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10891b058(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10867f1f4; end: 10867f20f;  */

void FUN_10867f1f4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10891b058(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10867f210; end: 10867f22f;  */

void FUN_10867f210(void)

{
  func_0x00010868052c();
  FUN_10867f230();
  return;
}



/* Entry: 10867f230; end: 10867f247;  */

void FUN_10867f230(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108917820(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10867f248; end: 10867f263;  */

void FUN_10867f248(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_108917820(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10867f264; end: 10867f2ab;  */

undefined8 * FUN_10867f264(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  FUN_10867f2ac(param_1 + 2,param_3);
  param_1[3] = 0;
  return param_1;
}



/* Entry: 10867f2ac; end: 10867f2db;  */

void FUN_10867f2ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm();
  FUN_10867f2dc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10867f2dc; end: 10867f2e7;  */

undefined8 * FUN_10867f2dc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a96270;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_10867f324(param_1,param_2);
  return param_1;
}



/* Entry: 10867f2e8; end: 10867f323;  */

undefined8 * FUN_10867f2e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a96270;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_10867f324(param_1,param_3);
  return param_1;
}



/* Entry: 10867f324; end: 10867f387;  */

long FUN_10867f324(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10891b874(param_1);
    }
    else {
      FUN_10891b844(param_1);
    }
  }
  return param_1;
}



/* Entry: 10867f388; end: 10867f3df;  */

undefined8 * FUN_10867f388(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10867f3e0(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 10867f3e0; end: 10867f40f;  */

void FUN_10867f3e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x50;
  __Znwm();
  FUN_10867f410();
  *param_1 = uVar1;
  return;
}



/* Entry: 10867f410; end: 10867f41b;  */

undefined8 * FUN_10867f410(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a8ea68;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_10867f460(param_1,param_2);
  return param_1;
}



/* Entry: 10867f41c; end: 10867f45f;  */

undefined8 * FUN_10867f41c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a8ea68;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_10867f460(param_1,param_3);
  return param_1;
}



/* Entry: 10867f460; end: 10867f4c3;  */

long FUN_10867f460(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x0001088fca90(param_1);
    }
    else {
      FUN_1088fca60(param_1);
    }
  }
  return param_1;
}



/* Entry: 10867f4c4; end: 10867f527;  */

undefined8 FUN_10867f4c4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010867f4f0(&uStack_28);
  return param_1;
}



/* Entry: 10867f528; end: 10867f52f;  */

void FUN_10867f528(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c320ac(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    FUN_10867f134();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10867f530; end: 10867f5c3;  */

void FUN_10867f530(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c320ac();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    FUN_10867f134();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10867f5c4; end: 10867f5ff;  */

void FUN_10867f5c4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *param_1 = *param_2;
  plVar3 = param_1 + 1;
  *plVar3 = lVar2;
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    *(long **)(lVar2 + 0x10) = plVar3;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
    return;
  }
  *param_1 = plVar3;
  return;
}



/* Entry: 10867f600; end: 10867f707;  */

void FUN_10867f600(void)

{
  func_0x000108680518();
  func_0x000100100fd4(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 10867f708; end: 10867f7a3;  */

long FUN_10867f708(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  plVar1 = param_1;
  FUN_10867f7c8(param_1,(param_1[1] - *param_1 >> 5) + 1);
  FUN_10867f8c8(auStack_48,plVar1,param_1[1] - *param_1 >> 5,param_1 + 2);
  FUN_10867f7a4(lStack_38,param_2);
  lStack_38 = lStack_38 + 0x20;
  FUN_10867f808(param_1,auStack_48);
  lVar2 = param_1[1];
  FUN_10867f950(auStack_48);
  return lVar2;
}



/* Entry: 10867f7a4; end: 10867f7c7;  */

void FUN_10867f7a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_2[3] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 10867f7c8; end: 10867f807;  */

ulong FUN_10867f7c8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  ulong *unaff_x20;
  ulong uVar5;
  
  if (param_2 >> 0x3b == 0) {
    uVar4 = (long)(param_1[2] - *param_1) >> 4;
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
    if (0x7fffffffffffffdf < param_1[2] - *param_1) {
      uVar4 = 0x7ffffffffffffff;
    }
    return uVar4;
  }
  FUN_10867f8b4();
  func_0x000107c320ac();
  uVar5 = *param_1;
  uVar2 = param_1[1];
  uVar1 = *(long *)(param_2 + 8) + (uVar5 - uVar2);
  uVar3 = uVar1;
  for (uVar4 = uVar5; uVar4 != uVar2; uVar4 = uVar4 + 0x20) {
    FUN_10867f7a4(uVar3,uVar4);
    uVar3 = uVar3 + 0x20;
  }
  for (; uVar5 != uVar2; uVar5 = uVar5 + 0x20) {
    uVar3 = uVar5;
    FUN_10867f134(uVar5);
  }
  unaff_x19[1] = uVar1;
  uVar4 = *unaff_x20;
  *unaff_x20 = uVar1;
  unaff_x20[1] = uVar4;
  unaff_x19[1] = uVar4;
  uVar4 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar4;
  uVar4 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar4;
  *unaff_x19 = unaff_x19[1];
  return uVar3;
}



/* Entry: 10867f808; end: 10867f8b3;  */

void FUN_10867f808(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar5;
  
  func_0x000107c320ac();
  lVar5 = *param_1;
  lVar2 = param_1[1];
  lVar1 = *(long *)(param_2 + 8) + (lVar5 - lVar2);
  lVar3 = lVar1;
  for (lVar4 = lVar5; lVar4 != lVar2; lVar4 = lVar4 + 0x20) {
    FUN_10867f7a4(lVar3,lVar4);
    lVar3 = lVar3 + 0x20;
  }
  for (; lVar5 != lVar2; lVar5 = lVar5 + 0x20) {
    FUN_10867f134(lVar5);
  }
  unaff_x19[1] = lVar1;
  lVar4 = *unaff_x20;
  *unaff_x20 = lVar1;
  unaff_x20[1] = lVar4;
  unaff_x19[1] = lVar4;
  lVar4 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar4;
  lVar4 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar4;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10867f8b4; end: 10867f8c7;  */

long * FUN_10867f8b4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&UNK_10f4b0115;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010867f910();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 0x20;
  return plVar2;
}



/* Entry: 10867f8c8; end: 10867f933;  */

long * FUN_10867f8c8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010867f910();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 10867f934; end: 10867f94f;  */

long * FUN_10867f934(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_2 << 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10867f97c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10867f950; end: 10867f97b;  */

long * FUN_10867f950(long *param_1)

{
  FUN_10867f97c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10867f97c; end: 10867f983;  */

void FUN_10867f97c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c320ac(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    FUN_10867f134();
  }
  return;
}



/* Entry: 10867f984; end: 10867f9b7;  */

void FUN_10867f984(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c320ac();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    FUN_10867f134();
  }
  return;
}



/* Entry: 10867f9b8; end: 10867fa93;  */

long FUN_10867f9b8(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = param_1[1];
  if ((uVar8 != 0) && (param_1[3] != 0)) {
    uVar3 = param_2;
    FUN_108848654();
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = uVar3 & uVar9;
    }
    else {
      uVar10 = uVar3;
      if (uVar8 <= uVar3) {
        uVar1 = 0;
        uVar7 = (uint)uVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)uVar3 / uVar7;
        }
        uVar10 = (ulong)((uint)uVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        uVar5 = plVar6[1];
        if (uVar5 != uVar3) break;
        lVar4 = (long)(plVar6 + 2);
        func_0x000107c28078(lVar4,param_2);
        if ((int)lVar4 != 0) {
          return (long)plVar6;
        }
      }
      if ((uVar8 & uVar9) == 0) {
        uVar5 = uVar5 & uVar9;
      }
      else if (uVar8 <= uVar5) {
        uVar2 = 0;
        if (uVar8 != 0) {
          uVar2 = uVar5 / uVar8;
        }
        uVar5 = uVar5 - uVar2 * uVar8;
      }
    } while (uVar5 == uVar10);
  }
  return 0;
}



/* Entry: 10867fa94; end: 10867fac7;  */

undefined8 FUN_10867fa94(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_10867fac8(auStack_38);
  func_0x000108680504();
  return uVar1;
}



/* Entry: 10867fac8; end: 10867fbe3;  */

void FUN_10867fac8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10867fb7c;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10867fb7c;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10867fb7c:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10867fbe4; end: 10867fc03;  */

void FUN_10867fbe4(void)

{
  func_0x00010868052c();
  FUN_10867fc04();
  return;
}



/* Entry: 10867fc04; end: 10867fc1b;  */

void FUN_10867fc04(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010867fc5c(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10867fc1c; end: 10867fc7b;  */

void FUN_10867fc1c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010867fc5c(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10867fc7c; end: 10867fcaf;  */

void FUN_10867fc7c(void)

{
  func_0x00010867fc94();
  return;
}



/* Entry: 10867fcb0; end: 108680083;  */

undefined1  [16] FUN_10867fcb0(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  ulong unaff_x25;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  uVar8 = param_2;
  FUN_108848654();
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar16 = uVar15 - 1;
    uVar14 = (uint)uVar15;
    if ((uVar15 & uVar16) == 0) {
      unaff_x25 = uVar14 - 1 & uVar8;
    }
    else {
      unaff_x25 = uVar8;
      if (uVar15 <= uVar8) {
        uVar1 = 0;
        if (uVar14 != 0) {
          uVar1 = (uint)uVar8 / uVar14;
        }
        unaff_x25 = (ulong)((uint)uVar8 - uVar1 * uVar14);
      }
    }
    plVar13 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_10867fd78;
          uVar6 = plVar13[1];
          if (uVar6 != uVar8) break;
          plVar3 = plVar13 + 2;
          func_0x000107c28078(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar5 = 0;
            goto LAB_108680050;
          }
        }
        if ((uVar15 & uVar16) == 0) {
          uVar6 = uVar6 & uVar16;
        }
        else if (uVar15 <= uVar6) {
          uVar7 = 0;
          if (uVar15 != 0) {
            uVar7 = uVar6 / uVar15;
          }
          uVar6 = uVar6 - uVar7 * uVar15;
        }
      } while (uVar6 == unaff_x25);
    }
  }
LAB_10867fd78:
  plVar3 = param_1 + 2;
  plVar13 = (long *)0x50;
  __Znwm();
  *plVar13 = 0;
  plVar13[1] = uVar8;
  lVar4 = *param_3;
  plVar13[3] = param_3[1];
  plVar13[2] = lVar4;
  plVar13[4] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  func_0x00010867f594(plVar13 + 5,param_3 + 3);
  if ((uVar15 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar15))
  goto LAB_10867ffd4;
  uVar16 = 1;
  if (2 < uVar15) {
    uVar16 = (ulong)((uVar15 & uVar15 - 1) != 0);
  }
  uVar16 = uVar16 | uVar15 << 1;
  uVar15 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar16 <= uVar15) {
    uVar16 = uVar15;
  }
  if (uVar16 - 1 == 0) {
    uVar16 = 2;
  }
  else if ((uVar16 & uVar16 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar15 = param_1[1];
  if (uVar15 < uVar16) {
LAB_10867fe3c:
    if (uVar16 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108680078);
      (*pcVar2)();
    }
    lVar4 = uVar16 << 3;
    __Znwm(lVar4);
    FUN_108680084(param_1,lVar4);
    param_1[1] = uVar16;
    lVar4 = *param_1;
    for (uVar15 = 0; uVar16 != uVar15; uVar15 = uVar15 + 1) {
      *(undefined8 *)(lVar4 + uVar15 * 8) = 0;
    }
    plVar9 = (long *)*plVar3;
    uVar15 = uVar16;
    if (plVar9 != (long *)0x0) {
      uVar11 = plVar9[1];
      uVar7 = uVar16 - 1;
      uVar6 = 0;
      if (uVar16 != 0) {
        uVar6 = uVar11 / uVar16;
      }
      uVar12 = uVar11;
      if (uVar16 <= uVar11) {
        uVar12 = uVar11 - uVar6 * uVar16;
      }
      if ((uVar16 & uVar7) == 0) {
        uVar12 = uVar11 & uVar7;
      }
      *(long **)(lVar4 + uVar12 * 8) = plVar3;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        uVar6 = plVar9[1];
        if ((uVar16 & uVar7) == 0) {
          uVar6 = uVar6 & uVar7;
        }
        else if (uVar16 <= uVar6) {
          uVar11 = 0;
          if (uVar16 != 0) {
            uVar11 = uVar6 / uVar16;
          }
          uVar6 = uVar6 - uVar11 * uVar16;
        }
        if (uVar6 != uVar12) {
          if (*(long *)(lVar4 + uVar6 * 8) == 0) {
            *(long **)(lVar4 + uVar6 * 8) = plVar10;
            uVar12 = uVar6;
          }
          else {
            *plVar10 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar4 + uVar6 * 8);
            **(long **)(lVar4 + uVar6 * 8) = (long)plVar9;
            plVar9 = plVar10;
          }
        }
      }
    }
  }
  else if (uVar16 < uVar15) {
    uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar6) {
      uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
    }
    if (uVar16 <= uVar6) {
      uVar16 = uVar6;
    }
    if (uVar16 < uVar15) {
      if (uVar16 != 0) goto LAB_10867fe3c;
      FUN_108680084(param_1,0);
      param_1[1] = 0;
      uVar15 = 0;
    }
    else {
      uVar15 = param_1[1];
    }
  }
  if ((uVar15 & uVar15 - 1) == 0) {
    unaff_x25 = (int)uVar15 - 1 & uVar8;
  }
  else {
    unaff_x25 = uVar8;
    if (uVar15 <= uVar8) {
      uVar16 = 0;
      if (uVar15 != 0) {
        uVar16 = uVar8 / uVar15;
      }
      unaff_x25 = uVar8 - uVar16 * uVar15;
    }
  }
LAB_10867ffd4:
  lVar4 = *param_1;
  plVar9 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar13 = *plVar3;
    *plVar3 = (long)plVar13;
    *(long **)(lVar4 + unaff_x25 * 8) = plVar3;
    if (*plVar13 != 0) {
      uVar8 = *(ulong *)(*plVar13 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar8 = uVar8 & uVar15 - 1;
      }
      else if (uVar15 <= uVar8) {
        uVar16 = 0;
        if (uVar15 != 0) {
          uVar16 = uVar8 / uVar15;
        }
        uVar8 = uVar8 - uVar16 * uVar15;
      }
      *(long **)(lVar4 + uVar8 * 8) = plVar13;
    }
  }
  else {
    *plVar13 = *plVar9;
    *plVar9 = (long)plVar13;
  }
  param_1[3] = param_1[3] + 1;
  func_0x000108680504();
  uVar5 = 1;
LAB_108680050:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar13;
  return auVar17;
}



/* Entry: 108680084; end: 10868009b;  */

void FUN_108680084(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10868009c; end: 1086800e3;  */

undefined8 * FUN_10868009c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    FUN_108680190(param_1);
  }
  else {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



/* Entry: 1086800e4; end: 108680147;  */

void FUN_1086800e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_28 = lVar1;
    if (lVar1 != 0) {
      lStack_30 = *(long *)(param_1 + 0x10);
      if (lStack_30 != 0) {
        FUN_108680148(lStack_30 + 0x40);
        func_0x0001086804fc();
      }
    }
  }
  func_0x000107c28ad0(&lStack_30);
  return;
}



/* Entry: 108680148; end: 10868016b;  */

void FUN_108680148(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000100688f2c();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10868016c; end: 10868018f;  */

void FUN_10868016c(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010056582c();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 108680190; end: 1086801e7;  */

void FUN_108680190(void)

{
  func_0x000107c32098();
  func_0x000100688f2c();
  return;
}



/* Entry: 1086801e8; end: 1086801ef;  */

void FUN_1086801e8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1086801ec);
  (*pcVar1)();
}



/* Entry: 1086801f0; end: 1086802d7;  */

undefined1  [16] FUN_1086801f0(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = param_1 + 1;
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, plVar3[4] <= *param_2) {
        if (*param_2 <= plVar3[4]) {
          uVar2 = 0;
          goto LAB_1086802c0;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_108680258;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_108680258:
  plVar1 = (long *)0x48;
  __Znwm();
  plVar1[4] = *(long *)*param_4;
  plVar1[8] = 0;
  plVar1[7] = 0;
  plVar1[6] = 0;
  plVar1[5] = 0;
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = (long)plVar3;
  *plVar4 = (long)plVar1;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x000107c27be4(param_1[1],plVar1);
  param_1[2] = param_1[2] + 1;
  uVar2 = 1;
  plVar3 = plVar1;
LAB_1086802c0:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 1086802d8; end: 10868030f;  */

long * FUN_1086802d8(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  for (plVar4 = *(long **)(param_1 + 8); plVar4 != (long *)0x0;
      plVar4 = *(long **)((long)plVar4 + lVar1)) {
    lVar1 = 0;
    plVar2 = plVar4;
    if (plVar4[4] <= *param_2) {
      lVar1 = 8;
      plVar2 = plVar3;
    }
    plVar3 = plVar2;
  }
  return plVar3;
}



/* Entry: 108680310; end: 10868037b;  */

long FUN_108680310(long param_1,long param_2,long param_3)

{
  while (param_2 != param_3) {
    param_2 = param_1;
    func_0x000108680348();
  }
  return param_3;
}



/* Entry: 10868037c; end: 10868046f;  */

long FUN_10868037c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x000107c27be0();
  if (*param_1 == param_2) {
    *param_1 = lVar1;
  }
  param_1[2] = param_1[2] + -1;
  func_0x00010530d618(param_1[1],param_2);
  return lVar1;
}



/* Entry: 108680470; end: 10868054b;  */

void FUN_108680470(void)

{
  return;
}



/* Entry: 10868054c; end: 108680827;  */

undefined8 *
FUN_10868054c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [32];
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 *puStack_90;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  func_0x000108680e8c();
  uStack_68 = extraout_x8;
  if (param_1[1] != 0) {
    uVar1 = param_1[5];
    lVar5 = param_1[6];
    uStack_110 = uVar1;
    lStack_108 = lVar5;
    if (lVar5 != 0) {
      do {
        func_0x000108680e38();
      } while (extraout_w10 != 0);
    }
    puVar2 = (undefined8 *)0x90;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_110a620f0;
    pcStack_a0 = (code *)*param_3;
    (**(code **)(param_3[1] + 0x10))(&ppuStack_98,param_3 + 1);
    pcStack_e0 = (code *)*param_4;
    (**(code **)(param_4[1] + 0x10))(&ppuStack_d8,param_4 + 1);
    uStack_110 = 0;
    lStack_108 = 0;
    puVar2[3] = &PTR_FUN_110a62098;
    puVar2[4] = pcStack_a0;
    (*(code *)ppuStack_98[2])(puVar2 + 5,&ppuStack_98);
    puVar2[10] = pcStack_e0;
    (*(code *)ppuStack_d8[2])(puVar2 + 0xb,&ppuStack_d8);
    puVar2[0x10] = uVar1;
    puVar2[0x11] = lVar5;
    uStack_f0 = 0;
    uStack_e8 = 0;
    func_0x000108680c50(&uStack_f0);
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
    (*(code *)*ppuStack_98)(&ppuStack_98);
    func_0x000108680c50(&uStack_110);
    lVar5 = param_1[3];
    ppuStack_d8 = (undefined **)param_1[2];
    pcStack_e0 = (code *)param_1[1];
    if (param_1[2] != 0) {
      do {
        func_0x000108680e38();
      } while (extraout_w10_00 != 0);
    }
    uStack_100 = 0;
    uStack_f8 = 0;
    puVar3 = auStack_c0;
    puStack_d0 = puVar2 + 3;
    puStack_c8 = puVar2;
    func_0x000107c27994(puVar3,param_2);
    func_0x000107c28150();
    lVar5 = *(long *)(lVar5 + 0x10);
    __ZNSt3__15mutex4lockEv(lVar5 + 8);
    lVar6 = *(long *)(lVar5 + 0x70);
    pcStack_a0 = FUN_108680cd8;
    ppuStack_98 = &PTR_FUN_110a62130;
    puVar2 = (undefined8 *)0x38;
    __Znwm();
    ppuVar8 = ppuStack_d8;
    pcVar7 = pcStack_e0;
    puVar2[1] = ppuStack_d8;
    *puVar2 = pcStack_e0;
    pcStack_e0 = (code *)0x0;
    ppuStack_d8 = (undefined **)0x0;
    puVar2[3] = puStack_c8;
    puVar2[2] = puStack_d0;
    puStack_d0 = (undefined8 *)0x0;
    puStack_c8 = (undefined8 *)0x0;
    func_0x000107c27994(puVar2 + 4,auStack_c0);
    puStack_90 = puVar2;
    puStack_70 = puVar3;
    func_0x000107c28154(lVar5 + 0x48,&pcStack_a0);
    func_0x000108680e08(ppuStack_98);
    plVar4 = (long *)(lVar5 + 8);
    __ZNSt3__15mutex6unlockEv();
    if (lVar6 == 0) {
      func_0x000108680e9c();
      pcStack_a0 = pcVar7;
      ppuStack_98 = ppuVar8;
      if (extraout_x8_00 != 0) {
        do {
          func_0x000108680e38();
        } while (extraout_w10_01 != 0);
      }
      (**(code **)(*plVar4 + 0x10))();
      func_0x000107c27e74(&pcStack_a0);
    }
    FUN_108680828(&pcStack_e0);
    param_1 = &uStack_100;
    FUN_108680cb0();
  }
  func_0x000108680e48(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&pcStack_a0);
    FUN_108680828(&pcStack_e0);
    puVar2 = &uStack_100;
    FUN_108680cb0();
    func_0x000108680e84();
    func_0x000107c27914(puVar2 + 4);
    FUN_108680cb0(puVar2 + 2);
    func_0x0001005528ec();
    if (puVar2 != (undefined8 *)0x0) {
      func_0x0001000df548();
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 108680828; end: 108680857;  */

undefined8 FUN_108680828(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27914(param_1 + 0x20);
  FUN_108680cb0(param_1 + 0x10);
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108680858; end: 1086809e7;  */

void FUN_108680858(long param_1,long param_2,undefined4 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long lVar5;
  long lVar6;
  undefined **in_register_00005008;
  long alStack_d8 [2];
  undefined8 uStack_c8;
  undefined8 auStack_c0 [5];
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  func_0x000108680e8c();
  plVar4 = (long *)(param_2 + 0x68);
  uStack_58 = extraout_x8;
  FUN_1086809e8(alStack_d8);
  if (alStack_d8[0] != 0) {
    uStack_c8 = *(undefined8 *)(param_2 + 8);
    puVar1 = auStack_c0;
    (**(code **)(*(long *)(param_2 + 0x10) + 0x10))(puVar1,(long *)(param_2 + 0x10));
    uStack_98 = *param_3;
    uStack_94 = CONCAT31(uStack_94._1_3_,*(undefined1 *)(param_3 + 1));
    func_0x000107c28150();
    lVar5 = *(long *)(alStack_d8[0] + 0x10);
    __ZNSt3__15mutex4lockEv(lVar5 + 8);
    lVar6 = *(long *)(lVar5 + 0x70);
    lStack_90 = 0x108680d74;
    ppuStack_88 = &PTR_FUN_110a62148;
    lVar2 = 0x38;
    __Znwm();
    func_0x000108680e6c(uStack_c8);
    *(ulong *)(lVar2 + 0x30) = CONCAT44(uStack_94,uStack_98);
    plVar3 = (long *)(lVar5 + 0x48);
    plVar4 = &lStack_90;
    lStack_80 = lVar2;
    puStack_60 = puVar1;
    func_0x000107c28154();
    func_0x000108680e2c(ppuStack_88);
    func_0x000108680e5c();
    if (lVar6 == 0) {
      func_0x000108680e9c();
      lStack_90 = param_1;
      ppuStack_88 = in_register_00005008;
      if (extraout_x8_00 != 0) {
        do {
          func_0x000108680e38();
        } while (extraout_w10 != 0);
      }
      plVar4 = &lStack_90;
      (**(code **)(*plVar3 + 0x10))();
      func_0x000107c27e74(&lStack_90);
    }
    func_0x000108680e08(auStack_c0[0]);
  }
  func_0x000107c2814c();
  func_0x000108680e48(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&lStack_90);
    func_0x000108680e08(auStack_c0[0]);
    plVar3 = alStack_d8;
    func_0x000107c2814c();
    func_0x000108680e84();
    *plVar3 = 0;
    plVar3[1] = 0;
    lVar2 = plVar4[1];
    if (lVar2 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plVar3[1] = lVar2;
      if (lVar2 != 0) {
        *plVar3 = *plVar4;
      }
    }
    return;
  }
  return;
}



/* Entry: 1086809e8; end: 108680a23;  */

void FUN_1086809e8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 108680a24; end: 108680b97;  */

long * FUN_108680a24(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long lVar6;
  long lVar7;
  undefined **in_register_00005008;
  long alStack_d0 [2];
  undefined8 uStack_c0;
  undefined8 auStack_b8 [5];
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  plVar4 = alStack_d0;
  plVar5 = alStack_d0;
  func_0x000108680e8c();
  uStack_58 = extraout_x8;
  FUN_1086809e8(alStack_d0,param_2 + 0x68);
  if (alStack_d0[0] != 0) {
    uStack_c0 = *(undefined8 *)(param_2 + 0x38);
    puVar1 = auStack_b8;
    (**(code **)(*(long *)(param_2 + 0x40) + 0x10))(puVar1,(long *)(param_2 + 0x40));
    func_0x000107c28150();
    lVar6 = *(long *)(alStack_d0[0] + 0x10);
    __ZNSt3__15mutex4lockEv(lVar6 + 8);
    lVar7 = *(long *)(lVar6 + 0x70);
    uStack_90 = 0x108680dc0;
    ppuStack_88 = &PTR_FUN_110a62160;
    uVar2 = 0x30;
    __Znwm();
    func_0x000108680e6c(uStack_c0);
    plVar3 = (long *)(lVar6 + 0x48);
    uStack_80 = uVar2;
    puStack_60 = puVar1;
    func_0x000107c28154(plVar3,&uStack_90);
    func_0x000108680e2c(ppuStack_88);
    func_0x000108680e5c();
    if (lVar7 == 0) {
      func_0x000108680e9c();
      uStack_90 = param_1;
      ppuStack_88 = in_register_00005008;
      if (extraout_x8_00 != 0) {
        do {
          func_0x000108680e38();
        } while (extraout_w10 != 0);
      }
      (**(code **)(*plVar3 + 0x10))();
      func_0x000107c27e74(&uStack_90);
    }
    func_0x000108680e08(auStack_b8[0]);
  }
  func_0x000107c2814c();
  func_0x000108680e48(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&uStack_90);
    func_0x000108680e08(auStack_b8[0]);
    func_0x000107c2814c();
    func_0x000108680e84();
    *plVar5 = (long)&PTR_FUN_110a62048;
    func_0x000107c2814c(plVar5 + 5);
    func_0x000107c2814c(plVar5 + 3);
    func_0x000107c286ec(plVar5 + 1);
    return plVar5;
  }
  return plVar4;
}



/* Entry: 108680b98; end: 108680b9b;  */

undefined8 * FUN_108680b98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a62048;
  func_0x000107c2814c(param_1 + 5);
  func_0x000107c2814c(param_1 + 3);
  func_0x000107c286ec(param_1 + 1);
  return param_1;
}



/* Entry: 108680b9c; end: 108680baf;  */

void FUN_108680b9c(void)

{
  FUN_108680bc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108680bb0; end: 108680bb3;  */

undefined8 * FUN_108680bb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a62098;
  func_0x000108680c50(param_1 + 0xd);
  func_0x000108680e64(param_1[8]);
  func_0x000108680e64(param_1[2]);
  return param_1;
}



/* Entry: 108680bb4; end: 108680bc7;  */

void FUN_108680bb4(void)

{
  func_0x000108680c0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108680bc8; end: 108680c77;  */

undefined8 * FUN_108680bc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a62048;
  func_0x000107c2814c(param_1 + 5);
  func_0x000107c2814c(param_1 + 3);
  func_0x000107c286ec(param_1 + 1);
  return param_1;
}



/* Entry: 108680c78; end: 108680c7b;  */

void FUN_108680c78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a620f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108680c7c; end: 108680c8f;  */

void FUN_108680c7c(void)

{
  func_0x000108680ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108680c90; end: 108680caf;  */

void FUN_108680c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108680c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108680cb0; end: 108680cd7;  */

long FUN_108680cb0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108680cd8; end: 108680d4f;  */

void FUN_108680cd8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  plVar4 = (long *)*puVar5;
  uStack_28 = puVar5[3];
  uStack_30 = puVar5[2];
  if (puVar5[3] != 0) {
    plVar1 = (long *)(puVar5[3] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar5 + 4,&uStack_30);
  FUN_10862dc18(&uStack_30);
  return;
}



/* Entry: 108680d50; end: 108680d6f;  */

void FUN_108680d50(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108680828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108680d70; end: 108680d83;  */

void FUN_108680d70(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108680d84; end: 108680dbb;  */

void FUN_108680d84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x000108680e64(*(undefined8 *)(lVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108680dbc; end: 108680dcb;  */

void FUN_108680dbc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108680dcc; end: 108680e03;  */

void FUN_108680dcc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x000108680e64(*(undefined8 *)(lVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108680e04; end: 108680eb3;  */

void FUN_108680e04(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108680eb4; end: 108680f5b;  */

void FUN_108680eb4(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  long lStack_40;
  
  if ((param_3 == 0) || (uVar1 = param_1, FUN_108681328(param_1,param_2), (uVar1 & 1) == 0)) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18),param_2);
    FUN_108844c80(&lStack_60,param_2);
    if ((lStack_60 != lStack_58) || (lStack_48 != lStack_40)) {
      (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),&lStack_60,&lStack_48);
    }
    func_0x00010868149c();
  }
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b8375c; end: 108b837a7;  */

void FUN_108b8375c(undefined8 param_1,long param_2)

{
  char in_NG;
  char in_OV;
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x000108b83eec();
  if (in_NG == in_OV) {
    lVar1 = *unaff_x19;
    lVar2 = unaff_x19[1];
    if (lVar2 == 0) {
      lVar2 = *(long *)(lVar1 + 0x18);
    }
    FUN_108b837a8(lVar1,lVar2);
    unaff_x19[1] = lVar1;
  }
  else if (param_2 < 0) {
    FUN_108b837cc();
  }
  return;
}



/* Entry: 108b837a8; end: 108b837cb;  */

long FUN_108b837a8(long *param_1,long param_2,long param_3)

{
  if (param_2 - *param_1 >> 3 < param_3) {
    param_3 = param_3 - (param_1[1] - *param_1 >> 3);
  }
  return param_2 + param_3 * -8;
}



/* Entry: 108b837cc; end: 108b8390b;  */

void FUN_108b837cc(undefined8 param_1,long param_2)

{
  char in_NG;
  char in_OV;
  
  func_0x000108b83eec();
  if (in_NG == in_OV) {
    func_0x000108b83e14();
  }
  else if (param_2 < 0) {
    FUN_108b8375c();
  }
  return;
}



/* Entry: 108b8390c; end: 108b83917;  */

void FUN_108b8390c(void)

{
  return;
}



/* Entry: 108b83918; end: 108b83967;  */

long FUN_108b83918(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  if (param_2 >> 0x3c != 0) {
    func_0x000108b83dac();
    FUN_108988920(auStack_30);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108b83960);
    (*pcVar1)();
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar2);
    return lVar2;
  }
  func_0x000104bd35f4();
  FUN_108b83a30();
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return lVar2;
  }
  return 0;
}



/* Entry: 108b83968; end: 108b83997;  */

void FUN_108b83968(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x000108b83eb8();
  FUN_108b839fc();
  func_0x000108b83de4(unaff_x21 + unaff_x19 * 0x10);
  return;
}



/* Entry: 108b83998; end: 108b839b7;  */

void FUN_108b83998(void)

{
  func_0x000108b83dcc();
  FUN_108b83aa4();
  return;
}



/* Entry: 108b839b8; end: 108b839df;  */

void FUN_108b839b8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  
  func_0x000108b83ea4();
  FUN_108b83b38();
  uVar1 = *param_1;
  unaff_x19[1] = param_1[1];
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 108b839e0; end: 108b839fb;  */

void FUN_108b839e0(long *param_1,ulong param_2)

{
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  FUN_108b83a30();
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108b839fc; end: 108b83a2f;  */

void FUN_108b839fc(long *param_1)

{
  FUN_108b83a30();
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108b83a30; end: 108b83a4f;  */

void FUN_108b83a30(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_108b83a50(param_1,&uStack_11);
  return;
}



/* Entry: 108b83a50; end: 108b83aa3;  */

void FUN_108b83a50(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  
  for (uVar2 = 0; uVar2 < (ulong)param_1[4]; uVar2 = uVar2 + 1) {
    func_0x00010897dd64(param_1[2]);
    lVar1 = param_1[2];
    param_1[2] = lVar1 + 0x10;
    if (lVar1 + 0x10 == param_1[1]) {
      param_1[2] = *param_1;
    }
  }
  return;
}



/* Entry: 108b83aa4; end: 108b83aff;  */

undefined8 * FUN_108b83aa4(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  while (puVar1 = *(undefined8 **)(param_1 + 8), puVar1 != *(undefined8 **)(param_2 + 8)) {
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_108b83b00(param_1);
    param_3 = param_3 + 2;
  }
  return param_3;
}



/* Entry: 108b83b00; end: 108b83b37;  */

void FUN_108b83b00(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_1;
  lVar2 = param_1[1] + 0x10;
  param_1[1] = lVar2;
  if (lVar2 == plVar1[1]) {
    lVar2 = *plVar1;
    param_1[1] = lVar2;
  }
  if (lVar2 != plVar1[3]) {
    return;
  }
  param_1[1] = 0;
  return;
}



/* Entry: 108b83b38; end: 108b83b83;  */

void FUN_108b83b38(undefined8 param_1,long param_2)

{
  char in_NG;
  char in_OV;
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x000108b83eec();
  if (in_NG == in_OV) {
    lVar1 = *unaff_x19;
    lVar2 = unaff_x19[1];
    if (lVar2 == 0) {
      lVar2 = *(long *)(lVar1 + 0x18);
    }
    FUN_108b83b84(lVar1,lVar2);
    unaff_x19[1] = lVar1;
  }
  else if (param_2 < 0) {
    FUN_108b83ba8();
  }
  return;
}



/* Entry: 108b83b84; end: 108b83ba7;  */

long FUN_108b83b84(long *param_1,long param_2,long param_3)

{
  if (param_2 - *param_1 >> 4 < param_3) {
    param_3 = param_3 - (param_1[1] - *param_1 >> 4);
  }
  return param_2 + param_3 * -0x10;
}



/* Entry: 108b83ba8; end: 108b83cf7;  */

void FUN_108b83ba8(undefined8 param_1,long param_2)

{
  char in_NG;
  char in_OV;
  
  func_0x000108b83eec();
  if (in_NG == in_OV) {
    func_0x000108b83e14();
  }
  else if (param_2 < 0) {
    FUN_108b83b38();
  }
  return;
}



/* Entry: 108b83cf8; end: 108b83ef7;  */

void FUN_108b83cf8(void)

{
  return;
}



/* Entry: 108b83ef8; end: 108b83f3f;  */

void FUN_108b83ef8(undefined2 param_1)

{
  undefined2 uStack_12;
  
  uStack_12 = param_1;
  func_0x000108b83f1c(&uStack_12);
  return;
}



/* Entry: 108b83f40; end: 108b83fb7;  */

void FUN_108b83f40(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 108b83fb8; end: 108b8407b;  */

undefined1 * FUN_108b83fb8(long *param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar3 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = 1;
  FUN_108b8407c(auStack_40);
  puVar2 = puStack_30;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110ab45d8;
  uVar1 = *param_3;
  puStack_30[3] = 0x32aaaba7;
  puStack_30[5] = 0;
  puStack_30[4] = 0;
  puStack_30[7] = 0;
  puStack_30[6] = 0;
  puStack_30[9] = 0;
  puStack_30[8] = 0;
  puStack_30[10] = 0;
  puStack_30[0xb] = 0x3cb0b1bb;
  puStack_30[0xd] = 0;
  puStack_30[0xc] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0x10] = 0;
  *(undefined2 *)(puStack_30 + 0x11) = uVar1;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar2 + 3);
  param_1[1] = (long)puVar2;
  func_0x000108b8410c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar3 + 8) = uVar5;
  puVar4 = puVar3;
  FUN_108b840a8();
  *(undefined1 **)(puVar3 + 0x10) = puVar4;
  return puVar3;
}



/* Entry: 108b8407c; end: 108b840a7;  */

long FUN_108b8407c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_108b840a8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 108b840a8; end: 108b840d7;  */

void FUN_108b840a8(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1c71c71c71c71c8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x90);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110ab45d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108b840d8; end: 108b840db;  */

void FUN_108b840d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab45d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108b840dc; end: 108b840ef;  */

void FUN_108b840dc(void)

{
  func_0x000108b840fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b840f0; end: 108b8411b;  */

void FUN_108b840f0(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 108b8411c; end: 108b843ff;  */

void FUN_108b8411c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  long unaff_x19;
  long *plVar8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  func_0x000108b8632c();
  *param_1 = &PTR_FUN_110ab4628;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0x32aaaba7;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  puVar1 = param_1 + 0x10;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  uStack_68 = extraout_x8;
  func_0x000108b85b54(puVar1);
  *(undefined8 *)(unaff_x19 + 0xa8) = 0x3cb0b1bb;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 200) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined8 *)(unaff_x19 + 0xd0) = 0;
  func_0x000108b85b54(unaff_x19 + 0xd8);
  *(undefined8 *)(unaff_x19 + 0x100) = 0x3cb0b1bb;
  *(undefined8 *)(unaff_x19 + 0x128) = 0;
  *(undefined8 *)(unaff_x19 + 0x110) = 0;
  *(undefined8 *)(unaff_x19 + 0x108) = 0;
  *(undefined8 *)(unaff_x19 + 0x120) = 0;
  *(undefined8 *)(unaff_x19 + 0x118) = 0;
  uVar2 = unaff_x19 + 0x130;
  func_0x00010bd3faf4(uVar2);
  *(ulong *)(unaff_x19 + 0x140) = uVar2;
  *(undefined1 *)(unaff_x19 + 0x148) = 1;
  plVar8 = (long *)(*(long *)((uVar2 & 0xfffffffffffffffc) + 8) + 0xf0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = *plVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  func_0x000108b85b54(unaff_x19 + 0x150);
  *(undefined8 *)(unaff_x19 + 0x178) = 0;
  *(undefined8 *)(unaff_x19 + 0x180) = param_3;
  *(undefined8 *)(unaff_x19 + 400) = 0;
  *(undefined8 *)(unaff_x19 + 0x188) = 0;
  *(undefined8 *)(unaff_x19 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x19 + 0x198) = 0;
  *(undefined8 *)(unaff_x19 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x19 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1b8) = 0;
  *(undefined4 *)(unaff_x19 + 0x1c8) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0x1d8) = 0x8000000000000000;
  *(undefined8 *)(unaff_x19 + 0x1d0) = 0x8000000000000000;
  *(undefined **)(unaff_x19 + 0x1e0) = &UNK_1053a6a3c;
  *(undefined ***)(unaff_x19 + 0x1e8) = &PTR_DAT_110873830;
  *(undefined8 *)(unaff_x19 + 0x210) = 0;
  uStack_78 = 1;
  puVar5 = (undefined8 *)0x108;
  __Znwm();
  plVar8 = puVar5 + 1;
  *plVar8 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110ab4660;
  puVar6 = puVar5 + 3;
  puStack_70 = puVar5;
  FUN_108b82b80(puVar6);
  puVar5[3] = &PTR_DAT_110ab46b0;
  puVar5[0x20] = param_2;
  puStack_70 = (undefined8 *)0x0;
  lVar7 = puVar5[5];
  if ((lVar7 == 0) || (in_ZR = *(long *)(lVar7 + 8) == -1, (bool)in_ZR)) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar8 = puVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uStack_90 = puVar5[4];
    puVar5[4] = puVar6;
    puVar5[5] = puVar5;
    puStack_a0 = puVar6;
    puStack_98 = puVar5;
    lStack_88 = lVar7;
    func_0x000108b8366c(&uStack_90);
    func_0x00010897dd64(&puStack_a0);
  }
  FUN_108b85c20(&uStack_80);
  puVar5[0x13] = unaff_x19;
  puVar5[0x14] = puVar1;
  uStack_78 = *(undefined8 *)(unaff_x19 + 0x78);
  uStack_80 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 **)(unaff_x19 + 0x70) = puVar6;
  *(undefined8 **)(unaff_x19 + 0x78) = puVar5;
  puVar6 = &uStack_80;
  func_0x00010897dd64(puVar6);
  func_0x000108b86360(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __ZNSt3__119__shared_weak_countD2Ev(puVar5);
    FUN_108b85c20(&uStack_80);
    func_0x000108b862f4(*(undefined8 *)(unaff_x19 + 0x1e8));
    FUN_108b85bc4(unaff_x19 + 0x1a8);
    FUN_108b85524((undefined8 *)(unaff_x19 + 0x188));
    FUN_108b839fc(unaff_x19 + 0x150);
    FUN_108b85b88(unaff_x19 + 0x140);
    func_0x00010bd3f9e8(uVar2);
    __ZNSt3__118condition_variableD1Ev(unaff_x19 + 0x100);
    FUN_108b839fc(unaff_x19 + 0xd8);
    __ZNSt3__118condition_variableD1Ev((undefined8 *)(unaff_x19 + 0xa8));
    FUN_108b839fc(puVar1);
    do {
      func_0x00010897dd64(unaff_x19 + 0x70);
      func_0x000107314018(unaff_x19 + 0x50);
      __ZNSt3__15mutexD1Ev(param_1 + 2);
      __Unwind_Resume(puVar6);
    } while( true );
  }
  return;
}



/* Entry: 108b84400; end: 108b844f7;  */

void FUN_108b84400(undefined8 *param_1)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined *puStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000108b8632c();
  *param_1 = &PTR_FUN_110ab4628;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  puStack_58 = &UNK_1053a6a3c;
  ppuStack_50 = &PTR_DAT_110873830;
  iVar2 = (int)&puStack_58;
  uStack_28 = extraout_x8;
  FUN_108b844f8();
  (*(code *)*ppuStack_50)(&ppuStack_50);
  func_0x000108b862f4(*(undefined8 *)(unaff_x19 + 0x1e8));
  FUN_108b85bc4(unaff_x19 + 0x1a8);
  FUN_108b85524(unaff_x19 + 0x188);
  FUN_108b839fc(unaff_x19 + 0x150);
  FUN_108b85b88(unaff_x19 + 0x140);
  func_0x00010bd3f9e8(unaff_x19 + 0x130);
  __ZNSt3__118condition_variableD1Ev(unaff_x19 + 0x100);
  FUN_108b839fc(unaff_x19 + 0xd8);
  __ZNSt3__118condition_variableD1Ev(unaff_x19 + 0xa8);
  FUN_108b839fc(unaff_x19 + 0x80);
  func_0x00010897dd64(unaff_x19 + 0x70);
  func_0x000107314018(unaff_x19 + 0x50);
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x10);
  func_0x000108b86360(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x000108b86204();
  if ((*(byte *)(unaff_x19 + 8) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x10);
    return;
  }
  func_0x000107c28168(unaff_x19 + 0x1e0,&puStack_58);
  *(byte *)(unaff_x19 + 8) = 0;
  plVar4 = *(long **)(unaff_x19 + 400);
  for (plVar3 = *(long **)(unaff_x19 + 0x188); plVar6 = plVar4, plVar3 != plVar4;
      plVar3 = plVar3 + 4) {
    plVar6 = plVar3;
    if ((*plVar3 == 0) || (*(int *)(*plVar3 + 8) != 1)) goto LAB_108b84560;
  }
LAB_108b8459c:
  FUN_108b8481c(unaff_x19 + 0x188,plVar4,plVar6);
  FUN_108b8485c(*(undefined8 *)(unaff_x19 + 0x188),*(undefined8 *)(unaff_x19 + 400));
  func_0x000108b862c0();
  func_0x000108b86308();
  func_0x000108b86300();
  lVar1 = *(long *)(unaff_x19 + 0x58);
  for (lVar5 = *(long *)(unaff_x19 + 0x50); lVar5 != lVar1; lVar5 = lVar5 + 8) {
    __ZNSt3__16thread4joinEv(lVar5);
  }
  FUN_108b8487c(unaff_x19 + 0x150);
  FUN_108b8487c(unaff_x19 + 0x80);
  FUN_108b83a30();
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  return;
LAB_108b84560:
  while (plVar6 = plVar6 + 4, plVar6 != plVar4) {
    if ((*plVar6 != 0) && (*(int *)(*plVar6 + 8) == 1)) {
      func_0x000108b862ac(plVar3);
      plVar3 = plVar3 + 4;
    }
  }
  plVar4 = plVar3;
  plVar6 = *(long **)(unaff_x19 + 400);
  goto LAB_108b8459c;
}



/* Entry: 108b844f8; end: 108b8460f;  */

void FUN_108b844f8(void)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  func_0x000108b86204();
  if ((*(byte *)(unaff_x19 + 8) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x10);
    return;
  }
  func_0x000107c28168(unaff_x19 + 0x1e0);
  *(byte *)(unaff_x19 + 8) = 0;
  plVar3 = *(long **)(unaff_x19 + 400);
  for (plVar2 = *(long **)(unaff_x19 + 0x188); plVar5 = plVar3, plVar2 != plVar3;
      plVar2 = plVar2 + 4) {
    plVar5 = plVar2;
    if ((*plVar2 == 0) || (*(int *)(*plVar2 + 8) != 1)) goto LAB_108b84560;
  }
LAB_108b8459c:
  FUN_108b8481c(unaff_x19 + 0x188,plVar3,plVar5);
  FUN_108b8485c(*(undefined8 *)(unaff_x19 + 0x188),*(undefined8 *)(unaff_x19 + 400));
  func_0x000108b862c0();
  func_0x000108b86308();
  func_0x000108b86300();
  lVar1 = *(long *)(unaff_x19 + 0x58);
  for (lVar4 = *(long *)(unaff_x19 + 0x50); lVar4 != lVar1; lVar4 = lVar4 + 8) {
    __ZNSt3__16thread4joinEv(lVar4);
  }
  FUN_108b8487c(unaff_x19 + 0x150);
  FUN_108b8487c(unaff_x19 + 0x80);
  FUN_108b83a30();
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  return;
LAB_108b84560:
  while (plVar5 = plVar5 + 4, plVar5 != plVar3) {
    if ((*plVar5 != 0) && (*(int *)(*plVar5 + 8) == 1)) {
      func_0x000108b862ac(plVar2);
      plVar2 = plVar2 + 4;
    }
  }
  plVar3 = plVar2;
  plVar5 = *(long **)(unaff_x19 + 400);
  goto LAB_108b8459c;
}



/* Entry: 108b84610; end: 108b84613;  */

void FUN_108b84610(undefined8 *param_1)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined *puStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000108b8632c();
  *param_1 = &PTR_FUN_110ab4628;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  puStack_58 = &UNK_1053a6a3c;
  ppuStack_50 = &PTR_DAT_110873830;
  iVar2 = (int)&puStack_58;
  uStack_28 = extraout_x8;
  FUN_108b844f8();
  (*(code *)*ppuStack_50)(&ppuStack_50);
  func_0x000108b862f4(*(undefined8 *)(unaff_x19 + 0x1e8));
  FUN_108b85bc4(unaff_x19 + 0x1a8);
  FUN_108b85524(unaff_x19 + 0x188);
  FUN_108b839fc(unaff_x19 + 0x150);
  FUN_108b85b88(unaff_x19 + 0x140);
  func_0x00010bd3f9e8(unaff_x19 + 0x130);
  __ZNSt3__118condition_variableD1Ev(unaff_x19 + 0x100);
  FUN_108b839fc(unaff_x19 + 0xd8);
  __ZNSt3__118condition_variableD1Ev(unaff_x19 + 0xa8);
  FUN_108b839fc(unaff_x19 + 0x80);
  func_0x00010897dd64(unaff_x19 + 0x70);
  func_0x000107314018(unaff_x19 + 0x50);
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x10);
  func_0x000108b86360(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x000108b86204();
  if ((*(byte *)(unaff_x19 + 8) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x10);
    return;
  }
  func_0x000107c28168(unaff_x19 + 0x1e0,&puStack_58);
  *(byte *)(unaff_x19 + 8) = 0;
  plVar4 = *(long **)(unaff_x19 + 400);
  for (plVar3 = *(long **)(unaff_x19 + 0x188); plVar6 = plVar4, plVar3 != plVar4;
      plVar3 = plVar3 + 4) {
    plVar6 = plVar3;
    if ((*plVar3 == 0) || (*(int *)(*plVar3 + 8) != 1)) goto LAB_108b84560;
  }
LAB_108b8459c:
  FUN_108b8481c(unaff_x19 + 0x188,plVar4,plVar6);
  FUN_108b8485c(*(undefined8 *)(unaff_x19 + 0x188),*(undefined8 *)(unaff_x19 + 400));
  func_0x000108b862c0();
  func_0x000108b86308();
  func_0x000108b86300();
  lVar1 = *(long *)(unaff_x19 + 0x58);
  for (lVar5 = *(long *)(unaff_x19 + 0x50); lVar5 != lVar1; lVar5 = lVar5 + 8) {
    __ZNSt3__16thread4joinEv(lVar5);
  }
  FUN_108b8487c(unaff_x19 + 0x150);
  FUN_108b8487c(unaff_x19 + 0x80);
  FUN_108b83a30();
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  return;
LAB_108b84560:
  while (plVar6 = plVar6 + 4, plVar6 != plVar4) {
    if ((*plVar6 != 0) && (*(int *)(*plVar6 + 8) == 1)) {
      func_0x000108b862ac(plVar3);
      plVar3 = plVar3 + 4;
    }
  }
  plVar4 = plVar3;
  plVar6 = *(long **)(unaff_x19 + 400);
  goto LAB_108b8459c;
}



/* Entry: 108b84614; end: 108b84627;  */

void FUN_108b84614(void)

{
  FUN_108b84400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b84628; end: 108b847cb;  */

void FUN_108b84628(long *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar7 = param_1 + 10;
  if (*plVar7 == param_1[0xb]) {
    plVar4 = param_1;
    func_0x000108b862ec();
    plVar5 = plVar4;
    __ZNSt3__115__thread_structC1Ev();
    plStack_68 = plVar4;
    func_0x000108b862e4();
    plStack_68 = (long *)0x0;
    *plVar5 = (long)plVar4;
    plVar5[1] = (long)param_1;
    plVar4 = &lStack_78;
    plStack_70 = plVar5;
    func_0x000107c2844c(plVar4,FUN_108b85d84,plVar5);
    if ((int)plVar4 != 0) {
      func_0x000108b86228();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x108b8477c);
      (*pcVar3)();
    }
    plStack_70 = (long *)0x0;
    FUN_108b85edc(&plStack_70);
    func_0x000108b86248();
    param_1[0xd] = lStack_78;
    func_0x000107313c38(plVar7,&lStack_78);
    func_0x000108b86258();
    iVar9 = 0;
  }
  else {
    iVar9 = 1;
  }
  plVar4 = param_1 + 0xc;
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    uVar1 = param_1[0xb];
    plStack_70 = param_1;
    if (uVar1 < (ulong)param_1[0xc]) {
      func_0x000108b862b4();
      lVar8 = uVar1 + 8;
      param_1[0xb] = lVar8;
    }
    else {
      plVar6 = plVar7;
      func_0x000107313d30(plVar7,((long)(uVar1 - param_1[10]) >> 3) + 1);
      lVar8 = param_1[10];
      lVar2 = param_1[0xb];
      plVar5 = (long *)0x0;
      plStack_48 = plVar4;
      if (plVar6 != (long *)0x0) {
        plVar5 = plVar4;
        func_0x000107313df0();
      }
      lVar8 = (long)plVar5 + (lVar2 - lVar8);
      plStack_50 = plVar5 + (long)plVar6;
      plStack_68 = plVar5;
      lStack_60 = lVar8;
      lStack_58 = lVar8;
      func_0x000108b862b4();
      lStack_58 = lVar8 + 8;
      func_0x000107313d70(plVar7,&plStack_68);
      lVar8 = param_1[0xb];
      func_0x000107313f64(&plStack_68);
    }
    param_1[0xb] = lVar8;
  }
  return;
}



/* Entry: 108b847cc; end: 108b8481b;  */

void FUN_108b847cc(long param_1)

{
  long lStack_28;
  undefined8 **ppuStack_20;
  long *plStack_18;
  
  if (*(long *)(param_1 + 0x210) != -1) {
    plStack_18 = &lStack_28;
    ppuStack_20 = &plStack_18;
    lStack_28 = param_1;
    __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(param_1 + 0x210),&ppuStack_20,FUN_108b85c9c);
  }
  return;
}



/* Entry: 108b8481c; end: 108b8485b;  */

long FUN_108b8481c(long param_1,long param_2,long param_3)

{
  if (param_2 != param_3) {
    FUN_108b85758(param_3,*(undefined8 *)(param_1 + 8),param_2);
    func_0x000108b85558(param_1);
  }
  return param_2;
}



/* Entry: 108b8485c; end: 108b8487b;  */

void FUN_108b8485c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_108b85818(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 108b8487c; end: 108b8489f;  */

void FUN_108b8487c(long param_1)

{
  FUN_108b83a30();
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 108b848a0; end: 108b84bc3;  */

ulong FUN_108b848a0(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  if (*param_2 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(ulong *)(*param_2 + 0x10);
  }
  uVar8 = *(ulong *)(param_1 + 400);
  if (uVar8 < *(ulong *)(param_1 + 0x198)) {
    FUN_108b859bc(uVar8,param_2);
    lVar15 = uVar8 + 0x20;
  }
  else {
    lVar15 = uVar8 - *(long *)(param_1 + 0x188);
    uVar9 = (lVar15 >> 5) + 1;
    if (uVar9 >> 0x3b != 0) {
      FUN_108b859e8();
LAB_108b849fc:
      func_0x000104bd35f4();
      uVar9 = uVar8;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar13 = uVar9;
      do {
        plVar2 = *(long **)(uVar8 + 0x188);
        if ((plVar2 == *(long **)(uVar8 + 400)) || ((long)uVar9 < plVar2[3])) {
          return uVar13;
        }
        if ((*plVar2 != 0) && (*(long *)(*plVar2 + 0x10) != 0)) {
          lVar15 = plVar2[1];
          FUN_108b82ca4(lVar15,plVar2,0);
          if ((int)lVar15 != 0) {
            lVar15 = plVar2[1];
            if (*(char *)(lVar15 + 0x90) == '\x01') {
              FUN_108b83190();
              lVar15 = plVar2[1];
            }
            if (lVar15 != *(long *)(uVar8 + 0x70)) {
              if (*(long *)(lVar15 + 0x88) == uVar8 + 0x150) {
                FUN_108b84d90(uVar8);
                goto LAB_108b84ab4;
              }
              __ZNSt3__118condition_variable10notify_oneEv(uVar8 + 0x100);
            }
            func_0x000108b86308();
          }
        }
LAB_108b84ab4:
        puVar3 = *(undefined8 **)(uVar8 + 0x188);
        lVar15 = *(long *)(uVar8 + 400);
        lVar5 = lVar15 - (long)puVar3 >> 5;
        if (1 < lVar5) {
          uStack_d8 = puVar3[1];
          uStack_e0 = *puVar3;
          *puVar3 = 0;
          uStack_d0 = puVar3[2];
          uStack_c8 = puVar3[3];
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar10 = puVar3;
          uVar13 = 0;
          do {
            uVar11 = uVar13 << 1 | 1;
            uVar12 = uVar13 * 2 + 2;
            puVar16 = puVar10 + uVar13 * 4 + 4;
            uVar17 = uVar11;
            if (((long)uVar12 < lVar5) &&
               (puVar16 = puVar10 + uVar13 * 4 + 8, uVar17 = uVar12,
               (long)puVar10[uVar13 * 4 + 7] <= (long)puVar10[uVar13 * 4 + 0xb])) {
              puVar16 = puVar10 + uVar13 * 4 + 4;
              uVar17 = uVar11;
            }
            puVar10 = puVar16;
            func_0x000108b862ac();
            uVar13 = uVar17;
          } while ((long)uVar17 <= (long)(lVar5 - 2U >> 1));
          puVar16 = (undefined8 *)(lVar15 + -0x20);
          if (puVar16 == puVar10) {
            FUN_108b857e0(puVar10,&uStack_e0);
          }
          else {
            FUN_108b857e0(puVar10,puVar16);
            FUN_108b857e0(puVar16,&uStack_e0);
            FUN_108b859fc(puVar3,puVar10 + 4,(long)(puVar10 + 4) - (long)puVar3 >> 5);
          }
          func_0x000108b86318();
          lVar15 = *(long *)(uVar8 + 400);
        }
        uVar13 = uVar8 + 0x188;
        func_0x000108b85558(uVar13,lVar15 + -0x20);
      } while( true );
    }
    uVar11 = *(ulong *)(param_1 + 0x198) - *(long *)(param_1 + 0x188);
    uVar12 = (long)uVar11 >> 4;
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    if (0x7fffffffffffffdf < uVar11) {
      uVar12 = 0x7ffffffffffffff;
    }
    if (uVar12 == 0) {
      lVar5 = 0;
    }
    else {
      if (uVar12 >> 0x3b != 0) goto LAB_108b849fc;
      lVar5 = uVar12 << 5;
      __Znwm();
    }
    lVar15 = lVar5 + lVar15;
    FUN_108b859bc(lVar15,param_2);
    lVar14 = *(long *)(param_1 + 0x188);
    lVar4 = *(long *)(param_1 + 400);
    lVar1 = lVar15 + (lVar14 - lVar4);
    lVar6 = lVar1;
    for (lVar7 = lVar14; lVar7 != lVar4; lVar7 = lVar7 + 0x20) {
      FUN_108b859bc(lVar6,lVar7);
      lVar6 = lVar6 + 0x20;
    }
    for (; lVar14 != lVar4; lVar14 = lVar14 + 0x20) {
      FUN_10897dd3c(lVar14);
    }
    lVar15 = lVar15 + 0x20;
    lVar7 = *(long *)(param_1 + 0x188);
    *(long *)(param_1 + 0x188) = lVar1;
    *(long *)(param_1 + 400) = lVar15;
    *(ulong *)(param_1 + 0x198) = lVar5 + uVar12 * 0x20;
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  *(long *)(param_1 + 400) = lVar15;
  FUN_108b859fc(*(long *)(param_1 + 0x188),lVar15,lVar15 - *(long *)(param_1 + 0x188) >> 5);
  func_0x000108b86308();
  return uVar13;
}



/* Entry: 108b84bc4; end: 108b84d23;  */

void FUN_108b84bc4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2[4] != 0) {
    puVar6 = (undefined8 *)param_2[2];
    uVar8 = *puVar6;
    lVar2 = puVar6[1];
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      puVar6 = (undefined8 *)param_2[2];
    }
    uStack_60 = uVar8;
    lStack_58 = lVar2;
    func_0x00010897dd64();
    lVar3 = param_2[2];
    param_2[2] = lVar3 + 0x10;
    if (lVar3 + 0x10 == param_2[1]) {
      param_2[2] = *param_2;
    }
    param_2[4] = param_2[4] + -1;
    func_0x000107c27d0c();
    puVar7 = (undefined8 *)(param_1 + 0x1a8);
    puStack_68 = puVar6;
    FUN_108b84e18(puVar7,&puStack_68);
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_50 = *puVar7;
    uStack_48 = puVar7[1];
    *puVar7 = uVar8;
    puVar7[1] = lVar2;
    func_0x00010897dd64(&uStack_50);
    uStack_50 = param_3;
    func_0x000107c280c4(param_3);
    uVar8 = uStack_60;
    FUN_108b82fc4();
    func_0x000108b86310();
    func_0x000107c27d0c();
    uStack_50 = uVar8;
    FUN_108b84e18(param_1 + 0x1a8,&uStack_50);
    FUN_108b851d0();
    FUN_108b83174(uStack_60);
    uStack_50 = param_3;
    func_0x000107c280c4(param_3);
    FUN_108b851d0(&uStack_60);
    func_0x000108b86310();
    func_0x00010897dd64(&uStack_60);
  }
  return;
}



/* Entry: 108b84d24; end: 108b84d8f;  */

void FUN_108b84d24(long param_1)

{
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = param_1 + 0x10;
  uStack_28 = 1;
  __ZNSt3__15mutex4lockEv();
  func_0x000108b86260();
  if (*(long *)(param_1 + 0x170) != 0) {
    FUN_108b84d90(param_1);
  }
  func_0x000107c2798c(&lStack_30);
  return;
}



/* Entry: 108b84d90; end: 108b84e17;  */

void FUN_108b84d90(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uStack_40;
  undefined1 *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  puStack_38 = (undefined1 *)&uStack_40;
  uStack_40 = (ulong)(param_1 + 0x26) & 0xfffffffffffffffc | 1;
  puVar1 = param_1;
  func_0x00010bd42e30();
  func_0x000108b86320();
  *puVar1 = 0;
  puVar1[1] = FUN_108b85ac4;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[3] = param_1;
  puStack_30 = puVar1;
  puStack_28 = puVar1;
  func_0x00010bd4058c(*(undefined8 *)((uStack_40 & 0xfffffffffffffffc) + 8),puVar1,
                      uStack_40 >> 1 & 1);
  puStack_30 = (undefined8 *)0x0;
  puStack_28 = (undefined8 *)0x0;
  FUN_108b85aa0(&puStack_38);
  return;
}



/* Entry: 108b84e18; end: 108b851cf;  */

long * FUN_108b84e18(long *param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *unaff_x24;
  long *plVar11;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar5 = param_1 + 3;
  FUN_108b86130(plVar5,*param_2);
  plVar10 = (long *)param_1[1];
  if (plVar10 != (long *)0x0) {
    uVar2 = (long)plVar10 - 1;
    if (((ulong)plVar10 & uVar2) == 0) {
      unaff_x24 = (long *)(uVar2 & (ulong)plVar5);
    }
    else {
      unaff_x24 = plVar5;
      if (plVar10 <= plVar5) {
        uVar4 = 0;
        if (plVar10 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar10;
        }
        unaff_x24 = (long *)((long)plVar5 - uVar4 * (long)plVar10);
      }
    }
    plVar11 = *(long **)(*param_1 + (long)unaff_x24 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_108b84edc;
          plVar7 = (long *)plVar11[1];
          if (plVar7 != plVar5) break;
          if (*param_2 == plVar11[2]) goto LAB_108b85198;
        }
        if (((ulong)plVar10 & uVar2) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar2);
        }
        else if (plVar10 <= plVar7) {
          uVar4 = 0;
          if (plVar10 != (long *)0x0) {
            uVar4 = (ulong)plVar7 / (ulong)plVar10;
          }
          plVar7 = (long *)((long)plVar7 - uVar4 * (long)plVar10);
        }
      } while (plVar7 == unaff_x24);
    }
  }
LAB_108b84edc:
  plVar7 = param_1 + 2;
  plVar11 = (long *)0x28;
  __Znwm();
  uStack_58 = 1;
  *plVar11 = 0;
  plVar11[1] = (long)plVar5;
  lVar3 = *param_2;
  plVar11[3] = 0;
  plVar11[4] = 0;
  plVar11[2] = lVar3;
  plStack_68 = plVar11;
  plStack_60 = plVar7;
  if ((plVar10 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar10)) goto LAB_108b85114;
  uVar2 = 1;
  if ((long *)0x2 < plVar10) {
    uVar2 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
  }
  plVar11 = (long *)(uVar2 | (long)plVar10 << 1);
  plVar6 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar11 <= plVar6) {
    plVar11 = plVar6;
  }
  if ((long)plVar11 - 1U == 0) {
    plVar11 = (long *)0x2;
  }
  else if (((ulong)plVar11 & (long)plVar11 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar10 = (long *)param_1[1];
  }
  if (plVar10 < plVar11) {
LAB_108b84f88:
    if ((ulong)plVar11 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108b851c0);
      (*pcVar1)();
    }
    lVar3 = (long)plVar11 << 3;
    __Znwm(lVar3);
    FUN_108b86178(param_1,lVar3);
    param_1[1] = (long)plVar11;
    for (plVar10 = (long *)0x0; plVar11 != plVar10; plVar10 = (long *)((long)plVar10 + 1)) {
      *(undefined8 *)(*param_1 + (long)plVar10 * 8) = 0;
    }
    plVar10 = (long *)*plVar7;
    if (plVar10 != (long *)0x0) {
      plVar6 = (long *)plVar10[1];
      uVar4 = (long)plVar11 - 1;
      uVar2 = 0;
      if (plVar11 != (long *)0x0) {
        uVar2 = (ulong)plVar6 / (ulong)plVar11;
      }
      plVar8 = plVar6;
      if (plVar11 <= plVar6) {
        plVar8 = (long *)((long)plVar6 - uVar2 * (long)plVar11);
      }
      if (((ulong)plVar11 & uVar4) == 0) {
        plVar8 = (long *)((ulong)plVar6 & uVar4);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar7;
      while (plVar6 = plVar10, plVar10 = (long *)*plVar6, plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)plVar11 & uVar4) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar4);
        }
        else if (plVar11 <= plVar9) {
          uVar2 = 0;
          if (plVar11 != (long *)0x0) {
            uVar2 = (ulong)plVar9 / (ulong)plVar11;
          }
          plVar9 = (long *)((long)plVar9 - uVar2 * (long)plVar11);
        }
        if (plVar9 != plVar8) {
          if (*(long *)(*param_1 + (long)plVar9 * 8) == 0) {
            *(long **)(*param_1 + (long)plVar9 * 8) = plVar6;
            plVar8 = plVar9;
          }
          else {
            *plVar6 = *plVar10;
            *plVar10 = **(undefined8 **)(*param_1 + (long)plVar9 * 8);
            **(long **)(*param_1 + (long)plVar9 * 8) = (long)plVar10;
            plVar10 = plVar6;
          }
        }
      }
    }
  }
  else if (plVar11 < plVar10) {
    plVar6 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar6) {
      plVar6 = (long *)(1L << (-LZCOUNT((long)plVar6 - 1) & 0x3fU));
    }
    if (plVar11 <= plVar6) {
      plVar11 = plVar6;
    }
    if (plVar11 < plVar10) {
      if (plVar11 != (long *)0x0) goto LAB_108b84f88;
      FUN_108b86178(param_1,0);
      param_1[1] = 0;
    }
  }
  plVar10 = (long *)param_1[1];
  if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
    unaff_x24 = (long *)((long)plVar10 - 1U & (ulong)plVar5);
  }
  else {
    unaff_x24 = plVar5;
    if (plVar10 <= plVar5) {
      uVar2 = 0;
      if (plVar10 != (long *)0x0) {
        uVar2 = (ulong)plVar5 / (ulong)plVar10;
      }
      unaff_x24 = (long *)((long)plVar5 - uVar2 * (long)plVar10);
    }
  }
LAB_108b85114:
  plVar11 = plStack_68;
  plVar5 = *(long **)(*param_1 + (long)unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    *plStack_68 = param_1[2];
    param_1[2] = (long)plStack_68;
    *(long **)(*param_1 + (long)unaff_x24 * 8) = plVar7;
    if (*plStack_68 != 0) {
      plVar5 = *(long **)(*plStack_68 + 8);
      if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar10 - 1U);
      }
      else if (plVar10 <= plVar5) {
        uVar2 = 0;
        if (plVar10 != (long *)0x0) {
          uVar2 = (ulong)plVar5 / (ulong)plVar10;
        }
        plVar5 = (long *)((long)plVar5 - uVar2 * (long)plVar10);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar5;
    *plVar5 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_108b86190(&plStack_68);
LAB_108b85198:
  return plVar11 + 3;
}



/* Entry: 108b851d0; end: 108b851fb;  */

void FUN_108b851d0(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00010897dd64(&uStack_20);
  return;
}



/* Entry: 108b851fc; end: 108b8529b;  */

void FUN_108b851fc(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 400);
  for (plVar2 = *(long **)(param_1 + 0x188); plVar3 = plVar1, plVar2 != plVar1; plVar2 = plVar2 + 4)
  {
    plVar3 = plVar2;
    if ((*plVar2 == 0) || (*(int *)(*plVar2 + 8) == 2)) goto LAB_108b8523c;
  }
LAB_108b85278:
  FUN_108b8481c(param_1 + 0x188,plVar3,plVar1);
  FUN_108b85818(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 400),
                &stack0xffffffffffffffef);
  return;
LAB_108b8523c:
  while (plVar3 = plVar3 + 4, plVar3 != plVar1) {
    if ((*plVar3 != 0) && (*(int *)(*plVar3 + 8) != 2)) {
      func_0x000108b862ac(plVar2);
      plVar2 = plVar2 + 4;
    }
  }
  plVar1 = *(long **)(param_1 + 400);
  plVar3 = plVar2;
  goto LAB_108b85278;
}



/* Entry: 108b8529c; end: 108b854ab;  */

void FUN_108b8529c(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x19;
  long unaff_x20;
  ulong uVar10;
  
  func_0x000108b86204();
  for (plVar8 = *(long **)(unaff_x19 + 0x188); plVar8 != *(long **)(unaff_x19 + 400);
      plVar8 = plVar8 + 4) {
    lVar6 = 0;
    if (*plVar8 != 0) {
      lVar6 = *(long *)(*plVar8 + 0x10);
    }
    if (lVar6 == unaff_x20) {
      FUN_108b854ac(plVar8);
      FUN_108b851d0(plVar8 + 1);
      goto LAB_108b85330;
    }
  }
  func_0x000107c27d0c();
  uVar10 = *(ulong *)(unaff_x19 + 0x1b0);
  if ((uVar10 != 0) && (*(long *)(unaff_x19 + 0x1c0) != 0)) {
    uVar3 = unaff_x19 + 0x1c0;
    FUN_108b86130(uVar3,param_1);
    uVar4 = uVar10 - 1;
    if ((uVar10 & uVar4) == 0) {
      uVar7 = uVar3 & uVar4;
    }
    else {
      uVar7 = uVar3;
      if (uVar10 <= uVar3) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar3 / uVar10;
        }
        uVar7 = uVar3 - uVar7 * uVar10;
      }
    }
    plVar8 = *(long **)(*(long *)(unaff_x19 + 0x1a8) + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_108b853ac;
          uVar9 = plVar8[1];
          if (uVar9 != uVar3) break;
          if (plVar8[2] == param_1) {
            uVar10 = plVar8[3];
            if ((uVar10 != 0) && (func_0x000108b86250(), (uVar10 & 1) != 0)) goto LAB_108b85330;
            goto LAB_108b853ac;
          }
        }
        if ((uVar10 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (uVar10 <= uVar9) {
          uVar1 = 0;
          if (uVar10 != 0) {
            uVar1 = uVar9 / uVar10;
          }
          uVar9 = uVar9 - uVar1 * uVar10;
        }
      } while (uVar9 == uVar7);
    }
  }
LAB_108b853ac:
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    puVar2 = *(ulong **)(unaff_x19 + 0x90);
    while (puVar2 != (ulong *)0x0) {
      uVar10 = *puVar2;
      func_0x000108b86250();
      if ((uVar10 & 1) != 0) goto LAB_108b85330;
      puVar5 = puVar2 + 2;
      if (puVar5 == *(ulong **)(unaff_x19 + 0x88)) {
        puVar5 = *(ulong **)(unaff_x19 + 0x80);
      }
      puVar2 = (ulong *)0x0;
      if (puVar5 != *(ulong **)(unaff_x19 + 0x98)) {
        puVar2 = puVar5;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0xf8) != 0) {
    puVar2 = *(ulong **)(unaff_x19 + 0xe8);
    while (puVar2 != (ulong *)0x0) {
      uVar10 = *puVar2;
      func_0x000108b86250();
      if ((uVar10 & 1) != 0) goto LAB_108b85330;
      puVar5 = puVar2 + 2;
      if (puVar5 == *(ulong **)(unaff_x19 + 0xe0)) {
        puVar5 = *(ulong **)(unaff_x19 + 0xd8);
      }
      puVar2 = (ulong *)0x0;
      if (puVar5 != *(ulong **)(unaff_x19 + 0xf0)) {
        puVar2 = puVar5;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x170) != 0) {
    puVar2 = *(ulong **)(unaff_x19 + 0x160);
    while (puVar2 != (ulong *)0x0) {
      uVar10 = *puVar2;
      func_0x000108b86250();
      if ((uVar10 & 1) != 0) break;
      puVar5 = puVar2 + 2;
      if (puVar5 == *(ulong **)(unaff_x19 + 0x158)) {
        puVar5 = *(ulong **)(unaff_x19 + 0x150);
      }
      puVar2 = (ulong *)0x0;
      if (puVar5 != *(ulong **)(unaff_x19 + 0x168)) {
        puVar2 = puVar5;
      }
    }
  }
LAB_108b85330:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x10);
  return;
}



/* Entry: 108b854ac; end: 108b854cb;  */

void FUN_108b854ac(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108b854c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 108b854cc; end: 108b85523;  */

void FUN_108b854cc(void)

{
  long *plVar1;
  long unaff_x19;
  long *unaff_x20;
  long *plVar2;
  
  func_0x000108b86204();
  plVar1 = *(long **)(unaff_x19 + 400);
  for (plVar2 = (long *)(*(long *)(unaff_x19 + 0x188) + 8); plVar2 + -1 != plVar1;
      plVar2 = plVar2 + 4) {
    if (*plVar2 == *unaff_x20) {
      FUN_108b854ac();
      FUN_108b851d0(plVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x10);
  return;
}



/* Entry: 108b85524; end: 108b8558f;  */

long * FUN_108b85524(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000108b85558(param_1);
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 108b85590; end: 108b8563f;  */

void FUN_108b85590(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  func_0x000108b862ec();
  puVar3 = puVar2;
  __ZNSt3__115__thread_structC1Ev();
  puStack_38 = puVar2;
  func_0x000108b862e4();
  puStack_38 = (undefined8 *)0x0;
  uVar4 = *param_2;
  *puVar3 = puVar2;
  puVar3[1] = uVar4;
  puStack_40 = puVar3;
  func_0x000107c2844c(param_1,FUN_108b85640,puVar3);
  if ((int)param_1 == 0) {
    puStack_40 = (undefined8 *)0x0;
    FUN_108b85730(&puStack_40);
    func_0x000107c28454(&puStack_38);
    return;
  }
  func_0x000108b86228();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108b85614);
  (*pcVar1)();
}



/* Entry: 108b85640; end: 108b8572f;  */

undefined8 FUN_108b85640(undefined8 *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long lVar1;
  undefined8 *puStack_38;
  undefined1 auStack_30 [16];
  
  puStack_38 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000107c28450();
  lVar1 = param_1[1];
  _pthread_setname_np(&UNK_10f5025ae);
  func_0x000108b86340();
  __ZNSt3__15mutex4lockEv();
  while (((func_0x000108b86354(), (extraout_x8 & 1) != 0 || (func_0x000108b86280(), !(bool)in_ZR))
         || (*(long *)(lVar1 + 0xf8) != 0))) {
    while (((func_0x000108b86354(), (extraout_x8_00 & 1) != 0 ||
            (func_0x000108b86280(), !(bool)in_ZR)) && (*(long *)(lVar1 + 0xf8) == 0))) {
      __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(lVar1 + 0x100,auStack_30);
    }
    func_0x000108b86260();
  }
  func_0x000108b86268();
  func_0x000108b862c0();
  __ZNSt3__118condition_variable10notify_allEv(lVar1 + 0xa8);
  if ((*(byte *)(*(long *)(lVar1 + 0x1e8) + 8) & 1) == 0) {
    func_0x000108b862dc(*(undefined8 *)(lVar1 + 0x1e0));
  }
  FUN_108b85730(&puStack_38);
  return 0;
}



/* Entry: 108b85730; end: 108b85757;  */

void FUN_108b85730(long param_1)

{
  func_0x000108b86270();
  if (param_1 != 0) {
    func_0x000107c28454();
    __ZdlPv();
  }
  return;
}



/* Entry: 108b85758; end: 108b85783;  */

void FUN_108b85758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_108b85784(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 108b85784; end: 108b857df;  */

undefined1  [16] FUN_108b85784(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_108b857e0(lVar1,param_2);
    lVar1 = lVar1 + 0x20;
    param_4 = param_4 + 0x20;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 108b857e0; end: 108b85817;  */

long FUN_108b857e0(long param_1,long param_2)

{
  FUN_108b834e4();
  func_0x000108b83cc0(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



/* Entry: 108b85818; end: 108b85883;  */

void FUN_108b85818(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_2 - param_1 >> 5;
  if (1 < lVar1) {
    uVar3 = lVar1 - 2U >> 1;
    lVar2 = param_1 + uVar3 * 0x20;
    do {
      FUN_108b85884(param_1,param_3,lVar1,lVar2);
      uVar3 = uVar3 - 1;
      lVar2 = lVar2 + -0x20;
    } while (-1 < (long)uVar3);
  }
  return;
}



/* Entry: 108b85884; end: 108b859bb;  */

void FUN_108b85884(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (1 < param_3) {
    uVar8 = param_3 - 2U >> 1;
    if ((long)param_4 - param_1 >> 5 <= (long)uVar8) {
      uVar6 = (long)param_4 - param_1 >> 4;
      uVar9 = uVar6 | 1;
      puVar5 = (undefined8 *)(param_1 + uVar9 * 0x20);
      uVar6 = uVar6 + 2;
      uVar10 = uVar9;
      if ((long)uVar6 < param_3) {
        plVar1 = puVar5 + 3;
        plVar2 = puVar5 + 7;
        lVar11 = 0x20;
        if (*plVar1 <= *plVar2) {
          lVar11 = 0;
        }
        puVar5 = (undefined8 *)((long)puVar5 + lVar11);
        uVar10 = uVar6;
        if (*plVar1 <= *plVar2) {
          uVar10 = uVar9;
        }
      }
      lVar11 = param_4[3];
      if ((long)puVar5[3] <= lVar11) {
        uStack_68 = param_4[1];
        uStack_70 = *param_4;
        *param_4 = 0;
        param_4[1] = 0;
        uStack_60 = param_4[2];
        param_4[2] = 0;
        lStack_58 = lVar11;
        do {
          puVar4 = puVar5;
          FUN_108b857e0(param_4,puVar4);
          if ((long)uVar8 < (long)uVar10) break;
          uVar9 = uVar10 << 1 | 1;
          puVar5 = (undefined8 *)(param_1 + uVar9 * 0x20);
          uVar6 = uVar10 * 2 + 2;
          uVar10 = uVar9;
          if ((long)uVar6 < param_3) {
            plVar1 = puVar5 + 3;
            lVar7 = *(long *)(param_1 + uVar9 * 0x20 + 0x38);
            lVar3 = 0x20;
            if (*plVar1 <= lVar7) {
              lVar3 = 0;
            }
            puVar5 = (undefined8 *)((long)puVar5 + lVar3);
            uVar10 = uVar6;
            if (*plVar1 <= lVar7) {
              uVar10 = uVar9;
            }
          }
          param_4 = puVar4;
        } while ((long)puVar5[3] <= lVar11);
        FUN_108b857e0(puVar4,&uStack_70);
        func_0x000108b86318();
      }
    }
  }
  return;
}



/* Entry: 108b859bc; end: 108b859e7;  */

void FUN_108b859bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = param_2[3];
  return;
}



/* Entry: 108b859e8; end: 108b859fb;  */

void FUN_108b859e8(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (1 < param_3) {
    uVar5 = param_3 - 2U >> 1;
    lVar6 = *(long *)(param_2 + -8);
    if (lVar6 < *(long *)((long)(puVar2 + uVar5 * 0x20) + 0x18)) {
      puVar3 = (undefined8 *)(param_2 + -0x20);
      uStack_58 = *(undefined8 *)(param_2 + -0x18);
      uStack_60 = *puVar3;
      *puVar3 = 0;
      *(undefined8 *)(param_2 + -0x18) = 0;
      uStack_50 = *(undefined8 *)(param_2 + -0x10);
      *(undefined8 *)(param_2 + -0x10) = 0;
      puVar1 = (undefined8 *)(puVar2 + uVar5 * 0x20);
      lStack_48 = lVar6;
      do {
        puVar4 = puVar1;
        FUN_108b857e0(puVar3,puVar4);
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1 >> 1;
        puVar3 = puVar4;
        puVar1 = (undefined8 *)(puVar2 + uVar5 * 0x20);
      } while (lVar6 < *(long *)((long)(puVar2 + uVar5 * 0x20) + 0x18));
      FUN_108b857e0(puVar4,&uStack_60);
      func_0x000108b86318();
    }
  }
  return;
}



/* Entry: 108b859fc; end: 108b85a9f;  */

void FUN_108b859fc(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (1 < param_3) {
    uVar4 = param_3 - 2U >> 1;
    puVar1 = (undefined8 *)(param_1 + uVar4 * 0x20);
    lVar5 = *(long *)(param_2 + -8);
    if (lVar5 < (long)puVar1[3]) {
      puVar2 = (undefined8 *)(param_2 + -0x20);
      uStack_48 = *(undefined8 *)(param_2 + -0x18);
      uStack_50 = *puVar2;
      *puVar2 = 0;
      *(undefined8 *)(param_2 + -0x18) = 0;
      uStack_40 = *(undefined8 *)(param_2 + -0x10);
      *(undefined8 *)(param_2 + -0x10) = 0;
      lStack_38 = lVar5;
      do {
        puVar3 = puVar1;
        FUN_108b857e0(puVar2,puVar3);
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1 >> 1;
        puVar1 = (undefined8 *)(param_1 + uVar4 * 0x20);
        puVar2 = puVar3;
      } while (lVar5 < (long)puVar1[3]);
      FUN_108b857e0(puVar3,&uStack_50);
      func_0x000108b86318();
    }
  }
  return;
}



/* Entry: 108b85aa0; end: 108b85ac3;  */

undefined8 FUN_108b85aa0(undefined8 param_1)

{
  FUN_108b85b1c();
  return param_1;
}



/* Entry: 108b85ac4; end: 108b85b1b;  */

void FUN_108b85ac4(void)

{
  long unaff_x20;
  undefined1 auStack_40 [32];
  
  func_0x000108b8628c();
  FUN_108b85b1c(auStack_40);
  if (unaff_x20 != 0) {
    FUN_108b84d24();
    DataMemoryBarrier(2,3);
  }
  FUN_108b85aa0(auStack_40);
  return;
}



/* Entry: 108b85b1c; end: 108b85b87;  */

void FUN_108b85b1c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x000108b862d0();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 108b85b88; end: 108b85bc3;  */

ulong * FUN_108b85b88(ulong *param_1)

{
  if ((char)param_1[1] == '\x01') {
    FUN_10894eefc(*(undefined8 *)((*param_1 & 0xfffffffffffffffc) + 8));
  }
  return param_1;
}



/* Entry: 108b85bc4; end: 108b85c1f;  */

long * FUN_108b85bc4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010897dd64(plVar1 + 3);
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



/* Entry: 108b85c20; end: 108b85c47;  */

long FUN_108b85c20(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108b85c48; end: 108b85c57;  */

void FUN_108b85c48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab4660;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108b85c58; end: 108b85c6b;  */

void FUN_108b85c58(void)

{
  FUN_108b85c48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b85c6c; end: 108b85c7f;  */

void FUN_108b85c6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b85c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108b85c80; end: 108b85c93;  */

void FUN_108b85c80(void)

{
  FUN_108b82c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b85c94; end: 108b85c9b;  */

undefined8 FUN_108b85c94(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 108b85c9c; end: 108b85d83;  */

void FUN_108b85c9c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [8];
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar5 = (undefined8 *)**(undefined8 **)*param_1;
  puVar2 = puVar5;
  FUN_108b84628();
  if (puVar5[10] == puVar5[0xb]) {
    puVar2 = puVar5;
    FUN_108b84628();
  }
  func_0x000108b862ec();
  puVar3 = puVar2;
  __ZNSt3__115__thread_structC1Ev();
  puStack_38 = puVar2;
  func_0x000108b862e4();
  puStack_38 = (undefined8 *)0x0;
  *puVar3 = puVar2;
  puVar3[1] = puVar5;
  puVar4 = auStack_48;
  puStack_40 = puVar3;
  func_0x000107c2844c(puVar4,FUN_108b85f04,puVar3);
  if ((int)puVar4 == 0) {
    puStack_40 = (undefined8 *)0x0;
    FUN_108b86054(&puStack_40);
    func_0x000108b86248();
    func_0x000107313c38(puVar5 + 10,auStack_48);
    func_0x000108b86258();
    return;
  }
  func_0x000108b86228();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108b85d50);
  (*pcVar1)();
}



/* Entry: 108b85d84; end: 108b85edb;  */

undefined8 FUN_108b85d84(undefined8 *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  puStack_50 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000107c28450();
  lVar2 = param_1[1];
  _pthread_setname_np(&UNK_10f5025ba);
  func_0x000108b86340();
  __ZNSt3__15mutex4lockEv();
  while ((((func_0x000108b86354(), (extraout_x8 & 1) != 0 || (func_0x000108b86280(), !(bool)in_ZR))
          || (*(long *)(lVar2 + 0xa0) != 0)) || (*(long *)(lVar2 + 0xf8) != 0))) {
    while (((func_0x000108b86354(), (extraout_x8_00 & 1) != 0 ||
            (func_0x000108b86280(), !(bool)in_ZR)) &&
           ((*(long *)(lVar2 + 0xa0) == 0 && (*(long *)(lVar2 + 0xf8) == 0))))) {
      func_0x000108b86280();
      if ((bool)in_ZR) {
        uStack_48 = 0x7fffffffffffffff;
      }
      else {
        uStack_48 = *(undefined8 *)(extraout_x8_01 + 0x18);
      }
      lVar1 = lVar2 + 0xa8;
      func_0x000104c38e48(lVar1,auStack_40,&uStack_48);
      in_ZR = (int)lVar1 == 1;
      if ((bool)in_ZR) {
        func_0x000108b84a00(lVar2);
      }
    }
    func_0x000108b84a00(lVar2);
    in_ZR = *(long *)(lVar2 + 0xa0) == 0;
    func_0x000108b86260();
  }
  func_0x000108b86268();
  func_0x000108b862c0();
  func_0x00010bd3fcb0(lVar2 + 0x130);
  if ((*(byte *)(*(long *)(lVar2 + 0x1e8) + 8) & 1) == 0) {
    func_0x000108b862dc(*(undefined8 *)(lVar2 + 0x1e0));
  }
  FUN_108b85edc(&puStack_50);
  return 0;
}



/* Entry: 108b85edc; end: 108b85f03;  */

void FUN_108b85edc(long param_1)

{
  func_0x000108b86270();
  if (param_1 != 0) {
    func_0x000107c28454();
    __ZdlPv();
  }
  return;
}



/* Entry: 108b85f04; end: 108b86053;  */

undefined8 FUN_108b85f04(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar1 = param_1;
  puStack_58 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000107c28450();
  lVar2 = param_1[1];
  func_0x000107c27d0c();
  *(undefined8 **)(lVar2 + 0x178) = puVar1;
  puVar1 = (undefined8 *)&UNK_10f5025c6;
  _pthread_setname_np();
  uStack_50 = lVar2 + 0x130U | 1;
  puStack_48 = &uStack_50;
  func_0x00010bd42e30();
  func_0x000108b86320();
  *puVar1 = 0;
  puVar1[1] = FUN_108b860a0;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[3] = lVar2;
  puStack_40 = puVar1;
  puStack_38 = puVar1;
  func_0x00010bd4058c(*(undefined8 *)((uStack_50 & 0xfffffffffffffffc) + 8),puVar1,
                      uStack_50 >> 1 & 1);
  puStack_40 = (undefined8 *)0x0;
  puStack_38 = (undefined8 *)0x0;
  FUN_108b8607c(&puStack_48);
  func_0x00010bd3fbbc(lVar2 + 0x130U);
  do {
    puStack_40 = (undefined8 *)CONCAT71(puStack_40._1_7_,1);
    puStack_48 = (ulong *)(lVar2 + 0x10);
    __ZNSt3__15mutex4lockEv((ulong *)(lVar2 + 0x10));
    func_0x000108b86260();
    lVar3 = *(long *)(lVar2 + 0x170);
    func_0x000107c2798c(&puStack_48);
  } while (lVar3 != 0);
  if ((*(byte *)(*(long *)(lVar2 + 0x1e8) + 8) & 1) == 0) {
    func_0x000108b862dc(*(undefined8 *)(lVar2 + 0x1e0));
  }
  FUN_108b86054(&puStack_58);
  return 0;
}



/* Entry: 108b86054; end: 108b8607b;  */

void FUN_108b86054(long param_1)

{
  func_0x000108b86270();
  if (param_1 != 0) {
    func_0x000107c28454();
    __ZdlPv();
  }
  return;
}



/* Entry: 108b8607c; end: 108b8609f;  */

undefined8 FUN_108b8607c(undefined8 param_1)

{
  FUN_108b860f8();
  return param_1;
}



/* Entry: 108b860a0; end: 108b860f7;  */

void FUN_108b860a0(void)

{
  long unaff_x20;
  undefined1 auStack_40 [32];
  
  func_0x000108b8628c();
  FUN_108b860f8(auStack_40);
  if (unaff_x20 != 0) {
    FUN_108b84d24();
    DataMemoryBarrier(2,3);
  }
  FUN_108b8607c(auStack_40);
  return;
}



/* Entry: 108b860f8; end: 108b8612f;  */

void FUN_108b860f8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x000108b862d0();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 108b86130; end: 108b86177;  */

void FUN_108b86130(void)

{
  undefined1 uStack_11;
  
  func_0x000108b86150(&uStack_11);
  return;
}



/* Entry: 108b86178; end: 108b8618f;  */

void FUN_108b86178(long *param_1,long param_2)

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



/* Entry: 108b86190; end: 108b861d3;  */

long * FUN_108b86190(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010897dd64(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 108b861d4; end: 108b861fb;  */

undefined8 * FUN_108b861d4(undefined8 *param_1)

{
  func_0x000107c28204(*param_1);
  return param_1;
}



/* Entry: 108b861fc; end: 108b86373;  */

void FUN_108b861fc(void)

{
  return;
}



/* Entry: 108b86374; end: 108b8643f;  */

ulong FUN_108b86374(ulong param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 ****ppppuVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined8 ***pppuStack_278;
  ulong uStack_270;
  byte bStack_261;
  ulong uStack_260;
  undefined1 auStack_238 [512];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b3b8();
  if ((int)param_1 == 0) {
    func_0x00010ae29af8();
    _bzero(auStack_238,0x200);
    func_0x00010ae29da8(param_1,auStack_238,0x200);
    uVar4 = 0x28;
    ___cxa_allocate_exception(0x28);
    func_0x000108b80bdc();
    ___cxa_throw(uVar4,&PTR_DAT_110ab43a8,FUN_108b80dac);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108b86420);
    (*pcVar1)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar5 = param_1;
  __Unwind_Resume();
  if (*(long *)(uVar5 + 0x10) == 0) {
    ppuVar8 = &PTR_PTR_113289a30;
  }
  else if (*(long *)(uVar5 + 0x10) == 1) {
    ppuVar8 = &PTR_PTR_113289a48;
  }
  else {
    ppuVar8 = *(undefined ***)(uVar5 + 8);
  }
  uStack_260 = param_1;
  (**(code **)*ppuVar8)();
  func_0x000107c278b8(&pppuStack_278,ppuVar8);
  if (*(long *)(uVar5 + 0x10) == 0) {
    ppuVar8 = &PTR_PTR_113289a30;
  }
  else if (*(long *)(uVar5 + 0x10) == 1) {
    ppuVar8 = &PTR_PTR_113289a48;
  }
  else {
    ppuVar8 = *(undefined ***)(uVar5 + 8);
  }
  bVar2 = ppuVar8 == &PTR_PTR_113409a78;
  if (puRam0000000113409a80 != (undefined *)0x0) {
    bVar2 = ppuVar8[1] == puRam0000000113409a80;
  }
  if (!bVar2) {
    ppppuVar6 = (undefined8 ****)pppuStack_278;
    if (-1 < (char)bStack_261) {
      uStack_270 = (ulong)bStack_261;
      ppppuVar6 = &pppuStack_278;
    }
    func_0x00010ae8b630(ppppuVar6,uStack_270,&UNK_10f5025d2,3);
    if ((int)ppppuVar6 == 0) {
      ppuVar8 = &PTR_PTR_113289a30;
      if (*(long *)(uVar5 + 0x10) != 0) {
        if (*(long *)(uVar5 + 0x10) == 1) {
          ppuVar8 = &PTR_PTR_113289a48;
        }
        else {
          ppuVar8 = *(undefined ***)(uVar5 + 8);
        }
      }
      bVar2 = ppuVar8 == &PTR_PTR_113289a30;
      if (puRam0000000113289a38 != (undefined *)0x0) {
        bVar2 = ppuVar8[1] == puRam0000000113289a38;
      }
      FUN_10894f438(uVar5);
      iVar3 = (int)uVar5;
      if (bVar2) {
        iVar7 = 10000;
      }
      else {
        iVar7 = 20000;
      }
      goto LAB_108b86530;
    }
  }
  FUN_10894f438(uVar5);
  iVar3 = (int)uVar5;
  iVar7 = 1000000000;
LAB_108b86530:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_278);
  return (ulong)(uint)(iVar3 + iVar7);
}



/* Entry: 108b86440; end: 108b8660b;  */

int FUN_108b86440(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined8 ***pppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    ppuVar5 = &PTR_PTR_113289a30;
  }
  else if (*(long *)(param_1 + 0x10) == 1) {
    ppuVar5 = &PTR_PTR_113289a48;
  }
  else {
    ppuVar5 = *(undefined ***)(param_1 + 8);
  }
  (**(code **)*ppuVar5)();
  func_0x000107c278b8(&pppuStack_38,ppuVar5);
  if (*(long *)(param_1 + 0x10) == 0) {
    ppuVar5 = &PTR_PTR_113289a30;
  }
  else if (*(long *)(param_1 + 0x10) == 1) {
    ppuVar5 = &PTR_PTR_113289a48;
  }
  else {
    ppuVar5 = *(undefined ***)(param_1 + 8);
  }
  bVar1 = ppuVar5 == &PTR_PTR_113409a78;
  if (puRam0000000113409a80 != (undefined *)0x0) {
    bVar1 = ppuVar5[1] == puRam0000000113409a80;
  }
  if (!bVar1) {
    ppppuVar3 = (undefined8 ****)pppuStack_38;
    if (-1 < (char)bStack_21) {
      uStack_30 = (ulong)bStack_21;
      ppppuVar3 = &pppuStack_38;
    }
    func_0x00010ae8b630(ppppuVar3,uStack_30,&UNK_10f5025d2,3);
    if ((int)ppppuVar3 == 0) {
      ppuVar5 = &PTR_PTR_113289a30;
      if (*(long *)(param_1 + 0x10) != 0) {
        if (*(long *)(param_1 + 0x10) == 1) {
          ppuVar5 = &PTR_PTR_113289a48;
        }
        else {
          ppuVar5 = *(undefined ***)(param_1 + 8);
        }
      }
      bVar1 = ppuVar5 == &PTR_PTR_113289a30;
      if (puRam0000000113289a38 != (undefined *)0x0) {
        bVar1 = ppuVar5[1] == puRam0000000113289a38;
      }
      FUN_10894f438(param_1);
      iVar2 = (int)param_1;
      if (bVar1) {
        iVar4 = 10000;
      }
      else {
        iVar4 = 20000;
      }
      goto LAB_108b86530;
    }
  }
  FUN_10894f438(param_1);
  iVar2 = (int)param_1;
  iVar4 = 1000000000;
LAB_108b86530:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_38);
  return iVar2 + iVar4;
}



/* Entry: 108b8660c; end: 108b8664b;  */

void FUN_108b8660c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 108b8664c; end: 108b866e7;  */

undefined8 * FUN_108b8664c(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    func_0x000107c3194c(param_1 + 3,param_2 + 3);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_1;
}



/* Entry: 108b866e8; end: 108b8680f;  */

undefined8 FUN_108b866e8(long *param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  func_0x000108b86bdc();
  if (((bool)in_ZR) && (func_0x000108b86bec(), cRam000000011328ade8 == '\x01')) {
    func_0x000108b86bec();
  }
  if ((param_2 != 0x2c && param_2 != 0x1c) || (param_3 != 0x10 && param_3 != 8)) {
    return 2;
  }
  lVar1 = 0x20;
  FUN_108b88268();
  *param_1 = lVar1;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)0x20;
    FUN_108b88268();
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
      func_0x00010ae33fac();
      puVar2[2] = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*param_1;
        puVar3[1] = puVar2;
        if (param_2 == 0x1c) {
          uVar4 = 6;
          ppuVar5 = &PTR_FUN_110ab4720;
          uVar6 = 0x10;
        }
        else {
          if (param_2 != 0x2c) goto LAB_108b86800;
          uVar4 = 7;
          ppuVar5 = &PTR_FUN_110ab4778;
          uVar6 = 0x20;
        }
        *puVar3 = ppuVar5;
        *(undefined4 *)(puVar3 + 3) = uVar4;
        *puVar2 = uVar6;
        puVar2[1] = param_3;
LAB_108b86800:
        puVar3[2] = param_2;
        return 0;
      }
      func_0x000108b882f0(puVar2);
    }
    func_0x000108b882f0(*param_1);
    *param_1 = 0;
  }
  return 3;
}



/* Entry: 108b86810; end: 108b86857;  */

undefined8 FUN_108b86810(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010ae34050(puVar1[2]);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    func_0x000108b882f0(puVar1);
  }
  func_0x000108b882f0(param_1);
  return 0;
}



/* Entry: 108b86858; end: 108b86a0f;  */

undefined4 FUN_108b86858(long *param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 3) = 2;
  plVar1 = param_1;
  func_0x000108b86bdc();
  if ((bool)in_ZR) {
    plVar1 = param_2;
    func_0x000108b88ac4(param_2,*param_1);
    func_0x000108b86bec();
  }
  if (*param_1 == 0x10) {
    func_0x00010ae349c4();
  }
  else {
    if (*param_1 != 0x20) {
      return 2;
    }
    func_0x00010ae34b64();
  }
  func_0x00010ae3407c(param_1[2]);
  lVar2 = param_1[2];
  func_0x00010ae340b8(lVar2,plVar1,0,param_2,0,0);
  uVar3 = 5;
  if ((int)lVar2 != 0) {
    lVar2 = param_1[2];
    func_0x00010ae342a8(lVar2,9,0xc,0);
    uVar3 = 5;
    if ((int)lVar2 != 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Entry: 108b86a10; end: 108b86a4b;  */

undefined8 FUN_108b86a10(long param_1,undefined8 param_2,undefined8 *param_3)

{
  if (*(uint *)(param_1 + 0x18) < 2) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
              (*(long **)(param_1 + 0x10),param_2,param_2,*param_3);
    return 0;
  }
  return 2;
}



/* Entry: 108b86a4c; end: 108b86bb3;  */

undefined8 FUN_108b86a4c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long unaff_x20;
  
  if (1 < *(uint *)(param_1 + 0x18)) {
    return 2;
  }
  func_0x000108b86c08();
  iVar1 = (int)param_1;
  func_0x00010ae342a8();
  if (iVar1 != 0) {
    (**(code **)(**(long **)(unaff_x20 + 0x10) + 0x28))();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000108b86bc4();
    if ((int)uVar2 == 0) {
      *unaff_x19 = *unaff_x19 - *(long *)(unaff_x20 + 8);
      return uVar2;
    }
  }
  return 7;
}



/* Entry: 108b86bb4; end: 108b86c1b;  */

void FUN_108b86bb4(void)

{
  return;
}



/* Entry: 108b86c1c; end: 108b86d43;  */

undefined8 FUN_108b86c1c(long *param_1,ulong param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  func_0x000108b87030();
  if ((bool)in_ZR) {
    func_0x000108b87008();
  }
  if (0x2e < param_2) {
    return 2;
  }
  if ((1L << (param_2 & 0x3f) & 0x404040000000U) == 0) {
    return 2;
  }
  lVar1 = 0x20;
  FUN_108b88268();
  *param_1 = lVar1;
  if (lVar1 != 0) {
    lVar1 = 0x30;
    FUN_108b88268();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010ae33fac();
      *(long *)(lVar1 + 0x28) = lVar2;
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)*param_1;
        puVar3[1] = lVar1;
        if (param_2 == 0x1e) {
          ppuVar4 = &PTR_FUN_110ab47d0;
          uVar5 = 1;
          uVar6 = 0x10;
        }
        else if (param_2 == 0x2e) {
          ppuVar4 = &PTR_FUN_110ab4880;
          uVar5 = 5;
          uVar6 = 0x20;
        }
        else {
          if (param_2 != 0x26) goto LAB_108b86d28;
          ppuVar4 = &PTR_FUN_110ab4828;
          uVar5 = 4;
          uVar6 = 0x18;
        }
        *(undefined4 *)(puVar3 + 3) = uVar5;
        *puVar3 = ppuVar4;
        *(undefined8 *)(lVar1 + 0x20) = uVar6;
LAB_108b86d28:
        puVar3[2] = param_2;
        return 0;
      }
      func_0x000108b882f0(lVar1);
    }
    func_0x000108b882f0(*param_1);
    *param_1 = 0;
  }
  return 3;
}



/* Entry: 108b86d44; end: 108b86d9b;  */

undefined8 FUN_108b86d44(long param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      func_0x00010ae34050(puVar1[5]);
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      func_0x000108b882f0(puVar1);
    }
    func_0x000108b882f0(param_1);
    return 0;
  }
  return 2;
}



/* Entry: 108b86d9c; end: 108b86ebf;  */

uint FUN_108b86d9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  puVar1 = (undefined8 *)((long)param_2 + param_1[4]);
  uVar3 = *(undefined8 *)((long)puVar1 + 6);
  *param_1 = *puVar1;
  *(undefined8 *)((long)param_1 + 6) = uVar3;
  uVar3 = *(undefined8 *)((long)puVar1 + 6);
  param_1[2] = *puVar1;
  *(undefined8 *)((long)param_1 + 0x16) = uVar3;
  *(undefined2 *)((long)param_1 + 0x1e) = 0;
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  puVar1 = param_1;
  func_0x000108b87030();
  if ((bool)in_ZR) {
    puVar1 = param_2;
    func_0x000108b88ac4();
    func_0x000108b87008();
    if (cRam000000011328adf8 == '\x01') {
      func_0x000108b87010();
      func_0x000108b87008();
    }
  }
  lVar2 = param_1[4];
  if (lVar2 == 0x10) {
    func_0x00010ae3495c();
  }
  else if (lVar2 == 0x18) {
    func_0x00010ae34a2c();
  }
  else {
    if (lVar2 != 0x20) {
      return 2;
    }
    func_0x00010ae34afc();
  }
  func_0x00010ae3407c(param_1[5]);
  uVar3 = param_1[5];
  func_0x00010ae3432c(uVar3,puVar1,0,param_2,0);
  return (uint)uVar3 ^ 1;
}



/* Entry: 108b86ec0; end: 108b87007;  */

undefined8 FUN_108b86ec0(long param_1,long param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  int iStack_34;
  
  iStack_34 = 0;
  func_0x000108b87030();
  if ((bool)in_ZR) {
    func_0x000108b87010();
    func_0x000108b87008();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010ae3433c(uVar1,param_2,&iStack_34,param_2,(int)*param_3);
  if ((int)uVar1 != 0) {
    *param_3 = (long)iStack_34;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010ae34534(uVar1,param_2 + iStack_34,&iStack_34);
    if ((int)uVar1 != 0) {
      *param_3 = *param_3 + (long)iStack_34;
      return 0;
    }
  }
  return 8;
}



/* Entry: 108b87008; end: 108b87097;  */

ulong * FUN_108b87008(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong auStack_238 [64];
  long lStack_38;
  
  puVar1 = (ulong *)0x3;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (pcRam0000000113828748 != (code *)0x0) {
    puVar1 = auStack_238;
    _vsnprintf(puVar1,0x200,param_2,&stack0x00000000);
    if (0 < (int)puVar1) {
      puVar1 = auStack_238;
      _strlen();
      if ((puVar1 != (ulong *)0x0) && (*(char *)((long)auStack_238 + (long)puVar1 + -1) == '\n')) {
        *(undefined1 *)((long)auStack_238 + (long)puVar1 + -1) = 0;
      }
      (*pcRam0000000113828748)(3,auStack_238);
      puVar1 = auStack_238;
      _bzero(puVar1,0x200);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  uVar4 = *puVar1 - 1;
  *puVar1 = uVar4;
  if (uVar4 >> 0x10 == 0) {
    uVar2 = 1;
    if (uVar4 == 0) {
      uVar2 = 2;
    }
    puVar3 = (ulong *)(ulong)uVar2;
    if ((uVar4 == 0) || ((int)puVar1[1] == 0)) {
      *(uint *)(puVar1 + 1) = uVar2;
    }
  }
  else {
    puVar3 = (ulong *)0x0;
  }
  return puVar3;
}



/* Entry: 108b87098; end: 108b870df;  */

void FUN_108b87098(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x00010ae45444(param_2,*param_3);
                    /* WARNING: Could not recover jumptable at 0x000108b870dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1[1],param_2,param_3);
  return;
}



/* Entry: 108b870e0; end: 108b87177;  */

long FUN_108b870e0(long *param_1)

{
  long lVar1;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (lVar1 = param_1[1], lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108b870f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return lVar1;
  }
  return 2;
}



/* Entry: 108b87178; end: 108b871ab;  */

void FUN_108b87178(undefined1 *param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = SUB84(param_1,0);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    _rand();
    *param_1 = (char)uVar1;
    param_1 = param_1 + 1;
  }
  return;
}



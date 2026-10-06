/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10789663c; end: 10789674b;  */

void FUN_10789663c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
    func_0x00010788ccc8(&lStack_38,*(undefined8 *)(*(long *)(param_1 + 8) + 8),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
    if ((char)param_2[3] == '\x01') {
      func_0x000107896594(param_2);
    }
    else {
      *(undefined1 *)(param_2 + 3) = 1;
    }
    *param_2 = lStack_38;
    param_2[1] = lStack_30;
    *(undefined1 *)(param_2 + 2) = uStack_28;
    uStack_28 = 0;
    func_0x000107896594(&lStack_38);
  }
  else {
    lVar2 = *param_2;
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010788862c();
      func_0x0001078967a4();
      _memcpy();
      func_0x00010788af6c();
      func_0x0001078967a4();
      if (lVar1 == 1) {
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        func_0x0001078887ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d290)(lVar2,lVar1,0,uVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 107897e60; end: 107897e93;  */

void FUN_107897e60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  __Znwm();
  func_0x000107897f7c();
  *param_1 = uVar1;
  return;
}



/* Entry: 107898054; end: 10789806f;  */

void FUN_107898054(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107898070(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789844c; end: 10789845f;  */

void FUN_10789844c(void)

{
  func_0x0001078983f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078988dc; end: 10789890b;  */

void FUN_1078988dc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 107898c54; end: 107898cd7;  */

void FUN_107898c54(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x8;
  ulong uVar3;
  ulong *unaff_x19;
  
  func_0x000107899510();
  func_0x000107899544();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x000107899454();
      if (!bVar2) {
        func_0x0001078994e4();
      }
      func_0x000107899534();
    }
    else {
      uVar3 = (long)(extraout_x8 - uVar1) >> 2;
      if (extraout_x8 - uVar1 == 0) {
        uVar3 = 0;
      }
      func_0x0001078994a0();
      func_0x000107899420(param_1 + (uVar3 >> 2) * 8);
      func_0x0001078994f0();
      func_0x000107899408();
    }
  }
  func_0x000107899524();
  return;
}



/* Entry: 107898f50; end: 107898f67;  */

void FUN_107898f50(long *param_1,long param_2)

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



/* Entry: 10789907c; end: 10789908f;  */

void FUN_10789907c(void)

{
  func_0x0001078990e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078991dc; end: 1078991e3;  */

void FUN_1078991dc(void)

{
  return;
}



/* Entry: 107899310; end: 107899337;  */

long FUN_107899310(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107899408; end: 1078995b7;  */

void FUN_107899408(void)

{
  long *unaff_x19;
  long lVar1;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  lVar1 = *unaff_x19;
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  unaff_x19[3] = in_stack_00000018;
  unaff_x19[2] = in_stack_00000010;
  func_0x000107898f94();
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078997d8; end: 10789981b;  */

long * FUN_1078997d8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  _CFRunLoopRemoveTimer(param_1[4],param_1[5],*(undefined8 *)PTR__kCFRunLoopDefaultMode_11034abe8);
  _CFRelease(param_1[5]);
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 107899ecc; end: 107899f1f;  */

undefined8 * FUN_107899ecc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    while (plVar3 != plVar2) {
      plVar3 = plVar3 + -1;
      lVar1 = *plVar3;
      *plVar3 = 0;
      if (lVar1 != 0) {
        func_0x000107899fcc();
      }
    }
    param_1[1] = plVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10789a324; end: 10789a327;  */

undefined8 * FUN_10789a324(undefined8 *param_1)

{
  undefined8 *puVar1;
  int extraout_w10;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  lVar2 = param_1[1];
  *param_1 = &PTR_FUN_1109e5ac8;
  param_1[1] = 0;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x38) != 0) {
      func_0x00010789a8ac(lVar2);
    }
    __ZNSt3__17promiseIvEC1Ev(auStack_78);
    func_0x00010789ad44(lVar2 + 0x30);
    uVar3 = *(undefined8 *)(lVar2 + 0x48);
    func_0x000107898fb8(&puStack_70);
    *(undefined1 *)puStack_70 = 0;
    puVar1 = (undefined8 *)0x80;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_DAT_1109e5b48;
    puStack_60 = puStack_70;
    puStack_58 = (undefined8 *)lStack_68;
    if (lStack_68 != 0) {
      do {
        func_0x00010789b090();
      } while (extraout_w10 != 0);
    }
    puVar1[3] = &PTR_DAT_1109e5b98;
    __ZNSt3__115recursive_mutexC1Ev(puVar1 + 4);
    puVar1[0xc] = puStack_70;
    puVar1[0xd] = lStack_68;
    puStack_60 = (undefined8 *)0x0;
    puStack_58 = (undefined8 *)0x0;
    puVar1[0xe] = auStack_78;
    func_0x00010789b0d0();
    puStack_60 = puVar1 + 3;
    puStack_58 = puVar1;
    func_0x00010789b0c0();
    func_0x00010789895c(uVar3,0,&puStack_60);
    func_0x00010789b0c8();
    __ZNSt3__17promiseIvE10get_futureEv(&puStack_60,auStack_78);
    __ZNSt3__16futureIvE3getEv(&puStack_60);
    __ZNSt3__16futureIvED1Ev(&puStack_60);
    func_0x00010789846c(*(undefined8 *)(lVar2 + 0x48));
    __ZNSt3__16thread4joinEv(lVar2 + 0x28);
    __ZNSt3__17promiseIvED1Ev(auStack_78);
    func_0x00010787b3fc(lVar2 + 0x40);
    func_0x00010787b3fc((long *)(lVar2 + 0x38));
    __ZNSt3__16futureIvED1Ev(lVar2 + 0x30);
    __ZNSt3__16threadD1Ev(lVar2 + 0x28);
    func_0x00010724b54c(lVar2);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10789a8e4; end: 10789ab37;  */

/* WARNING: Possible PIC construction at 0x00010789ac28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789ac2c) */
/* WARNING: Removing unreachable block (ram,0x00010789ac60) */
/* WARNING: Removing unreachable block (ram,0x00010789ac78) */
/* WARNING: Removing unreachable block (ram,0x00010789ac88) */
/* WARNING: Removing unreachable block (ram,0x00010789ac48) */

long ** FUN_10789a8e4(long **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 in_ZR;
  long **pplVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [240];
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  long **pplStack_100;
  long **pplStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  long **pplStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  pplVar5 = param_1;
  func_0x00010789b06c();
  uStack_58 = extraout_x8;
  func_0x00010724b408(pplVar5);
  pplVar5 = param_1 + 5;
  param_1[6] = (long *)0x0;
  *pplVar5 = (long *)0x0;
  param_1[9] = (long *)0x0;
  param_1[8] = (long *)0x0;
  param_1[7] = (long *)0x0;
  __ZNSt3__17promiseIvEC1Ev(&uStack_d0);
  __ZNSt3__17promiseIvE10get_futureEv(&pplStack_b8,&uStack_d0);
  func_0x00010787b1b0(param_1 + 6,&pplStack_b8);
  __ZNSt3__16futureIvED1Ev(&pplStack_b8);
  pplStack_b8 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b0,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_98,param_4);
  uStack_80 = uStack_d0;
  uStack_d0 = 0;
  func_0x000105302f48(auStack_78,param_2);
  uVar6 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar7 = (undefined8 *)0x68;
  uStack_c0 = uVar6;
  __Znwm();
  uStack_c0 = 0;
  *puVar7 = uVar6;
  puVar7[1] = pplStack_b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar7 + 2,auStack_b0);
  uVar6 = uStack_88;
  puVar7[6] = uStack_90;
  puVar7[5] = uStack_98;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  puVar7[7] = uVar6;
  puVar7[8] = uStack_80;
  uStack_80 = 0;
  func_0x000105302f48(puVar7 + 9,auStack_78);
  puVar8 = auStack_d8;
  puStack_c8 = puVar7;
  func_0x000100489040(puVar8,&UNK_10789ab38,puVar7);
  if ((int)puVar8 != 0) {
    __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10789aa88);
    (*pcVar4)();
  }
  puStack_c8 = (undefined8 *)0x0;
  func_0x00010789accc(&puStack_c8);
  func_0x0001004895c8(&uStack_c0);
  func_0x0001004895f4(pplVar5,auStack_d8);
  __ZNSt3__16threadD1Ev(auStack_d8);
  func_0x00010789ad08(&pplStack_b8);
  puVar9 = &uStack_d0;
  __ZNSt3__17promiseIvED1Ev();
  func_0x00010789b058(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001004895c8(puVar7);
  __ZdlPv();
  func_0x0001004895c8(&uStack_c0);
  func_0x00010789ad08(&pplStack_b8);
  __ZNSt3__17promiseIvED1Ev(&uStack_d0);
  func_0x00010787b3fc(param_1 + 8);
  func_0x00010787b3fc(param_1 + 7);
  __ZNSt3__16futureIvED1Ev(param_1 + 6);
  __ZNSt3__16threadD1Ev(pplVar5);
  func_0x00010724b54c(param_1);
  puVar10 = puVar9;
  __Unwind_Resume();
  puStack_e8 = &UNK_10789ab38;
  puStack_110 = puVar7;
  puStack_108 = puVar9;
  pplStack_100 = pplVar5;
  pplStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010789b06c();
  __ZNSt3__119__thread_local_dataEv();
  *puVar10 = 0;
  func_0x000100491558();
  plVar12 = (long *)puVar10[1];
  func_0x0001078bba88(puVar10 + 2);
  if (puVar10[0xc] != 0) {
    func_0x000104c003e8(puVar10 + 9);
  }
  func_0x0001078980a4(auStack_200);
  plVar12[9] = (long)auStack_200;
  puVar7 = (undefined8 *)*plVar12;
  uStack_208 = puVar7[1];
  uStack_210 = *puVar7;
  if (puVar7[1] != 0) {
    plVar1 = (long *)(puVar7[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar11 = puVar10[7];
  lVar14 = puVar10[6];
  lVar13 = puVar10[5];
  plStack_238 = plVar12;
  plStack_218 = plVar12 + 2;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[5] = 0;
  plVar12[3] = lVar14;
  plVar12[2] = lVar13;
  plVar12[4] = lVar11;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_230);
  func_0x00010724ae28(&uStack_210);
  func_0x0001073ada24(*plVar12,auStack_200);
  __ZNSt3__17promiseIvE9set_valueEv(puVar10 + 8);
  _CFRunLoopRun();
  plVar12[9] = 0;
  func_0x0001073ada2c(*plStack_238);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plStack_238 + 2);
  return &plStack_238;
}



/* Entry: 10789ad84; end: 10789adc3;  */

void FUN_10789ad84(void)

{
  long unaff_x19;
  
  func_0x00010789b07c();
  if ((**(byte **)(unaff_x19 + 0x48) & 1) == 0) {
    __ZNSt3__17promiseIvE9set_valueEv(*(undefined8 *)(unaff_x19 + 0x58));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 8);
  return;
}



/* Entry: 10789af18; end: 10789af4f;  */

void FUN_10789af18(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 8;
  __Znwm();
  __ZNSt3__17promiseIvEC1Ev();
  *param_1 = uVar1;
  return;
}



/* Entry: 10789b128; end: 10789b23b;  */

undefined8 * FUN_10789b128(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 uStack_41;
  
  *param_1 = &PTR_DAT_1109e5cb8;
  param_1[1] = 0;
  func_0x00010789b23c(param_1 + 2);
  func_0x00010726ed14(param_1 + 3);
  param_1[5] = param_1;
  uVar2 = param_4 + 0x4d0;
  func_0x00010724e330();
  uStack_41 = ((uVar2 ^ 0xffffffff) & 0x101) != 0;
  func_0x00010789e8a0();
  func_0x000107525958(auStack_60);
  func_0x00010789b27c(&uStack_50,auStack_60,param_3,&uStack_41);
  uVar1 = uStack_50;
  uStack_50 = 0;
  func_0x00010789d2bc(param_1 + 1,uVar1);
  FUN_10789d29c(&uStack_50);
  func_0x00010724bd50(auStack_60);
  return param_1;
}



/* Entry: 10789b7a8; end: 10789baf3;  */

/* WARNING: Possible PIC construction at 0x00010789b830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010789b8b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789b834) */
/* WARNING: Removing unreachable block (ram,0x00010789b8bc) */

undefined8 *
FUN_10789b7a8(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  char *pcVar3;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x19;
  undefined8 uStack_678;
  long lStack_670;
  long lStack_668;
  undefined8 auStack_660 [2];
  long alStack_650 [2];
  undefined1 auStack_640 [32];
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 auStack_5c8 [3];
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 auStack_3b0 [128];
  undefined1 auStack_330 [32];
  undefined8 uStack_310;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_58;
  
  func_0x00010789e4ec();
  uStack_58 = extraout_x8;
  if ((*(byte *)(param_3 + 0x168) & 1) == 0) {
    lVar2 = param_5;
    func_0x00010789e754();
    uStack_5b0 = 0;
    if (*(long *)(lVar2 + 0x18) != 0) {
      func_0x0001073af260();
      func_0x000105302f48(auStack_640,param_5);
      uStack_618 = param_2[4];
      uStack_620 = param_2[3];
      if (param_2[4] != 0) {
        do {
          func_0x00010789e4dc();
        } while (extraout_w10 != 0);
      }
      uStack_610 = param_2[5];
      lStack_668 = 0;
      auStack_660[0] = 0;
      uStack_5a8 = 0;
      uStack_5a0 = 0;
      param_2 = &uStack_5a8;
      goto code_r0x00010725b1d4;
    }
    uStack_678 = 0;
    lStack_670 = 0;
    pcVar3 = (char *)param_2[1];
    in_ZR = *pcVar3 == '\x01';
    if ((bool)in_ZR) {
      if (*(long *)(pcVar3 + 8) != 0) {
        lStack_668 = *(long *)(pcVar3 + 8) + 0x10;
        func_0x00010789e5b0();
        auStack_660[0] = param_1;
        if (extraout_x8_00 != 0) {
          do {
            func_0x00010789e4dc();
          } while (extraout_w10_00 != 0);
        }
        func_0x00010724bb70(alStack_650,auStack_660);
        lVar2 = lStack_668;
        if (alStack_650[0] != 0) {
          func_0x0001072d488c(&uStack_5a8);
          func_0x0001075281c8(auStack_3b0);
          func_0x000105302f48(auStack_330,auStack_5c8);
          uStack_310 = uStack_678;
          lStack_308 = lStack_670;
          if (lStack_670 != 0) {
            do {
              func_0x00010789e4dc();
            } while (extraout_w10_01 != 0);
          }
          puVar1 = (undefined8 *)0x2c8;
          __Znwm();
          func_0x00010789df50(&puStack_300,&uStack_5a8);
          *puVar1 = &PTR_DAT_1109e6088;
          puVar1[1] = lVar2;
          puVar1[2] = &SUB_10789bb14;
          puVar1[3] = 0;
          func_0x00010789df50(puVar1 + 4,&puStack_300);
          func_0x00010789e050(&puStack_300);
          puStack_300 = puVar1;
          func_0x00010789e050(&uStack_5a8);
          func_0x00010789e624();
          puVar1 = puStack_300;
          puStack_300 = (undefined8 *)0x0;
          if (puVar1 != (undefined8 *)0x0) {
            func_0x00010789e4d0();
          }
        }
        func_0x00010724bcd8(alStack_650);
        func_0x00010789e598();
      }
    }
    else if (*(long *)(pcVar3 + 0x10) != 0) {
      uStack_2f8 = 0;
      puStack_300 = (undefined8 *)0x0;
      func_0x00010789e828();
      func_0x00010789bb14();
      func_0x000107279270(&puStack_300);
    }
    func_0x000107279270(&uStack_678);
    param_2 = auStack_5c8;
    func_0x0001006393ec();
  }
  func_0x00010789e4bc(uStack_58);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  puVar1 = puStack_300;
  puStack_300 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010789e4d0();
  }
  func_0x00010724bcd8(alStack_650);
  func_0x00010789e598();
  func_0x000107279270(&uStack_678);
  func_0x0001006393ec(auStack_5c8);
  func_0x00010789e550();
  func_0x00010789e808();
  unaff_x19 = param_2;
code_r0x00010725b1d4:
  func_0x00010725c0a0();
  if (param_2 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10789bf34; end: 10789bf47;  */

/* WARNING: Removing unreachable block (ram,0x00010789be88) */

void FUN_10789bf34(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long lVar4;
  long extraout_x8_00;
  int extraout_w10;
  long alStack_98 [2];
  undefined8 auStack_88 [4];
  undefined8 *apuStack_68 [4];
  undefined8 uStack_48;
  
  pcVar3 = *(char **)(param_1 + 8);
  UNRECOVERED_JUMPTABLE = (code *)&UNK_10789bf48;
  func_0x00010789e4ec();
  uVar1 = *pcVar3 == '\x01';
  uStack_48 = extraout_x8;
  if ((bool)uVar1) {
    lVar4 = *(long *)(pcVar3 + 8);
    if (lVar4 != 0) {
      func_0x00010789e5b0();
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010789e4dc();
        } while (extraout_w10 != 0);
      }
      func_0x00010724bb70(alStack_98);
      if (alStack_98[0] != 0) {
        puVar2 = auStack_88;
        func_0x00010740f0c4(puVar2,param_2);
        func_0x00010789e778();
        func_0x00010740f0c4(apuStack_68,auStack_88);
        *puVar2 = &PTR_DAT_1109e6108;
        puVar2[1] = lVar4 + 0x10;
        puVar2[2] = UNRECOVERED_JUMPTABLE;
        puVar2[3] = 0;
        func_0x00010740f0c4(puVar2 + 4,apuStack_68);
        func_0x00010724bfc0(apuStack_68);
        apuStack_68[0] = puVar2;
        func_0x00010724bfc0(auStack_88);
        func_0x00010789e624();
        puVar2 = apuStack_68[0];
        apuStack_68[0] = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
          func_0x00010789e4d0();
        }
      }
      func_0x00010789e5a0();
      func_0x00010789e598();
    }
  }
  else if (*(long *)(pcVar3 + 0x10) != 0) {
    func_0x00010789e4bc(extraout_x8);
    if ((bool)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010789beb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    goto code_r0x00010789becc;
  }
  func_0x00010789e4bc(uStack_48);
  if ((bool)uVar1) {
    return;
  }
code_r0x00010789becc:
  ___stack_chk_fail();
  puVar2 = apuStack_68[0];
  apuStack_68[0] = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010789e4d0();
  }
  func_0x00010789e5a0();
  func_0x00010789e598();
  func_0x00010789e550();
  func_0x00010789e5bc();
  func_0x00010789e6fc();
  func_0x00010789e544();
  func_0x00010789e584();
  return;
}



/* Entry: 10789c3c8; end: 10789c4eb;  */

void FUN_10789c3c8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  long unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  long lStack_98;
  undefined8 uStack_48;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010789e754();
  func_0x00010789e4ec();
  uStack_48 = extraout_x8;
  func_0x00010789e558();
  if ((bool)in_ZR) {
    if (*(long *)(extraout_x8_00 + 8) != 0) {
      func_0x00010789e848();
      func_0x00010789e5b0();
      uStack_b0 = param_1;
      if (extraout_x8_01 != 0) {
        do {
          func_0x00010789e4dc();
        } while (extraout_w10 != 0);
      }
      func_0x00010789e780();
      if (lStack_98 != 0) {
        func_0x00010789e66c();
        param_2 = (undefined8 *)(unaff_x24 + 0x18);
        func_0x00010724cbe8();
        func_0x00010789e610();
        func_0x00010789e65c();
        func_0x00010789e624();
        func_0x00010789e604();
        if (param_2 != (undefined8 *)0x0) {
          func_0x00010789e4d0();
        }
      }
      func_0x00010789e5a0();
      func_0x00010789e5ec();
    }
LAB_10789c49c:
    func_0x00010789e4bc(uStack_48);
    if ((bool)in_ZR) {
      return;
    }
  }
  else {
    param_2 = *(undefined8 **)(extraout_x8_00 + 0x10);
    if (param_2 == (undefined8 *)0x0) goto LAB_10789c49c;
    func_0x00010789e4bc(uStack_48);
    if ((bool)in_ZR) {
      func_0x00010789e828();
      goto code_r0x00010789c4ec;
    }
  }
  ___stack_chk_fail();
  func_0x00010789e5f4();
  if (param_2 != (undefined8 *)0x0) {
    func_0x00010789e4d0();
  }
  func_0x00010789e5a0();
  func_0x00010789e5ec();
  unaff_x30 = &LAB_10789c4ec;
  func_0x00010789e550();
  register0x00000008 = (BADSPACEBASE *)auStack_c0;
  unaff_x29 = puVar1;
code_r0x00010789c4ec:
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  (**(code **)(*(long *)*param_2 + 0x20))((undefined1 *)((long)register0x00000008 + -0x18));
  func_0x00010789e584();
  return;
}



/* Entry: 10789c748; end: 10789c86f;  */

void FUN_10789c748(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char *pcVar3;
  long extraout_x8;
  int extraout_w10;
  int *unaff_x19;
  int unaff_w20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_38;
  
  func_0x00010789e754();
  func_0x000100152bb8();
  if (unaff_w20 == 0 || *unaff_x19 != 6) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_68,&UNK_10f4328eb);
    func_0x00010789e6ec();
  }
  else {
    pcVar3 = *(char **)(param_2 + 8);
    if (*pcVar3 == '\x01') {
      if (*(long *)(pcVar3 + 8) != 0) {
        func_0x00010789e848();
        func_0x00010789e5b0();
        uStack_60 = param_1;
        if (extraout_x8 != 0) {
          do {
            func_0x00010789e4dc();
          } while (extraout_w10 != 0);
        }
        func_0x00010789e78c();
        if (lStack_48 != 0) {
          puVar1 = &uStack_38;
          func_0x00010789e240(puVar1,uStack_68,&UNK_10789c870,0,(char)unaff_x19[2]);
          uStack_50 = uStack_38;
          func_0x00010789e7cc();
          func_0x00010789e604();
          if (puVar1 != (undefined8 *)0x0) {
            func_0x00010789e4d0();
          }
        }
        func_0x00010789e5a0();
        func_0x00010789e6dc();
      }
    }
    else if (*(undefined8 **)(pcVar3 + 0x10) != (undefined8 *)0x0) {
      plVar2 = (long *)**(undefined8 **)(pcVar3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010789e6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x50))(plVar2,(char)unaff_x19[2]);
      return;
    }
  }
  return;
}



/* Entry: 10789cc98; end: 10789ccb7;  */

void FUN_10789cc98(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    func_0x00010724b340();
  }
  return;
}



/* Entry: 10789cdc0; end: 10789ce37;  */

undefined8 FUN_10789cdc0(undefined8 param_1)

{
  func_0x00010789e744();
  func_0x000107319d0c();
  return param_1;
}



/* Entry: 10789cf20; end: 10789cf77;  */

undefined8 * FUN_10789cf20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e5e18;
  func_0x00010724ae28(param_1 + 2);
  return param_1;
}



/* Entry: 10789d120; end: 10789d12b;  */

void FUN_10789d120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010789e7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10789d29c; end: 10789d2bb;  */

void FUN_10789d29c(void)

{
  func_0x00010789e854();
  func_0x00010789d2bc();
  return;
}



/* Entry: 10789d3d0; end: 10789d3eb;  */

void FUN_10789d3d0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010789d3ec(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789d638; end: 10789d647;  */

void FUN_10789d638(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e5f30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10789dc74; end: 10789dc87;  */

void FUN_10789dc74(void)

{
  func_0x00010789dcec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789ded8; end: 10789dee3;  */

undefined ** FUN_10789ded8(void)

{
  return &PTR_DAT_1109e6068;
}



/* Entry: 10789e118; end: 10789e14f;  */

undefined8 * FUN_10789e118(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x000105302f48(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 10789e214; end: 10789e23f;  */

undefined8 * FUN_10789e214(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e6108;
  func_0x00010724bfc0(param_1 + 4);
  return param_1;
}



/* Entry: 10789e3a0; end: 10789e3a3;  */

undefined8 * FUN_10789e3a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e61c8;
  func_0x00010789e408(param_1 + 4);
  return param_1;
}



/* Entry: 10789e4bc; end: 10789e85f;  */

void FUN_10789e4bc(void)

{
  return;
}



/* Entry: 10789e9c4; end: 10789e9e3;  */

void FUN_10789e9c4(undefined8 *param_1)

{
  func_0x00010789ed10();
  *param_1 = &PTR_DAT_1109e6290;
  return;
}



/* Entry: 10789eafc; end: 10789eb27;  */

void FUN_10789eafc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010789ed7c(param_2,param_1,&PTR_DAT_1109e6370);
  func_0x00010789ed40();
  return;
}



/* Entry: 10789edf8; end: 10789ee4b;  */

long FUN_10789edf8(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x000104c003e8(param_1 + 0x28);
  }
  func_0x0001073ada2c(*(undefined8 *)(param_1 + 0x48));
  func_0x00010724b54c((undefined8 *)(param_1 + 0x48));
  func_0x0001006393ec(param_1 + 0x28);
  func_0x0001072ad0c8(param_1 + 8);
  return param_1;
}



/* Entry: 10789f1e4; end: 10789f24b;  */

void FUN_10789f1e4(undefined8 *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined1 *)0x30;
  __Znwm();
  uVar1 = *param_2;
  uVar5 = param_3[1];
  uVar4 = *param_3;
  uVar3 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  *puVar2 = uVar1;
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 8) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *param_1 = puVar2;
  func_0x00010789f278();
  return;
}



/* Entry: 10789f724; end: 10789f8bb;  */

/* WARNING: Possible PIC construction at 0x00010789f750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789f754) */
/* WARNING: Removing unreachable block (ram,0x00010789f798) */
/* WARNING: Removing unreachable block (ram,0x00010789f758) */
/* WARNING: Removing unreachable block (ram,0x00010789f850) */
/* WARNING: Removing unreachable block (ram,0x00010789f870) */
/* WARNING: Removing unreachable block (ram,0x00010789f8b8) */
/* WARNING: Removing unreachable block (ram,0x00010789f85c) */

bool FUN_10789f724(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  
  func_0x0001078a0154();
  uVar2 = param_2;
  func_0x000107264c5c();
  puVar1 = &uStack_100;
  uStack_e8 = 0x10789f754;
  uStack_100 = param_2;
  uStack_f8 = uVar2;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010772cd00(&uStack_100,&DAT_10f3046e5,0);
  return puVar1 == (undefined8 *)0x0;
}



/* Entry: 10789fe5c; end: 10789fe87;  */

undefined8 * FUN_10789fe5c(undefined8 *param_1)

{
  func_0x0001073ada2c(*(undefined8 *)*param_1);
  return param_1;
}



/* Entry: 10789ffbc; end: 10789ffcf;  */

void FUN_10789ffbc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e64f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078a0070; end: 1078a00e3;  */

void FUN_1078a0070(void)

{
  long unaff_x19;
  long lVar1;
  undefined1 auStack_28 [8];
  
  func_0x0001078a0164();
  if ((**(byte **)(unaff_x19 + 0x48) & 1) == 0) {
    lVar1 = *(long *)(unaff_x19 + 0x58);
    __ZNSt3__17promiseIvE10get_futureEv(auStack_28,*(undefined8 *)(lVar1 + 0x30));
    __ZNSt3__17promiseIvE9set_valueEv(*(undefined8 *)(lVar1 + 0x28));
    __ZNSt3__16futureIvE3getEv(auStack_28);
    func_0x0001078a01b8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 8);
  return;
}



/* Entry: 1078a0b98; end: 1078a0c3b;  */

long * FUN_1078a0b98(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  
  puVar5 = *(ulong **)(param_1 + 8);
  puVar1 = (ulong *)puVar5[9];
  for (puVar6 = (ulong *)puVar5[8]; puVar6 != puVar1; puVar6 = puVar6 + 2) {
    uVar2 = *puVar6;
    if ((uVar2 != 0) && (func_0x0001078a31bc(), (uVar2 & 1) != 0)) goto LAB_1078a0c04;
  }
  uVar2 = *puVar5;
  if ((((uVar2 == 0) || (func_0x0001078a31bc(), (uVar2 & 1) == 0)) &&
      ((uVar2 = puVar5[4], uVar2 == 0 || (func_0x0001078a31bc(), (uVar2 & 1) == 0)))) &&
     ((uVar2 = puVar5[2], uVar2 == 0 || (func_0x0001078a31bc(), (uVar2 & 1) == 0)))) {
    plVar4 = (long *)puVar5[6];
    plVar3 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001078a0c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
      return plVar4;
    }
  }
  else {
LAB_1078a0c04:
    plVar3 = (long *)0x1;
  }
  return plVar3;
}



/* Entry: 1078a157c; end: 1078a1617;  */

void FUN_1078a157c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long alStack_40 [2];
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  func_0x00010724bb70(alStack_40);
  if (alStack_40[0] != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001078a34a8();
    *puVar1 = &PTR_DAT_1109e6750;
    puVar1[1] = uVar3;
    puVar1[2] = &UNK_1078a16b8;
    puVar1[3] = 0;
    puVar1[4] = uVar2;
    func_0x0001078a3478();
    func_0x0001078a34b0();
    if (puVar1 != (undefined8 *)0x0) {
      func_0x0001078a3138();
    }
  }
  func_0x0001078a33b0();
  return;
}



/* Entry: 1078a17d4; end: 1078a17d7;  */

undefined8 * FUN_1078a17d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e67a0;
  func_0x0001078a1848(param_1 + 4);
  return param_1;
}



/* Entry: 1078a1e14; end: 1078a1e5f;  */

long FUN_1078a1e14(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = 0x228;
  __Znwm();
  func_0x0001078a33f0();
  func_0x0001078a1f10();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return param_1;
}



/* Entry: 1078a1f44; end: 1078a1fb3;  */

undefined8 FUN_1078a1f44(undefined8 param_1)

{
  func_0x0001078a33f0();
  func_0x0001078a1f8c();
  return param_1;
}



/* Entry: 1078a2244; end: 1078a2283;  */

void FUN_1078a2244(undefined8 param_1,undefined8 param_2)

{
  undefined4 *unaff_x19;
  
  func_0x0001078a3154();
  func_0x0001078a317c(param_1,param_2,*unaff_x19);
  func_0x0001078a34bc();
  func_0x0001072a0374();
  func_0x0001078a32dc();
  func_0x0001078a31f0();
  return;
}



/* Entry: 1078a2534; end: 1078a255b;  */

void FUN_1078a2534(undefined8 param_1)

{
  func_0x0001078a3400();
  func_0x0001078a3348(param_1,&PTR_DAT_1109e68f0);
  func_0x0001078a32fc();
  return;
}



/* Entry: 1078a2660; end: 1078a268f;  */

long FUN_1078a2660(int param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001078a3400();
  func_0x0001078a3348();
  lVar1 = unaff_x19 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1078a27c8; end: 1078a27ef;  */

void FUN_1078a27c8(undefined8 param_1)

{
  func_0x0001078a3400();
  func_0x0001078a3348(param_1,&PTR_DAT_1109e69d0);
  func_0x0001078a32fc();
  return;
}



/* Entry: 1078a2938; end: 1078a294b;  */

void FUN_1078a2938(void)

{
  func_0x0001078a29dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a2d24; end: 1078a2dff;  */

long * FUN_1078a2d24(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001078a2d60(lVar1 + 8);
    func_0x0001004895c8(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078a3068; end: 1078a307b;  */

void FUN_1078a3068(void)

{
  func_0x0001078a3128();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a3658; end: 1078a3827;  */

bool FUN_1078a3658(long *param_1,long param_2,long *param_3,int param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  if (param_4 == 0) {
    func_0x0001078a35b0(&plStack_58,param_1);
    uStack_48 = 0;
    lVar6 = 8;
    if (plStack_58 != (long *)0x0) {
      lVar6 = 0x18;
    }
    lVar6 = *(long *)((long)param_1 + lVar6);
    __ZNSt13exception_ptrD1Ev(&uStack_48);
    __ZNSt13exception_ptrD1Ev(&plStack_58);
    uVar7 = lVar6 + param_2 + *param_3;
  }
  else {
    uVar7 = param_1[1];
  }
  while( true ) {
    uVar5 = param_1[3];
    bVar1 = uVar7 <= uVar5;
    if (uVar7 <= uVar5) {
      return bVar1;
    }
    uVar5 = 0x32;
    plVar2 = param_1;
    (**(code **)(*param_1 + 0xd8))();
    uStack_50 = (undefined1)uVar5;
    if ((uVar5 & 1) == 0) break;
    plStack_58 = plVar2;
    func_0x0001078a3d88(*(undefined8 *)(*param_1 + 0xe0));
    plVar3 = plVar2;
    func_0x0001078a3d88(*(undefined8 *)(*param_1 + 0xe8));
    plVar4 = param_3;
    func_0x0001078a3560();
    uVar7 = uVar7 - (long)plVar4 & ((long)(uVar7 - (long)plVar4) >> 0x3f ^ 0xffffffffffffffffU);
    if (plVar2 == (long *)0x0 && plVar3 == (long *)0x0) {
      return bVar1;
    }
  }
  return false;
}



/* Entry: 1078a3da8; end: 1078a3deb;  */

void FUN_1078a3da8(long *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  if ((char)param_1[0x26] == '\x01') {
    func_0x0001078a3dec(param_1,param_1[0x25],param_1[0x26]);
  }
  do {
    plVar4 = param_1;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    func_0x0001078a7400();
    func_0x0001078a72c0();
    *(undefined8 *)(puVar1 + -0x38) = extraout_x8;
    unaff_x21 = *plVar4;
    lVar5 = unaff_x21 + 0x40;
    do {
      lVar5 = *(long *)(lVar5 + 8);
      if (lVar5 == unaff_x21 + 0x40) {
        plVar4 = (long *)(unaff_x21 + 0x60);
        func_0x0001078a52d4(plVar4,unaff_x20);
        bVar3 = (long *)(unaff_x21 + 0x68) != plVar4;
        uVar2 = bVar3 || unaff_x19 == (long *)0x7fffffffffffffff;
        if (!bVar3 && unaff_x19 != (long *)0x7fffffffffffffff) {
          *(undefined ***)(puVar1 + -0x58) = &PTR_DAT_1109e70b0;
          *(long *)(puVar1 + -0x50) = unaff_x20;
          *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x58;
          func_0x0001078995ec(unaff_x20 + 0x208,unaff_x19,0,puVar1 + -0x58);
          plVar4 = (long *)(puVar1 + -0x58);
          func_0x0001006393ec();
        }
        break;
      }
      uVar2 = *(long *)(lVar5 + 0x10) == unaff_x20;
    } while (!(bool)uVar2);
    func_0x0001078a7288(*(undefined8 *)(puVar1 + -0x38));
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    param_1 = (long *)(puVar1 + -0x58);
    func_0x0001006393ec();
    unaff_x30 = &UNK_1078a3f14;
    func_0x0001078a7304();
    puVar1 = puVar1 + -0x60;
    unaff_x19 = plVar4;
    if ((char)param_1[0x4d] != '\x04') {
      return;
    }
  } while( true );
}



/* Entry: 1078a419c; end: 1078a41af;  */

void FUN_1078a419c(void)

{
  func_0x0001078a3fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a4bb0; end: 1078a4c9b;  */

void FUN_1078a4bb0(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *extraout_x8;
  long lVar3;
  long unaff_x21;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x0001078a74a4();
  func_0x0001078a7440();
  if (param_1 == 0) {
    func_0x0001078a7440();
    if (param_1 == 0) {
      func_0x0001078a7440();
      if (param_1 != 0) {
        lVar3 = *(long *)(unaff_x21 + 8);
        func_0x0001072ab574(lVar3 + 0xb0);
        uVar1 = *(uint *)(lVar3 + 0xf0);
        __ZNSt3__15mutex6unlockEv(lVar3 + 0xb0);
        *extraout_x8 = 5;
        *(ulong *)(extraout_x8 + 2) = (ulong)uVar1;
        return;
      }
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_78,&UNK_10f4328eb);
      *extraout_x8 = 7;
      puVar2 = auStack_78;
    }
    else {
      func_0x0001078a45f4(auStack_60,*(undefined8 *)(unaff_x21 + 8));
      func_0x000107268798(extraout_x8,auStack_60);
      puVar2 = auStack_60;
    }
  }
  else {
    func_0x0001078a4638(auStack_48,*(undefined8 *)(unaff_x21 + 8));
    func_0x000107268798(extraout_x8,auStack_48);
    puVar2 = auStack_48;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
  return;
}



/* Entry: 1078a4f80; end: 1078a4f93;  */

void FUN_1078a4f80(void)

{
  func_0x0001078a4f9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a5188; end: 1078a51b3;  */

undefined8 * FUN_1078a5188(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e6c58;
  func_0x0001078a5284(param_1 + 1);
  return param_1;
}



/* Entry: 1078a5730; end: 1078a5743;  */

void FUN_1078a5730(void)

{
  func_0x0001078a5864();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a58d0; end: 1078a59f3;  */

void FUN_1078a58d0(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar2 = (long *)(param_1 + 0xd0);
  plVar3 = plVar2;
  plVar5 = plVar2;
  while (plVar4 = (long *)*plVar3, plVar4 != (long *)0x0) {
    lVar1 = 8;
    if (param_2 <= (ulong)plVar4[4]) {
      lVar1 = 0;
    }
    plVar3 = (long *)((long)plVar4 + lVar1);
    if (param_2 <= (ulong)plVar4[4]) {
      plVar5 = plVar4;
    }
  }
  if ((plVar2 == plVar5) || (param_2 < (ulong)plVar5[4])) {
    plVar5 = plVar2;
  }
  lVar6 = plVar5[5];
  func_0x0001078a5a84(param_1 + 0x28,lVar6);
  lVar1 = param_1 + 0x60;
  func_0x0001078a5a84(lVar1,lVar6);
  if (lVar1 == 0) {
    plVar2 = (long *)(param_1 + 0x40);
    do {
      plVar2 = (long *)plVar2[1];
      if (plVar2 == (long *)(param_1 + 0x40)) goto LAB_1078a59ac;
    } while (plVar2[2] != lVar6);
    if (*(long **)(param_1 + 0x58) == plVar2) {
      *(long *)(param_1 + 0x58) = (*(long **)(param_1 + 0x58))[1];
    }
    lVar1 = *plVar2;
    plVar2 = (long *)plVar2[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
    __ZdlPv();
  }
  else {
    func_0x0001078a5a20(param_1);
  }
LAB_1078a59ac:
  plVar2 = plVar5;
  func_0x00010002c7d4();
  if (*(long **)(param_1 + 200) == plVar5) {
    *(long **)(param_1 + 200) = plVar2;
  }
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + -1;
  func_0x00010530d618(*(undefined8 *)(param_1 + 0xd0),plVar5);
  func_0x0001078a5fbc(plVar5 + 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar5);
  return;
}



/* Entry: 1078a5f88; end: 1078a5faf;  */

void FUN_1078a5f88(undefined8 param_1)

{
  func_0x0001078a738c();
  func_0x0001078a735c(param_1,&PTR_DAT_1109e6e28);
  func_0x0001078a72f4();
  return;
}



/* Entry: 1078a6144; end: 1078a6197;  */

undefined8 * FUN_1078a6144(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e6e58;
  func_0x0001078a6170(param_1 + 4);
  return param_1;
}



/* Entry: 1078a629c; end: 1078a629f;  */

void FUN_1078a629c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e6f18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078a63d8; end: 1078a64d3;  */

void FUN_1078a63d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long alStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x00010724bb70(alStack_90,param_1 + 1);
  if (alStack_90[0] != 0) {
    uVar5 = *param_1;
    uStack_78 = param_4[1];
    uStack_80 = *param_4;
    uStack_70 = param_4[2];
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    puVar4 = (undefined8 *)0x38;
    __Znwm();
    uVar3 = uStack_70;
    uVar2 = uStack_78;
    uVar1 = uStack_80;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    *puVar4 = &PTR_DAT_1109e6fb0;
    puVar4[1] = uVar5;
    puVar4[2] = param_2;
    puVar4[3] = param_3;
    puVar4[5] = uVar2;
    puVar4[4] = uVar1;
    puVar4[6] = uVar3;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    puVar4 = &uStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001078a7384();
    func_0x0001078a7354();
    func_0x0001078a7484();
    if (puVar4 != (undefined8 *)0x0) {
      func_0x0001078a729c();
    }
  }
  func_0x0001078a73c8();
  return;
}



/* Entry: 1078a6708; end: 1078a670b;  */

undefined8 * FUN_1078a6708(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e7070;
  func_0x00010724bd1c(param_1 + 4);
  return param_1;
}



/* Entry: 1078a68f0; end: 1078a6917;  */

void FUN_1078a68f0(undefined8 param_1)

{
  func_0x0001078a738c();
  func_0x0001078a735c(param_1,&PTR_DAT_1109e7110);
  func_0x0001078a72f4();
  return;
}



/* Entry: 1078a6f8c; end: 1078a6fb3;  */

void FUN_1078a6f8c(undefined8 param_1)

{
  func_0x0001078a738c();
  func_0x0001078a735c(param_1,&PTR_DAT_1109e7190);
  func_0x0001078a72f4();
  return;
}



/* Entry: 1078a71dc; end: 1078a71ef;  */

void FUN_1078a71dc(void)

{
  func_0x0001078a724c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a77b8; end: 1078a783f;  */

void FUN_1078a77b8(long *param_1,ulong param_2)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *extraout_x8;
  long *plVar6;
  undefined1 auStack_a0 [28];
  undefined4 uStack_84;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x18) < param_2) {
    cVar2 = SBORROW8(param_2,0xaaaaaaaaaaaaaab);
    cVar3 = (long)(param_2 + 0xf555555555555555) < 0;
    if (0xaaaaaaaaaaaaaaa < param_2) {
      func_0x0001078a817c();
      func_0x0001078a89d0();
      func_0x0001078a89a8();
      uStack_84 = 0;
      func_0x000108147d2c(*(undefined8 *)*param_1);
      func_0x0001078a8a90();
      if (cVar3 == cVar2) {
        func_0x0001078a8968();
        func_0x0001078a8a04();
        func_0x0001078a8a5c();
        func_0x0001078a897c();
        func_0x0001078a8a24();
        func_0x0001078a894c();
        func_0x0001078a8a44();
      }
      else {
        uVar4 = *(undefined8 *)(*param_1 + 8);
        func_0x000108146c44(uVar4);
        func_0x0001078a8a1c(extraout_x8,(long)(int)uVar4);
        uVar5 = *(undefined8 *)(*param_1 + 8);
        plVar6 = (long *)*extraout_x8;
        cVar3 = *(char *)((long)extraout_x8 + 0x17) < '\0';
        cVar2 = '\0';
        if (!(bool)cVar3) {
          plVar6 = extraout_x8;
        }
        func_0x000108148e80(uVar5,plVar6,uVar4,10,&uStack_84);
        plVar6 = extraout_x8;
        func_0x0001078a80e8(extraout_x8,(long)(int)uVar5);
        func_0x0001078a8a90();
        if (cVar3 != cVar2) {
          return;
        }
        func_0x0001078a8968();
        func_0x0001078a8a04();
        func_0x0001078a8a5c();
        func_0x0001078a897c();
        __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                  (plVar6,auStack_a0);
        func_0x0001078a894c();
        ___cxa_throw(plVar6);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1078a7954);
      (*pcVar1)();
    }
    FUN_1078a820c(auStack_48,param_2,(param_1[1] - *param_1) / 0x18);
    func_0x0001078a8a30();
    func_0x0001078a89d0();
  }
  return;
}



/* Entry: 1078a820c; end: 1078a827b;  */

long * FUN_1078a820c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001078a8258();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1078a8520; end: 1078a865f;  */

long * FUN_1078a8520(long *param_1,long *param_2,undefined1 *param_3,undefined8 param_4,long param_5
                    )

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  long *plStack_48;
  
  if (0 < param_5) {
    plVar3 = param_1 + 2;
    lVar4 = param_1[1];
    if (*plVar3 - lVar4 < param_5) {
      plVar2 = param_1;
      func_0x0001001e7ae4(param_1,(param_5 - *param_1) + lVar4);
      lVar4 = *param_1;
      plStack_68 = (long *)0x0;
      plStack_48 = plVar3;
      if (plVar2 != (long *)0x0) {
        func_0x00010002b988();
        plStack_68 = plVar3;
      }
      puStack_60 = (undefined1 *)((long)plStack_68 + ((long)param_2 - lVar4));
      puStack_50 = (undefined1 *)((long)plStack_68 + (long)plVar2);
      puStack_58 = puStack_60 + param_5;
      puVar1 = puStack_60;
      for (; param_5 != 0; param_5 = param_5 + -1) {
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
        param_3 = param_3 + 1;
      }
      func_0x000104bd9b18(param_1,&plStack_68,param_2);
      func_0x0001078a8a0c();
      param_2 = param_1;
    }
    else {
      lVar4 = lVar4 - (long)param_2;
      if (param_5 - lVar4 == 0 || param_5 < lVar4) {
        func_0x0001078a8994();
        plVar3 = param_2;
        for (; param_5 != 0; param_5 = param_5 + -1) {
          *(undefined1 *)plVar3 = *param_3;
          plVar3 = (long *)((long)plVar3 + 1);
          param_3 = param_3 + 1;
        }
      }
      else {
        func_0x0001078a8660(param_1,param_3 + lVar4,param_4,param_5 - lVar4);
        if (0 < lVar4) {
          func_0x0001078a8994();
          plVar3 = param_2;
          for (; lVar4 != 0; lVar4 = lVar4 + -1) {
            *(undefined1 *)plVar3 = *param_3;
            plVar3 = (long *)((long)plVar3 + 1);
            param_3 = param_3 + 1;
          }
        }
      }
    }
  }
  return param_2;
}



/* Entry: 1078a8844; end: 1078a885f;  */

void FUN_1078a8844(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001078a8860(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a910c; end: 1078a92f3;  */

/* WARNING: Possible PIC construction at 0x0001078a9244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078a928c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078a9248) */
/* WARNING: Removing unreachable block (ram,0x0001078a925c) */
/* WARNING: Removing unreachable block (ram,0x0001078a9260) */
/* WARNING: Removing unreachable block (ram,0x0001078a9290) */
/* WARNING: Removing unreachable block (ram,0x0001078a92c8) */
/* WARNING: Removing unreachable block (ram,0x0001078a92e0) */
/* WARNING: Removing unreachable block (ram,0x0001078a92b0) */

void FUN_1078a910c(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  uint uStack_5d;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined4 uStack_55;
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = 0;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = 0xa1a0a0d474e5089;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uStack_5d = uVar3 >> 0x10 | uVar3 << 0x10;
  uStack_59 = (undefined1)(uVar2 >> 0x18);
  uStack_58 = (undefined1)(uVar2 >> 0x10);
  uStack_57 = (undefined1)(uVar2 >> 8);
  uStack_56 = (undefined1)uVar2;
  uStack_55 = 0x608;
  uStack_51 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  for (uVar5 = 0; uVar5 < uVar2; uVar5 = uVar5 + 1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(&uStack_78,1,0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_78,*(long *)(param_2 + 2) + lVar4,(ulong)uVar1 * 4);
    uVar2 = param_2[1];
    lVar4 = lVar4 + (ulong)uVar1 * 4;
  }
  func_0x0001078a8a9c(auStack_90,&uStack_78);
  func_0x000100066230(&uStack_78,auStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar5 = uStack_70;
  if (-1 < (long)uStack_68) {
    uVar5 = uStack_68 >> 0x38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1,uVar5 + 0x39);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_1,&uStack_50,8)
  ;
  func_0x0001078a93bc();
  func_0x0001078a93f4();
  func_0x0001078a93f4();
  uVar5 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1,uVar5 + 0x19);
  func_0x0001078a9564();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f432bf1,4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&uStack_5d,0xd);
  func_0x0001078a9564();
  return;
}



/* Entry: 1078a95c8; end: 1078a95d3;  */

void FUN_1078a95c8(long param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 extraout_x8;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lStack_38;
  
  param_2 = param_1 + param_2;
  func_0x0001078a9b2c(param_1,param_2,0);
  func_0x0001078a96a0(extraout_x8,param_2 - param_1);
  do {
    while( true ) {
      if (unaff_x22 == unaff_x21) {
        return;
      }
      uVar2 = (uint)&lStack_38;
      func_0x0001078a976c();
      if (0xfffffffd < uVar2) break;
      func_0x0001078a98ac();
      unaff_x22 = lStack_38;
    }
    unaff_x22 = lStack_38;
  } while (unaff_w20 != 1);
  ___cxa_allocate_exception(0x10);
  func_0x0001078a9908();
  func_0x0001078a9b0c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1078a9650);
  (*pcVar1)();
}



/* Entry: 1078a99e8; end: 1078a9a5f;  */

uint FUN_1078a99e8(long *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)*param_1;
  if (puVar2 == param_2) {
    return 0xfffffffe;
  }
  uVar1 = *puVar2;
  *param_1 = (long)(puVar2 + 1);
  if (uVar1 - 0xe000 < 0xfffff800) {
    return (uint)uVar1;
  }
  if (uVar1 >> 10 < 0x37) {
    if (puVar2 + 1 == param_2) {
      return 0xfffffffe;
    }
    *param_1 = (long)(puVar2 + 2);
    if (0xfffffbff < puVar2[1] - 0xe000) {
      return (puVar2[1] & 0x3ff | (uVar1 & 0x3ff) << 10) + 0x10000;
    }
  }
  return 0xffffffff;
}



/* Entry: 1078a9c64; end: 1078a9c9f;  */

void FUN_1078a9c64(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001078a9c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 8) + 0x20))();
  return;
}



/* Entry: 1078aac5c; end: 1078aad3b;  */

bool FUN_1078aac5c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xb8);
  if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
    return plVar1[1] != 0;
  }
  return false;
}



/* Entry: 1078ab600; end: 1078ab687;  */

void FUN_1078ab600(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (((*(byte *)(param_2 + 0x3e9) & 1) != 0) ||
     ((uVar1 = 0, lRam0000000113824530 != 0 && (lRam0000000113824528 != 0)))) {
    uVar1 = 0x38;
    __Znwm();
    FUN_1078af920();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1078abe6c; end: 1078abf77;  */

void FUN_1078abe6c(long param_1,long param_2,ulong param_3,ulong param_4,int param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_58;
  
  uStack_58 = (undefined8 *)CONCAT44(uStack_58._4_4_,1);
  puVar2 = &uStack_58;
  func_0x0001078abf78(param_1 + 0x1d8,puVar2);
  uVar1 = param_4;
  func_0x0001078af888(param_4);
  _glReadPixels(0,0,param_3,param_3 >> 0x20,uVar1 >> 0x20,puVar2,param_2);
  if (param_5 != 0) {
    uStack_58 = (undefined8 *)CONCAT44(1,(int)param_3);
    puVar2 = &uStack_58;
    func_0x0001078b5334(puVar2,param_4);
    puVar3 = puVar2;
    __Znam();
    _bzero();
    lVar7 = 0;
    iVar4 = (int)(param_3 >> 0x20);
    lVar5 = param_2;
    uStack_58 = puVar3;
    while( true ) {
      iVar4 = iVar4 + -1;
      if (iVar4 <= lVar7) break;
      func_0x0001078af47c(puVar3,lVar5);
      lVar6 = param_2 + (long)puVar2 * (long)iVar4;
      func_0x0001078af47c(lVar5,lVar6);
      func_0x0001078af47c(lVar6,puVar3);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + (long)puVar2;
    }
    func_0x00010724e5b8(&uStack_58);
  }
  return;
}



/* Entry: 1078ac83c; end: 1078ac8eb;  */

void FUN_1078ac83c(long param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  ulong uStack_40;
  ulong uStack_38;
  
  uStack_40 = param_4;
  uStack_38 = param_3;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    func_0x0001078ac8ec(param_1 + 0x24c);
    func_0x0001078ac918(param_1 + 0x23c,&UNK_10deb4439);
    uVar1 = 0x4000;
  }
  else {
    uVar1 = 0;
  }
  if ((param_3 >> 0x20 & 1) != 0) {
    uVar1 = uVar1 | 0x100;
    func_0x0001078ac950(param_1 + 0x244,&uStack_38);
    func_0x0001078ac994(param_1 + 0x214,&UNK_10deb4438);
  }
  if ((param_4 >> 0x20 & 1) != 0) {
    uVar1 = uVar1 | 0x400;
    func_0x0001078ac9c4(param_1 + 0x260,&uStack_40);
    func_0x0001078ac9f4(param_1 + 0x1f8,&UNK_10deb4434);
  }
  _glClear(uVar1);
  return;
}



/* Entry: 1078ad69c; end: 1078ad91b;  */

void FUN_1078ad69c(long param_1,long param_2,ulong param_3,long param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined1 *puVar8;
  
  if (param_1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 8);
  }
  _glBindBuffer(0x8893,uVar6);
  puVar1 = *(undefined1 **)(param_4 + 0x58);
  for (puVar8 = *(undefined1 **)(param_4 + 0x50); puVar8 != puVar1; puVar8 = puVar8 + 5) {
    func_0x0001078af544(*(undefined8 *)(param_2 + (ulong)(byte)puVar8[1] * 8));
    lVar7 = *(long *)(*(long *)(param_4 + 0x38) + (ulong)(byte)puVar8[1] * 8);
    bVar2 = puVar8[3];
    _glEnableVertexAttribArray(*puVar8);
    uVar5 = (ulong)(byte)puVar8[2];
    uVar4 = (byte)puVar8[2] - 1;
    if (uVar4 < 0x1b) {
      uVar6 = *(undefined4 *)(&UNK_10deb444c + ((ulong)uVar4 & 0xff) * 4);
    }
    else {
      uVar6 = 1;
    }
    uVar3 = *puVar8;
    func_0x0001078ae520();
    _glVertexAttribPointer
              (uVar3,uVar6,uVar5,puVar8[4],
               *(undefined8 *)(*(long *)(param_4 + 0x38) + (ulong)(byte)puVar8[1] * 8),
               (ulong)bVar2 + lVar7 * (param_3 & 0xffffffff));
  }
  return;
}



/* Entry: 1078adf40; end: 1078ae0db;  */

void FUN_1078adf40(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined8 *extraout_x8;
  long unaff_x20;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x0001078af318();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
            (extraout_x8,&UNK_10f432d5e);
  func_0x0001078af378();
  if (*(char *)(unaff_x20 + 0x3e9) == '\x01') {
    if (param_2 != 0) {
      func_0x0001078af378();
      func_0x0001078af378();
    }
  }
  else if ((*(long *)(unaff_x20 + 0xd8) != 0) && (param_2 != 0)) {
    uVar1 = (uint)*(byte *)(*(long *)(unaff_x20 + 0xd8) + 0x30);
    if (uVar1 != 2) {
      func_0x00010002b838(auStack_48,(&PTR_DAT_1109e7458)[uVar1]);
      func_0x00010002b838(auStack_60,
                          (&PTR_DAT_1109e7470)[*(byte *)(*(long *)(unaff_x20 + 0xd8) + 0x30)]);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_90,&UNK_10f432dcc,auStack_48);
      func_0x0001078af498();
      func_0x0001078af504();
      func_0x0001078af2f4();
      func_0x0001078af340();
      func_0x0001078af378();
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_90,&UNK_10f432de4,auStack_60);
      func_0x0001078af498();
      func_0x0001078af504();
      func_0x0001078af2f4();
      func_0x0001078af340();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
    }
  }
  return;
}



/* Entry: 1078ae3c4; end: 1078ae51f;  */

undefined8 * FUN_1078ae3c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  if (((((*(byte *)((long)param_1 + 0xc) & 1) != 0) || (func_0x0001078af1b8(), !(bool)in_ZR)) ||
      (*(int *)((long)param_1 + 4) != *(int *)((long)param_2 + 4))) ||
     (*(int *)(param_1 + 1) != *(int *)(param_2 + 1))) {
    *(undefined1 *)((long)param_1 + 0xc) = 0;
    uVar1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *param_1 = uVar1;
    func_0x0001078b6428(param_1);
  }
  return param_1;
}



/* Entry: 1078ae610; end: 1078ae62f;  */

void FUN_1078ae610(void)

{
  func_0x0001078af2e8();
  func_0x0001078ae630();
  return;
}



/* Entry: 1078ae728; end: 1078ae75b;  */

undefined8 FUN_1078ae728(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001078ae75c(&uStack_28);
  return param_1;
}



/* Entry: 1078ae938; end: 1078ae93b;  */

void FUN_1078ae938(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078aea0c; end: 1078aea3f;  */

long FUN_1078aea0c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001078af518(param_2,param_1,&PTR_DAT_1109e7568);
  param_1 = param_1 + 8;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1078aeb94; end: 1078aebbf;  */

void FUN_1078aeb94(undefined4 *param_1)

{
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x0001078afe9c(param_1 + 2,*param_1);
  }
  return;
}



/* Entry: 1078aedc4; end: 1078aedd7;  */

void FUN_1078aedc4(void)

{
  func_0x0001078aede4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078af920; end: 1078afce7;  */

undefined8 *
FUN_1078af920(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
             undefined8 param_5)

{
  uint uVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  undefined **ppuVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 auStack_100 [2];
  undefined4 uStack_f8;
  undefined1 auStack_f0 [24];
  int aiStack_d8 [6];
  undefined4 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  *param_1 = &PTR_DAT_1109e76d0;
  param_1[1] = param_5;
  param_1[2] = *param_3;
  func_0x0001078ab5ac(param_1 + 3,param_5);
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  uStack_114 = *(undefined4 *)(param_1[1] + 0xf4);
  func_0x0001078abfa8((undefined4 *)(param_1[1] + 0xf4),param_1 + 3);
  lVar9 = 0;
  for (lVar7 = param_4; (lVar9 != 4 && (*(char *)(lVar7 + 0x10) == '\x01')); lVar7 = lVar7 + 0x18) {
    func_0x0001078916c4();
    func_0x0001078afe24();
    *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
    lVar9 = lVar9 + 1;
  }
  if (*(char *)(param_4 + 0x78) == '\x01') {
    lVar9 = param_4 + 0x60;
    func_0x0001078916dc();
    if (*(int *)(lVar9 + 0x10) == 0) {
      func_0x0001078afe24();
    }
    plVar3 = (long *)(param_4 + 0x60);
    func_0x0001078916dc();
    if ((int)plVar3[2] == 1) {
      cVar2 = *(char *)(*plVar3 + 8);
      if ((byte)(cVar2 - 0xcU) < 4) {
        _glFramebufferRenderbuffer
                  (0x8d40,*(undefined4 *)(&UNK_10deb4e90 + (ulong)(byte)(cVar2 - 0xc) * 4),0x8d41,
                   *(undefined4 *)(*(long *)(*plVar3 + 0x10) + 8));
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 6);
  if (uVar1 == 0) {
    aiStack_d8[0] = 0;
    if (*(char *)(param_1[1] + 0x3e9) == '\x01') {
      func_0x0001078afe18(PTR__glDrawBuffers_113230860);
      ppuVar5 = &PTR__glReadBuffer_113230858;
    }
    else {
      func_0x0001078afe18(uRam0000000113824530);
      ppuVar5 = (undefined **)0x113824528;
    }
    (*(code *)*ppuVar5)(0);
  }
  else {
    iVar6 = 0x8ce0;
    for (uVar4 = 0; uVar1 != uVar4; uVar4 = uVar4 + 1) {
      aiStack_d8[uVar4] = iVar6;
      iVar6 = iVar6 + 1;
    }
    ppuVar5 = &PTR__glDrawBuffers_113230860;
    if (*(char *)(param_1[1] + 0x3e9) == '\0') {
      ppuVar5 = (undefined **)0x113824530;
    }
    (*(code *)*ppuVar5)((ulong)uVar1,aiStack_d8);
  }
  puVar8 = *(undefined8 **)(param_1[1] + 0x30);
  iVar6 = 0x8d40;
  _glCheckFramebufferStatus();
  if (iVar6 != 0x8cd5) {
    func_0x00010002b838(auStack_68,"");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
    aiStack_d8[0] = 0xef;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b8 = &PTR_DAT_110996720;
    uStack_b0 = 0;
    uStack_98 = 0xef;
    uStack_90 = 0;
    uStack_8c = 1;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    func_0x00010729d56c(aiStack_d8,&DAT_10f68f148,param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_f0,auStack_68);
    func_0x00010726e300(aiStack_d8,"error",auStack_f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
    auStack_100[0] = 1;
    uStack_f8 = 0;
    uStack_110 = *puVar8;
    uStack_108 = 3;
    func_0x00010743fa9c(puVar8,aiStack_d8,auStack_100,&uStack_110,7);
    func_0x000107262330(aiStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  }
  *(bool *)((long)param_1 + 0x34) = iVar6 == 0x8cd5;
  func_0x0001078abfa8(param_1[1] + 0xf4,&uStack_114);
  return param_1;
}



/* Entry: 1078afe84; end: 1078afe97;  */

void FUN_1078afe84(void)

{
  func_0x0001078afe30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078b0130; end: 1078b013f;  */

ulong FUN_1078b0130(long *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if ((*(long *)(lVar2 + 0x38) == 0) && (func_0x0001078b0410(lVar2), *(long *)(lVar2 + 0x38) == 0)
       ) {
      uVar3 = 0;
    }
    else {
      uVar1 = *(uint *)(*(long *)(*(long *)(lVar2 + 0x18) + (*(ulong *)(lVar2 + 0x30) >> 10) * 8) +
                       (*(ulong *)(lVar2 + 0x30) & 0x3ff) * 4);
      func_0x0001078b04c0(lVar2 + 0x10);
      uVar3 = (ulong)uVar1 | 0x100000000;
    }
    return uVar3;
  }
  return 0;
}



/* Entry: 1078b04dc; end: 1078b0543;  */

void FUN_1078b04dc(long param_1,undefined4 *param_2)

{
  long unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x0001078b0ca8();
  func_0x0001078b0680();
  if (param_1 == 0) {
    func_0x0001078b06a8();
  }
  func_0x0001078b05f0();
  *param_2 = *unaff_x20;
  *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x19 + 0x28) + 1;
  return;
}



/* Entry: 1078b081c; end: 1078b094b;  */

void FUN_1078b081c(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong uVar3;
  long extraout_x8;
  ulong uVar4;
  ulong *unaff_x19;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x0001078b0ca8();
  func_0x0001078b0cc4();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    uVar3 = unaff_x19[1];
    bVar2 = uVar3 == uVar1;
    if (uVar1 < uVar3) {
      func_0x0001078b0c58();
      if (!bVar2) {
        func_0x0001078b0c70();
      }
      func_0x0001078b0cd4();
    }
    else {
      uVar4 = (long)(extraout_x8 - uVar1) >> 2;
      if (extraout_x8 - uVar1 == 0) {
        uVar4 = 0;
      }
      func_0x0001078b0ce4();
      lStack_68 = param_1 + (uVar4 >> 2) * 8;
      lStack_58 = param_1 + uVar3 * 8;
      lStack_70 = param_1;
      lStack_60 = lStack_68;
      func_0x0001078b0b54(&lStack_70,unaff_x19[1],unaff_x19[2]);
      func_0x0001078b0c1c();
    }
  }
  func_0x0001078b0cb4();
  return;
}



/* Entry: 1078b0dc4; end: 1078b0e1f;  */

void FUN_1078b0dc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm();
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001078b1068();
  *param_1 = uVar1;
  func_0x0001078b1410();
  return;
}



/* Entry: 1078b1098; end: 1078b10bb;  */

undefined8 FUN_1078b1098(undefined8 param_1)

{
  func_0x0001078b10bc(param_1,0);
  return param_1;
}



/* Entry: 1078b11dc; end: 1078b1213;  */

long FUN_1078b11dc(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e7870);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



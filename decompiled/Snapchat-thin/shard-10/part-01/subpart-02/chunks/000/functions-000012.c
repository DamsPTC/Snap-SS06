/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078963d4; end: 107896453;  */

undefined ** FUN_1078963d4(void)

{
  return &PTR_DAT_1109e4e30;
}



/* Entry: 1078965c8; end: 107896603;  */

void FUN_1078965c8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_1109e4e78;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 107896990; end: 107897e2f;  */

/* WARNING: Possible PIC construction at 0x0001078a8f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078a8f78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078a8f98) */
/* WARNING: Removing unreachable block (ram,0x0001078a8fa0) */
/* WARNING: Removing unreachable block (ram,0x0001078a8fc0) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f7c) */

void FUN_107896990(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined4 uVar8;
  ulong extraout_x9;
  undefined8 *unaff_x19;
  undefined auStack_3c70 [15384];
  undefined8 uStack_58;
  
  puVar3 = &UNK_10f432607;
  func_0x0001078967b0();
  if ((param_3 >> 0x20 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  uVar8 = (undefined4)((ulong)puVar3 >> 0x20);
  puVar3 = (undefined *)(((ulong)puVar3 & 0xffffffff) + 0x1131adb48);
  param_3 = param_3 & 0xffffffff;
  uVar7 = 1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_1);
  func_0x0001078a8fe0();
  ppuVar4 = &PTR___tlv_bootstrap_11340dc00;
  uStack_58 = extraout_x8;
  func_0x0001078a9020();
  ppuVar5 = &PTR___tlv_bootstrap_11340dc18;
  func_0x0001078a9020();
  if (*(char *)ppuVar5 == '\x01') {
    ppuVar5 = ppuVar4;
    _inflateReset();
    if ((int)ppuVar5 != 0) {
      func_0x0001078a8fd8();
      func_0x0001078a90ec();
      return;
    }
  }
  else {
    ppuVar6 = ppuVar5;
    func_0x0001078a9048();
    if ((int)ppuVar6 != 0) goto LAB_1078a8f88;
    *(undefined1 *)ppuVar5 = 1;
  }
  *ppuVar4 = puVar3;
  *(undefined4 *)(ppuVar4 + 1) = uVar8;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  uVar1 = param_3;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0x20000;
  }
  *unaff_x19 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(unaff_x19,uVar1);
  do {
    ppuVar4[3] = auStack_3c70;
    *(undefined4 *)(ppuVar4 + 4) = 0x3c18;
    func_0x0001078a90d8();
    func_0x0001078a9078();
    uVar7 = extraout_x9;
    if ((long)extraout_x9 < 0) {
      uVar7 = unaff_x19[1];
    }
    if (uVar7 < extraout_x8_00) {
      func_0x0001078a90b0();
    }
  } while ((int)param_3 == 0);
  bVar2 = (int)param_3 == 1;
  if (!bVar2) {
    func_0x0001078a8fd8();
    func_0x0001078a905c();
    __ZNSt13runtime_errorC1EPKc();
    return;
  }
  func_0x0001078a8ff4(uStack_58);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_1078a8f88:
  func_0x0001078a8fd8();
  func_0x0001078a90c4();
  return;
}



/* Entry: 107898014; end: 10789803b;  */

undefined8 FUN_107898014(undefined8 param_1)

{
  func_0x00010789803c(param_1,0);
  return param_1;
}



/* Entry: 1078983f0; end: 107898447;  */

void FUN_1078983f0(void)

{
  long unaff_x19;
  
  func_0x0001078995a4();
  func_0x0001073af1cc(0);
  func_0x000107313fcc(unaff_x19 + 0xd0);
  func_0x000107899138(unaff_x19 + 200);
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x88);
  FUN_1078987b8(unaff_x19 + 0x58);
  FUN_1078987b8(unaff_x19 + 0x28);
  func_0x0001006393ec(unaff_x19 + 8);
  return;
}



/* Entry: 1078987b8; end: 1078987fb;  */

long * FUN_1078987b8(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  func_0x0001078987fc();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  func_0x000107898938();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107898a60; end: 107898bcf;  */

void FUN_107898a60(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  
  if ((ulong)param_1[4] < 0x100) {
    uVar6 = param_1[2] - param_1[1];
    plVar2 = param_1 + 3;
    lVar4 = *plVar2;
    uVar5 = lVar4 - *param_1;
    if (uVar5 <= uVar6) {
      lVar1 = (long)uVar5 >> 2;
      if (lVar4 == *param_1) {
        lVar1 = 1;
      }
      plStack_30 = plVar2;
      func_0x000107898eec();
      lStack_48 = (long)plVar2 + uVar6;
      plStack_38 = plVar2 + lVar1;
      uVar3 = 0x1000;
      lStack_50 = (long)plVar2;
      lStack_40 = lStack_48;
      __Znwm();
      plStack_60 = param_1 + 5;
      uStack_58 = 0x100;
      uStack_70 = uVar3;
      uStack_68 = uVar3;
      func_0x000107898d80(&lStack_50,&uStack_70);
      uStack_68 = 0;
      lVar4 = param_1[2];
      while (lVar1 = param_1[1], lVar4 != lVar1) {
        lVar4 = lVar4 + -8;
        func_0x000107898e0c(&lStack_50,lVar4);
      }
      lVar4 = *param_1;
      lVar8 = param_1[3];
      lVar7 = param_1[2];
      param_1[1] = lStack_48;
      *param_1 = lStack_50;
      param_1[3] = (long)plStack_38;
      param_1[2] = lStack_40;
      lStack_50 = lVar4;
      lStack_48 = lVar1;
      lStack_40 = lVar7;
      plStack_38 = (long *)lVar8;
      func_0x000107898f2c(&uStack_68);
      func_0x000107898f68(&lStack_50);
      return;
    }
    lVar1 = 0x1000;
    if (lVar4 != param_1[2]) {
      __Znwm();
      lStack_50 = lVar1;
      func_0x000107898c54(param_1,&lStack_50);
      return;
    }
    __Znwm();
    lStack_50 = lVar1;
    func_0x000107898cd8(param_1,&lStack_50);
  }
  else {
    param_1[4] = param_1[4] - 0x100;
  }
  lStack_50 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  func_0x000107898bd0(param_1,&lStack_50);
  return;
}



/* Entry: 107898f10; end: 107898f2b;  */

long FUN_107898f10(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  func_0x000107898f50();
  return param_1;
}



/* Entry: 10789905c; end: 10789906f;  */

void FUN_10789905c(void)

{
  func_0x000107899128();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107899174; end: 10789918f;  */

void FUN_107899174(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001078992b8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078992dc; end: 1078992f3;  */

void FUN_1078992dc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107898014(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078993b4; end: 1078993eb;  */

void FUN_1078993b4(void)

{
  long unaff_x19;
  
  func_0x00010789948c();
  if ((**(byte **)(unaff_x19 + 0x48) & 1) == 0) {
    _CFRunLoopGetCurrent();
    _CFRunLoopStop();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 8);
  return;
}



/* Entry: 1078997b4; end: 1078997bb;  */

void FUN_1078997b4(undefined8 param_1,long param_2)

{
  if (*(long **)(param_2 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000104c00420();
  return;
}



/* Entry: 107899eb4; end: 107899eb7;  */

long FUN_107899eb4(long param_1)

{
  func_0x000107899f64(param_1 + 0x20);
  func_0x000107899ecc(param_1 + 8);
  return param_1;
}



/* Entry: 10789a0bc; end: 10789a17f;  */

undefined8 *
FUN_10789a0bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [8];
  undefined8 *puStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [4];
  undefined8 uStack_48;
  
  func_0x00010789b06c();
  puVar1 = (undefined8 *)0x50;
  uStack_48 = extraout_x8;
  __Znwm();
  func_0x000105302f48(auStack_68,param_2);
  func_0x00010002b838(auStack_80,param_3);
  func_0x00010789a8e4(puVar1,auStack_68,auStack_80,param_4);
  *param_1 = puVar1;
  func_0x00010789b0d8();
  puVar2 = auStack_68;
  func_0x0001006393ec();
  func_0x00010789b058(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010789b0d8();
    func_0x0001006393ec(auStack_68);
    __ZdlPv();
    func_0x00010789b100();
    lVar3 = puVar1[1];
    *puVar1 = &PTR_DAT_1109e5ac8;
    puVar1[1] = 0;
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x38) != 0) {
        func_0x00010789a8ac(lVar3);
      }
      __ZNSt3__17promiseIvEC1Ev(auStack_f8);
      func_0x00010789ad44(lVar3 + 0x30);
      uVar4 = *(undefined8 *)(lVar3 + 0x48);
      func_0x000107898fb8(&puStack_f0);
      *(undefined1 *)puStack_f0 = 0;
      puVar2 = (undefined8 *)0x80;
      __Znwm();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_DAT_1109e5b48;
      puStack_e0 = puStack_f0;
      puStack_d8 = (undefined8 *)lStack_e8;
      if (lStack_e8 != 0) {
        do {
          func_0x00010789b090();
        } while (extraout_w10 != 0);
      }
      puVar2[3] = &PTR_DAT_1109e5b98;
      __ZNSt3__115recursive_mutexC1Ev(puVar2 + 4);
      puVar2[0xc] = puStack_f0;
      puVar2[0xd] = lStack_e8;
      puStack_e0 = (undefined8 *)0x0;
      puStack_d8 = (undefined8 *)0x0;
      puVar2[0xe] = auStack_f8;
      func_0x00010789b0d0();
      puStack_e0 = puVar2 + 3;
      puStack_d8 = puVar2;
      func_0x00010789b0c0();
      func_0x00010789895c(uVar4,0,&puStack_e0);
      func_0x00010789b0c8();
      __ZNSt3__17promiseIvE10get_futureEv(&puStack_e0,auStack_f8);
      __ZNSt3__16futureIvE3getEv(&puStack_e0);
      __ZNSt3__16futureIvED1Ev(&puStack_e0);
      func_0x00010789846c(*(undefined8 *)(lVar3 + 0x48));
      __ZNSt3__16thread4joinEv(lVar3 + 0x28);
      __ZNSt3__17promiseIvED1Ev(auStack_f8);
      func_0x00010787b3fc(lVar3 + 0x40);
      func_0x00010787b3fc((long *)(lVar3 + 0x38));
      __ZNSt3__16futureIvED1Ev(lVar3 + 0x30);
      __ZNSt3__16threadD1Ev(lVar3 + 0x28);
      func_0x00010724b54c(lVar3);
      __ZdlPv();
    }
    return puVar1;
  }
  return puVar2;
}



/* Entry: 10789a8a4; end: 10789a8ab;  */

/* WARNING: Possible PIC construction at 0x00010789a8cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789a8d0) */

void FUN_10789a8a4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 8) + 0x40);
  __ZNSt3__17promiseIvE9set_valueEv(*plVar2);
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      __ZNSt3__17promiseIvED1Ev(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10789ad64; end: 10789ad6f;  */

void FUN_10789ad64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010789b0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10789ae98; end: 10789aebf;  */

void FUN_10789ae98(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010789aebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20,param_1 + 0x58);
  return;
}



/* Entry: 10789affc; end: 10789b047;  */

void FUN_10789affc(void)

{
  func_0x00010789b07c();
  func_0x00010789b114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
  return;
}



/* Entry: 10789b370; end: 10789b5df;  */

/* WARNING: Possible PIC construction at 0x00010789b830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010789b8b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010789b518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789b8bc) */
/* WARNING: Removing unreachable block (ram,0x00010789b834) */
/* WARNING: Removing unreachable block (ram,0x00010789b51c) */

long * FUN_10789b370(long *param_1,long param_2,undefined8 ***param_3,undefined8 *param_4,
                    long param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 **ppuVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 ***pppuVar9;
  long lVar10;
  undefined8 extraout_x8;
  char *pcVar11;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 ***pppuVar14;
  undefined8 **unaff_x23;
  undefined8 **unaff_x24;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_cf8;
  long lStack_cf0;
  long lStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  long alStack_cd0 [2];
  undefined1 auStack_cc0 [32];
  long lStack_ca0;
  long lStack_c98;
  long lStack_c90;
  long alStack_c48 [3];
  undefined8 uStack_c30;
  long alStack_c28 [63];
  undefined1 auStack_a30 [128];
  undefined1 auStack_9b0 [32];
  undefined8 uStack_990;
  long lStack_988;
  undefined8 *puStack_980;
  undefined8 uStack_978;
  undefined8 uStack_6d8;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long lStack_670;
  undefined8 uStack_668;
  undefined1 auStack_660 [136];
  undefined1 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  long lStack_5c0;
  long *plStack_5b8;
  undefined1 auStack_5b0 [24];
  undefined8 *puStack_598;
  undefined1 auStack_590 [32];
  undefined4 uStack_570;
  undefined1 auStack_568 [24];
  undefined1 *puStack_550;
  undefined8 uStack_548;
  undefined8 *puStack_540;
  long *plStack_538;
  undefined8 **ppuStack_528;
  long *plStack_520;
  undefined8 *puStack_518;
  undefined1 *puStack_510;
  undefined *puStack_508;
  long lStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e0;
  long lStack_4d8;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long alStack_4a8 [2];
  undefined1 auStack_498 [504];
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 **ppuStack_278;
  undefined8 uStack_270;
  undefined8 uStack_58;
  
  plVar7 = &lStack_500;
  pppuVar9 = param_3;
  func_0x00010789e4ec();
  uStack_58 = extraout_x8;
  func_0x0001072fc5ec(&lStack_4c8,param_4);
  uStack_4e0 = 0;
  lStack_4d8 = 0;
  pcVar11 = *(char **)(param_2 + 8);
  lStack_500 = lStack_4c8;
  puVar12 = *(undefined8 **)(lStack_4c8 + 0x48);
  uVar17 = puVar12[1];
  uVar16 = *puVar12;
  if (puVar12[1] != 0) {
    plVar13 = (long *)(puVar12[1] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = *plVar13 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar12 = (undefined8 *)((ulong)&lStack_500 | 8);
  uVar4 = *pcVar11 == '\x01';
  pppuVar14 = param_3;
  uStack_4f8 = uVar16;
  uStack_4f0 = uVar17;
  if ((bool)uVar4) {
    if (*(long *)(pcVar11 + 8) != 0) {
      puStack_4c0 = (undefined8 *)(*(long *)(pcVar11 + 8) + 0x10);
      unaff_x23 = &puStack_4c0;
      func_0x00010789e5b0();
      uStack_4b8 = uVar16;
      uStack_4b0 = uVar17;
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010789e4dc();
        } while (extraout_w10 != 0);
      }
      func_0x00010724bb70(alStack_4a8,&uStack_4b8);
      puVar5 = puStack_4c0;
      if (alStack_4a8[0] != 0) {
        func_0x0001072d488c(auStack_498,param_3);
        uStack_298 = uStack_4f8;
        lStack_2a0 = lStack_500;
        uStack_290 = uStack_4f0;
        *puVar12 = 0;
        puVar12[1] = 0;
        lStack_280 = lStack_4d8;
        uStack_288 = uStack_4e0;
        if (lStack_4d8 != 0) {
          do {
            func_0x00010789e4dc();
          } while (extraout_w10_00 != 0);
        }
        param_3 = (undefined8 ***)0x240;
        __Znwm();
        func_0x00010789dc28(&ppuStack_278,auStack_498);
        *param_3 = (undefined8 **)&PTR_DAT_1109e5fc8;
        param_3[1] = (undefined8 **)puVar5;
        param_3[2] = (undefined8 **)&SUB_10789b5e0;
        param_3[3] = (undefined8 **)0x0;
        func_0x00010789dc28(param_3 + 4,&ppuStack_278);
        func_0x00010789dd18(&ppuStack_278);
        ppuStack_278 = param_3;
        func_0x00010789dd18(auStack_498);
        pppuVar9 = &ppuStack_278;
        func_0x0001073ae140(alStack_4a8[0]);
        ppuVar3 = ppuStack_278;
        ppuStack_278 = (undefined8 **)0x0;
        unaff_x24 = (undefined8 **)puVar5;
        if ((undefined8 ***)ppuVar3 != (undefined8 ***)0x0) {
          func_0x00010789e4d0();
        }
      }
      func_0x00010724bcd8(alStack_4a8);
      func_0x00010789e5ec();
      pppuVar14 = param_3;
    }
LAB_10789b524:
    func_0x00010724ae28(puVar12);
    lVar10 = lStack_4c8;
    lStack_4c8 = 0;
    *param_1 = lVar10;
    func_0x000107279270(&uStack_4e0);
    param_1 = &lStack_4c8;
    func_0x0001072fbe0c();
    func_0x00010789e4bc(uStack_58);
    if ((bool)uVar4) {
      return param_1;
    }
    ___stack_chk_fail();
    ppuVar3 = ppuStack_278;
    ppuStack_278 = (undefined8 **)0x0;
    param_3 = pppuVar9;
    plVar7 = param_4;
    if (ppuVar3 != (undefined8 **)0x0) {
      func_0x00010789e4d0();
      param_3 = pppuVar9;
      plVar7 = param_4;
    }
    func_0x00010724bcd8(alStack_4a8);
    func_0x00010789e5ec();
    func_0x00010724ae28(puVar12);
    func_0x000107279270(&uStack_4e0);
    plVar13 = &lStack_4c8;
    func_0x0001072fbe0c();
    puVar15 = &SUB_10789b5e0;
    func_0x00010789e5a8();
    ppuStack_528 = pppuVar14;
  }
  else {
    plVar13 = *(long **)(pcVar11 + 0x10);
    if (plVar13 == (long *)0x0) goto LAB_10789b524;
    uStack_270 = 0;
    ppuStack_278 = (undefined8 **)0x0;
    puVar15 = (undefined *)0x10789b51c;
    ppuStack_528 = param_3;
  }
  puVar5 = &uStack_680;
  plVar8 = plVar13;
  puStack_540 = unaff_x24;
  plStack_538 = (long *)unaff_x23;
  plStack_520 = param_1;
  puStack_518 = puVar12;
  puStack_510 = &stack0xfffffffffffffff0;
  puStack_508 = puVar15;
  func_0x00010789e4ec();
  uStack_548 = extraout_x8_01;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar17 = plVar7[1];
  uVar16 = *plVar7;
  lStack_5c0 = plVar7[2];
  uStack_5d0 = uVar16;
  uStack_5c8 = uVar17;
  if (lStack_5c0 != 0) {
    do {
      func_0x00010789e4dc();
    } while (extraout_w10_01 != 0);
  }
  uVar4 = *(char *)(param_3 + 0x2d) == '\x01';
  plStack_5b8 = plVar8;
  if ((bool)uVar4) {
    auStack_660[0] = 0;
    uStack_5d8 = 0;
    param_3 = (undefined8 ***)auStack_660;
    func_0x00010789c9fc(&uStack_5d0);
    func_0x000107318368(auStack_660);
  }
  else {
    func_0x00010789ce14(&uStack_680,&uStack_5d0);
    puStack_598 = (undefined8 *)0x0;
    func_0x00010789e820();
    *puVar5 = &PTR_DAT_1109e5e18;
    puVar5[2] = uStack_678;
    puVar5[1] = uStack_680;
    puVar5[3] = lStack_670;
    uVar16 = uStack_680;
    uVar17 = uStack_678;
    if (lStack_670 != 0) {
      do {
        func_0x00010789e4dc();
      } while (extraout_w10_02 != 0);
    }
    puVar5[4] = uStack_668;
    plVar13 = (long *)*plVar13;
    puVar6 = auStack_590;
    puStack_598 = puVar5;
    func_0x0001073181d0(puVar6,auStack_5b0);
    uStack_570 = 0;
    puStack_550 = (undefined1 *)0x0;
    func_0x00010789e6e4();
    func_0x00010789e744();
    func_0x0001073181d0();
    *(undefined4 *)(puVar6 + 0x28) = uStack_570;
    puStack_550 = puVar6;
    (**(code **)(*plVar13 + 0xc0))(plVar13,param_3,auStack_568);
    func_0x000107319d0c(auStack_568);
    func_0x000107319d0c(auStack_590);
    func_0x000107319d0c(auStack_5b0);
    func_0x00010724ae28((ulong)&uStack_680 | 8);
  }
  plVar7 = (long *)((ulong)&uStack_5d0 | 8);
  func_0x00010724ae28();
  func_0x00010789e4bc(uStack_548);
  if ((bool)uVar4) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x000107319d0c(auStack_568);
  func_0x000107319d0c(auStack_590);
  func_0x000107319d0c(auStack_5b0);
  func_0x00010724ae28((ulong)&uStack_680 | 8);
  plVar8 = (long *)((ulong)&uStack_5d0 | 8);
  func_0x00010724ae28();
  func_0x00010789e550();
  func_0x00010789e4ec();
  uStack_6d8 = extraout_x8_02;
  if (((ulong)param_3[0x2d] & 1) == 0) {
    lVar10 = param_5;
    func_0x00010789e754();
    uStack_c30 = 0;
    if (*(long *)(lVar10 + 0x18) != 0) {
      func_0x0001073af260();
      func_0x000105302f48(auStack_cc0,param_5);
      lStack_c98 = plVar8[4];
      lStack_ca0 = plVar8[3];
      if (plVar8[4] != 0) {
        do {
          func_0x00010789e4dc();
        } while (extraout_w10_03 != 0);
      }
      lStack_c90 = plVar8[5];
      lStack_ce8 = 0;
      uStack_ce0 = 0;
      alStack_c28[0] = 0;
      alStack_c28[1] = 0;
      plVar8 = alStack_c28;
      goto code_r0x00010725b1d4;
    }
    uStack_cf8 = 0;
    lStack_cf0 = 0;
    pcVar11 = (char *)plVar8[1];
    uVar4 = *pcVar11 == '\x01';
    if ((bool)uVar4) {
      if (*(long *)(pcVar11 + 8) != 0) {
        lStack_ce8 = *(long *)(pcVar11 + 8) + 0x10;
        func_0x00010789e5b0();
        uStack_ce0 = uVar16;
        uStack_cd8 = uVar17;
        if (extraout_x8_03 != 0) {
          do {
            func_0x00010789e4dc();
          } while (extraout_w10_04 != 0);
        }
        func_0x00010724bb70(alStack_cd0,&uStack_ce0);
        lVar10 = lStack_ce8;
        if (alStack_cd0[0] != 0) {
          func_0x0001072d488c(alStack_c28,plVar13);
          func_0x0001075281c8(auStack_a30,plVar7);
          func_0x000105302f48(auStack_9b0,alStack_c48);
          uStack_990 = uStack_cf8;
          lStack_988 = lStack_cf0;
          if (lStack_cf0 != 0) {
            do {
              func_0x00010789e4dc();
            } while (extraout_w10_05 != 0);
          }
          puVar12 = (undefined8 *)0x2c8;
          __Znwm();
          func_0x00010789df50(&puStack_980,alStack_c28);
          *puVar12 = &PTR_DAT_1109e6088;
          puVar12[1] = lVar10;
          puVar12[2] = &UNK_10789bb14;
          puVar12[3] = 0;
          func_0x00010789df50(puVar12 + 4,&puStack_980);
          func_0x00010789e050(&puStack_980);
          puStack_980 = puVar12;
          func_0x00010789e050(alStack_c28);
          func_0x00010789e624();
          puVar12 = puStack_980;
          puStack_980 = (undefined8 *)0x0;
          if (puVar12 != (undefined8 *)0x0) {
            func_0x00010789e4d0();
          }
        }
        func_0x00010724bcd8(alStack_cd0);
        func_0x00010789e598();
      }
    }
    else if (*(long *)(pcVar11 + 0x10) != 0) {
      uStack_978 = 0;
      puStack_980 = (undefined8 *)0x0;
      func_0x00010789e828();
      func_0x00010789bb14();
      func_0x000107279270(&puStack_980);
    }
    func_0x000107279270(&uStack_cf8);
    plVar8 = alStack_c48;
    func_0x0001006393ec();
  }
  func_0x00010789e4bc(uStack_6d8);
  if ((bool)uVar4) {
    return plVar8;
  }
  ___stack_chk_fail();
  puVar12 = puStack_980;
  puStack_980 = (undefined8 *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    func_0x00010789e4d0();
  }
  func_0x00010724bcd8(alStack_cd0);
  func_0x00010789e598();
  func_0x000107279270(&uStack_cf8);
  func_0x0001006393ec(alStack_c48);
  func_0x00010789e550();
  func_0x00010789e808();
  plVar7 = plVar8;
code_r0x00010725b1d4:
  func_0x00010725c0a0();
  if (plVar8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return plVar7;
}



/* Entry: 10789bd84; end: 10789beff;  */

void FUN_10789bd84(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  long extraout_x8_00;
  int extraout_w10;
  long alStack_98 [2];
  undefined8 auStack_88 [4];
  undefined8 *apuStack_68 [4];
  undefined8 uStack_48;
  
  func_0x00010789e4ec();
  uVar1 = *param_1 == '\x01';
  uStack_48 = extraout_x8;
  if ((bool)uVar1) {
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != 0) {
      func_0x00010789e5b0();
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010789e4dc();
        } while (extraout_w10 != 0);
      }
      func_0x00010724bb70(alStack_98);
      if (alStack_98[0] != 0) {
        puVar2 = auStack_88;
        func_0x00010740f0c4(puVar2,param_4);
        func_0x00010789e778();
        func_0x00010740f0c4(apuStack_68,auStack_88);
        *puVar2 = &PTR_DAT_1109e6108;
        puVar2[1] = lVar3 + 0x10;
        puVar2[2] = UNRECOVERED_JUMPTABLE;
        puVar2[3] = param_3;
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
  else if (*(long *)(param_1 + 0x10) != 0) {
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(*(long *)(*(long *)(param_1 + 0x10) + ((long)param_3 >> 1)) +
                     ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
    func_0x00010789e4bc(extraout_x8);
    if ((bool)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010789beb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    goto LAB_10789becc;
  }
  func_0x00010789e4bc(uStack_48);
  if ((bool)uVar1) {
    return;
  }
LAB_10789becc:
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



/* Entry: 10789c220; end: 10789c397;  */

void FUN_10789c220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  long unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 auStack_4b0 [3];
  long lStack_498;
  undefined1 auStack_488 [536];
  undefined8 *apuStack_270 [67];
  undefined8 uStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010789e4ec();
  uStack_58 = extraout_x8;
  func_0x00010789e558();
  if ((bool)in_ZR) {
    if (*(long *)(extraout_x8_00 + 8) != 0) {
      func_0x00010789e568();
      if (extraout_x8_01 != 0) {
        do {
          func_0x00010789e4dc();
        } while (extraout_w10 != 0);
      }
      func_0x00010789e5e0();
      if (lStack_498 != 0) {
        func_0x00010789e684();
        func_0x00010724cbe8(unaff_x24 + 0x1f8,param_3);
        puVar2 = (undefined8 *)0x238;
        __Znwm();
        func_0x00010789e370(apuStack_270,auStack_488);
        *puVar2 = &PTR_DAT_1109e61c8;
        puVar2[1] = auStack_4b0[0];
        puVar2[2] = &LAB_10789c398;
        puVar2[3] = 0;
        func_0x00010789e370(puVar2 + 4,apuStack_270);
        func_0x00010789e408(apuStack_270);
        apuStack_270[0] = puVar2;
        func_0x00010789e408(auStack_488);
        func_0x00010789e7cc();
        puVar2 = apuStack_270[0];
        apuStack_270[0] = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
          func_0x00010789e4d0();
        }
      }
      func_0x00010789e5cc();
      func_0x00010789e598();
    }
LAB_10789c33c:
    func_0x00010789e4bc(uStack_58);
    if ((bool)in_ZR) {
      return;
    }
  }
  else {
    puVar2 = *(undefined8 **)(extraout_x8_00 + 0x10);
    if (puVar2 == (undefined8 *)0x0) goto LAB_10789c33c;
    func_0x00010789e4bc(uStack_58);
    if ((bool)in_ZR) goto code_r0x00010789c398;
  }
  ___stack_chk_fail();
  puVar2 = apuStack_270[0];
  apuStack_270[0] = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010789e4d0();
  }
  func_0x00010789e5cc();
  func_0x00010789e598();
  unaff_x30 = &LAB_10789c398;
  func_0x00010789e550();
  register0x00000008 = (BADSPACEBASE *)auStack_4b0;
  unaff_x29 = puVar1;
code_r0x00010789c398:
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  (**(code **)(*(long *)*puVar2 + 0x18))((undefined1 *)((long)register0x00000008 + -0x18));
  func_0x00010789e584();
  return;
}



/* Entry: 10789c5ac; end: 10789c707;  */

void FUN_10789c5ac(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 auStack_c0 [3];
  long lStack_a8;
  undefined1 auStack_90 [32];
  undefined8 *puStack_70;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010789e754();
  func_0x00010789e4ec();
  uStack_48 = extraout_x8;
  func_0x00010789e558();
  if ((bool)in_ZR) {
    if (*(long *)(extraout_x8_00 + 8) != 0) {
      func_0x00010789e568();
      if (extraout_x8_01 != 0) {
        do {
          func_0x00010789e4dc();
        } while (extraout_w10 != 0);
      }
      func_0x00010789e5e0();
      if (lStack_a8 != 0) {
        unaff_x20 = &stack0xffffffffffffff68;
        func_0x00010740f0c4(auStack_90);
        puVar2 = (undefined8 *)0x48;
        __Znwm();
        func_0x00010789e42c(&puStack_70,&stack0xffffffffffffff68);
        *puVar2 = &PTR_DAT_1109e6208;
        puVar2[1] = auStack_c0[0];
        puVar2[2] = &LAB_10789c708;
        puVar2[3] = 0;
        func_0x00010789e42c(puVar2 + 4,&puStack_70);
        func_0x00010724bfc0(auStack_68);
        puStack_70 = puVar2;
        func_0x00010724bfc0(auStack_90);
        func_0x00010789e624();
        param_1 = puStack_70;
        puStack_70 = (undefined8 *)0x0;
        if (param_1 != (undefined8 *)0x0) {
          func_0x00010789e4d0();
        }
      }
      func_0x00010789e5cc();
      func_0x00010789e598();
    }
LAB_10789c6c0:
    func_0x00010789e4bc(uStack_48);
    puVar2 = param_1;
    if ((bool)in_ZR) {
      return;
    }
  }
  else {
    param_1 = *(undefined8 **)(extraout_x8_00 + 0x10);
    if (param_1 == (undefined8 *)0x0) goto LAB_10789c6c0;
    func_0x00010789e4bc(uStack_48);
    puVar2 = param_1;
    if ((bool)in_ZR) {
      func_0x00010789e828();
      goto code_r0x00010789c708;
    }
  }
  ___stack_chk_fail();
  param_1 = puStack_70;
  puStack_70 = (undefined8 *)0x0;
  if (param_1 != (undefined8 *)0x0) {
    func_0x00010789e4d0();
  }
  func_0x00010789e5cc();
  func_0x00010789e598();
  unaff_x30 = &LAB_10789c708;
  func_0x00010789e550();
  register0x00000008 = (BADSPACEBASE *)auStack_c0;
  unaff_x19 = puVar2;
  unaff_x29 = puVar1;
code_r0x00010789c708:
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  (**(code **)(*(long *)*param_1 + 0x38))((undefined1 *)((long)register0x00000008 + -0x28));
  func_0x00010789e544();
  func_0x00010789e584();
  return;
}



/* Entry: 10789cbc4; end: 10789cc17;  */

bool FUN_10789cbc4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    if (*(char *)(param_1 + 0x48) == '\x01') {
      lVar2 = param_1;
      func_0x00010789a00c();
      bVar1 = lVar2 < *(long *)(param_1 + 0x40);
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
  return true;
}



/* Entry: 10789cd88; end: 10789cdb3;  */

void FUN_10789cd88(undefined8 param_1,undefined8 param_2)

{
  func_0x00010789e7d4(param_2,param_1,&PTR_DAT_1109e5df8);
  func_0x00010789e734();
  return;
}



/* Entry: 10789cee8; end: 10789cf13;  */

void FUN_10789cee8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010789e7d4(param_2,param_1,&PTR_DAT_1109e5e78);
  func_0x00010789e734();
  return;
}



/* Entry: 10789d0e8; end: 10789d10b;  */

long FUN_10789d0e8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  param_2 = (undefined8 *)*param_2;
  lVar6 = *(long *)*param_1;
  uVar3 = ((long *)*param_1)[1];
  uVar5 = (ulong)*(char *)((long)param_2 + 0x17);
  if ((long)uVar5 < 0) {
    uVar5 = param_2[1];
    param_2 = (undefined8 *)*param_2;
  }
  uVar1 = uVar5;
  if (*(ulong *)param_1[1] <= uVar5) {
    uVar1 = *(ulong *)param_1[1];
  }
  uVar2 = uVar1 + uVar3;
  if (uVar5 - uVar1 <= uVar3) {
    uVar2 = uVar5;
  }
  puVar4 = param_2;
  func_0x00010067f328(param_2,(undefined8 *)((long)param_2 + uVar2),lVar6,lVar6 + uVar3,
                      &UNK_10067f248);
  lVar6 = (long)puVar4 - (long)param_2;
  if (puVar4 == (undefined8 *)((long)param_2 + uVar2) && uVar3 != 0) {
    lVar6 = -1;
  }
  return lVar6;
}



/* Entry: 10789d268; end: 10789d27f;  */

void FUN_10789d268(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010789e860(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10789d370; end: 10789d3b7;  */

undefined8 FUN_10789d370(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010724bd50(param_1 + 0x10);
  func_0x0001072afb28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10789d5ac; end: 10789d5eb;  */

void FUN_10789d5ac(void)

{
  long unaff_x19;
  
  func_0x00010789e58c();
  if ((**(byte **)(unaff_x19 + 0x48) & 1) == 0) {
    __ZNSt3__17promiseIvE9set_valueEv(*(undefined8 *)(unaff_x19 + 0x58));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 8);
  return;
}



/* Entry: 10789db88; end: 10789dc6f;  */

long * FUN_10789db88(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010789dbc4(lVar1 + 8);
    func_0x0001004895c8(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10789dde0; end: 10789deab;  */

void FUN_10789dde0(long param_1)

{
  long lVar1;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  func_0x00010726fc00(&plStack_30,param_1 + 8);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uStack_48 = uStack_28;
    plStack_50 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      goto LAB_10789de4c;
    }
    func_0x00010726fc88();
  }
  func_0x00010789e654();
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
  plStack_30 = (long *)0x0;
  uStack_28 = 0;
LAB_10789de4c:
  func_0x00010789e654();
  func_0x00010726fc00(&plStack_30,param_1 + 8);
  if (plStack_30 == (long *)0x0) {
    func_0x00010789e654();
  }
  else {
    lVar1 = *plStack_30;
    func_0x00010789e654();
    if (lVar1 != -1) {
      func_0x000104c003e8(param_1 + 0x20);
    }
  }
  func_0x000107270b00(&plStack_50);
  return;
}



/* Entry: 10789e024; end: 10789e083;  */

undefined8 * FUN_10789e024(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e6088;
  func_0x00010789e050(param_1 + 4);
  return param_1;
}



/* Entry: 10789e1dc; end: 10789e1ef;  */

void FUN_10789e1dc(void)

{
  func_0x00010789e214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789e2fc; end: 10789e31f;  */

void FUN_10789e2fc(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010789e6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20,param_1 + 0x218);
  return;
}



/* Entry: 10789e46c; end: 10789e48f;  */

void FUN_10789e46c(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010789e6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*(undefined8 *)(param_1 + 0x20),param_1 + 0x28);
  return;
}



/* Entry: 10789e9a8; end: 10789e9bb;  */

void FUN_10789e9a8(void)

{
  func_0x000107525914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789eaa8; end: 10789eac3;  */

void FUN_10789eaa8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109e6310;
  return;
}



/* Entry: 10789ecf8; end: 10789ed97;  */

undefined ** FUN_10789ecf8(void)

{
  return &PTR_DAT_1109e63f0;
}



/* Entry: 10789ef44; end: 10789f163;  */

void FUN_10789ef44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [31];
  undefined1 uStack_e9;
  undefined8 uStack_e8;
  int aiStack_e0 [6];
  byte bStack_c8;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined7 uStack_b0;
  undefined4 uStack_a9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4c;
  undefined8 uStack_48;
  
  lVar2 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  auStack_c0[0] = 3;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_b0 = 0;
  uStack_a9 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  lVar3 = lVar2;
  func_0x00010789f280();
  uStack_90 = 0;
  _opendir();
  piVar4 = (int *)0x0;
  if (lVar3 != 0) {
    _closedir();
    func_0x00010789f26c();
    func_0x00010789f25c();
    piVar4 = aiStack_e0;
    func_0x0001072d6f8c();
  }
  if (CONCAT17((undefined1)uStack_a9,uStack_b0) == 0) {
    func_0x00010789f280();
    _fopen();
    if (piVar4 == (int *)0x0) {
      ___error();
      if (*piVar4 == 2) {
        func_0x00010789f26c();
      }
      else {
        func_0x00010789f164(aiStack_e0,6);
      }
      func_0x00010789f25c();
      piVar4 = aiStack_e0;
      func_0x0001072d6f8c();
    }
    else {
      _fclose();
    }
    if (CONCAT17((undefined1)uStack_a9,uStack_b0) == 0) {
      func_0x000107875bb4(aiStack_e0,param_1);
      if ((bStack_c8 & 1) == 0) {
        uStack_e9 = 6;
        func_0x00010002b838(auStack_120,&UNK_10f432968);
        func_0x000100610910(auStack_108,auStack_120,param_1);
        func_0x00010789f1e4(&uStack_e8,&uStack_e9,auStack_108);
        uVar1 = uStack_e8;
        uStack_e8 = 0;
        func_0x00010724b300(&uStack_b0,uVar1);
        func_0x0001072d6f8c(&uStack_e8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
        func_0x00010789f278();
      }
      else {
        func_0x0001072b9f20(auStack_108,aiStack_e0);
        func_0x00010724ac30(&uStack_a0,auStack_108);
        func_0x00010724c894(auStack_108);
      }
      piVar4 = aiStack_e0;
      func_0x0001001148fc();
    }
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_b8 = ((long)piVar4 - lVar2) / 1000;
  func_0x0001072fba20(param_2,&UNK_10789ee64,0,auStack_c0);
  func_0x00010724b340(auStack_c0);
  return;
}



/* Entry: 10789f540; end: 10789f553;  */

void FUN_10789f540(void)

{
  func_0x00010789f398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789fb1c; end: 10789fd33;  */

/* WARNING: Possible PIC construction at 0x00010789fdf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789fdf4) */
/* WARNING: Removing unreachable block (ram,0x00010789fe28) */
/* WARNING: Removing unreachable block (ram,0x00010789fe40) */
/* WARNING: Removing unreachable block (ram,0x00010789fe50) */
/* WARNING: Removing unreachable block (ram,0x00010789fe10) */

long ** FUN_10789fb1c(long **param_1,undefined8 param_2,undefined8 param_3)

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
  long *plVar11;
  long *plStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [240];
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  long **pplStack_e0;
  long **pplStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  long **pplStack_98;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  pplVar5 = param_1;
  func_0x0001078a0154();
  uStack_48 = extraout_x8;
  func_0x00010724b408(pplVar5);
  pplVar5 = param_1 + 3;
  param_1[4] = (long *)0x0;
  *pplVar5 = (long *)0x0;
  param_1[7] = (long *)0x0;
  param_1[6] = (long *)0x0;
  param_1[5] = (long *)0x0;
  __ZNSt3__17promiseIvEC1Ev(&uStack_b0);
  __ZNSt3__17promiseIvE10get_futureEv(&pplStack_98,&uStack_b0);
  func_0x00010787b1b0(param_1 + 4,&pplStack_98);
  __ZNSt3__16futureIvED1Ev(&pplStack_98);
  pplStack_98 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_90,param_3);
  uStack_70 = uStack_b0;
  uStack_b0 = 0;
  func_0x000105302f48(auStack_68,param_2);
  uVar6 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar7 = (undefined8 *)0x58;
  uStack_a0 = uVar6;
  __Znwm();
  uStack_a0 = 0;
  *puVar7 = uVar6;
  puVar7[1] = pplStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar7 + 2,auStack_90);
  puVar7[6] = uStack_70;
  uStack_70 = 0;
  func_0x000105302f48(puVar7 + 7,auStack_68);
  puVar8 = auStack_b8;
  puStack_a8 = puVar7;
  func_0x000100489040(puVar8,&UNK_10789fd34,puVar7);
  if ((int)puVar8 != 0) {
    __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10789fc90);
    (*pcVar4)();
  }
  puStack_a8 = (undefined8 *)0x0;
  func_0x00010789fe88(&puStack_a8);
  func_0x0001004895c8(&uStack_a0);
  func_0x0001004895f4(pplVar5,auStack_b8);
  __ZNSt3__16threadD1Ev(auStack_b8);
  func_0x00010789fec4(&pplStack_98);
  puVar9 = &uStack_b0;
  __ZNSt3__17promiseIvED1Ev();
  func_0x0001078a0140(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001004895c8(puVar7);
  __ZdlPv();
  func_0x0001004895c8(&uStack_a0);
  func_0x00010789fec4(&pplStack_98);
  __ZNSt3__17promiseIvED1Ev(&uStack_b0);
  func_0x00010787b3fc(param_1 + 6);
  func_0x00010787b3fc(param_1 + 5);
  __ZNSt3__16futureIvED1Ev(param_1 + 4);
  __ZNSt3__16threadD1Ev(pplVar5);
  func_0x00010724b54c(param_1);
  puVar10 = puVar9;
  __Unwind_Resume();
  puStack_c8 = &UNK_10789fd34;
  puStack_f0 = puVar7;
  puStack_e8 = puVar9;
  pplStack_e0 = pplVar5;
  pplStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x0001078a0154();
  __ZNSt3__119__thread_local_dataEv();
  *puVar10 = 0;
  func_0x000100491558();
  plVar11 = (long *)puVar10[1];
  func_0x0001078bba88(puVar10 + 2);
  if (puVar10[10] != 0) {
    func_0x000104c003e8(puVar10 + 7);
  }
  func_0x0001078980a4(auStack_1e0);
  plVar11[7] = (long)auStack_1e0;
  plStack_1f8 = plVar11 + 2;
  puVar7 = (undefined8 *)*plVar11;
  uStack_1e8 = puVar7[1];
  uStack_1f0 = *puVar7;
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
  plStack_200 = plVar11;
  func_0x00010724ae28(&uStack_1f0);
  func_0x0001073ada24(*plVar11,auStack_1e0);
  __ZNSt3__17promiseIvE9set_valueEv(puVar10 + 6);
  _CFRunLoopRun();
  plVar11[7] = 0;
  func_0x0001073ada2c(*plStack_200);
  return &plStack_200;
}



/* Entry: 10789ff30; end: 10789ff6f;  */

void FUN_10789ff30(void)

{
  long unaff_x19;
  
  func_0x0001078a0164();
  if ((**(byte **)(unaff_x19 + 0x48) & 1) == 0) {
    __ZNSt3__17promiseIvE9set_valueEv(*(undefined8 *)(unaff_x19 + 0x58));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 8);
  return;
}



/* Entry: 1078a0050; end: 1078a005b;  */

void FUN_1078a0050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078a01d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078a08f0; end: 1078a08fb;  */

undefined1 FUN_1078a08f0(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 8) + 0x58);
}



/* Entry: 1078a1534; end: 1078a1557;  */

void FUN_1078a1534(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x0001078a34a8();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_DAT_1109e66e0;
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  lVar3 = param_1[3];
  puVar1[3] = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x0001078a31ac();
    } while (extraout_w10 != 0);
  }
  puVar1[4] = puVar2[3];
  return;
}



/* Entry: 1078a1758; end: 1078a1783;  */

void FUN_1078a1758(void)

{
  return;
}



/* Entry: 1078a1bf4; end: 1078a1ddf;  */

/* WARNING: Possible PIC construction at 0x0001078a1cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078a1cc0) */

long * FUN_1078a1bf4(long *param_1,long *param_2,long param_3,long *param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lStack_4c0;
  undefined8 *puStack_4b8;
  long lStack_4b0;
  undefined8 *puStack_4a8;
  long lStack_4a0;
  undefined1 auStack_498 [1056];
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  func_0x0001078a320c();
  lVar3 = *param_2;
  plVar1 = *(long **)(lVar3 + 0x30);
  uStack_58 = extraout_x8;
  if (plVar1 != (long *)0x0) {
    func_0x0001078a32f0();
    (*extraout_x8_00)();
    unaff_x20 = param_3;
    if (((ulong)plVar1 & 1) != 0) {
      lVar4 = *param_4;
      lStack_4c0 = lVar4;
      if (lVar4 == 0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        puVar2 = (undefined8 *)0x20;
        __Znwm();
        *puVar2 = &PTR_DAT_1109e6910;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = lVar4;
      }
      *param_4 = 0;
      puStack_4b8 = puVar2;
      lStack_4b0 = lVar4;
      puStack_4a8 = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        do {
          func_0x0001078a31ac();
        } while (extraout_w10 != 0);
      }
      lStack_4a0 = lVar3;
      func_0x0001072d488c(auStack_498,param_3);
      plVar1 = param_1;
      goto code_r0x0001078a1de0;
    }
  }
  lVar3 = *param_4;
  *param_4 = 0;
  *param_1 = lVar3;
  func_0x0001078a3168(uStack_58);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x0001072ad0c8(auStack_78);
  func_0x0001078a28b8(&lStack_4b0);
  func_0x0001078a2694(&lStack_4c0);
  func_0x0001078a323c();
code_r0x0001078a1de0:
  func_0x0001078a345c();
  func_0x0001078a3438();
  lVar3 = *(long *)(unaff_x20 + 0x210);
  plVar1[0x43] = *(long *)(unaff_x20 + 0x218);
  plVar1[0x42] = lVar3;
  return plVar1;
}



/* Entry: 1078a1f04; end: 1078a1f0f;  */

undefined ** FUN_1078a1f04(void)

{
  return &PTR_DAT_1109e6840;
}



/* Entry: 1078a21c4; end: 1078a2203;  */

void FUN_1078a21c4(undefined8 param_1,undefined8 param_2)

{
  undefined1 *unaff_x19;
  
  func_0x0001078a3154();
  func_0x0001078a317c(param_1,param_2,*unaff_x19);
  func_0x0001078a34bc();
  func_0x0001072bbe90();
  func_0x0001078a32dc();
  func_0x0001078a31f0();
  return;
}



/* Entry: 1078a2380; end: 1078a23a3;  */

long FUN_1078a2380(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001078a33d8(&PTR_DAT_1109e6890);
  func_0x0001078a1de0(param_2 + 0x200,param_1 + 0x200);
  uVar1 = *(undefined8 *)(param_1 + 0x420);
  *(undefined8 *)(param_2 + 0x428) = *(undefined8 *)(param_1 + 0x428);
  *(undefined8 *)(param_2 + 0x420) = uVar1;
  func_0x0001078a22e8(param_2 + 0x430,param_1 + 0x430);
  return param_2;
}



/* Entry: 1078a263c; end: 1078a264f;  */

void FUN_1078a263c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a270c; end: 1078a272f;  */

undefined8 * FUN_1078a270c(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109e6970;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001078a31ac();
    } while (extraout_w10 != 0);
  }
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x0001072d488c(param_2 + 4,param_1 + 0x20);
  func_0x0001078a1de0(param_2 + 0x43,param_1 + 0x218);
  return param_2;
}



/* Entry: 1078a2918; end: 1078a292b;  */

void FUN_1078a2918(void)

{
  func_0x0001078a2a0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a2c64; end: 1078a2cc3;  */

long FUN_1078a2c64(long param_1)

{
  func_0x0001078a2c88(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1078a2ed4; end: 1078a3063;  */

void FUN_1078a2ed4(long param_1)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x0001078a2a1c(param_1);
  }
  __ZNSt3__17promiseIvEC1Ev(auStack_78);
  func_0x00010789ad44(param_1 + 0x98);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  func_0x000107898fb8(&puStack_70);
  *(undefined1 *)puStack_70 = 0;
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e6a88;
  puStack_60 = puStack_70;
  puStack_58 = (undefined8 *)lStack_68;
  if (lStack_68 != 0) {
    do {
      func_0x0001078a31ac();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = &PTR_DAT_1109e6ad8;
  __ZNSt3__115recursive_mutexC1Ev(puVar1 + 4);
  puVar1[0xc] = puStack_70;
  puVar1[0xd] = lStack_68;
  puStack_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  puVar1[0xe] = auStack_78;
  func_0x000100688f50(&puStack_60);
  puStack_60 = puVar1 + 3;
  puStack_58 = puVar1;
  func_0x0001078a33c0();
  func_0x00010789895c(uVar2,0,&puStack_60);
  func_0x000107898790(&puStack_60);
  __ZNSt3__17promiseIvE10get_futureEv(&puStack_60,auStack_78);
  __ZNSt3__16futureIvE3getEv(&puStack_60);
  __ZNSt3__16futureIvED1Ev(&puStack_60);
  func_0x00010789846c(*(undefined8 *)(param_1 + 0xb0));
  __ZNSt3__16thread4joinEv(param_1 + 0x90);
  __ZNSt3__17promiseIvED1Ev(auStack_78);
  func_0x00010787b3fc(param_1 + 0xa8);
  func_0x00010787b3fc((long *)(param_1 + 0xa0));
  __ZNSt3__16futureIvED1Ev(param_1 + 0x98);
  __ZNSt3__16threadD1Ev(param_1 + 0x90);
  func_0x00010724b54c(param_1);
  return;
}



/* Entry: 1078a34fc; end: 1078a35af;  */

long * FUN_1078a34fc(long *param_1,long *param_2)

{
  long *plVar1;
  long lStack_28;
  
  *param_1 = 0;
  plVar1 = param_1 + 1;
  *plVar1 = 0;
  param_1[2] = 0;
  param_1[3] = (long)param_2;
  (**(code **)(*param_2 + 200))(param_2,param_1,plVar1,&lStack_28);
  param_1[2] = (*plVar1 - lStack_28) * *param_1;
  return param_1;
}



/* Entry: 1078a3cac; end: 1078a3cff;  */

void FUN_1078a3cac(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1109e6b68)[*(uint *)(param_1 + 8)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



/* Entry: 1078a3fc0; end: 1078a4197;  */

undefined8 * FUN_1078a3fc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int extraout_w10;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  lVar2 = param_1[1];
  *param_1 = &PTR_DAT_1109e6b88;
  param_1[1] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0xf8);
    *(undefined8 *)(lVar2 + 0xf8) = 0;
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x100) != 0) {
        func_0x0001078a63a0(lVar3);
      }
      __ZNSt3__17promiseIvEC1Ev(auStack_78);
      func_0x00010789ad44(lVar3 + 0xf8);
      uVar4 = *(undefined8 *)(lVar3 + 0x110);
      func_0x000107898fb8(&puStack_70);
      *(undefined1 *)puStack_70 = 0;
      puVar1 = (undefined8 *)0x80;
      __Znwm();
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_DAT_1109e71e0;
      puStack_60 = puStack_70;
      puStack_58 = (undefined8 *)lStack_68;
      if (lStack_68 != 0) {
        do {
          func_0x0001078a72dc();
        } while (extraout_w10 != 0);
      }
      puVar1[3] = &PTR_DAT_1109e7230;
      __ZNSt3__115recursive_mutexC1Ev(puVar1 + 4);
      puVar1[0xc] = puStack_70;
      puVar1[0xd] = lStack_68;
      puStack_60 = (undefined8 *)0x0;
      puStack_58 = (undefined8 *)0x0;
      puVar1[0xe] = auStack_78;
      func_0x0001078a73e0();
      puStack_60 = puVar1 + 3;
      puStack_58 = puVar1;
      func_0x0001078a73d0();
      func_0x00010789895c(uVar4,0,&puStack_60);
      func_0x0001078a73d8();
      __ZNSt3__17promiseIvE10get_futureEv(&puStack_60,auStack_78);
      __ZNSt3__16futureIvE3getEv(&puStack_60);
      __ZNSt3__16futureIvED1Ev(&puStack_60);
      func_0x00010789846c(*(undefined8 *)(lVar3 + 0x110));
      __ZNSt3__16thread4joinEv(lVar3 + 0xf0);
      __ZNSt3__17promiseIvED1Ev(auStack_78);
      func_0x00010787b3fc(lVar3 + 0x108);
      func_0x00010787b3fc(lVar3 + 0x100);
      __ZNSt3__16futureIvED1Ev(lVar3 + 0xf8);
      __ZNSt3__16threadD1Ev(lVar3 + 0xf0);
      func_0x00010724b54c(lVar3);
      __ZdlPv();
    }
    __ZNSt3__15mutexD1Ev(lVar2 + 0xb0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar2 + 0x98);
    __ZNSt3__15mutexD1Ev(lVar2 + 0x58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar2 + 0x40);
    __ZNSt3__15mutexD1Ev(lVar2);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078a4854; end: 1078a485f;  */

/* WARNING: Possible PIC construction at 0x0001078a63c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078a63c4) */

void FUN_1078a4854(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0xf8);
  __ZNSt3__17promiseIvE9set_valueEv(*(undefined8 *)(lVar2 + 0x108));
  plVar1 = (long *)(lVar2 + 0x108);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    if (lVar2 != 0) {
      __ZNSt3__17promiseIvED1Ev(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078a4f60; end: 1078a4f7b;  */

void FUN_1078a4f60(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_1109e6c08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078a5154; end: 1078a517b;  */

void FUN_1078a5154(undefined8 param_1)

{
  func_0x0001078a738c();
  func_0x0001078a735c(param_1,&PTR_DAT_1109e6cf8);
  func_0x0001078a72f4();
  return;
}



/* Entry: 1078a5320; end: 1078a572b;  */

undefined8 * FUN_1078a5320(long param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 in_ZR;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 extraout_x8;
  undefined8 *puVar10;
  ulong uVar11;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long *plStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  long *plStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined1 uStack_2f8;
  undefined1 *puStack_2f0;
  long lStack_2e8;
  undefined1 *puStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined1 auStack_2b8 [24];
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [63];
  long lStack_a0;
  long lStack_98;
  undefined8 *puStack_88;
  undefined8 uStack_78;
  
  func_0x0001078a72c0();
  uStack_348 = param_4[1];
  uStack_350 = *param_4;
  lStack_340 = param_4[2];
  uStack_78 = extraout_x8;
  if (lStack_340 != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10 != 0);
  }
  plVar6 = (long *)0x288;
  __Znwm();
  puVar10 = auStack_298;
  func_0x0001072d62a0(puVar10,param_3);
  lVar12 = lStack_340;
  uVar2 = uStack_348;
  uVar15 = uStack_350;
  uStack_330 = uStack_350;
  uStack_328 = uStack_348;
  lStack_320 = lStack_340;
  if (lStack_340 != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10_00 != 0);
  }
  puStack_2a0 = (undefined8 *)0x0;
  func_0x0001078a7398();
  *puVar10 = &PTR_DAT_1109e6e98;
  puVar10[1] = uVar15;
  puVar10[2] = uVar2;
  puVar10[3] = lVar12;
  if (lVar12 != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10_01 != 0);
  }
  *plVar6 = param_1;
  puStack_2a0 = puVar10;
  func_0x0001072d62a0(plVar6 + 1,auStack_298);
  plVar6[0x41] = 0;
  plVar6[0x40] = 0;
  func_0x0001072fbe64(plVar6 + 0x42,auStack_2b8);
  plVar6[0x4a] = 0;
  plVar6[0x49] = 0;
  plVar6[0x4c] = 0;
  plVar6[0x4b] = 0;
  *(undefined1 *)(plVar6 + 0x4d) = 1;
  *(undefined1 *)(plVar6 + 0x4e) = 0;
  *(undefined1 *)(plVar6 + 0x4f) = 0;
  plVar6[0x50] = 0;
  lVar12 = *plVar6;
  plVar9 = plVar6;
  func_0x0001078a4df0(lVar12 + 0x28);
  if (*(long *)(lVar12 + 0x18) == 0) {
    func_0x0001078a3da8(plVar6);
  }
  else {
    bVar5 = *(int *)(lVar12 + 0x20) == 1;
    plStack_318 = (long *)CONCAT71(plStack_318._1_7_,1);
    in_ZR = bVar5;
    func_0x0001078a4e94(&puStack_2e0,&plStack_318);
    lVar1 = plVar6[1];
    plVar7 = plVar6 + 2;
    func_0x000107264c5c();
    puVar10 = (undefined8 *)plVar6[0x4a];
    plStack_318 = plVar6;
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0001073af260();
      func_0x00010725b034(&lStack_2d0);
      lVar4 = lStack_2c8;
      lVar16 = lStack_2d0;
      lStack_2d0 = 0;
      lStack_2c8 = 0;
      lStack_98 = plVar6[0x4b];
      lStack_a0 = plVar6[0x4a];
      plVar6[0x4b] = lVar4;
      plVar6[0x4a] = lVar16;
      func_0x00010724b54c(&lStack_a0);
      func_0x00010724b54c(&lStack_2d0);
      puVar10 = (undefined8 *)plVar6[0x4a];
    }
    uVar15 = *puVar10;
    lVar16 = puVar10[1];
    plStack_310 = plVar6;
    uStack_308 = uVar15;
    lStack_300 = lVar16;
    if (lVar16 != 0) {
      do {
        func_0x0001078a72dc();
      } while (extraout_w10_02 != 0);
    }
    puVar3 = puStack_2e0;
    puStack_2f0 = puStack_2e0;
    lStack_2e8 = lStack_2d8;
    uStack_2f8 = bVar5;
    if (lStack_2d8 != 0) {
      do {
        func_0x0001078a72dc();
      } while (extraout_w10_03 != 0);
    }
    puStack_88 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x40;
    __Znwm();
    *puVar10 = &PTR_DAT_1109e6c58;
    puVar10[1] = plVar6;
    puVar10[2] = plVar6;
    puVar10[3] = uVar15;
    puVar10[4] = lVar16;
    uStack_308 = 0;
    lStack_300 = 0;
    *(bool *)(puVar10 + 5) = bVar5;
    puVar10[6] = puVar3;
    puVar10[7] = lStack_2d8;
    puStack_2f0 = (undefined1 *)0x0;
    lStack_2e8 = 0;
    puStack_88 = puVar10;
    func_0x0001075280c4(lVar12,(char)lVar1,plVar7,plVar9,&lStack_a0);
    func_0x00010724b884(&lStack_a0);
    func_0x0001078a5284(&plStack_318);
    *puStack_2e0 = 0;
    func_0x0001078a52b0(&puStack_2e0);
  }
  plStack_358 = plVar6;
  func_0x0001072ad0c8(auStack_2b8);
  func_0x00010724ae28(&uStack_328);
  func_0x00010724b374(auStack_298);
  puVar13 = (undefined8 *)(param_1 + 0xd0);
  puVar10 = (undefined8 *)*puVar13;
  puVar14 = puVar13;
  if ((undefined8 *)*puVar13 != (undefined8 *)0x0) {
    do {
      while( true ) {
        puVar8 = puVar10;
        uVar11 = puVar8[4];
        in_ZR = param_2 == uVar11;
        puVar13 = puVar8;
        if (uVar11 <= param_2) break;
        puVar10 = (undefined8 *)*puVar8;
        puVar14 = puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) goto LAB_1078a55e0;
      }
      in_ZR = uVar11 == param_2;
      if (param_2 <= uVar11) goto LAB_1078a562c;
      puVar10 = (undefined8 *)puVar8[1];
    } while ((undefined8 *)puVar8[1] != (undefined8 *)0x0);
    puVar14 = puVar8 + 1;
  }
LAB_1078a55e0:
  puVar8 = (undefined8 *)0x30;
  __Znwm();
  puVar8[4] = param_2;
  puVar8[5] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = puVar13;
  *puVar14 = puVar8;
  if (**(long **)(param_1 + 200) != 0) {
    *(long *)(param_1 + 200) = **(long **)(param_1 + 200);
  }
  func_0x00010002c5b0(*(undefined8 *)(param_1 + 0xd0),puVar8);
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
LAB_1078a562c:
  plStack_358 = (long *)0x0;
  func_0x0001078a5fe0(puVar8 + 5,plVar6);
  func_0x0001078a5fbc(&plStack_358);
  puVar10 = (undefined8 *)((ulong)&uStack_350 | 8);
  func_0x00010724ae28();
  func_0x0001078a7288(uStack_78);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010724b884(&lStack_a0);
    func_0x0001078a5284(&plStack_318);
    func_0x0001078a52b0(&puStack_2e0);
    func_0x00010724b54c(plVar6 + 0x4a);
    func_0x0001006393ec(plVar6 + 0x46);
    func_0x0001072ad0c8(plVar6 + 0x42);
    func_0x0001078996c4(plVar6 + 0x41);
    func_0x0001072aca78(plVar6 + 0x40);
    func_0x0001078a747c();
    func_0x0001072ad0c8(auStack_2b8);
    func_0x00010724ae28(&uStack_328);
    func_0x00010724b374(auStack_298);
    func_0x0001078a7474();
    puVar10 = (undefined8 *)((ulong)&uStack_350 | 8);
    func_0x00010724ae28();
    func_0x0001078a734c();
    *puVar10 = &PTR_DAT_1109e6d18;
    func_0x00010724ae28(puVar10 + 2);
    return puVar10;
  }
  return puVar10;
}



/* Entry: 1078a5864; end: 1078a588f;  */

undefined8 * FUN_1078a5864(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e6d18;
  func_0x00010724ae28(param_1 + 2);
  return param_1;
}



/* Entry: 1078a5f18; end: 1078a5f4f;  */

void FUN_1078a5f18(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001078a7328();
  *puVar1 = &PTR_DAT_1109e6dc8;
  uVar2 = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[1] = uVar2;
  uVar2 = param_1[3];
  puVar1[4] = param_1[4];
  puVar1[3] = uVar2;
  return;
}



/* Entry: 1078a6090; end: 1078a60a3;  */

void FUN_1078a6090(void)

{
  func_0x0001078a6144();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a6238; end: 1078a6243;  */

undefined ** FUN_1078a6238(void)

{
  return &PTR_DAT_1109e6ef8;
}



/* Entry: 1078a6394; end: 1078a639f;  */

void FUN_1078a6394(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e6f18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078a65fc; end: 1078a6677;  */

void FUN_1078a65fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  while (lVar1 != param_1 + 0x30) {
    if ((*(byte *)(*(long *)(lVar1 + 0x20) + 0xb) & 1) == 0) {
      func_0x0001078a3f14();
    }
    func_0x00010002c7d4();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  while (lVar1 != param_1 + 0x30) {
    if (*(char *)(*(long *)(lVar1 + 0x20) + 0xb) == '\x01') {
      func_0x0001078a3f14();
    }
    func_0x00010002c7d4();
  }
  return;
}



/* Entry: 1078a6834; end: 1078a6857;  */

void FUN_1078a6834(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e70b0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1078a6f08; end: 1078a6f3f;  */

void FUN_1078a6f08(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001078a7398();
  *puVar1 = &PTR_DAT_1109e7130;
  uVar2 = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[1] = uVar2;
  puVar1[3] = param_1[3];
  return;
}



/* Entry: 1078a71bc; end: 1078a71cf;  */

void FUN_1078a71bc(void)

{
  func_0x0001078a727c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a75f8; end: 1078a76f3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1078a75f8(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined8 extraout_x8;
  uint uVar5;
  long alStack_50 [3];
  int aiStack_38 [2];
  
  uVar4 = (uint)*(undefined8 *)*param_1;
  func_0x000108146c74();
  uVar5 = 0;
  uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    cVar2 = SBORROW4(uVar4,uVar5);
    cVar3 = (int)(uVar4 - uVar5) < 0;
    if (uVar4 == uVar5) {
      return;
    }
    aiStack_38[1] = 0;
    func_0x000108146ca4(*(undefined8 *)*param_1,uVar5,0,aiStack_38,0,aiStack_38 + 1);
    func_0x0001078a8a90();
    if (cVar3 == cVar2) break;
    alStack_50[0] = (long)aiStack_38[0];
    func_0x0001078a8890(param_2,alStack_50,alStack_50);
    uVar5 = uVar5 + 1;
  }
  func_0x0001078a8968();
  func_0x0001078a8a04();
  func_0x00010814b0c8(extraout_x8);
  func_0x0001078a897c();
  func_0x0001078a8a24();
  func_0x0001078a894c();
  func_0x0001078a8a44();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1078a76c4);
  (*pcVar1)();
}



/* Entry: 1078a817c; end: 1078a8187;  */

void FUN_1078a817c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  func_0x0001078a8a84();
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1078a8438; end: 1078a847b;  */

undefined1 * FUN_1078a8438(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  if (puVar1 < *(undefined1 **)(param_1 + 0x10)) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    func_0x0001078a847c();
  }
  *(undefined1 **)(param_1 + 8) = puVar2;
  return puVar2 + -1;
}



/* Entry: 1078a87dc; end: 1078a882b;  */

long * FUN_1078a87dc(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x000108144908();
  *param_1 = (long)plVar1;
  func_0x000108144908();
  param_1[1] = (long)plVar1;
  return param_1;
}



/* Entry: 1078a8e40; end: 1078a8fc3;  */

/* WARNING: Possible PIC construction at 0x0001078a8f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078a8f78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078a8f98) */
/* WARNING: Removing unreachable block (ram,0x0001078a8fa0) */
/* WARNING: Removing unreachable block (ram,0x0001078a8fc0) */
/* WARNING: Removing unreachable block (ram,0x0001078a8f7c) */

void FUN_1078a8e40(undefined *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  ulong uVar5;
  undefined8 *unaff_x19;
  undefined auStack_3c70 [15384];
  undefined8 uStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001078a8fe0();
  ppuVar2 = &PTR___tlv_bootstrap_11340dc00;
  uStack_58 = extraout_x8;
  func_0x0001078a9020();
  ppuVar3 = &PTR___tlv_bootstrap_11340dc18;
  func_0x0001078a9020();
  if (*(char *)ppuVar3 == '\x01') {
    ppuVar3 = ppuVar2;
    _inflateReset();
    if ((int)ppuVar3 != 0) {
      func_0x0001078a8fd8();
      func_0x0001078a90ec();
      return;
    }
  }
  else {
    ppuVar4 = ppuVar3;
    func_0x0001078a9048();
    if ((int)ppuVar4 != 0) goto LAB_1078a8f88;
    *(undefined1 *)ppuVar3 = 1;
  }
  *ppuVar2 = param_1;
  *(undefined4 *)(ppuVar2 + 1) = param_2;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
  do {
    ppuVar2[3] = auStack_3c70;
    *(undefined4 *)(ppuVar2 + 4) = 0x3c18;
    func_0x0001078a90d8();
    func_0x0001078a9078();
    uVar5 = extraout_x9;
    if ((long)extraout_x9 < 0) {
      uVar5 = unaff_x19[1];
    }
    if (uVar5 < extraout_x8_00) {
      func_0x0001078a90b0();
    }
  } while (param_3 == 0);
  bVar1 = param_3 == 1;
  if (!bVar1) {
    func_0x0001078a8fd8();
    func_0x0001078a905c();
    __ZNSt13runtime_errorC1EPKc();
    return;
  }
  func_0x0001078a8ff4(uStack_58);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
LAB_1078a8f88:
  func_0x0001078a8fd8();
  func_0x0001078a90c4();
  return;
}



/* Entry: 1078a95a0; end: 1078a95a7;  */

void FUN_1078a95a0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_getspecific_11034c8c0)(*param_1);
  return;
}



/* Entry: 1078a9908; end: 1078a9943;  */

void FUN_1078a9908(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc(param_1,&UNK_10f432c00);
  *param_1 = &PTR_DAT_1109e7290;
  return;
}



/* Entry: 1078a9bbc; end: 1078a9c07;  */

void FUN_1078a9bbc(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001078a9c88();
  func_0x0001078b5428();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1078aa4d0; end: 1078aabc3;  */

/* WARNING: Possible PIC construction at 0x0001078aa5f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078aa87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078aaa30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078aa880) */
/* WARNING: Removing unreachable block (ram,0x0001078aa888) */
/* WARNING: Removing unreachable block (ram,0x0001078aa918) */
/* WARNING: Removing unreachable block (ram,0x0001078aa920) */
/* WARNING: Removing unreachable block (ram,0x0001078aa928) */
/* WARNING: Removing unreachable block (ram,0x0001078aa93c) */
/* WARNING: Removing unreachable block (ram,0x0001078aa974) */
/* WARNING: Removing unreachable block (ram,0x0001078aa98c) */
/* WARNING: Removing unreachable block (ram,0x0001078aa97c) */
/* WARNING: Removing unreachable block (ram,0x0001078aa96c) */
/* WARNING: Removing unreachable block (ram,0x0001078aa990) */
/* WARNING: Removing unreachable block (ram,0x0001078aa998) */
/* WARNING: Removing unreachable block (ram,0x0001078aa930) */
/* WARNING: Removing unreachable block (ram,0x0001078aa5fc) */
/* WARNING: Removing unreachable block (ram,0x0001078aa610) */
/* WARNING: Removing unreachable block (ram,0x0001078aa624) */
/* WARNING: Removing unreachable block (ram,0x0001078aa638) */
/* WARNING: Removing unreachable block (ram,0x0001078aa64c) */
/* WARNING: Removing unreachable block (ram,0x0001078aa660) */
/* WARNING: Removing unreachable block (ram,0x0001078aa668) */
/* WARNING: Removing unreachable block (ram,0x0001078aa73c) */
/* WARNING: Removing unreachable block (ram,0x0001078aaa34) */

void FUN_1078aa4d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined *puVar5;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 auStack_190 [2];
  undefined4 uStack_188;
  undefined1 auStack_180 [40];
  undefined8 uStack_158;
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined8 *puStack_110;
  ulong uStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  long *plStack_e0;
  undefined1 auStack_d8 [24];
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 auStack_68 [4];
  undefined8 uStack_48;
  
  func_0x0001078af2dc();
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0x1f01;
  (*(code *)PTR__glGetString_113230848)();
  uVar4 = 0;
  if (lVar1 != 0) {
    func_0x00010002b838(auStack_d8,lVar1);
    (*(code *)PTR__glGetString_113230848)(0x1f00);
    func_0x0001078af4fc(PTR__glGetString_113230848);
    plVar2 = (long *)0x1f03;
    (*(code *)PTR__glGetString_113230848)();
    plStack_e0 = plVar2;
    if (plVar2 != (long *)0x0) {
      func_0x0001078af474();
      puStack_c0 = &UNK_10f4330c9;
      puStack_b8 = &UNK_10f4330d6;
      puStack_b0 = &UNK_10f4330ec;
      puStack_a8 = &UNK_10f433100;
      plVar3 = plVar2;
      func_0x0001078af0e0();
      func_0x0001078af460();
      *plVar2 = (long)plVar3;
      puStack_c0 = &UNK_10f4330c9;
      puStack_b8 = &UNK_10f433119;
      puStack_b0 = &UNK_10f4330ec;
      puStack_a8 = &UNK_10f433130;
      func_0x0001078af0e0();
      func_0x0001078af460();
      plVar2[1] = (long)plVar3;
      puStack_c0 = &UNK_10f4330c9;
      puStack_b8 = &UNK_10f43314a;
      puStack_b0 = &UNK_10f4330c9;
      puStack_a8 = &UNK_10f43315b;
      func_0x0001078af0e0();
      func_0x0001078af460();
      plVar2[2] = (long)plVar3;
      auStack_68[0] = 0;
      func_0x0001078ae630(unaff_x19 + 0xb8,plVar2);
      func_0x0001078ae610(auStack_68);
      func_0x0001078aac5c();
      param_3 = *(undefined8 **)(unaff_x19 + 0x30);
      puVar5 = (undefined *)0x1078aa5fc;
      uVar4 = unaff_x19;
      goto code_r0x0001078aabc4;
    }
    in_ZR = *(char *)(unaff_x19 + 0x3e9) == '\x01';
    if ((bool)in_ZR) {
      func_0x0001078af4bc();
      func_0x0001078af2a4();
    }
    else {
      in_ZR = *(char *)(unaff_x19 + 0x3f8) == '\x01';
      if ((bool)in_ZR) {
        lVar1 = unaff_x20[3];
        func_0x0001078ae148(lVar1,&UNK_10f432f87);
        if (lVar1 != 0) {
          lRam0000000113824520 = lVar1;
        }
      }
      lVar1 = unaff_x20[3];
      func_0x0001078ae148(lVar1,&UNK_10f432f9d);
      if (lVar1 != 0) {
        lRam0000000113824528 = lVar1;
      }
      lVar1 = unaff_x20[3];
      func_0x0001078ae148(lVar1,&UNK_10f432faa);
      if (lVar1 != 0) {
        lRam0000000113824530 = lVar1;
      }
      func_0x0001078af4bc();
      func_0x0001078af2a4();
    }
    unaff_x20 = (undefined8 *)(unaff_x19 + 0x30);
    if ((*(byte *)(unaff_x19 + 0x3e9) & 1) == 0) {
      if (*(long *)(unaff_x19 + 0xd8) == 0) {
        uVar4 = 0;
      }
      else {
        in_ZR = *(char *)(*(long *)(unaff_x19 + 0xd8) + 0x30) == '\x02';
        uVar4 = (ulong)!(bool)in_ZR;
      }
    }
    else {
      uVar4 = 1;
    }
    param_3 = (undefined8 *)*unaff_x20;
    func_0x0001078af4a4();
    func_0x0001078af2f4();
  }
  func_0x0001078af550(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001078af2f4();
  puVar5 = &SUB_1078aabc4;
  func_0x0001078af1dc();
code_r0x0001078aabc4:
  puStack_110 = unaff_x20;
  uStack_108 = uVar4;
  puStack_100 = &stack0xfffffffffffffff0;
  puStack_f8 = puVar5;
  func_0x0001078af124(0xe1);
  func_0x0001078af3c0();
  uStack_158 = 0;
  uStack_138 = 0;
  uStack_134 = 1;
  func_0x0001078af230();
  func_0x0001072bbe40(auStack_180);
  auStack_190[0] = 1;
  uStack_188 = 0;
  uStack_1a0 = *param_3;
  uStack_198 = 3;
  func_0x00010743fa9c(param_3,auStack_180,auStack_190,&uStack_1a0,7);
  func_0x0001078af1e4();
  return;
}



/* Entry: 1078ab554; end: 1078ab5ab;  */

undefined1 FUN_1078ab554(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x3f8);
  if (((*(byte *)(param_1 + 0x3e9) & 1) == 0) && (uVar1 = 0, lRam0000000113824520 != 0)) {
    uVar1 = *(undefined1 *)(param_1 + 0x3f8);
  }
  return uVar1;
}



/* Entry: 1078abd2c; end: 1078abe2b;  */

void FUN_1078abd2c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 auStack_78 [2];
  undefined4 uStack_5c;
  undefined4 auStack_58 [2];
  
  func_0x0001078af318();
  uStack_5c = 0;
  _glGenRenderbuffers(1,&uStack_5c);
  uVar1 = uStack_5c;
  auStack_78[0] = uStack_5c;
  func_0x0001078abe2c(unaff_x20 + 0x270,uStack_5c);
  func_0x0001078af8c0(param_3);
  _glRenderbufferStorage(0x8d41,param_3,param_2,param_2 >> 0x20);
  func_0x0001078abe2c(unaff_x20 + 0x270,0);
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  auStack_58[0] = uVar1;
  *puVar2 = &PTR_DAT_1109e7618;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  puVar2[2] = unaff_x20;
  *(undefined1 *)(puVar2 + 3) = 1;
  FUN_1078ae5c0(auStack_58);
  *unaff_x19 = puVar2;
  FUN_1078ae5c0(auStack_78);
  return;
}



/* Entry: 1078ac204; end: 1078ac783;  */

void FUN_1078ac204(long param_1)

{
  int iVar1;
  code *extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 auStack_d0 [8];
  undefined4 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  int aiStack_b0 [6];
  undefined4 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  
  lVar2 = param_1 + 0x114;
  for (lVar4 = 0; lVar4 != 8; lVar4 = lVar4 + 1) {
    aiStack_b0[0]._0_1_ = (char)lVar4;
    func_0x0001078ab940(param_1 + 0xf0,aiStack_b0);
    aiStack_b0[0] = (uint)aiStack_b0[0]._1_3_ << 8;
    aiStack_b0[1] = 0;
    func_0x0001078ab97c(lVar2,aiStack_b0);
    lVar2 = lVar2 + 0xc;
  }
  aiStack_b0[0] = 0;
  func_0x0001078ad66c((int *)(param_1 + 400),aiStack_b0);
  piVar7 = *(int **)(param_1 + 0x2c0);
  for (piVar5 = *(int **)(param_1 + 0x2b8); piVar5 != piVar7; piVar5 = piVar5 + 1) {
    if (((*(byte *)(param_1 + 0x178) & 1) == 0) && (*(int *)(param_1 + 0x174) == *piVar5)) {
      *(undefined1 *)(param_1 + 0x178) = 1;
    }
    _glDeleteProgram();
  }
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x2b8);
  puVar8 = *(undefined4 **)(param_1 + 0x2d8);
  for (puVar6 = *(undefined4 **)(param_1 + 0x2d0); puVar6 != puVar8; puVar6 = puVar6 + 1) {
    _glDeleteShader(*puVar6);
  }
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x2d0);
  piVar5 = *(int **)(param_1 + 0x2e8);
  if (piVar5 != *(int **)(param_1 + 0x2f0)) {
    for (; piVar5 != *(int **)(param_1 + 0x2f0); piVar5 = piVar5 + 1) {
      if (((*(byte *)(param_1 + 0x180) & 1) == 0) && (*(int *)(param_1 + 0x17c) == *piVar5)) {
        *(undefined1 *)(param_1 + 0x180) = 1;
      }
      else if (((*(byte *)(param_1 + 0x1bc) & 1) == 0) && (*(int *)(param_1 + 0x1b8) == *piVar5)) {
        *(undefined1 *)(param_1 + 0x1bc) = 1;
      }
    }
    func_0x0001078af390();
    _glDeleteBuffers();
    do {
      func_0x0001078af3d0();
    } while (extraout_w11 != 0);
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x2e8);
  }
  piVar5 = *(int **)(param_1 + 0x300);
  piVar7 = *(int **)(param_1 + 0x308);
  if (piVar5 != piVar7) {
    for (; piVar5 != piVar7; piVar5 = piVar5 + 1) {
      iVar1 = *piVar5;
      lVar4 = 0x60;
      lVar2 = param_1 + 0x114;
      do {
        if (iVar1 == *(int *)(lVar2 + 4)) {
          *(undefined1 *)(lVar2 + 8) = 1;
        }
        lVar4 = lVar4 + -0xc;
        lVar2 = lVar2 + 0xc;
      } while (lVar4 != 0);
    }
    func_0x0001078af390();
    _glDeleteTextures();
    do {
      func_0x0001078af3d0();
    } while (extraout_w11_00 != 0);
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x300);
  }
  piVar5 = *(int **)(param_1 + 0x318);
  if (piVar5 != *(int **)(param_1 + 800)) {
    for (; piVar5 != *(int **)(param_1 + 800); piVar5 = piVar5 + 1) {
      if (((*(byte *)(param_1 + 0x194) & 1) == 0) && (*(int *)(param_1 + 400) == *piVar5)) {
        *(undefined1 *)(param_1 + 0x194) = 1;
      }
    }
    if ((*(byte *)(param_1 + 0x3e9) & 1) == 0) {
      func_0x0001078af390();
      (**(code **)(extraout_x9_00 + 8))();
    }
    else {
      func_0x0001078af390();
      (*extraout_x9)();
    }
    *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x318);
  }
  piVar5 = *(int **)(param_1 + 0x330);
  if (piVar5 != *(int **)(param_1 + 0x338)) {
    for (; piVar5 != *(int **)(param_1 + 0x338); piVar5 = piVar5 + 1) {
      if (((*(byte *)(param_1 + 0xf8) & 1) == 0) && (*(int *)(param_1 + 0xf4) == *piVar5)) {
        *(undefined1 *)(param_1 + 0xf8) = 1;
      }
    }
    func_0x0001078af390();
    _glDeleteFramebuffers();
    do {
      func_0x0001078af3d0();
    } while (extraout_w11_01 != 0);
    *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x330);
  }
  if (*(long *)(param_1 + 0x348) != *(long *)(param_1 + 0x350)) {
    func_0x0001078af390();
    _glDeleteRenderbuffers();
    *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_1 + 0x348);
  }
  lVar4 = *(long *)(param_1 + 0x368);
  for (lVar2 = *(long *)(param_1 + 0x360); lVar2 != lVar4; lVar2 = lVar2 + 4) {
    func_0x0001078b019c(*(undefined8 *)(param_1 + 0x378),lVar2);
  }
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x360);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  aiStack_b0[0] = 0x9d;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_DAT_110996720;
  uStack_88 = 0;
  uStack_70 = 0x9d;
  uStack_68 = 0;
  func_0x0001078af1a8();
  func_0x0001078af110(*(undefined4 *)(param_1 + 0xa4));
  uStack_c8 = 3;
  func_0x0001078af028();
  func_0x0001078af1e4();
  func_0x0001078af09c(0x9e);
  func_0x0001078af1a8();
  func_0x0001078af110(*(undefined4 *)(param_1 + 0xa8));
  uStack_c8 = 3;
  func_0x0001078af028();
  func_0x0001078af1e4();
  func_0x0001078af124(0xa1);
  func_0x0001078af0c4();
  func_0x0001078af110(*(undefined4 *)(param_1 + 0xa0));
  uStack_c8 = 3;
  func_0x0001078af028();
  func_0x0001078af1e4();
  func_0x0001078af09c(0xa2);
  func_0x0001078af1a8();
  func_0x0001078af110(*(undefined4 *)(param_1 + 0x6c));
  uStack_c8 = 3;
  func_0x0001078af028();
  func_0x0001078af1e4();
  func_0x0001078af124(0xa3);
  func_0x0001078af0c4();
  func_0x0001078af110(*(undefined4 *)(param_1 + 0x74));
  uStack_c8 = 3;
  func_0x00010743fa44(uVar3,aiStack_b0,auStack_c0,auStack_d0,1);
  func_0x0001078af1e4();
  func_0x0001078af09c(0xa4);
  func_0x0001078af1a8();
  func_0x0001078af584(param_1 + 0x88);
  uStack_b8 = 3;
  func_0x0001078af244();
  uStack_c8 = 3;
  func_0x0001078af028();
  func_0x0001078af1e4();
  func_0x0001078af0f0(0xa5);
  uStack_64 = 1;
  func_0x0001078af230();
  func_0x0001078af584(param_1 + 0x80);
  uStack_b8 = 3;
  func_0x0001078af244();
  uStack_c8 = 3;
  func_0x0001078af028();
  func_0x0001078af1e4();
  func_0x0001078af09c(0xa7);
  uStack_64 = 1;
  func_0x0001078af230();
  func_0x0001078af584(param_1 + 0x90);
  uStack_b8 = 3;
  func_0x0001078af244();
  uStack_c8 = 3;
  func_0x0001078af028();
  func_0x0001078af1e4();
  func_0x0001078af0f0(0xa8);
  uStack_64 = 1;
  func_0x0001078af230();
  func_0x0001078af584(param_1 + 0x98);
  uStack_b8 = 3;
  func_0x0001078af244();
  uStack_c8 = 3;
  func_0x0001078af028();
  func_0x0001078af1e4();
  func_0x0001078af09c(0xa9);
  uStack_64 = 1;
  func_0x0001078af230();
  func_0x0001078af110(*(undefined4 *)(param_1 + 0x70));
  uStack_c8 = 3;
  func_0x0001078af028();
  func_0x0001078af1e4();
  func_0x0001078af124(0xaa);
  ppuStack_90 = &PTR_DAT_110996720;
  uStack_88 = 0;
  uStack_68 = 0;
  uStack_64 = 1;
  func_0x0001078af230();
  func_0x0001078af110(*(undefined4 *)(param_1 + 0x68));
  uStack_c8 = 3;
  func_0x0001078af028();
  func_0x0001078af1e4();
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}



/* Entry: 1078ace74; end: 1078ad66b;  */

/* WARNING: Possible PIC construction at 0x0001078ad210: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078ad214) */
/* WARNING: Removing unreachable block (ram,0x0001078ad228) */
/* WARNING: Removing unreachable block (ram,0x0001078ad22c) */
/* WARNING: Removing unreachable block (ram,0x0001078ad234) */
/* WARNING: Removing unreachable block (ram,0x0001078ad23c) */
/* WARNING: Removing unreachable block (ram,0x0001078ad248) */
/* WARNING: Removing unreachable block (ram,0x0001078ad24c) */
/* WARNING: Removing unreachable block (ram,0x0001078ad254) */
/* WARNING: Removing unreachable block (ram,0x0001078ad25c) */
/* WARNING: Removing unreachable block (ram,0x0001078ad290) */
/* WARNING: Removing unreachable block (ram,0x0001078ad26c) */
/* WARNING: Removing unreachable block (ram,0x0001078ad294) */
/* WARNING: Removing unreachable block (ram,0x0001078ad278) */
/* WARNING: Removing unreachable block (ram,0x0001078ad284) */
/* WARNING: Removing unreachable block (ram,0x0001078ad298) */
/* WARNING: Removing unreachable block (ram,0x0001078ad2a4) */
/* WARNING: Removing unreachable block (ram,0x0001078ad2ac) */
/* WARNING: Removing unreachable block (ram,0x0001078ad2c8) */
/* WARNING: Removing unreachable block (ram,0x0001078ad2e4) */
/* WARNING: Removing unreachable block (ram,0x0001078ad2d0) */
/* WARNING: Removing unreachable block (ram,0x0001078ad2d8) */
/* WARNING: Removing unreachable block (ram,0x0001078ad2e8) */
/* WARNING: Removing unreachable block (ram,0x0001078ad2f0) */
/* WARNING: Removing unreachable block (ram,0x0001078ad330) */
/* WARNING: Removing unreachable block (ram,0x0001078ad338) */
/* WARNING: Removing unreachable block (ram,0x0001078ad33c) */
/* WARNING: Removing unreachable block (ram,0x0001078ad348) */
/* WARNING: Removing unreachable block (ram,0x0001078ad360) */
/* WARNING: Removing unreachable block (ram,0x0001078ad374) */
/* WARNING: Removing unreachable block (ram,0x0001078ad388) */
/* WARNING: Removing unreachable block (ram,0x0001078ad390) */
/* WARNING: Removing unreachable block (ram,0x0001078ad380) */
/* WARNING: Removing unreachable block (ram,0x0001078ad3a0) */
/* WARNING: Removing unreachable block (ram,0x0001078ad488) */
/* WARNING: Removing unreachable block (ram,0x0001078ad48c) */
/* WARNING: Removing unreachable block (ram,0x0001078ad4a8) */
/* WARNING: Removing unreachable block (ram,0x0001078ad51c) */
/* WARNING: Removing unreachable block (ram,0x0001078ad4b4) */
/* WARNING: Removing unreachable block (ram,0x0001078ad4cc) */
/* WARNING: Removing unreachable block (ram,0x0001078ad520) */
/* WARNING: Removing unreachable block (ram,0x0001078ad524) */
/* WARNING: Removing unreachable block (ram,0x0001078ad54c) */
/* WARNING: Removing unreachable block (ram,0x0001078ad530) */
/* WARNING: Removing unreachable block (ram,0x0001078ad534) */
/* WARNING: Removing unreachable block (ram,0x0001078ad3a8) */
/* WARNING: Removing unreachable block (ram,0x0001078ad610) */
/* WARNING: Removing unreachable block (ram,0x0001078ad3b0) */
/* WARNING: Removing unreachable block (ram,0x0001078ad3d0) */
/* WARNING: Removing unreachable block (ram,0x0001078ad3e4) */
/* WARNING: Removing unreachable block (ram,0x0001078ad3ec) */
/* WARNING: Removing unreachable block (ram,0x0001078ad3f8) */
/* WARNING: Removing unreachable block (ram,0x0001078ad400) */
/* WARNING: Removing unreachable block (ram,0x0001078ad40c) */
/* WARNING: Removing unreachable block (ram,0x0001078ad414) */
/* WARNING: Removing unreachable block (ram,0x0001078ad480) */
/* WARNING: Removing unreachable block (ram,0x0001078ad550) */
/* WARNING: Removing unreachable block (ram,0x0001078ad570) */
/* WARNING: Removing unreachable block (ram,0x0001078ad55c) */
/* WARNING: Removing unreachable block (ram,0x0001078ad564) */
/* WARNING: Removing unreachable block (ram,0x0001078ad41c) */
/* WARNING: Removing unreachable block (ram,0x0001078ad43c) */
/* WARNING: Removing unreachable block (ram,0x0001078ad428) */
/* WARNING: Removing unreachable block (ram,0x0001078ad430) */
/* WARNING: Removing unreachable block (ram,0x0001078ad440) */
/* WARNING: Removing unreachable block (ram,0x0001078ad448) */
/* WARNING: Removing unreachable block (ram,0x0001078ad470) */
/* WARNING: Removing unreachable block (ram,0x0001078ad478) */
/* WARNING: Removing unreachable block (ram,0x0001078ad450) */
/* WARNING: Removing unreachable block (ram,0x0001078ad3d8) */
/* WARNING: Removing unreachable block (ram,0x0001078ad340) */
/* WARNING: Removing unreachable block (ram,0x0001078ad574) */
/* WARNING: Removing unreachable block (ram,0x0001078ad594) */
/* WARNING: Removing unreachable block (ram,0x0001078ad5ac) */
/* WARNING: Removing unreachable block (ram,0x0001078ad5d0) */
/* WARNING: Removing unreachable block (ram,0x0001078ad5bc) */
/* WARNING: Removing unreachable block (ram,0x0001078ad5c4) */
/* WARNING: Removing unreachable block (ram,0x0001078ad5d4) */
/* WARNING: Removing unreachable block (ram,0x0001078ad584) */
/* WARNING: Removing unreachable block (ram,0x0001078ad5d8) */
/* WARNING: Removing unreachable block (ram,0x0001078ad2b8) */
/* WARNING: Removing unreachable block (ram,0x0001078ad2c4) */
/* WARNING: Removing unreachable block (ram,0x0001078ad5f0) */

void FUN_1078ace74(long param_1,long param_2,long param_3,ulong param_4,long param_5,uint *param_6,
                  ulong param_7,uint param_8,byte param_9)

{
  undefined2 *puVar1;
  ushort *puVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  ushort *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long unaff_x19;
  long *unaff_x20;
  int iVar21;
  ulong unaff_x21;
  uint *unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined4 uVar22;
  ulong unaff_x27;
  ulong uVar23;
  undefined8 unaff_x28;
  undefined2 *puVar24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  byte abStack_131 [109];
  uint uStack_c4;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  uint *puStack_88;
  undefined8 *puStack_80;
  uint auStack_78 [6];
  
  bVar4 = param_9;
  puVar10 = &stack0xfffffffffffffff0;
  lVar12 = param_1;
  func_0x0001078aac7c();
  if ((int)lVar12 == 0) {
    func_0x0001078af2fc();
    cVar6 = *(char *)(param_1 + 0x3f8);
    cVar3 = *(char *)(param_1 + 0x3e9);
  }
  else {
    uVar23 = (ulong)*(uint *)(param_5 + 8) + 0x9e3779b97f4a7c15;
    if (bVar4 == 0) {
      uVar23 = 0;
    }
    uStack_c4 = param_8;
    if (param_2 != 0) {
      plVar19 = &lStack_a8;
      lStack_a8 = param_2;
      func_0x0001000df370(plVar19,8);
      uVar23 = uVar23 * 0x1000 + -0x61c8864680b583eb + (uVar23 >> 4) + (long)plVar19 ^ uVar23;
    }
    for (lVar12 = 0; *(long *)(param_5 + 0x30) != lVar12; lVar12 = lVar12 + 1) {
      lVar18 = *(long *)(param_3 + lVar12 * 8);
      lVar16 = -0x61c8864680b583eb;
      if (lVar18 != 0) {
        lVar16 = (ulong)*(uint *)(lVar18 + 8) + 0x9e3779b97f4a7c15;
      }
      uVar23 = (uVar23 >> 4) + uVar23 * 0x1000 + lVar16 ^ uVar23;
    }
    uVar23 = (param_4 & 0xffffffff) + 0x9e3779b97f4a7c15 + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
    if ((bVar4 & 1) != 0) {
      for (lVar12 = *(long *)(param_5 + 0x50); lVar12 != *(long *)(param_5 + 0x58);
          lVar12 = lVar12 + 5) {
        uVar23 = uVar23 * 0x1000 + -0x61c8864680b583eb + (uVar23 >> 4) +
                 *(long *)(*(long *)(param_5 + 0x38) + (ulong)*(byte *)(lVar12 + 1) * 8) *
                 (param_4 & 0xffffffff) + (ulong)*(byte *)(lVar12 + 3) ^ uVar23;
      }
    }
    uVar13 = (ulong)*param_6;
    uVar23 = uVar23 * 0x1000 + -0x61c8864680b583eb + (uVar23 >> 4) + uVar13 ^ uVar23;
    unaff_x27 = (param_7 & 0xffffffff) + 0x9e3779b97f4a7c15 + uVar23 * 0x1000 + (uVar23 >> 4) ^
                uVar23;
    lVar12 = *(long *)(param_6 + 2);
    if (lVar12 != 0) {
      uVar23 = unaff_x27 * 0x1000 + -0x61c8864680b583eb + (unaff_x27 >> 4) +
               (ulong)*(uint *)(*(long *)(lVar12 + 0x28) + 8) ^ unaff_x27;
      unaff_x27 = (ulong)*(uint *)(lVar12 + 0x20) + 0x9e3779b97f4a7c15 + uVar23 * 0x1000 +
                  (uVar23 >> 4) ^ uVar23;
    }
    if ((bVar4 & 1) == 0) {
      plVar19 = *(long **)(param_6 + 4);
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        unaff_x27 = unaff_x27 * 0x1000 + -0x61c8864680b583eb + (unaff_x27 >> 4) + *plVar19 ^
                    unaff_x27;
        plVar19 = plVar19 + 1;
      }
    }
    else {
      uVar11 = 0;
      for (puVar15 = *(ushort **)(param_5 + 0x68); lVar12 = unaff_x27 * 0x1000 + -0x61c8864680b583eb
          , puVar15 != *(ushort **)(param_5 + 0x70); puVar15 = puVar15 + 2) {
        if ((ulong)*(byte *)((long)puVar15 + 3) != 0xff) {
          uVar23 = lVar12 + (unaff_x27 >> 4) + (ulong)*puVar15 ^ unaff_x27;
          uVar23 = (ulong)(byte)puVar15[1] + 0x9e3779b97f4a7c15 + uVar23 * 0x1000 + (uVar23 >> 4) ^
                   uVar23;
          unaff_x27 = *(long *)(*(long *)(param_6 + 4) + (ulong)*(byte *)((long)puVar15 + 3) * 8) +
                      -0x61c8864680b583eb + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
          uVar11 = uVar11 + 1;
        }
      }
      uVar23 = lVar12 + (unaff_x27 >> 4) + (ulong)uVar11 ^ unaff_x27;
      unaff_x27 = (ulong)uStack_c4 + 0x9e3779b97f4a7c15 + uVar23 * 0x1000 + (uVar23 >> 4) ^ uVar23;
    }
    unaff_x20 = (long *)(param_1 + 0x3b8);
    uVar23 = *(ulong *)(param_1 + 0x3c0);
    if ((uVar23 != 0) && (*(long *)(param_1 + 0x3d0) != 0)) {
      uVar13 = uVar23 - 1;
      if ((uVar23 & uVar13) == 0) {
        uVar17 = uVar13 & unaff_x27;
      }
      else {
        uVar17 = unaff_x27;
        if (uVar23 <= unaff_x27) {
          uVar17 = 0;
          if (uVar23 != 0) {
            uVar17 = unaff_x27 / uVar23;
          }
          uVar17 = unaff_x27 - uVar17 * uVar23;
        }
      }
      plVar19 = *(long **)(*unaff_x20 + uVar17 * 8);
      if (plVar19 != (long *)0x0) {
        do {
          while( true ) {
            plVar19 = (long *)*plVar19;
            if (plVar19 == (long *)0x0) goto LAB_1078ad16c;
            uVar20 = plVar19[1];
            if (uVar20 != unaff_x27) break;
            if (plVar19[2] == unaff_x27) {
              lStack_a8 = plVar19[3];
              lStack_a0 = plVar19[4];
              lStack_98 = plVar19[5];
              if (lStack_98 != 0) {
                plVar19 = (long *)(lStack_98 + 8);
                do {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar7) {
                    *plVar19 = *plVar19 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              if (lStack_a0 != 0) {
                lStack_a8 = *(long *)(param_1 + 0x3e0);
                func_0x0001078ad66c(param_1 + 400);
              }
              FUN_1078aed90(&lStack_a0);
              return;
            }
          }
          if ((uVar23 & uVar13) == 0) {
            uVar20 = uVar20 & uVar13;
          }
          else if (uVar23 <= uVar20) {
            uVar8 = 0;
            if (uVar23 != 0) {
              uVar8 = uVar20 / uVar23;
            }
            uVar20 = uVar20 - uVar8 * uVar23;
          }
        } while (uVar20 == uVar17);
      }
    }
LAB_1078ad16c:
    pcVar14 = (code *)PTR__glGenVertexArrays_113230868;
    if (*(char *)(param_1 + 0x3e9) != '\x01') {
      pcVar14 = *(code **)(*(long *)(param_1 + 0xc0) + 0x10);
    }
    auStack_78[0] = 0;
    puVar9 = (undefined8 *)0x1;
    (*pcVar14)(1,auStack_78);
    uVar11 = auStack_78[0];
    unaff_x21 = (ulong)auStack_78[0];
    lStack_a8 = CONCAT44(lStack_a8._4_4_,auStack_78[0]);
    unaff_x28 = 1;
    lStack_98._0_1_ = 1;
    lStack_a0 = param_1;
    func_0x0001078af3b8();
    puVar9[1] = 0;
    puVar9[2] = 0;
    puStack_88 = (uint *)(puVar9 + 3);
    *puStack_88 = uVar11;
    *puVar9 = &PTR_DAT_1109e7650;
    puVar9[4] = param_1;
    *(undefined1 *)(puVar9 + 5) = 1;
    lStack_98 = (ulong)lStack_98._1_7_ << 8;
    puStack_80 = puVar9;
    func_0x0001078ae578(&lStack_a8);
    func_0x0001078ad66c(param_1 + 400,puStack_88);
    func_0x0001078af2fc();
    cVar6 = *(char *)(param_1 + 0x3f8);
    cVar3 = *(char *)(param_1 + 0x3e9);
    unaff_x30 = 0x1078ad214;
    register0x00000008 = (BADSPACEBASE *)(abStack_131 + 0x61);
    unaff_x19 = param_1;
    unaff_x22 = param_6;
    unaff_x23 = param_5;
    unaff_x24 = param_4;
    unaff_x25 = param_3;
    unaff_x26 = param_2;
    unaff_x29 = puVar10;
    param_8 = uStack_c4;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(uint **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(uint *)((long)register0x00000008 + -0x68) = param_8;
  *(long *)((long)register0x00000008 + -0x70) = param_5;
  if (*(long *)(param_6 + 2) != 0) {
    func_0x0001078af544(*(undefined8 *)(*(long *)(param_6 + 2) + 0x28));
    puVar1 = *(undefined2 **)(*(long *)((long)register0x00000008 + -0x70) + 0x70);
    for (puVar24 = *(undefined2 **)(*(long *)((long)register0x00000008 + -0x70) + 0x68);
        puVar24 != puVar1; puVar24 = puVar24 + 2) {
      if (*(char *)((long)puVar24 + 3) != -1) {
        bVar4 = *(byte *)(puVar24 + 1);
        uVar23 = (ulong)bVar4;
        *(byte *)((long)register0x00000008 + -0x61) = bVar4;
        puVar10 = (undefined1 *)((long)register0x00000008 + -0x61);
        func_0x0001073da180(puVar10);
        uVar11 = bVar4 - 1;
        if (uVar11 < 0x1b) {
          iVar21 = *(int *)(&UNK_10deb444c + ((ulong)uVar11 & 0xff) * 4);
        }
        else {
          iVar21 = 1;
        }
        _glEnableVertexAttribArray(*puVar24);
        uVar5 = *puVar24;
        if (uVar11 < 0x1b) {
          uVar22 = *(undefined4 *)(&UNK_10deb444c + ((ulong)uVar11 & 0xff) * 4);
        }
        else {
          uVar22 = 1;
        }
        func_0x0001078ae520(uVar23);
        _glVertexAttribPointer
                  (uVar5,uVar22,uVar23,0,iVar21 * (int)puVar10,
                   *(undefined8 *)(*(long *)(param_6 + 4) + (ulong)*(byte *)((long)puVar24 + 3) * 8)
                  );
        if (cVar3 == '\0') {
          if ((cVar6 != '\0') &&
             (pcVar14 = pcRam0000000113824520, pcRam0000000113824520 != (code *)0x0))
          goto code_r0x0001078ad8a8;
        }
        else {
          pcVar14 = (code *)PTR__glVertexAttribDivisor_113230850;
          if (cVar6 != '\0') {
code_r0x0001078ad8a8:
            (*pcVar14)(*puVar24,*(undefined4 *)((long)register0x00000008 + -0x68));
          }
        }
      }
    }
  }
  lVar12 = *(long *)((long)register0x00000008 + -0x70);
  if (*(char *)(lVar12 + 0xfc) == '\x01') {
    puVar2 = *(ushort **)(lVar12 + 0xd0);
    for (puVar15 = *(ushort **)(lVar12 + 200); puVar15 != puVar2; puVar15 = puVar15 + 3) {
      if (((char)puVar15[2] == '\x01') && ((*puVar15 & 1) == 0)) {
        _glDisableVertexAttribArray(*puVar15 >> 1);
      }
    }
  }
  return;
}



/* Entry: 1078ade70; end: 1078adf23;  */

void FUN_1078ade70(void)

{
  undefined1 in_ZR;
  uint extraout_w9;
  
  func_0x0001078af15c();
  if (((extraout_w9 & 1) != 0) || (func_0x0001078af2d0(), !(bool)in_ZR)) {
    func_0x0001078af14c();
    func_0x0001078b6528();
  }
  return;
}



/* Entry: 1078ae268; end: 1078ae2a7;  */

void FUN_1078ae268(long param_1,long param_2,undefined8 param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    func_0x0001009eba34(param_3,param_1);
  }
  return;
}



/* Entry: 1078ae5c0; end: 1078ae5e3;  */

void FUN_1078ae5c0(void)

{
  undefined1 in_ZR;
  
  func_0x0001078af35c();
  if ((bool)in_ZR) {
    func_0x0001078af350();
    func_0x0001078affe4();
  }
  return;
}



/* Entry: 1078ae6e0; end: 1078ae6ff;  */

void FUN_1078ae6e0(void)

{
  func_0x0001078af2e8();
  func_0x0001078ae700();
  return;
}



/* Entry: 1078ae8ac; end: 1078ae90b;  */

void FUN_1078ae8ac(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x0001078af578();
  puVar1 = (undefined8 *)(param_3 + 8);
  param_4 = param_4 << 4;
  do {
    if (param_4 == 0) {
      return;
    }
    lVar2 = *unaff_x20;
    _strstr(lVar2,puVar1[-1]);
    if (lVar2 != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x18);
      func_0x0001078ae148(lVar2,*puVar1);
      if (lVar2 != 0) {
        return;
      }
    }
    puVar1 = puVar1 + 2;
    param_4 = param_4 + -0x10;
  } while( true );
}



/* Entry: 1078ae9c0; end: 1078ae9e3;  */

void FUN_1078ae9c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e74f8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1078aeaf8; end: 1078aeb6f;  */

long FUN_1078aeaf8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x0001078af434(uVar1);
  return param_1;
}



/* Entry: 1078aed90; end: 1078aedb7;  */

long FUN_1078aed90(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078af5e4; end: 1078af7e3;  */

void FUN_1078af5e4(int param_1,int param_2,undefined8 param_3,int param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  if (param_1 - 0x8246U < 6) {
    pcVar4 = (&PTR_DAT_1109e7690)[param_1 - 0x8246U];
  }
  else {
    pcVar4 = "(unknown)";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(&uStack_38,pcVar4);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (param_2 - 0x824cU < 6) {
    puVar3 = &uStack_50;
    pcVar4 = "DEBUG_TYPE_DEPRECATED_BEHAVIOR";
    switch(param_2) {
    case 0x824c:
      pcVar4 = "DEBUG_TYPE_ERROR";
      break;
    case 0x824d:
      goto LAB_1078af6fc;
    case 0x824e:
      pcVar4 = "DEBUG_TYPE_UNDEFINED_BEHAVIOR";
      break;
    case 0x824f:
      pcVar4 = "DEBUG_TYPE_PORTABILITY";
      break;
    case 0x8250:
      pcVar4 = "DEBUG_TYPE_PERFORMANCE";
      break;
    case 0x8251:
LAB_1078af6c0:
      pcVar4 = "DEBUG_TYPE_OTHER";
    }
  }
  else {
    if (param_2 != 0x8268) {
      if (param_2 != 0x8269) {
        puVar3 = &uStack_50;
        pcVar4 = "DEBUG_TYPE_POP_GROUP";
        if (param_2 != 0x826a) {
          puVar3 = &uStack_38;
          pcVar4 = "(unknown)";
        }
        goto LAB_1078af6fc;
      }
      goto LAB_1078af6c0;
    }
    pcVar4 = "DEBUG_TYPE_MARKER";
  }
  puVar3 = &uStack_50;
LAB_1078af6fc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puVar3,pcVar4);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  pcVar4 = "(unknown)";
  puVar3 = &uStack_38;
  if (param_4 == 0x9146) {
    pcVar4 = "DEBUG_SEVERITY_HIGH";
    puVar3 = &uStack_68;
  }
  pcVar1 = "DEBUG_SEVERITY_MEDIUM";
  puVar2 = &uStack_68;
  if (param_4 != 0x9147) {
    pcVar1 = pcVar4;
    puVar2 = puVar3;
  }
  pcVar4 = "DEBUG_SEVERITY_LOW";
  puVar3 = &uStack_68;
  if (param_4 != 0x9148) {
    pcVar4 = pcVar1;
    puVar3 = puVar2;
  }
  pcVar1 = "DEBUG_SEVERITY_NOTIFICATION";
  puVar2 = &uStack_68;
  if (param_4 != 0x826b) {
    pcVar1 = pcVar4;
    puVar2 = puVar3;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puVar2,pcVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return;
}



/* Entry: 1078afe30; end: 1078afe7f;  */

undefined8 * FUN_1078afe30(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_DAT_1109e7760;
  lVar4 = param_1[4];
  plVar1 = (long *)(param_1[2] + 0x88);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 - lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x0001078ae59c(param_1 + 1);
  return param_1;
}



/* Entry: 1078b0040; end: 1078b00db;  */

void FUN_1078b0040(undefined8 *param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  func_0x0001078b0ca8();
  *param_1 = 0;
  func_0x0001078aacb0();
  if (param_2 != 0) {
    uStack_38 = *(undefined8 *)(unaff_x20 + 0xd0);
    uStack_40 = *(undefined8 *)(unaff_x20 + 200);
    if (*(long *)(unaff_x20 + 0xd0) != 0) {
      plVar1 = (long *)(*(long *)(unaff_x20 + 0xd0) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001078b00dc(&uStack_28,&uStack_40);
    uStack_28 = 0;
    func_0x0001078b0544();
    func_0x0001078b0520(&uStack_28);
    func_0x0001078b0cf8();
  }
  return;
}



/* Entry: 1078b0410; end: 1078b04bf;  */

void FUN_1078b0410(long param_1)

{
  undefined4 *puVar1;
  undefined8 *apuStack_60 [2];
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  undefined4 uStack_34;
  
  func_0x0001073f610c(&puStack_50,0x20);
  func_0x0001078b0364(apuStack_60,param_1);
  if (apuStack_60[0] != (undefined8 *)0x0) {
    (*(code *)*apuStack_60[0])(0x20,puStack_50);
    for (puVar1 = puStack_50; puVar1 != puStack_48; puVar1 = puVar1 + 1) {
      uStack_34 = *puVar1;
      func_0x0001078b04dc(param_1 + 0x10,&uStack_34);
      func_0x000107260494(param_1 + 0x40,&uStack_34);
    }
  }
  func_0x0001078ae680(apuStack_60);
  func_0x00010731e26c(&puStack_50);
  return;
}



/* Entry: 1078b0680; end: 1078b06a7;  */

long FUN_1078b0680(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * 0x80 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 1078b0c1c; end: 1078b0d07;  */

void FUN_1078b0c1c(void)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  long lVar3;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  lVar3 = unaff_x19[1];
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[2];
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  unaff_x19[3] = in_stack_00000018;
  unaff_x19[2] = in_stack_00000010;
  for (; lVar1 != lVar3; lVar1 = lVar1 + -8) {
  }
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078b0fe4; end: 1078b1067;  */

undefined1  [16] FUN_1078b0fe4(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined ***pppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  
  func_0x0001078b13b0();
  ppuStack_48 = &PTR_DAT_1109e7890;
  pppuStack_30 = &ppuStack_48;
  uStack_40 = param_1;
  if (extraout_x8 == 0) {
    pppuVar1 = (undefined ***)0x0;
    uVar2 = 0;
  }
  else {
    pppuVar1 = &ppuStack_48;
    func_0x0001078b1274(pppuVar1);
    uVar2 = (ulong)param_2 & 0xff;
  }
  func_0x0001078b1328(&ppuStack_48);
  func_0x0001078b13c8();
  if ((bool)in_ZR) {
    auVar4._8_8_ = uVar2;
    auVar4._0_8_ = pppuVar1;
    return auVar4;
  }
  ___stack_chk_fail();
  pppuVar1 = &ppuStack_48;
  func_0x0001078b1328();
  func_0x0001078b136c();
  ppuVar3 = (undefined **)*param_2;
  pppuVar1[1] = (undefined **)param_2[1];
  *pppuVar1 = ppuVar3;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(pppuVar1 + 2) = *param_3;
  pppuVar1[3] = *(undefined ***)(param_3 + 2);
  *(undefined1 *)(pppuVar1 + 4) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(param_3 + 4) = 0;
  *(undefined2 *)(pppuVar1 + 5) = 0;
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = pppuVar1;
  return auVar5;
}



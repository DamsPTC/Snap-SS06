/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107894af0; end: 107894b73;  */

void FUN_107894af0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  
  func_0x000107895eb4();
  _memcpy(extraout_x8 - param_3);
  func_0x000107895e18();
  return;
}



/* Entry: 107894dac; end: 107894db7;  */

void FUN_107894dac(undefined8 *param_1)

{
  func_0x000107895e0c();
  if (*(char *)((long)param_1 + 9) == '\x01') {
    *(undefined1 *)((long)param_1 + 9) = 0;
    func_0x000107891038(param_1 + 1,*param_1);
  }
  return;
}



/* Entry: 107895c64; end: 107895d03;  */

undefined ** FUN_107895c64(void)

{
  return &PTR_DAT_1109e4d80;
}



/* Entry: 107896260; end: 107896273;  */

void FUN_107896260(void)

{
  func_0x000107896234();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107896528; end: 10789653b;  */

void FUN_107896528(void)

{
  func_0x000107896544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789674c; end: 107896757;  */

undefined ** FUN_10789674c(void)

{
  return &PTR_DAT_1109e4ee8;
}



/* Entry: 107897e94; end: 107897e9b;  */

void FUN_107897e94(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  uVar2 = lVar1 + 0x20;
  func_0x000107897ee0(uVar2,5);
  if ((uVar2 & 1) != 0) {
    return;
  }
  _CFRunLoopSourceSignal(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdba760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRunLoopWakeUp_11034a820)(*(undefined8 *)(lVar1 + 0x28));
  return;
}



/* Entry: 107898070; end: 1078980a3;  */

long * FUN_107898070(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  _CFRunLoopSourceInvalidate(param_1[6]);
  _CFRelease(param_1[6]);
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



/* Entry: 107898460; end: 10789846b;  */

void FUN_107898460(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)**(undefined8 **)(param_1 + 200);
  uVar2 = lVar1 + 0x20;
  func_0x000107897ee0(uVar2,5);
  if ((uVar2 & 1) != 0) {
    return;
  }
  _CFRunLoopSourceSignal(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdba760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRunLoopWakeUp_11034a820)(*(undefined8 *)(lVar1 + 0x28));
  return;
}



/* Entry: 10789890c; end: 107898937;  */

long * FUN_10789890c(long *param_1)

{
  func_0x000107898938();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107898cd8; end: 107898d7f;  */

void FUN_107898cd8(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  ulong uVar5;
  long unaff_x22;
  
  func_0x000107899510();
  uVar5 = param_1[1];
  bVar1 = *param_1 <= uVar5;
  uVar2 = uVar5 == *param_1;
  if ((bool)uVar2) {
    lVar3 = unaff_x19;
    func_0x000107899544();
    if (bVar1) {
      lVar4 = (long)(extraout_x9 - uVar5) >> 2;
      if (extraout_x9 - uVar5 == 0) {
        lVar4 = 1;
      }
      func_0x000107898eec();
      func_0x000107899420(lVar3 + (lVar4 * 2 + 6U & 0xfffffffffffffff8));
      func_0x0001078994f0();
      func_0x000107899408();
      uVar5 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x0001078994ac();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(ulong *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar5 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar5 - 8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar5 - 8);
  return;
}



/* Entry: 107898f68; end: 107898f93;  */

long * FUN_107898f68(long *param_1)

{
  func_0x000107898f94();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107899090; end: 1078990c7;  */

void FUN_107899090(void)

{
  long unaff_x19;
  
  func_0x00010789948c();
  if ((**(byte **)(unaff_x19 + 0x48) & 1) == 0) {
    func_0x000104c003e8(unaff_x19 + 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 8);
  return;
}



/* Entry: 1078991e4; end: 10789921f;  */

void FUN_1078991e4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_1109e5928;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 107899338; end: 107899347;  */

void FUN_107899338(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e59d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078995b8; end: 10789963f;  */

double FUN_1078995b8(double param_1,long param_2)

{
  _CFAbsoluteTimeGetCurrent();
  return (double)param_2 / 1000000000.0 + param_1;
}



/* Entry: 10789981c; end: 107899b2b;  */

undefined8 * FUN_10789981c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_1109e5a70;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = param_1 + 5;
  param_1[6] = 0;
  puVar1 = param_1;
  func_0x000107899fd8();
  func_0x000107899fe8(&UNK_1109ac8f0);
  func_0x000107899fe0();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107899fcc();
  }
  func_0x000107899fd8();
  func_0x000107899fe8(&UNK_1109ac188);
  func_0x000107899fe0();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107899fcc();
  }
  func_0x000107899fd8();
  func_0x000107899fe8(&UNK_1109ac5e8);
  func_0x000107899fe0();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107899fcc();
  }
  func_0x000107899fd8();
  func_0x000107899fe8(&UNK_1109acab8);
  func_0x000107899fe0();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107899fcc();
  }
  func_0x000107899fd8();
  func_0x000107899fe8(&UNK_1109acb88);
  func_0x000107899fe0();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107899fcc();
  }
  func_0x000107899fd8();
  func_0x000107899fe8(&UNK_1109aca58);
  func_0x000107899fe0();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107899fcc();
  }
  func_0x000107899fd8();
  func_0x000107899fe8(&UNK_1109ac068);
  func_0x000107899fe0();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107899fcc();
  }
  func_0x000107899fd8();
  func_0x000107899fe8(&UNK_1109ac128);
  func_0x000107899fe0();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107899fcc();
  }
  func_0x000107899fd8();
  func_0x000107899fe8(&UNK_1109ac578);
  func_0x000107899fe0();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107899fcc();
  }
  func_0x000107899fd8();
  func_0x000107899fe8(&UNK_1109ac950);
  func_0x000107899fe0();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107899fcc();
  }
  func_0x000107899fd8();
  func_0x000107899fe8(&UNK_1109ac0c8);
  func_0x000107899fe0();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107899fcc();
  }
  return param_1;
}



/* Entry: 107899f20; end: 107899f33;  */

undefined * FUN_107899f20(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8(&DAT_10f62a4d8);
  func_0x000107899f64(puVar1 + 0x20);
  func_0x000107899ecc(puVar1 + 8);
  return puVar1;
}



/* Entry: 10789a328; end: 10789a33b;  */

void FUN_10789a328(void)

{
  func_0x00010789a180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789ab38; end: 10789ac93;  */

/* WARNING: Possible PIC construction at 0x00010789ac28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789ac2c) */
/* WARNING: Removing unreachable block (ram,0x00010789ac60) */
/* WARNING: Removing unreachable block (ram,0x00010789ac78) */
/* WARNING: Removing unreachable block (ram,0x00010789ac88) */
/* WARNING: Removing unreachable block (ram,0x00010789ac48) */

long ** FUN_10789ab38(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [240];
  
  func_0x00010789b06c();
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000100491558();
  plVar6 = (long *)param_1[1];
  func_0x0001078bba88(param_1 + 2);
  if (param_1[0xc] != 0) {
    func_0x000104c003e8(param_1 + 9);
  }
  func_0x0001078980a4(auStack_120);
  plVar6[9] = (long)auStack_120;
  plStack_138 = plVar6 + 2;
  puVar5 = (undefined8 *)*plVar6;
  uStack_128 = puVar5[1];
  uStack_130 = *puVar5;
  if (puVar5[1] != 0) {
    plVar1 = (long *)(puVar5[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_1[7];
  lVar8 = param_1[6];
  lVar7 = param_1[5];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  plVar6[3] = lVar8;
  *plStack_138 = lVar7;
  plVar6[4] = lVar4;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  plStack_158 = plVar6;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_150);
  func_0x00010724ae28(&uStack_130);
  func_0x0001073ada24(*plVar6,auStack_120);
  __ZNSt3__17promiseIvE9set_valueEv(param_1 + 8);
  _CFRunLoopRun();
  plVar6[9] = 0;
  func_0x0001073ada2c(*plStack_158);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plStack_158 + 2);
  return &plStack_158;
}



/* Entry: 10789adc4; end: 10789ae0f;  */

void FUN_10789adc4(void)

{
  func_0x00010789b07c();
  func_0x00010789b114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
  return;
}



/* Entry: 10789af50; end: 10789af53;  */

void FUN_10789af50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e5c20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10789b23c; end: 10789b27b;  */

void FUN_10789b23c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  uVar2 = 1;
  __Znwm();
  *puVar1 = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 10789baf4; end: 10789bbc7;  */

long FUN_10789baf4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010789e808();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10789bf48; end: 10789bf7b;  */

void FUN_10789bf48(void)

{
  func_0x00010789e5bc();
  func_0x00010789e6fc();
  func_0x00010789e544();
  func_0x00010789e584();
  return;
}



/* Entry: 10789c4ec; end: 10789c51b;  */

void FUN_10789c4ec(undefined8 *param_1)

{
  undefined1 auStack_18 [8];
  
  (**(code **)(*(long *)*param_1 + 0x20))(auStack_18);
  func_0x00010789e584();
  return;
}



/* Entry: 10789c870; end: 10789c87f;  */

void FUN_10789c870(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010789c87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x50))();
  return;
}



/* Entry: 10789ccb8; end: 10789ccbb;  */

undefined8 FUN_10789ccb8(undefined8 param_1)

{
  func_0x00010789e744();
  func_0x000107319d0c();
  return param_1;
}



/* Entry: 10789ce38; end: 10789ce3b;  */

undefined8 * FUN_10789ce38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e5e18;
  func_0x00010724ae28(param_1 + 2);
  return param_1;
}



/* Entry: 10789cf78; end: 10789cfb7;  */

void FUN_10789cf78(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  uStack_28 = param_5[1];
  uStack_30 = *param_5;
  uStack_18 = param_6[1];
  uStack_20 = *param_6;
  func_0x00010789cfb8(param_1,&uStack_60);
  return;
}



/* Entry: 10789d12c; end: 10789d13f;  */

void FUN_10789d12c(void)

{
  func_0x00010789d1d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789d2bc; end: 10789d2d3;  */

void FUN_10789d2bc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010789d2f0(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10789d3ec; end: 10789d573;  */

void FUN_10789d3ec(long param_1)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010789d210(param_1);
  }
  __ZNSt3__17promiseIvEC1Ev(auStack_78);
  func_0x00010789ad44(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107898fb8(&puStack_70);
  *(undefined1 *)puStack_70 = 0;
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e5f30;
  puStack_60 = puStack_70;
  puStack_58 = (undefined8 *)lStack_68;
  if (lStack_68 != 0) {
    do {
      func_0x00010789e4dc();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = &PTR_DAT_1109e5f80;
  __ZNSt3__115recursive_mutexC1Ev(puVar1 + 4);
  puVar1[0xc] = puStack_70;
  puVar1[0xd] = lStack_68;
  puStack_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  puVar1[0xe] = auStack_78;
  func_0x00010789e644();
  puStack_60 = puVar1 + 3;
  puStack_58 = puVar1;
  func_0x00010789e69c();
  func_0x00010789895c(uVar2,0,&puStack_60);
  func_0x00010789e64c();
  __ZNSt3__17promiseIvE10get_futureEv(&puStack_60,auStack_78);
  __ZNSt3__16futureIvE3getEv(&puStack_60);
  __ZNSt3__16futureIvED1Ev(&puStack_60);
  func_0x00010789846c(*(undefined8 *)(param_1 + 0x50));
  __ZNSt3__16thread4joinEv(param_1 + 0x30);
  __ZNSt3__17promiseIvED1Ev(auStack_78);
  func_0x00010787b3fc(param_1 + 0x48);
  func_0x00010787b3fc((long *)(param_1 + 0x40));
  __ZNSt3__16futureIvED1Ev(param_1 + 0x38);
  __ZNSt3__16threadD1Ev(param_1 + 0x30);
  func_0x00010724b54c(param_1);
  return;
}



/* Entry: 10789d648; end: 10789d66f;  */

long FUN_10789d648(long param_1)

{
  func_0x00010789d670();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10789dc88; end: 10789dceb;  */

void FUN_10789dc88(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x238);
  uStack_30 = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  (*pcVar2)(plVar1,param_1 + 0x20,param_1 + 0x218,&uStack_30);
  func_0x00010789e6cc();
  return;
}



/* Entry: 10789dee4; end: 10789df4f;  */

undefined8 * FUN_10789dee4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_1109e6008;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010789e4dc();
    } while (extraout_w10 != 0);
  }
  param_1[3] = param_2[2];
  func_0x00010724cbe8(param_1 + 4,param_2 + 3);
  return param_1;
}



/* Entry: 10789e150; end: 10789e153;  */

undefined8 * FUN_10789e150(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e60c8;
  func_0x00010789e1b8(param_1 + 4);
  return param_1;
}



/* Entry: 10789e240; end: 10789e28f;  */

void FUN_10789e240(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  
  func_0x00010789e724();
  func_0x00010789e820();
  *param_1 = &PTR_DAT_1109e6148;
  param_1[1] = unaff_x22;
  param_1[2] = unaff_x21;
  param_1[3] = param_4;
  *(undefined1 *)(param_1 + 4) = param_5;
  *unaff_x23 = param_1;
  return;
}



/* Entry: 10789e3a4; end: 10789e3b7;  */

void FUN_10789e3a4(void)

{
  func_0x00010789e3dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789e860; end: 10789e887;  */

undefined8 FUN_10789e860(undefined8 param_1)

{
  func_0x00010789e888(param_1,0);
  return param_1;
}



/* Entry: 10789e9e4; end: 10789e9ff;  */

void FUN_10789e9e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109e6290;
  return;
}



/* Entry: 10789eb28; end: 10789eb3b;  */

undefined ** FUN_10789eb28(void)

{
  return &PTR_DAT_1109e6370;
}



/* Entry: 10789ee4c; end: 10789ee4f;  */

long FUN_10789ee4c(long param_1)

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



/* Entry: 10789f24c; end: 10789f293;  */

void FUN_10789f24c(void)

{
  return;
}



/* Entry: 10789f8bc; end: 10789f90b;  */

bool FUN_10789f8bc(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_20;
  long lStack_18;
  
  lVar1 = param_2 + 8;
  func_0x000107264c5c();
  plVar2 = &lStack_20;
  lStack_20 = lVar1;
  lStack_18 = param_2;
  func_0x00010772cd00(&lStack_20,&DAT_10f3046e5,0);
  return plVar2 == (long *)0x0;
}



/* Entry: 10789fe88; end: 10789fef7;  */

long * FUN_10789fe88(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010789fec4(lVar1 + 8);
    func_0x0001004895c8(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10789ffd0; end: 10789ffe3;  */

void FUN_10789ffd0(void)

{
  func_0x0001078a000c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a00e4; end: 1078a012f;  */

void FUN_1078a00e4(void)

{
  func_0x0001078a0164();
  func_0x0001078a0204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
  return;
}



/* Entry: 1078a0c3c; end: 1078a0da7;  */

void FUN_1078a0c3c(long param_1)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x60);
  func_0x00010789af18(&puStack_50);
  puVar1 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x00010787b420(lVar3 + 0xa0,puVar1);
  func_0x00010787b3fc(&puStack_50);
  func_0x00010789af18(&puStack_50);
  puVar1 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x00010787b420(lVar3 + 0xa8,puVar1);
  func_0x00010787b3fc(&puStack_50);
  __ZNSt3__17promiseIvE10get_futureEv(auStack_68,*(undefined8 *)(lVar3 + 0xa0));
  func_0x00010789ad44(lVar3 + 0x98);
  uVar2 = *(undefined8 *)(lVar3 + 0xb0);
  func_0x000107898fb8(&puStack_60);
  *(undefined1 *)puStack_60 = 0;
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e69f0;
  puStack_50 = puStack_60;
  puStack_48 = (undefined8 *)lStack_58;
  if (lStack_58 != 0) {
    do {
      func_0x0001078a31ac();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = &PTR_DAT_1109e6a40;
  __ZNSt3__115recursive_mutexC1Ev(puVar1 + 4);
  puVar1[0xc] = puStack_60;
  puVar1[0xd] = lStack_58;
  puStack_50 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  puVar1[0xe] = lVar3;
  func_0x000100688f50(&puStack_50);
  puStack_50 = puVar1 + 3;
  puStack_48 = puVar1;
  func_0x0001078a33c0();
  func_0x00010789895c(uVar2,1,&puStack_50);
  func_0x000107898790(&puStack_50);
  __ZNSt3__16futureIvE3getEv(auStack_68);
  func_0x0001078a33a8();
  return;
}



/* Entry: 1078a1618; end: 1078a163f;  */

void FUN_1078a1618(undefined8 param_1)

{
  func_0x0001078a3400();
  func_0x0001078a3348(param_1,&PTR_DAT_1109e6780);
  func_0x0001078a32fc();
  return;
}



/* Entry: 1078a17d8; end: 1078a17eb;  */

void FUN_1078a17d8(void)

{
  func_0x0001078a181c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a1e60; end: 1078a1e63;  */

undefined8 FUN_1078a1e60(undefined8 param_1)

{
  func_0x0001078a33f0();
  func_0x0001078a1f8c();
  return param_1;
}



/* Entry: 1078a1fb4; end: 1078a2053;  */

void FUN_1078a1fb4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_58 [8];
  long alStack_50 [2];
  
  func_0x00010724bb70(alStack_50,param_1 + 1);
  if (alStack_50[0] != 0) {
    lVar1 = *param_1;
    FUN_1078a2284(auStack_58,lVar1,param_2,param_3,param_4);
    func_0x0001078a3478();
    func_0x0001078a34b0();
    if (lVar1 != 0) {
      func_0x0001078a3138();
    }
  }
  func_0x0001078a33b0();
  return;
}



/* Entry: 1078a2284; end: 1078a22e7;  */

void FUN_1078a2284(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_b8;
  undefined1 auStack_b0 [128];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x0001075281c8(auStack_b0,param_5);
  func_0x0001072fbc18(&uStack_b8,param_2,&uStack_30,auStack_b0);
  *param_1 = uStack_b8;
  func_0x0001078a33b8();
  return;
}



/* Entry: 1078a255c; end: 1078a2567;  */

undefined ** FUN_1078a255c(void)

{
  return &PTR_DAT_1109e68f0;
}



/* Entry: 1078a2690; end: 1078a2693;  */

void FUN_1078a2690(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a27f0; end: 1078a27fb;  */

undefined ** FUN_1078a27f0(void)

{
  return &PTR_DAT_1109e69d0;
}



/* Entry: 1078a294c; end: 1078a29bf;  */

void FUN_1078a294c(void)

{
  long unaff_x19;
  long lVar1;
  undefined1 auStack_28 [8];
  
  func_0x0001078a3280();
  if ((**(byte **)(unaff_x19 + 0x48) & 1) == 0) {
    lVar1 = *(long *)(unaff_x19 + 0x58);
    __ZNSt3__17promiseIvE10get_futureEv(auStack_28,*(undefined8 *)(lVar1 + 0xa8));
    __ZNSt3__17promiseIvE9set_valueEv(*(undefined8 *)(lVar1 + 0xa0));
    __ZNSt3__16futureIvE3getEv(auStack_28);
    func_0x0001078a33a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 8);
  return;
}



/* Entry: 1078a2e00; end: 1078a2e17;  */

void FUN_1078a2e00(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001078a2e34(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078a307c; end: 1078a3087;  */

void FUN_1078a307c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078a34a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078a3828; end: 1078a3907;  */

void FUN_1078a3828(undefined1 *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  *param_1 = 0;
  param_1[0x18] = 0;
  if ((((8 < param_2) || ((1 << (ulong)(param_2 & 0x1f) & 0x1a0U) == 0)) &&
      (lVar2 = *(long *)(param_3 + 0x20), lVar2 != 0)) &&
     ((*(char *)(lVar2 + 0x17) < '\0' && (0x7fff < *(ulong *)(lVar2 + 8))))) {
    func_0x0001078a8a9c(auStack_38);
    func_0x000100602604(param_1,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    uVar1 = *(ulong *)(param_1 + 8);
    if (-1 < (char)param_1[0x17]) {
      uVar1 = (ulong)(byte)param_1[0x17];
    }
    uVar3 = (ulong)*(char *)(*(long *)(param_3 + 0x20) + 0x17);
    if ((long)uVar3 < 0) {
      uVar3 = *(ulong *)(*(long *)(param_3 + 0x20) + 8);
    }
    if (uVar3 <= uVar1) {
      func_0x000104bffddc(param_1);
    }
  }
  return;
}



/* Entry: 1078a3dec; end: 1078a3e47;  */

ulong FUN_1078a3dec(long param_1)

{
  ulong uVar1;
  ulong unaff_x20;
  long unaff_x21;
  
  func_0x0001078a74a4();
  uVar1 = (ulong)*(byte *)(param_1 + 0x268);
  func_0x000107873b98(uVar1,*(undefined4 *)(unaff_x21 + 0x264),*(undefined8 *)(unaff_x21 + 0x270),
                      *(undefined8 *)(unaff_x21 + 0x278));
  func_0x000107873c38();
  if ((long)unaff_x20 <= (long)*(ulong *)(unaff_x21 + 0x168)) {
    unaff_x20 = *(ulong *)(unaff_x21 + 0x168);
  }
  if ((long)uVar1 <= (long)unaff_x20) {
    unaff_x20 = uVar1;
  }
  return unaff_x20;
}



/* Entry: 1078a41b0; end: 1078a45f3;  */

void FUN_1078a41b0(long *param_1,long param_2,byte *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int extraout_w10;
  int extraout_w10_00;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  long *plStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  long *plStack_8d0;
  undefined8 uStack_8c8;
  long lStack_8c0;
  long lStack_8b8;
  long lStack_8b0;
  long alStack_8a8 [2];
  undefined1 auStack_898 [504];
  undefined8 auStack_6a0 [4];
  undefined1 auStack_680 [8];
  undefined1 auStack_678 [496];
  long lStack_488;
  undefined1 auStack_480 [504];
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 *apuStack_270 [3];
  undefined8 *puStack_258;
  undefined8 uStack_58;
  
  func_0x0001078a72c0();
  uStack_58 = extraout_x8;
  func_0x0001072d488c(auStack_680);
  uVar4 = *param_3 - 1 == 5;
  switch(*param_3 - 1) {
  case 0:
    func_0x0001078a7374();
    func_0x0001078a736c();
    func_0x0001078a7318();
    func_0x0001078a7364();
    func_0x0001078a72a8();
    func_0x000107876098();
    break;
  case 1:
    func_0x0001078a7374();
    func_0x0001078a736c();
    func_0x0001078a7318();
    func_0x0001078a7364();
    func_0x0001078a72a8();
    func_0x000107875f24();
    break;
  case 2:
    func_0x0001078a7374();
    func_0x0001078a736c();
    func_0x0001078a7318();
    func_0x0001078a7364();
    func_0x0001078a72a8();
    func_0x000107876260();
    break;
  case 3:
    func_0x0001078a7374();
    func_0x0001078a736c();
    func_0x0001078a7318();
    func_0x0001078a7364();
    func_0x0001078a72a8();
    func_0x0001078761d8();
    break;
  case 4:
  case 5:
    func_0x0001078a7374();
    func_0x0001078a736c();
    func_0x0001078a7318();
    func_0x0001078a7364();
    func_0x0001078a72a8();
    FUN_107876150();
    break;
  default:
    goto LAB_1078a42ec;
  }
  func_0x0001072625b4(apuStack_270,&lStack_488);
  func_0x000104c2f1f0(auStack_678,apuStack_270);
  func_0x000104c2f714(apuStack_270);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_488);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_8e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_8d0);
LAB_1078a42ec:
  lVar7 = *(long *)(param_2 + 8);
  func_0x0001072fbe64(auStack_6a0,param_4);
  func_0x0001072d62a0(auStack_898,auStack_680);
  puVar6 = auStack_6a0;
  func_0x0001072fc5ec(&lStack_8b0);
  lVar3 = lStack_8b0;
  plVar8 = *(long **)(lVar7 + 0xf8);
  plVar9 = plVar8 + 2;
  puVar5 = (undefined8 *)*plVar8;
  uVar10 = *puVar5;
  lVar11 = puVar5[1];
  plStack_8d0 = plVar9;
  uStack_8c8 = uVar10;
  lStack_8c0 = lVar11;
  if (lVar11 != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10 != 0);
  }
  lStack_8b8 = lVar3;
  func_0x0001078a7328();
  *puVar6 = &PTR_DAT_1109e6d18;
  puVar6[1] = plVar9;
  puVar6[2] = uVar10;
  puVar6[3] = lVar11;
  uStack_8c8 = 0;
  lStack_8c0 = 0;
  puVar6[4] = lVar3;
  puStack_258 = puVar6;
  func_0x000100639330(lVar3 + 0x28,apuStack_270);
  func_0x0001006393ec(apuStack_270);
  func_0x00010724ae28(&uStack_8c8);
  plVar8 = *(long **)(lVar7 + 0xf8);
  plStack_8e8 = plVar8 + 2;
  puVar6 = (undefined8 *)*plVar8;
  uStack_8d8 = puVar6[1];
  uStack_8e0 = *puVar6;
  if (puVar6[1] != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10_00 != 0);
  }
  lVar3 = lStack_8b0;
  lStack_900 = lStack_8b0;
  puVar6 = *(undefined8 **)(lStack_8b0 + 0x48);
  uStack_8f0 = puVar6[1];
  uStack_8f8 = *puVar6;
  if (puVar6[1] != 0) {
    plVar8 = (long *)(puVar6[1] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar6 = (undefined8 *)((ulong)&lStack_900 | 8);
  func_0x00010724bb70(alStack_8a8,&uStack_8e0);
  plVar8 = plStack_8e8;
  if (alStack_8a8[0] != 0) {
    lStack_488 = lVar3;
    func_0x0001072d62a0(auStack_480,auStack_898);
    uStack_280 = uStack_8f8;
    lStack_288 = lStack_900;
    uStack_278 = uStack_8f0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar5 = (undefined8 *)0x238;
    __Znwm();
    func_0x0001078a6048(apuStack_270,&lStack_488);
    *puVar5 = &PTR_DAT_1109e6e58;
    puVar5[1] = plVar8;
    puVar5[2] = &UNK_1078a5320;
    puVar5[3] = 0;
    func_0x0001078a6048(puVar5 + 4,apuStack_270);
    func_0x0001078a6170(apuStack_270);
    apuStack_270[0] = puVar5;
    func_0x0001078a6170(&lStack_488);
    func_0x0001073ae140(alStack_8a8[0],apuStack_270);
    puVar5 = apuStack_270[0];
    apuStack_270[0] = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      func_0x0001078a729c();
    }
  }
  func_0x00010724bcd8(alStack_8a8);
  func_0x00010724ae28(puVar6);
  func_0x00010724ae28(&uStack_8e0);
  lVar3 = lStack_8b0;
  lStack_8b0 = 0;
  *param_1 = lVar3;
  func_0x0001072fbe0c(&lStack_8b0);
  func_0x00010724b374(auStack_898);
  func_0x0001072ad0c8(auStack_6a0);
  func_0x00010724b374(auStack_680);
  func_0x0001078a7288(uStack_58);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_8e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_8d0);
    func_0x00010724b374(auStack_680);
    do {
      func_0x0001078a7304();
    } while( true );
  }
  return;
}



/* Entry: 1078a4c9c; end: 1078a4def;  */

void FUN_1078a4c9c(long param_1,undefined8 **param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  int extraout_w10;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long alStack_c0 [2];
  long alStack_b0 [5];
  undefined1 auStack_88 [40];
  undefined8 *apuStack_60 [5];
  undefined8 uStack_38;
  
  func_0x0001078a72c0();
  lVar4 = *(long *)(param_1 + 8);
  uStack_38 = extraout_x8;
  func_0x0001078a67d8(alStack_b0);
  plVar1 = *(long **)(lVar4 + 0xf8);
  puVar3 = (undefined8 *)*plVar1;
  uStack_c8 = puVar3[1];
  uStack_d0 = *puVar3;
  if (puVar3[1] != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10 != 0);
  }
  func_0x00010724bb70(alStack_c0,&uStack_d0);
  if (alStack_c0[0] != 0) {
    func_0x0001078a67d8(auStack_88,alStack_b0);
    puVar3 = (undefined8 *)0x48;
    __Znwm();
    func_0x0001078a67d8(apuStack_60,auStack_88);
    *puVar3 = &PTR_DAT_1109e7070;
    puVar3[1] = plVar1 + 2;
    puVar3[2] = &UNK_1078a6678;
    puVar3[3] = 0;
    func_0x0001078a67d8(puVar3 + 4,apuStack_60);
    func_0x00010724bd1c(apuStack_60);
    apuStack_60[0] = puVar3;
    func_0x00010724bd1c(auStack_88);
    param_2 = apuStack_60;
    func_0x0001078a7354();
    puVar3 = apuStack_60[0];
    apuStack_60[0] = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      func_0x0001078a729c();
    }
  }
  func_0x00010724bcd8(alStack_c0);
  func_0x0001078a742c();
  func_0x00010724bd1c();
  func_0x0001078a7288(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = apuStack_60[0];
  apuStack_60[0] = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    func_0x0001078a729c();
  }
  func_0x00010724bcd8(alStack_c0);
  func_0x0001078a742c();
  plVar1 = alStack_b0;
  func_0x00010724bd1c();
  func_0x0001078a7304();
  plVar5 = plVar1 + 1;
  plVar2 = (long *)*plVar5;
  do {
    plVar6 = plVar5;
    if (plVar2 == (long *)0x0) {
code_r0x0001078a4e50:
      plVar2 = plVar1;
      func_0x0001078a7328();
      plVar2[4] = (long)param_2;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar5;
      *plVar6 = (long)plVar2;
      if (*(long *)*plVar1 != 0) {
        *plVar1 = *(long *)*plVar1;
      }
      func_0x00010002c5b0(plVar1[1],plVar2);
      plVar1[2] = plVar1[2] + 1;
      return;
    }
    while (plVar5 = plVar2, (undefined8 **)plVar5[4] <= param_2) {
      if (param_2 <= (undefined8 **)plVar5[4]) {
        return;
      }
      plVar2 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar6 = plVar5 + 1;
        goto code_r0x0001078a4e50;
      }
    }
    plVar2 = (long *)*plVar5;
  } while( true );
}



/* Entry: 1078a4f94; end: 1078a4fbf;  */

void FUN_1078a4f94(void)

{
  return;
}



/* Entry: 1078a51b4; end: 1078a521f;  */

void FUN_1078a51b4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_1109e6c58;
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[4] = param_2[3];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 4);
  lVar1 = param_2[6];
  uVar2 = param_2[5];
  param_1[7] = param_2[6];
  param_1[6] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1078a5744; end: 1078a5767;  */

void FUN_1078a5744(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x0001078a7328();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_DAT_1109e6d18;
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  lVar3 = param_1[3];
  puVar1[3] = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10 != 0);
  }
  puVar1[4] = puVar2[3];
  return;
}



/* Entry: 1078a59f4; end: 1078a5a1f;  */

void FUN_1078a59f4(void)

{
  return;
}



/* Entry: 1078a5fb0; end: 1078a5fbb;  */

undefined ** FUN_1078a5fb0(void)

{
  return &PTR_DAT_1109e6e28;
}



/* Entry: 1078a6198; end: 1078a619b;  */

undefined8 * FUN_1078a6198(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e6e98;
  func_0x00010724ae28(param_1 + 2);
  return param_1;
}



/* Entry: 1078a62a0; end: 1078a62b3;  */

void FUN_1078a62a0(void)

{
  func_0x0001078a6394();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a64d4; end: 1078a64df;  */

void FUN_1078a64d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xaf) < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 0x98));
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0xa8) = param_2[2];
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 1078a670c; end: 1078a671f;  */

void FUN_1078a670c(void)

{
  func_0x0001078a67ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a6918; end: 1078a6923;  */

undefined ** FUN_1078a6918(void)

{
  return &PTR_DAT_1109e7110;
}



/* Entry: 1078a6fb4; end: 1078a6fbf;  */

undefined ** FUN_1078a6fb4(void)

{
  return &PTR_DAT_1109e7190;
}



/* Entry: 1078a71f0; end: 1078a722f;  */

void FUN_1078a71f0(void)

{
  long unaff_x19;
  
  func_0x0001078a730c();
  if ((**(byte **)(unaff_x19 + 0x48) & 1) == 0) {
    __ZNSt3__17promiseIvE9set_valueEv(*(undefined8 *)(unaff_x19 + 0x58));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 8);
  return;
}



/* Entry: 1078a7840; end: 1078a79bb;  */

void FUN_1078a7840(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  char in_NG;
  char in_OV;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [28];
  undefined4 uStack_34;
  
  uStack_34 = 0;
  func_0x000108147d2c(*(undefined8 *)*param_2,param_3,param_4,((undefined8 *)*param_2)[1],&uStack_34
                     );
  func_0x0001078a8a90();
  if (in_NG == in_OV) {
    func_0x0001078a8968();
    func_0x0001078a8a04();
    func_0x0001078a8a5c();
    func_0x0001078a897c();
    func_0x0001078a8a24();
    func_0x0001078a894c();
    func_0x0001078a8a44();
  }
  else {
    uVar5 = *(undefined8 *)(*param_2 + 8);
    func_0x000108146c44(uVar5);
    func_0x0001078a8a1c(param_1,(long)(int)uVar5);
    uVar6 = *(undefined8 *)(*param_2 + 8);
    cVar4 = *(char *)((long)param_1 + 0x17) < '\0';
    cVar3 = '\0';
    plVar1 = (long *)*param_1;
    if (!(bool)cVar4) {
      plVar1 = param_1;
    }
    func_0x000108148e80(uVar6,plVar1,uVar5,10,&uStack_34);
    func_0x0001078a80e8(param_1,(long)(int)uVar6);
    func_0x0001078a8a90();
    if (cVar4 != cVar3) {
      return;
    }
    func_0x0001078a8968();
    func_0x0001078a8a04();
    func_0x0001078a8a5c();
    func_0x0001078a897c();
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (param_1,auStack_50);
    func_0x0001078a894c();
    ___cxa_throw(param_1);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1078a7954);
  (*pcVar2)();
}



/* Entry: 1078a827c; end: 1078a82a7;  */

long * FUN_1078a827c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = (long *)(param_2 * 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  func_0x0001078a82d4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078a8660; end: 1078a867f;  */

void FUN_1078a8660(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 1078a8860; end: 1078a888f;  */

undefined8 * FUN_1078a8860(undefined8 *param_1)

{
  func_0x000108144acc(*param_1);
  func_0x000108144acc(param_1[1]);
  return param_1;
}



/* Entry: 1078a92f4; end: 1078a93bb;  */

void FUN_1078a92f4(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  
  func_0x0001078a93bc();
  func_0x0001078a93f4();
  func_0x0001078a93f4();
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x17);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
            (param_1,uVar1 + param_4 + 0xc);
  func_0x0001078a9564();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_1,param_2,4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,param_3,param_4);
  func_0x0001078a9564();
  return;
}



/* Entry: 1078a95d4; end: 1078a9673;  */

void FUN_1078a95d4(long param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 extraout_x8;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lStack_38;
  
  func_0x0001078a9b2c();
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



/* Entry: 1078a9a60; end: 1078a9b0b;  */

undefined8 FUN_1078a9a60(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (0x7f < uVar1) {
    if (uVar1 < 0x800) {
      func_0x0001078a9b24(param_1,uVar1 >> 6 | 0xffffffc0);
    }
    else {
      if (uVar1 >> 0x10 == 0) {
        func_0x0001078a9b24(param_1,uVar1 >> 0xc | 0xffffffe0);
      }
      else {
        func_0x0001078a9b24(param_1,uVar1 >> 0x12 | 0xfffffff0);
        func_0x0001078a9b24();
      }
      func_0x0001078a9b24();
    }
  }
  func_0x0001078a9b24();
  return param_2;
}



/* Entry: 1078a9ca0; end: 1078aa2e3;  */

undefined8 * FUN_1078a9ca0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong *puVar5;
  char extraout_w8;
  char extraout_w8_00;
  char extraout_w8_01;
  char extraout_w8_02;
  char extraout_w8_03;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 uVar10;
  byte *pbVar11;
  undefined4 auStack_150 [2];
  undefined8 *puStack_148;
  undefined1 uStack_140;
  undefined4 auStack_138 [2];
  undefined4 uStack_130;
  undefined4 auStack_128 [2];
  undefined4 uStack_120;
  undefined1 auStack_118 [24];
  ulong auStack_100 [3];
  ulong uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  
  *param_1 = &PTR_DAT_1109e7328;
  param_1[1] = &UNK_10e52b660;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  puVar2 = param_1;
  FUN_1077f3c4c();
  func_0x0001077f3790();
  param_1[6] = puVar2 + 1;
  func_0x00010785f1f4();
  puVar7 = param_1 + 9;
  *puVar7 = 0;
  param_1[7] = puVar2;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar8 = param_1[6];
  uStack_70 = 0;
  iVar9 = 9;
  do {
    iVar9 = iVar9 + -1;
    if (iVar9 == 0) break;
    _glGetError();
  } while ((int)puVar2 != 0);
  pbVar3 = (byte *)0x821b;
  _glGetIntegerv(0x821b,(long)&uStack_70 + 4);
  _glGetError();
  if (((int)pbVar3 == 0) && (0 < uStack_70._4_4_)) {
    pbVar3 = (byte *)0x821c;
    _glGetIntegerv(0x821c,&uStack_70);
    _glGetError();
    if ((int)pbVar3 == 0) {
      auStack_100[2] = uStack_70 & 0xffffffff;
      auStack_100[0] = uStack_70 >> 0x20;
      auStack_100[1] = 0;
      uStack_e8 = 0;
      func_0x0001003a91d4(&UNK_10f432fb8);
      func_0x0001078af368();
      func_0x000100066230(puVar7,&pbStack_90);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pbStack_90);
LAB_1078a9e68:
      if (uStack_70._4_4_ < 3) {
        func_0x00010002b838(auStack_100,&UNK_10f43301a);
        func_0x0001078af180();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
      }
      uVar10 = 2;
      if (uStack_70._4_4_ != 3 || (int)uStack_70 < 2) {
        uVar10 = 0;
      }
      if (uStack_70._4_4_ == 3 && (int)uStack_70 == 1) {
        uVar10 = 1;
      }
      goto LAB_1078a9ec8;
    }
  }
  func_0x0001078af4fc(PTR__glGetString_113230848);
  if (pbVar3 == (byte *)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
              (puVar7,&UNK_10f432ff4);
    func_0x00010002b838(auStack_100,&UNK_10f432ff4);
    func_0x0001078af180();
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puVar7,pbVar3);
    for (pbVar11 = pbVar3; *pbVar11 != 0; pbVar11 = pbVar11 + 1) {
      if ((*pbVar11 - 0x30 < 10) &&
         (pbVar4 = pbVar11, _sscanf(pbVar11,&DAT_10f432fc8), (int)pbVar4 == 2)) goto LAB_1078a9e68;
    }
    uStack_88 = 0;
    pbStack_90 = pbVar3;
    func_0x0001003a91d4(&UNK_10f432fce);
    func_0x0001003a9204(auStack_100);
    func_0x0001078af180();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  uVar10 = 0;
LAB_1078a9ec8:
  auStack_100[2] = uStack_70 & 0xffffffff;
  auStack_100[0] = uStack_70 >> 0x20;
  auStack_100[1] = 0;
  uStack_e8 = 0;
  func_0x0001003a91d4(&UNK_10f2e0482);
  func_0x0001078af368();
  auStack_100[0] = CONCAT44(auStack_100[0]._4_4_,0xe2);
  uStack_e8 = uStack_e8 & 0xffffffff00000000;
  uStack_d0 = 0;
  uStack_c8 = 0;
  func_0x0001078af3c0();
  uStack_d8 = 0;
  uStack_b8 = 0;
  uStack_b4 = 1;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_118,&pbStack_90);
  puVar5 = auStack_100;
  func_0x00010726e300(puVar5,"version",auStack_118);
  func_0x00010729d56c();
  auStack_128[0] = 1;
  uStack_120 = 0;
  auStack_138[0] = 0;
  uStack_130 = 0;
  func_0x00010743fa9c(uVar8,puVar5,auStack_128,auStack_138,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
  func_0x000107262330(auStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pbStack_90);
  lVar6 = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0xc) = uVar10;
  *(undefined2 *)(param_1 + 0x22) = 0x100;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((long)param_1 + 0xe9) = 0;
  *(undefined8 *)((long)param_1 + 0xe1) = 0;
  *(undefined1 *)((long)param_1 + 0xf1) = 1;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined1 *)((long)param_1 + 0x10c) = 1;
  do {
    *(undefined8 *)((long)param_1 + lVar6 + 0x114) = 0;
    *(undefined1 *)((long)param_1 + lVar6 + 0x11c) = 1;
    lVar6 = lVar6 + 0xc;
  } while (lVar6 != 0x60);
  *(undefined4 *)((long)param_1 + 0x174) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *(undefined4 *)((long)param_1 + 0x17c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)((long)param_1 + 0x184) = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined1 *)((long)param_1 + 0x194) = 1;
  param_1[0x33] = param_1;
  auStack_150[0] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = param_1;
  *(undefined1 *)(param_1 + 0x36) = 1;
  uStack_140 = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined1 *)((long)param_1 + 0x1bc) = 1;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  puStack_148 = param_1;
  func_0x0001078ae578(auStack_150);
  *(undefined4 *)(param_1 + 0x3b) = 4;
  *(undefined1 *)((long)param_1 + 0x1dc) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 4;
  *(undefined1 *)((long)param_1 + 0x1e4) = 1;
  param_1[0x3d] = 7;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 500) = 1;
  *(undefined4 *)(param_1 + 0x3f) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1fc) = 1;
  *(undefined2 *)(param_1 + 0x40) = 0x100;
  *(undefined4 *)((long)param_1 + 0x203) = 0x1010101;
  param_1[0x41] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x42) = 1;
  *(undefined2 *)((long)param_1 + 0x214) = 0x101;
  *(undefined2 *)((long)param_1 + 0x217) = 0x100;
  *(undefined2 *)((long)param_1 + 0x21a) = 0x101;
  *(undefined2 *)((long)param_1 + 0x21d) = 0x101;
  *(undefined2 *)(param_1 + 0x44) = 0x100;
  *(undefined2 *)((long)param_1 + 0x223) = 1;
  *(undefined1 *)((long)param_1 + 0x225) = 1;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  *(undefined4 *)((long)param_1 + 0x23c) = 0x1010101;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined4 *)((long)param_1 + 0x244) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x49) = 1;
  *(undefined8 *)((long)param_1 + 0x254) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined1 *)((long)param_1 + 0x25c) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)((long)param_1 + 0x264) = 1;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x26c) = 1;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)((long)param_1 + 0x274) = 1;
  *(undefined2 *)(param_1 + 0x4f) = 0x100;
  *(undefined2 *)((long)param_1 + 0x27b) = 0x101;
  *(undefined2 *)((long)param_1 + 0x27e) = 0x101;
  _bzero(param_1 + 0x51,0x122);
  param_1[0x7a] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0x3f800000;
  param_1[0x7c] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  func_0x0001078af428();
  cVar1 = extraout_w8 + '\x10';
  func_0x0001078af310();
  *(char *)((long)param_1 + 0x3e9) = cVar1;
  param_1[0x7e] = 0;
  func_0x0001078af428();
  cVar1 = extraout_w8_00 + -0x20;
  func_0x0001078af310();
  *(char *)(param_1 + 0x7f) = cVar1;
  func_0x0001078af428();
  cVar1 = extraout_w8_01 + 'P';
  func_0x0001078af310();
  *(char *)((long)param_1 + 0x3f9) = cVar1;
  func_0x0001078af428();
  cVar1 = extraout_w8_02 + -0x80;
  func_0x0001078af310();
  *(char *)((long)param_1 + 0x3fa) = cVar1;
  func_0x0001078af428();
  cVar1 = extraout_w8_03 + -0x70;
  func_0x0001078af310();
  *(char *)((long)param_1 + 0x3fb) = cVar1;
  return param_1;
}



/* Entry: 1078aad3c; end: 1078aae9b;  */

void FUN_1078aad3c(long param_1)

{
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_24 = 0;
  _glGetIntegerv(0xd33,&iStack_24);
  *(long *)(param_1 + 0x380) = (long)iStack_24;
  iStack_28 = 0;
  _glGetIntegerv(0x851c,&iStack_28);
  *(long *)(param_1 + 0x388) = (long)iStack_28;
  iStack_2c = 0;
  _glGetIntegerv(0x8869,&iStack_2c);
  *(long *)(param_1 + 0x390) = (long)iStack_2c;
  iStack_30 = 0;
  _glGetIntegerv(0x8b4a,&iStack_30);
  *(long *)(param_1 + 0x3a0) = (long)iStack_30;
  iStack_34 = 0;
  _glGetIntegerv(0x8a30,&iStack_34);
  *(long *)(param_1 + 0x398) = (long)iStack_34;
  func_0x0001073c8a0c(param_1,*(undefined8 *)(param_1 + 0x30),param_1 + 0x380,&UNK_10f432ccd);
  return;
}



/* Entry: 1078ab688; end: 1078ab8f7;  */

void FUN_1078ab688(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,ulong param_7)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  long lStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  uStack_68 = param_3;
  func_0x0001078ab49c(auStack_88,param_2,0);
  puVar6 = &uStack_68;
  func_0x0001078b5334(puVar6,param_6);
  plVar1 = (long *)(param_2 + 0x80);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + (long)puVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puStack_90 = puVar6;
  func_0x0001078ab8f8(&lStack_98,auStack_88,&puStack_90);
  auStack_a0[0] = 0;
  func_0x0001078ab940(param_2 + 0xf0,auStack_a0);
  auStack_a0[0] = 0;
  uStack_9c = *(undefined4 *)(lStack_98 + 0x10);
  func_0x0001078af48c();
  func_0x0001078af888(param_6);
  func_0x0001073da214(param_5,0,param_6,1);
  uVar11 = param_5 >> 0x20 & 0xff;
  *(char *)(lStack_98 + 0x30) = (char)param_5;
  *(char *)(lStack_98 + 0x31) = (char)(param_5 >> 8);
  *(char *)(lStack_98 + 0x32) = (char)(param_5 >> 0x10);
  *(char *)(lStack_98 + 0x33) = (char)(param_5 >> 0x18);
  *(char *)(lStack_98 + 0x34) = (char)(param_5 >> 0x20);
  uVar5 = (int)param_6 - 0x2c;
  if ((uVar5 & 0xff) < 0xe4) {
    func_0x0001078af564();
    _glTexImage2D();
  }
  else {
    func_0x0001078af564();
    _glCompressedTexImage2D();
  }
  uVar9 = (uint)((param_5 & 0xffffffffff) >> 0x10) & 0xff;
  uVar12 = 0x2901;
  uVar10 = uVar12;
  if (uVar9 != 1) {
    uVar10 = 0x812f;
  }
  uVar2 = 0x8370;
  if (uVar9 != 2) {
    uVar2 = uVar10;
  }
  _glTexParameteri(0xde1,0x2802,uVar2);
  uVar9 = (uint)((param_5 & 0xffffffffff) >> 0x18) & 0xff;
  if (uVar9 != 1) {
    uVar12 = 0x812f;
  }
  uVar10 = 0x8370;
  if (uVar9 != 2) {
    uVar10 = uVar12;
  }
  _glTexParameteri(0xde1,0x2803,uVar10);
  uVar7 = (ulong)((uint)param_5 & 0xff);
  func_0x0001078af7e4(uVar7);
  _glTexParameteri(0xde1,0x2801,uVar7);
  uVar10 = 0x2600;
  if (((uint)(param_5 >> 8) & 0xff) - 3 < 3) {
    uVar10 = 0x2601;
  }
  _glTexParameteri(0xde1,0x2800,uVar10);
  if ((int)uVar11 == 0) {
    uVar11 = 0;
    uVar8 = 0x884c;
  }
  else {
    func_0x0001078af468(0xde1);
    func_0x0001078af874(uVar11);
    uVar8 = 0x884d;
  }
  _glTexParameteri(0xde1,uVar8,uVar11);
  if (((uVar5 & 0xff) < 0xe4) && ((param_7 & 1) != 0)) {
    _glGenerateMipmap(0xde1);
    *(undefined1 *)(lStack_98 + 0x35) = 1;
  }
  *param_1 = lStack_98;
  func_0x0001078ae5e4(auStack_88);
  return;
}



/* Entry: 1078abf78; end: 1078abfd7;  */

void FUN_1078abf78(void)

{
  undefined1 in_ZR;
  uint extraout_w9;
  
  func_0x0001078af15c();
  if (((extraout_w9 & 1) != 0) || (func_0x0001078af2d0(), !(bool)in_ZR)) {
    func_0x0001078af14c();
    func_0x0001078b6624();
  }
  return;
}



/* Entry: 1078ac8ec; end: 1078acaef;  */

void FUN_1078ac8ec(int param_1)

{
  func_0x0001078af2dc();
  func_0x0001078aecac();
  if (param_1 != 0) {
    func_0x0001078af5b0();
    func_0x0001078b63ec();
  }
  return;
}



/* Entry: 1078ad91c; end: 1078ada63;  */

void FUN_1078ad91c(undefined8 param_1,undefined8 param_2,int param_3,long param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  undefined4 uVar4;
  long lVar5;
  long unaff_x19;
  undefined8 *puVar6;
  
  func_0x0001078af3e0();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001078af4c4();
  }
  puVar2 = PTR__glDrawElementsInstanced_113230888;
  uVar3 = (int)param_6 == 1;
  if ((bool)uVar3) {
    func_0x0001078af294();
    uVar4 = 0x1405;
    if (param_3 != 1) {
      uVar4 = 0x500;
    }
    uVar3 = param_3 == 0;
    uVar1 = 0x1403;
    if (!(bool)uVar3) {
      uVar1 = uVar4;
    }
    lVar5 = 1;
    if (!(bool)uVar3) {
      lVar5 = 2;
    }
    _glDrawElements(param_1,param_5,uVar1,param_4 << lVar5);
  }
  else if ((*(byte *)(unaff_x19 + 0x3e9) & 1) == 0) {
    lVar5 = *(long *)(unaff_x19 + 0xd8);
    if ((lVar5 == 0) || (uVar3 = 1, *(char *)(lVar5 + 0x30) == '\x02')) goto LAB_1078ada40;
    puVar6 = *(undefined8 **)(lVar5 + 0x40);
    func_0x0001078af294();
    uVar4 = 0x1405;
    if (param_3 != 1) {
      uVar4 = 0x500;
    }
    uVar3 = param_3 == 0;
    uVar1 = 0x1403;
    if (!(bool)uVar3) {
      uVar1 = uVar4;
    }
    lVar5 = 1;
    if (!(bool)uVar3) {
      lVar5 = 2;
    }
    (*(code *)*puVar6)(param_1,param_5,uVar1,param_4 << lVar5,param_6);
  }
  else {
    func_0x0001078af294();
    uVar4 = 0x1405;
    if (param_3 != 1) {
      uVar4 = 0x500;
    }
    uVar3 = param_3 == 0;
    uVar1 = 0x1403;
    if (!(bool)uVar3) {
      uVar1 = uVar4;
    }
    lVar5 = 1;
    if (!(bool)uVar3) {
      lVar5 = 2;
    }
    (*(code *)puVar2)(param_1,param_5,uVar1,param_4 << lVar5,param_6);
  }
  *(int *)(unaff_x19 + 0xa8) = *(int *)(unaff_x19 + 0xa8) + (int)param_6;
LAB_1078ada40:
  func_0x0001078af3f8();
  if ((bool)uVar3) {
    func_0x0001078af410();
  }
  return;
}



/* Entry: 1078ae0dc; end: 1078ae147;  */

bool FUN_1078ae0dc(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iStack_2c;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  _glCreateShader();
  *param_3 = param_2;
  _glShaderSource();
  _glCompileShader(*param_3);
  iStack_2c = 0;
  _glGetShaderiv(*param_3,0x8b81,&iStack_2c);
  return iStack_2c == 1;
}



/* Entry: 1078ae520; end: 1078ae53f;  */

undefined4 FUN_1078ae520(uint param_1)

{
  if (param_1 < 0x1c) {
    return *(undefined4 *)(&UNK_10deb44b8 + (ulong)param_1 * 4);
  }
  return 0x1406;
}



/* Entry: 1078ae630; end: 1078ae647;  */

void FUN_1078ae630(long *param_1,long param_2)

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



/* Entry: 1078ae75c; end: 1078ae773;  */

void FUN_1078ae75c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078ae93c; end: 1078ae94f;  */

void FUN_1078ae93c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078aea40; end: 1078aea53;  */

undefined ** FUN_1078aea40(void)

{
  return &PTR_DAT_1109e7568;
}



/* Entry: 1078aebc0; end: 1078aebe3;  */

void FUN_1078aebc0(void)

{
  undefined1 in_ZR;
  
  func_0x0001078af35c();
  if ((bool)in_ZR) {
    func_0x0001078af350();
    func_0x0001078affc4();
  }
  return;
}



/* Entry: 1078aedd8; end: 1078aee0b;  */

void FUN_1078aedd8(long param_1)

{
  undefined1 in_ZR;
  
  func_0x0001078af35c(param_1 + 0x18);
  if ((bool)in_ZR) {
    func_0x0001078af350();
    func_0x0001078aff9c();
  }
  return;
}



/* Entry: 1078afce8; end: 1078afd7b;  */

void FUN_1078afce8(long param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x34) == '\x01') {
    func_0x0001078abfa8(*(long *)(param_1 + 8) + 0xf4,param_1 + 0x18);
    uStack_28 = *(undefined8 *)(param_1 + 0x10);
    uStack_30 = 0;
    func_0x0001078afd3c(*(long *)(param_1 + 8) + 0xfc,&uStack_30);
  }
  return;
}



/* Entry: 1078afe98; end: 1078afe9b;  */

void FUN_1078afe98(void)

{
  return;
}



/* Entry: 1078b0140; end: 1078b019b;  */

ulong FUN_1078b0140(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((*(long *)(param_1 + 0x38) == 0) &&
     (func_0x0001078b0410(param_1), *(long *)(param_1 + 0x38) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + (*(ulong *)(param_1 + 0x30) >> 10) * 8)
                     + (*(ulong *)(param_1 + 0x30) & 0x3ff) * 4);
    func_0x0001078b04c0(param_1 + 0x10);
    uVar2 = (ulong)uVar1 | 0x100000000;
  }
  return uVar2;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003d21d8; end: 1003d22cb;  */

undefined * FUN_1003d21d8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    FUN_1000285a8(0x112d5f6c0,&UNK_10d93d7c0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar10 = *puVar9;
      func_0x000107c61434(uVar3);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003d22c8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003d22cc);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1003d22cc; end: 1003d241f; -[SCRetriableRequestTrackFunnelEventTracker initWithAdConfigProvider:adConfigProviderV2:trackFunnelEventTracker:timeProvider:trackMetricsManager:version:] */

undefined1 *
FUN_1003d22cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126ed858;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d2420; end: 1003d2493; -[SCGtqRetriableRequestPreparer initWithSnapTokenProvider:] */

undefined1 * FUN_1003d2420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702900;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d2494; end: 1003d24a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1003d2494(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_1130440e0;
  lVar2 = *(long *)(unaff_x20 + _DAT_1130440e0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1003a5b88(*(undefined8 *)(unaff_x20 + _DAT_1130440d8));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 1003d24a8; end: 1003d2513;  */

long FUN_1003d24a8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    FUN_1003a5b88(*(undefined8 *)(unaff_x20 + *param_2));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 1003d2514; end: 1003d25c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d2514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113043cc8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113043cd0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113043cd8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113043ce0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113043ce8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113043cf0) = param_6;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003d25c8; end: 1003d2633;  */

void FUN_1003d25c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d2634; end: 1003d263b;  */

void FUN_1003d2634(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d263c; end: 1003d268f;  */

void FUN_1003d263c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d2690; end: 1003d2697;  */

void FUN_1003d2690(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_100098788();
  func_0x000107c613fc();
  FUN_1003d270c(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d2698; end: 1003d270b;  */

void FUN_1003d2698(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_100098788();
  func_0x000107c613fc();
  FUN_1003d270c(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 1003d270c; end: 1003d2867;  */

void FUN_1003d270c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7260;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 1003d2868; end: 1003d291b; -[SCNetworkConnectivityAnnouncerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d2868(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b73f8;
  func_0x000107c610f4(PTR_PTR_1126b73f8);
  param_1 = param_1 + _DAT_1127215c8;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c4d598();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c47a44(puVar1,param_2,lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  puVar4 = PTR_PTR_1126b7400;
  func_0x000107c610f4(PTR_PTR_1126b7400);
  func_0x000107c47a3c();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1003d291c; end: 1003d292b; -[_TtC36SCNetworkConnectivityMonitorServices36SCNetworkConnectivityMonitorServices networkConnectivityMonitor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d291c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113080ad0));
  return;
}



/* Entry: 1003d292c; end: 1003d2af7; -[SCNetworkConnectivityAnnouncer initWithNetworkConnectivityMonitor:] */

undefined8 * FUN_1003d292c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  puStack_48 = PTR_PTR_112706540;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126e02f0;
    func_0x000107c61160();
    uVar5 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar5 = puVar1[4];
    puVar1[4] = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_DAT_1126a5c20;
    func_0x000107c61174(param_3);
    uVar3 = param_3;
    FUN_10010fab4(param_3,puVar2);
    uVar5 = param_3;
    if ((int)uVar3 == 0) {
      uVar5 = 0;
    }
    func_0x000107c61174(uVar5);
    func_0x000107c61170(param_3);
    func_0x000107c61174(uVar5);
    uVar3 = puVar1[3];
    puVar1[3] = uVar5;
    func_0x000107c61170(uVar3);
    func_0x000107c61144(auStack_58,puVar1);
    uVar4 = puVar1[3];
    func_0x000107c4d5a4();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_60,auStack_58);
    uVar3 = uVar4;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar6 = puVar1[1];
    puVar1[1] = uVar3;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1003d2af8; end: 1003d2b17; -[SCNetworkConnectivityListenerAnnouncer .cxx_construct] */

void FUN_1003d2af8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1003d2b18; end: 1003d2b77;  */

/* WARNING: Possible PIC construction at 0x0001003d2b54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003d2b58) */

void FUN_1003d2b18(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c40ef0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1003d2b78; end: 1003d2be3; -[SCNetworkConnectivityAnnouncer _setConnectivityStatus:] */

void FUN_1003d2b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c4d5a8(*(undefined8 *)(param_1 + 0x10));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x1003db728;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_3;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_48);
  return;
}



/* Entry: 1003d2be4; end: 1003d2c43;  */

void FUN_1003d2be4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  func_0x000107c60c40(param_2);
  func_0x000107c60dc4();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 1003d2c44; end: 1003d2d1b; -[SCNetworkConnectivityListenerAnnouncer networkConnectivityStatusDidChange:] */

void FUN_1003d2c44(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  FUN_1003d2be4(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      func_0x000107c61148(lVar6);
      func_0x000107c4d5a8();
      func_0x000107c61170(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 1003d2d1c; end: 1003d2d8f; -[SCNetworkConnectivityAnnouncerServices initWithNetworkConnectivityAnnouncer:] */

undefined1 * FUN_1003d2d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112706548;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d2d90; end: 1003d2dbb;  */

void FUN_1003d2d90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d2dbc; end: 1003d2de7;  */

void FUN_1003d2dbc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1003d2de8; end: 1003d2fbf; -[SCGtqNetworkServiceProvider provide] */

void FUN_1003d2de8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_100b90044;
  puStack_78 = &UNK_1108c0230;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_b8 = puVar3;
  uStack_b0 = 0xc2000000;
  puStack_a8 = &UNK_10591aa74;
  puStack_a0 = &UNK_1108c0260;
  func_0x000107c6111c(auStack_98,auStack_68);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_c0,auStack_68);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126c0288;
  func_0x000107c610f4(PTR_PTR_1126c0288);
  func_0x000107c48390();
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_98);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1003d2fc0; end: 1003d30bb; -[SCGtqNetworkServices initWithRequestManager:dataProvider:requestInfoProvider:unlockablesRequestManager:] */

undefined1 *
FUN_1003d2fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1127028f0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d30bc; end: 1003d3127;  */

void FUN_1003d30bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d3128; end: 1003d312f;  */

void FUN_1003d3128(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d3130; end: 1003d3183;  */

void FUN_1003d3130(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d3184; end: 1003d318f;  */

void FUN_1003d3184(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10022de54();
  func_0x000107c613fc();
  FUN_1003d39b4(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d3190; end: 1003d3223;  */

void FUN_1003d3190(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10022de54();
  func_0x000107c613fc();
  FUN_1003d39b4(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1003d3224; end: 1003d322b;  */

void FUN_1003d3224(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d322c; end: 1003d327f;  */

void FUN_1003d322c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d3280; end: 1003d328f;  */

void FUN_1003d3280(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10022d048();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  func_0x0001003d3728(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_1003d37a8();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  func_0x0001003d37f0();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003d3290; end: 1003d3437;  */

void FUN_1003d3290(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10022d048();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  func_0x0001003d3728(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_1003d37a8();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  func_0x0001003d37f0();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1003d3438; end: 1003d343f;  */

void FUN_1003d3438(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d3440; end: 1003d3493;  */

void FUN_1003d3440(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d3494; end: 1003d349b;  */

void FUN_1003d3494(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1001ae53c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_1003d3580(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_1003d35fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  func_0x0001003d3624();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003d349c; end: 1003d357f;  */

void FUN_1003d349c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1001ae53c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1003d3580(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_1003d35fc();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  func_0x0001003d3624();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 1003d3580; end: 1003d35fb;  */

void FUN_1003d3580(undefined8 param_1)

{
  if (lRam0000000112dd3dc0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e658ba4);
  return;
}



/* Entry: 1003d35fc; end: 1003d36fb;  */

void FUN_1003d35fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1003d36fc; end: 1003d37a7;  */

void FUN_1003d36fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d37a8; end: 1003d38e7;  */

void FUN_1003d37a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 1003d38e8; end: 1003d3923;  */

void FUN_1003d38e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d3924; end: 1003d396f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d3924(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113012e50) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003d3970; end: 1003d39b3;  */

void FUN_1003d3970(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d39b4; end: 1003d3b93;  */

void FUN_1003d39b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a82c8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef133a0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1003d3b94; end: 1003d3caf; -[SCLensMetadataMapperServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d3b94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_1127262a4;
    func_0x000107c61148();
  }
  lVar1 = lVar5;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_1127262a8;
    func_0x000107c61148();
  }
  lVar2 = lVar5;
  func_0x000107c3d40c();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_1055c290c;
  puStack_48 = &UNK_11089be80;
  puVar3 = PTR_PTR_1126ae720;
  lStack_40 = lVar1;
  lStack_38 = lVar2;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_60);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126bb758;
  func_0x000107c610f4(PTR_PTR_1126bb758);
  func_0x000107c47368();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1003d3cb0; end: 1003d3cbf; -[_TtC26AdRenderDataMapperServices26AdRenderDataMapperServices adRenderDataMapperService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d3cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113012e50));
  return;
}



/* Entry: 1003d3cc0; end: 1003d3ccb; -[SCCircumstanceEngineConfigProvider setFeatureSettingsService:] */

void FUN_1003d3cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1003d3ccc; end: 1003d3d3f; -[SCLensMetadataMappingServices initWithLensMetadataMapper:] */

undefined1 * FUN_1003d3ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127019c8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d3d40; end: 1003d3d73;  */

void FUN_1003d3d40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d3d74; end: 1003d3e57; -[SCLensMetadataFetchingServiceProvider provide] */

void FUN_1003d3d74(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bbea0;
  func_0x000107c610f4(PTR_PTR_1126bbea0);
  func_0x000107c47360();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003d3e58; end: 1003d3ecb; -[SCLensMetadataFetchingServices initWithLensMetadataFetcher:] */

undefined1 * FUN_1003d3e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701a08;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d3ecc; end: 1003d3f17;  */

void FUN_1003d3ecc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d3f18; end: 1003d3f1f;  */

void FUN_1003d3f18(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7980;
  func_0x000107c610f8();
  func_0x000107c48b00();
  func_0x000107c61170(unaff_x20);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003d3f20; end: 1003d3f73;  */

void FUN_1003d3f20(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7980;
  func_0x000107c610f8();
  func_0x000107c48b00();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003d3f74; end: 1003d3fe7; -[SCUcoStudySettingsServices initWithStudySettingsProvider:] */

undefined1 * FUN_1003d3f74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127028c8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d3fe8; end: 1003d3fef;  */

void FUN_1003d3fe8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x170);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d3ff0; end: 1003d4043;  */

void FUN_1003d3ff0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x170);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d4044; end: 1003d404b;  */

void FUN_1003d4044(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d404c; end: 1003d409f;  */

void FUN_1003d404c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d40a0; end: 1003d40af;  */

void FUN_1003d40a0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1001f5c40();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  FUN_1003d4424(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_1003d44a8();
  *(undefined8 *)(lVar1 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  func_0x0001003d44f8();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x40) = uVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003d40b0; end: 1003d428f;  */

void FUN_1003d40b0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1001f5c40();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_1003d4424(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_1003d44a8();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  func_0x0001003d44f8();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 1003d4290; end: 1003d42df;  */

void FUN_1003d4290(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126adba8;
  func_0x000107c610f8();
  func_0x000107c45e4c();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003d42e0; end: 1003d4353; -[SCRTUSServices initWithClientCacheManager:] */

undefined1 * FUN_1003d42e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702ea8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d4354; end: 1003d435b;  */

void FUN_1003d4354(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126adb98;
  func_0x000107c610f8();
  func_0x000107c48244();
  func_0x000107c61170(unaff_x20);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003d435c; end: 1003d43af;  */

void FUN_1003d435c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126adb98;
  func_0x000107c610f8();
  func_0x000107c48244();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003d43b0; end: 1003d4423; -[SCRTUSConfigServices initWithRTUSConfigProvider:] */

undefined1 * FUN_1003d43b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702e98;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d4424; end: 1003d44a7;  */

void FUN_1003d4424(undefined8 param_1)

{
  if (lRam0000000112de7700 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6652f0);
  return;
}



/* Entry: 1003d44a8; end: 1003d46ab;  */

void FUN_1003d44a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return;
}



/* Entry: 1003d46ac; end: 1003d46b3; -[SCRTUSConfigServices rtusConfigProvider] */

undefined8 FUN_1003d46ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003d46b4; end: 1003d46bb; -[SCRTUSServices clientCacheManager] */

undefined8 FUN_1003d46b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003d46bc; end: 1003d472f; -[SCLensInteractionHistoryServices initWithInteractionHistoryProvider:] */

undefined1 * FUN_1003d46bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701a48;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d4730; end: 1003d477b;  */

void FUN_1003d4730(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d477c; end: 1003d4783;  */

void FUN_1003d477c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d4784; end: 1003d47d7;  */

void FUN_1003d4784(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d47d8; end: 1003d47e7;  */

void FUN_1003d47d8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10021bc40();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  func_0x0001003d4d6c(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  func_0x000107c615f4(uStack_80,2);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_1003d4df8();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_1003d4e0c();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uStack_80);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x40) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003d47e8; end: 1003d49bf;  */

void FUN_1003d47e8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10021bc40();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  func_0x0001003d4d6c(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  func_0x000107c615f4(uStack_80,2);
  uVar3 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar4 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_1003d4df8();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_1003d4e0c();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uStack_80);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x40) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1003d49c0; end: 1003d49c7;  */

void FUN_1003d49c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d49c8; end: 1003d4a1b;  */

void FUN_1003d49c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003d4a1c; end: 1003d4a23;  */

void FUN_1003d4a1c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1001e0104();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_1003d4b00(0);
  func_0x000107c613fc();
  func_0x000107c615f4(uStack_50,2);
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_1003d4b78();
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_1003d4ba0();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uStack_50);
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003d4a24; end: 1003d4aff;  */

void FUN_1003d4a24(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1001e0104();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1003d4b00(0);
  func_0x000107c613fc();
  func_0x000107c615f4(uStack_50,2);
  uVar1 = uStack_48;
  func_0x000107c61174();
  uVar2 = uVar1;
  FUN_1003d4b78();
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  uVar3 = uVar2;
  func_0x000107c6157c();
  FUN_1003d4ba0();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uStack_50);
  *(undefined8 *)(param_2 + 0x20) = uVar3;
  *param_1 = param_2;
  return;
}



/* Entry: 1003d4b00; end: 1003d4b77;  */

void FUN_1003d4b00(undefined8 param_1)

{
  if (lRam0000000112de7c50 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e665620);
  return;
}



/* Entry: 1003d4b78; end: 1003d4b9f;  */

void FUN_1003d4b78(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1003d4ba0; end: 1003d4cdf;  */

undefined * FUN_1003d4ba0(void)

{
  code *pcVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  code *pcStack_38;
  
  ppuVar4 = &puStack_60;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &UNK_110428db0;
  func_0x000107c613fc(&UNK_110428db0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  FUN_1000285a8(0x112da9fc8,&UNK_10d9b27d0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar5);
  pcVar3 = FUN_1004645bc;
  FUN_1000bdd8c(FUN_1004645bc,puVar2);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_40 = FUN_1004642e4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1004642ac;
  puStack_48 = &UNK_110428dc8;
  pcStack_38 = pcVar3;
  func_0x000107c60bc4(&puStack_60);
  pcVar1 = pcStack_38;
  func_0x000107c6157c(pcVar3);
  func_0x000107c61574(pcVar1);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  func_0x0001001f4b68(0);
  func_0x000107c610f8();
  FUN_1003d4cf4(puVar2,uVar5);
  func_0x000107c61574(pcVar3);
  return puVar2;
}



/* Entry: 1003d4ce0; end: 1003d4cf3;  */

void FUN_1003d4ce0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1003d4cf4; end: 1003d4d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d4cf4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130344b8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003d4d40; end: 1003d4df7;  */

void FUN_1003d4d40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d4df8; end: 1003d4e0b;  */

void FUN_1003d4df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}



/* Entry: 1003d4e0c; end: 1003d4f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1003d4e0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_113092298);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + _DAT_1130344b8);
  puVar3 = &UNK_110682968;
  func_0x000107c613fc(&UNK_110682968,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  FUN_1000285a8(0x112f87e80,&UNK_10dbfbca0);
  func_0x000107c613fc();
  func_0x000107c615f4(uVar7,2);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c615f0(uVar1);
  puVar4 = &UNK_1036deec8;
  FUN_1000bdd8c(&UNK_1036deec8,puVar3);
  puVar3 = &UNK_110682990;
  func_0x000107c613fc(&UNK_110682990,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  *(undefined **)(puVar3 + 0x18) = puVar4;
  FUN_1000285a8(0x112f88058,&UNK_10dbfbdf8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar6);
  func_0x000107c6157c(puVar4);
  puVar5 = &UNK_1036def68;
  FUN_1000bdd8c(&UNK_1036def68,puVar3);
  uVar6 = 0;
  FUN_10022c5c8(0);
  func_0x000107c610f8();
  FUN_1003d4ffc(puVar5,uVar6);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(puVar4);
  return puVar5;
}



/* Entry: 1003d4f94; end: 1003d4ffb;  */

void FUN_1003d4f94(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d4ffc; end: 1003d507f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1003d4ffc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113036518) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113036520) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1003d5080; end: 1003d50cb;  */

void FUN_1003d5080(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d50cc; end: 1003d50d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d50cc(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10022f110();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113036bf0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1003d50d4; end: 1003d513f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d50d4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10022f110();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113036bf0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1003d5140; end: 1003d514b;  */

/* WARNING: Possible PIC construction at 0x0001003d51fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003d520c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003d521c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003d5210) */
/* WARNING: Removing unreachable block (ram,0x0001003d5200) */
/* WARNING: Removing unreachable block (ram,0x0001003d5220) */

void FUN_1003d5140(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_1103d8108;
  func_0x000107c613fc(&UNK_1103d8108,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112db0618;
  FUN_1000285a8(0x112db0618,&UNK_10d959f50);
  func_0x000107c613fc();
  puVar8 = &UNK_100c09c60;
  FUN_1000841f8(&UNK_100c09c60,puVar6,uVar7);
  FUN_100084214("SCLensScheduleNamespaceRequestFeatureInfoPluginRegistryServiceProvider",0x46,2);
  *param_1 = puVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1003d514c; end: 1003d523b;  */

/* WARNING: Possible PIC construction at 0x0001003d51fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003d520c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003d521c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003d5210) */
/* WARNING: Removing unreachable block (ram,0x0001003d5200) */
/* WARNING: Removing unreachable block (ram,0x0001003d5220) */

void FUN_1003d514c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_1103d8108;
  func_0x000107c613fc(&UNK_1103d8108,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  uVar2 = 0x112db0618;
  FUN_1000285a8(0x112db0618,&UNK_10d959f50);
  func_0x000107c613fc();
  puVar3 = &UNK_100c09c60;
  FUN_1000841f8(&UNK_100c09c60,puVar1,uVar2);
  FUN_100084214("SCLensScheduleNamespaceRequestFeatureInfoPluginRegistryServiceProvider",0x46,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1003d523c; end: 1003d5287;  */

void FUN_1003d523c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d5288; end: 1003d528f;  */

void FUN_1003d5288(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1003d5290; end: 1003d6517; -[SCLensScheduleNamespaceServiceEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d5290(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  long lVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined *puVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  long lVar62;
  long lVar63;
  undefined *puStack_310;
  undefined8 uStack_308;
  code *pcStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  
  if (param_2 == 0) {
    lVar62 = 0;
  }
  else {
    lVar62 = param_2 + _DAT_11278490c;
    func_0x000107c61148();
  }
  lVar1 = lVar62;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(lVar62);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_3,&PTR___NSConcreteGlobalBlock_110c8d810);
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar62 = 0;
  }
  else {
    lVar62 = param_2 + _DAT_112784920;
    func_0x000107c61148();
  }
  lVar3 = lVar62;
  func_0x000107c4af44();
  func_0x000107c61180();
  func_0x000107c61170(lVar62);
  lVar62 = param_2;
  FUN_1003d6520();
  func_0x000107c61180();
  lVar4 = lVar62;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  func_0x000107c61170(lVar62);
  if (param_2 == 0) {
    lVar62 = 0;
  }
  else {
    lVar62 = param_2 + _DAT_112784908;
    func_0x000107c61148();
  }
  lVar5 = lVar62;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar62);
  if (param_2 == 0) {
    lVar62 = 0;
  }
  else {
    lVar62 = param_2 + _DAT_112784954;
    func_0x000107c61148();
  }
  lVar6 = lVar62;
  func_0x000107c5c974();
  func_0x000107c61180();
  func_0x000107c61170(lVar62);
  puVar7 = PTR_PTR_1126de390;
  func_0x000107c610f4();
  func_0x000107c48cec();
  if (param_2 == 0) {
    lVar62 = 0;
  }
  else {
    lVar62 = param_2 + _DAT_11278492c;
    func_0x000107c61148();
  }
  lVar8 = lVar62;
  func_0x000107c4b020();
  func_0x000107c61180();
  func_0x000107c61170(lVar62);
  if (param_2 == 0) {
    lVar62 = 0;
  }
  else {
    lVar62 = param_2 + _DAT_112784928;
    func_0x000107c61148();
  }
  lVar9 = lVar62;
  func_0x000107c4b518();
  func_0x000107c61180();
  func_0x000107c61170(lVar62);
  if (param_2 == 0) {
    lVar62 = 0;
  }
  else {
    lVar62 = param_2 + _DAT_112784918;
    func_0x000107c61148();
  }
  lVar10 = lVar62;
  func_0x000107c421c8();
  func_0x000107c61180();
  func_0x000107c61170(lVar62);
  lVar62 = param_2;
  func_0x000107c3c920(param_2,param_3,lVar10,puVar2,lVar8);
  func_0x000107c61180();
  lVar63 = (long)_DAT_1127848d8;
  uVar60 = *(undefined8 *)(param_2 + lVar63);
  *(long *)(param_2 + lVar63) = lVar62;
  func_0x000107c61170(uVar60);
  lVar62 = param_2 + _DAT_112784924;
  func_0x000107c61148();
  lVar11 = lVar62;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(lVar62);
  uVar60 = *(undefined8 *)(param_2 + lVar63);
  func_0x000107c61174();
  puVar12 = PTR_PTR_1126ae560;
  func_0x000107c61160();
  lVar62 = param_2 + _DAT_1127848dc;
  func_0x000107c61148();
  puVar28 = PTR___NSConcreteStackBlock_11034bd00;
  uVar61 = *(undefined8 *)(param_2 + _DAT_1127848e0);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_100c099c8;
  puStack_90 = &UNK_110844e40;
  lStack_88 = lVar62;
  puStack_80 = puVar12;
  func_0x000107c61174(puVar12);
  func_0x000107c61174(lVar62);
  func_0x000107c42c14(uVar61,param_3,&PTR___NSConcreteGlobalBlock_110c8d850,&puStack_a8);
  func_0x000107c3b43c(PTR_PTR_1126de3a0);
  puVar13 = PTR_PTR_1126de3a8;
  func_0x000107c610f4();
  func_0x000107c474d8(param_1);
  lVar63 = param_2 + _DAT_112784950;
  func_0x000107c61148();
  lVar14 = lVar63;
  func_0x000107c49840();
  func_0x000107c61180();
  func_0x000107c61170(lVar63);
  lVar63 = param_2 + _DAT_11278491c;
  func_0x000107c61148();
  lVar15 = lVar63;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lVar63);
  puVar16 = PTR_PTR_1126ae720;
  puStack_e0 = puVar28;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10074b30c;
  puStack_c8 = &UNK_110c8d870;
  lStack_c0 = lVar15;
  func_0x000107c61174(lVar10);
  lStack_b8 = lVar10;
  func_0x000107c61174(lVar8);
  lStack_b0 = lVar8;
  func_0x000107c61174(lVar15);
  func_0x000107c3e4fc(puVar16,param_3,&puStack_e0);
  func_0x000107c61180();
  lVar63 = param_2 + _DAT_11278494c;
  func_0x000107c61148();
  lVar17 = lVar63;
  func_0x000107c44580();
  func_0x000107c61180();
  lVar18 = param_2 + _DAT_112784948;
  func_0x000107c61148();
  lVar19 = lVar18;
  func_0x000107c5d8d8();
  func_0x000107c61180();
  lVar20 = param_2 + _DAT_112784910;
  func_0x000107c61148();
  lVar21 = lVar20;
  func_0x000107c4ae30();
  func_0x000107c61180();
  lVar22 = param_2 + _DAT_112784934;
  func_0x000107c61148();
  lVar23 = lVar22;
  func_0x000107c3e654();
  func_0x000107c61180();
  lVar24 = param_2 + _DAT_112784938;
  func_0x000107c61148();
  lVar25 = lVar24;
  func_0x000107c4d598();
  func_0x000107c61180();
  lVar26 = param_2 + _DAT_112784944;
  func_0x000107c61148();
  lVar27 = lVar26;
  func_0x000107c4b274();
  func_0x000107c61180();
  puVar28 = puVar12;
  func_0x000107c43bf4();
  func_0x000107c61180();
  lVar29 = param_2;
  func_0x000107c3bf4c(param_2,param_3,lVar5,lVar17,lVar4,lVar8,lVar19,lVar21,lVar23,lVar25,lVar14,
                      lVar27,puVar28);
  func_0x000107c61180();
  func_0x000107c61170(puVar28);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar63);
  lVar63 = (long)_DAT_1127848e4;
  func_0x000107c61174(puVar16);
  uVar61 = *(undefined8 *)(param_2 + lVar63);
  *(undefined **)(param_2 + lVar63) = puVar16;
  func_0x000107c61170(uVar61);
  puVar30 = PTR_PTR_1126ae720;
  puVar28 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10074b304;
  puStack_f0 = &UNK_110c8d8a0;
  puStack_e8 = puVar16;
  func_0x000107c61174(puVar16);
  func_0x000107c3e4fc(puVar30,param_3,&puStack_108);
  func_0x000107c61180();
  puVar31 = PTR_PTR_1126ae720;
  puStack_140 = puVar28;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_10074b65c;
  puStack_128 = &UNK_110c8d8d0;
  func_0x000107c61174(lVar10);
  lStack_120 = lVar10;
  func_0x000107c61174(lVar8);
  lStack_118 = lVar8;
  func_0x000107c61174(puVar7);
  puStack_110 = puVar7;
  func_0x000107c3e4fc(puVar31,param_3,&puStack_140);
  func_0x000107c61180();
  lVar63 = (long)_DAT_1127848e8;
  func_0x000107c61174();
  uVar61 = *(undefined8 *)(param_2 + lVar63);
  *(undefined **)(param_2 + lVar63) = puVar31;
  func_0x000107c61170(uVar61);
  puVar32 = PTR_PTR_1126ae720;
  puStack_180 = puVar28;
  uStack_178 = 0xc2000000;
  puStack_170 = &UNK_100c1025c;
  puStack_168 = &UNK_110c8d900;
  func_0x000107c61174(lVar29);
  lStack_160 = lVar29;
  func_0x000107c61174(puVar30);
  puStack_158 = puVar30;
  func_0x000107c61174(puVar31);
  puStack_150 = puVar31;
  func_0x000107c61174(lVar8);
  lStack_148 = lVar8;
  func_0x000107c3e4fc(puVar32,param_3,&puStack_180);
  func_0x000107c61180();
  puVar33 = PTR_PTR_1126de3d0;
  func_0x000107c610f4();
  func_0x000107c47430();
  puVar34 = PTR_PTR_1126ae720;
  puStack_1c8 = puVar28;
  uStack_1c0 = 0xc2000000;
  puStack_1b8 = &UNK_100c101c0;
  puStack_1b0 = &UNK_110c8d930;
  func_0x000107c61174(puVar32);
  puStack_1a8 = puVar32;
  puStack_1a0 = puVar33;
  func_0x000107c61174(lVar3);
  lStack_198 = lVar3;
  func_0x000107c61174(lVar8);
  lStack_190 = lVar8;
  lStack_188 = lVar14;
  func_0x000107c61174(lVar14);
  func_0x000107c61174(puVar33);
  func_0x000107c3e4fc(puVar34,param_3,&puStack_1c8);
  func_0x000107c61180();
  puVar35 = puVar30;
  func_0x000107c4c280(puVar30,param_3,&PTR___NSConcreteGlobalBlock_110c8d980);
  func_0x000107c61180();
  puVar36 = PTR_PTR_1126de3e0;
  func_0x000107c610f4();
  func_0x000107c477d4();
  puVar37 = PTR_PTR_1126de3e8;
  func_0x000107c610f4();
  puVar28 = PTR_PTR_1126aeea8;
  func_0x000107c61160();
  func_0x000107c4739c(param_1,puVar37,param_3,puVar34,lVar8,puVar36,lVar4,puVar28);
  func_0x000107c61170(puVar28);
  puVar28 = PTR_PTR_1126de3f0;
  func_0x000107c610f4();
  lVar63 = param_2 + _DAT_1127848ec;
  func_0x000107c61148();
  lVar19 = lVar63;
  func_0x000107c518cc();
  func_0x000107c61180();
  lVar17 = lVar19;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar18 = param_2 + _DAT_112784940;
  func_0x000107c61148(lVar18);
  lVar26 = lVar18;
  func_0x000107c4b178();
  func_0x000107c61180();
  lVar24 = param_2;
  FUN_1003d6520(param_2);
  func_0x000107c61180();
  lVar22 = lVar24;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  lVar20 = lVar29;
  func_0x000107c4308c(lVar29);
  func_0x000107c61180();
  puVar38 = puVar13;
  func_0x000107c4b8e8(puVar13);
  func_0x000107c61180();
  func_0x000107c484a0(puVar28,param_3,lVar17,lVar26,lVar22,lVar20,puVar38);
  uVar61 = *(undefined8 *)(param_2 + _DAT_1127848f0);
  *(undefined **)(param_2 + _DAT_1127848f0) = puVar28;
  func_0x000107c61170(uVar61);
  func_0x000107c61170(puVar38);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar63);
  puVar28 = PTR_PTR_1126de3f8;
  func_0x000107c610f4();
  lVar63 = param_2 + _DAT_112784960;
  func_0x000107c61148(lVar63);
  lVar18 = lVar63;
  func_0x000107c5dac4();
  func_0x000107c61180();
  lVar20 = lVar29;
  func_0x000107c4308c(lVar29);
  func_0x000107c61180();
  func_0x000107c459f4(puVar28,param_3,lVar18,lVar20);
  uVar61 = *(undefined8 *)(param_2 + _DAT_1127848f4);
  *(undefined **)(param_2 + _DAT_1127848f4) = puVar28;
  func_0x000107c61170(uVar61);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar63);
  puVar38 = PTR_PTR_1126ae720;
  puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_220 = 0xc2000000;
  pcStack_218 = FUN_100743d7c;
  puStack_210 = &UNK_110c8d9a0;
  puStack_208 = puVar30;
  puStack_200 = puVar31;
  func_0x000107c61174(lVar29);
  lStack_1f8 = lVar29;
  puStack_1f0 = puVar32;
  puStack_1e8 = puVar37;
  func_0x000107c61174(lVar8);
  lStack_1e0 = lVar8;
  lStack_1d8 = lVar3;
  puStack_1d0 = puVar7;
  func_0x000107c61174();
  func_0x000107c61174(lVar3);
  func_0x000107c61174(puVar37);
  func_0x000107c61174(puVar32);
  func_0x000107c61174(puVar31);
  func_0x000107c61174(puVar30);
  func_0x000107c3e4fc(puVar38,param_3,&puStack_228);
  func_0x000107c61180();
  puVar39 = PTR_PTR_1126de400;
  func_0x000107c610f4();
  func_0x000107c47820();
  func_0x000107c42c20(*(undefined8 *)(param_2 + _DAT_112784964),param_3,puVar39);
  puVar40 = PTR_PTR_1126ae720;
  puVar28 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_248 = 0xc2000000;
  pcStack_240 = FUN_100743b34;
  puStack_238 = &UNK_110c8d9d0;
  puStack_230 = puVar38;
  func_0x000107c61174(puVar38);
  func_0x000107c3e4fc(puVar40,param_3,&puStack_250);
  func_0x000107c61180();
  puVar41 = PTR_PTR_1126ae720;
  puStack_278 = puVar28;
  uStack_270 = 0xc2000000;
  puStack_268 = &UNK_10ae9e908;
  puStack_260 = &UNK_110c8da00;
  lStack_258 = lVar29;
  func_0x000107c61174(lVar29);
  func_0x000107c3e4fc(puVar41,param_3,&puStack_278);
  func_0x000107c61180();
  puVar42 = PTR_PTR_1126de418;
  func_0x000107c610f4();
  func_0x000107c484c4();
  func_0x000107c42c20(*(undefined8 *)(param_2 + _DAT_11278495c),param_3,puVar42);
  puVar43 = PTR_PTR_1126de420;
  func_0x000107c610f4();
  lVar63 = param_2 + _DAT_1127848f8;
  func_0x000107c61148();
  lVar18 = lVar63;
  func_0x000107c5c21c();
  func_0x000107c61180();
  lVar20 = lVar18;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c45e30(puVar43,param_3,lVar5,lVar20);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar63);
  puVar44 = PTR_PTR_1126de428;
  func_0x000107c610f4();
  func_0x000107c484c8();
  puVar45 = puVar44;
  func_0x000107c501c4();
  func_0x000107c61180();
  puVar46 = puVar44;
  func_0x000107c501c0();
  func_0x000107c61180();
  puVar28 = PTR_PTR_1126ae720;
  puStack_2b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2a8 = 0xc2000000;
  pcStack_2a0 = FUN_10074383c;
  puStack_298 = &UNK_110c8da30;
  puStack_290 = puVar44;
  puStack_288 = puVar45;
  func_0x000107c61174(puVar40);
  puStack_280 = puVar40;
  func_0x000107c61174(puVar45);
  func_0x000107c61174(puVar44);
  func_0x000107c3e4fc(puVar28,param_3,&puStack_2b0);
  func_0x000107c61180();
  puVar57 = PTR_PTR_1126de438;
  func_0x000107c610f4();
  puVar47 = puVar44;
  func_0x000107c4b6cc();
  func_0x000107c61180();
  puVar48 = puVar44;
  func_0x000107c4b6c8();
  func_0x000107c61180();
  puVar49 = puVar44;
  func_0x000107c5d168();
  func_0x000107c61180();
  puVar50 = puVar44;
  func_0x000107c5d158();
  func_0x000107c61180();
  puVar51 = puVar44;
  func_0x000107c41e7c();
  func_0x000107c61180();
  puVar52 = puVar44;
  func_0x000107c41e74();
  func_0x000107c61180();
  puVar58 = puVar44;
  func_0x000107c3f9c0();
  func_0x000107c61180();
  puVar59 = puVar44;
  func_0x000107c3f9b8();
  func_0x000107c61180();
  puVar53 = puVar44;
  func_0x000107c3f1e0();
  func_0x000107c61180();
  puVar54 = puVar44;
  func_0x000107c3f1d8();
  func_0x000107c61180();
  puVar55 = puVar44;
  func_0x000107c4d65c();
  func_0x000107c61180();
  puVar56 = puVar44;
  func_0x000107c3f010();
  func_0x000107c61180();
  func_0x000107c47484(puVar57,param_3,puVar47,puVar48,puVar45,puVar46,puVar49,puVar50,puVar51,
                      puVar52,puVar58,puVar59,puVar53,puVar54,puVar28,puVar55,puVar56);
  func_0x000107c61170(puVar56);
  func_0x000107c61170(puVar55);
  func_0x000107c61170(puVar54);
  func_0x000107c61170(puVar53);
  func_0x000107c61170(puVar59);
  func_0x000107c61170(puVar58);
  func_0x000107c61170(puVar52);
  func_0x000107c61170(puVar51);
  func_0x000107c61170(puVar50);
  func_0x000107c61170(puVar49);
  func_0x000107c61170(puVar48);
  func_0x000107c61170(puVar47);
  func_0x000107c42c20(*(undefined8 *)(param_2 + _DAT_112784968),param_3,puVar57);
  lVar63 = param_2 + _DAT_112784930;
  func_0x000107c61148();
  lVar20 = lVar63;
  func_0x000107c4b268();
  func_0x000107c61180();
  func_0x000107c61170(lVar63);
  lVar63 = param_2 + _DAT_112784900;
  func_0x000107c61148();
  lVar18 = lVar63;
  func_0x000107c3dfac();
  func_0x000107c61180();
  func_0x000107c61170(lVar63);
  puVar58 = PTR_PTR_1126ae720;
  puStack_310 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_308 = 0xc2000000;
  pcStack_300 = FUN_100ba9174;
  puStack_2f8 = &UNK_110c8da60;
  lStack_2f0 = lVar8;
  lStack_2e8 = lVar20;
  puStack_2e0 = puVar40;
  lStack_2d8 = lVar18;
  lStack_2d0 = lVar1;
  lStack_2c8 = lVar10;
  lStack_2c0 = lVar11;
  uStack_2b8 = uVar60;
  func_0x000107c61174();
  func_0x000107c61174(lVar11);
  func_0x000107c61174(lVar10);
  func_0x000107c61174(lVar1);
  func_0x000107c61174(lVar18);
  func_0x000107c61174(puVar40);
  func_0x000107c61174(lVar20);
  func_0x000107c61174(lVar8);
  func_0x000107c3e4fc(puVar58,param_3,&puStack_310);
  func_0x000107c61180();
  puVar59 = PTR_PTR_1126de440;
  func_0x000107c610f4(PTR_PTR_1126de440);
  func_0x000107c45d70();
  func_0x000107c42c20(*(undefined8 *)(param_2 + _DAT_11278496c),param_3,puVar59);
  func_0x000107c61170(puVar59);
  func_0x000107c61170(puVar58);
  func_0x000107c61170(uStack_2b8);
  func_0x000107c61170(lStack_2c0);
  func_0x000107c61170(lStack_2c8);
  func_0x000107c61170(lStack_2d0);
  func_0x000107c61170(lStack_2d8);
  func_0x000107c61170(puStack_2e0);
  func_0x000107c61170(lStack_2e8);
  func_0x000107c61170(lStack_2f0);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(puVar57);
  func_0x000107c61170(puVar28);
  func_0x000107c61170(puStack_280);
  func_0x000107c61170(puStack_288);
  func_0x000107c61170(puStack_290);
  func_0x000107c61170(puVar45);
  func_0x000107c61170(puVar44);
  func_0x000107c61170(puVar46);
  func_0x000107c61170(puVar43);
  func_0x000107c61170(puVar42);
  func_0x000107c61170(puVar41);
  func_0x000107c61170(lStack_258);
  func_0x000107c61170(puVar40);
  func_0x000107c61170(puStack_230);
  func_0x000107c61170(puVar38);
  func_0x000107c61170(puVar39);
  func_0x000107c61170(puStack_1d0);
  func_0x000107c61170(lStack_1d8);
  func_0x000107c61170(lStack_1e0);
  func_0x000107c61170(puStack_1e8);
  func_0x000107c61170(puStack_1f0);
  func_0x000107c61170(lStack_1f8);
  func_0x000107c61170(puStack_200);
  func_0x000107c61170(puStack_208);
  func_0x000107c61170(puVar37);
  func_0x000107c61170(puVar36);
  func_0x000107c61170(puVar35);
  func_0x000107c61170(puVar34);
  func_0x000107c61170(lStack_188);
  func_0x000107c61170(lStack_190);
  func_0x000107c61170(lStack_198);
  func_0x000107c61170(puStack_1a0);
  func_0x000107c61170(puStack_1a8);
  func_0x000107c61170(puVar32);
  func_0x000107c61170(puVar33);
  func_0x000107c61170(lStack_148);
  func_0x000107c61170(puStack_150);
  func_0x000107c61170(puStack_158);
  func_0x000107c61170(lStack_160);
  func_0x000107c61170(puVar31);
  func_0x000107c61170(puStack_110);
  func_0x000107c61170(lStack_118);
  func_0x000107c61170(lStack_120);
  func_0x000107c61170(puVar30);
  func_0x000107c61170(puStack_e8);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(lStack_b0);
  func_0x000107c61170(lStack_b8);
  func_0x000107c61170(lStack_c0);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puStack_80);
  func_0x000107c61170(lStack_88);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar62);
  func_0x000107c61170(uVar60);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar2);
  return;
}



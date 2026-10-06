/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103925d4c; end: 103925f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103925d4c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4eac4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039221a0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fafd50);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb03f8);
      *(long *)(unaff_x20 + _DAT_112fb03f8) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "PlusUserNavigationScopeGraphBridge/SCSCPlusStoryBoostServicesSaberServiceProvider.swift"
                      ,0x57,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103925e78);
  (*pcVar1)();
}



/* Entry: 103925f60; end: 103925f93; -[SCSCPlusStoryBoostServicesSaberServiceProvider provide] */

void FUN_103925f60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103925d4c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103925f94; end: 103925fc7; -[SCSCPlusStoryBoostServicesSaberServiceProvider __safeProvide] */

void FUN_103925f94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103925e78();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103925fc8; end: 10392600b; -[SCSCPlusStoryBoostServicesSaberServiceProvider end] */

void FUN_103925fc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10392600c; end: 1039261a3;  */

void FUN_10392600c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e89390)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f176c70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PlusUserNavigationScopeGraphBridge/SCSCPlusStoryBoostServicesSaberServiceProvider.swift"
                            ,0x57,2,0x39,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039261a4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c575a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039261a4; end: 10392624f; -[SCSCPlusStoryBoostServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039261a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10392600c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103926250; end: 1039262c3; -[SCSCPlusStoryBoostServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103926250(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb03e8,0);
  func_0x000107c61614(param_1 + _DAT_112fb03f0,0);
  *(undefined8 *)(param_1 + _DAT_112fb03f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039262c4; end: 1039262f7;  */

void FUN_1039262c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039262f8; end: 10392633f; -[SCSCPlusStoryBoostServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039262f8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb03e8);
  func_0x000107c61610(param_1 + _DAT_112fb03f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb03f8));
  return;
}



/* Entry: 103926340; end: 10392635f;  */

void FUN_103926340(void)

{
  func_0x000107c61168(&PTR_PTR_112fb0440);
  return;
}



/* Entry: 103926360; end: 1039263ab; -[_TtC37PlusCustomNotificationSoundsPageScope37PlusCustomNotificationSoundsPageScope conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103926360(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fb04a8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fb04a8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1039263ac; end: 103926407; -[_TtC37PlusCustomNotificationSoundsPageScope37PlusCustomNotificationSoundsPageScope conversationName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039263ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fb04b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fb04b0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103926408; end: 103926427; -[_TtC37PlusCustomNotificationSoundsPageScope37PlusCustomNotificationSoundsPageScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103926408(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fb04b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103926428; end: 103926437; -[_TtC37PlusCustomNotificationSoundsPageScope37PlusCustomNotificationSoundsPageScope loggingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103926428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb04c0));
  return;
}



/* Entry: 103926438; end: 10392647f; -[_TtC37PlusCustomNotificationSoundsPageScope37PlusCustomNotificationSoundsPageScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103926438(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb04c8;
  func_0x000107c61428(param_1 + _DAT_112fb04c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103926480; end: 1039264d7; -[_TtC37PlusCustomNotificationSoundsPageScope37PlusCustomNotificationSoundsPageScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103926480(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb04c8;
  func_0x000107c61428(param_1 + _DAT_112fb04c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039264d8; end: 1039264e7; -[_TtC37PlusCustomNotificationSoundsPageScope37PlusCustomNotificationSoundsPageScope soundType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039264d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fb04d0);
}



/* Entry: 1039264e8; end: 1039264f7; -[_TtC37PlusCustomNotificationSoundsPageScope37PlusCustomNotificationSoundsPageScope isBestFriendConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1039264e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fb04d8);
}



/* Entry: 1039264f8; end: 10392669b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1039264f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10,undefined1 param_11)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fb04c8;
  func_0x000107c61614(unaff_x20 + _DAT_112fb04c8,0);
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112fb04a8);
  *puVar3 = param_1;
  puVar3[1] = param_2;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112fb04b0);
  *puVar3 = param_3;
  puVar3[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fb04b8) = param_5;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_118,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_9);
  *(long *)(unaff_x20 + _DAT_112fb04d0) = param_10;
  *(undefined1 *)(unaff_x20 + _DAT_112fb04d8) = param_11;
  uVar1 = 0x33;
  if (param_10 != 1) {
    uVar1 = 0xffffffffffffffff;
  }
  uStack_d0 = 4;
  if (param_10 != 0) {
    uStack_d0 = uVar1;
  }
  uStack_e8 = 0xffffffffffffffff;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 1;
  uStack_c8 = 0;
  uStack_100 = param_6;
  uStack_f8 = param_7;
  uStack_f0 = param_8;
  func_0x00010439c014(0);
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  func_0x000107c610f8();
  func_0x000107c615f0(param_5);
  puVar3 = &uStack_100;
  func_0x00010439bbec();
  *(undefined8 **)(unaff_x20 + _DAT_112fb04c0) = puVar3;
  puVar4 = auStack_128;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_9);
  return puVar4;
}



/* Entry: 10392669c; end: 103926787; -[_TtC37PlusCustomNotificationSoundsPageScope37PlusCustomNotificationSoundsPageScope initWithConversationId:conversationName:uiContainer:sourcePageType:sourcePageSessionId:delegate:soundType:isBestFriendConversation:] */

undefined8
FUN_10392669c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    uVar2 = 0;
    uVar1 = param_2;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5faec(param_4);
    uVar1 = uVar2;
  }
  func_0x000107c5faec(param_7);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_8);
  FUN_1039269d8(param_3,param_2,param_4,uVar2,param_5,param_6,param_7,uVar1,param_8,param_9,param_10
               );
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_8);
  return param_3;
}



/* Entry: 103926788; end: 1039267b3; -[_TtC37PlusCustomNotificationSoundsPageScope37PlusCustomNotificationSoundsPageScope init] */

void FUN_103926788(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusCustomNotificationSoundsPageScope.PlusCustomNotificationSoundsPageScope",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039267b4);
  (*pcVar1)();
}



/* Entry: 1039267b4; end: 103926823; -[_TtC37PlusCustomNotificationSoundsPageScope37PlusCustomNotificationSoundsPageScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039267b4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fb04a8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fb04b0 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fb04b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fb04c0));
  param_1 = param_1 + _DAT_112fb04c8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103926824; end: 10392688f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103926824(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100356e30();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fb04e8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103926890; end: 1039268db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103926890(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb04e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039268dc; end: 103926963; -[_TtC37PlusCustomNotificationSoundsPageScope52PlusCustomNotificationSoundsPageScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039268dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 103926964; end: 10392698f; -[_TtC37PlusCustomNotificationSoundsPageScope52PlusCustomNotificationSoundsPageScopeFactoryServices init] */

void FUN_103926964(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusCustomNotificationSoundsPageScope.PlusCustomNotificationSoundsPageScopeFactoryServices"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103926990);
  (*pcVar1)();
}



/* Entry: 103926990; end: 103926993;  */

void FUN_103926990(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103926994; end: 1039269c7;  */

void FUN_103926994(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039269c8; end: 1039269d7; -[_TtC37PlusCustomNotificationSoundsPageScope52PlusCustomNotificationSoundsPageScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039269c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb04e8));
  return;
}



/* Entry: 1039269d8; end: 103926b67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039269d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined1 param_11)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112fb04c8;
  func_0x000107c61614(unaff_x20 + _DAT_112fb04c8,0);
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112fb04a8);
  *puVar3 = param_1;
  puVar3[1] = param_2;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112fb04b0);
  *puVar3 = param_3;
  puVar3[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fb04b8) = param_5;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_118,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_9);
  *(long *)(unaff_x20 + _DAT_112fb04d0) = param_10;
  *(undefined1 *)(unaff_x20 + _DAT_112fb04d8) = param_11;
  uVar1 = 0x33;
  if (param_10 != 1) {
    uVar1 = 0xffffffffffffffff;
  }
  uStack_d0 = 4;
  if (param_10 != 0) {
    uStack_d0 = uVar1;
  }
  uStack_e8 = 0xffffffffffffffff;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 1;
  uStack_c8 = 0;
  uStack_100 = param_6;
  uStack_f8 = param_7;
  uStack_f0 = param_8;
  func_0x00010439c014(0);
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  func_0x000107c610f8();
  func_0x000107c615f0(param_5);
  puVar3 = &uStack_100;
  func_0x00010439bbec();
  *(undefined8 **)(unaff_x20 + _DAT_112fb04c0) = puVar3;
  func_0x000107c61154(&stack0xfffffffffffffed8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103926b68; end: 103926b8b;  */

undefined8 FUN_103926b68(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103926b8c; end: 103926bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103926b8c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100356e30();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb04e8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103926bc0; end: 103926bff;  */

void FUN_103926bc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb0540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc247d0;
  func_0x000107c61520(&UNK_10dc247d0,&UNK_1106add60);
  puRam0000000112fb0540 = puVar1;
  return;
}



/* Entry: 103926c00; end: 103926cab;  */

void FUN_103926c00(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103926cac; end: 103926ce3;  */

void FUN_103926cac(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103926ce4; end: 103926dab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103926ce4(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb0548) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112fb0550) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103926dac; end: 103926e1b; -[SCCreatorMyFanPassManagementPageLaunchPayload initWithLoggingContext:openEditPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103926dac(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fb0548) = param_3;
  *(undefined1 *)(param_1 + _DAT_112fb0550) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103926e1c; end: 103926e7b; -[SCCreatorMyFanPassManagementPageLaunchPayload init] */

void FUN_103926e1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorMyFanPassManagementScope.CreatorMyFanPassManagementPageLaunchPayload",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103926e48);
  (*pcVar1)();
}



/* Entry: 103926e7c; end: 103926e8b; -[SCCreatorMyFanPassManagementPageLaunchPayload .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103926e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb0548));
  return;
}



/* Entry: 103926e8c; end: 103926eab;  */

void FUN_103926e8c(void)

{
  func_0x000107c61168(&PTR_PTR_112901178);
  return;
}



/* Entry: 103926eac; end: 103926eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103926eac(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb0588;
  func_0x000107c61428(unaff_x20 + _DAT_112fb0588,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 103926ef0; end: 10392703b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103926ef0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb0588;
  func_0x000107c61428(unaff_x20 + _DAT_112fb0588,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 10392703c; end: 10392707b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10392703c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb0598;
  func_0x000107c61428(unaff_x20 + _DAT_112fb0598,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 10392707c; end: 1039270c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10392707c(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb0598;
  func_0x000107c61428(unaff_x20 + _DAT_112fb0598,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1039270c8; end: 103927107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1039270c8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112fb0598;
  func_0x000107c61428(unaff_x20 + _DAT_112fb0598,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103927108;
  return auVar2;
}



/* Entry: 103927108; end: 10392710b;  */

void FUN_103927108(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10392710c; end: 1039272b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10392710c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fb0588;
  func_0x000107c61614(unaff_x20 + _DAT_112fb0588,0);
  *(undefined1 *)(unaff_x20 + _DAT_112fb0598) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0580) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112fb0590) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 1039272b4; end: 103927377; -[CreatorMyFanPassManagementScope initWithUiContainer:delegate:loggingContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039272b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112fb0588;
  func_0x000107c61614(param_1 + _DAT_112fb0588,0);
  *(undefined1 *)(param_1 + _DAT_112fb0598) = 0;
  *(undefined8 *)(param_1 + _DAT_112fb0580) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61604(lVar2,param_4);
  *(undefined8 *)(param_1 + _DAT_112fb0590) = param_5;
  func_0x000100386218();
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 103927378; end: 1039273d3; -[CreatorMyFanPassManagementScope init] */

void FUN_103927378(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorMyFanPassManagementScope.CreatorMyFanPassManagementScope",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039273a4);
  (*pcVar1)();
}



/* Entry: 1039273d4; end: 10392743f; -[CreatorMyFanPassManagementScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039273d4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fb0580));
  func_0x00010392741c(param_1 + _DAT_112fb0588);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb0590));
  return;
}



/* Entry: 103927440; end: 1039274ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103927440(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100386f30();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fb05d0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1039274ac; end: 1039274b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039274ac(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100386f30();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb05d0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1039274b4; end: 1039274ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039274b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb05d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103927500; end: 103927587; -[_TtC31CreatorMyFanPassManagementScope46CreatorMyFanPassManagementScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103927500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 103927588; end: 1039275e7; -[_TtC31CreatorMyFanPassManagementScope46CreatorMyFanPassManagementScopeFactoryServices init] */

void FUN_103927588(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorMyFanPassManagementScope.CreatorMyFanPassManagementScopeFactoryServices"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039275b4);
  (*pcVar1)();
}



/* Entry: 1039275e8; end: 1039275f7;  */

undefined1  [16] FUN_1039275e8(void)

{
  return ZEXT816(0x1106ade68);
}



/* Entry: 1039275f8; end: 103927607; -[_TtC31CreatorMyFanPassManagementScope46CreatorMyFanPassManagementScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039275f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb05d0));
  return;
}



/* Entry: 103927608; end: 10392764b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103927608(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb0600;
  func_0x000107c61428(unaff_x20 + _DAT_112fb0600,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 10392764c; end: 103927797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10392764c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb0600;
  func_0x000107c61428(unaff_x20 + _DAT_112fb0600,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 103927798; end: 10392783f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103927798(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112fb0600;
  func_0x000107c61614(unaff_x20 + _DAT_112fb0600,0);
  func_0x000107c61428(unaff_x20 + lVar1,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112fb0608) = param_2;
  puVar2 = auStack_68;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 103927840; end: 1039278d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103927840(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb0600;
  func_0x000107c61614(unaff_x20 + _DAT_112fb0600,0);
  func_0x000107c61428(unaff_x20 + lVar1,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112fb0608) = param_2;
  func_0x00010035c24c();
  puVar2 = &stack0xffffffffffffffa8;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 1039278d8; end: 103927a93; -[_TtC34CreatorSubscriptionOnboardingScope34CreatorSubscriptionOnboardingScope initWithDelegate:isEditMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039278d8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb0600;
  func_0x000107c61614(param_1 + _DAT_112fb0600,0);
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  lVar1 = param_1 + lVar1;
  func_0x000107c61604(lVar1,param_3);
  *(undefined1 *)(param_1 + _DAT_112fb0608) = param_4;
  func_0x00010035c24c();
  lStack_58 = param_1;
  lStack_50 = lVar1;
  func_0x000107c61154(&lStack_58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103927a94; end: 103927b1b; -[_TtC34CreatorSubscriptionOnboardingScope34CreatorSubscriptionOnboardingScope initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103927a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb0600;
  func_0x000107c61614(param_1 + _DAT_112fb0600,0);
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  lVar1 = param_1 + lVar1;
  func_0x000107c61604(lVar1,param_3);
  *(undefined1 *)(param_1 + _DAT_112fb0608) = 0;
  func_0x00010035c24c();
  lStack_58 = param_1;
  lStack_50 = lVar1;
  func_0x000107c61154(&lStack_58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103927b1c; end: 103927b77; -[_TtC34CreatorSubscriptionOnboardingScope34CreatorSubscriptionOnboardingScope init] */

void FUN_103927b1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorSubscriptionOnboardingScope.CreatorSubscriptionOnboardingScope",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103927b48);
  (*pcVar1)();
}



/* Entry: 103927b78; end: 103927b87; -[_TtC34CreatorSubscriptionOnboardingScope34CreatorSubscriptionOnboardingScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103927b78(long param_1)

{
  param_1 = param_1 + _DAT_112fb0600;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103927b88; end: 103927bab;  */

undefined8 FUN_103927b88(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103927bac; end: 103927c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103927bac(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010035d0e4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fb0640) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103927c18; end: 103927c1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103927c18(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010035d0e4();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb0640) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103927c20; end: 103927c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103927c20(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb0640) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103927c6c; end: 103927cf3; -[_TtC34CreatorSubscriptionOnboardingScope49CreatorSubscriptionOnboardingScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103927c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 103927cf4; end: 103927d53; -[_TtC34CreatorSubscriptionOnboardingScope49CreatorSubscriptionOnboardingScopeFactoryServices init] */

void FUN_103927cf4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorSubscriptionOnboardingScope.CreatorSubscriptionOnboardingScopeFactoryServices"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103927d20);
  (*pcVar1)();
}



/* Entry: 103927d54; end: 103927d63;  */

undefined1  [16] FUN_103927d54(void)

{
  return ZEXT816(0x1106adf18);
}



/* Entry: 103927d64; end: 103927d73; -[_TtC34CreatorSubscriptionOnboardingScope49CreatorSubscriptionOnboardingScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103927d64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb0640));
  return;
}



/* Entry: 103927d74; end: 103927e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103927d74(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb0670) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103927e0c; end: 103927e63; -[SCFanPassSubscriptionManagementPageLaunchPayload initWithLoggingContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103927e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fb0670) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103927e64; end: 103927ec3; -[SCFanPassSubscriptionManagementPageLaunchPayload init] */

void FUN_103927e64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FanPassSubscriptionManagementScope.FanPassSubscriptionManagementPageLaunchPayload"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103927e90);
  (*pcVar1)();
}



/* Entry: 103927ec4; end: 103927ed3; -[SCFanPassSubscriptionManagementPageLaunchPayload .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103927ec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb0670));
  return;
}



/* Entry: 103927ed4; end: 103927ef3;  */

void FUN_103927ed4(void)

{
  func_0x000107c61168(&PTR_PTR_1129015b0);
  return;
}



/* Entry: 103927ef4; end: 103927f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103927ef4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb06b0;
  func_0x000107c61428(unaff_x20 + _DAT_112fb06b0,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 103927f38; end: 103928083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103927f38(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb06b0;
  func_0x000107c61428(unaff_x20 + _DAT_112fb06b0,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 103928084; end: 1039280c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103928084(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb06b8;
  func_0x000107c61428(unaff_x20 + _DAT_112fb06b8,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1039280c4; end: 10392810f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039280c4(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb06b8;
  func_0x000107c61428(unaff_x20 + _DAT_112fb06b8,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 103928110; end: 10392814f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103928110(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112fb06b8;
  func_0x000107c61428(unaff_x20 + _DAT_112fb06b8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103928150;
  return auVar2;
}



/* Entry: 103928150; end: 103928153;  */

void FUN_103928150(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103928154; end: 103928197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928154(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb06c0;
  func_0x000107c61428(unaff_x20 + _DAT_112fb06c0,auStack_38,0,0);
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 103928198; end: 1039281eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928198(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb06c0;
  func_0x000107c61428(unaff_x20 + _DAT_112fb06c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1039281ec; end: 10392822b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1039281ec(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112fb06c0;
  func_0x000107c61428(unaff_x20 + _DAT_112fb06c0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x10392876c;
  return auVar2;
}



/* Entry: 10392822c; end: 103928327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10392822c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fb06b0;
  func_0x000107c61614(unaff_x20 + _DAT_112fb06b0,0);
  *(undefined1 *)(unaff_x20 + _DAT_112fb06b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fb06c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fb06a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fb06a8) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 103928328; end: 103928377;  */

undefined8 FUN_103928328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103928664();
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 103928378; end: 1039283ff; -[_TtC34FanPassSubscriptionManagementScope34FanPassSubscriptionManagementScope initWithUiContainer:loggingContext:delegate:] */

undefined8
FUN_103928378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  uVar2 = param_3;
  FUN_103928664(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_5);
  return uVar2;
}



/* Entry: 103928400; end: 10392845b; -[_TtC34FanPassSubscriptionManagementScope34FanPassSubscriptionManagementScope init] */

void FUN_103928400(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FanPassSubscriptionManagementScope.FanPassSubscriptionManagementScope",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10392842c);
  (*pcVar1)();
}



/* Entry: 10392845c; end: 1039284b3; -[_TtC34FanPassSubscriptionManagementScope34FanPassSubscriptionManagementScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10392845c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fb06a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fb06a8));
  FUN_103928730(param_1 + _DAT_112fb06b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb06c0));
  return;
}



/* Entry: 1039284b4; end: 10392851f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039284b4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100366190();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fb06d0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103928520; end: 10392856b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928520(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb06d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10392856c; end: 1039285f3; -[_TtC34FanPassSubscriptionManagementScope49FanPassSubscriptionManagementScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10392856c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 1039285f4; end: 103928653; -[_TtC34FanPassSubscriptionManagementScope49FanPassSubscriptionManagementScopeFactoryServices init] */

void FUN_1039285f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FanPassSubscriptionManagementScope.FanPassSubscriptionManagementScopeFactoryServices"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103928620);
  (*pcVar1)();
}



/* Entry: 103928654; end: 103928663; -[_TtC34FanPassSubscriptionManagementScope49FanPassSubscriptionManagementScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb06d0));
  return;
}



/* Entry: 103928664; end: 10392872f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112fb06b0;
  func_0x000107c61614(unaff_x20 + _DAT_112fb06b0,0);
  *(undefined1 *)(unaff_x20 + _DAT_112fb06b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fb06c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fb06a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fb06a8) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  func_0x00010036604c();
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&stack0xffffffffffffff98,puVar1);
  return;
}



/* Entry: 103928730; end: 103928753;  */

undefined8 FUN_103928730(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103928754; end: 103928783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928754(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100366190();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb06d0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



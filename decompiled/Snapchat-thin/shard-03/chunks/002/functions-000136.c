/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1025d03e4; end: 1025d0567;  */

/* WARNING: Possible PIC construction at 0x0001025d04e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025d04f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025d0510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025d04e8) */
/* WARNING: Removing unreachable block (ram,0x0001025d04f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d03e4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c44c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50fc4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1025c40c4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112eab330);
        *(undefined8 *)(lVar2 + _DAT_112ea9c98) = uVar6;
        *(long *)(lVar2 + _DAT_112ea9ca0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ea9ca0);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1025d0568; end: 1025d058f; -[SCSCMapGestureServicesSaberEntryPoint begin] */

void FUN_1025d0568(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1025d03e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025d0590; end: 1025d05d3; -[SCSCMapGestureServicesSaberEntryPoint end] */

void FUN_1025d0590(undefined8 param_1)

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



/* Entry: 1025d05d4; end: 1025d07d7;  */

void FUN_1025d05d4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f4e5b0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f0b1a50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef0f4e380)) {
          uVar2 = 0xd00000000000001b;
          func_0x000107c605b8(0xd00000000000001b,0x800000010f0b1c80,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "MapViewScopeGraphBridge/SCSCMapGestureServicesSaberEntryPoint.swift"
                                ,0x43,2,0x7a,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1025d07d8);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5856c();
        goto LAB_1025d0660;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c562b8();
  }
LAB_1025d0660:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1025d07d8; end: 1025d0883; -[SCSCMapGestureServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1025d07d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1025d05d4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1025d0884; end: 1025d0903; -[SCSCMapGestureServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d0884(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eab6d0,0);
  func_0x000107c61614(param_1 + _DAT_112eab6d8,0);
  *(undefined8 *)(param_1 + _DAT_112eab6e0) = 0;
  *(undefined8 *)(param_1 + _DAT_112eab6e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025d0904; end: 1025d0937;  */

void FUN_1025d0904(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025d0938; end: 1025d098f; -[SCSCMapGestureServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025d0974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025d0978) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d0938(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eab6d0);
  func_0x000107c61610(param_1 + _DAT_112eab6d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eab6e0));
  return;
}



/* Entry: 1025d0990; end: 1025d09af;  */

void FUN_1025d0990(void)

{
  func_0x000107c61168(&PTR_PTR_112851e58);
  return;
}



/* Entry: 1025d09b0; end: 1025d09bb; -[SCSCMapLoggingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d09b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab718;
  func_0x000107c61428(param_1 + _DAT_112eab718,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d09bc; end: 1025d09c7; -[SCSCMapLoggingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d09bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab718;
  func_0x000107c61428(param_1 + _DAT_112eab718,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d09c8; end: 1025d09d3; -[SCSCMapLoggingServicesSaberEntryPoint mapViewScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d09c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab720;
  func_0x000107c61428(param_1 + _DAT_112eab720,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d09d4; end: 1025d0a17;  */

void FUN_1025d09d4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d0a18; end: 1025d0a23; -[SCSCMapLoggingServicesSaberEntryPoint setMapViewScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d0a18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab720;
  func_0x000107c61428(param_1 + _DAT_112eab720,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d0a24; end: 1025d0a77;  */

void FUN_1025d0a24(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d0a78; end: 1025d0abf; -[SCSCMapLoggingServicesSaberEntryPoint sCMapLoggingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d0a78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab728;
  func_0x000107c61428(param_1 + _DAT_112eab728,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025d0ac0; end: 1025d0b23; -[SCSCMapLoggingServicesSaberEntryPoint setSCMapLoggingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d0ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab728;
  func_0x000107c61428(param_1 + _DAT_112eab728,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025d0b24; end: 1025d0ca7;  */

/* WARNING: Possible PIC construction at 0x0001025d0c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025d0c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025d0c50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025d0c28) */
/* WARNING: Removing unreachable block (ram,0x0001025d0c38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d0b24(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c44c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50fdc();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1025c427c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112eab358);
        *(undefined8 *)(lVar2 + _DAT_112ea9cd0) = uVar6;
        *(long *)(lVar2 + _DAT_112ea9cd8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ea9cd8);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1025d0ca8; end: 1025d0ccf; -[SCSCMapLoggingServicesSaberEntryPoint begin] */

void FUN_1025d0ca8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1025d0b24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025d0cd0; end: 1025d0d13; -[SCSCMapLoggingServicesSaberEntryPoint end] */

void FUN_1025d0cd0(undefined8 param_1)

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



/* Entry: 1025d0d14; end: 1025d0f17;  */

void FUN_1025d0d14(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f4e5b0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f0b1a50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef0f4e310)) {
          uVar2 = 0xd00000000000001b;
          func_0x000107c605b8(0xd00000000000001b,0x800000010f0b1cf0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "MapViewScopeGraphBridge/SCSCMapLoggingServicesSaberEntryPoint.swift"
                                ,0x43,2,0x7a,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1025d0f18);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58584();
        goto LAB_1025d0da0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c562b8();
  }
LAB_1025d0da0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1025d0f18; end: 1025d0fc3; -[SCSCMapLoggingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1025d0f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1025d0d14(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1025d0fc4; end: 1025d1043; -[SCSCMapLoggingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d0fc4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eab718,0);
  func_0x000107c61614(param_1 + _DAT_112eab720,0);
  *(undefined8 *)(param_1 + _DAT_112eab728) = 0;
  *(undefined8 *)(param_1 + _DAT_112eab730) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025d1044; end: 1025d1077;  */

void FUN_1025d1044(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025d1078; end: 1025d10cf; -[SCSCMapLoggingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025d10b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025d10b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1078(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eab718);
  func_0x000107c61610(param_1 + _DAT_112eab720);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eab728));
  return;
}



/* Entry: 1025d10d0; end: 1025d10ef;  */

void FUN_1025d10d0(void)

{
  func_0x000107c61168(&PTR_PTR_112851f28);
  return;
}



/* Entry: 1025d10f0; end: 1025d10fb; -[SCSCMapMultiTrayServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d10f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab760;
  func_0x000107c61428(param_1 + _DAT_112eab760,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d10fc; end: 1025d1107; -[SCSCMapMultiTrayServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d10fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab760;
  func_0x000107c61428(param_1 + _DAT_112eab760,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d1108; end: 1025d1113; -[SCSCMapMultiTrayServicesSaberEntryPoint mapViewScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1108(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab768;
  func_0x000107c61428(param_1 + _DAT_112eab768,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d1114; end: 1025d1157;  */

void FUN_1025d1114(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d1158; end: 1025d1163; -[SCSCMapMultiTrayServicesSaberEntryPoint setMapViewScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1158(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab768;
  func_0x000107c61428(param_1 + _DAT_112eab768,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d1164; end: 1025d11b7;  */

void FUN_1025d1164(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d11b8; end: 1025d11ff; -[SCSCMapMultiTrayServicesSaberEntryPoint sCMapMultiTrayServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d11b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab770;
  func_0x000107c61428(param_1 + _DAT_112eab770,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025d1200; end: 1025d1263; -[SCSCMapMultiTrayServicesSaberEntryPoint setSCMapMultiTrayServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1200(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab770;
  func_0x000107c61428(param_1 + _DAT_112eab770,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025d1264; end: 1025d13e7;  */

/* WARNING: Possible PIC construction at 0x0001025d1364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025d1374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025d1390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025d1368) */
/* WARNING: Removing unreachable block (ram,0x0001025d1378) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1264(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c44c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50fe4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1025c4434();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112eab360);
        *(undefined8 *)(lVar2 + _DAT_112ea9d08) = uVar6;
        *(long *)(lVar2 + _DAT_112ea9d10) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ea9d10);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1025d13e8; end: 1025d140f; -[SCSCMapMultiTrayServicesSaberEntryPoint begin] */

void FUN_1025d13e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1025d1264();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025d1410; end: 1025d1453; -[SCSCMapMultiTrayServicesSaberEntryPoint end] */

void FUN_1025d1410(undefined8 param_1)

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



/* Entry: 1025d1454; end: 1025d1657;  */

void FUN_1025d1454(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f4e5b0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f0b1a50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef0f4e2a0)) {
          uVar2 = 0xd00000000000001d;
          func_0x000107c605b8(0xd00000000000001d,0x800000010f0b1d60,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "MapViewScopeGraphBridge/SCSCMapMultiTrayServicesSaberEntryPoint.swift"
                                ,0x45,2,0x7a,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1025d1658);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5858c();
        goto LAB_1025d14e0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c562b8();
  }
LAB_1025d14e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1025d1658; end: 1025d1703; -[SCSCMapMultiTrayServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1025d1658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1025d1454(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1025d1704; end: 1025d1783; -[SCSCMapMultiTrayServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1704(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eab760,0);
  func_0x000107c61614(param_1 + _DAT_112eab768,0);
  *(undefined8 *)(param_1 + _DAT_112eab770) = 0;
  *(undefined8 *)(param_1 + _DAT_112eab778) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025d1784; end: 1025d17b7;  */

void FUN_1025d1784(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025d17b8; end: 1025d180f; -[SCSCMapMultiTrayServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025d17f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025d17f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d17b8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eab760);
  func_0x000107c61610(param_1 + _DAT_112eab768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eab770));
  return;
}



/* Entry: 1025d1810; end: 1025d182f;  */

void FUN_1025d1810(void)

{
  func_0x000107c61168(&PTR_PTR_112851ff8);
  return;
}



/* Entry: 1025d1830; end: 1025d183b; -[SCSCMapPlacesBasemapServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1830(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab7a8;
  func_0x000107c61428(param_1 + _DAT_112eab7a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d183c; end: 1025d1847; -[SCSCMapPlacesBasemapServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d183c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab7a8;
  func_0x000107c61428(param_1 + _DAT_112eab7a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d1848; end: 1025d1853; -[SCSCMapPlacesBasemapServicesSaberEntryPoint mapViewScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1848(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab7b0;
  func_0x000107c61428(param_1 + _DAT_112eab7b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d1854; end: 1025d1897;  */

void FUN_1025d1854(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d1898; end: 1025d18a3; -[SCSCMapPlacesBasemapServicesSaberEntryPoint setMapViewScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1898(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab7b0;
  func_0x000107c61428(param_1 + _DAT_112eab7b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d18a4; end: 1025d18f7;  */

void FUN_1025d18a4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d18f8; end: 1025d193f; -[SCSCMapPlacesBasemapServicesSaberEntryPoint sCMapPlacesBasemapServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d18f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab7b8;
  func_0x000107c61428(param_1 + _DAT_112eab7b8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025d1940; end: 1025d19a3; -[SCSCMapPlacesBasemapServicesSaberEntryPoint setSCMapPlacesBasemapServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1940(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab7b8;
  func_0x000107c61428(param_1 + _DAT_112eab7b8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025d19a4; end: 1025d1b27;  */

/* WARNING: Possible PIC construction at 0x0001025d1aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025d1ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025d1ad0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025d1aa8) */
/* WARNING: Removing unreachable block (ram,0x0001025d1ab8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d19a4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c44c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50ff8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1025c45ec();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112eab380);
        *(undefined8 *)(lVar2 + _DAT_112ea9d40) = uVar6;
        *(long *)(lVar2 + _DAT_112ea9d48) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ea9d48);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1025d1b28; end: 1025d1b4f; -[SCSCMapPlacesBasemapServicesSaberEntryPoint begin] */

void FUN_1025d1b28(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1025d19a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025d1b50; end: 1025d1b93; -[SCSCMapPlacesBasemapServicesSaberEntryPoint end] */

void FUN_1025d1b50(undefined8 param_1)

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



/* Entry: 1025d1b94; end: 1025d1d97;  */

void FUN_1025d1b94(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f4e5b0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f0b1a50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000021;
        if (((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0f4e230)) &&
           (func_0x000107c605b8(0xd000000000000021,0x800000010f0b1dd0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MapViewScopeGraphBridge/SCSCMapPlacesBasemapServicesSaberEntryPoint.swift"
                              ,0x49,2,0x7a,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1025d1d98);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c585a0();
        goto LAB_1025d1c20;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c562b8();
  }
LAB_1025d1c20:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1025d1d98; end: 1025d1e43; -[SCSCMapPlacesBasemapServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1025d1d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1025d1b94(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1025d1e44; end: 1025d1ec3; -[SCSCMapPlacesBasemapServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1e44(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eab7a8,0);
  func_0x000107c61614(param_1 + _DAT_112eab7b0,0);
  *(undefined8 *)(param_1 + _DAT_112eab7b8) = 0;
  *(undefined8 *)(param_1 + _DAT_112eab7c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025d1ec4; end: 1025d1ef7;  */

void FUN_1025d1ec4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025d1ef8; end: 1025d1f4f; -[SCSCMapPlacesBasemapServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025d1f34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025d1f38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1ef8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eab7a8);
  func_0x000107c61610(param_1 + _DAT_112eab7b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eab7b8));
  return;
}



/* Entry: 1025d1f50; end: 1025d1f6f;  */

void FUN_1025d1f50(void)

{
  func_0x000107c61168(&PTR_PTR_1128520c8);
  return;
}



/* Entry: 1025d1f70; end: 1025d1f7b; -[SCSCMapViewServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1f70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab7f0;
  func_0x000107c61428(param_1 + _DAT_112eab7f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d1f7c; end: 1025d1f87; -[SCSCMapViewServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1f7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab7f0;
  func_0x000107c61428(param_1 + _DAT_112eab7f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d1f88; end: 1025d1f93; -[SCSCMapViewServicesSaberEntryPoint mapViewScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1f88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab7f8;
  func_0x000107c61428(param_1 + _DAT_112eab7f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d1f94; end: 1025d1fd7;  */

void FUN_1025d1f94(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d1fd8; end: 1025d1fe3; -[SCSCMapViewServicesSaberEntryPoint setMapViewScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d1fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab7f8;
  func_0x000107c61428(param_1 + _DAT_112eab7f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d1fe4; end: 1025d2037;  */

void FUN_1025d1fe4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d2038; end: 1025d207f; -[SCSCMapViewServicesSaberEntryPoint sCMapViewServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d2038(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab800;
  func_0x000107c61428(param_1 + _DAT_112eab800,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025d2080; end: 1025d20e3; -[SCSCMapViewServicesSaberEntryPoint setSCMapViewServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d2080(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab800;
  func_0x000107c61428(param_1 + _DAT_112eab800,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025d20e4; end: 1025d2267;  */

/* WARNING: Possible PIC construction at 0x0001025d21e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025d21f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025d2210: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025d21e8) */
/* WARNING: Removing unreachable block (ram,0x0001025d21f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d20e4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c44c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5100c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1025c47a4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112eab390);
        *(undefined8 *)(lVar2 + _DAT_112ea9d78) = uVar6;
        *(long *)(lVar2 + _DAT_112ea9d80) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ea9d80);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1025d2268; end: 1025d228f; -[SCSCMapViewServicesSaberEntryPoint begin] */

void FUN_1025d2268(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1025d20e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025d2290; end: 1025d22d3; -[SCSCMapViewServicesSaberEntryPoint end] */

void FUN_1025d2290(undefined8 param_1)

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



/* Entry: 1025d22d4; end: 1025d24d7;  */

void FUN_1025d22d4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f4e5b0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f0b1a50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef0f4e1b0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000018,0x800000010f0b1e50,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "MapViewScopeGraphBridge/SCSCMapViewServicesSaberEntryPoint.swift",
                                0x40,2,0x7a,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1025d24d8);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c585b4();
        goto LAB_1025d2360;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c562b8();
  }
LAB_1025d2360:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1025d24d8; end: 1025d2583; -[SCSCMapViewServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1025d24d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1025d22d4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1025d2584; end: 1025d2603; -[SCSCMapViewServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d2584(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eab7f0,0);
  func_0x000107c61614(param_1 + _DAT_112eab7f8,0);
  *(undefined8 *)(param_1 + _DAT_112eab800) = 0;
  *(undefined8 *)(param_1 + _DAT_112eab808) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025d2604; end: 1025d2637;  */

void FUN_1025d2604(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025d2638; end: 1025d268f; -[SCSCMapViewServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025d2674: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025d2678) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d2638(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eab7f0);
  func_0x000107c61610(param_1 + _DAT_112eab7f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eab800));
  return;
}



/* Entry: 1025d2690; end: 1025d26af;  */

void FUN_1025d2690(void)

{
  func_0x000107c61168(&PTR_PTR_112852198);
  return;
}



/* Entry: 1025d26b0; end: 1025d26bb; -[SCSCMapViewportItemsRegistryServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d26b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab838;
  func_0x000107c61428(param_1 + _DAT_112eab838,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d26bc; end: 1025d26c7; -[SCSCMapViewportItemsRegistryServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d26bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab838;
  func_0x000107c61428(param_1 + _DAT_112eab838,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d26c8; end: 1025d26d3; -[SCSCMapViewportItemsRegistryServicesSaberEntryPoint mapViewScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d26c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab840;
  func_0x000107c61428(param_1 + _DAT_112eab840,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d26d4; end: 1025d2717;  */

void FUN_1025d26d4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d2718; end: 1025d2723; -[SCSCMapViewportItemsRegistryServicesSaberEntryPoint setMapViewScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d2718(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab840;
  func_0x000107c61428(param_1 + _DAT_112eab840,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d2724; end: 1025d2777;  */

void FUN_1025d2724(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d2778; end: 1025d27bf; -[SCSCMapViewportItemsRegistryServicesSaberEntryPoint sCMapViewportItemsRegistryServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d2778(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab848;
  func_0x000107c61428(param_1 + _DAT_112eab848,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025d27c0; end: 1025d2823; -[SCSCMapViewportItemsRegistryServicesSaberEntryPoint setSCMapViewportItemsRegistryServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d27c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab848;
  func_0x000107c61428(param_1 + _DAT_112eab848,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025d2824; end: 1025d29a7;  */

/* WARNING: Possible PIC construction at 0x0001025d2924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025d2934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025d2950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025d2928) */
/* WARNING: Removing unreachable block (ram,0x0001025d2938) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d2824(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c44c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51010();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1025c495c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112eab398);
        *(undefined8 *)(lVar2 + _DAT_112ea9db0) = uVar6;
        *(long *)(lVar2 + _DAT_112ea9db8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ea9db8);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1025d29a8; end: 1025d29cf; -[SCSCMapViewportItemsRegistryServicesSaberEntryPoint begin] */

void FUN_1025d29a8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1025d2824();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025d29d0; end: 1025d2a13; -[SCSCMapViewportItemsRegistryServicesSaberEntryPoint end] */

void FUN_1025d29d0(undefined8 param_1)

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



/* Entry: 1025d2a14; end: 1025d2c17;  */

void FUN_1025d2a14(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f4e5b0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f0b1a50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000029;
        if (((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0f4e140)) &&
           (func_0x000107c605b8(0xd000000000000029,0x800000010f0b1ec0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MapViewScopeGraphBridge/SCSCMapViewportItemsRegistryServicesSaberEntryPoint.swift"
                              ,0x51,2,0x7a,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1025d2c18);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c585b8();
        goto LAB_1025d2aa0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c562b8();
  }
LAB_1025d2aa0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1025d2c18; end: 1025d2cc3; -[SCSCMapViewportItemsRegistryServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1025d2c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1025d2a14(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1025d2cc4; end: 1025d2d43; -[SCSCMapViewportItemsRegistryServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d2cc4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eab838,0);
  func_0x000107c61614(param_1 + _DAT_112eab840,0);
  *(undefined8 *)(param_1 + _DAT_112eab848) = 0;
  *(undefined8 *)(param_1 + _DAT_112eab850) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025d2d44; end: 1025d2d77;  */

void FUN_1025d2d44(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025d2d78; end: 1025d2dcf; -[SCSCMapViewportItemsRegistryServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025d2db4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025d2db8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d2d78(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eab838);
  func_0x000107c61610(param_1 + _DAT_112eab840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eab848));
  return;
}



/* Entry: 1025d2dd0; end: 1025d2def;  */

void FUN_1025d2dd0(void)

{
  func_0x000107c61168(&PTR_PTR_112852268);
  return;
}



/* Entry: 1025d2df0; end: 1025d2dfb; -[SCFullMapCustomizationTrayFactoryServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d2df0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab880;
  func_0x000107c61428(param_1 + _DAT_112eab880,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d2dfc; end: 1025d2e07; -[SCFullMapCustomizationTrayFactoryServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d2dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab880;
  func_0x000107c61428(param_1 + _DAT_112eab880,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d2e08; end: 1025d2e13; -[SCFullMapCustomizationTrayFactoryServicesSaberServiceProvider mapViewScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d2e08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eab888;
  func_0x000107c61428(param_1 + _DAT_112eab888,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d2e14; end: 1025d2e57;  */

void FUN_1025d2e14(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025d2e58; end: 1025d2e63; -[SCFullMapCustomizationTrayFactoryServicesSaberServiceProvider setMapViewScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025d2e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eab888;
  func_0x000107c61428(param_1 + _DAT_112eab888,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025d2e64; end: 1025d2eb7;  */

void FUN_1025d2e64(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



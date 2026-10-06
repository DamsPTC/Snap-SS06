/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b46548; end: 100b4654f;  */

void FUN_100b46548(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10009374c();
  func_0x000107c613fc();
  func_0x000100b465b0(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100b46550; end: 100b4667b;  */

void FUN_100b46550(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10009374c();
  func_0x000107c613fc();
  func_0x000100b465b0(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 100b4667c; end: 100b466c7; -[SCDeferredDeepLinkStorageServiceProvider provide] */

void FUN_100b4667c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b75c8;
  func_0x000107c610fc(PTR_PTR_1126b75c8);
  puVar2 = PTR_PTR_1126b75d0;
  func_0x000107c610f4(PTR_PTR_1126b75d0);
  func_0x000107c46498();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100b466c8; end: 100b4673b; -[SCDeferredDeepLinkStorageServices initWithDeferredDeepLinkStore:] */

undefined1 * FUN_100b466c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702dc0;
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



/* Entry: 100b4673c; end: 100b467bf; -[SCMutliplexingScopeLifecycleMonitor serviceProviderProvided:] */

void FUN_100b4673c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100b467c0;
  puStack_30 = &UNK_110cb7518;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3b75c(param_1,param_2,&puStack_48);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100b467c0; end: 100b467cb;  */

void FUN_100b467c0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15f850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_serviceProviderProvided__112635830,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100b467cc; end: 100b46883; -[SCStartupScopeLifecycleMonitor serviceProviderProvided:] */

/* WARNING: Possible PIC construction at 0x000100b46860: Changing call to branch */

void FUN_100b467cc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  double dVar2;
  
  func_0x000107c61174(param_4);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x000107c6071c();
    lVar1 = *(long *)(param_2 + 0x18);
    dVar2 = param_1;
    func_0x000107c4d9c0(lVar1,param_3,param_4);
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c61170(0);
    }
    else {
      func_0x000107c4ff88(*(undefined8 *)(param_2 + 0x18),param_3,param_4);
      func_0x000107c61158(param_4);
      func_0x000107c60b14();
      func_0x000107c61180();
      func_0x000107c4223c(lVar1);
      func_0x000107c4f574(param_1 - dVar2,*(undefined8 *)(param_2 + 0x20),param_3,param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100b46884; end: 100b46887; -[SCNoOpScopeLifecycleMonitor serviceProviderProvided:] */

void FUN_100b46884(void)

{
  return;
}



/* Entry: 100b46888; end: 100b46897; -[SCScopeLifecycleBeginScheduler didUnwrapServiceProvider] */

void FUN_100b46888(long param_1)

{
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
                    /* WARNING: Could not recover jumptable at 0x00010bdd3990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginPendingScopeLifecyclesAfte_112552800);
  return;
}



/* Entry: 100b46898; end: 100b469af; -[SCScopeLifecycleBeginScheduler _beginPendingScopeLifecyclesAfterServicesProvided] */

void FUN_100b46898(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c40808();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x28) == 0)) {
    func_0x000107c61144(auStack_38,param_1);
    puVar2 = PTR_PTR_1126b7040;
    func_0x000107c5aa24();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_40,auStack_38);
    puVar3 = puVar2;
    func_0x000107c3eaf8();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c3d7d0(*(undefined8 *)(param_1 + 8));
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  return;
}



/* Entry: 100b469b0; end: 100b469df; -[SCLockfreeLazy .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100b469c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b469cc) */

void FUN_100b469b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100b469e0; end: 100b46a53;  */

/* WARNING: Possible PIC construction at 0x000100b46a34: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b469e0(long param_1,long param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    func_0x000107c61170(0);
  }
  else {
    param_2 = param_1 + _DAT_11278ca48;
    func_0x000107c61148(param_2);
    func_0x000107c52024();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100b46a54; end: 100b46b37; -[SCDeferredDeepLinkEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b46a54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + _DAT_11271f854;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4165c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c41658();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    func_0x000107c61144(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    puStack_50 = &UNK_105207d68;
    puStack_48 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_40,auStack_38);
    FUN_10007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 100b46b38; end: 100b46b3f; -[SCDeferredDeepLinkStorageServices deferredDeepLinkStore] */

undefined8 FUN_100b46b38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b46b40; end: 100b46c63; -[SCDeferredDeepLinkStoreImpl deferredDeepLinkData] */

void FUN_100b46b40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b46c64; end: 100b46c83; -[SCMainCameraScopeGraphBridgeSaberEntryPoint init] */

void FUN_100b46c64(void)

{
  func_0x000100b46b68();
  return;
}



/* Entry: 100b46c84; end: 100b46d2f; -[SCMainCameraScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100b46c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b46d30(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b46d30; end: 100b473a7;  */

void FUN_100b46d30(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0xd000000000000019;
    if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10dfbf0)) ||
       (func_0x000107c605b8(0xd000000000000019,0x800000010ef20410,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57598();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef0f8a0b0)) ||
         (func_0x000107c605b8(0xd000000000000018,0x800000010f075f50,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c580c4();
      }
      else {
        if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0faf8f0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000016,0x800000010f050710,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef0f16ed0)) ||
               (func_0x000107c605b8(0xd00000000000001c,0x800000010f0e9130,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c58108();
              goto LAB_100b46dc0;
            }
            if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0f89b20)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd00000000000001c,0x800000010f0764e0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0f893c0)) {
                  uVar2 = 0;
                  func_0x000107c605b8(0xd000000000000016,0x800000010f076c40,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0xd000000000000031;
                    if (((param_2 == -0x2fffffffffffffcf) && (param_3 == -0x7ffffffef1006090)) ||
                       (func_0x000107c605b8(0xd000000000000031,0x800000010eff9f70,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c58640();
                    }
                    else {
                      uVar2 = 0;
                      if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef0f892c0)) ||
                         (func_0x000107c605b8(0xd00000000000001e,0x800000010f076d40,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c5864c();
                      }
                      else {
                        uVar2 = 0xd000000000000015;
                        if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef0fb08b0))
                           || (func_0x000107c605b8(0xd000000000000015,0x800000010f04f750,param_2,
                                                   param_3,0), (uVar2 & 1) != 0)) {
                          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c58774();
                        }
                        else {
                          uVar2 = 0;
                          if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef0f0fbb0))
                             || (func_0x000107c605b8(0xd00000000000001a,0x800000010f0f0450,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c587b8();
                          }
                          else {
                            if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0f89080)
                               ) {
                              uVar2 = 0;
                              func_0x000107c605b8(0xd000000000000016,0x800000010f076f80,param_2,
                                                  param_3,0);
                              if ((uVar2 & 1) == 0) {
                                if ((param_2 != -0x2fffffffffffffe7) ||
                                   (param_3 != -0x7ffffffef0faf8d0)) {
                                  uVar2 = 0xd000000000000019;
                                  func_0x000107c605b8(0xd000000000000019,0x800000010f050730,param_2,
                                                      param_3,0);
                                  if ((uVar2 & 1) == 0) {
                                    uVar2 = 0xd000000000000029;
                                    if (((param_2 != -0x2fffffffffffffd7) ||
                                        (param_3 != -0x7ffffffef0f0fb90)) &&
                                       (func_0x000107c605b8(0xd000000000000029,0x800000010f0f0470,
                                                            param_2,param_3,0), (uVar2 & 1) == 0)) {
                                      func_0x000107c602fc(0x15);
                                      func_0x000107c6142c(0xe000000000000000);
                                      func_0x000107c5fb78(param_2,param_3);
                                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                          0x800000010ef0fc20,
                                                                                                                    
                                                  "MainCameraScopeGraphBridge/SCMainCameraScopeGraphBridgeSaberEntryPoint.swift"
                                                  ,0x4c,2,0x8c,0);
                    /* WARNING: Does not return */
                                      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b473a8);
                                      (*pcVar1)();
                                    }
                                    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c561a8();
                                    goto LAB_100b46dc0;
                                  }
                                }
                                FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c57f80();
                                goto LAB_100b46dc0;
                              }
                            }
                            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c58834();
                          }
                        }
                      }
                    }
                    goto LAB_100b46dc0;
                  }
                }
                FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c58604();
                goto LAB_100b46dc0;
              }
            }
            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c582b0();
            goto LAB_100b46dc0;
          }
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c580e8();
      }
    }
  }
LAB_100b46dc0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b473a8; end: 100b473ff; -[SCMainCameraScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b473a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef22f0;
  func_0x000107c61428(param_1 + _DAT_112ef22f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b47400; end: 100b4740b; -[SCMainCameraScopeGraphBridgeSaberEntryPoint setMainCameraScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b47400(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2358;
  func_0x000107c61428(param_1 + _DAT_112ef2358,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4740c; end: 100b4746b;  */

void FUN_100b4740c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100b4746c; end: 100b47477; -[SCMainCameraScopeGraphBridgeSaberEntryPoint setPlusSubscribeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4746c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef22f8;
  func_0x000107c61428(param_1 + _DAT_112ef22f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b47478; end: 100b47483; -[SCMainCameraScopeGraphBridgeSaberEntryPoint setSCCameraBIPAScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b47478(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2300;
  func_0x000107c61428(param_1 + _DAT_112ef2300,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b47484; end: 100b4748f; -[SCMainCameraScopeGraphBridgeSaberEntryPoint setSCCameraUIScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b47484(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2308;
  func_0x000107c61428(param_1 + _DAT_112ef2308,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b47490; end: 100b4749b; -[SCMainCameraScopeGraphBridgeSaberEntryPoint setSCCaptureServiceScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b47490(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2310;
  func_0x000107c61428(param_1 + _DAT_112ef2310,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b4749c; end: 100b474a7; -[SCMainCameraScopeGraphBridgeSaberEntryPoint setSCDeeplinkSendToScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4749c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2318;
  func_0x000107c61428(param_1 + _DAT_112ef2318,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b474a8; end: 100b474b3; -[SCMainCameraScopeGraphBridgeSaberEntryPoint setSCMemoriesScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b474a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2320;
  func_0x000107c61428(param_1 + _DAT_112ef2320,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b474b4; end: 100b474bf; -[SCMainCameraScopeGraphBridgeSaberEntryPoint setSCMemoriesTrackingImageProcessCommandScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b474b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2328;
  func_0x000107c61428(param_1 + _DAT_112ef2328,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b474c0; end: 100b474cb; -[SCMainCameraScopeGraphBridgeSaberEntryPoint setSCMerlinOnboardingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b474c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2330;
  func_0x000107c61428(param_1 + _DAT_112ef2330,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b474cc; end: 100b474d7; -[SCMainCameraScopeGraphBridgeSaberEntryPoint setSCPreviewScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b474cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2338;
  func_0x000107c61428(param_1 + _DAT_112ef2338,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b474d8; end: 100b474e3; -[SCMainCameraScopeGraphBridgeSaberEntryPoint setSCRealTimeScanScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b474d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2340;
  func_0x000107c61428(param_1 + _DAT_112ef2340,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b474e4; end: 100b474ef; -[SCMainCameraScopeGraphBridgeSaberEntryPoint setSCSendFlowScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b474e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2348;
  func_0x000107c61428(param_1 + _DAT_112ef2348,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b474f0; end: 100b474fb; -[SCMainCameraScopeGraphBridgeSaberEntryPoint setSCARBarPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b474f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2350;
  func_0x000107c61428(param_1 + _DAT_112ef2350,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b474fc; end: 100b47523; -[SCMainCameraScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100b474fc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b47524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b47524; end: 100b47e4f;  */

/* WARNING: Possible PIC construction at 0x000100b47a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47b34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47e04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47d24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47d54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47c94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47cb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47c14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47bf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47b94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b47b64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b47b78) */
/* WARNING: Removing unreachable block (ram,0x000100b47b98) */
/* WARNING: Removing unreachable block (ram,0x000100b47bc8) */
/* WARNING: Removing unreachable block (ram,0x000100b47bb8) */
/* WARNING: Removing unreachable block (ram,0x000100b47bf8) */
/* WARNING: Removing unreachable block (ram,0x000100b47be8) */
/* WARNING: Removing unreachable block (ram,0x000100b47bd8) */
/* WARNING: Removing unreachable block (ram,0x000100b47c28) */
/* WARNING: Removing unreachable block (ram,0x000100b47c18) */
/* WARNING: Removing unreachable block (ram,0x000100b47c08) */
/* WARNING: Removing unreachable block (ram,0x000100b47c68) */
/* WARNING: Removing unreachable block (ram,0x000100b47c58) */
/* WARNING: Removing unreachable block (ram,0x000100b47c48) */
/* WARNING: Removing unreachable block (ram,0x000100b47cb8) */
/* WARNING: Removing unreachable block (ram,0x000100b47ca8) */
/* WARNING: Removing unreachable block (ram,0x000100b47c98) */
/* WARNING: Removing unreachable block (ram,0x000100b47c88) */
/* WARNING: Removing unreachable block (ram,0x000100b47d08) */
/* WARNING: Removing unreachable block (ram,0x000100b47cf8) */
/* WARNING: Removing unreachable block (ram,0x000100b47ce8) */
/* WARNING: Removing unreachable block (ram,0x000100b47cd8) */
/* WARNING: Removing unreachable block (ram,0x000100b47cc8) */
/* WARNING: Removing unreachable block (ram,0x000100b47d58) */
/* WARNING: Removing unreachable block (ram,0x000100b47d48) */
/* WARNING: Removing unreachable block (ram,0x000100b47d38) */
/* WARNING: Removing unreachable block (ram,0x000100b47d28) */
/* WARNING: Removing unreachable block (ram,0x000100b47d18) */
/* WARNING: Removing unreachable block (ram,0x000100b47db8) */
/* WARNING: Removing unreachable block (ram,0x000100b47da8) */
/* WARNING: Removing unreachable block (ram,0x000100b47d98) */
/* WARNING: Removing unreachable block (ram,0x000100b47d88) */
/* WARNING: Removing unreachable block (ram,0x000100b47d78) */
/* WARNING: Removing unreachable block (ram,0x000100b47e28) */
/* WARNING: Removing unreachable block (ram,0x000100b47e18) */
/* WARNING: Removing unreachable block (ram,0x000100b47e08) */
/* WARNING: Removing unreachable block (ram,0x000100b47df8) */
/* WARNING: Removing unreachable block (ram,0x000100b47de8) */
/* WARNING: Removing unreachable block (ram,0x000100b47dd8) */
/* WARNING: Removing unreachable block (ram,0x000100b47b1c) */
/* WARNING: Removing unreachable block (ram,0x000100b47b0c) */
/* WARNING: Removing unreachable block (ram,0x000100b47afc) */
/* WARNING: Removing unreachable block (ram,0x000100b47aec) */
/* WARNING: Removing unreachable block (ram,0x000100b47adc) */
/* WARNING: Removing unreachable block (ram,0x000100b47acc) */
/* WARNING: Removing unreachable block (ram,0x000100b47abc) */
/* WARNING: Removing unreachable block (ram,0x000100b47a98) */
/* WARNING: Removing unreachable block (ram,0x000100b47a88) */
/* WARNING: Removing unreachable block (ram,0x000100b47a70) */
/* WARNING: Removing unreachable block (ram,0x000100b47a58) */
/* WARNING: Removing unreachable block (ram,0x000100b47a48) */
/* WARNING: Removing unreachable block (ram,0x000100b47a34) */
/* WARNING: Removing unreachable block (ram,0x000100b47a24) */
/* WARNING: Removing unreachable block (ram,0x000100b47b68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b47524(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 auStack_70 [2];
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c4eaa8();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50b1c();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c50b40();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c50b60();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c50d08();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            lVar5 = unaff_x20;
            func_0x000107c5105c();
            func_0x000107c61180();
            if (lVar5 != 0) {
              lVar5 = unaff_x20;
              func_0x000107c51098();
              func_0x000107c61180();
              if (lVar5 != 0) {
                lVar5 = unaff_x20;
                func_0x000107c510a4();
                func_0x000107c61180();
                if (lVar5 == 0) {
                  func_0x000107c61170(lVar3);
                  lVar3 = lVar4;
                }
                else {
                  lVar5 = unaff_x20;
                  func_0x000107c511cc();
                  func_0x000107c61180();
                  if (lVar5 == 0) {
                    func_0x000107c61170(lVar3);
                    lVar3 = lVar4;
                  }
                  else {
                    lVar5 = unaff_x20;
                    func_0x000107c51210();
                    func_0x000107c61180();
                    if (lVar5 != 0) {
                      lVar5 = unaff_x20;
                      func_0x000107c5128c();
                      func_0x000107c61180();
                      if (lVar5 != 0) {
                        lVar5 = unaff_x20;
                        func_0x000107c509d8();
                        func_0x000107c61180();
                        if (lVar5 == 0) {
                          func_0x000107c61170(lVar3);
                          lVar3 = lVar4;
                        }
                        else {
                          func_0x000107c4c14c();
                          func_0x000107c61180();
                          if (unaff_x20 == 0) {
                            func_0x000107c61170(lVar3);
                            lVar3 = lVar4;
                          }
                          else {
                            lVar6 = 0;
                            FUN_100b48240();
                            lVar4 = lVar6;
                            func_0x000107c610f8();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            func_0x000107c61174();
                            lVar5 = lVar3;
                            FUN_100b48260();
                            if (lVar5 == 0) {
                    /* WARNING: Does not return */
                              pcVar2 = (code *)SoftwareBreakpoint(1,0x100b47e50);
                              (*pcVar2)();
                            }
                            FUN_100083b20(auStack_70);
                            uVar1 = auStack_70[0];
                            FUN_100087c34(auStack_78);
                            func_0x000107c61574(uVar1);
                            FUN_100083b20(auStack_70);
                            uVar1 = auStack_70[0];
                            FUN_100087c34(auStack_78);
                            func_0x000107c61574(uVar1);
                            FUN_100083b20(auStack_70);
                            uVar1 = auStack_70[0];
                            FUN_100087c34(auStack_78);
                            func_0x000107c61574(uVar1);
                            FUN_100083b20(auStack_70);
                            uVar1 = auStack_70[0];
                            FUN_100087c34(auStack_78);
                            func_0x000107c61574(uVar1);
                            FUN_100083b20(auStack_70);
                            uVar1 = auStack_70[0];
                            FUN_100087c34(auStack_78);
                            func_0x000107c61574(uVar1);
                            FUN_100083b20(auStack_70);
                            uVar1 = auStack_70[0];
                            FUN_100087c34(auStack_78);
                            func_0x000107c61574(uVar1);
                            FUN_100083b20(auStack_70);
                            uVar1 = auStack_70[0];
                            FUN_100087c34(auStack_78);
                            func_0x000107c61574(uVar1);
                            FUN_100083b20(auStack_70);
                            uVar1 = auStack_70[0];
                            FUN_100087c34(auStack_78);
                            func_0x000107c61574(uVar1);
                            FUN_100083b20(auStack_70);
                            uVar1 = auStack_70[0];
                            FUN_100087c34(auStack_78);
                            func_0x000107c61574(uVar1);
                            FUN_100083b20(auStack_70);
                            uVar1 = auStack_70[0];
                            FUN_100087c34(auStack_78);
                            func_0x000107c61574(uVar1);
                            FUN_100083b20(auStack_70);
                            uVar1 = auStack_70[0];
                            FUN_100087c34(auStack_78);
                            func_0x000107c61574(uVar1);
                            FUN_100083b20(auStack_70);
                            FUN_100087c34(auStack_78);
                            func_0x000107c61574(auStack_70[0]);
                            *(long *)(lVar4 + _DAT_112ef0978) = lVar5;
                            *(long *)(lVar4 + _DAT_112ef0980) = unaff_x20;
                            lStack_88 = lVar4;
                            lStack_80 = lVar6;
                            func_0x000107c61154(&lStack_88,PTR_s_init_1125d9248);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100b47e50; end: 100b47e97; -[SCMainCameraScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b47e50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef22f0;
  func_0x000107c61428(param_1 + _DAT_112ef22f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b47e98; end: 100b47edf; -[SCMainCameraScopeGraphBridgeSaberEntryPoint plusSubscribeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b47e98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef22f8;
  func_0x000107c61428(param_1 + _DAT_112ef22f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b47ee0; end: 100b47f27; -[SCMainCameraScopeGraphBridgeSaberEntryPoint sCCameraBIPAScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b47ee0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2300;
  func_0x000107c61428(param_1 + _DAT_112ef2300,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b47f28; end: 100b47f6f; -[SCMainCameraScopeGraphBridgeSaberEntryPoint sCCameraUIScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b47f28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2308;
  func_0x000107c61428(param_1 + _DAT_112ef2308,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b47f70; end: 100b47fb7; -[SCMainCameraScopeGraphBridgeSaberEntryPoint sCCaptureServiceScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b47f70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2310;
  func_0x000107c61428(param_1 + _DAT_112ef2310,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b47fb8; end: 100b47fff; -[SCMainCameraScopeGraphBridgeSaberEntryPoint sCDeeplinkSendToScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b47fb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2318;
  func_0x000107c61428(param_1 + _DAT_112ef2318,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b48000; end: 100b48047; -[SCMainCameraScopeGraphBridgeSaberEntryPoint sCMemoriesScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b48000(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2320;
  func_0x000107c61428(param_1 + _DAT_112ef2320,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b48048; end: 100b4808f; -[SCMainCameraScopeGraphBridgeSaberEntryPoint sCMemoriesTrackingImageProcessCommandScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b48048(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2328;
  func_0x000107c61428(param_1 + _DAT_112ef2328,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b48090; end: 100b480d7; -[SCMainCameraScopeGraphBridgeSaberEntryPoint sCMerlinOnboardingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b48090(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2330;
  func_0x000107c61428(param_1 + _DAT_112ef2330,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b480d8; end: 100b4811f; -[SCMainCameraScopeGraphBridgeSaberEntryPoint sCPreviewScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b480d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2338;
  func_0x000107c61428(param_1 + _DAT_112ef2338,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b48120; end: 100b48167; -[SCMainCameraScopeGraphBridgeSaberEntryPoint sCRealTimeScanScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b48120(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2340;
  func_0x000107c61428(param_1 + _DAT_112ef2340,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b48168; end: 100b481af; -[SCMainCameraScopeGraphBridgeSaberEntryPoint sCSendFlowScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b48168(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2348;
  func_0x000107c61428(param_1 + _DAT_112ef2348,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b481b0; end: 100b481f7; -[SCMainCameraScopeGraphBridgeSaberEntryPoint sCARBarPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b481b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2350;
  func_0x000107c61428(param_1 + _DAT_112ef2350,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b481f8; end: 100b4823f; -[SCMainCameraScopeGraphBridgeSaberEntryPoint mainCameraScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b481f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2358;
  func_0x000107c61428(param_1 + _DAT_112ef2358,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b48240; end: 100b4825f;  */

void FUN_100b48240(void)

{
  func_0x000107c61168(&PTR_PTR_112889e08);
  return;
}



/* Entry: 100b48260; end: 100b4832f;  */

undefined8 FUN_100b48260(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112ef2128,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1005b77b0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100b48330; end: 100b48333;  */

void FUN_100b48330(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 100b48334; end: 100b483b3; -[SCARBarIntegrationServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b48334(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef2390,0);
  func_0x000107c61614(param_1 + _DAT_112ef2398,0);
  *(undefined8 *)(param_1 + _DAT_112ef23a0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef23a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b483b4; end: 100b4845f; -[SCARBarIntegrationServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b483b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b48460(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b48460; end: 100b48663;  */

void FUN_100b48460(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef0f0fb10)) ||
       (func_0x000107c605b8(0xd000000000000022,0x800000010f0f04f0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c561a4();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0f0fae0)) {
        uVar2 = 0xd00000000000001f;
        func_0x000107c605b8(0xd00000000000001f,0x800000010f0f0520,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MainCameraScopeGraphBridge/SCARBarIntegrationServicesSaberEntryPoint.swift"
                              ,0x4a,2,0x60,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b48664);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c520bc();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b48664; end: 100b4866f; -[SCARBarIntegrationServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b48664(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2390;
  func_0x000107c61428(param_1 + _DAT_112ef2390,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b48670; end: 100b486c3;  */

void FUN_100b48670(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b486c4; end: 100b486cf; -[SCARBarIntegrationServicesSaberEntryPoint setMainCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b486c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2398;
  func_0x000107c61428(param_1 + _DAT_112ef2398,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b486d0; end: 100b48733; -[SCARBarIntegrationServicesSaberEntryPoint setARBarIntegrationServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b486d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef23a0;
  func_0x000107c61428(param_1 + _DAT_112ef23a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b48734; end: 100b4875b; -[SCARBarIntegrationServicesSaberEntryPoint begin] */

void FUN_100b48734(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b4875c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b4875c; end: 100b488df;  */

/* WARNING: Possible PIC construction at 0x000100b4885c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b4886c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b48888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b48860) */
/* WARNING: Removing unreachable block (ram,0x000100b48870) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4875c(void)

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
    func_0x000107c4c148();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3ce6c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b48984();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ef2138);
        *(undefined8 *)(lVar2 + _DAT_112ef09b0) = uVar6;
        *(long *)(lVar2 + _DAT_112ef09b8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ef09b8);
        FUN_100083b20(&lStack_78);
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



/* Entry: 100b488e0; end: 100b488eb; -[SCARBarIntegrationServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b488e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2390;
  func_0x000107c61428(param_1 + _DAT_112ef2390,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b488ec; end: 100b4892f;  */

void FUN_100b488ec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b48930; end: 100b4893b; -[SCARBarIntegrationServicesSaberEntryPoint mainCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b48930(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2398;
  func_0x000107c61428(param_1 + _DAT_112ef2398,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b4893c; end: 100b48983; -[SCARBarIntegrationServicesSaberEntryPoint aRBarIntegrationServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4893c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef23a0;
  func_0x000107c61428(param_1 + _DAT_112ef23a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b48984; end: 100b489a3;  */

void FUN_100b48984(void)

{
  func_0x000107c61168(&PTR_PTR_112889ed0);
  return;
}



/* Entry: 100b489a4; end: 100b489ab;  */

void FUN_100b489a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x98);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b489ac; end: 100b489ff;  */

void FUN_100b489ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x98);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b48a00; end: 100b48a7f; -[SCSCARBarAdapterServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b48a00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef23d8,0);
  func_0x000107c61614(param_1 + _DAT_112ef23e0,0);
  *(undefined8 *)(param_1 + _DAT_112ef23e8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef23f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b48a80; end: 100b48b2b; -[SCSCARBarAdapterServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b48a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b48b2c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b48b2c; end: 100b48d2f;  */

void FUN_100b48b2c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef0f0fb10)) ||
       (func_0x000107c605b8(0xd000000000000022,0x800000010f0f04f0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c561a4();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef0f0fa70)) {
        uVar2 = 0xd00000000000001d;
        func_0x000107c605b8(0xd00000000000001d,0x800000010f0f0590,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MainCameraScopeGraphBridge/SCSCARBarAdapterServicesSaberEntryPoint.swift"
                              ,0x48,2,0x60,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b48d30);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57f7c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b48d30; end: 100b48d3b; -[SCSCARBarAdapterServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b48d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef23d8;
  func_0x000107c61428(param_1 + _DAT_112ef23d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b48d3c; end: 100b48d8f;  */

void FUN_100b48d3c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b48d90; end: 100b48d9b; -[SCSCARBarAdapterServicesSaberEntryPoint setMainCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b48d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef23e0;
  func_0x000107c61428(param_1 + _DAT_112ef23e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b48d9c; end: 100b48dff; -[SCSCARBarAdapterServicesSaberEntryPoint setSCARBarAdapterServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b48d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef23e8;
  func_0x000107c61428(param_1 + _DAT_112ef23e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b48e00; end: 100b48e27; -[SCSCARBarAdapterServicesSaberEntryPoint begin] */

void FUN_100b48e00(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b48e28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b48e28; end: 100b48fab;  */

/* WARNING: Possible PIC construction at 0x000100b48f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b48f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b48f54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b48f2c) */
/* WARNING: Removing unreachable block (ram,0x000100b48f3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b48e28(void)

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
    func_0x000107c4c148();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c509d4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b49050();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ef2160);
        *(undefined8 *)(lVar2 + _DAT_112ef09e8) = uVar6;
        *(long *)(lVar2 + _DAT_112ef09f0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ef09f0);
        FUN_100083b20(&lStack_78);
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



/* Entry: 100b48fac; end: 100b48fb7; -[SCSCARBarAdapterServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b48fac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef23d8;
  func_0x000107c61428(param_1 + _DAT_112ef23d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b48fb8; end: 100b48ffb;  */

void FUN_100b48fb8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b48ffc; end: 100b49007; -[SCSCARBarAdapterServicesSaberEntryPoint mainCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b48ffc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef23e0;
  func_0x000107c61428(param_1 + _DAT_112ef23e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b49008; end: 100b4904f; -[SCSCARBarAdapterServicesSaberEntryPoint sCARBarAdapterServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b49008(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef23e8;
  func_0x000107c61428(param_1 + _DAT_112ef23e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b49050; end: 100b4906f;  */

void FUN_100b49050(void)

{
  func_0x000107c61168(&PTR_PTR_112889f98);
  return;
}



/* Entry: 100b49070; end: 100b490ef; -[SCSCARBarServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b49070(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef2420,0);
  func_0x000107c61614(param_1 + _DAT_112ef2428,0);
  *(undefined8 *)(param_1 + _DAT_112ef2430) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef2438) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b490f0; end: 100b4919b; -[SCSCARBarServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b490f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b4919c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b4919c; end: 100b4939f;  */

void FUN_100b4919c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef0f0fb10)) ||
       (func_0x000107c605b8(0xd000000000000022,0x800000010f0f04f0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c561a4();
    }
    else {
      if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0f0fa00)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000016,0x800000010f0f0600,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MainCameraScopeGraphBridge/SCSCARBarServicesSaberEntryPoint.swift",
                              0x41,2,0x60,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b493a0);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57f88();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b493a0; end: 100b493ab; -[SCSCARBarServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b493a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2420;
  func_0x000107c61428(param_1 + _DAT_112ef2420,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b493ac; end: 100b493ff;  */

void FUN_100b493ac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b49400; end: 100b4940b; -[SCSCARBarServicesSaberEntryPoint setMainCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b49400(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2428;
  func_0x000107c61428(param_1 + _DAT_112ef2428,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b4940c; end: 100b4946f; -[SCSCARBarServicesSaberEntryPoint setSCARBarServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4940c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2430;
  func_0x000107c61428(param_1 + _DAT_112ef2430,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b49470; end: 100b49497; -[SCSCARBarServicesSaberEntryPoint begin] */

void FUN_100b49470(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b49498();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b49498; end: 100b4961b;  */

/* WARNING: Possible PIC construction at 0x000100b49598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b495a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b495c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b4959c) */
/* WARNING: Removing unreachable block (ram,0x000100b495ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b49498(void)

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
    func_0x000107c4c148();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c509e0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b496c0();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ef2170);
        *(undefined8 *)(lVar2 + _DAT_112ef0a20) = uVar6;
        *(long *)(lVar2 + _DAT_112ef0a28) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ef0a28);
        FUN_100083b20(&lStack_78);
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



/* Entry: 100b4961c; end: 100b49627; -[SCSCARBarServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4961c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2420;
  func_0x000107c61428(param_1 + _DAT_112ef2420,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b49628; end: 100b4966b;  */

void FUN_100b49628(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b4966c; end: 100b49677; -[SCSCARBarServicesSaberEntryPoint mainCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b4966c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2428;
  func_0x000107c61428(param_1 + _DAT_112ef2428,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b49678; end: 100b496bf; -[SCSCARBarServicesSaberEntryPoint sCARBarServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b49678(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef2430;
  func_0x000107c61428(param_1 + _DAT_112ef2430,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b496c0; end: 100b496df;  */

void FUN_100b496c0(void)

{
  func_0x000107c61168(&PTR_PTR_11288a060);
  return;
}



/* Entry: 100b496e0; end: 100b4975f; -[SCSCMainCameraPresentationServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b496e0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef2468,0);
  func_0x000107c61614(param_1 + _DAT_112ef2470,0);
  *(undefined8 *)(param_1 + _DAT_112ef2478) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef2480) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b49760; end: 100b4980b; -[SCSCMainCameraPresentationServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b49760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b4980c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b4980c; end: 100b49a0f;  */

void FUN_100b4980c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0fb10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f04f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000027;
        if (((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0f0f990)) &&
           (func_0x000107c605b8(0xd000000000000027,0x800000010f0f0670,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MainCameraScopeGraphBridge/SCSCMainCameraPresentationServicesSaberEntryPoint.swift"
                              ,0x52,2,0x60,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b49a10);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5853c();
        goto LAB_100b49898;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c561a4();
  }
LAB_100b49898:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b49a10; end: 100b49a1b; -[SCSCMainCameraPresentationServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b49a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef2468;
  func_0x000107c61428(param_1 + _DAT_112ef2468,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



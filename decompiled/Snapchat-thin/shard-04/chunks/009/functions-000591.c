/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039ac478; end: 1039ac4bb; -[SCClientresActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_1039ac478(undefined8 param_1)

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



/* Entry: 1039ac4bc; end: 1039ac4ef;  */

void FUN_1039ac4bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039ac4f0; end: 1039ac537; -[SCClientresActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039ac51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039ac520) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ac4f0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc0028);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc0030));
  return;
}



/* Entry: 1039ac538; end: 1039ac557;  */

void FUN_1039ac538(void)

{
  func_0x000107c61168(&PTR_PTR_11290d5d0);
  return;
}



/* Entry: 1039ac558; end: 1039ac563; -[SCActiveUserSessionSharedServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ac558(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc0068;
  func_0x000107c61428(param_1 + _DAT_112fc0068,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039ac564; end: 1039ac56f; -[SCActiveUserSessionSharedServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ac564(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc0068;
  func_0x000107c61428(param_1 + _DAT_112fc0068,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039ac570; end: 1039ac57b; -[SCActiveUserSessionSharedServicesSaberServiceProvider clientresActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ac570(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc0070;
  func_0x000107c61428(param_1 + _DAT_112fc0070,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039ac57c; end: 1039ac5bf;  */

void FUN_1039ac57c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039ac5c0; end: 1039ac5cb; -[SCActiveUserSessionSharedServicesSaberServiceProvider setClientresActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ac5c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc0070;
  func_0x000107c61428(param_1 + _DAT_112fc0070,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039ac5cc; end: 1039ac61f;  */

void FUN_1039ac5cc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039ac620; end: 1039ac833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039ac620(void)

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
    func_0x000107c3fbec();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039ac28c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbffd0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc0078);
      *(long *)(unaff_x20 + _DAT_112fc0078) = lVar4;
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
                      "ClientresActiveUserSessionScopeGraphBridge/SCActiveUserSessionSharedServicesSaberServiceProvider.swift"
                      ,0x66,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ac74c);
  (*pcVar1)();
}



/* Entry: 1039ac834; end: 1039ac867; -[SCActiveUserSessionSharedServicesSaberServiceProvider provide] */

void FUN_1039ac834(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039ac620();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039ac868; end: 1039ac89b; -[SCActiveUserSessionSharedServicesSaberServiceProvider __safeProvide] */

void FUN_1039ac868(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039ac74c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039ac89c; end: 1039ac8df; -[SCActiveUserSessionSharedServicesSaberServiceProvider end] */

void FUN_1039ac89c(undefined8 param_1)

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



/* Entry: 1039ac8e0; end: 1039aca77;  */

void FUN_1039ac8e0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0e7deb0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000032,0x800000010f182150,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ClientresActiveUserSessionScopeGraphBridge/SCActiveUserSessionSharedServicesSaberServiceProvider.swift"
                            ,0x66,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039aca78);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53498();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039aca78; end: 1039acb23; -[SCActiveUserSessionSharedServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039aca78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039ac8e0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039acb24; end: 1039acb97; -[SCActiveUserSessionSharedServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039acb24(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc0068,0);
  func_0x000107c61614(param_1 + _DAT_112fc0070,0);
  *(undefined8 *)(param_1 + _DAT_112fc0078) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039acb98; end: 1039acbcb;  */

void FUN_1039acb98(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039acbcc; end: 1039acc13; -[SCActiveUserSessionSharedServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039acbcc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc0068);
  func_0x000107c61610(param_1 + _DAT_112fc0070);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc0078));
  return;
}



/* Entry: 1039acc14; end: 1039acc33;  */

void FUN_1039acc14(void)

{
  func_0x000107c61168(&PTR_PTR_112fc00c0);
  return;
}



/* Entry: 1039acc34; end: 1039acc43; -[_TtC31ActiveUserSessionSharedServices31ActiveUserSessionSharedServices memoriesAlbumFetchCacheManagingServicesLazy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039acc34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fc0128));
  return;
}



/* Entry: 1039acc44; end: 1039acc53; -[_TtC31ActiveUserSessionSharedServices31ActiveUserSessionSharedServices storyInviteSendingServicesLazy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039acc44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fc0130));
  return;
}



/* Entry: 1039acc54; end: 1039accb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039acc54(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc0128) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fc0130) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039accb8; end: 1039acceb;  */

void FUN_1039accb8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039accec; end: 1039acd23; -[_TtC31ActiveUserSessionSharedServices31ActiveUserSessionSharedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039acd08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039acd0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039accec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc0128));
  return;
}



/* Entry: 1039acd24; end: 1039acf87;  */

long FUN_1039acd24(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1039acf88; end: 1039acf9f;  */

bool FUN_1039acf88(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1039acfa0; end: 1039acfdf;  */

void FUN_1039acfa0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc0160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc307b0;
  func_0x000107c61520(&UNK_10dc307b0,&UNK_1106b7aa8);
  puRam0000000112fc0160 = puVar1;
  return;
}



/* Entry: 1039acfe0; end: 1039ad08b;  */

void FUN_1039acfe0(void)

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



/* Entry: 1039ad08c; end: 1039ad0c3;  */

void FUN_1039ad08c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1039ad0c4; end: 1039ad117; -[_TtC21StoryInviteSendingAPI30StoryInviteSendingServiceScope init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad0c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc0168,0);
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039ad118; end: 1039ad14b;  */

void FUN_1039ad118(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039ad14c; end: 1039ad15b; -[_TtC21StoryInviteSendingAPI30StoryInviteSendingServiceScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad14c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112fc0168);
  return;
}



/* Entry: 1039ad15c; end: 1039ad1d7; -[_TtC21StoryInviteSendingAPI26StoryInviteSendingServices storyInviteCreatorSCLazy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad15c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  
  func_0x000107c61174();
  uVar1 = 0x112fc01a0;
  func_0x0001000285a8(0x112fc01a0,&UNK_10dc308b0);
  pcVar2 = FUN_1039ad1d8;
  func_0x0001000cb480(FUN_1039ad1d8,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001003a5b88();
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 1039ad1d8; end: 1039ad1e3;  */

void FUN_1039ad1d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1039ad1e4; end: 1039ad27b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad1e4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc0198) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039ad27c; end: 1039ad2db; -[_TtC21StoryInviteSendingAPI26StoryInviteSendingServices init] */

void FUN_1039ad27c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoryInviteSendingAPI.StoryInviteSendingServices",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ad2a8);
  (*pcVar1)();
}



/* Entry: 1039ad2dc; end: 1039ad2eb; -[_TtC21StoryInviteSendingAPI26StoryInviteSendingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad2dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc0198));
  return;
}



/* Entry: 1039ad2ec; end: 1039ad30b;  */

void FUN_1039ad2ec(void)

{
  func_0x000107c61168(&PTR_PTR_11290d860);
  return;
}



/* Entry: 1039ad30c; end: 1039ad31b; -[SCStoryInviteCreationResult customStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad30c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fc01d0));
  return;
}



/* Entry: 1039ad31c; end: 1039ad327; -[SCStoryInviteCreationResult publicationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad31c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fc01d8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fc01d8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1039ad328; end: 1039ad333; -[SCStoryInviteCreationResult inviteId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad328(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fc01e0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fc01e0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1039ad334; end: 1039ad38b;  */

void FUN_1039ad334(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1039ad38c; end: 1039ad39b; -[SCStoryInviteCreationResult creationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039ad38c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fc01e8);
}



/* Entry: 1039ad39c; end: 1039ad4e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc01d0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fc01d8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fc01e0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fc01e8) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039ad4e4; end: 1039ad5c3; -[SCStoryInviteCreationResult initWithCustomStory:publicationId:inviteId:creationType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad4e4(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(undefined8 *)(param_1 + _DAT_112fc01d0) = param_3;
  plVar1 = (long *)(param_1 + _DAT_112fc01d8);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_112fc01e0);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112fc01e8) = param_6;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_60,puVar3);
  return;
}



/* Entry: 1039ad5c4; end: 1039ad643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad5c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc01d0) = *param_1;
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fc01d8);
  puVar1[1] = param_1[2];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fc01e0);
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112fc01e8) = param_1[5];
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039ad644; end: 1039ad647; -[SCStoryInviteCreationResult copyWithZone:] */

void FUN_1039ad644(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1039ad648; end: 1039ad663; -[SCStoryInviteCreationResult description] */

void FUN_1039ad648(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039ad664; end: 1039ad6df; -[SCStoryInviteCreationResult init] */

void FUN_1039ad664(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "StoryInviteSendingAPI/StoryInviteCreationResultWrapper.swift",0x3c,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ad6ac);
  (*pcVar1)();
}



/* Entry: 1039ad6e0; end: 1039ad72f; -[SCStoryInviteCreationResult .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039ad710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039ad714) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad6e0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fc01d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fc01d8 + 8))
  ;
  return;
}



/* Entry: 1039ad730; end: 1039ad74f;  */

void FUN_1039ad730(void)

{
  func_0x000107c61168(&PTR_PTR_11290d920);
  return;
}



/* Entry: 1039ad750; end: 1039ad75f; -[MemoriesAlbumFetchCacheManagingServices memoriesAlbumFetchCacheManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fc0220));
  return;
}



/* Entry: 1039ad760; end: 1039ad867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039ad760(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc0218) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112fc0220) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1039ad868; end: 1039ad8c7; -[MemoriesAlbumFetchCacheManagingServices init] */

void FUN_1039ad868(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesAlbumFetchCacheManagingServices.MemoriesAlbumFetchCacheManagingServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ad894);
  (*pcVar1)();
}



/* Entry: 1039ad8c8; end: 1039ad8ff; -[MemoriesAlbumFetchCacheManagingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad8c8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fc0218));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc0220));
  return;
}



/* Entry: 1039ad900; end: 1039ad91f;  */

void FUN_1039ad900(void)

{
  func_0x000107c61168(&PTR_PTR_11290da00);
  return;
}



/* Entry: 1039ad920; end: 1039ad92b; -[SCMemoriesCameraRollAlbumPickerCellViewModel title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad920(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fc0250);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fc0250))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1039ad92c; end: 1039ad937; -[SCMemoriesCameraRollAlbumPickerCellViewModel subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad92c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fc0258);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fc0258))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1039ad938; end: 1039ad97f;  */

void FUN_1039ad938(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1039ad980; end: 1039ad98f; -[SCMemoriesCameraRollAlbumPickerCellViewModel coverAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fc0260));
  return;
}



/* Entry: 1039ad990; end: 1039ad9d3; -[SCMemoriesCameraRollAlbumPickerCellViewModel isSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1039ad990(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc0268;
  func_0x000107c61428(param_1 + _DAT_112fc0268,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1039ad9d4; end: 1039ada23; -[SCMemoriesCameraRollAlbumPickerCellViewModel setIsSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ad9d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc0268;
  func_0x000107c61428(param_1 + _DAT_112fc0268,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1039ada24; end: 1039ada33; -[SCMemoriesCameraRollAlbumPickerCellViewModel subtype] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039ada24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fc0270);
}



/* Entry: 1039ada34; end: 1039adae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ada34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fc0250);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fc0258);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fc0260) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112fc0268) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fc0270) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039adae8; end: 1039adbbb; -[SCMemoriesCameraRollAlbumPickerCellViewModel initWithTitle:subtitle:coverAsset:isSelected:subtype:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039adae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar4 = param_2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fc0250);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fc0258);
  *puVar1 = param_4;
  puVar1[1] = uVar4;
  *(undefined8 *)(param_1 + _DAT_112fc0260) = param_5;
  *(undefined1 *)(param_1 + _DAT_112fc0268) = param_6;
  *(undefined8 *)(param_1 + _DAT_112fc0270) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_60,puVar2);
  return;
}



/* Entry: 1039adbbc; end: 1039adbef;  */

void FUN_1039adbbc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039adbf0; end: 1039adc3f; -[SCMemoriesCameraRollAlbumPickerCellViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039adbf0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fc0250 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fc0258 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc0260));
  return;
}



/* Entry: 1039adc40; end: 1039adcaf;  */

void FUN_1039adc40(void)

{
  func_0x000107c61168(&PTR_PTR_11290dac8);
  return;
}



/* Entry: 1039adcb0; end: 1039add37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039adcb0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100a9d338();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fc02a8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fc02b0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039add38);
  (*pcVar1)();
}



/* Entry: 1039add38; end: 1039add97; -[_TtC35CmActiveUserSessionScopeGraphBridge50CmActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_1039add38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CmActiveUserSessionScopeGraphBridge.CmActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039add64);
  (*pcVar1)();
}



/* Entry: 1039add98; end: 1039addcf; -[_TtC35CmActiveUserSessionScopeGraphBridge50CmActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039addb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039addb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039add98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc02a8));
  return;
}



/* Entry: 1039addd0; end: 1039addf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039addd0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fc02b0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fc02a8));
  return;
}



/* Entry: 1039addf8; end: 1039ade93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039addf8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fc0328);
  *(undefined8 *)(unaff_x20 + _DAT_112fc02e0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fc02e8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1039ade94; end: 1039adef3; -[_TtC35CmActiveUserSessionScopeGraphBridge37SCNetworkImageServicesSaberEntryPoint init] */

void FUN_1039ade94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CmActiveUserSessionScopeGraphBridge.SCNetworkImageServicesSaberEntryPoint",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039adec0);
  (*pcVar1)();
}



/* Entry: 1039adef4; end: 1039adf87; -[_TtC35CmActiveUserSessionScopeGraphBridge37SCNetworkImageServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039adef4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fc02e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc02e8));
  return;
}



/* Entry: 1039adf88; end: 1039adf8f;  */

undefined8 FUN_1039adf88(void)

{
  return 0;
}



/* Entry: 1039adf90; end: 1039adfdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039adf90(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc0328) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039adfdc; end: 1039ae03b; -[_TtC35CmActiveUserSessionScopeGraphBridge43CmActiveUserSessionScopeGraphBridgeServices init] */

void FUN_1039adfdc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CmActiveUserSessionScopeGraphBridge.CmActiveUserSessionScopeGraphBridgeServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ae008);
  (*pcVar1)();
}



/* Entry: 1039ae03c; end: 1039ae04b; -[_TtC35CmActiveUserSessionScopeGraphBridge43CmActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ae03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc0328));
  return;
}



/* Entry: 1039ae04c; end: 1039ae0a7;  */

void FUN_1039ae04c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112fc0318,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112fc0318,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1039ae0a8; end: 1039ae0df;  */

undefined1  [16] FUN_1039ae0a8(void)

{
  return ZEXT816(0x1106b7d68);
}



/* Entry: 1039ae0e0; end: 1039ae123; -[SCCmActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_1039ae0e0(undefined8 param_1)

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



/* Entry: 1039ae124; end: 1039ae157;  */

void FUN_1039ae124(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039ae158; end: 1039ae19f; -[SCCmActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039ae184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039ae188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ae158(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc0380);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc0388));
  return;
}



/* Entry: 1039ae1a0; end: 1039ae1bf;  */

void FUN_1039ae1a0(void)

{
  func_0x000107c61168(&PTR_PTR_11290ddf8);
  return;
}



/* Entry: 1039ae1c0; end: 1039ae203; -[SCSCNetworkImageServicesSaberEntryPoint end] */

void FUN_1039ae1c0(undefined8 param_1)

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



/* Entry: 1039ae204; end: 1039ae237;  */

void FUN_1039ae204(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039ae238; end: 1039ae28f; -[SCSCNetworkImageServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039ae274: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039ae278) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ae238(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc03c0);
  func_0x000107c61610(param_1 + _DAT_112fc03c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc03d0));
  return;
}



/* Entry: 1039ae290; end: 1039ae2af;  */

void FUN_1039ae290(void)

{
  func_0x000107c61168(&PTR_PTR_11290dec0);
  return;
}



/* Entry: 1039ae2b0; end: 1039ae337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039ae2b0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100a9d980();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fc0408) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fc0410) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ae338);
  (*pcVar1)();
}



/* Entry: 1039ae338; end: 1039ae397; -[_TtC36CogActiveUserSessionScopeGraphBridge51CogActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_1039ae338(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CogActiveUserSessionScopeGraphBridge.CogActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ae364);
  (*pcVar1)();
}



/* Entry: 1039ae398; end: 1039ae3cf; -[_TtC36CogActiveUserSessionScopeGraphBridge51CogActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039ae3b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039ae3b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ae398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc0408));
  return;
}



/* Entry: 1039ae3d0; end: 1039ae3f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ae3d0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fc0410),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fc0408));
  return;
}



/* Entry: 1039ae3f8; end: 1039ae45b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039ae3f8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc06c0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039ae45c; end: 1039ae463;  */

void FUN_1039ae45c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039ae464; end: 1039ae503;  */

void FUN_1039ae464(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039ae504; end: 1039ae523;  */

void FUN_1039ae504(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039ae524; end: 1039ae587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039ae524(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc06c8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039ae588; end: 1039ae58f;  */

void FUN_1039ae588(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



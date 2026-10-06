/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c84df8; end: 101c84f6f;  */

void FUN_101c84df8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = 0;
  func_0x000100029930(0);
  func_0x000100579dc0();
  if (param_1 < 2) {
    if (param_1 == 0) {
      uVar4 = 0xe500000000000000;
      uVar5 = 0x6568636163;
      goto LAB_101c84ebc;
    }
    if (param_1 == 1) {
      uVar4 = 0xe600000000000000;
      uVar5 = 0x657075646564;
      goto LAB_101c84ebc;
    }
  }
  else {
    if (param_1 == 2) {
      uVar4 = 0xe700000000000000;
      uVar5 = 0x74736575716572;
      goto LAB_101c84ebc;
    }
    if (param_1 == 3) {
      uVar4 = 0xe700000000000000;
      uVar5 = 0x646570706f7264;
      goto LAB_101c84ebc;
    }
  }
  uVar4 = 0xe700000000000000;
  uVar5 = 0x6e776f6e6b6e75;
LAB_101c84ebc:
  func_0x000107c602fc(0x19);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000104840e10(uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(param_2);
  func_0x000107c5fb78(0x2f,0xe100000000000000);
  func_0x000107c5fb78(uVar5,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x0001048d82a4(uVar1,0xd000000000000014,0x800000010f007b50);
  func_0x000107c6142c(0x800000010f007b50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101c84f70; end: 101c84fb3;  */

void FUN_101c84f70(long param_1,long param_2)

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



/* Entry: 101c84fb4; end: 101c84ffb; -[AdEOVTimerProviderSwift playlistItemController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c84fb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e0fdf0;
  func_0x000107c61428(param_1 + _DAT_112e0fdf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101c84ffc; end: 101c85053; -[AdEOVTimerProviderSwift setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c84ffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e0fdf0;
  func_0x000107c61428(param_1 + _DAT_112e0fdf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101c85054; end: 101c85093;  */

undefined8 FUN_101c85054(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_101c8548c(param_1);
  func_0x000107c615e8(param_1);
  return uVar1;
}



/* Entry: 101c85094; end: 101c850d3; -[AdEOVTimerProviderSwift initWithEnvironment:] */

undefined8 FUN_101c85094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  FUN_101c8548c(param_3);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 101c850d4; end: 101c850df; -[AdEOVTimerProviderSwift fourthTabTotalTimeSpentMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101c850d4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112e0fdf8);
  func_0x000107c61174(param_2);
  func_0x000107c3cf50(uVar2);
  func_0x000107c51b38(puVar1);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101c850e0; end: 101c850eb; -[AdEOVTimerProviderSwift fourthTabSessionTimeSpentMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101c850e0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112e0fe00);
  func_0x000107c61174(param_2);
  func_0x000107c3cf50(uVar2);
  func_0x000107c51b38(puVar1);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101c850ec; end: 101c850f7; -[AdEOVTimerProviderSwift fourthTabFriendStoriesTotalTimeSpentMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101c850ec(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112e0fe08);
  func_0x000107c61174(param_2);
  func_0x000107c3cf50(uVar2);
  func_0x000107c51b38(puVar1);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101c850f8; end: 101c85103; -[AdEOVTimerProviderSwift fourthTabFriendStoriesSessionTimeSpentMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101c850f8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112e0fe10);
  func_0x000107c61174(param_2);
  func_0x000107c3cf50(uVar2);
  func_0x000107c51b38(puVar1);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101c85104; end: 101c8510f; -[AdEOVTimerProviderSwift fourthTabNonFriendStoriesTotalTimeSpentMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101c85104(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112e0fe18);
  func_0x000107c61174(param_2);
  func_0x000107c3cf50(uVar2);
  func_0x000107c51b38(puVar1);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101c85110; end: 101c8511b; -[AdEOVTimerProviderSwift fourthTabNonFriendStoriesSessionTimeSpentMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101c85110(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112e0fe20);
  func_0x000107c61174(param_2);
  func_0x000107c3cf50(uVar2);
  func_0x000107c51b38(puVar1);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101c8511c; end: 101c8518f;  */

undefined8 FUN_101c8511c(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  uVar2 = *(undefined8 *)(param_2 + *param_4);
  func_0x000107c61174(param_2);
  func_0x000107c3cf50(uVar2);
  func_0x000107c51b38(puVar1);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101c85190; end: 101c85257; -[AdEOVTimerProviderSwift didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Possible PIC construction at 0x000101c85224: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c85228) */

void FUN_101c85190(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  uVar2 = 0;
  if (param_4 != 0) {
    func_0x000107c5faec(param_4);
    uVar2 = param_2;
  }
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  func_0x000107c61174(param_1);
  FUN_101c855a4(param_3,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101c85258; end: 101c852df; -[AdEOVTimerProviderSwift registeredEventsForOperaSession] */

void FUN_101c85258(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000103bb9c00();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb9c70();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 101c852e0; end: 101c85393; -[AdEOVTimerProviderSwift operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000101c85378: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c8537c) */

void FUN_101c852e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000101c856d8(param_3,param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c85394; end: 101c853f3; -[AdEOVTimerProviderSwift init] */

void FUN_101c85394(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdEOVTimerImplementationSwift.AdEOVTimerProviderSwift",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c853c0);
  (*pcVar1)();
}



/* Entry: 101c853f4; end: 101c8548b; -[AdEOVTimerProviderSwift .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c85420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c85440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c85460: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c85444) */
/* WARNING: Removing unreachable block (ram,0x000101c85424) */
/* WARNING: Removing unreachable block (ram,0x000101c85464) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c853f4(long param_1)

{
  FUN_101c858d8(param_1 + _DAT_112e0fdf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e0fe28));
  return;
}



/* Entry: 101c8548c; end: 101c855a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c8548c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e0fdf0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e0fe28) = param_1;
  uVar1 = param_1;
  func_0x000107c615f0();
  func_0x000107c4c20c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112e0fdf8) = uVar1;
  uVar1 = param_1;
  func_0x000107c4c20c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112e0fe00) = uVar1;
  uVar1 = param_1;
  func_0x000107c4c20c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112e0fe08) = uVar1;
  uVar1 = param_1;
  func_0x000107c4c20c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112e0fe10) = uVar1;
  uVar1 = param_1;
  func_0x000107c4c20c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112e0fe18) = uVar1;
  func_0x000107c4c20c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112e0fe20) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c855a4; end: 101c858d7;  */

/* WARNING: Possible PIC construction at 0x000101c85690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c85628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c85694) */
/* WARNING: Removing unreachable block (ram,0x000101c8562c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c855a4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112e0fe28);
  if (param_2 == 0) {
    uVar1 = uVar2;
    func_0x000107c49c74(uVar2,0,0);
    param_1 = 0;
    if ((uVar1 & 1) != 0) goto LAB_101c8561c;
  }
  else {
    uVar3 = param_1;
    func_0x000107c5fadc();
    uVar1 = uVar2;
    func_0x000107c49c74();
    func_0x000107c61170(uVar3);
    if ((int)uVar1 != 0) {
LAB_101c8561c:
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(unaff_x20 + _DAT_112e0fdf8),PTR_s_start_112671080);
      return;
    }
    func_0x000107c5fadc(param_1,param_2);
  }
  func_0x000107c49c78();
  func_0x000107c61170(param_1);
  if ((int)uVar2 != 0) {
    func_0x000107c4e454(*(undefined8 *)(unaff_x20 + _DAT_112e0fdf8));
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e0fe00);
    func_0x000107c4e454(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_reset_11262ba18);
    return;
  }
  return;
}



/* Entry: 101c858d8; end: 101c858fb;  */

undefined8 FUN_101c858d8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101c858fc; end: 101c8591b;  */

void FUN_101c858fc(void)

{
  func_0x000107c61168(&PTR_PTR_1127fef78);
  return;
}



/* Entry: 101c8591c; end: 101c8597b; -[_TtC39SCThirdPartyLoginServicesImplementation36ThirdPartyLoginServiceImplementation init] */

void FUN_101c8591c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCThirdPartyLoginServicesImplementation.ThirdPartyLoginServiceImplementation"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c85948);
  (*pcVar1)();
}



/* Entry: 101c8597c; end: 101c859e3; -[_TtC39SCThirdPartyLoginServicesImplementation36ThirdPartyLoginServiceImplementation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c8597c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e0fe58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e0fe60));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e0fe68));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e0fe70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e0fe78));
  return;
}



/* Entry: 101c859e4; end: 101c85a03;  */

void FUN_101c859e4(void)

{
  func_0x000107c61168(&PTR_PTR_1127ff070);
  return;
}



/* Entry: 101c85a04; end: 101c85c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c85a04(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 *puVar7;
  undefined8 auStack_58 [3];
  
  lVar2 = _DAT_112e0fe78;
  if ((int)param_1 == 0) {
    func_0x00010399ca34();
    uVar3 = *param_1;
    uVar6 = param_1[1];
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c61434(uVar6);
    func_0x000107c5fadc(uVar3,uVar6);
    func_0x000107c6142c(uVar6);
  }
  else {
    puVar5 = auStack_58;
    func_0x000107c61428(unaff_x20 + _DAT_112e0fe78,puVar5,0x20,0);
    puVar7 = *(undefined8 **)(unaff_x20 + lVar2);
    if (puVar7[2] != 0) {
      func_0x000107c61434(puVar7);
      FUN_101c86b58();
      if (((ulong)puVar5 & 1) != 0) {
        uVar3 = *(undefined8 *)(puVar7[7] + (long)param_1 * 8);
        func_0x000107c61174(uVar3);
        func_0x000107c614a8(auStack_58);
        func_0x000107c6142c();
        FUN_101c884d0();
        if (puVar5 != (undefined8 *)0x0) {
          FUN_101c88a4c();
          func_0x000107c61170(uVar3);
          func_0x000107c6142c(puVar5);
          return;
        }
        func_0x00010399ca34();
        uVar6 = *puVar7;
        uVar1 = puVar7[1];
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
        func_0x000107c61434(uVar1);
        func_0x000107c5fadc(uVar6,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x000107c466bc(puVar4);
        func_0x000107c61170(uVar6);
        func_0x000107c61654();
        func_0x000107c61170(uVar3);
        return;
      }
      func_0x000107c6142c(puVar7);
    }
    puVar5 = auStack_58;
    func_0x000107c614a8();
    func_0x00010399ca34();
    uVar3 = *puVar5;
    uVar6 = puVar5[1];
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c61434(uVar6);
    func_0x000107c5fadc(uVar3,uVar6);
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c466bc(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61654();
  return;
}



/* Entry: 101c85c10; end: 101c85c9f; -[_TtC39SCThirdPartyLoginServicesImplementation36ThirdPartyLoginServiceImplementation initializeLoginDataFor:authType:error:] */

/* WARNING: Removing unreachable block (ram,0x000101c85c58) */
/* WARNING: Removing unreachable block (ram,0x000101c85c80) */
/* WARNING: Removing unreachable block (ram,0x000101c85c60) */

undefined8
FUN_101c85c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_101c85a04(param_3,param_4);
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 101c85ca0; end: 101c860a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c85ca0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  puVar3 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112e0fe58) + _DAT_112e0ffa0);
  func_0x000107c61428(puVar3,auStack_58,0,0);
  lVar5 = puVar3[1];
  if (lVar5 == 0) {
    puVar3 = (undefined8 *)0x0;
    func_0x00010399df04();
    func_0x00010399ca34();
    uVar6 = *puVar3;
    uVar1 = puVar3[1];
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c466bc();
    func_0x000107c61170(uVar6);
    puVar7 = puVar4;
    func_0x00010399daa0();
    func_0x000107c61170(puVar4);
    puStack_88 = puVar7;
    func_0x0001002a64a8(&puStack_88);
  }
  else {
    uVar6 = *puVar3;
    puVar7 = *(undefined **)(unaff_x20 + _DAT_112e0fe60);
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(uVar6,lVar5);
    func_0x000107c6142c(lVar5);
    func_0x000107c40a78(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar6);
    puVar4 = &UNK_110462fb0;
    func_0x000107c613fc(&UNK_110462fb0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uStack_68 = 0x101c86a18;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    uStack_78 = 0x101c871e8;
    puStack_70 = &UNK_110462fc8;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_60);
    func_0x000107c5dc64(puVar7);
    func_0x000107c60bd0(ppuVar2);
  }
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 101c860a8; end: 101c861af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c860a8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  if (param_2 == 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_3 + _DAT_112e0fe68);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_3);
    func_0x00010399df04(0);
    func_0x00010399db8c();
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_3 + _DAT_112e0fe68);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_3);
    func_0x00010399df04(0);
    func_0x00010399daa0();
    param_4 = param_2;
  }
  lStack_50 = param_4;
  func_0x0001002a64a8(&lStack_50);
  func_0x000107c61170(param_4);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 101c861b0; end: 101c86227;  */

/* WARNING: Possible PIC construction at 0x000101c8620c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c86210) */

void FUN_101c861b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101c86228; end: 101c86283; -[_TtC39SCThirdPartyLoginServicesImplementation36ThirdPartyLoginServiceImplementation createLoginDataWithAuthToken:] */

void FUN_101c86228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101c85ca0(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c86284; end: 101c8645b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_101c86284(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  if ((int)param_1 == 0) {
    puVar3 = (undefined8 *)PTR_PTR_1126ae558;
    func_0x000107c61168();
    puVar4 = puVar3;
    func_0x00010399ca34();
    uVar5 = *puVar4;
    uVar7 = puVar4[1];
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c61434(uVar7);
    func_0x000107c5fadc(uVar5,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x000107c466bc(puVar4);
    func_0x000107c61170(uVar5);
    puVar6 = puVar4;
    func_0x000107c5ed2c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c451ac(puVar3);
    func_0x000107c61180();
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e0fe58);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e0fe60);
    puVar6 = (undefined8 *)PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar5 = param_1;
    func_0x000101c87c34(param_1);
    puVar1 = &UNK_110462f10;
    func_0x000107c613fc(&UNK_110462f10,0x30,7);
    *(undefined8 **)(puVar1 + 0x10) = puVar6;
    *(undefined8 *)(puVar1 + 0x18) = uVar7;
    *(undefined8 *)(puVar1 + 0x20) = param_1;
    *(undefined8 *)(puVar1 + 0x28) = uVar8;
    pcStack_50 = FUN_101c869e8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x101c871e8;
    puStack_58 = &UNK_110462f28;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c61174(puVar6);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar8);
    func_0x000107c61574(puVar1);
    func_0x000107c5dc64(uVar5);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(uVar5);
    puVar3 = puVar6;
    func_0x000107c43bf4(puVar6);
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar6);
  return puVar3;
}



/* Entry: 101c8645c; end: 101c865ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c8645c(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = _DAT_11380c058;
  lVar7 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((param_2 == 0) && (param_1 != 0)) {
    lVar3 = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c5eea0(lVar7);
    uVar4 = param_1 + lVar1;
    func_0x000107c5ee74(uVar4,lVar7);
    (**(code **)(lVar8 + 8))(lVar7,lVar2);
    if ((uVar4 & 1) != 0) {
      func_0x000107c3fefc(param_3);
      param_4 = lVar3;
      goto LAB_101c865d8;
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c44110(param_4);
  func_0x000107c61180();
  puVar5 = &UNK_110462f60;
  func_0x000107c613fc(&UNK_110462f60,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = param_6;
  uStack_70 = 0x101c86a10;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x101c871e8;
  puStack_78 = &UNK_110462f78;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar5 = puStack_68;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61574(puVar5);
  func_0x000107c5dc64(param_4);
  func_0x000107c60bd0(ppuVar6);
LAB_101c865d8:
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 101c86600; end: 101c8669f;  */

void FUN_101c86600(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    lVar1 = param_2;
    func_0x000107c5ed2c(param_2);
    func_0x000107c3fef8(param_3);
    func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c61174(param_1);
    lVar2 = lVar1;
    FUN_101c876c8();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_completeWithValue__1125ae900,param_1);
  return;
}



/* Entry: 101c866a0; end: 101c866db; -[_TtC39SCThirdPartyLoginServicesImplementation36ThirdPartyLoginServiceImplementation fetchLoginDataFor:] */

void FUN_101c866a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101c86284(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101c866dc; end: 101c867e7;  */

/* WARNING: Possible PIC construction at 0x000101c867c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c867c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c866dc(int param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  if (param_1 == 0) {
    puVar2 = (undefined8 *)PTR_PTR_1126ae558;
    func_0x000107c61168();
    puVar3 = puVar2;
    func_0x00010399ca34();
    uVar5 = *puVar3;
    uVar1 = puVar3[1];
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar5,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c466bc(puVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c5ed2c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c451ac(puVar2);
  }
  else {
    func_0x000101c88030(*(undefined8 *)(unaff_x20 + _DAT_112e0fe58));
    func_0x000107c61170();
    func_0x000107c41708(*(undefined8 *)(unaff_x20 + _DAT_112e0fe60));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101c867e8; end: 101c86823; -[_TtC39SCThirdPartyLoginServicesImplementation36ThirdPartyLoginServiceImplementation deleteLoginDataFor:] */

void FUN_101c867e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101c866dc(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101c86824; end: 101c86863; -[_TtC39SCThirdPartyLoginServicesImplementation36ThirdPartyLoginServiceImplementation loginDataObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c86824(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c86864; end: 101c869b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c86864(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_58;
  
  puVar2 = param_1;
  func_0x00010399ca34();
  uVar4 = *puVar2;
  uVar1 = puVar2[1];
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8();
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c466bc();
  func_0x000107c61170(uVar4);
  if (((int)param_1 == 0x3f1) || (puVar5 = puVar3, (int)param_1 == 0x3f2)) {
    uVar4 = *puVar2;
    uVar1 = puVar2[1];
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8();
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c466bc();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
  }
  func_0x00010399df04(0);
  puVar3 = puVar5;
  func_0x00010399daa0();
  puStack_58 = puVar3;
  func_0x0001002a64a8(&puStack_58);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 101c869b8; end: 101c869e7; -[_TtC39SCThirdPartyLoginServicesImplementation36ThirdPartyLoginServiceImplementation failedToGetAuthCodeWithErrorCode:] */

void FUN_101c869b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101c86864(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c869e8; end: 101c86a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c869e8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar3 = _DAT_11380c058;
  lVar10 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((param_2 == 0) && (param_1 != 0)) {
    lVar5 = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c5eea0(lVar10);
    uVar6 = param_1 + lVar3;
    func_0x000107c5ee74(uVar6,lVar10);
    (**(code **)(lVar11 + 8))(lVar10,lVar4);
    if ((uVar6 & 1) != 0) {
      func_0x000107c3fefc(uVar1);
      lVar7 = lVar5;
      goto LAB_101c865d8;
    }
    func_0x000107c61170(lVar5);
  }
  func_0x000107c44110(lVar7);
  func_0x000107c61180();
  puVar8 = &UNK_110462f60;
  func_0x000107c613fc(&UNK_110462f60,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar1;
  *(undefined8 *)(puVar8 + 0x18) = uVar2;
  uStack_70 = 0x101c86a10;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x101c871e8;
  puStack_78 = &UNK_110462f78;
  ppuVar9 = &puStack_90;
  puStack_68 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar8 = puStack_68;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61574(puVar8);
  func_0x000107c5dc64(lVar7);
  func_0x000107c60bd0(ppuVar9);
LAB_101c865d8:
  func_0x000107c61170(lVar7);
  return;
}



/* Entry: 101c86a28; end: 101c86b57;  */

void FUN_101c86a28(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_101c86b58();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c86aec);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_101c86d70(lVar5);
    uVar2 = param_2;
    FUN_101c86b58();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_1106b67a0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c86ab8);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_101c86c14();
    lVar5 = *unaff_x20;
    goto joined_r0x000101c86b00;
  }
  lVar5 = *unaff_x20;
joined_r0x000101c86b00:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c86b58);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 101c86b58; end: 101c86baf;  */

void FUN_101c86b58(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((int)*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == (int)param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 101c86bb0; end: 101c86c13;  */

void FUN_101c86bb0(int param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((int)*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 101c86c14; end: 101c86d6f;  */

void FUN_101c86c14(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112e0feb0,&UNK_10d9eb150);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_101c86cf0;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_101c86cf0:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101c86d70);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_101c86d48;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_101c86d48:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101c86d70; end: 101c86ff3;  */

void FUN_101c86d70(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar14 = 0x112e0feb0;
  func_0x0001000285a8(0x112e0feb0,&UNK_10d9eb150);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar14);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_101c86fc0:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101c86ff0);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_101c86fc0;
        }
        uVar12 = puVar13[lVar16];
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar16 << 6;
    uVar15 = *(ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar14);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar9 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar9 >> 6;
    uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar10 >> 6;
      do {
        uVar9 = uVar7 + 1;
        if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101c86ff4);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar9 != uVar5) {
          uVar7 = uVar9;
        }
        bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        uVar9 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar7);
    *(ulong *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = uVar15;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar16;
  } while( true );
}



/* Entry: 101c86ff4; end: 101c871cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c86ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  func_0x000107c614f0();
  lVar1 = _DAT_112e0fe68;
  uVar3 = 0x112e0fea8;
  func_0x0001000285a8(0x112e0fea8,&UNK_10d9eb148);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112e0fe70;
  puVar2 = &UNK_10d9eb120;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e0fe78;
  *(undefined **)(unaff_x20 + _DAT_112e0fe78) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  FUN_101c88544(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_4);
  uVar3 = param_3;
  FUN_101c87574(param_3,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112e0fe58) = uVar3;
  puVar2 = PTR_PTR_1126a8de8;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c6142c(param_4);
  func_0x000107c46abc();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + _DAT_112e0fe60) = puVar2;
  FUN_101c895e4(0);
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000101c88908();
  func_0x000107c61428(unaff_x20 + lVar1,auStack_68,0x21,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61558(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  FUN_101c86a28(param_2,1,uVar3);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
  func_0x000107c614a8(auStack_68);
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c871cc; end: 101c871eb;  */

void FUN_101c871cc(long param_1,long param_2)

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



/* Entry: 101c871ec; end: 101c8722f;  */

void FUN_101c871ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 101c87230; end: 101c8723f;  */

void FUN_101c87230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 101c87240; end: 101c8740b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_101c87240(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c44580();
  func_0x000107c61180();
  lVar3 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar6 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    puVar5 = &UNK_110463050;
    func_0x000107c613fc(&UNK_110463050,0x30,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar2;
    *(long *)(puVar5 + 0x18) = lVar3;
    *(undefined8 *)(puVar5 + 0x20) = uVar6;
    *(undefined8 *)(puVar5 + 0x28) = param_2;
    func_0x0001000285a8(0x112e0feb8,&UNK_10d9eb160);
    func_0x000107c613fc();
    func_0x000107c61174(uVar2);
    func_0x000107c615f0(lVar3);
    pcVar1 = FUN_101c8740c;
    func_0x0001000bdd8c(FUN_101c8740c,puVar5);
    uVar6 = 0;
    func_0x0001002b572c(0);
    func_0x000107c610f8();
    func_0x00010399c930(pcVar1,uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(lVar3);
    return pcVar1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c87374);
  (*pcVar1)();
}



/* Entry: 101c8740c; end: 101c87417;  */

void FUN_101c8740c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_101c859e4(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar3);
  func_0x000107c61174();
  func_0x000107c615f0(uVar2);
  uVar5 = uVar4;
  FUN_101c86ff4(uVar4,uVar2,uVar1,uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar5;
  return;
}



/* Entry: 101c87418; end: 101c8743b;  */

/* WARNING: Possible PIC construction at 0x000101c87424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c87428) */

void FUN_101c87418(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101c8743c; end: 101c8748f;  */

void FUN_101c8743c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c87490; end: 101c8750f;  */

void FUN_101c87490(undefined8 param_1)

{
  if (lRam0000000112e0fee8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e67f024);
  return;
}



/* Entry: 101c87510; end: 101c87533;  */

void FUN_101c87510(undefined8 *param_1,undefined8 param_2)

{
  FUN_101c87240();
  *param_1 = param_2;
  return;
}



/* Entry: 101c87534; end: 101c87573;  */

void FUN_101c87534(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_101c87574(param_1,param_2);
  return;
}



/* Entry: 101c87574; end: 101c876c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c87574(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar2 = _DAT_112e0ffa8;
  (**(code **)(lVar6 + 0x68))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3
            );
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar5 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f007c50);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e0ffa0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e0ffb0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c876c8; end: 101c87c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_101c876c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar2 = _DAT_11380c058;
  lVar13 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (*(int *)(param_1 + _DAT_112fbd5b0) == 0) {
    puVar7 = (undefined8 *)PTR_PTR_1126ae558;
    func_0x000107c61168();
    puVar8 = puVar7;
    func_0x00010399ca34();
    uVar10 = *puVar8;
    uVar1 = puVar8[1];
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar10,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c466bc(puVar9);
    func_0x000107c61170(uVar10);
    puVar11 = puVar9;
    func_0x000107c5ed2c(puVar9);
    func_0x000107c61170(puVar9);
    func_0x000107c451ac(puVar7);
  }
  else {
    func_0x000107c5eea0(lVar13);
    uVar5 = param_1 + lVar2;
    func_0x000107c5ee74(uVar5,lVar13);
    (**(code **)(lVar14 + 8))(lVar13,lVar4);
    if ((uVar5 & 1) != 0) {
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e0ffb0);
      uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e0ffb0))[1];
      puVar7 = (undefined8 *)PTR_PTR_1126ae560;
      func_0x000107c610f8();
      func_0x000107c61434(uVar1);
      func_0x000107c453e4();
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112e0ffa8);
      puVar9 = &UNK_110463110;
      func_0x000107c613fc(&UNK_110463110,0x38,7);
      *(long *)(puVar9 + 0x10) = param_1;
      *(undefined8 *)(puVar9 + 0x18) = uVar10;
      *(undefined8 *)(puVar9 + 0x20) = uVar1;
      *(undefined8 **)(puVar9 + 0x28) = puVar7;
      *(long *)(puVar9 + 0x30) = lVar3;
      pcStack_60 = FUN_101c87c0c;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_110463128;
      ppuVar6 = &puStack_80;
      puStack_58 = puVar9;
      func_0x000107c60bc4(ppuVar6);
      puVar9 = puStack_58;
      func_0x000107c61174(param_1);
      func_0x000107c61174(puVar7);
      func_0x000107c61574(puVar9);
      func_0x000107c4e524(uVar12);
      func_0x000107c60bd0(ppuVar6);
      puVar8 = puVar7;
      func_0x000107c43bf4(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      return puVar8;
    }
    puVar7 = (undefined8 *)PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNull_1126aef28);
    func_0x000107c453e4();
    func_0x000107c451b0(puVar7);
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  return puVar7;
}



/* Entry: 101c87c0c; end: 101c87c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c87c0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar5 = (undefined *)unaff_x20[2];
    puVar4 = (undefined8 *)unaff_x20[3];
    uVar6 = unaff_x20[4];
    uVar2 = unaff_x20[5];
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x25 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    unaff_x20 = puVar4;
    func_0x000107c61168();
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    func_0x000107c3e100();
    func_0x000107c61180();
    puVar3 = *(undefined8 **)((long)register0x00000008 + -0x60);
    func_0x000107c61174();
    if (unaff_x25 == (undefined *)0x0) {
      unaff_x20 = puVar3;
      func_0x000107c5ed30();
      func_0x000107c61170();
      func_0x000107c61654();
      func_0x00010399ca34();
      uVar6 = *puVar3;
      uVar1 = puVar3[1];
      unaff_x23 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8();
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar6,uVar1);
      func_0x000107c6142c(uVar1);
      unaff_x22 = unaff_x23;
      func_0x000107c466bc();
      func_0x000107c61170(uVar6);
      unaff_x21 = unaff_x22;
      func_0x000107c5ed2c();
      func_0x000107c61170(unaff_x22);
      func_0x000107c3fef8(uVar2);
      func_0x000107c61170(unaff_x21);
      func_0x000107c614ac(unaff_x20);
    }
    else {
      unaff_x21 = unaff_x25;
      func_0x000107c5ee30();
      func_0x000107c61170(unaff_x25);
      FUN_101c88564(puVar4,uVar6,*(undefined8 *)(puVar5 + _DAT_112fbd5b0));
      puVar5 = PTR_PTR_1126aef90;
      func_0x000107c61168();
      unaff_x25 = unaff_x21;
      func_0x000107c5ee20(unaff_x21,unaff_x20);
      func_0x000107c5fadc(puVar4,uVar6);
      func_0x000107c6142c(uVar6);
      unaff_x23 = puVar5;
      func_0x000107c53df4();
      func_0x000107c61170(unaff_x25);
      func_0x000107c61170();
      if ((int)unaff_x23 == 0) {
        func_0x00010399ca34();
        uVar6 = *puVar4;
        uVar1 = puVar4[1];
        puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c610f8();
        func_0x000107c61434(uVar1);
        func_0x000107c5fadc(uVar6,uVar1);
        func_0x000107c6142c(uVar1);
        unaff_x23 = puVar5;
        func_0x000107c466bc();
        func_0x000107c61170(uVar6);
        unaff_x22 = unaff_x23;
        func_0x000107c5ed2c();
        func_0x000107c61170(unaff_x23);
        func_0x000107c3fef8(uVar2);
      }
      else {
        unaff_x22 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c3fefc(uVar2);
      }
      func_0x00010006c090(unaff_x21,unaff_x20);
      func_0x000107c61170(unaff_x22);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
    break;
    unaff_x30 = FUN_101c87c0c;
    func_0x000107c60e78();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    unaff_x19 = uVar2;
    unaff_x24 = puVar5;
  }
  return;
}



/* Entry: 101c87c50; end: 101c88023;  */

/* WARNING: Possible PIC construction at 0x000101c87f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c87fe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c87f80) */
/* WARNING: Removing unreachable block (ram,0x000101c87fe8) */
/* WARNING: Removing unreachable block (ram,0x000101c88000) */
/* WARNING: Removing unreachable block (ram,0x000101c87d70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c87c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_101c88564(param_1,param_2,param_3);
  puVar2 = PTR_PTR_1126aef90;
  func_0x000107c61168();
  uVar5 = param_1;
  uVar8 = param_2;
  func_0x000107c5fadc(param_1,param_2);
  puVar3 = puVar2;
  func_0x000107c41238();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c6142c(param_2);
    lVar9 = 0;
  }
  else {
    puVar4 = puVar3;
    uStack_c0 = param_4;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
    func_0x000107c610f8(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
    func_0x00010006c00c(puVar4,uVar8);
    puVar3 = puVar4;
    func_0x00010130c4a4(puVar4,uVar8);
    func_0x00010006c090(puVar4,uVar8);
    func_0x000107c57e2c(puVar3);
    func_0x000107c41478();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x000107c60234(&uStack_b0);
      func_0x000107c615e8(puVar3);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_90);
    }
    else {
      uVar5 = 0;
      func_0x00010399ec04(0);
      plVar6 = &lStack_b8;
      func_0x000107c6147c(plVar6,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar5,6);
      if (((ulong)plVar6 & 1) != 0) {
        lStack_d0 = lStack_b8;
        uStack_c8 = _DAT_11380c058;
        lVar9 = lStack_b8;
        func_0x000107c61174();
        func_0x000107c5eea0(lVar11);
        lVar7 = lStack_d0 + uStack_c8;
        func_0x000107c5ee74(lVar7,lVar11);
        uStack_c8 = CONCAT44(uStack_c8._4_4_,(int)lVar7);
        (**(code **)(lVar10 + 8))(lVar11,lVar1);
        func_0x000107c61170(lVar9);
        if ((uStack_c8 & 1) != 0) {
          func_0x000107c6142c(param_2);
          func_0x000107c61174(lVar9);
          param_4 = uStack_c0;
          goto code_r0x000107c3fefc;
        }
      }
    }
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c4fee0(puVar2);
    func_0x000107c61170(param_1);
    lVar9 = 0;
    param_4 = uStack_c0;
  }
code_r0x000107c3fefc:
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_completeWithValue__1125ae900,lVar9);
  return;
}



/* Entry: 101c88024; end: 101c8804b;  */

/* WARNING: Possible PIC construction at 0x000101c87f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c87fe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c87f80) */
/* WARNING: Removing unreachable block (ram,0x000101c87fe8) */
/* WARNING: Removing unreachable block (ram,0x000101c88000) */
/* WARNING: Removing unreachable block (ram,0x000101c87d70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c88024(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long extraout_x8;
  long lVar13;
  long unaff_x20;
  long lVar14;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_101c88564(uVar2,uVar10,uVar6);
  puVar3 = PTR_PTR_1126aef90;
  func_0x000107c61168();
  uVar6 = uVar2;
  uVar11 = uVar10;
  func_0x000107c5fadc(uVar2,uVar10);
  puVar4 = puVar3;
  func_0x000107c41238();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c6142c(uVar10);
    lVar12 = 0;
  }
  else {
    puVar5 = puVar4;
    uStack_c0 = uVar9;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar4);
    func_0x000107c610f8(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
    func_0x00010006c00c(puVar5,uVar11);
    puVar4 = puVar5;
    func_0x00010130c4a4(puVar5,uVar11);
    func_0x00010006c090(puVar5,uVar11);
    func_0x000107c57e2c(puVar4);
    func_0x000107c41478();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x000107c60234(&uStack_b0);
      func_0x000107c615e8(puVar4);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_90);
    }
    else {
      uVar6 = 0;
      func_0x00010399ec04(0);
      plVar7 = &lStack_b8;
      func_0x000107c6147c(plVar7,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar6,6);
      if (((ulong)plVar7 & 1) != 0) {
        lStack_d0 = lStack_b8;
        uStack_c8 = _DAT_11380c058;
        lVar12 = lStack_b8;
        func_0x000107c61174();
        func_0x000107c5eea0(lVar14);
        lVar8 = lStack_d0 + uStack_c8;
        func_0x000107c5ee74(lVar8,lVar14);
        uStack_c8 = CONCAT44(uStack_c8._4_4_,(int)lVar8);
        (**(code **)(lVar13 + 8))(lVar14,lVar1);
        func_0x000107c61170(lVar12);
        if ((uStack_c8 & 1) != 0) {
          func_0x000107c6142c(uVar10);
          func_0x000107c61174(lVar12);
          uVar9 = uStack_c0;
          goto code_r0x000107c3fefc;
        }
      }
    }
    func_0x000107c5fadc(uVar2,uVar10);
    func_0x000107c6142c(uVar10);
    func_0x000107c4fee0(puVar3);
    func_0x000107c61170(uVar2);
    lVar12 = 0;
    uVar9 = uStack_c0;
  }
code_r0x000107c3fefc:
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar9,PTR_s_completeWithValue__1125ae900,lVar12);
  return;
}



/* Entry: 101c8804c; end: 101c88223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_101c8804c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar3 = &puStack_90;
  if ((int)param_1 == 0) {
    puVar4 = (undefined8 *)PTR_PTR_1126ae558;
    func_0x000107c61168();
    puVar5 = puVar4;
    func_0x00010399ca34();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c466bc(puVar5);
    func_0x000107c61170(uVar6);
    puVar7 = puVar5;
    func_0x000107c5ed2c(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c451ac(puVar4);
    func_0x000107c61180();
  }
  else {
    lVar2 = unaff_x20;
    func_0x000107c614f0();
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e0ffb0);
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e0ffb0))[1];
    puVar7 = (undefined8 *)PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c61434(uVar1);
    func_0x000107c453e4();
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e0ffa8);
    func_0x000107c613fc(param_2,0x38,7);
    *(undefined8 *)(param_2 + 0x10) = uVar6;
    *(undefined8 *)(param_2 + 0x18) = uVar1;
    *(undefined8 *)(param_2 + 0x20) = param_1;
    *(undefined8 **)(param_2 + 0x28) = puVar7;
    *(long *)(param_2 + 0x30) = lVar2;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    uStack_78 = param_4;
    uStack_70 = param_3;
    lStack_68 = param_2;
    func_0x000107c60bc4(&puStack_90);
    lVar2 = lStack_68;
    func_0x000107c61174(puVar7);
    func_0x000107c61574(lVar2);
    func_0x000107c4e524(uVar8);
    func_0x000107c60bd0(ppuVar3);
    puVar4 = puVar7;
    func_0x000107c43bf4(puVar7);
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar7);
  return puVar4;
}



/* Entry: 101c88224; end: 101c883d3;  */

/* WARNING: Possible PIC construction at 0x000101c88288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c882a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c882f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c88354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c88368: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c88358) */
/* WARNING: Removing unreachable block (ram,0x000101c882fc) */
/* WARNING: Removing unreachable block (ram,0x000101c88300) */
/* WARNING: Removing unreachable block (ram,0x000101c882a8) */
/* WARNING: Removing unreachable block (ram,0x000101c882b4) */
/* WARNING: Removing unreachable block (ram,0x000101c8828c) */
/* WARNING: Removing unreachable block (ram,0x000101c8837c) */
/* WARNING: Removing unreachable block (ram,0x000101c88384) */
/* WARNING: Removing unreachable block (ram,0x000101c88398) */
/* WARNING: Removing unreachable block (ram,0x000101c88290) */
/* WARNING: Removing unreachable block (ram,0x000101c8836c) */
/* WARNING: Removing unreachable block (ram,0x000101c883b8) */

void FUN_101c88224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_101c88564();
  puVar1 = PTR_PTR_1126aef90;
  func_0x000107c61168(PTR_PTR_1126aef90);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c41238(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c883d4; end: 101c883ff;  */

void FUN_101c883d4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c88400; end: 101c8841f;  */

/* WARNING: Possible PIC construction at 0x000101c88288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c882a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c882f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c88354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c88368: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c88358) */
/* WARNING: Removing unreachable block (ram,0x000101c882fc) */
/* WARNING: Removing unreachable block (ram,0x000101c88300) */
/* WARNING: Removing unreachable block (ram,0x000101c882a8) */
/* WARNING: Removing unreachable block (ram,0x000101c882b4) */
/* WARNING: Removing unreachable block (ram,0x000101c8828c) */
/* WARNING: Removing unreachable block (ram,0x000101c8837c) */
/* WARNING: Removing unreachable block (ram,0x000101c88384) */
/* WARNING: Removing unreachable block (ram,0x000101c88398) */
/* WARNING: Removing unreachable block (ram,0x000101c88290) */
/* WARNING: Removing unreachable block (ram,0x000101c8836c) */
/* WARNING: Removing unreachable block (ram,0x000101c883b8) */

void FUN_101c88400(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_101c88564(uVar1,uVar3,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  puVar2 = PTR_PTR_1126aef90;
  func_0x000107c61168(PTR_PTR_1126aef90);
  func_0x000107c5fadc(uVar1,uVar3);
  func_0x000107c41238(puVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101c88420; end: 101c8847f; -[_TtC26SCThirdPartyLoginDataStore24ThirdPartyLoginDataStore init] */

void FUN_101c88420(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCThirdPartyLoginDataStore.ThirdPartyLoginDataStore",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c8844c);
  (*pcVar1)();
}



/* Entry: 101c88480; end: 101c884cf; -[_TtC26SCThirdPartyLoginDataStore24ThirdPartyLoginDataStore .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c884b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c884b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c88480(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e0ffa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e0ffb0 + 8))
  ;
  return;
}



/* Entry: 101c884d0; end: 101c88543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101c884d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_48 [24];
  
  FUN_101c8867c();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e0ffa0);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar2);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 101c88544; end: 101c88563;  */

void FUN_101c88544(void)

{
  func_0x000107c61168(&PTR_PTR_1127ff150);
  return;
}



/* Entry: 101c88564; end: 101c8866b;  */

undefined1  [16] FUN_101c88564(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c602fc(0x1c);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x2d,0xe100000000000000);
  if (param_3 == 2) {
    uVar2 = 0x656c676f6f47;
  }
  else {
    if (param_3 != 1) {
      if (param_3 == 0) {
        uVar2 = 0x7465736e55;
        uVar3 = 0xe500000000000000;
      }
      else {
        uVar2 = 0x6e776f6e6b6e55;
        uVar3 = 0xe700000000000000;
      }
      goto LAB_101c88650;
    }
    uVar2 = 0x6e6f7a616d41;
  }
  uVar3 = 0xe600000000000000;
LAB_101c88650:
  func_0x000107c5fb78(uVar2,uVar3);
  auVar1._8_8_ = 0x800000010f007cc0;
  auVar1._0_8_ = 0xd000000000000019;
  return auVar1;
}



/* Entry: 101c8866c; end: 101c8867b;  */

void FUN_101c8866c(long param_1,long param_2)

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



/* Entry: 101c8867c; end: 101c8886b;  */

undefined1  [16] FUN_101c8867c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  lVar2 = 0x20;
  func_0x000107c5fc70(0x20,PTR___ss5UInt8VN_11034eef8);
  *(undefined8 *)(lVar2 + 0x10) = 0x20;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  uVar3 = *(undefined8 *)PTR__kSecRandomDefault_110347808;
  uVar7 = 0x20;
  func_0x000107c60b70(uVar3,0x20);
  if ((int)uVar3 == 0) {
    lVar5 = lVar2;
    func_0x000107c61434();
    func_0x0001004496cc();
    func_0x000107c6142c(lVar2);
    uVar3 = 0;
    lVar9 = lVar5;
    func_0x000107c5ee24(0,lVar5,uVar7);
    func_0x00010006c090(lVar5,uVar7);
    uStack_70 = 0x2b;
    uStack_68 = 0xe100000000000000;
    uStack_80 = 0x2d;
    uStack_78 = 0xe100000000000000;
    puStack_60 = (undefined8 *)uVar3;
    puStack_58 = (undefined8 *)lVar9;
    func_0x000100e8b654();
    puVar1 = PTR___sSSN_11034da80;
    puVar4 = &uStack_70;
    puVar8 = &uStack_80;
    func_0x000107c601fc(puVar4,puVar8,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                        PTR___sSSN_11034da80,lVar5,lVar5,lVar5);
    func_0x000107c6142c(lVar9);
    uStack_70 = 0x2f;
    uStack_68 = 0xe100000000000000;
    uStack_80 = 0x5f;
    uStack_78 = 0xe100000000000000;
    puVar6 = &uStack_70;
    puVar10 = &uStack_80;
    puStack_60 = puVar4;
    puStack_58 = puVar8;
    func_0x000107c601fc(puVar6,puVar10,0,0,0,1,puVar1,puVar1,puVar1,lVar5,lVar5,lVar5);
    func_0x000107c6142c(puVar8);
    uStack_70 = 0x3d;
    uStack_68 = 0xe100000000000000;
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    puVar4 = &uStack_70;
    puVar8 = &uStack_80;
    puStack_60 = puVar6;
    puStack_58 = puVar10;
    func_0x000107c601fc(puVar4,puVar8,0,0,0,1,puVar1,puVar1,puVar1,lVar5,lVar5,lVar5);
    func_0x000107c6142c(lVar2);
    func_0x000107c6142c(puVar10);
  }
  else {
    func_0x000107c6142c(lVar2);
    puVar4 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)0x0;
  }
  auVar11._8_8_ = puVar8;
  auVar11._0_8_ = puVar4;
  return auVar11;
}



/* Entry: 101c8886c; end: 101c889a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101c8886c(undefined8 param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0ffe0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e0ffe8) = param_1;
  func_0x000107c615f0(param_1);
  pcVar1 = "init(circumstanceEngine:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(unaff_x20 + _DAT_112e0fff0) = pcVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 101c889a4; end: 101c88a03; -[_TtC41SCThirdPartyLoginSourceAuthServiceClients38ThirdPartyLoginAmazonAuthServiceClient init] */

void FUN_101c889a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCThirdPartyLoginSourceAuthServiceClients.ThirdPartyLoginAmazonAuthServiceClient"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c889d0);
  (*pcVar1)();
}



/* Entry: 101c88a04; end: 101c88a4b; -[_TtC41SCThirdPartyLoginSourceAuthServiceClients38ThirdPartyLoginAmazonAuthServiceClient .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c88a04(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e0ffe8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e0fff0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0ffe0));
  return;
}



/* Entry: 101c88a4c; end: 101c88c07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c88a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  lVar6 = *(long *)(unaff_x20 + _DAT_112e0ffe8);
  uVar5 = 0x800000010f007d60;
  puVar1 = (undefined8 *)0xd00000000000002a;
  func_0x000107c5fadc();
  func_0x000107c5c1e0();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar6 == 0) {
    func_0x00010399ca34();
    uVar5 = *puVar1;
    uVar7 = puVar1[1];
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c61434(uVar7);
    func_0x000107c5fadc(uVar5,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x000107c466bc(puVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61654();
  }
  else {
    lVar2 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e0fff0);
    puVar4 = &UNK_110463280;
    func_0x000107c613fc(&UNK_110463280,0x40,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    *(long *)(puVar4 + 0x28) = lVar2;
    *(undefined8 *)(puVar4 + 0x30) = uVar5;
    *(undefined8 *)(puVar4 + 0x38) = param_3;
    pcStack_60 = FUN_101c88c08;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110463298;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar4 = puStack_58;
    func_0x000107c61174();
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(uVar7);
    func_0x000107c60bd0(ppuVar3);
  }
  return;
}



/* Entry: 101c88c08; end: 101c88c33;  */

void FUN_101c88c08(void)

{
  long unaff_x20;
  
  FUN_101c88c34(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 101c88c34; end: 101c895c7;  */

void FUN_101c88c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  ulong uVar16;
  ulong uVar17;
  long extraout_x8;
  long lVar18;
  long lVar19;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar20;
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 unaff_x20;
  code *pcVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined1 auStack_170 [8];
  long lStack_168;
  undefined *puStack_e8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  uVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5ebbc();
  lVar26 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  puVar21 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = (long)puVar21 - extraout_x12;
  lVar4 = 0;
  func_0x000107c5ec24();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar27 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar22 = lVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar28 = lVar22 - extraout_x12_00;
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar25 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar25 + 0x40));
  lVar23 = lVar28 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_168 = lVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar23 - extraout_x12_01;
  puVar7 = PTR_PTR_1126a6be8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5edd0(lVar28,0xd000000000000020,0x800000010f007d90);
  pcVar20 = *(code **)(lVar25 + 0x30);
  lVar5 = lVar28;
  (*pcVar20)(lVar28,1,lVar6);
  puStack_e8 = param_5;
  if ((int)lVar5 == 1) {
    FUN_101c896dc(lVar28,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar25 + 0x20))(lVar23,lVar28,lVar6);
    puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168();
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar9 = puVar8;
    func_0x000107c5ed90();
    puVar10 = puVar8;
    func_0x000107c3f3f4();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
    if (((ulong)puVar10 & 1) == 0) {
      func_0x000106a5a2b0(puVar7,1);
      (**(code **)(lVar25 + 8))(lVar23,lVar6);
      puStack_e8 = (undefined *)0x0;
    }
    else {
      (**(code **)(lVar25 + 8))(lVar23,lVar6);
    }
  }
  uVar11 = param_1;
  uVar13 = param_2;
  FUN_101c89824(param_1,param_2);
  func_0x000107c5ec20(lVar27);
  uVar17 = 0x112d70260;
  func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
  lVar23 = *(long *)(lVar26 + 0x48);
  uVar29 = (ulong)*(byte *)(lVar26 + 0x50) + 0x20 &
           ((ulong)*(byte *)(lVar26 + 0x50) ^ 0xffffffffffffffff);
  func_0x000107c613fc();
  *(undefined8 *)(uVar17 + 0x18) = 0xc;
  *(undefined8 *)(uVar17 + 0x10) = 6;
  lVar5 = uVar17 + uVar29;
  func_0x000107c5ebb0(lVar5,0x695f746e65696c63,0xe900000000000064,param_3,param_4);
  func_0x000107c5ebb0(lVar5 + lVar23,0x65736e6f70736572,0xed0000657079745f,0x65646f63,
                      0xe400000000000000);
  func_0x000107c5ebb0(lVar5 + lVar23 * 2,0x6168635f65646f63,0xee0065676e656c6c,uVar11,uVar13);
  func_0x000107c6142c(uVar13);
  func_0x000107c5ebb0(lVar5 + lVar23 * 3,0xd000000000000015,0x800000010f007dc0,0x36353253,
                      0xe400000000000000);
  func_0x000107c5ebb0(lVar5 + lVar23 * 4,0x7463657269646572,0xec0000006972755f,0xd000000000000033,
                      0x800000010f007de0);
  func_0x000107c5ebb0(lVar5 + lVar23 * 5,0x65706f6373,0xe500000000000000,0xd000000000000024,
                      0x800000010f007e20);
  func_0x000107c5ec10(0x7370747468,0xe500000000000000);
  if (puStack_e8 == (undefined *)0x0) {
    func_0x000107c5ebf0(0x7a616d612e777777,0xee006d6f632e6e6f);
    func_0x000107c5ebf8(0x616f2f70612f,0xe600000000000000);
    func_0x000106a5a3a0(puVar7,1);
  }
  else {
    if (puStack_e8 != (undefined *)0x1) {
      puStack_98 = puStack_e8;
      func_0x000107c60614(&UNK_1106b66a0,&puStack_98,&UNK_1106b66a0,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x101c895c8);
      (*pcVar20)();
    }
    func_0x000107c5ebf0(0xd00000000000001d,0x800000010f007e50);
    func_0x000107c5ebf8(0x2f70612f6174612f,0xea0000000000616f);
    func_0x000107c5ebb0(lVar18,0xd000000000000013,0x800000010f007e70,0x65757274,0xe400000000000000);
    uVar1 = *(ulong *)(uVar17 + 0x10);
    uVar16 = uVar17;
    if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar1) {
      uVar16 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
      func_0x0001012d3170(uVar16,uVar1 + 1,1,uVar17);
    }
    *(ulong *)(uVar16 + 0x10) = uVar1 + 1;
    pcVar24 = *(code **)(lVar26 + 0x20);
    (*pcVar24)(uVar16 + uVar29 + uVar1 * lVar23,lVar18,lVar3);
    func_0x000107c5ebb0(puVar21,0x6b6361626c6c6166,0xeb000000006c7255,0xd000000000000033,
                        0x800000010f007de0);
    uVar1 = *(ulong *)(uVar16 + 0x10);
    uVar17 = uVar16;
    if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar1) {
      uVar17 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
      func_0x0001012d3170(uVar17,uVar1 + 1,1,uVar16);
    }
    *(ulong *)(uVar17 + 0x10) = uVar1 + 1;
    (*pcVar24)(uVar17 + uVar29 + uVar1 * lVar23,puVar21,lVar3);
    func_0x000106a5a328(puVar7,1);
  }
  func_0x000107c5ebc8(uVar17);
  func_0x000107c5ebe8(lVar22);
  (**(code **)(lVar19 + 8))(lVar27,lVar4);
  lVar3 = lVar22;
  (*pcVar20)(lVar22,1,lVar6);
  lVar5 = lStack_168;
  if ((int)lVar3 == 1) {
    func_0x000107c61170(puVar7);
    FUN_101c896dc(lVar22,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar25 + 0x20))(lStack_168,lVar22,lVar6);
    if (puStack_e8 == (undefined *)0x1) {
      puVar9 = (undefined *)0x112e10020;
      func_0x0001000285a8(0x112e10020,&UNK_10d9eb238);
      func_0x000107c61534();
      *(undefined8 *)(puVar9 + 0x20) =
           *(undefined8 *)PTR__UIApplicationOpenURLOptionUniversalLinksOnly_110345a88;
      *(undefined8 *)(puVar9 + 0x18) = 2;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      *(undefined **)(puVar9 + 0x40) = PTR___sSbN_11034dd40;
      puVar9[0x28] = 1;
      func_0x000107c61174();
      puVar8 = puVar9;
      func_0x000100dfa5c8(puVar9);
      func_0x000107c61588(puVar9);
      FUN_101c896dc(puVar9 + 0x20,0x112d377b8,&UNK_10d9016f0);
    }
    else {
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
    func_0x000106a5a1c0(puVar7,1);
    puVar10 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar12 = puVar10;
    func_0x000107c5ed90();
    uVar13 = 0;
    func_0x000100dfa6ec(0);
    uVar11 = 0x112d377a8;
    func_0x000101c8971c(0x112d377a8,&UNK_10d901780);
    puVar14 = puVar8;
    func_0x000107c5f9dc(puVar8,uVar13,PTR___sypN_11034f1a8 + 8,uVar11);
    func_0x000107c6142c(puVar8);
    puVar8 = &UNK_1104632d0;
    func_0x000107c613fc(&UNK_1104632d0,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,unaff_x20);
    puVar9 = &UNK_1104632f8;
    func_0x000107c613fc(&UNK_1104632f8,0x50,7);
    *(undefined **)(puVar9 + 0x10) = puStack_e8;
    *(undefined **)(puVar9 + 0x18) = puVar7;
    *(undefined **)(puVar9 + 0x20) = puVar8;
    *(undefined8 *)(puVar9 + 0x28) = param_1;
    *(undefined8 *)(puVar9 + 0x30) = param_2;
    *(undefined8 *)(puVar9 + 0x38) = param_3;
    *(undefined8 *)(puVar9 + 0x40) = param_4;
    *(undefined8 *)(puVar9 + 0x48) = uVar2;
    pcStack_78 = FUN_101c896ac;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100ab47f8;
    puStack_80 = &UNK_110463310;
    ppuVar15 = &puStack_98;
    puStack_70 = puVar9;
    func_0x000107c60bc4(ppuVar15);
    puVar8 = puStack_70;
    func_0x000107c61174(puVar7);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar8);
    func_0x000107c4de70(puVar10);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar14);
    (**(code **)(lVar25 + 8))(lVar5,lVar6);
  }
  return;
}



/* Entry: 101c895c8; end: 101c895e3;  */

void FUN_101c895c8(long param_1,long param_2)

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



/* Entry: 101c895e4; end: 101c89603;  */

void FUN_101c895e4(void)

{
  func_0x000107c61168(&PTR_PTR_1127ff220);
  return;
}



/* Entry: 101c89604; end: 101c896ab;  */

void FUN_101c89604(ulong param_1,int param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_58 [24];
  
  if (((param_1 & 1) == 0) && (param_2 == 1)) {
    func_0x000106a5a2b0(param_3,1);
    func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      FUN_101c88c34(param_5,param_6,param_7,param_8,0);
      func_0x000107c61170(param_4);
    }
  }
  return;
}



/* Entry: 101c896ac; end: 101c896db;  */

void FUN_101c896ac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101c89604(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101c896dc; end: 101c8975b;  */

undefined8 FUN_101c896dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101c8975c; end: 101c89763;  */

void FUN_101c8975c(long param_1,long param_2)

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



/* Entry: 101c89764; end: 101c897c3; -[_TtC41SCThirdPartyLoginSourceAuthServiceClients29ThirdPartyLoginSourceAuthCode init] */

void FUN_101c89764(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCThirdPartyLoginSourceAuthServiceClients.ThirdPartyLoginSourceAuthCode",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c89790);
  (*pcVar1)();
}



/* Entry: 101c897c4; end: 101c89803; -[_TtC41SCThirdPartyLoginSourceAuthServiceClients29ThirdPartyLoginSourceAuthCode .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c897e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c897e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c897c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e10028 + 8))
  ;
  return;
}



/* Entry: 101c89804; end: 101c89823;  */

void FUN_101c89804(void)

{
  func_0x000107c61168(&PTR_PTR_1127ff2f0);
  return;
}



/* Entry: 101c89824; end: 101c89c77;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_101c89824(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  ulong *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar19;
  long lVar20;
  ulong auStack_f0 [8];
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined2 uStack_6a;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = 0;
  func_0x000107c5fb10();
  lVar20 = *(long *)(uVar6 - 8);
  uVar19 = uVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)&puStack_b0 + lVar2);
  uStack_78._0_1_ = (undefined1)param_1;
  uStack_78._1_1_ = (undefined1)((ulong)param_1 >> 8);
  uStack_78._2_1_ = (undefined1)((ulong)param_1 >> 0x10);
  uStack_78._3_1_ = (undefined1)((ulong)param_1 >> 0x18);
  uStack_78._4_1_ = (undefined1)((ulong)param_1 >> 0x20);
  uStack_78._5_1_ = (undefined1)((ulong)param_1 >> 0x28);
  uStack_78._6_1_ = (undefined1)((ulong)param_1 >> 0x30);
  uStack_78._7_1_ = (undefined1)((ulong)param_1 >> 0x38);
  uStack_70 = SUB81(param_2,0);
  uStack_6f = (undefined1)((ulong)param_2 >> 8);
  uStack_6e = (undefined1)((ulong)param_2 >> 0x10);
  uStack_6d = (undefined1)((ulong)param_2 >> 0x18);
  uStack_6c = (undefined1)((ulong)param_2 >> 0x20);
  uStack_6b = (undefined1)((ulong)param_2 >> 0x28);
  uStack_6a = (undefined2)((ulong)param_2 >> 0x30);
  func_0x000107c5fb04(puVar9);
  func_0x000100e8b654();
  puVar4 = PTR___sSSN_11034da80;
  uVar11 = 0;
  puVar7 = puVar9;
  puVar15 = PTR___sSSN_11034da80;
  uVar16 = uVar19;
  func_0x000107c60214();
  (**(code **)(lVar20 + 8))(puVar9,uVar6);
  puVar8 = (undefined8 *)0x0;
  puVar12 = (undefined8 *)0x0;
  puVar13 = &uStack_78;
  if (uVar11 >> 0x3c < 0xf) {
    puVar12 = (undefined8 *)0x20;
    func_0x000107c5fc70(0x20,PTR___ss5UInt8VN_11034eef8);
    puVar12[2] = 0x20;
    puVar12[5] = 0;
    puVar12[4] = 0;
    puVar12[7] = 0;
    puVar12[6] = 0;
    puStack_90 = puVar12;
    uVar3 = (uint)(uVar11 >> 0x20);
    uVar17 = uVar3 >> 0x1e;
    puStack_b0 = puVar7;
    if (uVar3 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uStack_78._0_1_ = SUB81(puVar7,0);
        uStack_78._1_1_ = (undefined1)((ulong)puVar7 >> 8);
        uStack_78._2_1_ = (undefined1)((ulong)puVar7 >> 0x10);
        uStack_78._3_1_ = (undefined1)((ulong)puVar7 >> 0x18);
        uStack_78._4_1_ = (undefined1)((ulong)puVar7 >> 0x20);
        uStack_78._5_1_ = (undefined1)((ulong)puVar7 >> 0x28);
        uStack_78._6_1_ = (undefined1)((ulong)puVar7 >> 0x30);
        uStack_78._7_1_ = (undefined1)((ulong)puVar7 >> 0x38);
        uStack_70 = (undefined1)uVar11;
        uStack_6f = (undefined1)(uVar11 >> 8);
        uStack_6e = (undefined1)(uVar11 >> 0x10);
        uStack_6d = (undefined1)(uVar11 >> 0x18);
        uStack_6c = (undefined1)(uVar11 >> 0x20);
        uStack_6b = (undefined1)(uVar11 >> 0x28);
        puVar13 = (undefined8 *)((long)&uStack_78 + (uVar11 >> 0x30 & 0xff));
        puVar9 = &uStack_88;
        puVar12 = &uStack_78;
      }
      else {
        lVar20 = (long)(int)puVar7;
        puVar9 = (undefined8 *)(((long)puVar7 >> 0x20) - lVar20);
        if ((long)puVar7 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c89c68);
          (*pcVar5)();
        }
        func_0x000107c5ec30();
        if (puVar12 == (undefined8 *)0x0) {
          func_0x000107c5ec38();
          puVar12 = (undefined8 *)0x0;
          puVar13 = (undefined8 *)0x0;
        }
        else {
          puVar8 = puVar12;
          func_0x000107c5ec3c();
          if (SBORROW8(lVar20,(long)puVar8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101c89c74);
            (*pcVar5)();
          }
          puVar1 = (undefined8 *)((long)puVar12 + (lVar20 - (long)puVar8));
          func_0x000107c5ec38();
          if ((long)puVar9 <= (long)puVar8) {
            puVar8 = puVar9;
          }
          puVar12 = (undefined8 *)0x0;
          if (puVar1 != (undefined8 *)0x0) {
            puVar12 = puVar1;
          }
          puVar13 = (undefined8 *)0x0;
          if (puVar1 != (undefined8 *)0x0) {
            puVar13 = (undefined8 *)((long)puVar8 + (long)puVar1);
          }
        }
        puVar9 = &uStack_78;
      }
    }
    else if (uVar17 == 2) {
      lVar20 = puVar7[2];
      lVar14 = puVar7[3];
      func_0x000107c5ec30();
      puVar13 = puVar12;
      if (puVar12 != (undefined8 *)0x0) {
        func_0x000107c5ec3c();
        if (SBORROW8(lVar20,(long)puVar13)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c89c70);
          (*pcVar5)();
        }
        puVar12 = (undefined8 *)((long)puVar12 + (lVar20 - (long)puVar13));
      }
      puVar9 = (undefined8 *)(lVar14 - lVar20);
      if (SBORROW8(lVar14,lVar20)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101c89c6c);
        (*pcVar5)();
      }
      func_0x000107c5ec38();
      if (puVar12 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)0x0;
      }
      else {
        if ((long)puVar9 <= (long)puVar13) {
          puVar13 = puVar9;
        }
        puVar13 = (undefined8 *)((long)puVar13 + (long)puVar12);
      }
      puVar9 = &uStack_78;
    }
    else {
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      uStack_6d = 0;
      uStack_6c = 0;
      uStack_6b = 0;
      uStack_78._0_1_ = 0;
      uStack_78._1_1_ = 0;
      uStack_78._2_1_ = 0;
      uStack_78._3_1_ = 0;
      uStack_78._4_1_ = 0;
      uStack_78._5_1_ = 0;
      uStack_78._6_1_ = 0;
      uStack_78._7_1_ = 0;
      puVar9 = &uStack_88;
      puVar12 = &uStack_78;
      puVar13 = &uStack_78;
    }
    FUN_101c89c78(puVar9,puVar12,puVar13,puVar7,uVar11,&puStack_90);
    puVar7 = puStack_90;
    puVar9 = puStack_90;
    func_0x000107c61434();
    func_0x0001004496cc();
    func_0x000107c6142c(puVar7);
    uVar10 = 0;
    puVar12 = puVar9;
    func_0x000107c5ee24(0,puVar9,puVar13);
    uStack_78._0_1_ = (undefined1)uVar10;
    uStack_78._1_1_ = (undefined1)((ulong)uVar10 >> 8);
    uStack_78._2_1_ = (undefined1)((ulong)uVar10 >> 0x10);
    uStack_78._3_1_ = (undefined1)((ulong)uVar10 >> 0x18);
    uStack_78._4_1_ = (undefined1)((ulong)uVar10 >> 0x20);
    uStack_78._5_1_ = (undefined1)((ulong)uVar10 >> 0x28);
    uStack_78._6_1_ = (undefined1)((ulong)uVar10 >> 0x30);
    uStack_78._7_1_ = (undefined1)((ulong)uVar10 >> 0x38);
    uStack_70 = SUB81(puVar12,0);
    uStack_6f = (undefined1)((ulong)puVar12 >> 8);
    uStack_6e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_6d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_6c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_6b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_6a = (undefined2)((ulong)puVar12 >> 0x30);
    uStack_88 = 0x2b;
    uStack_80 = 0xe100000000000000;
    uStack_a8 = 0x2d;
    uStack_a0 = 0xe100000000000000;
    *(ulong *)((long)auStack_f0 + lVar2 + 0x30) = uVar19;
    *(ulong *)((long)auStack_f0 + lVar2 + 0x38) = uVar19;
    puVar8 = &uStack_88;
    lVar20 = (long)&uStack_a8;
    *(undefined **)((long)auStack_f0 + lVar2 + 0x20) = puVar4;
    *(ulong *)((long)auStack_f0 + lVar2 + 0x28) = uVar19;
    func_0x000107c601fc(puVar8,lVar20,0,0,0,1,puVar4,puVar4);
    func_0x000107c6142c(puVar12);
    uStack_78._0_1_ = SUB81(puVar8,0);
    uStack_78._1_1_ = (undefined1)((ulong)puVar8 >> 8);
    uStack_78._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
    uStack_78._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
    uStack_78._4_1_ = (undefined1)((ulong)puVar8 >> 0x20);
    uStack_78._5_1_ = (undefined1)((ulong)puVar8 >> 0x28);
    uStack_78._6_1_ = (undefined1)((ulong)puVar8 >> 0x30);
    uStack_78._7_1_ = (undefined1)((ulong)puVar8 >> 0x38);
    uStack_70 = (undefined1)lVar20;
    uStack_6f = (undefined1)((ulong)lVar20 >> 8);
    uStack_6e = (undefined1)((ulong)lVar20 >> 0x10);
    uStack_6d = (undefined1)((ulong)lVar20 >> 0x18);
    uStack_6c = (undefined1)((ulong)lVar20 >> 0x20);
    uStack_6b = (undefined1)((ulong)lVar20 >> 0x28);
    uStack_6a = (undefined2)((ulong)lVar20 >> 0x30);
    uStack_88 = 0x2f;
    uStack_80 = 0xe100000000000000;
    uStack_a8 = 0x5f;
    uStack_a0 = 0xe100000000000000;
    *(ulong *)((long)auStack_f0 + lVar2 + 0x30) = uVar19;
    *(ulong *)((long)auStack_f0 + lVar2 + 0x38) = uVar19;
    puVar12 = &uStack_88;
    lVar14 = (long)&uStack_a8;
    *(undefined **)((long)auStack_f0 + lVar2 + 0x20) = puVar4;
    *(ulong *)((long)auStack_f0 + lVar2 + 0x28) = uVar19;
    func_0x000107c601fc(puVar12,lVar14,0,0,0,1,puVar4,puVar4);
    func_0x000107c6142c(lVar20);
    uStack_78._0_1_ = SUB81(puVar12,0);
    uStack_78._1_1_ = (undefined1)((ulong)puVar12 >> 8);
    uStack_78._2_1_ = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_78._3_1_ = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_78._4_1_ = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_78._5_1_ = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_78._6_1_ = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_78._7_1_ = (undefined1)((ulong)puVar12 >> 0x38);
    uStack_70 = (undefined1)lVar14;
    uStack_6f = (undefined1)((ulong)lVar14 >> 8);
    uStack_6e = (undefined1)((ulong)lVar14 >> 0x10);
    uStack_6d = (undefined1)((ulong)lVar14 >> 0x18);
    uStack_6c = (undefined1)((ulong)lVar14 >> 0x20);
    uStack_6b = (undefined1)((ulong)lVar14 >> 0x28);
    uStack_6a = (undefined2)((ulong)lVar14 >> 0x30);
    uStack_88 = 0x3d;
    uStack_80 = 0xe100000000000000;
    uStack_a8 = 0;
    uStack_a0 = 0xe000000000000000;
    *(ulong *)((long)auStack_f0 + lVar2 + 0x30) = uVar19;
    *(ulong *)((long)auStack_f0 + lVar2 + 0x38) = uVar19;
    puVar8 = &uStack_88;
    puVar12 = &uStack_a8;
    *(undefined **)((long)auStack_f0 + lVar2 + 0x20) = puVar4;
    *(ulong *)((long)auStack_f0 + lVar2 + 0x28) = uVar19;
    puVar15 = (undefined *)0x0;
    uVar16 = 0;
    param_5 = (ulong *)0x0;
    func_0x000107c601fc();
    func_0x000107c6142c(lVar14);
    func_0x0001000b44c0(puStack_b0,uVar11);
    func_0x00010006c090(puVar9,puVar13);
    func_0x000107c6142c(puVar7);
    param_2 = puVar8;
    puVar13 = puVar12;
    puVar7 = (undefined8 *)puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78(puVar8,puVar12);
  *(undefined8 **)((long)auStack_f0 + lVar2) = puVar9;
  *(ulong *)((long)auStack_f0 + lVar2 + 8) = uVar19;
  *(ulong *)((long)auStack_f0 + lVar2 + 0x10) = uVar11;
  *(undefined8 **)((long)auStack_f0 + lVar2 + 0x18) = puVar7;
  *(undefined8 **)((long)auStack_f0 + lVar2 + 0x20) = puVar13;
  *(undefined8 **)((long)auStack_f0 + lVar2 + 0x28) = param_2;
  *(undefined1 **)((long)auStack_f0 + lVar2 + 0x30) = &stack0xfffffffffffffff0;
  *(code **)((long)auStack_f0 + lVar2 + 0x38) = FUN_101c89c78;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar17 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar17 == 0) {
      uVar19 = uVar16 >> 0x30 & 0xff;
      goto LAB_101c89cf0;
    }
    iVar18 = (int)((ulong)puVar15 >> 0x20);
    if (SBORROW4(iVar18,(int)puVar15)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101c89d54);
      (*pcVar5)();
    }
    uVar19 = (ulong)(iVar18 - (int)puVar15);
  }
  else {
    if (uVar17 != 2) {
      uVar19 = 0;
      goto LAB_101c89cf0;
    }
    uVar19 = *(long *)(puVar15 + 0x18) - *(long *)(puVar15 + 0x10);
    if (SBORROW8(*(long *)(puVar15 + 0x18),*(long *)(puVar15 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101c89ccc);
      (*pcVar5)();
    }
  }
  if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101c89d50);
    (*pcVar5)();
  }
  if (uVar19 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101c89cec);
    (*pcVar5)();
  }
LAB_101c89cf0:
  uVar11 = *param_5;
  uVar16 = uVar11;
  func_0x000107c61558();
  *param_5 = uVar11;
  uVar6 = uVar11;
  if ((uVar16 & 1) == 0) {
    uVar6 = 0;
    func_0x0001014d97ac(0,*(undefined8 *)(uVar11 + 0x10),0,uVar11);
  }
  *param_5 = uVar6;
  func_0x000107c60730(puVar8,uVar19,uVar6 + 0x20);
  *extraout_x8_00 = puVar8;
  return;
}



/* Entry: 101c89c78; end: 101c89d53;  */

void FUN_101c89c78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,ulong *param_6)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = (uint)(param_5 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      uVar7 = param_5 >> 0x30 & 0xff;
      goto LAB_101c89cf0;
    }
    iVar6 = (int)((ulong)param_4 >> 0x20);
    if (SBORROW4(iVar6,(int)param_4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c89d54);
      (*pcVar2)();
    }
    uVar7 = (ulong)(iVar6 - (int)param_4);
  }
  else {
    if (uVar5 != 2) {
      uVar7 = 0;
      goto LAB_101c89cf0;
    }
    uVar7 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
    if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c89ccc);
      (*pcVar2)();
    }
  }
  if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c89d50);
    (*pcVar2)();
  }
  if (uVar7 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c89cec);
    (*pcVar2)();
  }
LAB_101c89cf0:
  uVar8 = *param_6;
  uVar3 = uVar8;
  func_0x000107c61558();
  *param_6 = uVar8;
  uVar4 = uVar8;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    func_0x0001014d97ac(0,*(undefined8 *)(uVar8 + 0x10),0,uVar8);
  }
  *param_6 = uVar4;
  func_0x000107c60730(param_2,uVar7,uVar4 + 0x20);
  *param_1 = param_2;
  return;
}



/* Entry: 101c89d54; end: 101c89d6f; -[WebBrowsingUserScopedCache clearBrowserCachesAndCookies] */

void FUN_101c89d54(void)

{
  func_0x000107c61168(PTR_PTR_1126b4f58);
                    /* WARNING: Could not recover jumptable at 0x00010bf3aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101c89d70; end: 101c89d8b;  */

void FUN_101c89d70(long param_1,long param_2)

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



/* Entry: 101c89d8c; end: 101c89e5f; -[WebBrowsingUserScopedCache clearBrowserCachesAndCookiesWithCompletionBlock:] */

void FUN_101c89d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  func_0x000107c60bc4();
  puVar2 = &UNK_1104633d0;
  func_0x000107c613fc(&UNK_1104633d0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  puVar3 = PTR_PTR_1126b4f58;
  func_0x000107c61168(PTR_PTR_1126b4f58);
  pcStack_40 = FUN_101c89f38;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_1104633e8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c3fa78(puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 101c89e60; end: 101c89e8b; -[WebBrowsingUserScopedCache markClearDiskCacheOnNextColdStartupIfExceeds:] */

void FUN_101c89e60(void)

{
  func_0x000107c61168(PTR_PTR_1126b4f58);
                    /* WARNING: Could not recover jumptable at 0x00010c0bb2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101c89e8c; end: 101c89ea7; -[WebBrowsingUserScopedCache browserCachesAndCookiesSize] */

void FUN_101c89e8c(void)

{
  func_0x000107c61168(PTR_PTR_1126b4f58);
                    /* WARNING: Could not recover jumptable at 0x00010bf215f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101c89ea8; end: 101c89ee3; -[WebBrowsingUserScopedCache init] */

void FUN_101c89ea8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c89ee4; end: 101c89f37;  */

void FUN_101c89ee4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c89f38; end: 101c89f4b;  */

void FUN_101c89f38(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101c89f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 101c89f4c; end: 101c89fd3; -[WebBrowsingViewProvider webViewWithFrame:scalesPageToFit:] */

void FUN_101c89f4c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
    func_0x000107c610f8(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
    func_0x000107c453e4();
  }
  else {
    puVar1 = PTR_PTR_1126b4f58;
    func_0x000107c61168(PTR_PTR_1126b4f58);
    func_0x000107c40ab4();
    func_0x000107c61180();
  }
  puVar2 = PTR_PTR_1126b4f58;
  func_0x000107c61168(PTR_PTR_1126b4f58);
  func_0x000107c3ac64(0,0,0,0);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101c89fd4; end: 101c8a01b; -[WebBrowsingViewProvider webViewWithFrame:configuration:] */

void FUN_101c89fd4(void)

{
  func_0x000107c61168(PTR_PTR_1126b4f58);
  func_0x000107c3ac64(0,0,0,0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



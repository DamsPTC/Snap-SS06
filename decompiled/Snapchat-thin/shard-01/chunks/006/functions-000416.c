/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101298c90; end: 101298c9b; -[SCAddFriendQRCodeSyncerEntryPoint appStartExperimentReaderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101298c90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e668;
  func_0x000107c61428(param_1 + _DAT_112d6e668,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101298c9c; end: 101298ca7; -[SCAddFriendQRCodeSyncerEntryPoint setAppStartExperimentReaderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101298c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e668;
  func_0x000107c61428(param_1 + _DAT_112d6e668,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101298ca8; end: 101298cb3; -[SCAddFriendQRCodeSyncerEntryPoint addFriendQRCodeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101298ca8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e670;
  func_0x000107c61428(param_1 + _DAT_112d6e670,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101298cb4; end: 101298cf7;  */

void FUN_101298cb4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101298cf8; end: 101298d03; -[SCAddFriendQRCodeSyncerEntryPoint setAddFriendQRCodeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101298cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e670;
  func_0x000107c61428(param_1 + _DAT_112d6e670,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101298d04; end: 101298d57;  */

void FUN_101298d04(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101298d58; end: 101298f23;  */

/* WARNING: Possible PIC construction at 0x000101298e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101298e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101298e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101298e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101298f00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101298e94) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101298e84) */
/* WARNING: Removing unreachable block (ram,0x000101298e18) */
/* WARNING: Removing unreachable block (ram,0x000101298e74) */
/* WARNING: Removing unreachable block (ram,0x000101298e1c) */
/* WARNING: Removing unreachable block (ram,0x000101298e40) */
/* WARNING: Removing unreachable block (ram,0x000101298e58) */
/* WARNING: Removing unreachable block (ram,0x000101298f04) */

void FUN_101298d58(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5da74();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c3de4c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        func_0x000107c3d6b4();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          FUN_10129899c(0);
          func_0x000107c613fc();
          func_0x000107c3fb58(unaff_x20);
          func_0x000107c61180();
          func_0x000107c5c734();
          func_0x000107c61180();
          lVar1 = unaff_x20;
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101298f24; end: 101298f4b; -[SCAddFriendQRCodeSyncerEntryPoint begin] */

void FUN_101298f24(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101298d58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101298f4c; end: 101298f8f; -[SCAddFriendQRCodeSyncerEntryPoint end] */

void FUN_101298f4c(undefined8 param_1)

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



/* Entry: 101298f90; end: 1012991ff;  */

void FUN_101298f90(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef630)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10ecd10)) ||
           (func_0x000107c605b8(0xd000000000000020,0x800000010ef132f0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c527b4();
        }
        else {
          uVar2 = 0xd000000000000017;
          if (((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10cd380)) &&
             (func_0x000107c605b8(0xd000000000000017,0x800000010ef32c80,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SCAddFriendQRCodeServicesImplementation/SCAddFriendQRCodeSyncerEntryPoint.swift"
                                ,0x4f,2,0x34,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101299200);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5247c();
        }
        goto LAB_10129901c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a3f8();
  }
LAB_10129901c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101299200; end: 1012992ab; -[SCAddFriendQRCodeSyncerEntryPoint setValue:forIvarName:] */

void FUN_101299200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101298f90(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1012992ac; end: 101299347; -[SCAddFriendQRCodeSyncerEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012992ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6e658,0);
  func_0x000107c61614(param_1 + _DAT_112d6e660,0);
  func_0x000107c61614(param_1 + _DAT_112d6e668,0);
  func_0x000107c61614(param_1 + _DAT_112d6e670,0);
  *(undefined8 *)(param_1 + _DAT_112d6e678) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101299348; end: 10129937b;  */

void FUN_101299348(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10129937c; end: 1012993e3; -[SCAddFriendQRCodeSyncerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129937c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6e658);
  func_0x000107c61610(param_1 + _DAT_112d6e660);
  func_0x000107c61610(param_1 + _DAT_112d6e668);
  func_0x000107c61610(param_1 + _DAT_112d6e670);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6e678));
  return;
}



/* Entry: 1012993e4; end: 101299403;  */

void FUN_1012993e4(void)

{
  func_0x000107c61168(&PTR_PTR_1127c1838);
  return;
}



/* Entry: 101299404; end: 101299443;  */

void FUN_101299404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101299444; end: 10129955b;  */

/* WARNING: Possible PIC construction at 0x000101299484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101299510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101299488) */
/* WARNING: Removing unreachable block (ram,0x000101299548) */
/* WARNING: Removing unreachable block (ram,0x00010129948c) */
/* WARNING: Removing unreachable block (ram,0x000101299514) */

void FUN_101299444(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c3fea0(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10129955c; end: 1012995cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129955c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_10129996c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d6e758) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1012995d0; end: 1012995d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012995d0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_10129996c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d6e758) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1012995d8; end: 101299603;  */

void FUN_1012995d8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101299604; end: 101299623;  */

void FUN_101299604(void)

{
  FUN_101299444();
  return;
}



/* Entry: 101299624; end: 10129962b;  */

undefined8 FUN_101299624(void)

{
  return 0;
}



/* Entry: 10129962c; end: 10129964b;  */

void FUN_10129962c(void)

{
  func_0x000107c61168(&PTR_PTR_112d6e6f0);
  return;
}



/* Entry: 10129964c; end: 1012997ab;  */

/* WARNING: Possible PIC construction at 0x000101299754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101299764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101299774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101299784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101299778) */
/* WARNING: Removing unreachable block (ram,0x000101299768) */
/* WARNING: Removing unreachable block (ram,0x000101299758) */
/* WARNING: Removing unreachable block (ram,0x000101299788) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129964c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d6e758);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c5fadc(param_7,param_8);
  func_0x000107c5fadc(param_9,param_10);
  func_0x000107c5fadc(param_11,param_12);
  func_0x000107c5fadc(param_13,param_14);
  func_0x000107c5fadc(param_15,param_16);
  func_0x000107c50230(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012997ac; end: 1012998ff; -[_TtC43SCCommunitiesReportStoryCommentServicesImpl40CommunitiesReportStoryCommentServiceImpl reportCommunityStoryCommentWithReplyId:replyPosterId:snapId:snapPosterId:groupId:orgId:reportReasonId:reportMessage:] */

/* WARNING: Possible PIC construction at 0x0001012998a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012998b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012998c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012998d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012998cc) */
/* WARNING: Removing unreachable block (ram,0x0001012998bc) */
/* WARNING: Removing unreachable block (ram,0x0001012998ac) */
/* WARNING: Removing unreachable block (ram,0x0001012998dc) */

void FUN_1012997ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c5faec();
  uVar1 = param_2;
  func_0x000107c5faec();
  uVar2 = uVar1;
  func_0x000107c5faec();
  uVar3 = uVar2;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c5faec();
  uVar5 = uVar4;
  func_0x000107c5faec();
  uVar6 = uVar5;
  func_0x000107c5faec();
  uVar7 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61174(param_1);
  FUN_10129964c(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6,uVar3,param_7,uVar4,param_8,
                uVar5,param_9,uVar6,param_10,uVar7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101299900; end: 10129995b; -[_TtC43SCCommunitiesReportStoryCommentServicesImpl40CommunitiesReportStoryCommentServiceImpl init] */

void FUN_101299900(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommunitiesReportStoryCommentServicesImpl.CommunitiesReportStoryCommentServiceImpl"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10129992c);
  (*pcVar1)();
}



/* Entry: 10129995c; end: 10129996b; -[_TtC43SCCommunitiesReportStoryCommentServicesImpl40CommunitiesReportStoryCommentServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129995c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d6e758));
  return;
}



/* Entry: 10129996c; end: 10129998b;  */

void FUN_10129996c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c1910);
  return;
}



/* Entry: 10129998c; end: 101299997; -[SCCommunitiesReportStoryCommentServicesImplEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129998c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e788;
  func_0x000107c61428(param_1 + _DAT_112d6e788,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101299998; end: 1012999a3; -[SCCommunitiesReportStoryCommentServicesImplEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101299998(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e788;
  func_0x000107c61428(param_1 + _DAT_112d6e788,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012999a4; end: 1012999af; -[SCCommunitiesReportStoryCommentServicesImplEntryPoint communitiesOrgNetworkServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012999a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e790;
  func_0x000107c61428(param_1 + _DAT_112d6e790,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012999b0; end: 1012999f3;  */

void FUN_1012999b0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1012999f4; end: 1012999ff; -[SCCommunitiesReportStoryCommentServicesImplEntryPoint setCommunitiesOrgNetworkServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012999f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e790;
  func_0x000107c61428(param_1 + _DAT_112d6e790,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101299a00; end: 101299a53;  */

void FUN_101299a00(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101299a54; end: 101299a9b; -[SCCommunitiesReportStoryCommentServicesImplEntryPoint communitiesReportStoryCommentServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101299a54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6e798;
  func_0x000107c61428(param_1 + _DAT_112d6e798,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101299a9c; end: 101299aff; -[SCCommunitiesReportStoryCommentServicesImplEntryPoint setCommunitiesReportStoryCommentServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101299a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6e798;
  func_0x000107c61428(param_1 + _DAT_112d6e798,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101299b00; end: 101299c13;  */

/* WARNING: Possible PIC construction at 0x000101299ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101299bb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101299ba4) */
/* WARNING: Removing unreachable block (ram,0x000101299bb4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_101299b00(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c3fe90();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c3fe98();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar1;
      }
      else {
        lVar2 = 0;
        FUN_10129962c();
        func_0x000107c613fc();
        *(long *)(lVar2 + 0x10) = unaff_x20;
        *(long *)(lVar2 + 0x18) = lVar1;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(unaff_x20);
        FUN_101299444();
        lVar2 = unaff_x20;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 101299c14; end: 101299c3b; -[SCCommunitiesReportStoryCommentServicesImplEntryPoint begin] */

void FUN_101299c14(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101299b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101299c3c; end: 101299c7f; -[SCCommunitiesReportStoryCommentServicesImplEntryPoint end] */

void FUN_101299c3c(undefined8 param_1)

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



/* Entry: 101299c80; end: 101299e83;  */

void FUN_101299c80(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef10cd250)) {
      uVar2 = 0xd00000000000001d;
      func_0x000107c605b8(0xd00000000000001d,0x800000010ef32db0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef10cd230)) &&
           (func_0x000107c605b8(0xd00000000000002c,0x800000010ef32dd0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SCCommunitiesReportStoryCommentServicesImpl/SCCommunitiesReportStoryCommentServicesImplEntryPoint.swift"
                              ,0x67,2,0x2e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101299e84);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c535fc();
        goto LAB_101299d0c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c535f8();
  }
LAB_101299d0c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101299e84; end: 101299f2f; -[SCCommunitiesReportStoryCommentServicesImplEntryPoint setValue:forIvarName:] */

void FUN_101299e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101299c80(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101299f30; end: 101299faf; -[SCCommunitiesReportStoryCommentServicesImplEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101299f30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6e788,0);
  func_0x000107c61614(param_1 + _DAT_112d6e790,0);
  *(undefined8 *)(param_1 + _DAT_112d6e798) = 0;
  *(undefined8 *)(param_1 + _DAT_112d6e7a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101299fb0; end: 101299fe3;  */

void FUN_101299fb0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101299fe4; end: 10129a03b; -[SCCommunitiesReportStoryCommentServicesImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101299fe4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6e788);
  func_0x000107c61610(param_1 + _DAT_112d6e790);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6e798));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6e7a0));
  return;
}



/* Entry: 10129a03c; end: 10129a05b;  */

void FUN_10129a03c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c19d8);
  return;
}



/* Entry: 10129a05c; end: 10129a0a7; -[_TtC22DmdNotificationHandler26DmdDeepLinkProcessorPlugin identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129a05c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d6e7f8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d6e7f8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10129a0a8; end: 10129a0af; -[_TtC22DmdNotificationHandler26DmdDeepLinkProcessorPlugin priority] */

undefined8 FUN_10129a0a8(void)

{
  return 1000;
}



/* Entry: 10129a0b0; end: 10129a137; -[_TtC22DmdNotificationHandler26DmdDeepLinkProcessorPlugin canProvideProcessorForFeature:] */

uint FUN_10129a0b0(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  func_0x000107c5faec();
  if ((param_3 == 0x6d6275732d646d64) && (param_2 == -0x11ff9190968c8c97)) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  return uVar1 & 1;
}



/* Entry: 10129a138; end: 10129a13f; -[_TtC22DmdNotificationHandler26DmdDeepLinkProcessorPlugin isValidDeepLink:] */

undefined8 FUN_10129a138(void)

{
  return 1;
}



/* Entry: 10129a140; end: 10129a2bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10129a140(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_70;
  long lStack_68;
  
  lVar6 = unaff_x20 + _DAT_112d6e7d0;
  func_0x000107c61618();
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d6e7d8);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112d6e7e8);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d6e7e0);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d6e7f0);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112d6e7f0))[1];
  lVar7 = lVar6;
  func_0x00010129b458();
  lVar8 = lVar7;
  func_0x000107c610f8();
  lVar4 = _DAT_112d6e830;
  func_0x000107c61614(lVar8 + _DAT_112d6e830,0);
  lVar5 = _DAT_112d6e850;
  puVar9 = PTR_PTR_1126a6888;
  func_0x000107c610f8();
  func_0x000107c61434(uVar3);
  func_0x000107c453e4();
  *(undefined **)(lVar8 + lVar5) = puVar9;
  func_0x000107c61614(lVar8 + _DAT_112d6e860,0);
  *(undefined8 *)(lVar8 + _DAT_112d6e868) = 0;
  func_0x000107c61604(lVar8 + lVar4,lVar6);
  *(undefined8 *)(lVar8 + _DAT_112d6e838) = uVar12;
  *(undefined8 *)(lVar8 + _DAT_112d6e858) = uVar11;
  *(undefined8 *)(lVar8 + _DAT_112d6e840) = uVar13;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112d6e848);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar9 = PTR_s_init_1125d9248;
  lStack_70 = lVar8;
  lStack_68 = lVar7;
  func_0x000107c6157c(uVar12);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar13);
  plVar10 = &lStack_70;
  func_0x000107c61154(plVar10,puVar9);
  func_0x000107c61170(lVar6);
  return plVar10;
}



/* Entry: 10129a2c0; end: 10129a2f3; -[_TtC22DmdNotificationHandler26DmdDeepLinkProcessorPlugin makeDeepLinkProcessor] */

void FUN_10129a2c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10129a140();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10129a2f4; end: 10129a31f; -[_TtC22DmdNotificationHandler26DmdDeepLinkProcessorPlugin init] */

void FUN_10129a2f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DmdNotificationHandler.DmdDeepLinkProcessorPlugin",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10129a320);
  (*pcVar1)();
}



/* Entry: 10129a320; end: 10129a39f; -[_TtC22DmdNotificationHandler26DmdDeepLinkProcessorPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010129a380: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010129a384) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129a320(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6e7d0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6e7d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6e7e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6e7e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d6e7f0 + 8))
  ;
  return;
}



/* Entry: 10129a3a0; end: 10129a9c3;  */

/* WARNING: Possible PIC construction at 0x00010129a42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129a8fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129a92c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129a94c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010129a430) */
/* WARNING: Removing unreachable block (ram,0x00010129a900) */
/* WARNING: Removing unreachable block (ram,0x00010129a930) */
/* WARNING: Removing unreachable block (ram,0x00010129a950) */
/* WARNING: Removing unreachable block (ram,0x00010129a93c) */
/* WARNING: Removing unreachable block (ram,0x00010129a91c) */
/* WARNING: Removing unreachable block (ram,0x00010129a8ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129a3a0(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = unaff_x20 + _DAT_112d6e830;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x000107c61150(uVar2,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_topmostViewController_11267b0f0);
      if ((uVar1 & 1) != 0) {
        func_0x000107c5cc6c(uVar2);
        func_0x000107c61180();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 10129a9c4; end: 10129aa27; -[_TtC22DmdNotificationHandler20DmdDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_10129a9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  func_0x00010129b7f4(param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10129aa28; end: 10129aa2f; -[_TtC22DmdNotificationHandler20DmdDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_10129aa28(void)

{
  return 0;
}



/* Entry: 10129aa30; end: 10129aa33; -[_TtC22DmdNotificationHandler20DmdDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_10129aa30(void)

{
  return;
}



/* Entry: 10129aa34; end: 10129aa5f; -[_TtC22DmdNotificationHandler20DmdDeepLinkProcessor init] */

void FUN_10129aa34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DmdNotificationHandler.DmdDeepLinkProcessor",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10129aa60);
  (*pcVar1)();
}



/* Entry: 10129aa60; end: 10129aa63;  */

void FUN_10129aa60(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10129aa64; end: 10129aa97;  */

void FUN_10129aa64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10129aa98; end: 10129ab33; -[_TtC22DmdNotificationHandler20DmdDeepLinkProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010129aad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129aaf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010129aad8) */
/* WARNING: Removing unreachable block (ram,0x00010129aafc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129aa98(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6e830);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6e838));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6e840));
  return;
}



/* Entry: 10129ab34; end: 10129b05f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129ab34(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  char *pcVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  ulong uVar10;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar12;
  long unaff_x20;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  long lVar22;
  undefined8 auStack_100 [7];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  code *pcStack_b8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar20 = auStack_c0 + -extraout_x8;
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar11 = (long)puVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar11 - extraout_x12;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar17 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar17 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar16 - extraout_x12_01;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  lVar22 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar13 - (lVar22 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar21 - extraout_x12_02;
  func_0x000107c5edd0(lVar13,*(undefined8 *)(unaff_x20 + _DAT_112d6e848),
                      ((undefined8 *)(unaff_x20 + _DAT_112d6e848))[1]);
  lVar1 = lVar13;
  (**(code **)(lVar12 + 0x30))(lVar13,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x0001000293e4(lVar13);
  }
  else {
    pcStack_b8 = *(code **)(lVar12 + 0x20);
    (*pcStack_b8)(lVar19,lVar13,lVar2);
    func_0x000105114058(*(undefined8 *)(unaff_x20 + _DAT_112d6e850),1);
    FUN_10129b968(0,0x112d6e898,&PTR_PTR_1126e2178);
    uVar3 = 1;
    FUN_10129b2a0(1);
    lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112d6e858) + _DAT_113083868);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(uVar3);
    pcVar15 = *(code **)(lVar12 + 0x10);
    (*pcVar15)(lVar16,lVar19,lVar2);
    pcVar14 = *(code **)(lVar12 + 0x38);
    (*pcVar14)(lVar16,0,1,lVar2);
    (*pcVar14)(lVar17,1,1,lVar2);
    lVar1 = 0;
    func_0x0001046305a8();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar20,1,1,lVar1);
    *(undefined1 *)(lVar19 + -8) = 0;
    *(undefined8 *)(lVar19 + -0x10) = 0;
    *(undefined8 *)(lVar19 + -0x18) = 0;
    *(undefined8 *)(lVar19 + -0x20) = 0;
    *(undefined8 *)(lVar19 + -0x28) = 0;
    *(undefined8 *)(lVar19 + -0x30) = 0;
    *(undefined8 *)(lVar19 + -0x38) = 0;
    *(undefined1 **)(lVar19 + -0x40) = puVar20;
    func_0x000104638e24(0x10,lVar16,0,lVar17,0,0,0,0);
    puVar4 = PTR_PTR_1126ae560;
    func_0x000107c610f8(PTR_PTR_1126ae560);
    func_0x000107c453e4();
    puVar5 = puVar4;
    func_0x000107c43bf4();
    func_0x000107c61180();
    (*pcVar15)(lVar21,lVar19,lVar2);
    uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar18 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
    puVar6 = &UNK_11039be50;
    func_0x000107c613fc(&UNK_11039be50,uVar18 + lVar22,uVar10 | 7);
    (*pcStack_b8)(puVar6 + uVar18,lVar21,lVar2);
    pcStack_70 = FUN_10129b9a8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100e38b5c;
    puStack_78 = &UNK_11039be68;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_68);
    pcVar8 = "openSupportUrl(sender:)";
    func_0x0001000c10c0("openSupportUrl(sender:)");
    func_0x000107c61180();
    func_0x000107c5dc68(puVar5);
    func_0x000107c615e8(pcVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar5);
    puVar6 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    uVar3 = 0;
    func_0x0001000956f0(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    FUN_100e39298(lVar9,lVar11);
    func_0x000104652fec(0);
    func_0x000107c610f8();
    func_0x000104651d90(lVar11);
    func_0x000107c61174(puVar6);
    lVar1 = lVar11;
    func_0x000103c5d254(lVar11,puVar4,puVar6,unaff_x20,0,0,0,0);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar6);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d6e840));
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar1);
    func_0x000100e392dc(lVar9);
    (**(code **)(lVar12 + 8))(lVar19,lVar2);
  }
  return;
}



/* Entry: 10129b060; end: 10129b0bf;  */

void FUN_10129b060(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c420a8(param_1,param_2,1,0);
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10129b0c0();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10129b0c0; end: 10129b1a7;  */

/* WARNING: Possible PIC construction at 0x00010129b140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010129b144) */
/* WARNING: Removing unreachable block (ram,0x00010129b16c) */
/* WARNING: Removing unreachable block (ram,0x00010129b17c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129b0c0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  FUN_10129b968(0,0x112d6e898,&PTR_PTR_1126e2178);
  uVar1 = 0;
  FUN_10129b2a0(0);
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112d6e858) + _DAT_113083868);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10129b1a8; end: 10129b29f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10129b1a8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar3 = *(long *)(param_2 + _DAT_112d6e868);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_2 + _DAT_112d6e850);
    lVar1 = lVar3;
    func_0x000107c61174(lVar3);
    func_0x0001051140d0(uVar4,1);
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    func_0x0001000d224c(auStack_78);
    func_0x0001000a8868(auStack_78,uStack_60);
    pcVar5 = *(code **)(lStack_58 + 8);
    func_0x000107c61174(puVar2);
    (*pcVar5)();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar1);
    func_0x0001000834e4(auStack_78);
  }
  return lVar3 != 0;
}



/* Entry: 10129b2a0; end: 10129b33b;  */

undefined8 FUN_10129b2a0(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar1 = 0x4345525f544e4f44;
  if (param_1 != '\x01') {
    uVar1 = 0x59414b4f;
  }
  uVar2 = 0xee00455a494e474f;
  if (param_1 != '\x01') {
    uVar2 = 0xe400000000000000;
  }
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c52140(unaff_x20);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 10129b33c; end: 10129b38b;  */

void FUN_10129b33c(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10129b38c; end: 10129b40f; -[_TtC22DmdNotificationHandler20DmdDeepLinkProcessor webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010129b3c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129b3e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010129b3cc) */
/* WARNING: Removing unreachable block (ram,0x00010129b3e8) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129b38c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10129b410; end: 10129b437; -[_TtC22DmdNotificationHandler20DmdDeepLinkProcessor dialogDidDismiss:] */

void FUN_10129b410(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10129b0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10129b438; end: 10129b477;  */

void FUN_10129b438(void)

{
  func_0x000107c61168(&PTR_PTR_1127c1aa8);
  return;
}



/* Entry: 10129b478; end: 10129b47f;  */

void FUN_10129b478(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 10129b480; end: 10129b5af;  */

void FUN_10129b480(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 10129b5b0; end: 10129b627;  */

undefined8 FUN_10129b5b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 10129b628; end: 10129b75f;  */

undefined1 * FUN_10129b628(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 10129b760; end: 10129b787;  */

void FUN_10129b760(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 10129b788; end: 10129b8fb;  */

void FUN_10129b788(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112d6e8c0;
  FUN_10129bab0(0x112d6e8c0,&UNK_10d930714);
  uVar2 = 0x112d6e8c8;
  FUN_10129bab0(0x112d6e8c8,&UNK_10d930668);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 10129b8fc; end: 10129b91b;  */

void FUN_10129b8fc(void)

{
  FUN_10129a3a0();
  return;
}



/* Entry: 10129b91c; end: 10129b937;  */

void FUN_10129b91c(long param_1,long param_2)

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



/* Entry: 10129b938; end: 10129b957;  */

void FUN_10129b938(void)

{
  FUN_10129ab34();
  return;
}



/* Entry: 10129b958; end: 10129b967;  */

void FUN_10129b958(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c420a8();
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10129b0c0();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10129b968; end: 10129b9a7;  */

void FUN_10129b968(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10129b9a8; end: 10129b9f3;  */

void FUN_10129b9a8(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0(param_1,0,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10129b9f4; end: 10129baaf;  */

void FUN_10129b9f4(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d6e8a0 != 0) {
    return;
  }
  puVar1 = &UNK_11039bea0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d6e8a0 = param_1;
  return;
}



/* Entry: 10129bab0; end: 10129baef;  */

void FUN_10129bab0(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_10129b9f4(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10129baf0; end: 10129bb13;  */

void FUN_10129baf0(long param_1,long param_2)

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



/* Entry: 10129bb14; end: 10129be8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10129bb14(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  uVar4 = param_2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar5 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010ef32f40);
    uVar6 = uVar4;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar5);
    if ((uVar6 & 1) != 0) {
      uVar5 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32f70);
      uVar7 = 0xd00000000000008f;
      uVar15 = 0x800000010ef32f90;
      func_0x000107c5fadc(0xd00000000000008f);
      uVar6 = uVar4;
      func_0x000107c5c1dc();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar7);
      uVar8 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      puVar9 = &UNK_11039bf78;
      func_0x000107c613fc(&UNK_11039bf78,0x20,7);
      *(undefined8 *)(puVar9 + 0x10) = param_4;
      *(undefined8 *)(puVar9 + 0x18) = param_6;
      func_0x0001000285a8(0x112d6e8d0,&UNK_10d930760);
      func_0x000107c613fc();
      func_0x000107c61174();
      func_0x000107c61174();
      pcVar10 = FUN_10129bf50;
      func_0x0001000bdd8c(FUN_10129bf50,puVar9);
      pcVar11 = pcVar10;
      func_0x00010451338c();
      lVar12 = 0;
      FUN_10129b438();
      lVar13 = lVar12;
      func_0x000107c610f8();
      lVar3 = _DAT_112d6e7d0;
      func_0x000107c61614(lVar13 + _DAT_112d6e7d0,0);
      puVar1 = (undefined8 *)(lVar13 + _DAT_112d6e7f8);
      *puVar1 = 0xd00000000000001a;
      puVar1[1] = 0x800000010ef33020;
      *(undefined8 *)(lVar13 + _DAT_112d6e800) = 1000;
      func_0x000107c61604(lVar13 + lVar3,pcVar11);
      *(code **)(lVar13 + _DAT_112d6e7d8) = pcVar10;
      *(undefined8 *)(lVar13 + _DAT_112d6e7e8) = param_5;
      *(undefined8 *)(lVar13 + _DAT_112d6e7e0) = param_6;
      puVar2 = (ulong *)(lVar13 + _DAT_112d6e7f0);
      *puVar2 = uVar8;
      puVar2[1] = uVar15;
      puVar9 = PTR_s_init_1125d9248;
      lStack_70 = lVar13;
      lStack_68 = lVar12;
      func_0x000107c61174(param_6);
      func_0x000107c6157c(pcVar10);
      func_0x000107c61174(param_5);
      plVar14 = &lStack_70;
      func_0x000107c61154(plVar14,puVar9);
      func_0x000107c61170(pcVar11);
      uVar5 = param_1;
      func_0x000107c4e9e4(param_1);
      func_0x000107c61180();
      func_0x000107c61174(plVar14);
      func_0x000107c4fba8(uVar5);
      func_0x000107c615e8(uVar4);
      func_0x000107c61574(pcVar10);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(plVar14);
      func_0x000107c61170(plVar14);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      goto LAB_10129be58;
    }
    func_0x000107c615e8(uVar4);
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
LAB_10129be58:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return unaff_x20;
}



/* Entry: 10129be90; end: 10129bf4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129be90(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long lStack_38;
  
  plVar6 = &lStack_40;
  uVar2 = 0x112d6e970;
  func_0x0001000285a8(0x112d6e970,&UNK_10d9307a0);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11307e0b8);
  func_0x0001000bda74(uVar3,uVar2);
  lVar4 = 0;
  FUN_10129cc7c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112d6e978) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112d6e980) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  param_1[3] = lVar4;
  param_1[4] = &PTR_DAT_11039bfb0;
  *param_1 = plVar6;
  return;
}



/* Entry: 10129bf50; end: 10129bf73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129bf50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar7 = &lStack_40;
  uVar3 = 0x112d6e970;
  func_0x0001000285a8(0x112d6e970,&UNK_10d9307a0);
  uVar4 = *(undefined8 *)(lVar6 + _DAT_11307e0b8);
  func_0x0001000bda74(uVar4,uVar3);
  lVar5 = 0;
  FUN_10129cc7c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112d6e978) = uVar4;
  *(undefined8 *)(lVar6 + _DAT_112d6e980) = uVar1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar6;
  lStack_38 = lVar5;
  func_0x000107c61174(uVar1);
  func_0x000107c61154(&lStack_40,puVar2);
  param_1[3] = lVar5;
  param_1[4] = &PTR_DAT_11039bfb0;
  *param_1 = plVar7;
  return;
}



/* Entry: 10129bf74; end: 10129bf93;  */

void FUN_10129bf74(void)

{
  func_0x000107c61168(&PTR_PTR_112d6e918);
  return;
}



/* Entry: 10129bf94; end: 10129c2eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129bf94(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long alStack_d0 [7];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&puStack_90 - extraout_x8;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar12 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar12 - extraout_x12;
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar9 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar9 - extraout_x12_00;
  lVar1 = 0;
  func_0x000107c5ede0();
  pcVar14 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  (*pcVar14)(lVar13,1,1,lVar1);
  (*pcVar14)(lVar12,1,1,lVar1);
  lVar1 = 0;
  func_0x0001046305a8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar11,1,1,lVar1);
  *(undefined1 *)(lVar10 + -8) = 0;
  *(undefined8 *)(lVar10 + -0x10) = 0;
  *(undefined8 *)(lVar10 + -0x18) = 0;
  *(undefined8 *)(lVar10 + -0x20) = 0;
  *(undefined8 *)(lVar10 + -0x28) = 0;
  *(undefined8 *)(lVar10 + -0x30) = 0;
  *(undefined8 *)(lVar10 + -0x38) = 0;
  *(long *)(lVar10 + -0x40) = lVar11;
  func_0x000104638e24(lVar10,0x10,lVar13,0,lVar12,0,0,0,0);
  puVar2 = PTR_PTR_1126ae560;
  func_0x000107c610f8(PTR_PTR_1126ae560);
  func_0x000107c453e4();
  puVar3 = puVar2;
  func_0x000107c43bf4();
  func_0x000107c61180();
  puVar4 = &UNK_11039bfd0;
  func_0x000107c613fc(&UNK_11039bfd0,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  pcStack_70 = FUN_10129cd40;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100e38b5c;
  puStack_78 = &UNK_11039bfe8;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  pcVar6 = "openDmd(uiContainer:)";
  func_0x0001000c10c0("openDmd(uiContainer:)");
  func_0x000107c61180();
  func_0x000107c5dc68(puVar3);
  func_0x000107c615e8(pcVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar3);
  uVar7 = 0;
  func_0x0001000956f0(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_100e39298(lVar10,lVar9);
  uVar8 = 0;
  func_0x000104652fec(0);
  func_0x000107c610f8();
  func_0x000104651d90(lVar9,uVar8);
  lVar1 = lVar9;
  func_0x000103c5d254();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar9);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d6e980));
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar1);
  func_0x000100e392dc(lVar10);
  return;
}



/* Entry: 10129c2ec; end: 10129c883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129c2ec(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 extraout_x13;
  long unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  code *pcVar19;
  ulong uVar20;
  undefined1 auStack_f0 [8];
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = (long)puVar5 - extraout_x12;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  lVar15 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar16 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (lVar14 - extraout_x12_00) - extraout_x12_01;
  if ((param_1 != 0) && (param_2 == 0)) {
    puStack_a0 = (undefined1 *)0xd00000000000001d;
    uStack_98 = 0x800000010ef32ea0;
    uStack_b8 = 0x800000010ef32ea0;
    uStack_b0 = extraout_x13;
    func_0x000107c615f0(param_1);
    func_0x000107c5fb78(0xd000000000000018,0x800000010ef32ec0);
    uVar7 = uStack_98;
    func_0x000107c5edd0(lVar16,puStack_a0,uStack_98);
    func_0x000107c6142c(uVar7);
    pcVar19 = *(code **)(lVar13 + 0x30);
    lVar2 = lVar16;
    (*pcVar19)(lVar16,1,lVar1);
    if ((int)lVar2 == 1) {
      func_0x000107c615e8(param_1);
      func_0x00010129d314(lVar16,0x112d36580,&UNK_10d9016d0);
    }
    else {
      pcStack_c0 = *(code **)(lVar13 + 0x20);
      (*pcStack_c0)(lVar12,lVar16,lVar1);
      puVar11 = *(undefined1 **)(unaff_x20 + _DAT_112d6e978);
      func_0x000107c6157c(puVar11);
      func_0x0001000d224c(&puStack_a0);
      func_0x000107c61574(puVar11);
      puVar6 = puStack_a0;
      if (puStack_a0 != (undefined1 *)0x0) {
        uVar17 = param_1;
        func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_loadURLRequest_withCookies__112604b68);
        if ((uVar17 & 1) == 0) {
          func_0x000107c615e8(puVar6);
          puVar11 = puVar6;
        }
        else {
          puVar3 = &UNK_11039c020;
          func_0x000107c613fc(&UNK_11039c020,0x18,7);
          *(ulong *)(puVar3 + 0x10) = param_1;
          puVar4 = &UNK_11039c048;
          func_0x000107c613fc(&UNK_11039c048,0x20,7);
          *(undefined8 *)(puVar4 + 0x10) = 0x10129cd7c;
          *(undefined **)(puVar4 + 0x18) = puVar3;
          puStack_a0 = (undefined1 *)0xd00000000000001d;
          uStack_98 = uStack_b8;
          pcStack_c8 = pcVar19;
          func_0x000107c615f0(param_1);
          func_0x000107c5fb78(0xd00000000000001c,0x800000010ef33060);
          uVar7 = uStack_98;
          func_0x000107c5edd0(puVar5,puStack_a0,uStack_98);
          func_0x000107c6142c(uVar7);
          puVar11 = puVar5;
          (*pcStack_c8)(puVar5,1,lVar1);
          if ((int)puVar11 != 1) {
            uVar7 = uStack_b0;
            (*pcStack_c0)(uStack_b0,puVar5,lVar1);
            FUN_10129d088();
            uVar8 = 0;
            uStack_d8 = uVar7;
            func_0x00010129d3e8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
            func_0x000107c5ffdc();
            uStack_b8 = uVar8;
            func_0x000107c5ffdc();
            pcStack_e8 = *(code **)(lVar13 + 0x10);
            pcStack_c8 = (code *)uVar8;
            (*pcStack_e8)(lVar14,uStack_b0,lVar1);
            uVar20 = (ulong)*(byte *)(lVar13 + 0x50);
            uVar18 = uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff);
            puStack_d0 = puVar6;
            uVar17 = lVar15 + uVar18 + 7 & 0xfffffffffffffff8;
            ppuStack_e0 = (undefined **)(uVar17 + 0x10);
            puVar6 = &UNK_11039c070;
            func_0x000107c613fc(&UNK_11039c070,uVar17 + 0x18,uVar20 | 7);
            (*pcStack_c0)(puVar6 + uVar18,lVar14,lVar1);
            *(undefined8 *)(puVar6 + uVar17) = 0x10129cd8c;
            *(undefined **)((long)(puVar6 + uVar17) + 8) = puVar4;
            *(undefined8 *)(puVar6 + (long)ppuStack_e0) = uStack_d8;
            pcStack_80 = FUN_10129d254;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            pcStack_90 = FUN_100c75f50;
            puStack_88 = &UNK_11039c088;
            ppuVar9 = &puStack_a0;
            puStack_78 = puVar6;
            func_0x000107c60bc4();
            puVar6 = puStack_78;
            ppuStack_e0 = ppuVar9;
            func_0x000107c6157c(puVar4);
            func_0x000107c61174();
            func_0x000107c61574(puVar6);
            (*pcStack_e8)(lVar14,lVar12,lVar1);
            uVar17 = uVar20 + 0x18 & (uVar20 ^ 0xffffffffffffffff);
            puVar6 = &UNK_11039c0c0;
            func_0x000107c613fc(&UNK_11039c0c0,uVar17 + lVar15,uVar20 | 7);
            *(ulong *)(puVar6 + 0x10) = param_1;
            (*pcStack_c0)(puVar6 + uVar17,lVar14,lVar1);
            pcStack_80 = (code *)0x10129d2c4;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            pcStack_90 = (code *)0x1012519d0;
            puStack_88 = &UNK_11039c0d8;
            ppuVar10 = &puStack_a0;
            puStack_78 = puVar6;
            func_0x000107c60bc4(ppuVar10);
            puVar6 = puStack_78;
            func_0x000107c615f0(param_1);
            func_0x000107c61574(puVar6);
            uVar7 = uStack_b8;
            pcVar19 = pcStack_c8;
            puVar5 = puStack_d0;
            ppuVar9 = ppuStack_e0;
            func_0x000107c42f88(puStack_d0);
            func_0x000107c60bd0(ppuVar10);
            func_0x000107c60bd0(ppuVar9);
            func_0x000107c61574(puVar4);
            func_0x000107c61170(uStack_d8);
            func_0x000107c615e8(param_1);
            func_0x000107c615e8(puVar5);
            func_0x000107c61170(uVar7);
            func_0x000107c61170(pcVar19);
            pcVar19 = *(code **)(lVar13 + 8);
            (*pcVar19)(uStack_b0,lVar1);
            (*pcVar19)(lVar12,lVar1);
            return;
          }
          func_0x000107c615e8(puVar6);
          func_0x000107c61574(puVar4);
          func_0x00010129d314(puVar5,0x112d36580,&UNK_10d9016d0);
          puVar11 = puVar5;
        }
      }
      func_0x000107c5ed90();
      func_0x000107c4b788(param_1);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(puVar11);
      (**(code **)(lVar13 + 8))(lVar12,lVar1);
    }
  }
  return;
}



/* Entry: 10129c884; end: 10129c90b;  */

/* WARNING: Possible PIC construction at 0x00010129c8f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010129c8f4) */

void FUN_10129c884(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5eae0();
  if (param_2 != 0) {
    uVar1 = 0;
    func_0x00010129d3e8(0,0x112d6ea00,&PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0);
    func_0x000107c5fc48(param_2,uVar1);
  }
  (*param_3)(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10129c90c; end: 10129cbe3;  */

void FUN_10129c90c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_88 = param_6;
  uStack_80 = param_5;
  pcStack_78 = param_4;
  func_0x000107c5fb10();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eb08();
  lStack_98 = *(long *)(lVar3 + -8);
  lStack_90 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar10 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(lVar7,param_3,lVar2);
  func_0x000107c5eaec(lVar10,0x404e000000000000,lVar7,0);
  func_0x000107c5ead0(0x54534f50,0xe400000000000000);
  func_0x000107c5eaf8(param_1,param_2,0xd000000000000013,0x800000010ef33080);
  func_0x000107c5eaf8(0xd000000000000021,0x800000010ef330a0,0x2d746e65746e6f43,0xec00000065707954);
  lVar2 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61538();
  lVar3 = lVar2;
  func_0x0001001830b8();
  uVar5 = 0x112d38308;
  func_0x00010129d314(lVar2 + 0x20,0x112d38308,&UNK_10d902040);
  lVar2 = lVar3;
  FUN_10129d438();
  func_0x000107c6142c(lVar3);
  lStack_70 = lVar2;
  uStack_68 = uVar5;
  func_0x000107c5fb04(puVar11);
  FUN_100e8b654();
  uVar6 = 0;
  puVar4 = puVar11;
  func_0x000107c60214(puVar11,0,PTR___sSSN_11034da80,lVar3);
  (**(code **)(lVar9 + 8))(puVar11,lVar1);
  func_0x000107c6142c(uVar5);
  func_0x000107c5eb00(puVar4,uVar6);
  lVar2 = 0x112d6ea00;
  FUN_10129cd94(0x112d6ea00,&PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0,0x112d6e9f8,&UNK_10d9307e0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 3;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = uStack_88;
  func_0x000107c61174();
  (*pcStack_78)(lVar10,lVar2);
  func_0x000107c61574(lVar2);
  (**(code **)(lStack_98 + 8))(lVar10,lStack_90);
  return;
}



/* Entry: 10129cbe4; end: 10129cc43; -[_TtC22DmdNotificationHandler11DmdLauncher init] */

void FUN_10129cbe4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DmdNotificationHandler.DmdLauncher",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10129cc10);
  (*pcVar1)();
}



/* Entry: 10129cc44; end: 10129cc7b; -[_TtC22DmdNotificationHandler11DmdLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129cc44(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6e978));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6e980));
  return;
}



/* Entry: 10129cc7c; end: 10129cc9b;  */

void FUN_10129cc7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c1c90);
  return;
}



/* Entry: 10129cc9c; end: 10129ccbb;  */

void FUN_10129cc9c(void)

{
  FUN_10129bf94();
  return;
}



/* Entry: 10129ccbc; end: 10129cd3f; -[_TtC22DmdNotificationHandler11DmdLauncher webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010129ccf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129cd14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010129ccfc) */
/* WARNING: Removing unreachable block (ram,0x00010129cd18) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129ccbc(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10129cd40; end: 10129cd5f;  */

void FUN_10129cd40(void)

{
  FUN_10129c2ec();
  return;
}



/* Entry: 10129cd60; end: 10129cd93;  */

void FUN_10129cd60(long param_1,long param_2)

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



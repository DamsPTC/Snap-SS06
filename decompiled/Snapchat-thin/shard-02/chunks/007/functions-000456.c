/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102022c20; end: 102022c53;  */

void FUN_102022c20(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102022c54; end: 102022c8b; -[SCSCTopicViewerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102022c54(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e50ec8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50ed0));
  return;
}



/* Entry: 102022c8c; end: 102022cab;  */

void FUN_102022c8c(void)

{
  func_0x000107c61168(&PTR_PTR_112818b90);
  return;
}



/* Entry: 102022cac; end: 102022daf;  */

void FUN_102022cac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1104be948;
  func_0x000107c613fc(&UNK_1104be948,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcStack_50 = FUN_102022f84;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102022f8c;
  puStack_58 = &UNK_1104be960;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar4 = 0;
  func_0x000100324108(0);
  func_0x000107c610f8();
  func_0x00010202339c(puVar1,uVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 102022db0; end: 102022dc7;  */

void FUN_102022db0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_70;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_1104be948;
  func_0x000107c613fc(&UNK_1104be948,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  pcStack_50 = FUN_102022f84;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102022f8c;
  puStack_58 = &UNK_1104be960;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  func_0x000100324108(0);
  func_0x000107c610f8();
  func_0x00010202339c(puVar2,uVar5);
  *param_1 = puVar2;
  return;
}



/* Entry: 102022dc8; end: 102022f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102022dc8(void)

{
  char *pcVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar7 = lStack_48;
  lVar3 = *(long *)(lStack_48 + _DAT_113093a98);
  func_0x000107c61174();
  func_0x000107c61170(lVar7);
  lVar7 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar7 == 0) {
    pcVar1 = "[FriendingDebuggingImplServiceProvider] taskManagementServices is required";
    uVar8 = 0x14;
    uVar4 = 0xd00000000000004a;
  }
  else {
    uVar4 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010f059190);
    lVar3 = lVar7;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000100083b20(&lStack_48);
    lVar5 = lStack_48;
    func_0x000107c421c8();
    func_0x000107c61180();
    func_0x000107c61170(lStack_48);
    lVar6 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 != 0) {
      func_0x000107c615e8(lVar7);
      lVar7 = 0;
      func_0x0001020232e0();
      func_0x000107c613fc();
      *(long *)(lVar7 + 0x10) = lVar3;
      *(long *)(lVar7 + 0x18) = lVar6;
      return;
    }
    pcVar1 = "[FriendingDebuggingImplServiceProvider] docObjectContext is required";
    uVar8 = 0x1d;
    uVar4 = 0xd000000000000044;
  }
  func_0x000107c60450("Fatal error",0xb,2,uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                      "FriendingDebuggingServicesImpl/FriendingDebuggingImplServiceProvider.swift",
                      0x4a,2,uVar8,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102022f84);
  (*pcVar2)();
}



/* Entry: 102022f84; end: 102022f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102022f84(void)

{
  char *pcVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar7 = lStack_48;
  lVar3 = *(long *)(lStack_48 + _DAT_113093a98);
  func_0x000107c61174();
  func_0x000107c61170(lVar7);
  lVar7 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar7 == 0) {
    pcVar1 = "[FriendingDebuggingImplServiceProvider] taskManagementServices is required";
    uVar8 = 0x14;
    uVar4 = 0xd00000000000004a;
  }
  else {
    uVar4 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010f059190);
    lVar3 = lVar7;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000100083b20(&lStack_48);
    lVar5 = lStack_48;
    func_0x000107c421c8();
    func_0x000107c61180();
    func_0x000107c61170(lStack_48);
    lVar6 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 != 0) {
      func_0x000107c615e8(lVar7);
      lVar7 = 0;
      func_0x0001020232e0();
      func_0x000107c613fc();
      *(long *)(lVar7 + 0x10) = lVar3;
      *(long *)(lVar7 + 0x18) = lVar6;
      return;
    }
    pcVar1 = "[FriendingDebuggingImplServiceProvider] docObjectContext is required";
    uVar8 = 0x1d;
    uVar4 = 0xd000000000000044;
  }
  func_0x000107c60450("Fatal error",0xb,2,uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                      "FriendingDebuggingServicesImpl/FriendingDebuggingImplServiceProvider.swift",
                      0x4a,2,uVar8,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102022f84);
  (*pcVar2)();
}



/* Entry: 102022f8c; end: 102022fc3;  */

void FUN_102022f8c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102022fc4; end: 102022fdf;  */

void FUN_102022fc4(long param_1,long param_2)

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



/* Entry: 102022fe0; end: 102023153;  */

void FUN_102022fe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar6 = &puStack_90;
  puVar2 = &UNK_1104be9c0;
  func_0x000107c613fc(&UNK_1104be9c0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = 0x102023308;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ab3660;
  puStack_78 = &UNK_1104be9d8;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar5);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4f7c0(uVar4);
  func_0x000107c61180();
  puVar5 = &UNK_1104bea10;
  func_0x000107c613fc(&UNK_1104bea10,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  *(undefined **)(puVar5 + 0x20) = puVar2;
  uStack_70 = 0x10202332c;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ab47f8;
  puStack_78 = &UNK_1104bea28;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar5);
  func_0x000107c4e55c(uVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 102023154; end: 1020231a7;  */

void FUN_102023154(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000105b3f0ec();
  func_0x000107c61180();
  func_0x000107c61428(param_2 + 0x10,auStack_38,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1020231a8; end: 102023243;  */

void FUN_1020231a8(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [24];
  
  puVar2 = auStack_58;
  func_0x000107c61428(param_4 + 0x10,puVar2,0,0);
  lVar1 = *(long *)(param_4 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c44f38();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      goto LAB_10202321c;
    }
  }
  puVar2 = (undefined1 *)0x0;
LAB_10202321c:
  (*param_2)();
  func_0x000107c6142c(puVar2);
  return;
}



/* Entry: 102023244; end: 1020232b3; -[_TtC30FriendingDebuggingServicesImpl33FriendingDebuggingInfoFetcherImpl fetchDebuggingInfoForIncomingFriends:] */

/* WARNING: Possible PIC construction at 0x00010202329c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020232a0) */

void FUN_102023244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1104be998;
  func_0x000107c613fc(&UNK_1104be998,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c6157c(param_1);
  FUN_102022fe0(FUN_102023300,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1020232b4; end: 1020232ff;  */

void FUN_1020232b4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102023300; end: 10202333f;  */

void FUN_102023300(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102023340; end: 10202334f; -[FriendingDebuggingServices debuggingInfoFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102023340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e50fb0));
  return;
}



/* Entry: 102023350; end: 1020233e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102023350(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e50fb0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020233e8; end: 10202343f; -[FriendingDebuggingServices initWithDebuggingInfoFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020233e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e50fb0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102023440; end: 10202349f; -[FriendingDebuggingServices init] */

void FUN_102023440(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingDebuggingServices.FriendingDebuggingServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10202346c);
  (*pcVar1)();
}



/* Entry: 1020234a0; end: 1020234af; -[FriendingDebuggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020234a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50fb0));
  return;
}



/* Entry: 1020234b0; end: 10202351b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020234b0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1020238a4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e50fe8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10202351c; end: 102023587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202351c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e50fe8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102023588; end: 1020235e7; -[_TtC39FindFriendsScopedFactoryServiceProvider27SCFindFriendsScopedServices init] */

void FUN_102023588(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FindFriendsScopedFactoryServiceProvider.SCFindFriendsScopedServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020235b4);
  (*pcVar1)();
}



/* Entry: 1020235e8; end: 1020235f7; -[_TtC39FindFriendsScopedFactoryServiceProvider27SCFindFriendsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020235e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e50fe8));
  return;
}



/* Entry: 1020235f8; end: 102023663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020235f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104bec50;
  func_0x000107c613fc(&UNK_1104bec50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10202393c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102023664; end: 1020236ff;  */

void FUN_102023664(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104beb60;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104beb60;
  return;
}



/* Entry: 102023700; end: 102023737;  */

void FUN_102023700(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 102023738; end: 10202373f;  */

undefined8 FUN_102023738(void)

{
  return 0x1b;
}



/* Entry: 102023740; end: 102023873;  */

void FUN_102023740(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104bec78;
  func_0x000107c613fc(&UNK_1104bec78,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102023914;
  func_0x00010058fa64(FUN_102023914,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102023874; end: 1020238a3;  */

undefined ** FUN_102023874(void)

{
  return &PTR_DAT_112f3a858;
}



/* Entry: 1020238a4; end: 1020238c3;  */

void FUN_1020238a4(void)

{
  func_0x000107c61168(&PTR_PTR_112818d10);
  return;
}



/* Entry: 1020238c4; end: 102023913;  */

undefined1  [16] FUN_1020238c4(void)

{
  return ZEXT816(0x1104bebb0);
}



/* Entry: 102023914; end: 10202393b;  */

void FUN_102023914(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10202393c; end: 10202394f;  */

void FUN_10202393c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102023950; end: 102023dbf;  */

void FUN_102023950(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_68;
  
  uVar14 = *param_2;
  func_0x0001000285a8(0x112e51060,&UNK_10da50288);
  puVar1 = &uStack_68;
  uStack_68 = uVar14;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000102025628();
  pcVar3 = "SCContactPermissionRequestScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCContactPermissionRequestScopeExposerSubjectServiceProvider",0x3c,2);
  FUN_102025674();
  pcVar4 = "SCContactPermissionResumeScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCContactPermissionResumeScopeExposerSubjectServiceProvider",0x3b,2);
  FUN_1020256c0();
  func_0x000100082720("SCUserPhoneVerificationScopeExposerSubjectServiceProvider",0x39,2);
  puVar5 = puVar2;
  FUN_102025668();
  func_0x000100082720("SCContactPermissionRequestScopeExposerObservableServiceProvider",0x3f,2);
  pcVar6 = pcVar3;
  FUN_1020256b4();
  func_0x000100082720("SCContactPermissionResumeScopeExposerObservableServiceProvider",0x3e,2);
  pcVar7 = pcVar4;
  FUN_10202574c();
  func_0x000100082720("SCUserPhoneVerificationScopeExposerObservableServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar8 = FUN_102023700;
  func_0x0001000823a8(FUN_102023700,0);
  func_0x000100082720("SCFindFriendsScopedServicesCleanupRelayServiceProvider",0x36,2);
  puVar9 = puVar2;
  FUN_1020253c4(puVar2,pcVar3,pcVar4);
  func_0x000100082720("FindFriendsScopeGraphBridgeServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e51068,&UNK_10da502a0);
  puVar10 = &UNK_1104bed28;
  func_0x000107c613fc(&UNK_1104bed28,0x50,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 *)(puVar10 + 0x18) = param_3;
  *(undefined8 *)(puVar10 + 0x20) = param_4;
  *(undefined8 *)(puVar10 + 0x28) = param_5;
  *(undefined8 *)(puVar10 + 0x30) = param_6;
  *(undefined8 **)(puVar10 + 0x38) = puVar5;
  *(char **)(puVar10 + 0x40) = pcVar6;
  *(char **)(puVar10 + 0x48) = pcVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar7);
  uVar14 = 0x102023dcc;
  func_0x0001000823a8(0x102023dcc,puVar10);
  func_0x000100082720("SCFindFriendsEntryPointWrapperServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112e51070,&UNK_10da50290);
  puVar10 = &UNK_1104bed50;
  func_0x000107c613fc(&UNK_1104bed50,0x30,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 **)(puVar10 + 0x18) = puVar9;
  *(undefined8 *)(puVar10 + 0x20) = uVar14;
  *(code **)(puVar10 + 0x28) = pcVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(pcVar8);
  uVar11 = 0x102023de0;
  func_0x0001000823a8(0x102023de0,puVar10);
  func_0x000100082720("SCFindFriendsScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e50ff0,&UNK_10da50050);
  func_0x000107c6157c(uVar11);
  uVar12 = 0x102023dec;
  func_0x0001000823a8(0x102023dec,uVar11);
  func_0x000100082720("SCFindFriendsScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e50fe0,&UNK_10da50040);
  func_0x000107c6157c(uVar12);
  uVar13 = 0x102023df4;
  func_0x0001000823a8(0x102023df4,uVar12);
  func_0x000100082720("SCFindFriendsScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar10 = &UNK_1104bed78;
  func_0x000107c613fc(&UNK_1104bed78,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar13;
  *(code **)(puVar10 + 0x18) = pcVar8;
  func_0x000107c6157c(pcVar8);
  uVar13 = 0x102023dfc;
  func_0x0001000823a8(0x102023dfc,puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar12);
  func_0x000100082720("SCFindFriendsScopeEntryPointProvider",0x24,2);
  *param_1 = uVar13;
  return;
}



/* Entry: 102023dc0; end: 102023e03;  */

void FUN_102023dc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar15 = *param_2;
  func_0x0001000285a8(0x112e51060,&UNK_10da50288);
  puVar1 = &uStack_68;
  uStack_68 = uVar15;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000102025628();
  pcVar3 = "SCContactPermissionRequestScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCContactPermissionRequestScopeExposerSubjectServiceProvider",0x3c,2);
  FUN_102025674();
  pcVar4 = "SCContactPermissionResumeScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCContactPermissionResumeScopeExposerSubjectServiceProvider",0x3b,2);
  FUN_1020256c0();
  func_0x000100082720("SCUserPhoneVerificationScopeExposerSubjectServiceProvider",0x39,2);
  puVar5 = puVar2;
  FUN_102025668();
  func_0x000100082720("SCContactPermissionRequestScopeExposerObservableServiceProvider",0x3f,2);
  pcVar6 = pcVar3;
  FUN_1020256b4();
  func_0x000100082720("SCContactPermissionResumeScopeExposerObservableServiceProvider",0x3e,2);
  pcVar7 = pcVar4;
  FUN_10202574c();
  func_0x000100082720("SCUserPhoneVerificationScopeExposerObservableServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar8 = FUN_102023700;
  func_0x0001000823a8(FUN_102023700,0);
  func_0x000100082720("SCFindFriendsScopedServicesCleanupRelayServiceProvider",0x36,2);
  puVar9 = puVar2;
  FUN_1020253c4(puVar2,pcVar3,pcVar4);
  func_0x000100082720("FindFriendsScopeGraphBridgeServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e51068,&UNK_10da502a0);
  puVar10 = &UNK_1104bed28;
  func_0x000107c613fc(&UNK_1104bed28,0x50,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 *)(puVar10 + 0x18) = uVar11;
  *(undefined8 *)(puVar10 + 0x20) = uVar13;
  *(undefined8 *)(puVar10 + 0x28) = uVar12;
  *(undefined8 *)(puVar10 + 0x30) = uVar14;
  *(undefined8 **)(puVar10 + 0x38) = puVar5;
  *(char **)(puVar10 + 0x40) = pcVar6;
  *(char **)(puVar10 + 0x48) = pcVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar7);
  uVar11 = 0x102023dcc;
  func_0x0001000823a8(0x102023dcc,puVar10);
  func_0x000100082720("SCFindFriendsEntryPointWrapperServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112e51070,&UNK_10da50290);
  puVar10 = &UNK_1104bed50;
  func_0x000107c613fc(&UNK_1104bed50,0x30,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 **)(puVar10 + 0x18) = puVar9;
  *(undefined8 *)(puVar10 + 0x20) = uVar11;
  *(code **)(puVar10 + 0x28) = pcVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(pcVar8);
  uVar12 = 0x102023de0;
  func_0x0001000823a8(0x102023de0,puVar10);
  func_0x000100082720("SCFindFriendsScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e50ff0,&UNK_10da50050);
  func_0x000107c6157c(uVar12);
  uVar13 = 0x102023dec;
  func_0x0001000823a8(0x102023dec,uVar12);
  func_0x000100082720("SCFindFriendsScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e50fe0,&UNK_10da50040);
  func_0x000107c6157c(uVar13);
  uVar14 = 0x102023df4;
  func_0x0001000823a8(0x102023df4,uVar13);
  func_0x000100082720("SCFindFriendsScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar10 = &UNK_1104bed78;
  func_0x000107c613fc(&UNK_1104bed78,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar14;
  *(code **)(puVar10 + 0x18) = pcVar8;
  func_0x000107c6157c(pcVar8);
  uVar14 = 0x102023dfc;
  func_0x0001000823a8(0x102023dfc,puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar13);
  func_0x000100082720("SCFindFriendsScopeEntryPointProvider",0x24,2);
  *param_1 = uVar14;
  return;
}



/* Entry: 102023e04; end: 10202487b;  */

void FUN_102023e04(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  FUN_1020249fc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_70;
  *(undefined8 *)(param_2 + 0x38) = uStack_78;
  *(undefined8 *)(param_2 + 0x40) = uStack_80;
  *(undefined8 *)(param_2 + 0x48) = uStack_88;
  func_0x0001000285a8(0x112e51078,&UNK_10da502a8);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x18) = puVar6;
  func_0x0001000285a8(0x112e51080,&UNK_10da502b0);
  func_0x000107c610f8();
  uVar5 = uStack_98;
  func_0x000107c6157c(uStack_98);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x20) = puVar7;
  func_0x0001000285a8(0x112e51088,&UNK_10db59590);
  func_0x000107c610f8();
  uVar5 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x28) = puVar8;
  puVar9 = PTR_PTR_1126a9e08;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0594a0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar9);
  uVar10 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef220b0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar9);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar9);
  uVar10 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0594c0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar9);
  uVar10 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef2d2e0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar6);
  uVar10 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0594f0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f059520);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f059550);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_90);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_a0);
  *param_1 = param_2;
  return;
}



/* Entry: 10202487c; end: 1020248ef;  */

void FUN_10202487c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1020248f0; end: 1020248f7;  */

undefined8 FUN_1020248f0(void)

{
  return 0x1b;
}



/* Entry: 1020248f8; end: 10202497b;  */

void FUN_1020248f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102024a3c,param_2,FUN_102024a40,param_2,FUN_102024a68,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10202497c; end: 1020249cb;  */

undefined8 FUN_10202497c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1020249cc; end: 1020249fb;  */

undefined ** FUN_1020249cc(void)

{
  return &PTR_DAT_112f3a858;
}



/* Entry: 1020249fc; end: 102024a1b;  */

void FUN_1020249fc(void)

{
  func_0x000107c61168(&PTR_PTR_112e510f8);
  return;
}



/* Entry: 102024a1c; end: 102024a3f;  */

undefined1  [16] FUN_102024a1c(void)

{
  return ZEXT816(0x1104bedd0);
}



/* Entry: 102024a40; end: 102024a67;  */

void FUN_102024a40(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102024a68; end: 102024a6f;  */

undefined8 FUN_102024a68(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102024a70; end: 102024aab;  */

void FUN_102024a70(undefined8 *param_1,undefined8 param_2)

{
  FUN_102024aac();
  func_0x0001000a7f38("SCFindFriendsScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102024aac; end: 102024c97;  */

void FUN_102024aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11060a2d0;
  ppuVar4 = &PTR_DAT_112f3a858;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104bee20;
  func_0x000107c613fc(&UNK_1104bee20,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e51190;
  func_0x0001000285a8(0x112e51190,&UNK_10da503f0);
  func_0x0001000a6ee8(&UNK_1104bf0c0,"FindFriendsScopeGraphBridgeScopeInitializationPluginKey",0x37,
                      2,FUN_102024c98,puVar2,uVar3,&UNK_1104bf0c0,&PTR_DAT_112e51238);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104bedd0,"SCFindFriendsEntryPointWrapperScopeInitializationPluginKey",
                      0x3a,2,FUN_102024d4c,param_3,uVar3,&UNK_1104bedd0,&PTR_DAT_112e51090);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104bee48;
  func_0x000107c613fc(&UNK_1104bee48,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104bebf0,"SCFindFriendsScopedServicesScopeInitializationPluginKey",0x37,
                      2,FUN_102024dfc,puVar2,uVar3,&UNK_1104bebf0,&PTR_DAT_112e50ff8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e51198;
  func_0x0001000285a8(0x112e51198,&UNK_10da503f8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102024c98; end: 102024cd7;  */

void FUN_102024c98(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1020257ec(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("FindFriendsScopeGraphBridgeScopeInitializationPluginProvider",0x3c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102024cd8; end: 102024d4b;  */

void FUN_102024cd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102024e38;
  func_0x0001000823a8(0x102024e38,param_3);
  func_0x000100082720("SCFindFriendsEntryPointWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102024d4c; end: 102024d53;  */

void FUN_102024d4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102024e38;
  func_0x0001000823a8();
  func_0x000100082720("SCFindFriendsEntryPointWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102024d54; end: 102024dfb;  */

void FUN_102024d54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bee70;
  func_0x000107c613fc(&UNK_1104bee70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102024e30;
  func_0x0001000823a8(FUN_102024e30,puVar1);
  func_0x000100082720("SCFindFriendsScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102024dfc; end: 102024e03;  */

void FUN_102024dfc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104bee70;
  func_0x000107c613fc(&UNK_1104bee70,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102024e30;
  func_0x0001000823a8(FUN_102024e30,puVar3);
  func_0x000100082720("SCFindFriendsScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102024e04; end: 102024e2f;  */

void FUN_102024e04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102024e30; end: 102024e3f;  */

void FUN_102024e30(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104bec78;
  func_0x000107c613fc(&UNK_1104bec78,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102023914;
  func_0x00010058fa64(FUN_102023914,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102024e40; end: 102024f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102024e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_1020252d4();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112e511a0) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e511a8) = param_5;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102024f9c);
  (*pcVar2)();
}



/* Entry: 102024f9c; end: 102024ffb; -[_TtC27FindFriendsScopeGraphBridge42FindFriendsScopeGraphBridgeSaberEntryPoint init] */

void FUN_102024f9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FindFriendsScopeGraphBridge.FindFriendsScopeGraphBridgeSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102024fc8);
  (*pcVar1)();
}



/* Entry: 102024ffc; end: 102025033; -[_TtC27FindFriendsScopeGraphBridge42FindFriendsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102025018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010202501c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102024ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e511a0));
  return;
}



/* Entry: 102025034; end: 10202505b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102025034(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e511a8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e511a0));
  return;
}



/* Entry: 10202505c; end: 10202507b;  */

void FUN_10202505c(void)

{
  func_0x000107c61168(&PTR_PTR_112818dd0);
  return;
}



/* Entry: 10202507c; end: 102025103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10202507c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e511d8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e511e0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102025104);
  (*pcVar2)();
}



/* Entry: 102025104; end: 1020251eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102025104(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e511d8);
  *(undefined **)(unaff_x20 + _DAT_112e511d8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e511e0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e511e0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104bef38;
  func_0x000107c613fc(&UNK_1104bef38,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1020251f0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1020251ec; end: 1020251f7;  */

void FUN_1020251ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1020251f8; end: 102025257; -[_TtC27FindFriendsScopeGraphBridge42SCFindFriendsScopedServicesSaberEntryPoint init] */

void FUN_1020251f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FindFriendsScopeGraphBridge.SCFindFriendsScopedServicesSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102025224);
  (*pcVar1)();
}



/* Entry: 102025258; end: 10202528f; -[_TtC27FindFriendsScopeGraphBridge42SCFindFriendsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102025258(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e511e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e511d8));
  return;
}



/* Entry: 102025290; end: 102025293;  */

void FUN_102025290(void)

{
  return;
}



/* Entry: 102025294; end: 1020252b3;  */

void FUN_102025294(void)

{
  FUN_102025104();
  return;
}



/* Entry: 1020252b4; end: 1020252d3;  */

void FUN_1020252b4(void)

{
  func_0x000107c61168(&PTR_PTR_112818e98);
  return;
}



/* Entry: 1020252d4; end: 1020253a3;  */

undefined8 FUN_1020252d4(void)

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
  
  func_0x000107c61428(0x112e51210,&uStack_40,0x20,0);
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
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1020253a4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1020253a4; end: 1020253c3;  */

void FUN_1020253a4(void)

{
  func_0x000107c61168(&PTR_PTR_112818f60);
  return;
}



/* Entry: 1020253c4; end: 1020254ff;  */

void FUN_1020253c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e51218,&UNK_10da504a8);
  puVar1 = &UNK_1104bef80;
  func_0x000107c613fc(&UNK_1104bef80,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102025500,puVar1);
  return;
}



/* Entry: 102025500; end: 10202550b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102025500(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_1020253a4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e51220) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e51228) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112e51230) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 10202550c; end: 10202557f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202550c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e51220) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e51228) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e51230) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102025580; end: 1020255df; -[_TtC27FindFriendsScopeGraphBridge35FindFriendsScopeGraphBridgeServices init] */

void FUN_102025580(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FindFriendsScopeGraphBridge.FindFriendsScopeGraphBridgeServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020255ac);
  (*pcVar1)();
}



/* Entry: 1020255e0; end: 102025667; -[_TtC27FindFriendsScopeGraphBridge35FindFriendsScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020255fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102025600) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020255e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e51220));
  return;
}



/* Entry: 102025668; end: 102025673;  */

void FUN_102025668(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102025a80,param_1);
  return;
}



/* Entry: 102025674; end: 1020256b3;  */

void FUN_102025674(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102025a8c,0);
  return;
}



/* Entry: 1020256b4; end: 1020256bf;  */

void FUN_1020256b4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102025a84,param_1);
  return;
}



/* Entry: 1020256c0; end: 10202574b;  */

void FUN_1020256c0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102025a90,0);
  return;
}



/* Entry: 10202574c; end: 102025757;  */

void FUN_10202574c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1020257b0,param_1);
  return;
}



/* Entry: 102025758; end: 1020257af;  */

void FUN_102025758(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1020257b0; end: 1020257e3;  */

void FUN_1020257b0(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1020257e4; end: 1020257eb;  */

undefined8 FUN_1020257e4(void)

{
  return 0x1b;
}



/* Entry: 1020257ec; end: 102025963;  */

void FUN_1020257ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104befa8;
  func_0x000107c613fc(&UNK_1104befa8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102025964,puVar1);
  return;
}



/* Entry: 102025964; end: 10202596b;  */

void FUN_102025964(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e51210,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e51210,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104bf100;
  func_0x000107c613fc(&UNK_1104bf100,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102025a78;
  func_0x00010058fa64(0x102025a78,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10202596c; end: 1020259c7;  */

void FUN_10202596c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e51210,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e51210,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1020259c8; end: 102025a93;  */

undefined ** FUN_1020259c8(void)

{
  return &PTR_DAT_112f3a858;
}



/* Entry: 102025a94; end: 102025adb; -[SCFindFriendsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102025a94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e51288;
  func_0x000107c61428(param_1 + _DAT_112e51288,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102025adc; end: 102025b33; -[SCFindFriendsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102025adc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e51288;
  func_0x000107c61428(param_1 + _DAT_112e51288,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102025b34; end: 102025b7b; -[SCFindFriendsScopeGraphBridgeSaberEntryPoint sCContactPermissionRequestScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102025b34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e51290;
  func_0x000107c61428(param_1 + _DAT_112e51290,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102025b7c; end: 102025b87; -[SCFindFriendsScopeGraphBridgeSaberEntryPoint setSCContactPermissionRequestScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102025b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e51290;
  func_0x000107c61428(param_1 + _DAT_112e51290,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102025b88; end: 102025bcf; -[SCFindFriendsScopeGraphBridgeSaberEntryPoint sCContactPermissionResumeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102025b88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e51298;
  func_0x000107c61428(param_1 + _DAT_112e51298,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102025bd0; end: 102025bdb; -[SCFindFriendsScopeGraphBridgeSaberEntryPoint setSCContactPermissionResumeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102025bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e51298;
  func_0x000107c61428(param_1 + _DAT_112e51298,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102025bdc; end: 102025c23; -[SCFindFriendsScopeGraphBridgeSaberEntryPoint sCUserPhoneVerificationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102025bdc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e512a0;
  func_0x000107c61428(param_1 + _DAT_112e512a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102025c24; end: 102025c2f; -[SCFindFriendsScopeGraphBridgeSaberEntryPoint setSCUserPhoneVerificationScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102025c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e512a0;
  func_0x000107c61428(param_1 + _DAT_112e512a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102025c30; end: 102025c77; -[SCFindFriendsScopeGraphBridgeSaberEntryPoint findFriendsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102025c30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e512a8;
  func_0x000107c61428(param_1 + _DAT_112e512a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102025c78; end: 102025c83; -[SCFindFriendsScopeGraphBridgeSaberEntryPoint setFindFriendsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102025c78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e512a8;
  func_0x000107c61428(param_1 + _DAT_112e512a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102025c84; end: 102025ce3;  */

void FUN_102025c84(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102025ce4; end: 102025fa7;  */

/* WARNING: Possible PIC construction at 0x000102025eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102025ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102025ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102025ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102025f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102025f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102025f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102025f5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102025f80) */
/* WARNING: Removing unreachable block (ram,0x000102025f70) */
/* WARNING: Removing unreachable block (ram,0x000102025f04) */
/* WARNING: Removing unreachable block (ram,0x000102025ef4) */
/* WARNING: Removing unreachable block (ram,0x000102025ee4) */
/* WARNING: Removing unreachable block (ram,0x000102025ec0) */
/* WARNING: Removing unreachable block (ram,0x000102025eb0) */
/* WARNING: Removing unreachable block (ram,0x000102025f60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102025ce4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c50c38();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50c3c();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c51550();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        func_0x000107c43560();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          lVar6 = 0;
          FUN_10202505c();
          lVar4 = lVar6;
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          lVar5 = lVar3;
          FUN_1020252d4();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102025fa8);
            (*pcVar2)();
          }
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uStack_68);
          *(long *)(lVar4 + _DAT_112e511a0) = lVar5;
          *(long *)(lVar4 + _DAT_112e511a8) = unaff_x20;
          lStack_80 = lVar4;
          lStack_78 = lVar6;
          func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102025fa8; end: 102025fcf; -[SCFindFriendsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102025fa8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102025ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



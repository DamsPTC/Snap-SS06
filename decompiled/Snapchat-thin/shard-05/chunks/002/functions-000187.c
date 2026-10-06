/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c635ac; end: 103c635bb;  */

void FUN_103c635ac(undefined8 *param_1)

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
  puVar1 = &UNK_1106f0970;
  func_0x000107c613fc(&UNK_1106f0970,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103c62b44;
  func_0x00010058fa64(FUN_103c62b44,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103c635bc; end: 103c63643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c635bc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_103c6397c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ffc780) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ffc788) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c63644);
  (*pcVar1)();
}



/* Entry: 103c63644; end: 103c636a3; -[_TtC30AddFriendsTrayScopeGraphBridge45AddFriendsTrayScopeGraphBridgeSaberEntryPoint init] */

void FUN_103c63644(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsTrayScopeGraphBridge.AddFriendsTrayScopeGraphBridgeSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c63670);
  (*pcVar1)();
}



/* Entry: 103c636a4; end: 103c636db; -[_TtC30AddFriendsTrayScopeGraphBridge45AddFriendsTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c636c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c636c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c636a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ffc780));
  return;
}



/* Entry: 103c636dc; end: 103c63703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c636dc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ffc788),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ffc780));
  return;
}



/* Entry: 103c63704; end: 103c63723;  */

void FUN_103c63704(void)

{
  func_0x000107c61168(&PTR_PTR_112949b60);
  return;
}



/* Entry: 103c63724; end: 103c637ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c63724(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ffc7b8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ffc7c0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c637ac);
  (*pcVar2)();
}



/* Entry: 103c637ac; end: 103c63893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103c637ac(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ffc7b8);
  *(undefined **)(unaff_x20 + _DAT_112ffc7b8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ffc7c0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ffc7c0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1106f0c38;
  func_0x000107c613fc(&UNK_1106f0c38,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x103c63898,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 103c63894; end: 103c6389f;  */

void FUN_103c63894(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103c638a0; end: 103c638ff; -[_TtC30AddFriendsTrayScopeGraphBridge43AddFriendsTrayScopedServicesSaberEntryPoint init] */

void FUN_103c638a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsTrayScopeGraphBridge.AddFriendsTrayScopedServicesSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c638cc);
  (*pcVar1)();
}



/* Entry: 103c63900; end: 103c63937; -[_TtC30AddFriendsTrayScopeGraphBridge43AddFriendsTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c63900(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ffc7c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ffc7b8));
  return;
}



/* Entry: 103c63938; end: 103c6393b;  */

void FUN_103c63938(void)

{
  return;
}



/* Entry: 103c6393c; end: 103c6395b;  */

void FUN_103c6393c(void)

{
  FUN_103c637ac();
  return;
}



/* Entry: 103c6395c; end: 103c6397b;  */

void FUN_103c6395c(void)

{
  func_0x000107c61168(&PTR_PTR_112949c28);
  return;
}



/* Entry: 103c6397c; end: 103c63a4b;  */

undefined8 FUN_103c6397c(void)

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
  
  func_0x000107c61428(0x112ffc7f0,&uStack_40,0x20,0);
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
    FUN_103c63a4c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103c63a4c; end: 103c63a6b;  */

void FUN_103c63a4c(void)

{
  func_0x000107c61168(&PTR_PTR_112949cf0);
  return;
}



/* Entry: 103c63a6c; end: 103c63ad7;  */

void FUN_103c63a6c(void)

{
  func_0x0001000285a8(0x112ffc7f8,&UNK_10dc6b1b8);
  func_0x0001000823a8(0x103c63aac,0);
  return;
}



/* Entry: 103c63ad8; end: 103c63b13; -[_TtC30AddFriendsTrayScopeGraphBridge38AddFriendsTrayScopeGraphBridgeServices init] */

void FUN_103c63ad8(undefined8 param_1)

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



/* Entry: 103c63b14; end: 103c63b47;  */

void FUN_103c63b14(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c63b48; end: 103c63b4f;  */

undefined8 FUN_103c63b48(void)

{
  return 0x1b;
}



/* Entry: 103c63b50; end: 103c63cc7;  */

void FUN_103c63b50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106f0c80;
  func_0x000107c613fc(&UNK_1106f0c80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103c63cc8,puVar1);
  return;
}



/* Entry: 103c63cc8; end: 103c63ccf;  */

void FUN_103c63cc8(undefined8 *param_1)

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
  func_0x000107c61428(0x112ffc7f0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ffc7f0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1106f0d18;
  func_0x000107c613fc(&UNK_1106f0d18,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103c63d7c;
  func_0x00010058fa64(0x103c63d7c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103c63cd0; end: 103c63d2b;  */

void FUN_103c63cd0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ffc7f0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ffc7f0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103c63d2c; end: 103c63d83;  */

undefined ** FUN_103c63d2c(void)

{
  return &PTR_DAT_1130664f0;
}



/* Entry: 103c63d84; end: 103c63dcb; -[SCAddFriendsTrayScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c63d84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ffc850;
  func_0x000107c61428(param_1 + _DAT_112ffc850,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c63dcc; end: 103c63e23; -[SCAddFriendsTrayScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c63dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ffc850;
  func_0x000107c61428(param_1 + _DAT_112ffc850,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103c63e24; end: 103c63e6b; -[SCAddFriendsTrayScopeGraphBridgeSaberEntryPoint addFriendsTrayScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c63e24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ffc858;
  func_0x000107c61428(param_1 + _DAT_112ffc858,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103c63e6c; end: 103c63ecf; -[SCAddFriendsTrayScopeGraphBridgeSaberEntryPoint setAddFriendsTrayScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c63e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ffc858;
  func_0x000107c61428(param_1 + _DAT_112ffc858,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103c63ed0; end: 103c64003;  */

/* WARNING: Possible PIC construction at 0x000103c63f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c63fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c63fc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c63f8c) */
/* WARNING: Removing unreachable block (ram,0x000103c63fa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c63ed0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c3d6f4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_103c63704();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_103c6397c();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c64004);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112ffc780) = lVar5;
    *(long *)(lVar4 + _DAT_112ffc788) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 103c64004; end: 103c6402b; -[SCAddFriendsTrayScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103c64004(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103c63ed0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c6402c; end: 103c6406f; -[SCAddFriendsTrayScopeGraphBridgeSaberEntryPoint end] */

void FUN_103c6402c(undefined8 param_1)

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



/* Entry: 103c64070; end: 103c64207;  */

void FUN_103c64070(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e4e1c0)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f1b1e40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AddFriendsTrayScopeGraphBridge/SCAddFriendsTrayScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x54,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c64208);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c524a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103c64208; end: 103c642b3; -[SCAddFriendsTrayScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_103c64208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103c64070(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103c642b4; end: 103c6431f; -[SCAddFriendsTrayScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c642b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ffc850,0);
  *(undefined8 *)(param_1 + _DAT_112ffc858) = 0;
  *(undefined8 *)(param_1 + _DAT_112ffc860) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c64320; end: 103c64353;  */

void FUN_103c64320(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c64354; end: 103c6439b; -[SCAddFriendsTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c64380: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c64384) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c64354(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ffc850);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ffc858));
  return;
}



/* Entry: 103c6439c; end: 103c643bb;  */

void FUN_103c6439c(void)

{
  func_0x000107c61168(&PTR_PTR_112949da0);
  return;
}



/* Entry: 103c643bc; end: 103c64403; -[SCAddFriendsTrayScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c643bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ffc890;
  func_0x000107c61428(param_1 + _DAT_112ffc890,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c64404; end: 103c6445b; -[SCAddFriendsTrayScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c64404(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ffc890;
  func_0x000107c61428(param_1 + _DAT_112ffc890,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103c6445c; end: 103c64533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c6445c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_103c6395c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ffc7b8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c64534);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ffc7c0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ffc898);
    *(long **)(unaff_x20 + _DAT_112ffc898) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103c64534; end: 103c6455b; -[SCAddFriendsTrayScopedServicesSaberEntryPoint begin] */

void FUN_103c64534(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103c6445c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c6455c; end: 103c646d3;  */

/* WARNING: Possible PIC construction at 0x000103c645c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c6465c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c645c8) */
/* WARNING: Removing unreachable block (ram,0x000103c64660) */
/* WARNING: Removing unreachable block (ram,0x000103c64678) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c6455c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ffc898);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 103c646d4; end: 103c646db;  */

void FUN_103c646d4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103c646dc; end: 103c6470f; -[SCAddFriendsTrayScopedServicesSaberEntryPoint end] */

void FUN_103c646dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103c6455c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103c64710; end: 103c6482f;  */

void FUN_103c64710(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "AddFriendsTrayScopeGraphBridge/SCAddFriendsTrayScopedServicesSaberEntryPoint.swift"
                        ,0x52,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c64830);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103c64830; end: 103c648db; -[SCAddFriendsTrayScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_103c64830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103c64710(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103c648dc; end: 103c6493b; -[SCAddFriendsTrayScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c648dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ffc890,0);
  *(undefined8 *)(param_1 + _DAT_112ffc898) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c6493c; end: 103c6496f;  */

void FUN_103c6493c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c64970; end: 103c649a7; -[SCAddFriendsTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c64970(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ffc890);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ffc898));
  return;
}



/* Entry: 103c649a8; end: 103c649c7;  */

void FUN_103c649a8(void)

{
  func_0x000107c61168(&PTR_PTR_112949e68);
  return;
}



/* Entry: 103c649c8; end: 103c649cf;  */

void FUN_103c649c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 103c649d0; end: 103c64a83;  */

undefined1 * FUN_103c649d0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103c64a84; end: 103c64b23;  */

int FUN_103c64a84(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c64b24; end: 103c64b63;  */

void FUN_103c64b24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 103c64b64; end: 103c64b73;  */

void FUN_103c64b64(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 103c64b74; end: 103c64d43;  */

/* WARNING: Possible PIC construction at 0x000103c64c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c64cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c64d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c64d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c64cf0) */
/* WARNING: Removing unreachable block (ram,0x000103c64c8c) */
/* WARNING: Removing unreachable block (ram,0x000103c64d04) */
/* WARNING: Removing unreachable block (ram,0x000103c64d20) */
/* WARNING: Removing unreachable block (ram,0x000103c64d0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c64b74(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(lVar5 + _DAT_11306f4a0);
  uVar4 = ((undefined8 *)(lVar5 + _DAT_11306f4a0))[1];
  uVar1 = *(undefined1 *)(lVar5 + _DAT_11306f498);
  FUN_103c67af4(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar4);
  FUN_103c65ef0(uVar1,uVar3,uVar4);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_113083868);
  uVar4 = *(undefined8 *)(lVar5 + _DAT_11306f4a8);
  lVar5 = 0;
  func_0x000103c684b4();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126ada20;
  func_0x000107c610f8();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c453e4();
  *(undefined **)(lVar5 + 0x20) = puVar2;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined1 *)(lVar5 + 0x30) = 1;
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  func_0x0001000bda74(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103c64d44; end: 103c64d77;  */

void FUN_103c64d44(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c64d78; end: 103c64d97;  */

void FUN_103c64d78(void)

{
  FUN_103c64b74();
  return;
}



/* Entry: 103c64d98; end: 103c64d9f;  */

undefined8 FUN_103c64d98(void)

{
  return 0;
}



/* Entry: 103c64da0; end: 103c64dbf;  */

void FUN_103c64da0(void)

{
  func_0x000107c61168(&PTR_PTR_112ffc908);
  return;
}



/* Entry: 103c64dc0; end: 103c64e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c64dc0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ffc9a8);
  if (lVar1 != 0) {
    func_0x000107c61168();
    func_0x000107c615f0(lVar1);
    func_0x000107c41570();
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170();
  }
  func_0x000103c65934();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c64e54; end: 103c64eff; -[_TtC21AddFriendsTrayFeature20AddFriendsTrayRouter dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c64e54(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_40;
  undefined *puStack_38;
  
  lVar2 = *(long *)(param_1 + _DAT_112ffc9a8);
  if (lVar2 == 0) {
    puVar1 = param_1;
    func_0x000107c61174();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168();
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar2);
    func_0x000107c41570();
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170();
  }
  func_0x000103c65934();
  puStack_40 = param_1;
  puStack_38 = puVar1;
  func_0x000107c61154(&puStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c64f00; end: 103c64f67; -[_TtC21AddFriendsTrayFeature20AddFriendsTrayRouter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c64f00(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ffc978));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ffc980));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ffc988));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ffc990));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ffc9a8));
  return;
}



/* Entry: 103c64f68; end: 103c654e7;  */

/* WARNING: Possible PIC construction at 0x000103c64ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c65018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c65078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c650bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c650e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c6528c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c65370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c65424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c65458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c65428) */
/* WARNING: Removing unreachable block (ram,0x000103c65374) */
/* WARNING: Removing unreachable block (ram,0x000103c654dc) */
/* WARNING: Removing unreachable block (ram,0x000103c653e4) */
/* WARNING: Removing unreachable block (ram,0x000103c653f0) */
/* WARNING: Removing unreachable block (ram,0x000103c653f4) */
/* WARNING: Removing unreachable block (ram,0x000103c654e0) */
/* WARNING: Removing unreachable block (ram,0x000103c653f8) */
/* WARNING: Removing unreachable block (ram,0x000103c65400) */
/* WARNING: Removing unreachable block (ram,0x000103c65404) */
/* WARNING: Removing unreachable block (ram,0x000103c654e4) */
/* WARNING: Removing unreachable block (ram,0x000103c65408) */
/* WARNING: Removing unreachable block (ram,0x000103c65290) */
/* WARNING: Removing unreachable block (ram,0x000103c650e4) */
/* WARNING: Removing unreachable block (ram,0x000103c65454) */
/* WARNING: Removing unreachable block (ram,0x000103c650e8) */
/* WARNING: Removing unreachable block (ram,0x000103c650c0) */
/* WARNING: Removing unreachable block (ram,0x000103c650c4) */
/* WARNING: Removing unreachable block (ram,0x000103c6507c) */
/* WARNING: Removing unreachable block (ram,0x000103c65088) */
/* WARNING: Removing unreachable block (ram,0x000103c6501c) */
/* WARNING: Removing unreachable block (ram,0x000103c65468) */
/* WARNING: Removing unreachable block (ram,0x000103c65470) */
/* WARNING: Removing unreachable block (ram,0x000103c65028) */
/* WARNING: Removing unreachable block (ram,0x000103c65480) */
/* WARNING: Removing unreachable block (ram,0x000103c65034) */
/* WARNING: Removing unreachable block (ram,0x000103c65040) */
/* WARNING: Removing unreachable block (ram,0x000103c6508c) */
/* WARNING: Removing unreachable block (ram,0x000103c65044) */
/* WARNING: Removing unreachable block (ram,0x000103c65464) */
/* WARNING: Removing unreachable block (ram,0x000103c65050) */
/* WARNING: Removing unreachable block (ram,0x000103c6505c) */
/* WARNING: Removing unreachable block (ram,0x000103c65460) */
/* WARNING: Removing unreachable block (ram,0x000103c65068) */
/* WARNING: Removing unreachable block (ram,0x000103c6509c) */
/* WARNING: Removing unreachable block (ram,0x000103c65074) */
/* WARNING: Removing unreachable block (ram,0x000103c64ffc) */
/* WARNING: Removing unreachable block (ram,0x000103c6545c) */
/* WARNING: Removing unreachable block (ram,0x000103c65488) */

void FUN_103c64f68(void)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c5e408();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 103c654e8; end: 103c65693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c654e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112ffc998) = 4;
    func_0x000107c61170();
  }
  func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112ffc9a0) = 1;
    func_0x000107c61170();
  }
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112ffc980);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lVar1);
    uVar2 = 0;
    func_0x000104337e94(0);
    func_0x000104337a50();
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_90,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112ffc990);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar1);
    FUN_103c67df0();
    func_0x000107c61574(uVar3);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_a8,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112ffc988);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(param_1);
    func_0x000107c42018(uVar3);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 103c65694; end: 103c65743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c65694(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112ffc998) = 2;
    func_0x000107c61170();
  }
  func_0x000107c61428(param_1 + 0x10,auStack_50,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ffc988);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c42018(uVar2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 103c65744; end: 103c6588b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c65744(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112ffc998) = 5;
    func_0x000107c61170();
  }
  func_0x000107c61428(param_3 + 0x10,auStack_70,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112ffc980);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lVar1);
    uVar2 = 0;
    func_0x000104337e94(0);
    FUN_104337b1c(param_1,param_2,uVar2);
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_3 + _DAT_112ffc988);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(param_3);
    func_0x000107c42018(uVar3);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 103c6588c; end: 103c65907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c6588c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112ffc988);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c42018(uVar1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 103c65908; end: 103c65953; -[_TtC21AddFriendsTrayFeature20AddFriendsTrayRouter init] */

void FUN_103c65908(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsTrayFeature.AddFriendsTrayRouter",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c65934);
  (*pcVar1)();
}



/* Entry: 103c65954; end: 103c65957; -[_TtC21AddFriendsTrayFeature20AddFriendsTrayRouter tray:positionDidChange:] */

void FUN_103c65954(void)

{
  return;
}



/* Entry: 103c65958; end: 103c659a3; -[_TtC21AddFriendsTrayFeature20AddFriendsTrayRouter trayDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000103c6598c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c65990) */

void FUN_103c65958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103c65bb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103c659a4; end: 103c65a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c659a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112ffc998) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112ffc9a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffc9a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffc978) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ffc980) = param_2;
  puVar1 = PTR_PTR_1126b0a08;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c48e84();
  *(undefined **)(unaff_x20 + _DAT_112ffc988) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112ffc990) = param_3;
  func_0x000103c65934();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c65a80; end: 103c65bb7;  */

long FUN_103c65a80(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lStack_68;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c4f078();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar5 = param_1;
      do {
        param_1 = lVar2;
        lVar2 = param_1;
        func_0x000107c614f0();
        lVar3 = 0x112daaff8;
        lStack_68 = lVar2;
        func_0x0001000285a8(0x112daaff8,&UNK_10d953990);
        plVar4 = &lStack_68;
        func_0x000107c5fb18();
        if (plVar4 == (long *)0xd000000000000026 && lVar3 == -0x7ffffffef0e4e0a0) {
          func_0x000107c61170(param_1);
          func_0x000107c6142c(lVar3);
          return lVar5;
        }
        func_0x000107c605b8();
        func_0x000107c6142c(lVar3);
        if (((ulong)plVar4 & 1) != 0) {
          func_0x000107c61170(param_1);
          return lVar5;
        }
        func_0x000107c61170(lVar1);
        lVar2 = param_1;
        func_0x000107c4f078();
        func_0x000107c61180();
        lVar5 = param_1;
        lVar1 = param_1;
      } while (lVar2 != 0);
    }
  }
  return param_1;
}



/* Entry: 103c65bb8; end: 103c65caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c65bb8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  
  lVar1 = _DAT_112ffc9a8;
  lVar5 = *(long *)(unaff_x20 + _DAT_112ffc9a8);
  if (lVar5 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c615f0(lVar5);
    func_0x000107c41570(puVar2);
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(lVar5);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c615e8(uVar3);
  }
  func_0x000103c67efc(*(undefined1 *)(unaff_x20 + _DAT_112ffc998));
  if ((*(byte *)(unaff_x20 + _DAT_112ffc9a0) & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ffc980);
  uVar3 = 0;
  func_0x000104337e94(0);
  FUN_104337a40();
  func_0x000107c4d664(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 103c65cb0; end: 103c65d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c65cb0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112ffc998) = 4;
    func_0x000107c61170();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112ffc9a0) = 1;
    func_0x000107c61170();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112ffc980);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lVar1);
    uVar2 = 0;
    func_0x000104337e94(0);
    func_0x000104337a50();
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112ffc990);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar1);
    FUN_103c67df0();
    func_0x000107c61574(uVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_a8,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112ffc988);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c42018(uVar3);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 103c65d14; end: 103c65dc7; -[_TtCC21AddFriendsTrayFeature28AddFriendsTrayViewControllerP33_E73F2E2A47EA22027FEAAE69948C786311RoundButton layoutSubviews] */

void FUN_103c65d14(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = 0;
  func_0x000103c67b14();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  uStack_30 = param_2;
  uStack_28 = uVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&uStack_30,puVar1);
  uVar2 = param_2;
  func_0x000107c4aba4(param_2);
  func_0x000107c61180();
  func_0x000107c3ec60(param_2);
  func_0x000107c609b0();
  func_0x000107c539d4(param_1 * 0.5,uVar2);
  func_0x000107c61170(uVar2);
  uVar2 = param_2;
  func_0x000107c4aba4(param_2);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 103c65dc8; end: 103c65e37; -[_TtCC21AddFriendsTrayFeature28AddFriendsTrayViewControllerP33_E73F2E2A47EA22027FEAAE69948C786311RoundButton initWithFrame:] */

void FUN_103c65dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  func_0x000103c67b14();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 103c65e38; end: 103c65ebb; -[_TtCC21AddFriendsTrayFeature28AddFriendsTrayViewControllerP33_E73F2E2A47EA22027FEAAE69948C786311RoundButton initWithCoder:] */

undefined1 * FUN_103c65e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = 0;
  func_0x000103c67b14();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 103c65ebc; end: 103c65eef;  */

void FUN_103c65ebc(void)

{
  func_0x000103c67b14();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c65ef0; end: 103c65feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c65ef0(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffc9e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffc9e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffc9f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffc9f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffca00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffca08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffca10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffca18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffca20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffca28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffca30) = 0;
  puVar2 = (undefined1 *)(unaff_x20 + _DAT_112ffc9d8);
  *puVar2 = param_1;
  *(undefined8 *)(puVar2 + 8) = param_2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 103c65fec; end: 103c6601f; -[_TtC21AddFriendsTrayFeature28AddFriendsTrayViewController initWithCoder:] */

undefined8 FUN_103c65fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_103c67bf8();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 103c66020; end: 103c66207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103c66020(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ffc9f8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ffc9f8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b0c40;
    func_0x000107c61168(PTR_PTR_1126b0c40);
    if (lRam0000000112ffca88 != -1) {
      func_0x000107c61568(0x112ffca88,0x103c65d00);
    }
    func_0x000107c450a4(uRam0000000112ffca90,uRam0000000112ffca98);
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c46db4();
    func_0x000107c5a050();
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 103c66208; end: 103c663eb;  */

undefined8 FUN_103c66208(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = 0;
  func_0x000103c67b14(0);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000103c66114();
  uVar3 = uVar2;
  func_0x000107c45034();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c55260(uVar1,param_2,uVar3,0);
  func_0x000107c61170(uVar3);
  func_0x000107c3d8b8(uVar1,param_2,param_1,PTR_s_closeTapped_112525030,0x40);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar1);
  func_0x000107c5af88(puVar4,param_2,0x66);
  func_0x000107c61180();
  func_0x000107c52b50(uVar1,param_2,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c5a050(uVar1,param_2,0);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  return uVar1;
}



/* Entry: 103c663ec; end: 103c66a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **** FUN_103c663ec(long param_1)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined *puVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 *****pppppuVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  uint uVar19;
  long extraout_x8;
  undefined8 ****ppppuVar20;
  undefined8 ****ppppuVar21;
  long alStack_200 [2];
  undefined8 ***pppuStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 ****ppppuStack_1b0;
  undefined8 ****ppppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 ****ppppuStack_198;
  undefined1 auStack_190 [112];
  undefined8 ****ppppuStack_120;
  undefined *puStack_118;
  undefined8 ****ppppuStack_110;
  undefined *puStack_108;
  
  lVar3 = 0x112d483a8;
  puVar17 = &UNK_10d910f00;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  lStack_1d8 = (long)&pppuStack_1f0 + lVar3;
  ppppuVar4 = (undefined8 ****)PTR__OBJC_CLASS___UITextView_1126afb88;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c58dd4(ppppuVar4);
  func_0x000107c54400(ppppuVar4);
  func_0x000107c58cd8(ppppuVar4);
  ppppuVar5 = (undefined8 ****)PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  ppppuVar10 = ppppuVar5;
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(ppppuVar4);
  func_0x000107c61170(ppppuVar4);
  func_0x000107c61170(ppppuVar10);
  func_0x000107c53fcc(ppppuVar4);
  func_0x000107c59c7c(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),ppppuVar4);
  pppuStack_1f0 = ppppuVar4;
  func_0x000107c5c83c();
  func_0x000107c61180();
  func_0x000107c55f8c(0);
  func_0x000107c61170();
  func_0x00010b87f3b0();
  func_0x000107c61180();
  ppppuVar10 = ppppuVar4;
  func_0x000107c43780();
  func_0x000107c61180();
  func_0x000107c615e8(ppppuVar4);
  pppppuVar6 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  pppppuVar7 = pppppuVar6;
  func_0x000107c52610();
  if (*(char *)(param_1 + _DAT_112ffc9d8) == '\x01') {
    func_0x000103c686d0();
  }
  else {
    func_0x000103c686b8();
  }
  puVar8 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  ppppuStack_198 = pppppuVar7;
  func_0x000107c610f8();
  ppppuVar4 = ppppuStack_198;
  pppppuVar7 = (undefined8 *****)ppppuStack_198;
  func_0x000107c5fadc(ppppuStack_198,puVar17);
  func_0x000107c48af4();
  puStack_1e8 = puVar8;
  func_0x000107c61170(pppppuVar7);
  pppppuVar7 = (undefined8 *****)0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  ppppuStack_1a8 = pppppuVar7;
  func_0x000107c61534();
  pppppuVar7[3] = (undefined8 ****)0x6;
  pppppuVar7[2] = (undefined8 ****)0x3;
  ppppuVar21 = *(undefined8 *****)PTR__NSFontAttributeName_1103457f0;
  pppppuVar7[4] = ppppuVar21;
  ppppuVar9 = (undefined8 ****)0x0;
  FUN_103c67db0(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  pppppuVar7[5] = ppppuVar10;
  ppppuVar20 = *(undefined8 *****)PTR__NSForegroundColorAttributeName_1103457f8;
  pppppuVar7[8] = ppppuVar9;
  pppppuVar7[9] = ppppuVar20;
  func_0x000107c61174();
  func_0x000107c61174();
  pppuStack_1c0 = ppppuVar20;
  func_0x000107c61174(ppppuVar21);
  func_0x000107c61174();
  ppppuVar9 = ppppuVar5;
  pppuStack_1a0 = ppppuVar10;
  func_0x000107c5af88();
  func_0x000107c61180();
  ppppuVar10 = (undefined8 ****)0x0;
  FUN_103c67db0(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  pppppuVar7[10] = ppppuVar9;
  ppppuVar20 = *(undefined8 *****)PTR__NSParagraphStyleAttributeName_110345820;
  pppppuVar7[0xd] = ppppuVar10;
  pppppuVar7[0xe] = ppppuVar20;
  ppppuVar9 = (undefined8 ****)0x0;
  pppuStack_1b8 = ppppuVar10;
  FUN_103c67db0(0,0x112ec7bd8,&PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
  pppppuVar7[0x12] = ppppuVar9;
  pppppuVar7[0xf] = pppppuVar6;
  func_0x000107c61174(ppppuVar20);
  func_0x000107c61174();
  pppppuVar11 = pppppuVar7;
  ppppuStack_1b0 = pppppuVar6;
  func_0x000100ecbca8();
  func_0x000107c61588(pppppuVar7);
  uVar16 = 0x112d48398;
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  uStack_1c8 = uVar16;
  func_0x000107c61408(pppppuVar7 + 4,3);
  puVar12 = (undefined *)0x0;
  func_0x000100eca28c();
  puVar8 = puVar12;
  func_0x000100ecbdec();
  pppppuVar6 = pppppuVar11;
  puStack_1e0 = puVar8;
  puStack_1d0 = puVar12;
  func_0x000107c5f9dc(pppppuVar11,puVar12,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(pppppuVar11);
  puVar8 = puStack_1e8;
  func_0x000107c61174(puStack_1e8);
  func_0x000107c4adac();
  func_0x000107c3d5c8(puVar8);
  func_0x000107c61170();
  func_0x000103c687fc();
  ppppuStack_110 = ppppuVar4;
  lVar13 = 0;
  ppppuStack_120 = pppppuVar6;
  puStack_118 = puVar12;
  puStack_108 = puVar17;
  func_0x000107c5ef14();
  lVar2 = lStack_1d8;
  lVar14 = lStack_1d8;
  (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lStack_1d8,1,1,lVar13);
  func_0x000100e8b654();
  *(long *)((long)alStack_200 + lVar3) = lVar14;
  *(long *)((long)alStack_200 + lVar3 + 8) = lVar14;
  pppppuVar6 = &ppppuStack_120;
  puVar18 = (undefined *)0x0;
  uVar19 = 0;
  func_0x000107c60218();
  func_0x000100eca640(lVar2);
  func_0x000107c6142c(puVar12);
  if ((uVar19 & 0xff) == 1) {
    func_0x000107c6142c(puVar17);
    ppppuVar9 = *(undefined8 *****)PTR__NSUnderlineStyleAttributeName_110345880;
    ppppuVar4 = (undefined8 ****)pppuStack_1c0;
  }
  else {
    ppppuStack_120 = ppppuStack_198;
    uVar16 = 0x112d483b0;
    puStack_118 = puVar17;
    ppppuStack_110 = pppppuVar6;
    puStack_108 = puVar18;
    func_0x0001000285a8(0x112d483b0,&UNK_10d90f140);
    uVar15 = uVar16;
    func_0x000100eca688();
    func_0x000107c60148(&ppppuStack_110,&ppppuStack_120,uVar16,PTR___sSSN_11034da80,uVar15,lVar14);
    ppppuVar9 = *(undefined8 *****)PTR__NSUnderlineStyleAttributeName_110345880;
    uVar16 = 1;
    func_0x000107c5fe40(1);
    func_0x000107c3d5c4(puVar8);
    func_0x000107c61170(uVar16);
    ppppuVar10 = ppppuVar5;
    func_0x000107c5af88(ppppuVar5);
    func_0x000107c61180();
    ppppuVar4 = (undefined8 ****)pppuStack_1c0;
    func_0x000107c3d5c4(puVar8);
    func_0x000107c61170(ppppuVar10);
    uVar16 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010f1b1f90);
    func_0x000107c3d5c4(puVar8);
    func_0x000107c61170(uVar16);
  }
  pppuVar1 = pppuStack_1f0;
  func_0x000107c529c4(pppuStack_1f0);
  func_0x000107c61170(puVar8);
  pppppuVar6 = (undefined8 *****)ppppuStack_1a8;
  func_0x000107c61534(ppppuStack_1a8,auStack_190);
  pppppuVar6[3] = (undefined8 ****)0x4;
  pppppuVar6[2] = (undefined8 ****)0x2;
  pppppuVar6[4] = ppppuVar4;
  func_0x000107c5af88();
  func_0x000107c61180();
  pppppuVar6[5] = ppppuVar5;
  pppppuVar6[8] = (undefined8 ****)pppuStack_1b8;
  pppppuVar6[9] = ppppuVar9;
  pppppuVar6[0xd] = (undefined8 ****)PTR___sSiN_11034deb0;
  pppppuVar6[10] = (undefined8 ****)0x1;
  func_0x000107c61174(ppppuVar9);
  pppppuVar7 = pppppuVar6;
  func_0x000100ecbca8(pppppuVar6);
  func_0x000107c61588(pppppuVar6);
  func_0x000107c61408(pppppuVar6 + 4,2,uStack_1c8);
  pppppuVar6 = pppppuVar7;
  func_0x000107c5f9dc(pppppuVar7,puStack_1d0,PTR___sypN_11034f1a8 + 8,puStack_1e0);
  func_0x000107c6142c(pppppuVar7);
  func_0x000107c55f98(pppuVar1);
  func_0x000107c61170(pppuStack_1a0);
  func_0x000107c61170(ppppuStack_1b0);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(pppppuVar6);
  return (undefined8 ****)pppuVar1;
}



/* Entry: 103c66a6c; end: 103c66bc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103c66a6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c59a2c();
  if (*(char *)(param_1 + _DAT_112ffc9d8) == '\x01') {
    func_0x000103c6870c();
  }
  else {
    func_0x000103c686f0();
  }
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  FUN_103c66020();
  puVar3 = puVar2;
  func_0x000107c45034();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c55260(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c5a050(puVar1);
  func_0x000107c3d8b8(puVar1);
  return puVar1;
}



/* Entry: 103c66bc4; end: 103c66e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103c66bc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b0ac8;
  func_0x000107c610f8(PTR_PTR_1126b0ac8);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c61174(puVar1);
  func_0x000107c59c74();
  func_0x000107c5a100(puVar1);
  func_0x000107c58dd4(puVar1);
  puVar2 = puVar1;
  func_0x000107c54400(puVar1);
  func_0x000103c68730();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  lVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar7 = 0x30;
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  lVar5 = lVar4;
  func_0x000103c68730();
  *(long *)(lVar4 + 0x20) = lVar5;
  *(undefined8 *)(lVar4 + 0x28) = uVar7;
  puVar6 = PTR___sSSN_11034da80;
  lVar5 = lVar4;
  func_0x000107c5fc48(lVar4,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar4);
  func_0x000107c613fc(lVar3,0x30,7);
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar7 = *(undefined8 *)(param_1 + _DAT_112ffc9d8 + 0x10);
  *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_1 + _DAT_112ffc9d8 + 8);
  *(undefined8 *)(lVar3 + 0x28) = uVar7;
  func_0x000107c61434();
  lVar4 = lVar3;
  func_0x000107c5fc48(lVar3,puVar6);
  func_0x000107c61574(lVar3);
  func_0x000107c59c70(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar2 = puVar6;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5a378(puVar1);
  func_0x000107c3fa94(puVar6);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar6);
  puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c3d6fc(puVar1);
  func_0x000107c61170(puVar6);
  return puVar1;
}



/* Entry: 103c66e04; end: 103c66e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103c66e04(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ffca30;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ffca30);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 103c66e80; end: 103c67837;  */

/* WARNING: Possible PIC construction at 0x000103c66ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c66f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c66f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c66f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c66fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c67018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c67094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c670b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c67108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c6712c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c6717c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c6719c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c67204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c67224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c67280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c672d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c67318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c6734c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c673a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c673f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c67448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c674a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c674fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c67550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c675b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c67604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c67658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c676b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c6770c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c67760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c677b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c67764) */
/* WARNING: Removing unreachable block (ram,0x000103c67710) */
/* WARNING: Removing unreachable block (ram,0x000103c676bc) */
/* WARNING: Removing unreachable block (ram,0x000103c6765c) */
/* WARNING: Removing unreachable block (ram,0x000103c67608) */
/* WARNING: Removing unreachable block (ram,0x000103c675b4) */
/* WARNING: Removing unreachable block (ram,0x000103c67554) */
/* WARNING: Removing unreachable block (ram,0x000103c67500) */
/* WARNING: Removing unreachable block (ram,0x000103c674ac) */
/* WARNING: Removing unreachable block (ram,0x000103c6744c) */
/* WARNING: Removing unreachable block (ram,0x000103c673f8) */
/* WARNING: Removing unreachable block (ram,0x000103c673a4) */
/* WARNING: Removing unreachable block (ram,0x000103c67350) */
/* WARNING: Removing unreachable block (ram,0x000103c6731c) */
/* WARNING: Removing unreachable block (ram,0x000103c672d8) */
/* WARNING: Removing unreachable block (ram,0x000103c67284) */
/* WARNING: Removing unreachable block (ram,0x000103c67228) */
/* WARNING: Removing unreachable block (ram,0x000103c67208) */
/* WARNING: Removing unreachable block (ram,0x000103c671a0) */
/* WARNING: Removing unreachable block (ram,0x000103c67834) */
/* WARNING: Removing unreachable block (ram,0x000103c671d4) */
/* WARNING: Removing unreachable block (ram,0x000103c67180) */
/* WARNING: Removing unreachable block (ram,0x000103c67130) */
/* WARNING: Removing unreachable block (ram,0x000103c67830) */
/* WARNING: Removing unreachable block (ram,0x000103c67164) */
/* WARNING: Removing unreachable block (ram,0x000103c6710c) */
/* WARNING: Removing unreachable block (ram,0x000103c670bc) */
/* WARNING: Removing unreachable block (ram,0x000103c6782c) */
/* WARNING: Removing unreachable block (ram,0x000103c670f0) */
/* WARNING: Removing unreachable block (ram,0x000103c67098) */
/* WARNING: Removing unreachable block (ram,0x000103c6701c) */
/* WARNING: Removing unreachable block (ram,0x000103c67828) */
/* WARNING: Removing unreachable block (ram,0x000103c6707c) */
/* WARNING: Removing unreachable block (ram,0x000103c66fdc) */
/* WARNING: Removing unreachable block (ram,0x000103c66f9c) */
/* WARNING: Removing unreachable block (ram,0x000103c66f5c) */
/* WARNING: Removing unreachable block (ram,0x000103c66f1c) */
/* WARNING: Removing unreachable block (ram,0x000103c66ed4) */
/* WARNING: Removing unreachable block (ram,0x000103c677bc) */

void FUN_103c66e80(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = unaff_x20;
    FUN_103c66e04();
    func_0x000107c3d89c(unaff_x20,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c67828);
  (*pcVar1)();
}



/* Entry: 103c67838; end: 103c67893; -[_TtC21AddFriendsTrayFeature28AddFriendsTrayViewController viewDidLoad] */

void FUN_103c67838(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_103c66e80();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103c67894; end: 103c6789f; -[_TtC21AddFriendsTrayFeature28AddFriendsTrayViewController acceptTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c67894(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112ffc9e0);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112ffc9e0))[1];
  func_0x000107c61174();
  func_0x000100d6a118(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 103c678a0; end: 103c678ab; -[_TtC21AddFriendsTrayFeature28AddFriendsTrayViewController closeTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c678a0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112ffc9e8);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112ffc9e8))[1];
  func_0x000107c61174();
  func_0x000100d6a118(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 103c678ac; end: 103c67917;  */

void FUN_103c678ac(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + *param_3);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61174();
  func_0x000100d6a118(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 103c67918; end: 103c679ab; -[_TtC21AddFriendsTrayFeature28AddFriendsTrayViewController linkTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c67918(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  pcVar3 = *(code **)(param_1 + _DAT_112ffc9f0);
  if (pcVar3 == (code *)0x0) {
    return;
  }
  uVar4 = ((undefined8 *)(param_1 + _DAT_112ffc9f0))[1];
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ffc9d8 + 8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ffc9d8 + 0x10);
  func_0x000107c61174();
  func_0x000100d6a118(pcVar3,uVar4);
  (*pcVar3)(uVar1,uVar2);
  func_0x000107c61170(param_1);
  if (pcVar3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar4);
    return;
  }
  return;
}



/* Entry: 103c679ac; end: 103c67a0b; -[_TtC21AddFriendsTrayFeature28AddFriendsTrayViewController initWithNibName:bundle:] */

void FUN_103c679ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsTrayFeature.AddFriendsTrayViewController",0x32,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c679d8);
  (*pcVar1)();
}



/* Entry: 103c67a0c; end: 103c67af3; -[_TtC21AddFriendsTrayFeature28AddFriendsTrayViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c67a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c67a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c67ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c67ad8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c67abc) */
/* WARNING: Removing unreachable block (ram,0x000103c67a9c) */
/* WARNING: Removing unreachable block (ram,0x000103c67a7c) */
/* WARNING: Removing unreachable block (ram,0x000103c67adc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c67a0c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ffc9d8 + 0x10));
  func_0x000100d6a128(*(undefined8 *)(param_1 + _DAT_112ffc9e0),
                      ((undefined8 *)(param_1 + _DAT_112ffc9e0))[1]);
  func_0x000100d6a128(*(undefined8 *)(param_1 + _DAT_112ffc9e8),
                      ((undefined8 *)(param_1 + _DAT_112ffc9e8))[1]);
  func_0x000100d6a128(*(undefined8 *)(param_1 + _DAT_112ffc9f0),
                      ((undefined8 *)(param_1 + _DAT_112ffc9f0))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ffc9f8));
  return;
}



/* Entry: 103c67af4; end: 103c67b33;  */

void FUN_103c67af4(void)

{
  func_0x000107c61168(&PTR_PTR_11294a080);
  return;
}



/* Entry: 103c67b34; end: 103c67bf7; -[_TtC21AddFriendsTrayFeature28AddFriendsTrayViewController textView:shouldInteractWithURL:inRange:interaction:] */

uint FUN_103c67b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  puVar2 = puVar3;
  FUN_103c67ce0(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return (uint)puVar2 & 1;
}



/* Entry: 103c67bf8; end: 103c67cdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c67bf8(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffc9e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffc9e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffc9f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffc9f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffca00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffca08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffca10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffca18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffca20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffca28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ffca30) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "AddFriendsTrayFeature/AddFriendsTrayViewController.swift",0x38,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c67ce0);
  (*pcVar2)();
}



/* Entry: 103c67ce0; end: 103c67daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103c67ce0(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  
  func_0x000107c5ed70();
  if ((param_1 == 0xd000000000000010) && (param_2 == -0x7ffffffef0e4e070)) {
    func_0x000107c6142c(0x800000010f1b1f90);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c6142c(param_2);
    if ((param_1 & 1) == 0) {
      return 0;
    }
  }
  pcVar4 = *(code **)(unaff_x20 + _DAT_112ffc9f0);
  if (pcVar4 != (code *)0x0) {
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112ffc9f0))[1];
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ffc9d8 + 8);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ffc9d8 + 0x10);
    func_0x000107c6157c(uVar3);
    (*pcVar4)(uVar1,uVar2);
    func_0x000100d6a128(pcVar4,uVar3);
  }
  return 0;
}



/* Entry: 103c67db0; end: 103c67def;  */

void FUN_103c67db0(undefined8 param_1,long *param_2,long *param_3)

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



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038b5400; end: 1038b54cf; -[_TtC20SCMapDropsShareScope18MapDropsShareScope initWithDropShareDataModel:presentingContainer:conversationMetadata:conversationId:dropsShareLifecycleDelegate:] */

undefined8
FUN_1038b5400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_7);
  uVar2 = param_3;
  FUN_1038b559c(param_3,param_4,param_5,param_6,param_2,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_7);
  return uVar2;
}



/* Entry: 1038b54d0; end: 1038b552f; -[_TtC20SCMapDropsShareScope18MapDropsShareScope init] */

void FUN_1038b54d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapDropsShareScope.MapDropsShareScope",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b54fc);
  (*pcVar1)();
}



/* Entry: 1038b5530; end: 1038b559b; -[_TtC20SCMapDropsShareScope18MapDropsShareScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038b5530(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa9088));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa9090));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa9098));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fa90a0 + 8));
  param_1 = param_1 + _DAT_112fa90a8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1038b559c; end: 1038b5697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b559c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar3 = _DAT_112fa90a8;
  func_0x000107c61614(unaff_x20 + _DAT_112fa90a8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa9088) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9090) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9098) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa90a0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_6);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar2);
  return;
}



/* Entry: 1038b5698; end: 1038b56bb;  */

undefined8 FUN_1038b5698(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1038b56bc; end: 1038b5703; -[SCSecondaryLocationDevicePromptScope container] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b56bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa90d8;
  func_0x000107c61428(param_1 + _DAT_112fa90d8,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b5704; end: 1038b5767; -[SCSecondaryLocationDevicePromptScope setContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5704(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa90d8;
  func_0x000107c61428(param_1 + _DAT_112fa90d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 1038b5768; end: 1038b57cf; -[SCSecondaryLocationDevicePromptScope grapheneSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5768(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112fa90e0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1038b57d0; end: 1038b5837; -[SCSecondaryLocationDevicePromptScope setGrapheneSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b57d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fa90e0);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1038b5838; end: 1038b597b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038b5838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa90e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar4 = _DAT_112fa90f0;
  func_0x000107c61614(unaff_x20 + _DAT_112fa90f0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa90d8) = param_1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa90e0);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  func_0x000107c61428(puVar1,auStack_78,1,0);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x000107c61428(unaff_x20 + lVar4,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_7);
  *(undefined1 *)(unaff_x20 + _DAT_112fa90f8) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112fa9100) = param_6;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar5 = auStack_a0;
  func_0x000107c61154(puVar5,puVar3);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_7);
  return puVar5;
}



/* Entry: 1038b597c; end: 1038b59bf;  */

undefined8 FUN_1038b597c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x6;
  
  uVar1 = param_1;
  FUN_1038b5d98();
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(in_x6);
  return uVar1;
}



/* Entry: 1038b59c0; end: 1038b5a63; -[SCSecondaryLocationDevicePromptScope initWithContainer:grapheneSource:mapSessionID:showCancelButton:useSIGAlertDialog:delegate:] */

undefined8
FUN_1038b59c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_8);
  uVar1 = param_3;
  FUN_1038b5d98(param_3,param_4,param_2,param_5,param_6,param_7,param_8);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_8);
  return uVar1;
}



/* Entry: 1038b5a64; end: 1038b5ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038b5a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa90e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar4 = _DAT_112fa90f0;
  func_0x000107c61614(unaff_x20 + _DAT_112fa90f0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa90d8) = param_1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa90e0);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  func_0x000107c61428(puVar1,auStack_78,1,0);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = param_5;
  func_0x000107c61428(unaff_x20 + lVar4,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_8);
  *(undefined1 *)(unaff_x20 + _DAT_112fa90f8) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112fa9100) = param_7;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar5 = auStack_a0;
  func_0x000107c61154(puVar5,puVar3);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_8);
  return puVar5;
}



/* Entry: 1038b5cec; end: 1038b5d4b; -[SCSecondaryLocationDevicePromptScope init] */

void FUN_1038b5cec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSecondaryLocationDevicePromptScope.SecondaryLocationDevicePromptScope",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b5d18);
  (*pcVar1)();
}



/* Entry: 1038b5d4c; end: 1038b5d97; -[SCSecondaryLocationDevicePromptScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038b5d4c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa90d8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fa90e0 + 8));
  param_1 = param_1 + _DAT_112fa90f0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1038b5d98; end: 1038b5ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa90e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar4 = _DAT_112fa90f0;
  func_0x000107c61614(unaff_x20 + _DAT_112fa90f0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa90d8) = param_1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa90e0);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  func_0x000107c61428(puVar1,auStack_78,1,0);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x000107c61428(unaff_x20 + lVar4,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_7);
  *(undefined1 *)(unaff_x20 + _DAT_112fa90f8) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112fa9100) = param_6;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61154(&stack0xffffffffffffff60,puVar3);
  return;
}



/* Entry: 1038b5ec0; end: 1038b5ee3;  */

undefined8 FUN_1038b5ec0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1038b5ee4; end: 1038b5f03; -[_TtC36SCSecondaryLocationDevicePromptScope44SecondaryLocationDevicePromptFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5ee4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fa9130));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b5f04; end: 1038b5f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5f04(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9130) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b5f50; end: 1038b5f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5f50(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fa9130) = param_1;
  func_0x00010033adfc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b5f8c; end: 1038b5fe7; -[_TtC36SCSecondaryLocationDevicePromptScope44SecondaryLocationDevicePromptFactoryServices init] */

void FUN_1038b5f8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSecondaryLocationDevicePromptScope.SecondaryLocationDevicePromptFactoryServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b5fb8);
  (*pcVar1)();
}



/* Entry: 1038b5fe8; end: 1038b5ff7; -[_TtC36SCSecondaryLocationDevicePromptScope44SecondaryLocationDevicePromptFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5fe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fa9130));
  return;
}



/* Entry: 1038b5ff8; end: 1038b6007; -[MapArrivalNotificationServices activeArrivalNotificationTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b5ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa9160));
  return;
}



/* Entry: 1038b6008; end: 1038b609f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b6008(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9160) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b60a0; end: 1038b60ff; -[MapArrivalNotificationServices init] */

void FUN_1038b60a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapArrivalNotificationServices.MapArrivalNotificationServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b60cc);
  (*pcVar1)();
}



/* Entry: 1038b6100; end: 1038b610f; -[MapArrivalNotificationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b6100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa9160));
  return;
}



/* Entry: 1038b6110; end: 1038b6177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b6110(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003828a8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fa9198) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1038b6178; end: 1038b61c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b6178(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9198) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b61c4; end: 1038b61f7;  */

void FUN_1038b61c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038b61f8; end: 1038b6207;  */

undefined1  [16] FUN_1038b61f8(void)

{
  return ZEXT816(0x1106a3710);
}



/* Entry: 1038b6208; end: 1038b622b; -[_TtC38MapArrivalNotificationsFactoryServices38MapArrivalNotificationsFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b6208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa9198));
  return;
}



/* Entry: 1038b622c; end: 1038b62d7;  */

void FUN_1038b622c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038b62d8; end: 1038b62db;  */

void FUN_1038b62d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa91c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1b1d0;
  func_0x000107c61520(&UNK_10dc1b1d0,&UNK_1106a38b0);
  puRam0000000112fa91c8 = puVar1;
  return;
}



/* Entry: 1038b62dc; end: 1038b631b;  */

void FUN_1038b62dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa91c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1b1d0;
  func_0x000107c61520(&UNK_10dc1b1d0,&UNK_1106a38b0);
  puRam0000000112fa91c8 = puVar1;
  return;
}



/* Entry: 1038b631c; end: 1038b6323;  */

void FUN_1038b631c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1038b6324; end: 1038b63d7;  */

undefined1 * FUN_1038b6324(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1038b63d8; end: 1038b65f3;  */

int FUN_1038b63d8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1038b65f4; end: 1038b6613; -[_TtC35MapCustomizationTrayFactoryServices39FullMapCustomizationTrayFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b65f4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fa91d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b6614; end: 1038b665f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b6614(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa91d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b6660; end: 1038b66bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b6660(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fa91d0) = param_1;
  func_0x0001038b669c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b66bc; end: 1038b6717; -[_TtC35MapCustomizationTrayFactoryServices39FullMapCustomizationTrayFactoryServices init] */

void FUN_1038b66bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapCustomizationTrayFactoryServices.FullMapCustomizationTrayFactoryServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b66e8);
  (*pcVar1)();
}



/* Entry: 1038b6718; end: 1038b6727; -[_TtC35MapCustomizationTrayFactoryServices39FullMapCustomizationTrayFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b6718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fa91d0));
  return;
}



/* Entry: 1038b6728; end: 1038b6747; -[_TtC35MapCustomizationTrayFactoryServices35MapCustomizationTrayFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b6728(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fa9200));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b6748; end: 1038b6793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b6748(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9200) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b6794; end: 1038b67cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b6794(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fa9200) = param_1;
  func_0x0001003814c8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b67d0; end: 1038b682b; -[_TtC35MapCustomizationTrayFactoryServices35MapCustomizationTrayFactoryServices init] */

void FUN_1038b67d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapCustomizationTrayFactoryServices.MapCustomizationTrayFactoryServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b67fc);
  (*pcVar1)();
}



/* Entry: 1038b682c; end: 1038b683b; -[_TtC35MapCustomizationTrayFactoryServices35MapCustomizationTrayFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b682c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fa9200));
  return;
}



/* Entry: 1038b683c; end: 1038b687f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b683c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa9268;
  func_0x000107c61428(unaff_x20 + _DAT_112fa9268,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 1038b6880; end: 1038b69cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b6880(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa9268;
  func_0x000107c61428(unaff_x20 + _DAT_112fa9268,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1038b69cc; end: 1038b6aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038b69cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fa9268;
  func_0x000107c61614(unaff_x20 + _DAT_112fa9268,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa9230) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9238) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9240) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9248) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9250) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9258) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9260) = param_7;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_8);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_88;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_8);
  return puVar3;
}



/* Entry: 1038b6b00; end: 1038b6b43;  */

undefined8 FUN_1038b6b00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x7;
  
  uVar1 = param_1;
  FUN_1038b6c80();
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(in_x7);
  return uVar1;
}



/* Entry: 1038b6b44; end: 1038b6beb; -[_TtC25MapCustomizationTrayScope29FullMapCustomizationTrayScope initWithUiContainer:initialTab:pageType:sourceType:featureType:sourceSessionID:homeSettingsOpenSource:delegate:] */

undefined8
FUN_1038b6b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_10);
  uVar1 = param_3;
  FUN_1038b6c80(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_10);
  return uVar1;
}



/* Entry: 1038b6bec; end: 1038b6c47; -[_TtC25MapCustomizationTrayScope29FullMapCustomizationTrayScope init] */

void FUN_1038b6bec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapCustomizationTrayScope.FullMapCustomizationTrayScope",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b6c18);
  (*pcVar1)();
}



/* Entry: 1038b6c48; end: 1038b6c7f; -[_TtC25MapCustomizationTrayScope29FullMapCustomizationTrayScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038b6c48(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa9230));
  param_1 = param_1 + _DAT_112fa9268;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1038b6c80; end: 1038b6d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b6c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_112fa9268;
  func_0x000107c61614(unaff_x20 + _DAT_112fa9268,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa9230) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9238) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9240) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9248) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9250) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9258) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9260) = param_7;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_8);
  FUN_1038b6d8c();
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar1);
  return;
}



/* Entry: 1038b6d8c; end: 1038b6dab;  */

void FUN_1038b6d8c(void)

{
  func_0x000107c61168(&PTR_PTR_1128fa488);
  return;
}



/* Entry: 1038b6dac; end: 1038b6eab;  */

undefined8 FUN_1038b6dac(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1038b6eac; end: 1038b6ecf;  */

undefined1  [16] FUN_1038b6eac(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1038b6ed0; end: 1038b6f0f;  */

void FUN_1038b6ed0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa9298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1b3b0;
  func_0x000107c61520(&UNK_10dc1b3b0,&UNK_1106a3a30);
  puRam0000000112fa9298 = puVar1;
  return;
}



/* Entry: 1038b6f10; end: 1038b6f13;  */

void FUN_1038b6f10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa92a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1b450;
  func_0x000107c61520(&UNK_10dc1b450,&UNK_1106a3a50);
  puRam0000000112fa92a0 = puVar1;
  return;
}



/* Entry: 1038b6f14; end: 1038b6f53;  */

void FUN_1038b6f14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa92a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1b450;
  func_0x000107c61520(&UNK_10dc1b450,&UNK_1106a3a50);
  puRam0000000112fa92a0 = puVar1;
  return;
}



/* Entry: 1038b6f54; end: 1038b6f9b;  */

undefined1  [16] FUN_1038b6f54(void)

{
  return ZEXT816(0x1106a3a30);
}



/* Entry: 1038b6f9c; end: 1038b6fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b6f9c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa92e0;
  func_0x000107c61428(unaff_x20 + _DAT_112fa92e0,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 1038b6fe0; end: 1038b712b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b6fe0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa92e0;
  func_0x000107c61428(unaff_x20 + _DAT_112fa92e0,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1038b712c; end: 1038b726f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038b712c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112fa92e0;
  func_0x000107c61614(unaff_x20 + _DAT_112fa92e0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa92a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa92b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa92b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa92c0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa92c8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fa92d0) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa92d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_7);
  *(undefined8 *)(unaff_x20 + _DAT_112fa92e8) = 0;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar4 = auStack_88;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_7);
  return puVar4;
}



/* Entry: 1038b7270; end: 1038b72b3;  */

undefined8 FUN_1038b7270(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x6;
  
  uVar1 = param_1;
  FUN_1038b768c();
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(in_x6);
  return uVar1;
}



/* Entry: 1038b72b4; end: 1038b734f; -[_TtC25MapCustomizationTrayScope25MapCustomizationTrayScope initWithUiContainer:initialTab:pageType:sourceType:featureType:sourceSessionID:delegate:] */

undefined8
FUN_1038b72b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_9);
  uVar1 = param_3;
  FUN_1038b768c(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_9);
  return uVar1;
}



/* Entry: 1038b7350; end: 1038b75e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038b7350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112fa92e0;
  func_0x000107c61614(unaff_x20 + _DAT_112fa92e0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa92a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa92b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa92b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa92c0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa92c8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fa92d0) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa92d8);
  *puVar1 = param_7;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_8);
  *(undefined8 *)(unaff_x20 + _DAT_112fa92e8) = param_9;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar4 = auStack_88;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_8);
  return puVar4;
}



/* Entry: 1038b75e8; end: 1038b7643; -[_TtC25MapCustomizationTrayScope25MapCustomizationTrayScope init] */

void FUN_1038b75e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapCustomizationTrayScope.MapCustomizationTrayScope",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b7614);
  (*pcVar1)();
}



/* Entry: 1038b7644; end: 1038b768b; -[_TtC25MapCustomizationTrayScope25MapCustomizationTrayScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b7644(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa92a8));
  FUN_1038b6dac(param_1 + _DAT_112fa92e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa92e8));
  return;
}



/* Entry: 1038b768c; end: 1038b77ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b768c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar3 = _DAT_112fa92e0;
  func_0x000107c61614(unaff_x20 + _DAT_112fa92e0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa92a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa92b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa92b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa92c0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa92c8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fa92d0) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa92d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_7);
  *(undefined8 *)(unaff_x20 + _DAT_112fa92e8) = 0;
  func_0x0001003806b0();
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar2);
  return;
}



/* Entry: 1038b77ac; end: 1038b7817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b77ac(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100384364();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fa9320) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1038b7818; end: 1038b781f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b7818(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100384364();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9320) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1038b7820; end: 1038b786b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b7820(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9320) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b786c; end: 1038b78f3; -[_TtC35MapFriendProfileCardFactoryServices35MapFriendProfileCardFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b786c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1038b78f4; end: 1038b7953; -[_TtC35MapFriendProfileCardFactoryServices35MapFriendProfileCardFactoryServices init] */

void FUN_1038b78f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFriendProfileCardFactoryServices.MapFriendProfileCardFactoryServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b7920);
  (*pcVar1)();
}



/* Entry: 1038b7954; end: 1038b7963;  */

undefined1  [16] FUN_1038b7954(void)

{
  return ZEXT816(0x1106a3b58);
}



/* Entry: 1038b7964; end: 1038b7973; -[_TtC35MapFriendProfileCardFactoryServices35MapFriendProfileCardFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b7964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa9320));
  return;
}



/* Entry: 1038b7974; end: 1038b79ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b7974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa9350);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa9358);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b79f0; end: 1038b7a7f; -[_TtC25MapFriendProfileCardScope25MapFriendProfileCardScope initWithFriendId:sessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b79f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fa9350);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fa9358);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b7a80; end: 1038b7ab3;  */

void FUN_1038b7a80(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038b7ab4; end: 1038b7af3; -[_TtC25MapFriendProfileCardScope25MapFriendProfileCardScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038b7ad4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038b7ad8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b7ab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fa9350 + 8))
  ;
  return;
}



/* Entry: 1038b7af4; end: 1038b7b07;  */

bool FUN_1038b7af4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1038b7b08; end: 1038b7bdf;  */

void FUN_1038b7b08(void)

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



/* Entry: 1038b7be0; end: 1038b7bff;  */

void FUN_1038b7be0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1038b7c00; end: 1038b7c3f;  */

void FUN_1038b7c00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa9388 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1b610;
  func_0x000107c61520(&UNK_10dc1b610,&UNK_1106a3c88);
  puRam0000000112fa9388 = puVar1;
  return;
}



/* Entry: 1038b7c40; end: 1038b7c4f;  */

undefined1  [16] FUN_1038b7c40(void)

{
  return ZEXT816(0x1106a3c88);
}



/* Entry: 1038b7c50; end: 1038b7c5f; -[_TtC31MapLocationRequestStateServices31MapLocationRequestStateServices objcStateProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b7c50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa9398));
  return;
}



/* Entry: 1038b7c60; end: 1038b7d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b7c60(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9390) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9398) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b7d28; end: 1038b7d87; -[_TtC31MapLocationRequestStateServices31MapLocationRequestStateServices init] */

void FUN_1038b7d28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapLocationRequestStateServices.MapLocationRequestStateServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b7d54);
  (*pcVar1)();
}



/* Entry: 1038b7d88; end: 1038b7dbf; -[_TtC31MapLocationRequestStateServices31MapLocationRequestStateServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b7d88(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa9390));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa9398));
  return;
}



/* Entry: 1038b7dc0; end: 1038b7ddf; -[MapLocationSearchTrayFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b7dc0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fa93c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038b7de0; end: 1038b7e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b7de0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa93c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b7e78; end: 1038b7eab;  */

void FUN_1038b7e78(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038b7eac; end: 1038b7ebb; -[MapLocationSearchTrayFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b7eac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fa93c8));
  return;
}



/* Entry: 1038b7ebc; end: 1038b8123;  */

void FUN_1038b7ebc(long param_1)

{
  func_0x000107c61610();
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1038b8124; end: 1038b8137;  */

bool FUN_1038b8124(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1038b8138; end: 1038b820f;  */

void FUN_1038b8138(void)

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



/* Entry: 1038b8210; end: 1038b821b;  */

void FUN_1038b8210(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1038b821c; end: 1038b825f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b821c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa93f8;
  func_0x000107c61428(unaff_x20 + _DAT_112fa93f8,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10316769c; end: 1031676db;  */

void FUN_10316769c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1031676dc; end: 1031676f3;  */

void FUN_1031676dc(long param_1,long param_2)

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



/* Entry: 1031676f4; end: 10316780f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031676f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar6 = *unaff_x20;
  func_0x0001000d224c(&puStack_70);
  puVar1 = puStack_70;
  if (puStack_70 != (undefined *)0x0) {
    uVar5 = *(undefined8 *)(unaff_x20[2] + _DAT_11307b710);
    puVar2 = &UNK_110615fc0;
    func_0x000107c613fc(&UNK_110615fc0,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_110615fe8;
    func_0x000107c613fc(&UNK_110615fe8,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = uVar6;
    pcStack_50 = FUN_103167f2c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x10315a1c4;
    puStack_58 = &UNK_110616000;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c615f0(uVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c40ac4(puVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(puVar1);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 103167810; end: 10316785b;  */

void FUN_103167810(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x000107c4218c();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  }
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  func_0x000107c615e8(uVar1);
  func_0x000100c82230();
                    /* WARNING: Could not recover jumptable at 0x00010c06a230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x20),PTR_s_invalidateToken__1125f8298,
             *(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 10316785c; end: 1031679af;  */

void FUN_10316785c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  if (param_1 != 0) {
    func_0x000107c615f0();
    uVar5 = 0;
    lVar1 = param_3;
    func_0x000107c60714(param_3,0);
    puVar2 = &UNK_110615fc0;
    func_0x000107c613fc(&UNK_110615fc0,0x18,7);
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648(param_2);
    func_0x000107c61644(puVar2 + 0x10,param_2);
    func_0x000107c61574(param_2);
    puVar3 = &UNK_110616038;
    func_0x000107c613fc(&UNK_110616038,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(long *)(puVar3 + 0x18) = param_1;
    *(long *)(puVar3 + 0x20) = param_3;
    uStack_68 = 0x103167f50;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_110616050;
    ppuVar4 = &puStack_88;
    puStack_60 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_60;
    func_0x000107c615f0(param_1);
    func_0x000107c61574(puVar2);
    func_0x000107c5fb28(lVar1,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x0001000d76cc(lVar1 + 0x20,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1031679b0; end: 103167bbb;  */

void FUN_1031679b0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
LAB_103167a08:
    func_0x000107c4218c(param_2);
    return;
  }
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    func_0x000107c61574(param_1);
    goto LAB_103167a08;
  }
  lVar1 = param_2;
  func_0x000107c44948();
  if ((int)lVar1 != 0) {
    lVar1 = param_2;
    func_0x000107c4b4bc();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar1 = param_2;
      func_0x000107c3f27c(param_2);
      FUN_103167bbc(1,lVar1);
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      *(long *)(param_1 + 0x48) = param_2;
      func_0x000107c615e8(uVar5);
      plVar2 = *(long **)(param_1 + 0x20);
      lVar1 = *(long *)(param_1 + 0x28);
      func_0x000107c614f0();
      pcVar6 = *(code **)(lVar1 + 0x18);
      func_0x000107c615f0(param_2);
      (*pcVar6)(plVar2,lVar1);
      puVar3 = &UNK_110615fc0;
      func_0x000107c613fc(&UNK_110615fc0,0x18,7);
      func_0x000107c61644(puVar3 + 0x10,param_1);
      uVar5 = 0x103167f5c;
      puVar4 = puVar3;
      (**(code **)(*plVar2 + 0x60))(0x103167f5c);
      func_0x000107c61574(plVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c614f0(uVar5);
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      pcVar6 = *(code **)(puVar4 + 0x18);
      func_0x000107c6157c(uVar7);
      (*pcVar6)();
      func_0x000107c615e8(uVar5);
      func_0x000107c61574(uVar7);
      goto LAB_103167a9c;
    }
    func_0x000107c61170();
  }
  func_0x000107c3f27c(param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c55f30(uVar5);
  func_0x000107c52ff4(uVar5);
  func_0x000107c55f4c(uVar5);
  func_0x000107c55240(uVar5);
  func_0x000107c43714(*(undefined8 *)(param_1 + 0x20));
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = param_2;
  func_0x000107c615e8(uVar5);
  func_0x000107c615f0(param_2);
  func_0x000107c56018();
LAB_103167a9c:
  func_0x000107c3d070(param_2);
  FUN_103167cb4(param_2);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 103167bbc; end: 103167cb3;  */

void FUN_103167bbc(ulong param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  if ((param_1 & 1) != 0) {
    func_0x000107c530e0(*(undefined8 *)(unaff_x20 + 0x20),param_2,param_2);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c55f30(uVar1);
  func_0x000107c52ff4(uVar1);
  func_0x000107c55f4c(uVar1);
  func_0x000107c55240(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bfb3310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x20),PTR_s_flushTokenUpdates__1125ca668,uVar1);
  return;
}



/* Entry: 103167cb4; end: 103167daf;  */

/* WARNING: Possible PIC construction at 0x000103167d80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103167d84) */

void FUN_103167cb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *unaff_x20;
  uVar1 = param_1;
  func_0x000107c4e778();
  func_0x000107c61180();
  puVar2 = &UNK_110616088;
  func_0x000107c613fc(&UNK_110616088,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_110615fc0;
  func_0x000107c613fc(&UNK_110615fc0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_1106160b0;
  func_0x000107c613fc(&UNK_1106160b0,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  FUN_103166d24(uVar1,0x103167f64,puVar2,0x103167f6c,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 103167db0; end: 103167e0b;  */

void FUN_103167db0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4dd80();
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 103167e0c; end: 103167e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103167e0c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x10) + _DAT_11307b718);
      func_0x000107c61174(param_1);
      func_0x000107c3e2c8(uVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61574(param_2);
    }
  }
  return;
}



/* Entry: 103167ea0; end: 103167f2b;  */

void FUN_103167ea0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 103167f2c; end: 103167f7b;  */

void FUN_103167f2c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    func_0x000107c615f0();
    uVar7 = 0;
    lVar2 = lVar1;
    func_0x000107c60714(lVar1,0);
    puVar3 = &UNK_110615fc0;
    func_0x000107c613fc(&UNK_110615fc0,0x18,7);
    func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61648(lVar4);
    func_0x000107c61644(puVar3 + 0x10,lVar4);
    func_0x000107c61574(lVar4);
    puVar5 = &UNK_110616038;
    func_0x000107c613fc(&UNK_110616038,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar3;
    *(long *)(puVar5 + 0x18) = param_1;
    *(long *)(puVar5 + 0x20) = lVar1;
    uStack_68 = 0x103167f50;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_110616050;
    ppuVar6 = &puStack_88;
    puStack_60 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar3 = puStack_60;
    func_0x000107c615f0(param_1);
    func_0x000107c61574(puVar3);
    func_0x000107c5fb28(lVar2,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x0001000d76cc(lVar2 + 0x20,ppuVar6);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(param_1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 103167f7c; end: 103167fc7;  */

void FUN_103167f7c(undefined8 param_1)

{
  func_0x0001000285a8(0x112f46500,&UNK_10db93340);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103167fc8,param_1);
  return;
}



/* Entry: 103167fc8; end: 10316802f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103167fc8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103168154();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f46508) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103168030; end: 10316807b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103168030(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f46508) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10316807c; end: 103168153; -[_TtC33SCLensTalkVideoHandlingScopeProxy36SCLensTalkVideoHandlingScopeServices buildWithIsSelfStreamObservable:remoteVideoStreamObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10316807c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *apuStack_58 [2];
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126accd8;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c46f90(puVar1,param_2,param_3,param_4);
  apuStack_58[0] = puVar1;
  func_0x00010008a7c8(&uStack_48,apuStack_58);
  func_0x000100083b20(apuStack_58);
  func_0x000107c61574(uStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_58[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103168154; end: 1031681a3;  */

void FUN_103168154(void)

{
  func_0x000107c61168(&PTR_PTR_1128bc3f8);
  return;
}



/* Entry: 1031681a4; end: 1031681d3; -[_TtC33SCLensTalkVideoHandlingScopeProxy36SCLensTalkVideoHandlingScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031681a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f46508));
  return;
}



/* Entry: 1031681d4; end: 1031682bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031681d4(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_2;
  func_0x000100083b20(&uStack_38);
  FUN_103168634();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f46558) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f46560) = uStack_38;
  puVar1 = PTR_s_init_1125d9248;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c6157c(param_2);
  plVar4 = &lStack_48;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1031682c0; end: 1031682df;  */

void FUN_1031682c0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031682e0; end: 10316833f; -[_TtC43ChatInputPluginScopedFactoryServiceProvider31SCChatInputPluginScopedServices init] */

void FUN_1031682e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatInputPluginScopedFactoryServiceProvider.SCChatInputPluginScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10316830c);
  (*pcVar1)();
}



/* Entry: 103168340; end: 103168377; -[_TtC43ChatInputPluginScopedFactoryServiceProvider31SCChatInputPluginScopedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010316835c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103168360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103168340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f46560));
  return;
}



/* Entry: 103168378; end: 1031683e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103168378(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106163a8;
  func_0x000107c613fc(&UNK_1106163a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1031686cc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1031683e4; end: 1031683f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031683e4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112f46558));
  return;
}



/* Entry: 1031683f4; end: 10316848f;  */

void FUN_1031683f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&lStack_38);
  func_0x000107c61428(lStack_38 + 0x10,auStack_50,1,0);
  uVar2 = *(undefined8 *)(lStack_38 + 0x10);
  *(undefined8 *)(lStack_38 + 0x10) = auStack_50[0];
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_1106162a0;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106162b0;
  return;
}



/* Entry: 103168490; end: 1031684c7;  */

void FUN_103168490(long *param_1)

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



/* Entry: 1031684c8; end: 1031684cf;  */

undefined8 FUN_1031684c8(void)

{
  return 0x1b;
}



/* Entry: 1031684d0; end: 103168603;  */

void FUN_1031684d0(undefined8 *param_1)

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
  puVar1 = &UNK_1106163d0;
  func_0x000107c613fc(&UNK_1106163d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031686a4;
  func_0x00010058fa64(FUN_1031686a4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103168604; end: 103168633;  */

undefined ** FUN_103168604(void)

{
  return &PTR_DAT_1130668b0;
}



/* Entry: 103168634; end: 103168653;  */

void FUN_103168634(void)

{
  func_0x000107c61168(&PTR_PTR_1128bc4b8);
  return;
}



/* Entry: 103168654; end: 1031686a3;  */

undefined1  [16] FUN_103168654(void)

{
  return ZEXT816(0x110616308);
}



/* Entry: 1031686a4; end: 1031686cb;  */

void FUN_1031686a4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1031686cc; end: 1031686cf;  */

void FUN_1031686cc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031686d0; end: 10316929f;  */

/* WARNING: Possible PIC construction at 0x000103168e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168ea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168eb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168ee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168f68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103168ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031690a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031690b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031690c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031690d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031690e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031690f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031691a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031691b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031691c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031691d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031691e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031691f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103169278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010316926c) */
/* WARNING: Removing unreachable block (ram,0x00010316925c) */
/* WARNING: Removing unreachable block (ram,0x00010316924c) */
/* WARNING: Removing unreachable block (ram,0x00010316923c) */
/* WARNING: Removing unreachable block (ram,0x00010316922c) */
/* WARNING: Removing unreachable block (ram,0x00010316921c) */
/* WARNING: Removing unreachable block (ram,0x00010316920c) */
/* WARNING: Removing unreachable block (ram,0x0001031691fc) */
/* WARNING: Removing unreachable block (ram,0x0001031691ec) */
/* WARNING: Removing unreachable block (ram,0x0001031691dc) */
/* WARNING: Removing unreachable block (ram,0x0001031691cc) */
/* WARNING: Removing unreachable block (ram,0x0001031691bc) */
/* WARNING: Removing unreachable block (ram,0x0001031691ac) */
/* WARNING: Removing unreachable block (ram,0x00010316919c) */
/* WARNING: Removing unreachable block (ram,0x00010316918c) */
/* WARNING: Removing unreachable block (ram,0x00010316917c) */
/* WARNING: Removing unreachable block (ram,0x00010316916c) */
/* WARNING: Removing unreachable block (ram,0x00010316915c) */
/* WARNING: Removing unreachable block (ram,0x00010316914c) */
/* WARNING: Removing unreachable block (ram,0x00010316913c) */
/* WARNING: Removing unreachable block (ram,0x00010316912c) */
/* WARNING: Removing unreachable block (ram,0x00010316911c) */
/* WARNING: Removing unreachable block (ram,0x00010316910c) */
/* WARNING: Removing unreachable block (ram,0x0001031690fc) */
/* WARNING: Removing unreachable block (ram,0x0001031690ec) */
/* WARNING: Removing unreachable block (ram,0x0001031690dc) */
/* WARNING: Removing unreachable block (ram,0x0001031690cc) */
/* WARNING: Removing unreachable block (ram,0x0001031690bc) */
/* WARNING: Removing unreachable block (ram,0x0001031690ac) */
/* WARNING: Removing unreachable block (ram,0x00010316909c) */
/* WARNING: Removing unreachable block (ram,0x00010316908c) */
/* WARNING: Removing unreachable block (ram,0x00010316907c) */
/* WARNING: Removing unreachable block (ram,0x00010316906c) */
/* WARNING: Removing unreachable block (ram,0x00010316905c) */
/* WARNING: Removing unreachable block (ram,0x00010316904c) */
/* WARNING: Removing unreachable block (ram,0x00010316903c) */
/* WARNING: Removing unreachable block (ram,0x00010316902c) */
/* WARNING: Removing unreachable block (ram,0x00010316901c) */
/* WARNING: Removing unreachable block (ram,0x00010316900c) */
/* WARNING: Removing unreachable block (ram,0x000103168ffc) */
/* WARNING: Removing unreachable block (ram,0x000103168fec) */
/* WARNING: Removing unreachable block (ram,0x000103168fdc) */
/* WARNING: Removing unreachable block (ram,0x000103168fcc) */
/* WARNING: Removing unreachable block (ram,0x000103168fbc) */
/* WARNING: Removing unreachable block (ram,0x000103168fac) */
/* WARNING: Removing unreachable block (ram,0x000103168f9c) */
/* WARNING: Removing unreachable block (ram,0x000103168f8c) */
/* WARNING: Removing unreachable block (ram,0x000103168f7c) */
/* WARNING: Removing unreachable block (ram,0x000103168f6c) */
/* WARNING: Removing unreachable block (ram,0x000103168f5c) */
/* WARNING: Removing unreachable block (ram,0x000103168f4c) */
/* WARNING: Removing unreachable block (ram,0x000103168f3c) */
/* WARNING: Removing unreachable block (ram,0x000103168f2c) */
/* WARNING: Removing unreachable block (ram,0x000103168f1c) */
/* WARNING: Removing unreachable block (ram,0x000103168f0c) */
/* WARNING: Removing unreachable block (ram,0x000103168efc) */
/* WARNING: Removing unreachable block (ram,0x000103168eec) */
/* WARNING: Removing unreachable block (ram,0x000103168edc) */
/* WARNING: Removing unreachable block (ram,0x000103168ecc) */
/* WARNING: Removing unreachable block (ram,0x000103168ebc) */
/* WARNING: Removing unreachable block (ram,0x000103168eac) */
/* WARNING: Removing unreachable block (ram,0x000103168e9c) */
/* WARNING: Removing unreachable block (ram,0x000103168e8c) */
/* WARNING: Removing unreachable block (ram,0x000103168e7c) */
/* WARNING: Removing unreachable block (ram,0x000103168e6c) */
/* WARNING: Removing unreachable block (ram,0x000103168e5c) */
/* WARNING: Removing unreachable block (ram,0x000103168e4c) */
/* WARNING: Removing unreachable block (ram,0x00010316927c) */

void FUN_1031686d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  
  puVar1 = &UNK_110616460;
  func_0x000107c613fc(&UNK_110616460,0x450,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x318) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 800) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0x350) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x358) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x360) = in_stack_00000310;
  *(undefined8 *)(puVar1 + 0x368) = in_stack_00000318;
  *(undefined8 *)(puVar1 + 0x370) = in_stack_00000320;
  *(undefined8 *)(puVar1 + 0x378) = in_stack_00000328;
  *(undefined8 *)(puVar1 + 0x380) = in_stack_00000330;
  *(undefined8 *)(puVar1 + 0x388) = in_stack_00000338;
  *(undefined8 *)(puVar1 + 0x390) = in_stack_00000340;
  *(undefined8 *)(puVar1 + 0x398) = in_stack_00000348;
  *(undefined8 *)(puVar1 + 0x3a0) = in_stack_00000350;
  *(undefined8 *)(puVar1 + 0x3a8) = in_stack_00000358;
  *(undefined8 *)(puVar1 + 0x3b0) = in_stack_00000360;
  *(undefined8 *)(puVar1 + 0x3b8) = in_stack_00000368;
  *(undefined8 *)(puVar1 + 0x3c0) = in_stack_00000370;
  *(undefined8 *)(puVar1 + 0x3c8) = in_stack_00000378;
  *(undefined8 *)(puVar1 + 0x3d0) = in_stack_00000380;
  *(undefined8 *)(puVar1 + 0x3d8) = in_stack_00000388;
  *(undefined8 *)(puVar1 + 0x3e0) = in_stack_00000390;
  *(undefined8 *)(puVar1 + 1000) = in_stack_00000398;
  *(undefined8 *)(puVar1 + 0x3f0) = in_stack_000003a0;
  *(undefined8 *)(puVar1 + 0x3f8) = in_stack_000003a8;
  *(undefined8 *)(puVar1 + 0x400) = in_stack_000003b0;
  *(undefined8 *)(puVar1 + 0x408) = in_stack_000003b8;
  *(undefined8 *)(puVar1 + 0x410) = in_stack_000003c0;
  *(undefined8 *)(puVar1 + 0x418) = in_stack_000003c8;
  *(undefined8 *)(puVar1 + 0x420) = in_stack_000003d0;
  *(undefined8 *)(puVar1 + 0x428) = in_stack_000003d8;
  *(undefined8 *)(puVar1 + 0x430) = in_stack_000003e0;
  *(undefined8 *)(puVar1 + 0x438) = in_stack_000003e8;
  *(undefined8 *)(puVar1 + 0x440) = in_stack_000003f0;
  *(undefined8 *)(puVar1 + 0x448) = in_stack_000003f8;
  uVar2 = 0x112f465d8;
  func_0x0001000285a8(0x112f465d8,&UNK_10db936d0);
  func_0x000107c613fc();
  pcVar3 = FUN_10316aa4c;
  func_0x0001000841fc(FUN_10316aa4c,puVar1,uVar2);
  func_0x000100084214(&UNK_10db936a0,0x2d,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1031692a0; end: 1031694ff;  */

void FUN_1031692a0(void)

{
  long unaff_x20;
  
  FUN_1031686d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 103169500; end: 10316950f;  */

undefined1  [16] FUN_103169500(void)

{
  return ZEXT816(0x110616440);
}



/* Entry: 103169510; end: 10316a5ef;  */

void FUN_103169510(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined8 *puVar1;
  code *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000400;
  undefined8 auStack_70 [2];
  
  uVar15 = *param_2;
  func_0x0001000285a8(0x112f465e0,&UNK_10db936d8);
  puVar1 = auStack_70;
  auStack_70[0] = uVar15;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f465e8,&UNK_10db936e0);
  func_0x000107c6157c(puVar1);
  pcVar2 = FUN_10316ae68;
  func_0x0001000823a8(FUN_10316ae68,puVar1);
  func_0x000100082720("AIStoryReplyLoggingHelperServicesEntryPointWrapperServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f465f0,&UNK_10db938d0);
  puVar12 = &UNK_110616488;
  func_0x000107c613fc(&UNK_110616488,0x28,7);
  *(undefined8 **)(puVar12 + 0x10) = puVar1;
  *(undefined8 *)(puVar12 + 0x18) = param_3;
  *(undefined8 *)(puVar12 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar15 = 0x10316ae70;
  func_0x0001000823a8(0x10316ae70,puVar12);
  pcVar3 = "Bitmoji3DBatchedSceneDisposerEntryPointWrapperServiceProvider";
  func_0x000100082720("Bitmoji3DBatchedSceneDisposerEntryPointWrapperServiceProvider",0x3d,2);
  func_0x0001031bd624();
  func_0x000100082720("ChatReactionMenuScopeExposerSubjectServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f465f8,&UNK_10db936f0);
  func_0x000107c6157c(pcVar2);
  uVar4 = 0x10316ae7c;
  func_0x0001000823a8(0x10316ae7c,pcVar2);
  func_0x000100082720("SCAIStoryReplyLoggingHelperServicesServiceProvider",0x32,2);
  pcVar5 = pcVar3;
  FUN_1031bd478(pcVar3,uVar4);
  func_0x000100082720("SCChatInputPluginScopeGraphBridgeServicesServiceProvider",0x38,2);
  FUN_1031a28f0(param_5,param_6);
  func_0x000100082720("SCMerlinTeamSnapchatSendGateWorkflowServiceProvider",0x33,2);
  pcVar6 = pcVar3;
  func_0x0001031bd6b0();
  func_0x000100082720("ChatReactionMenuScopeExposerObservableServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar7 = FUN_103168490;
  func_0x0001000823a8(FUN_103168490,0);
  func_0x000100082720("SCChatInputPluginScopedServicesCleanupRelayServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f46600,&UNK_10db93700);
  puVar12 = &UNK_1106164b0;
  func_0x000107c613fc(&UNK_1106164b0,0x460,7);
  *(undefined8 *)(puVar12 + 0x10) = param_27;
  *(undefined8 *)(puVar12 + 0x18) = param_61;
  *(undefined8 *)(puVar12 + 0x20) = uVar4;
  *(undefined8 *)(puVar12 + 0x28) = in_stack_00000360;
  *(undefined8 *)(puVar12 + 0x30) = in_stack_000002a8;
  *(undefined8 *)(puVar12 + 0x38) = in_stack_00000390;
  *(undefined8 *)(puVar12 + 0x40) = param_25;
  *(undefined8 *)(puVar12 + 0x48) = in_stack_000003e8;
  *(undefined8 *)(puVar12 + 0x50) = param_32;
  *(undefined8 *)(puVar12 + 0x58) = param_59;
  *(undefined8 *)(puVar12 + 0x60) = in_stack_00000320;
  *(undefined8 *)(puVar12 + 0x68) = in_stack_00000328;
  *(undefined8 *)(puVar12 + 0x70) = param_64;
  *(undefined8 *)(puVar12 + 0x78) = param_53;
  *(undefined8 *)(puVar12 + 0x80) = param_49;
  *(undefined8 *)(puVar12 + 0x88) = param_30;
  *(undefined8 *)(puVar12 + 0x90) = in_stack_00000260;
  *(undefined8 *)(puVar12 + 0x98) = in_stack_000002f8;
  *(undefined8 *)(puVar12 + 0xa0) = param_3;
  *(undefined8 **)(puVar12 + 0xa8) = puVar1;
  *(char **)(puVar12 + 0xb0) = pcVar6;
  *(undefined8 *)(puVar12 + 0xb8) = param_18;
  *(undefined8 *)(puVar12 + 0xc0) = param_43;
  *(undefined8 *)(puVar12 + 200) = param_29;
  *(undefined8 *)(puVar12 + 0xd0) = param_48;
  *(undefined8 *)(puVar12 + 0xd8) = param_57;
  *(undefined8 *)(puVar12 + 0xe0) = in_stack_00000298;
  *(undefined8 *)(puVar12 + 0xe8) = in_stack_000002e8;
  *(undefined8 *)(puVar12 + 0xf0) = in_stack_000002f0;
  *(undefined8 *)(puVar12 + 0xf8) = in_stack_000002c8;
  *(undefined8 *)(puVar12 + 0x100) = in_stack_00000330;
  *(undefined8 *)(puVar12 + 0x108) = in_stack_000003f8;
  *(undefined8 *)(puVar12 + 0x110) = in_stack_00000400;
  *(undefined8 *)(puVar12 + 0x118) = in_stack_000003e0;
  *(undefined8 *)(puVar12 + 0x120) = param_63;
  *(undefined8 *)(puVar12 + 0x128) = param_67;
  *(undefined8 *)(puVar12 + 0x130) = param_68;
  *(undefined8 *)(puVar12 + 0x138) = param_70;
  *(undefined8 *)(puVar12 + 0x140) = in_stack_00000270;
  *(undefined8 *)(puVar12 + 0x148) = in_stack_00000268;
  *(undefined8 *)(puVar12 + 0x150) = param_19;
  *(undefined8 *)(puVar12 + 0x158) = param_71;
  *(undefined8 *)(puVar12 + 0x160) = param_69;
  *(undefined8 *)(puVar12 + 0x168) = in_stack_00000358;
  *(undefined8 *)(puVar12 + 0x170) = in_stack_00000340;
  *(undefined8 *)(puVar12 + 0x178) = in_stack_000002e0;
  *(undefined8 *)(puVar12 + 0x180) = in_stack_000001f8;
  *(undefined8 *)(puVar12 + 0x188) = in_stack_000002a0;
  *(undefined8 *)(puVar12 + 400) = in_stack_000002c0;
  *(undefined8 *)(puVar12 + 0x198) = in_stack_000002b0;
  *(undefined8 *)(puVar12 + 0x1a0) = in_stack_000001f0;
  *(undefined8 *)(puVar12 + 0x1a8) = in_stack_00000210;
  *(undefined8 *)(puVar12 + 0x1b0) = in_stack_00000208;
  *(undefined8 *)(puVar12 + 0x1b8) = in_stack_00000228;
  *(undefined8 *)(puVar12 + 0x1c0) = in_stack_00000248;
  *(undefined8 *)(puVar12 + 0x1c8) = param_50;
  *(undefined8 *)(puVar12 + 0x1d0) = in_stack_00000220;
  *(undefined8 *)(puVar12 + 0x1d8) = in_stack_00000238;
  *(undefined8 *)(puVar12 + 0x1e0) = param_46;
  *(undefined8 *)(puVar12 + 0x1e8) = in_stack_00000200;
  *(undefined8 *)(puVar12 + 0x1f0) = in_stack_00000258;
  *(undefined8 *)(puVar12 + 0x1f8) = in_stack_00000218;
  *(undefined8 *)(puVar12 + 0x200) = param_65;
  *(undefined8 *)(puVar12 + 0x208) = in_stack_00000290;
  *(undefined8 *)(puVar12 + 0x210) = in_stack_00000250;
  *(undefined8 *)(puVar12 + 0x218) = in_stack_000003f0;
  *(undefined8 *)(puVar12 + 0x220) = param_21;
  *(undefined8 *)(puVar12 + 0x228) = in_stack_00000230;
  *(undefined8 *)(puVar12 + 0x230) = in_stack_00000288;
  *(undefined8 *)(puVar12 + 0x238) = in_stack_000002d8;
  *(undefined8 *)(puVar12 + 0x240) = param_17;
  *(undefined8 *)(puVar12 + 0x248) = in_stack_00000338;
  *(undefined8 *)(puVar12 + 0x250) = param_60;
  *(undefined8 *)(puVar12 + 600) = param_66;
  *(undefined8 *)(puVar12 + 0x260) = in_stack_000003b8;
  *(undefined8 *)(puVar12 + 0x268) = in_stack_000003d8;
  *(undefined8 *)(puVar12 + 0x270) = in_stack_000002b8;
  *(undefined8 *)(puVar12 + 0x278) = in_stack_000003c8;
  *(undefined8 *)(puVar12 + 0x280) = in_stack_00000380;
  *(undefined8 *)(puVar12 + 0x288) = param_16;
  *(undefined8 *)(puVar12 + 0x290) = param_22;
  *(undefined8 *)(puVar12 + 0x298) = param_20;
  *(undefined8 *)(puVar12 + 0x2a0) = in_stack_00000300;
  *(undefined8 *)(puVar12 + 0x2a8) = param_31;
  *(undefined8 *)(puVar12 + 0x2b0) = param_14;
  *(undefined8 *)(puVar12 + 0x2b8) = in_stack_000003a8;
  *(undefined8 *)(puVar12 + 0x2c0) = param_41;
  *(undefined8 *)(puVar12 + 0x2c8) = param_45;
  *(undefined8 *)(puVar12 + 0x2d0) = param_39;
  *(undefined8 *)(puVar12 + 0x2d8) = param_23;
  *(undefined8 *)(puVar12 + 0x2e0) = in_stack_00000350;
  *(undefined8 *)(puVar12 + 0x2e8) = param_37;
  *(undefined8 *)(puVar12 + 0x2f0) = param_10;
  *(undefined8 *)(puVar12 + 0x2f8) = param_9;
  *(undefined8 *)(puVar12 + 0x300) = in_stack_00000318;
  *(undefined8 *)(puVar12 + 0x308) = param_13;
  *(undefined8 *)(puVar12 + 0x310) = param_38;
  *(undefined8 *)(puVar12 + 0x318) = param_7;
  *(undefined8 *)(puVar12 + 800) = param_36;
  *(undefined8 *)(puVar12 + 0x328) = param_4;
  *(undefined8 *)(puVar12 + 0x330) = param_34;
  *(undefined8 *)(puVar12 + 0x338) = param_35;
  *(undefined8 *)(puVar12 + 0x340) = param_33;
  *(undefined8 *)(puVar12 + 0x348) = in_stack_00000310;
  *(undefined8 *)(puVar12 + 0x350) = param_40;
  *(undefined8 *)(puVar12 + 0x358) = in_stack_00000308;
  *(undefined8 *)(puVar12 + 0x360) = param_52;
  *(undefined8 *)(puVar12 + 0x368) = param_55;
  *(undefined8 *)(puVar12 + 0x370) = in_stack_00000280;
  *(undefined8 *)(puVar12 + 0x378) = param_62;
  *(undefined8 *)(puVar12 + 0x380) = param_11;
  *(undefined8 *)(puVar12 + 0x388) = param_54;
  *(undefined8 *)(puVar12 + 0x390) = param_56;
  *(undefined8 *)(puVar12 + 0x398) = param_8;
  *(undefined8 *)(puVar12 + 0x3a0) = param_24;
  *(undefined8 *)(puVar12 + 0x3a8) = param_26;
  *(undefined8 *)(puVar12 + 0x3b0) = param_58;
  *(undefined8 *)(puVar12 + 0x3b8) = param_28;
  *(undefined8 *)(puVar12 + 0x3c0) = param_12;
  *(undefined8 *)(puVar12 + 0x3c8) = in_stack_000003a0;
  *(undefined8 *)(puVar12 + 0x3d0) = in_stack_00000398;
  *(undefined8 *)(puVar12 + 0x3d8) = in_stack_000003c0;
  *(undefined8 *)(puVar12 + 0x3e0) = in_stack_00000240;
  *(undefined8 *)(puVar12 + 1000) = in_stack_00000388;
  *(undefined8 *)(puVar12 + 0x3f0) = param_51;
  *(undefined8 *)(puVar12 + 0x3f8) = in_stack_00000370;
  *(undefined8 *)(puVar12 + 0x400) = in_stack_00000378;
  *(undefined8 *)(puVar12 + 0x408) = param_15;
  *(undefined8 *)(puVar12 + 0x410) = in_stack_00000368;
  *(undefined8 *)(puVar12 + 0x418) = in_stack_00000278;
  *(undefined8 *)(puVar12 + 0x420) = param_47;
  *(undefined8 *)(puVar12 + 0x428) = in_stack_00000348;
  *(undefined8 *)(puVar12 + 0x430) = param_42;
  *(undefined8 *)(puVar12 + 0x438) = in_stack_000003b0;
  *(undefined8 *)(puVar12 + 0x440) = param_44;
  *(undefined8 *)(puVar12 + 0x448) = in_stack_000003d0;
  *(undefined8 *)(puVar12 + 0x450) = in_stack_000002d0;
  *(undefined8 *)(puVar12 + 0x458) = param_5;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(in_stack_00000360);
  func_0x000107c6157c(in_stack_000002a8);
  func_0x000107c6157c(in_stack_00000390);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(in_stack_000003e8);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(in_stack_00000320);
  func_0x000107c6157c(in_stack_00000328);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(in_stack_00000260);
  func_0x000107c6157c(in_stack_000002f8);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(in_stack_00000298);
  func_0x000107c6157c(in_stack_000002e8);
  func_0x000107c6157c(in_stack_000002f0);
  func_0x000107c6157c(in_stack_000002c8);
  func_0x000107c6157c(in_stack_00000330);
  func_0x000107c6157c(in_stack_000003f8);
  func_0x000107c6157c(in_stack_00000400);
  func_0x000107c6157c(in_stack_000003e0);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(in_stack_00000270);
  func_0x000107c6157c(in_stack_00000268);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_71);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(in_stack_00000358);
  func_0x000107c6157c(in_stack_00000340);
  func_0x000107c6157c(in_stack_000002e0);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(in_stack_000002a0);
  func_0x000107c6157c(in_stack_000002c0);
  func_0x000107c6157c(in_stack_000002b0);
  func_0x000107c6157c(in_stack_000001f0);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(in_stack_00000220);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(in_stack_00000258);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(in_stack_00000290);
  func_0x000107c6157c(in_stack_00000250);
  func_0x000107c6157c(in_stack_000003f0);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_00000288);
  func_0x000107c6157c(in_stack_000002d8);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(in_stack_00000338);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(in_stack_000003b8);
  func_0x000107c6157c(in_stack_000003d8);
  func_0x000107c6157c(in_stack_000002b8);
  func_0x000107c6157c(in_stack_000003c8);
  func_0x000107c6157c(in_stack_00000380);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(in_stack_00000300);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(in_stack_000003a8);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(in_stack_00000350);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(in_stack_00000318);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(in_stack_00000310);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(in_stack_00000308);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(in_stack_00000280);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(in_stack_000003a0);
  func_0x000107c6157c(in_stack_00000398);
  func_0x000107c6157c(in_stack_000003c0);
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(in_stack_00000388);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(in_stack_00000370);
  func_0x000107c6157c(in_stack_00000378);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(in_stack_00000368);
  func_0x000107c6157c(in_stack_00000278);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(in_stack_00000348);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(in_stack_000003b0);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(in_stack_000003d0);
  func_0x000107c6157c(in_stack_000002d0);
  func_0x000107c6157c(param_5);
  pcVar8 = FUN_10316ae84;
  func_0x0001000823a8(FUN_10316ae84,puVar12);
  func_0x000100082720("SCChatInputPluginRegistryServiceProvider",0x28,2);
  func_0x0001000285a8(0x112f46608,&UNK_10db93708);
  puVar12 = &UNK_1106164d8;
  func_0x000107c613fc(&UNK_1106164d8,0x38,7);
  *(code **)(puVar12 + 0x10) = pcVar2;
  *(undefined8 *)(puVar12 + 0x18) = uVar15;
  *(undefined8 **)(puVar12 + 0x20) = puVar1;
  *(char **)(puVar12 + 0x28) = pcVar5;
  *(code **)(puVar12 + 0x30) = pcVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar7);
  pcVar9 = FUN_10316b0f4;
  func_0x0001000823a8(FUN_10316b0f4,puVar12);
  func_0x000100082720("SCChatInputPluginScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f46570,&UNK_10db93480);
  func_0x000107c6157c(pcVar9);
  uVar10 = 0x10316b104;
  func_0x0001000823a8(0x10316b104,pcVar9);
  func_0x000100082720("SCChatInputPluginScopeInitializationServiceProvider",0x33,2);
  puVar11 = puVar1;
  FUN_1037f55f0(puVar1,pcVar8);
  func_0x000100082720("ChatInputPluginCollectionServiceProvider",0x28,2);
  func_0x0001000285a8(0x112f46550,&UNK_10db93470);
  puVar12 = &UNK_110616500;
  func_0x000107c613fc(&UNK_110616500,0x20,7);
  *(undefined8 **)(puVar12 + 0x10) = puVar11;
  *(undefined8 *)(puVar12 + 0x18) = uVar10;
  func_0x000107c6157c(puVar11);
  func_0x000107c6157c(uVar10);
  uVar13 = 0x10316b10c;
  func_0x0001000823a8(0x10316b10c,puVar12);
  func_0x000100082720("SCChatInputPluginScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112f46568,&UNK_10db93710);
  puVar12 = &UNK_110616528;
  func_0x000107c613fc(&UNK_110616528,0x20,7);
  *(undefined8 *)(puVar12 + 0x10) = uVar13;
  *(code **)(puVar12 + 0x18) = pcVar7;
  func_0x000107c6157c(pcVar7);
  pcVar14 = FUN_10316b140;
  func_0x0001000823a8(FUN_10316b140,puVar12);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(param_5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar11);
  func_0x000100082720("SCChatInputPluginScopeEntryPointProvider",0x28,2);
  *param_1 = pcVar14;
  return;
}



/* Entry: 10316a5f0; end: 10316aa4b;  */

void FUN_10316a5f0(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10316aa4c; end: 10316ae67;  */

void FUN_10316aa4c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_103169510(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 10316ae68; end: 10316ae83;  */

void FUN_10316ae68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10316b3ec();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_10316b320();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10316ae84; end: 10316b0f3;  */

void FUN_10316ae84(void)

{
  long unaff_x20;
  
  FUN_10316b844(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 10316b0f4; end: 10316b113;  */

void FUN_10316b0f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar5 = &UNK_11074d0f0;
  ppuVar8 = &PTR_DAT_1130668b0;
  uVar9 = uVar2;
  func_0x0001000a3aa4();
  func_0x000107c6157c(uVar1);
  uVar6 = 0x112f467c8;
  func_0x0001000285a8(0x112f467c8,&UNK_10db93a58);
  func_0x0001000a6ee8(&UNK_1106165a0,
                      "AIStoryReplyLoggingHelperServicesEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4e,2,FUN_10316d450,uVar1,uVar6,&UNK_1106165a0,&PTR_DAT_112f46610);
  func_0x000107c61574(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x0001000a6ee8(&UNK_110616620,
                      "Bitmoji3DBatchedSceneDisposerEntryPointWrapperScopeInitializationPluginKey",
                      0x4a,2,FUN_10316d500,uVar3,uVar6,&UNK_110616620,&PTR_DAT_112f466e8);
  func_0x000107c61574(uVar3);
  puVar7 = &UNK_110616698;
  func_0x000107c613fc(&UNK_110616698,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar4;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x0001000a6ee8(&UNK_11061cc10,"SCChatInputPluginScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x3d,2,FUN_10316d52c,puVar7,uVar6,&UNK_11061cc10,&PTR_DAT_112f493d0);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_1106166c0;
  func_0x000107c613fc(&UNK_1106166c0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar10;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar10);
  func_0x0001000a6ee8(&UNK_110616348,"SCChatInputPluginScopedServicesScopeInitializationPluginKey",
                      0x3b,2,FUN_10316d614,puVar7,uVar6,&UNK_110616348,&PTR_DAT_112f46578);
  func_0x000107c61574(puVar7);
  uVar6 = 0x112f467d0;
  func_0x0001000285a8(0x112f467d0,&UNK_10db93a60);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar5,ppuVar8,uVar9,uVar6);
  func_0x0001000a7f38("SCChatInputPluginScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = puVar5;
  return;
}



/* Entry: 10316b114; end: 10316b13f;  */

void FUN_10316b114(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10316b140; end: 10316b147;  */

void FUN_10316b140(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_38);
  func_0x000107c61428(lStack_38 + 0x10,auStack_50,1,0);
  uVar2 = *(undefined8 *)(lStack_38 + 0x10);
  *(undefined8 *)(lStack_38 + 0x10) = auStack_50[0];
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_1106162a0;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106162b0;
  return;
}



/* Entry: 10316b148; end: 10316b1af;  */

void FUN_10316b148(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10316b3ec();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_10316b320();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10316b1b0; end: 10316b1f7;  */

undefined8 FUN_10316b1b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_10316b320(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10316b1f8; end: 10316b22b;  */

void FUN_10316b1f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10316b22c; end: 10316b27f;  */

void FUN_10316b22c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10316b280; end: 10316b287;  */

undefined8 FUN_10316b280(void)

{
  return 0x1b;
}



/* Entry: 10316b288; end: 10316b30b;  */

void FUN_10316b288(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10316b43c,param_2,FUN_10316b440,param_2,0x10316b468,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10316b30c; end: 10316b31f;  */

void FUN_10316b30c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110616540;
  return;
}



/* Entry: 10316b320; end: 10316b3cf;  */

void FUN_10316b320(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_1031bf44c(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x0001031bf228();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c6157c();
  FUN_1031bf250();
  func_0x000107c61574(param_1);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar3 != 0) {
    *(long *)(unaff_x20 + 0x20) = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10316b3d0);
  (*pcVar1)();
}



/* Entry: 10316b3d0; end: 10316b3eb;  */

undefined ** FUN_10316b3d0(void)

{
  return &PTR_DAT_1130668b0;
}



/* Entry: 10316b3ec; end: 10316b40b;  */

void FUN_10316b3ec(void)

{
  func_0x000107c61168(&PTR_PTR_112f46678);
  return;
}



/* Entry: 10316b40c; end: 10316b43f;  */

undefined1  [16] FUN_10316b40c(void)

{
  return ZEXT816(0x110616580);
}



/* Entry: 10316b440; end: 10316b493;  */

void FUN_10316b440(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10316b494; end: 10316b5b7;  */

void FUN_10316b494(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_10316b7d0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_1031bf1d4(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x0001031bef10();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c6157c();
  func_0x0001031bef48();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 10316b5b8; end: 10316b697;  */

long FUN_10316b5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_1031bf1d4(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001031bef10();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  func_0x0001031bef48();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 10316b698; end: 10316b6cb;  */

void FUN_10316b698(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10316b6cc; end: 10316b6d3;  */

undefined8 FUN_10316b6cc(void)

{
  return 0x1b;
}



/* Entry: 10316b6d4; end: 10316b757;  */

void FUN_10316b6d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10316b810,param_2,FUN_10316b814,param_2,FUN_10316b83c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10316b758; end: 10316b79f;  */

undefined8 FUN_10316b758(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1031bf0e8();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 10316b7a0; end: 10316b7cf;  */

undefined ** FUN_10316b7a0(void)

{
  return &PTR_DAT_1130668b0;
}



/* Entry: 10316b7d0; end: 10316b7ef;  */

void FUN_10316b7d0(void)

{
  func_0x000107c61168(&PTR_PTR_112f46750);
  return;
}



/* Entry: 10316b7f0; end: 10316b813;  */

undefined1  [16] FUN_10316b7f0(void)

{
  return ZEXT816(0x110616620);
}



/* Entry: 10316b814; end: 10316b83b;  */

void FUN_10316b814(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10316b83c; end: 10316b843;  */

undefined8 FUN_10316b83c(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1031bf0e8();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 10316b844; end: 10316cdaf;  */

/* WARNING: Possible PIC construction at 0x00010316bfe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316bff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c0b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c0d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c1a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c1c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c1d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c2b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c2d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c2e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c2f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c3b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c3c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c3d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c3e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c3f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010316c420: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010316c414) */
/* WARNING: Removing unreachable block (ram,0x00010316c404) */
/* WARNING: Removing unreachable block (ram,0x00010316c3f4) */
/* WARNING: Removing unreachable block (ram,0x00010316c3e4) */
/* WARNING: Removing unreachable block (ram,0x00010316c3d4) */
/* WARNING: Removing unreachable block (ram,0x00010316c3c4) */
/* WARNING: Removing unreachable block (ram,0x00010316c3b4) */
/* WARNING: Removing unreachable block (ram,0x00010316c3a4) */
/* WARNING: Removing unreachable block (ram,0x00010316c394) */
/* WARNING: Removing unreachable block (ram,0x00010316c384) */
/* WARNING: Removing unreachable block (ram,0x00010316c374) */
/* WARNING: Removing unreachable block (ram,0x00010316c364) */
/* WARNING: Removing unreachable block (ram,0x00010316c354) */
/* WARNING: Removing unreachable block (ram,0x00010316c344) */
/* WARNING: Removing unreachable block (ram,0x00010316c334) */
/* WARNING: Removing unreachable block (ram,0x00010316c324) */
/* WARNING: Removing unreachable block (ram,0x00010316c314) */
/* WARNING: Removing unreachable block (ram,0x00010316c304) */
/* WARNING: Removing unreachable block (ram,0x00010316c2f4) */
/* WARNING: Removing unreachable block (ram,0x00010316c2e4) */
/* WARNING: Removing unreachable block (ram,0x00010316c2d4) */
/* WARNING: Removing unreachable block (ram,0x00010316c2c4) */
/* WARNING: Removing unreachable block (ram,0x00010316c2b4) */
/* WARNING: Removing unreachable block (ram,0x00010316c2a4) */
/* WARNING: Removing unreachable block (ram,0x00010316c294) */
/* WARNING: Removing unreachable block (ram,0x00010316c284) */
/* WARNING: Removing unreachable block (ram,0x00010316c274) */
/* WARNING: Removing unreachable block (ram,0x00010316c264) */
/* WARNING: Removing unreachable block (ram,0x00010316c254) */
/* WARNING: Removing unreachable block (ram,0x00010316c244) */
/* WARNING: Removing unreachable block (ram,0x00010316c234) */
/* WARNING: Removing unreachable block (ram,0x00010316c224) */
/* WARNING: Removing unreachable block (ram,0x00010316c214) */
/* WARNING: Removing unreachable block (ram,0x00010316c204) */
/* WARNING: Removing unreachable block (ram,0x00010316c1f4) */
/* WARNING: Removing unreachable block (ram,0x00010316c1e4) */
/* WARNING: Removing unreachable block (ram,0x00010316c1d4) */
/* WARNING: Removing unreachable block (ram,0x00010316c1c4) */
/* WARNING: Removing unreachable block (ram,0x00010316c1b4) */
/* WARNING: Removing unreachable block (ram,0x00010316c1a4) */
/* WARNING: Removing unreachable block (ram,0x00010316c194) */
/* WARNING: Removing unreachable block (ram,0x00010316c184) */
/* WARNING: Removing unreachable block (ram,0x00010316c174) */
/* WARNING: Removing unreachable block (ram,0x00010316c164) */
/* WARNING: Removing unreachable block (ram,0x00010316c154) */
/* WARNING: Removing unreachable block (ram,0x00010316c144) */
/* WARNING: Removing unreachable block (ram,0x00010316c134) */
/* WARNING: Removing unreachable block (ram,0x00010316c124) */
/* WARNING: Removing unreachable block (ram,0x00010316c114) */
/* WARNING: Removing unreachable block (ram,0x00010316c104) */
/* WARNING: Removing unreachable block (ram,0x00010316c0f4) */
/* WARNING: Removing unreachable block (ram,0x00010316c0e4) */
/* WARNING: Removing unreachable block (ram,0x00010316c0d4) */
/* WARNING: Removing unreachable block (ram,0x00010316c0c4) */
/* WARNING: Removing unreachable block (ram,0x00010316c0b4) */
/* WARNING: Removing unreachable block (ram,0x00010316c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010316c094) */
/* WARNING: Removing unreachable block (ram,0x00010316c084) */
/* WARNING: Removing unreachable block (ram,0x00010316c074) */
/* WARNING: Removing unreachable block (ram,0x00010316c064) */
/* WARNING: Removing unreachable block (ram,0x00010316c054) */
/* WARNING: Removing unreachable block (ram,0x00010316c044) */
/* WARNING: Removing unreachable block (ram,0x00010316c034) */
/* WARNING: Removing unreachable block (ram,0x00010316c024) */
/* WARNING: Removing unreachable block (ram,0x00010316c014) */
/* WARNING: Removing unreachable block (ram,0x00010316c004) */
/* WARNING: Removing unreachable block (ram,0x00010316bff4) */
/* WARNING: Removing unreachable block (ram,0x00010316bfe4) */
/* WARNING: Removing unreachable block (ram,0x00010316c424) */

void FUN_10316b844(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000400;
  undefined8 in_stack_00000408;
  
  puVar1 = &UNK_110616670;
  func_0x000107c613fc(&UNK_110616670,0x460,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x318) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 800) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0x350) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x358) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x360) = in_stack_00000310;
  *(undefined8 *)(puVar1 + 0x368) = in_stack_00000318;
  *(undefined8 *)(puVar1 + 0x370) = in_stack_00000320;
  *(undefined8 *)(puVar1 + 0x378) = in_stack_00000328;
  *(undefined8 *)(puVar1 + 0x380) = in_stack_00000330;
  *(undefined8 *)(puVar1 + 0x388) = in_stack_00000338;
  *(undefined8 *)(puVar1 + 0x390) = in_stack_00000340;
  *(undefined8 *)(puVar1 + 0x398) = in_stack_00000348;
  *(undefined8 *)(puVar1 + 0x3a0) = in_stack_00000350;
  *(undefined8 *)(puVar1 + 0x3a8) = in_stack_00000358;
  *(undefined8 *)(puVar1 + 0x3b0) = in_stack_00000360;
  *(undefined8 *)(puVar1 + 0x3b8) = in_stack_00000368;
  *(undefined8 *)(puVar1 + 0x3c0) = in_stack_00000370;
  *(undefined8 *)(puVar1 + 0x3c8) = in_stack_00000378;
  *(undefined8 *)(puVar1 + 0x3d0) = in_stack_00000380;
  *(undefined8 *)(puVar1 + 0x3d8) = in_stack_00000388;
  *(undefined8 *)(puVar1 + 0x3e0) = in_stack_00000390;
  *(undefined8 *)(puVar1 + 1000) = in_stack_00000398;
  *(undefined8 *)(puVar1 + 0x3f0) = in_stack_000003a0;
  *(undefined8 *)(puVar1 + 0x3f8) = in_stack_000003a8;
  *(undefined8 *)(puVar1 + 0x400) = in_stack_000003b0;
  *(undefined8 *)(puVar1 + 0x408) = in_stack_000003b8;
  *(undefined8 *)(puVar1 + 0x410) = in_stack_000003c0;
  *(undefined8 *)(puVar1 + 0x418) = in_stack_000003c8;
  *(undefined8 *)(puVar1 + 0x420) = in_stack_000003d0;
  *(undefined8 *)(puVar1 + 0x428) = in_stack_000003d8;
  *(undefined8 *)(puVar1 + 0x430) = in_stack_000003e0;
  *(undefined8 *)(puVar1 + 0x438) = in_stack_000003e8;
  *(undefined8 *)(puVar1 + 0x440) = in_stack_000003f0;
  *(undefined8 *)(puVar1 + 0x448) = in_stack_000003f8;
  *(undefined8 *)(puVar1 + 0x450) = in_stack_00000400;
  *(undefined8 *)(puVar1 + 0x458) = in_stack_00000408;
  uVar2 = 0x112f467c0;
  func_0x0001000285a8(0x112f467c0,&UNK_10db93a50);
  func_0x000107c613fc();
  pcVar3 = FUN_10316cdb0;
  func_0x0001000841fc(FUN_10316cdb0,puVar1,uVar2);
  func_0x000100084214("SCChatInputPluginRegistryServiceProvider",0x28,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10316cdb0; end: 10316d1e7;  */

void FUN_10316cdb0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010316c448(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                      *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                      *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                      *(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                      *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                      *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                      *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                      *(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0),
                      *(undefined8 *)(unaff_x20 + 0x1a8),*(undefined8 *)(unaff_x20 + 0x1b0),
                      *(undefined8 *)(unaff_x20 + 0x1b8),*(undefined8 *)(unaff_x20 + 0x1c0),
                      *(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0),
                      *(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                      *(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                      *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                      *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 10316d1e8; end: 10316d44f;  */

void FUN_10316d1e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d0f0;
  ppuVar4 = &PTR_DAT_1130668b0;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112f467c8;
  func_0x0001000285a8(0x112f467c8,&UNK_10db93a58);
  func_0x0001000a6ee8(&UNK_1106165a0,
                      "AIStoryReplyLoggingHelperServicesEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4e,2,FUN_10316d450,param_2,uVar2,&UNK_1106165a0,&PTR_DAT_112f46610);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110616620,
                      "Bitmoji3DBatchedSceneDisposerEntryPointWrapperScopeInitializationPluginKey",
                      0x4a,2,FUN_10316d500,param_3,uVar2,&UNK_110616620,&PTR_DAT_112f466e8);
  func_0x000107c61574(param_3);
  puVar3 = &UNK_110616698;
  func_0x000107c613fc(&UNK_110616698,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_11061cc10,"SCChatInputPluginScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x3d,2,FUN_10316d52c,puVar3,uVar2,&UNK_11061cc10,&PTR_DAT_112f493d0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1106166c0;
  func_0x000107c613fc(&UNK_1106166c0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_110616348,"SCChatInputPluginScopedServicesScopeInitializationPluginKey",
                      0x3b,2,FUN_10316d614,puVar3,uVar2,&UNK_110616348,&PTR_DAT_112f46578);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f467d0;
  func_0x0001000285a8(0x112f467d0,&UNK_10db93a60);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCChatInputPluginScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10316d450; end: 10316d47b;  */

void FUN_10316d450(void)

{
  FUN_10316d47c();
  return;
}



/* Entry: 10316d47c; end: 10316d4ff;  */

void FUN_10316d47c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 10316d500; end: 10316d52b;  */

void FUN_10316d500(void)

{
  FUN_10316d47c();
  return;
}



/* Entry: 10316d52c; end: 10316d56b;  */

void FUN_10316d52c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001031bd738(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SCChatInputPluginScopeGraphBridgeScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10316d56c; end: 10316d613;  */

void FUN_10316d56c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106166e8;
  func_0x000107c613fc(&UNK_1106166e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10316d648;
  func_0x0001000823a8(FUN_10316d648,puVar1);
  func_0x000100082720("SCChatInputPluginScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10316d614; end: 10316d61b;  */

void FUN_10316d614(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1106166e8;
  func_0x000107c613fc(&UNK_1106166e8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10316d648;
  func_0x0001000823a8(FUN_10316d648,puVar3);
  func_0x000100082720("SCChatInputPluginScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10316d61c; end: 10316d647;  */

void FUN_10316d61c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10316d648; end: 10316d65f;  */

void FUN_10316d648(undefined8 *param_1)

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
  puVar1 = &UNK_1106163d0;
  func_0x000107c613fc(&UNK_1106163d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031686a4;
  func_0x00010058fa64(FUN_1031686a4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10316d660; end: 10316dcbf;  */

void FUN_10316d660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f467d8,&UNK_10db93a70);
  puVar1 = &UNK_1106167e8;
  func_0x000107c613fc(&UNK_1106167e8,0x98,7);
  *(undefined8 *)(puVar1 + 0x10) = param_12;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_11;
  *(undefined8 *)(puVar1 + 0x38) = param_13;
  *(undefined8 *)(puVar1 + 0x40) = param_2;
  *(undefined8 *)(puVar1 + 0x48) = param_14;
  *(undefined8 *)(puVar1 + 0x50) = param_7;
  *(undefined8 *)(puVar1 + 0x58) = param_15;
  *(undefined8 *)(puVar1 + 0x60) = param_8;
  *(undefined8 *)(puVar1 + 0x68) = param_17;
  *(undefined8 *)(puVar1 + 0x70) = param_9;
  *(undefined8 *)(puVar1 + 0x78) = param_16;
  *(undefined8 *)(puVar1 + 0x80) = param_6;
  *(undefined8 *)(puVar1 + 0x88) = param_10;
  *(undefined8 *)(puVar1 + 0x90) = param_3;
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x10316d7e4,puVar1);
  return;
}



/* Entry: 10316dcc0; end: 10316dccf;  */

undefined1  [16] FUN_10316dcc0(void)

{
  return ZEXT816(0x110616810);
}



/* Entry: 10316dcd0; end: 10316e12b;  */

void FUN_10316dcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f467d8,&UNK_10db93a70);
  puVar1 = &UNK_110616908;
  func_0x000107c613fc(&UNK_110616908,0x1d0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_45;
  *(undefined8 *)(puVar1 + 0x18) = param_46;
  *(undefined8 *)(puVar1 + 0x20) = param_47;
  *(undefined8 *)(puVar1 + 0x28) = param_49;
  *(undefined8 *)(puVar1 + 0x30) = param_50;
  *(undefined8 *)(puVar1 + 0x38) = param_17;
  *(undefined8 *)(puVar1 + 0x40) = param_19;
  *(undefined8 *)(puVar1 + 0x48) = param_24;
  *(undefined8 *)(puVar1 + 0x50) = param_18;
  *(undefined8 *)(puVar1 + 0x58) = param_21;
  *(undefined8 *)(puVar1 + 0x60) = param_53;
  *(undefined8 *)(puVar1 + 0x68) = param_54;
  *(undefined8 *)(puVar1 + 0x70) = param_37;
  *(undefined8 *)(puVar1 + 0x78) = param_55;
  *(undefined8 *)(puVar1 + 0x80) = param_56;
  *(undefined8 *)(puVar1 + 0x88) = param_2;
  *(undefined8 *)(puVar1 + 0x90) = param_3;
  *(undefined8 *)(puVar1 + 0x98) = param_4;
  *(undefined8 *)(puVar1 + 0xa0) = param_5;
  *(undefined8 *)(puVar1 + 0xa8) = param_6;
  *(undefined8 *)(puVar1 + 0xb0) = param_15;
  *(undefined8 *)(puVar1 + 0xb8) = param_8;
  *(undefined8 *)(puVar1 + 0xc0) = param_7;
  *(undefined8 *)(puVar1 + 200) = param_10;
  *(undefined8 *)(puVar1 + 0xd0) = param_29;
  *(undefined8 *)(puVar1 + 0xd8) = param_9;
  *(undefined8 *)(puVar1 + 0xe0) = param_11;
  *(undefined8 *)(puVar1 + 0xe8) = param_12;
  *(undefined8 *)(puVar1 + 0xf0) = param_13;
  *(undefined8 *)(puVar1 + 0xf8) = param_14;
  *(undefined8 *)(puVar1 + 0x100) = param_22;
  *(undefined8 *)(puVar1 + 0x108) = param_23;
  *(undefined8 *)(puVar1 + 0x110) = param_25;
  *(undefined8 *)(puVar1 + 0x118) = param_26;
  *(undefined8 *)(puVar1 + 0x120) = param_28;
  *(undefined8 *)(puVar1 + 0x128) = param_30;
  *(undefined8 *)(puVar1 + 0x130) = param_27;
  *(undefined8 *)(puVar1 + 0x138) = param_31;
  *(undefined8 *)(puVar1 + 0x140) = param_32;
  *(undefined8 *)(puVar1 + 0x148) = param_36;
  *(undefined8 *)(puVar1 + 0x150) = param_33;
  *(undefined8 *)(puVar1 + 0x158) = param_34;
  *(undefined8 *)(puVar1 + 0x160) = param_35;
  *(undefined8 *)(puVar1 + 0x168) = param_38;
  *(undefined8 *)(puVar1 + 0x170) = param_39;
  *(undefined8 *)(puVar1 + 0x178) = param_41;
  *(undefined8 *)(puVar1 + 0x180) = param_42;
  *(undefined8 *)(puVar1 + 0x188) = param_20;
  *(undefined8 *)(puVar1 + 400) = param_1;
  *(undefined8 *)(puVar1 + 0x198) = param_43;
  *(undefined8 *)(puVar1 + 0x1a0) = param_44;
  *(undefined8 *)(puVar1 + 0x1a8) = param_16;
  *(undefined8 *)(puVar1 + 0x1b0) = param_48;
  *(undefined8 *)(puVar1 + 0x1b8) = param_40;
  *(undefined8 *)(puVar1 + 0x1c0) = param_51;
  *(undefined8 *)(puVar1 + 0x1c8) = param_52;
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_52);
  func_0x0001000823a8(FUN_10316e12c,puVar1);
  return;
}



/* Entry: 10316e12c; end: 10316f257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10316e12c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined *puVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined *puVar54;
  undefined8 uVar55;
  undefined *puVar56;
  long unaff_x20;
  undefined *puStack_3d0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
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
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  
  uVar21 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x80);
  func_0x000100083b20(&puStack_a8);
  puVar7 = puStack_a8;
  uVar6 = 0x112f20870;
  func_0x0001000285a8(0x112f20870,&UNK_10db59570);
  func_0x000107c610f8();
  func_0x00010017da58(puVar7,uVar6);
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(puVar7);
  func_0x000100083b20(&puStack_a8);
  puVar7 = puStack_a8;
  uVar6 = 0x112dafb90;
  func_0x0001000285a8(0x112dafb90,&UNK_10d958cf0);
  func_0x000107c610f8();
  func_0x00010017da58(puVar7,uVar6);
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(puVar7);
  func_0x000100083b20(&puStack_a8);
  puVar7 = puStack_a8;
  uVar6 = 0x112e7a318;
  func_0x0001000285a8(0x112e7a318,&UNK_10da84650);
  func_0x000107c610f8();
  func_0x00010017da58(puVar7,uVar6);
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(puVar7);
  func_0x000100083b20(&puStack_a8);
  puVar7 = puStack_a8;
  uVar6 = 0x112ec6160;
  func_0x0001000285a8(0x112ec6160,&UNK_10dae75f0);
  func_0x000107c610f8();
  func_0x00010017da58(puVar7,uVar6);
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(puVar7);
  func_0x000100083b20(&puStack_a8);
  puVar7 = puStack_a8;
  uVar6 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  func_0x00010017da58(puVar7,uVar6);
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(puVar7);
  func_0x000100083b20(&puStack_a8);
  puVar1 = puStack_a8;
  func_0x000100083b20(&puStack_a8);
  puVar2 = puStack_a8;
  func_0x000100083b20(&puStack_a8);
  puVar3 = puStack_a8;
  func_0x000100083b20(&puStack_a8);
  puVar4 = puStack_a8;
  func_0x000100083b20(&puStack_a8);
  puVar5 = puStack_a8;
  puVar14 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = (code *)0x10316f268;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  uStack_98 = 0x10316f354;
  puStack_90 = &UNK_110616940;
  ppuVar13 = &puStack_a8;
  uStack_80 = uVar21;
  func_0x000107c60bc4(ppuVar13);
  uVar6 = uStack_80;
  func_0x000107c6157c(uVar21);
  func_0x000107c61574(uVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar13);
  puVar15 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_88 = (code *)0x10316f350;
  puStack_a8 = puVar7;
  uStack_a0 = 0x42000000;
  uStack_98 = 0x10316f358;
  puStack_90 = &UNK_110616968;
  ppuVar13 = &puStack_a8;
  uStack_80 = uVar19;
  func_0x000107c60bc4();
  uVar6 = uStack_80;
  func_0x000107c6157c(uVar19);
  func_0x000107c61574(uVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar13);
  func_0x000100083b20(&puStack_a8);
  puVar17 = puStack_a8;
  puVar16 = puStack_a8;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(puVar17);
  puVar17 = puVar16;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  if (puVar17 != (undefined *)0x0) {
    puVar16 = puVar17;
    func_0x000107c49b50();
    func_0x000107c615e8(puVar17);
    if ((int)puVar16 != 0) {
      puStack_3d0 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      pcStack_88 = FUN_10316f314;
      puStack_a8 = puVar7;
      uStack_a0 = 0x42000000;
      uStack_98 = 0x10316f35c;
      puStack_90 = &UNK_1106169b8;
      ppuVar13 = &puStack_a8;
      uStack_80 = uVar20;
      func_0x000107c60bc4(ppuVar13);
      uVar6 = uStack_80;
      func_0x000107c6157c(uVar20);
      func_0x000107c61574(uVar6);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar13);
      goto LAB_10316e678;
    }
  }
  puStack_3d0 = (undefined *)0x0;
LAB_10316e678:
  puVar17 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_88 = (code *)0x10316f360;
  puStack_a8 = puVar7;
  uStack_a0 = 0x42000000;
  uStack_98 = 0x10316f364;
  puStack_90 = &UNK_110616990;
  ppuVar13 = &puStack_a8;
  uStack_80 = uVar22;
  func_0x000107c60bc4(ppuVar13);
  uVar6 = uStack_80;
  func_0x000107c6157c(uVar22);
  func_0x000107c61574(uVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar13);
  func_0x000100083b20(&puStack_a8);
  puVar7 = puStack_a8;
  uVar18 = *(undefined8 *)(puStack_a8 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(puVar7);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  uVar19 = uStack_c0;
  func_0x000107c4a7c8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_c0);
  func_0x000100083b20(&uStack_c8);
  uVar20 = uStack_c8;
  func_0x000107c4d80c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  uVar21 = uStack_d8;
  func_0x000107c5bdcc();
  func_0x000107c61180();
  func_0x000107c61170(uStack_d8);
  func_0x000100083b20(&uStack_e0);
  uVar22 = uStack_e0;
  func_0x000107c5c894();
  func_0x000107c61180();
  func_0x000107c61170(uStack_e0);
  func_0x000100083b20(&uStack_e8);
  uVar23 = uStack_e8;
  func_0x000107c422dc();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000100083b20(&uStack_f0);
  uVar24 = uStack_e8;
  func_0x00010451338c();
  func_0x000107c61170(uStack_f0);
  func_0x000100083b20(&uStack_f8);
  uVar25 = uStack_f8;
  func_0x000107c4456c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_f8);
  func_0x000100083b20(&lStack_100);
  uVar26 = *(undefined8 *)(lStack_100 + _DAT_112fb9ae0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_100);
  func_0x000100083b20(&lStack_108);
  uVar27 = *(undefined8 *)(lStack_108 + _DAT_112ff6288);
  func_0x000107c61174();
  func_0x000107c61170(lStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  uVar28 = uStack_118;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(uStack_118);
  puVar7 = puVar1;
  func_0x000107c5bd68();
  func_0x000107c61180();
  func_0x000100083b20(&uStack_120);
  uVar29 = uStack_120;
  func_0x000107c51aa8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_120);
  func_0x000100083b20(&uStack_128);
  uVar30 = uStack_128;
  func_0x000107c3f8d0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_128);
  puVar16 = puVar2;
  func_0x000107c3e550();
  func_0x000107c61180();
  puVar31 = puVar1;
  func_0x000107c4fb90();
  func_0x000107c61180();
  puVar32 = puVar2;
  func_0x000107c43a4c();
  func_0x000107c61180();
  puVar33 = puVar3;
  func_0x000107c4f830();
  func_0x000107c61180();
  puVar34 = puVar3;
  func_0x000107c3ab58();
  func_0x000107c61180();
  func_0x000100083b20(&uStack_130);
  uVar6 = uStack_130;
  uVar35 = uStack_130;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar35;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar35);
  uVar35 = uVar6;
  func_0x000107c5bd88();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000100083b20(&uStack_130);
  uVar6 = uStack_130;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(uStack_130);
  puVar36 = puVar5;
  func_0x000107c3de28();
  func_0x000107c61180();
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  uVar37 = uStack_140;
  func_0x000107c43a80();
  func_0x000107c61180();
  func_0x000107c61170(uStack_140);
  func_0x000100083b20(&lStack_148);
  uVar38 = *(undefined8 *)(lStack_148 + _DAT_112fc2100);
  func_0x000107c61174();
  func_0x000107c61170(lStack_148);
  func_0x000100083b20(&uStack_150);
  uVar39 = uStack_150;
  func_0x000107c42eac();
  func_0x000107c61180();
  func_0x000107c61170(uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000107c61174();
  func_0x000100083b20(&uStack_160);
  uVar40 = uStack_160;
  func_0x000107c5bd94();
  func_0x000107c61180();
  func_0x000107c61170(uStack_160);
  func_0x000100083b20(&uStack_168);
  uVar41 = uStack_168;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_168);
  func_0x000100083b20(&lStack_170);
  uVar42 = *(undefined8 *)(lStack_170 + _DAT_11302ecd0);
  func_0x000107c615f0();
  func_0x000107c61170(lStack_170);
  func_0x000100083b20(&uStack_178);
  uVar43 = uStack_178;
  func_0x000107c410ec();
  func_0x000107c61180();
  func_0x000107c61170(uStack_178);
  func_0x000100083b20(&uStack_180);
  func_0x000100083b20(&lStack_188);
  uVar44 = *(undefined8 *)(lStack_188 + _DAT_112ff2188);
  func_0x000107c61174();
  func_0x000107c61170(lStack_188);
  func_0x000100083b20(&uStack_190);
  uVar45 = uStack_190;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_190);
  func_0x000100083b20(&lStack_198);
  uVar46 = *(undefined8 *)(lStack_198 + _DAT_112fef810);
  func_0x000107c61174();
  func_0x000107c61170(lStack_198);
  func_0x000100083b20(&uStack_1a0);
  uVar47 = uStack_1a0;
  func_0x000107c41f6c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_1a0);
  func_0x000100083b20(&uStack_1a8);
  uVar48 = uStack_1a8;
  func_0x000107c40454();
  func_0x000107c61180();
  func_0x000107c61170(uStack_1a8);
  puVar49 = puVar4;
  func_0x000107c3fbbc();
  func_0x000107c61180();
  func_0x000100083b20(&lStack_1b0);
  uVar50 = *(undefined8 *)(lStack_1b0 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(lStack_1b0);
  func_0x000100083b20(&lStack_1b8);
  uVar51 = *(undefined8 *)(lStack_1b8 + _DAT_113092298);
  func_0x000107c615f0();
  func_0x000107c61170(lStack_1b8);
  func_0x000107c61174();
  func_0x000100083b20(&uStack_1c0);
  uVar52 = uStack_1c0;
  func_0x000107c40480();
  func_0x000107c61180();
  func_0x000107c61170(uStack_1c0);
  func_0x000100083b20(&lStack_1c8);
  uVar53 = *(undefined8 *)(lStack_1c8 + _DAT_1130343d8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_1c8);
  puVar54 = puVar5;
  func_0x000107c3dda4();
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000100083b20(&uStack_1d0);
  func_0x000107c61174();
  func_0x000100083b20(&uStack_1d8);
  func_0x000107c61174();
  func_0x000100083b20(&uStack_1e0);
  func_0x000100083b20(&lStack_1e8);
  uVar55 = *(undefined8 *)(lStack_1e8 + _DAT_1130190c8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_1e8);
  puVar56 = PTR_PTR_1126accf8;
  func_0x000107c610f8();
  func_0x000107c49324();
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puStack_3d0);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uStack_1e0);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uStack_1d8);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uStack_1d0);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar54);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c615e8(uVar51);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(puVar49);
  func_0x000107c61170(uVar48);
  func_0x000107c615e8(uVar47);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uStack_180);
  func_0x000107c61170(uVar43);
  func_0x000107c615e8(uVar42);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uStack_158);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uStack_138);
  func_0x000107c61170(puVar36);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(puVar34);
  func_0x000107c61170(puVar33);
  func_0x000107c61170(puVar32);
  func_0x000107c61170(puVar31);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(puVar7);
  func_0x000107c615e8(uVar28);
  func_0x000107c61170(uStack_110);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uStack_d0);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uStack_b8);
  func_0x000107c61170(uStack_b0);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  *param_1 = puVar56;
  return;
}



/* Entry: 10316f258; end: 10316f287;  */

undefined1  [16] FUN_10316f258(void)

{
  return ZEXT816(0x110616930);
}



/* Entry: 10316f288; end: 10316f313;  */

undefined8 FUN_10316f288(void)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_30);
  uVar1 = uStack_30;
  func_0x00010008a7c8(&uStack_28);
  func_0x000107c61574(uVar1);
  func_0x000100083b20(&uStack_30);
  func_0x000107c61574(uStack_28);
  return uStack_30;
}



/* Entry: 10316f314; end: 10316f337;  */

undefined8 FUN_10316f314(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 10316f338; end: 10316f367;  */

void FUN_10316f338(long param_1,long param_2)

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



/* Entry: 10316f368; end: 10316f733;  */

void FUN_10316f368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f467d8,&UNK_10db93a70);
  puVar1 = &UNK_110616a98;
  func_0x000107c613fc(&UNK_110616a98,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_9;
  *(undefined8 *)(puVar1 + 0x48) = param_1;
  *(undefined8 *)(puVar1 + 0x50) = param_6;
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(0x10316f46c,puVar1);
  return;
}



/* Entry: 10316f734; end: 10316f743;  */

undefined1  [16] FUN_10316f734(void)

{
  return ZEXT816(0x110616ac0);
}



/* Entry: 10316f744; end: 10316f7f3;  */

void FUN_10316f744(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c3f770();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c41574();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10316f7f4; end: 10316f817;  */

void FUN_10316f7f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1031715d8();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 10316f818; end: 10316f8b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10316f818(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_11302a318);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c40a64();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10316f8b8; end: 10316f8e7;  */

void FUN_10316f8b8(undefined8 *param_1)

{
  func_0x000104368d80();
  uRam0000000113806eb8 = *param_1;
  uRam0000000113806ec0 = param_1[1];
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 10316f8e8; end: 10316f917;  */

void FUN_10316f8e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  func_0x000104368d80();
  uVar1 = param_1[1];
  *param_2 = *param_1;
  *param_3 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 10316f918; end: 10316fb2f;  */

void FUN_10316f918(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffb0 + -extraout_x8;
  if (lRam0000000112f467f8 != -1) {
    func_0x000107c61568(0x112f467f8,0x10316f8c8);
  }
  uVar6 = uRam0000000113806ee0;
  uVar4 = uRam0000000113806ed8;
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  lVar5 = lRam0000000112f46800;
  func_0x000107c61434(uVar6);
  if (lVar5 != -1) {
    func_0x000107c61568(0x112f46800,FUN_10316f8b8);
  }
  uVar1 = uRam0000000113806ec0;
  *(undefined8 *)(lVar2 + 0x20) = uRam0000000113806eb8;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar3 + -8);
  (**(code **)(lVar11 + 0x38))(puVar9,1,1,lVar3);
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar4,uVar6);
  func_0x000107c6142c(uVar6);
  lVar5 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
  uVar6 = 0x73656d6147;
  func_0x000107c5fadc(0x73656d6147,0xe500000000000000);
  puVar7 = puVar9;
  (**(code **)(lVar11 + 0x30))(puVar9,1,lVar3);
  puVar10 = (undefined1 *)0x0;
  if ((int)puVar7 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar11 + 8))(puVar9,lVar3);
    puVar10 = puVar7;
  }
  puVar8 = PTR_PTR_1126cce38;
  func_0x000107c610f8();
  func_0x000107c45d54();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar10);
  puRam0000000113806ee8 = puVar8;
  return;
}



/* Entry: 10316fb30; end: 10316fb43;  */

void FUN_10316fb30(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110616b88;
  if (lRam0000000112f467f0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f467f0 = param_1;
  }
  return;
}



/* Entry: 10316fb44; end: 10316fb87;  */

void FUN_10316fb44(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10316fb88; end: 10316fba7;  */

void FUN_10316fb88(void)

{
  func_0x000107c61168(&PTR_PTR_1128bc640);
  return;
}



/* Entry: 10316fba8; end: 10316fc0b; -[_TtC19LensGamesChatDrawer36GamesDrawerCategoriesProviderFactory categoriesProviderWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10316fba8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  long lStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f46818);
  FUN_10316fb88();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f46820) = uVar3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c615f0(uVar3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10316fc0c; end: 10316fc0f; -[_TtC19LensGamesChatDrawer36GamesDrawerCategoriesProviderFactory reset] */

void FUN_10316fc0c(void)

{
  return;
}



/* Entry: 10316fc10; end: 10316fc3b; -[_TtC19LensGamesChatDrawer36GamesDrawerCategoriesProviderFactory init] */

void FUN_10316fc10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensGamesChatDrawer.GamesDrawerCategoriesProviderFactory",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10316fc3c);
  (*pcVar1)();
}



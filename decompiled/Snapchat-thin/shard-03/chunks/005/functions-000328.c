/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102937ddc; end: 102937e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102937ddc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecdf90) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102937e28; end: 102937eb7; -[_TtC41FanPassSubscriptionManagementPageLauncher47FanPassSubscriptionManagementPageLauncherPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102937e28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112ecdf90);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 102937eb8; end: 102937ebb; -[_TtC41FanPassSubscriptionManagementPageLauncher47FanPassSubscriptionManagementPageLauncherPlugin setNativePayloadHandlers:] */

void FUN_102937eb8(void)

{
  return;
}



/* Entry: 102937ebc; end: 102937f1b; -[_TtC41FanPassSubscriptionManagementPageLauncher47FanPassSubscriptionManagementPageLauncherPlugin init] */

void FUN_102937ebc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FanPassSubscriptionManagementPageLauncher.FanPassSubscriptionManagementPageLauncherPlugin"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102937ee8);
  (*pcVar1)();
}



/* Entry: 102937f1c; end: 102937f2b; -[_TtC41FanPassSubscriptionManagementPageLauncher47FanPassSubscriptionManagementPageLauncherPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102937f1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecdf90));
  return;
}



/* Entry: 102937f2c; end: 102937fab;  */

void FUN_102937f2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_11056f0c0;
  func_0x000107c613fc(&UNK_11056f0c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1029380b4,puVar1);
  return;
}



/* Entry: 102937fac; end: 1029380b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102937fac(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_70;
  func_0x000100083b20(&uStack_48);
  func_0x00010451338c();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  lVar1 = 0;
  FUN_102937da0();
  lVar2 = lVar1;
  func_0x000107c610f8();
  lVar4 = _DAT_112ecdf50;
  func_0x000107c61614(lVar2 + _DAT_112ecdf50,0);
  func_0x000107c61614(lVar2 + _DAT_112ecdf58,0);
  func_0x000107c61604(lVar2 + lVar4,param_2);
  *(undefined8 *)(lVar2 + _DAT_112ecdf60) = uStack_50;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  func_0x000107c61170();
  FUN_1029380bc();
  lVar4 = param_2;
  func_0x000107c610f8();
  *(long **)(lVar4 + _DAT_112ecdf90) = plVar3;
  lStack_70 = lVar4;
  lStack_68 = param_2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 1029380b4; end: 1029380bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029380b4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar6 = &lStack_70;
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x00010451338c();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  lVar2 = 0;
  FUN_102937da0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar5 = _DAT_112ecdf50;
  func_0x000107c61614(lVar3 + _DAT_112ecdf50,0);
  func_0x000107c61614(lVar3 + _DAT_112ecdf58,0);
  func_0x000107c61604(lVar3 + lVar5,lVar1);
  *(undefined8 *)(lVar3 + _DAT_112ecdf60) = uStack_50;
  plVar4 = &lStack_60;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c61170();
  FUN_1029380bc();
  lVar5 = lVar1;
  func_0x000107c610f8();
  *(long **)(lVar5 + _DAT_112ecdf90) = plVar4;
  lStack_70 = lVar5;
  lStack_68 = lVar1;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  return;
}



/* Entry: 1029380bc; end: 1029380db;  */

void FUN_1029380bc(void)

{
  func_0x000107c61168(&PTR_PTR_1128718c8);
  return;
}



/* Entry: 1029380dc; end: 1029380eb;  */

undefined1  [16] FUN_1029380dc(void)

{
  return ZEXT816(0x11056f0e8);
}



/* Entry: 1029380ec; end: 102938103; -[_TtC31FanPassSubscriptionPageLauncher38FanPassSubscriptionPageLauncherHandler payloadClass] */

void FUN_1029380ec(void)

{
  func_0x000103b676f0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 102938104; end: 102938107; -[_TtC31FanPassSubscriptionPageLauncher38FanPassSubscriptionPageLauncherHandler setPayloadClass:] */

void FUN_102938104(void)

{
  return;
}



/* Entry: 102938108; end: 1029381af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102938108(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  lVar1 = _DAT_112ecdfc0;
  func_0x000107c61614(unaff_x20 + _DAT_112ecdfc0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ecdfc8,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112ecdfd0) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1029381b0; end: 1029385d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029381b0(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puVar6;
  
  puVar6 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar5 = (int)puVar6;
  func_0x000107c4a02c();
  if (iVar5 == 0) {
    pcVar9 = "launch(withPayload:completion:)";
    func_0x0001000c10c0("launch(withPayload:completion:)");
    func_0x000107c61180();
    puVar6 = &UNK_11056f190;
    func_0x000107c613fc(&UNK_11056f190,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    func_0x000100672b50(param_1,&puStack_80);
    puVar10 = &UNK_11056f1b8;
    func_0x000107c613fc(&UNK_11056f1b8,0x48,7);
    *(undefined8 *)(puVar10 + 0x20) = uStack_78;
    *(undefined **)(puVar10 + 0x18) = puStack_80;
    *(undefined **)(puVar10 + 0x10) = puVar6;
    *(undefined8 *)(puVar10 + 0x30) = uStack_68;
    *(undefined8 *)(puVar10 + 0x28) = uStack_70;
    *(code **)(puVar10 + 0x38) = param_2;
    *(undefined8 *)(puVar10 + 0x40) = param_3;
    pcStack_90 = FUN_10293864c;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_11056f1d0;
    ppuVar11 = &puStack_b0;
    puStack_88 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar6 = puStack_88;
    func_0x000100f1d248(param_2,param_3);
    func_0x000107c61574(puVar6);
    func_0x000107c4e524(pcVar9);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c615e8(pcVar9);
    return;
  }
  func_0x000100672b50(param_1,&puStack_b0);
  if (puStack_98 == (undefined *)0x0) {
    func_0x00010006e7f4(&puStack_b0);
  }
  else {
    uVar7 = 0;
    func_0x000103b676f0(0);
    ppuVar11 = &puStack_80;
    func_0x000107c6147c(ppuVar11,&puStack_b0,PTR___sypN_11034f1a8 + 8,uVar7,6);
    puVar6 = puStack_80;
    lVar4 = _DAT_112ecdfc8;
    if (((ulong)ppuVar11 & 1) != 0) {
      lVar8 = unaff_x20 + _DAT_112ecdfc8;
      func_0x000107c61618();
      if (lVar8 == 0) {
        uVar12 = unaff_x20 + _DAT_112ecdfc0;
        func_0x000107c61618();
        if (uVar12 == 0) goto joined_r0x000102938598;
        uVar13 = uVar12;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar12);
        if (uVar13 == 0) goto joined_r0x000102938598;
        uVar12 = uVar13;
        func_0x000107c61150(uVar13,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_topmostViewController_11267b0f0);
        if ((uVar12 & 1) == 0) {
          func_0x000107c615e8(uVar13);
          goto joined_r0x000102938598;
        }
        uVar12 = uVar13;
        func_0x000107c5cc6c();
        func_0x000107c61180();
        func_0x000107c615e8(uVar13);
        puVar14 = PTR_PTR_1126aead8;
        func_0x000107c610f8();
        func_0x000107c4807c();
        uVar7 = *(undefined8 *)(puVar6 + _DAT_112fef570);
        uVar2 = *(undefined8 *)((long)(puVar6 + _DAT_112fef570) + 8);
        uVar1 = *(undefined8 *)(puVar6 + _DAT_112fef578);
        uVar3 = *(undefined8 *)((long)(puVar6 + _DAT_112fef578) + 8);
        uVar16 = *(undefined8 *)(puVar6 + _DAT_112fef580);
        func_0x0001003604c8();
        func_0x000107c610f8();
        puVar15 = puVar14;
        func_0x000107c61174(puVar14);
        func_0x000107c61434(uVar2);
        func_0x000107c61434(uVar3);
        func_0x000107c61174(uVar16);
        func_0x000107c61174();
        func_0x000103b67ad8(puVar14,uVar7,uVar2,uVar1,uVar3,0,0,uVar16);
        puStack_80 = puVar14;
        func_0x00010008a7c8(&puStack_b0,&puStack_80);
        func_0x000100083b20(&puStack_80);
        func_0x000107c61574(puStack_b0);
        puVar10 = puStack_80;
        func_0x000107c3e2c0(puVar15);
        func_0x000107c61604(unaff_x20 + lVar4,puVar10);
        if (param_2 == (code *)0x0) {
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar14);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar15);
          func_0x000107c61170(uVar12);
          return;
        }
        uStack_a8 = 0;
        puStack_b0 = (undefined *)0x0;
        puStack_98 = (undefined *)0x0;
        puStack_a0 = (undefined *)0x0;
        (*param_2)(0,&puStack_b0);
        func_0x000107c61170(uVar12);
        func_0x000107c61170(puVar15);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar6);
      }
      else {
        func_0x000107c61170();
joined_r0x000102938598:
        if (param_2 == (code *)0x0) {
          func_0x000107c61170(puVar6);
          return;
        }
        uStack_a8 = 0;
        puStack_b0 = (undefined *)0x0;
        puStack_98 = (undefined *)0x0;
        puStack_a0 = (undefined *)0x0;
        (*param_2)(0,&puStack_b0);
        puVar14 = puVar6;
      }
      func_0x000107c61170(puVar14);
      goto LAB_102938384;
    }
  }
  if (param_2 == (code *)0x0) {
    return;
  }
  uStack_a8 = 0;
  puStack_b0 = (undefined *)0x0;
  puStack_98 = (undefined *)0x0;
  puStack_a0 = (undefined *)0x0;
  (*param_2)(0,&puStack_b0);
LAB_102938384:
  func_0x00010006e7f4(&puStack_b0);
  return;
}



/* Entry: 1029385d4; end: 10293864b;  */

void FUN_1029385d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1029381b0(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10293864c; end: 102938677;  */

void FUN_10293864c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    FUN_1029381b0(unaff_x20 + 0x18,uVar1,uVar2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102938678; end: 102938747; -[_TtC31FanPassSubscriptionPageLauncher38FanPassSubscriptionPageLauncherHandler launchWithPayload:completion:] */

void FUN_102938678(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_11056f208;
    func_0x000107c613fc(&UNK_11056f208,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar1 = 0x102938824;
  }
  FUN_1029381b0(&uStack_50,uVar1,puVar2);
  func_0x000100f1d208(uVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 102938748; end: 1029387a7; -[_TtC31FanPassSubscriptionPageLauncher38FanPassSubscriptionPageLauncherHandler init] */

void FUN_102938748(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FanPassSubscriptionPageLauncher.FanPassSubscriptionPageLauncherHandler",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102938774);
  (*pcVar1)();
}



/* Entry: 1029387a8; end: 1029387ef; -[_TtC31FanPassSubscriptionPageLauncher38FanPassSubscriptionPageLauncherHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029387c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029387c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029387a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ecdfc0);
  return;
}



/* Entry: 1029387f0; end: 10293880f;  */

void FUN_1029387f0(void)

{
  func_0x000107c61168(&PTR_PTR_112871988);
  return;
}



/* Entry: 102938810; end: 10293882b; -[_TtC31FanPassSubscriptionPageLauncher38FanPassSubscriptionPageLauncherHandler didDismissFanPassSubscriptionScopeWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102938810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ecdfc8,0);
  return;
}



/* Entry: 10293882c; end: 102938877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293882c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ece000) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102938878; end: 102938907; -[_TtC31FanPassSubscriptionPageLauncher37FanPassSubscriptionPageLauncherPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102938878(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112ece000);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 102938908; end: 10293890b; -[_TtC31FanPassSubscriptionPageLauncher37FanPassSubscriptionPageLauncherPlugin setNativePayloadHandlers:] */

void FUN_102938908(void)

{
  return;
}



/* Entry: 10293890c; end: 10293896b; -[_TtC31FanPassSubscriptionPageLauncher37FanPassSubscriptionPageLauncherPlugin init] */

void FUN_10293890c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FanPassSubscriptionPageLauncher.FanPassSubscriptionPageLauncherPlugin",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102938938);
  (*pcVar1)();
}



/* Entry: 10293896c; end: 10293897b; -[_TtC31FanPassSubscriptionPageLauncher37FanPassSubscriptionPageLauncherPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293896c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ece000));
  return;
}



/* Entry: 10293897c; end: 1029389fb;  */

void FUN_10293897c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_11056f230;
  func_0x000107c613fc(&UNK_11056f230,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102938b04,puVar1);
  return;
}



/* Entry: 1029389fc; end: 102938b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029389fc(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_70;
  func_0x000100083b20(&uStack_48);
  func_0x00010451338c();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  lVar1 = 0;
  FUN_1029387f0();
  lVar2 = lVar1;
  func_0x000107c610f8();
  lVar4 = _DAT_112ecdfc0;
  func_0x000107c61614(lVar2 + _DAT_112ecdfc0,0);
  func_0x000107c61614(lVar2 + _DAT_112ecdfc8,0);
  func_0x000107c61604(lVar2 + lVar4,param_2);
  *(undefined8 *)(lVar2 + _DAT_112ecdfd0) = uStack_50;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  func_0x000107c61170();
  FUN_102938b0c();
  lVar4 = param_2;
  func_0x000107c610f8();
  *(long **)(lVar4 + _DAT_112ece000) = plVar3;
  lStack_70 = lVar4;
  lStack_68 = param_2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 102938b04; end: 102938b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102938b04(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar6 = &lStack_70;
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x00010451338c();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  lVar2 = 0;
  FUN_1029387f0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar5 = _DAT_112ecdfc0;
  func_0x000107c61614(lVar3 + _DAT_112ecdfc0,0);
  func_0x000107c61614(lVar3 + _DAT_112ecdfc8,0);
  func_0x000107c61604(lVar3 + lVar5,lVar1);
  *(undefined8 *)(lVar3 + _DAT_112ecdfd0) = uStack_50;
  plVar4 = &lStack_60;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c61170();
  FUN_102938b0c();
  lVar5 = lVar1;
  func_0x000107c610f8();
  *(long **)(lVar5 + _DAT_112ece000) = plVar4;
  lStack_70 = lVar5;
  lStack_68 = lVar1;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  return;
}



/* Entry: 102938b0c; end: 102938b2b;  */

void FUN_102938b0c(void)

{
  func_0x000107c61168(&PTR_PTR_112871a58);
  return;
}



/* Entry: 102938b2c; end: 102938b3b;  */

undefined1  [16] FUN_102938b2c(void)

{
  return ZEXT816(0x11056f258);
}



/* Entry: 102938b3c; end: 102938ca7;  */

/* WARNING: Possible PIC construction at 0x000102938c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102938c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102938c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102938c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102938c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102938c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102938c80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102938c74) */
/* WARNING: Removing unreachable block (ram,0x000102938c64) */
/* WARNING: Removing unreachable block (ram,0x000102938c54) */
/* WARNING: Removing unreachable block (ram,0x000102938c44) */
/* WARNING: Removing unreachable block (ram,0x000102938c34) */
/* WARNING: Removing unreachable block (ram,0x000102938c24) */
/* WARNING: Removing unreachable block (ram,0x000102938c84) */

void FUN_102938b3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  code *pcVar16;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x78);
  puVar14 = &UNK_11056f348;
  func_0x000107c613fc(&UNK_11056f348,0x80,7);
  *(undefined8 *)(puVar14 + 0x10) = uVar1;
  *(undefined8 *)(puVar14 + 0x18) = uVar7;
  *(undefined8 *)(puVar14 + 0x20) = uVar15;
  *(undefined8 *)(puVar14 + 0x28) = uVar8;
  *(undefined8 *)(puVar14 + 0x30) = uVar2;
  *(undefined8 *)(puVar14 + 0x38) = uVar9;
  *(undefined8 *)(puVar14 + 0x40) = uVar3;
  *(undefined8 *)(puVar14 + 0x48) = uVar10;
  *(undefined8 *)(puVar14 + 0x50) = uVar4;
  *(undefined8 *)(puVar14 + 0x58) = uVar11;
  *(undefined8 *)(puVar14 + 0x60) = uVar5;
  *(undefined8 *)(puVar14 + 0x68) = uVar12;
  *(undefined8 *)(puVar14 + 0x70) = uVar6;
  *(undefined8 *)(puVar14 + 0x78) = uVar13;
  uVar15 = 0x112ece038;
  func_0x0001000285a8(0x112ece038,&UNK_10daf3ac0);
  func_0x000107c613fc();
  pcVar16 = FUN_102938d44;
  func_0x0001000841fc(FUN_102938d44,puVar14,uVar15);
  func_0x000100084214(&UNK_10daf3a90,0x2f,2);
  *param_1 = pcVar16;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102938ca8; end: 102938cb7;  */

undefined1  [16] FUN_102938ca8(void)

{
  return ZEXT816(0x11056f328);
}



/* Entry: 102938cb8; end: 102938d43;  */

void FUN_102938cb8(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102938d44; end: 102938e33;  */

void FUN_102938d44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_68;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar12 = *param_2;
  func_0x0001000285a8(0x112ece040,&UNK_10daf3ac8);
  puVar10 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  FUN_10293a520(uVar11,uVar5,uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,puVar10,uVar15,uVar16,uVar13,uVar14
                ,uVar4,uVar9);
  func_0x000107c61574(puVar10);
  func_0x000100082720("FanPassSubscriptionViewControllerEntryPointProvider",0x33,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 102938e34; end: 102938e7f;  */

void FUN_102938e34(undefined8 param_1)

{
  func_0x0001000285a8(0x112e412f8,&UNK_10da2fc60);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102938ed4,param_1);
  return;
}



/* Entry: 102938e80; end: 102938ed3;  */

void FUN_102938e80(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_102938fc8();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11056f3e8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102938ed4; end: 102938edb;  */

void FUN_102938ed4(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_102938fc8();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11056f3e8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102938edc; end: 102938f0b;  */

void FUN_102938edc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102938f0c; end: 102938f2f;  */

void FUN_102938f0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102938f30; end: 102938fb7;  */

void FUN_102938f30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_40;
  undefined **ppuStack_38;
  
  func_0x000100083b20(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c614f0(uStack_58);
  puStack_40 = &UNK_11056f4a0;
  ppuStack_38 = &PTR_DAT_11056f488;
  func_0x000104471544(&uStack_58,param_1,param_2,uVar1,uStack_50);
  func_0x000107c615e8(uStack_58);
  func_0x0001000834e4(&uStack_58);
  return;
}



/* Entry: 102938fb8; end: 102938fc7;  */

undefined1  [16] FUN_102938fb8(void)

{
  return ZEXT816(0x11056f408);
}



/* Entry: 102938fc8; end: 102938fe7;  */

void FUN_102938fc8(void)

{
  func_0x000107c61168(&PTR_PTR_112ece088);
  return;
}



/* Entry: 102938fe8; end: 102939033;  */

void FUN_102938fe8(undefined8 param_1)

{
  func_0x0001000285a8(0x112ea4e18,&UNK_10dab8020);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102939098,param_1);
  return;
}



/* Entry: 102939034; end: 102939097;  */

void FUN_102939034(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1029391dc();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11056f420;
  *param_1 = lVar1;
  return;
}



/* Entry: 102939098; end: 10293909f;  */

void FUN_102939098(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1029391dc();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_11056f420;
  *param_1 = lVar1;
  return;
}



/* Entry: 1029390a0; end: 1029390f7;  */

void FUN_1029390a0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1029390f8; end: 10293911b;  */

void FUN_1029390f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10293911c; end: 1029391bf;  */

void FUN_10293911c(void)

{
  undefined *puVar1;
  code *in_x3;
  undefined8 in_x5;
  undefined8 in_x6;
  long *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x10);
  puVar1 = &UNK_11056f460;
  func_0x000107c613fc(&UNK_11056f460,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = in_x5;
  *(undefined8 *)(puVar1 + 0x18) = in_x6;
  FUN_1029398b4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(in_x6);
  FUN_10293922c(uVar2,FUN_1029391fc,puVar1);
  (*in_x3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1029391c0; end: 1029391db;  */

undefined ** FUN_1029391c0(void)

{
  return &PTR_DAT_112f36740;
}



/* Entry: 1029391dc; end: 1029391fb;  */

void FUN_1029391dc(void)

{
  func_0x000107c61168(&PTR_PTR_112ece140);
  return;
}



/* Entry: 1029391fc; end: 10293922b;  */

void FUN_1029391fc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,0);
  return;
}



/* Entry: 10293922c; end: 10293938b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10293922c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ece1c8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ece1c0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c6157c(param_3);
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar3,puVar2,0,0);
  func_0x0001003604c8(0);
  func_0x000107c610f8();
  puVar4 = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000024;
  func_0x000103b67d24(0xd000000000000024,0x800000010f0cd700,0x46206e6174736152,0xef73736150206e61,
                      puVar3);
  uStack_70 = uVar5;
  func_0x00010008a7c8(&uStack_68,&uStack_70);
  func_0x000100083b20(&uStack_70);
  func_0x000107c61574(uStack_68);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_3);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(puVar4 + _DAT_112ece1c8);
  *(undefined8 *)(puVar4 + _DAT_112ece1c8) = uStack_70;
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar5);
  return puVar4;
}



/* Entry: 10293938c; end: 1029393ef; -[_TtC38FanPassSubscriptionScopeImplementation52CreatorSubscriptionsPaywallDevelopmentViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293938c(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ece1c8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "FanPassSubscriptionScopeImplementation/CreatorSubscriptionsPaywallDevelopmentViewController.swift"
                      ,0x61,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029393f0);
  (*pcVar1)();
}



/* Entry: 1029393f0; end: 1029397ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029393f0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = *(long *)(unaff_x20 + _DAT_112ece1c8);
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000107c3d614();
    lVar3 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029397c8);
      (*pcVar1)();
    }
    func_0x000107c5a050();
    func_0x000107c61170(lVar3);
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029397cc);
      (*pcVar1)();
    }
    lVar4 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029397d0);
      (*pcVar1)();
    }
    func_0x000107c3d89c(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
    lVar3 = 0x112d360b8;
    func_0x000102939914(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                        &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 9;
    *(undefined8 *)(lVar3 + 0x10) = 4;
    lVar4 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029397d4);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029397d8);
      (*pcVar1)();
    }
    lVar6 = lVar4;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    *(long *)(lVar3 + 0x20) = lVar4;
    lVar4 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029397dc);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029397e0);
      (*pcVar1)();
    }
    lVar6 = lVar4;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    *(long *)(lVar3 + 0x28) = lVar4;
    lVar4 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029397e4);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029397e8);
      (*pcVar1)();
    }
    lVar6 = lVar4;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    *(long *)(lVar3 + 0x30) = lVar4;
    lVar4 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029397ec);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029397f0);
      (*pcVar1)();
    }
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar4 = unaff_x20;
    func_0x000107c5ce8c(unaff_x20);
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    lVar6 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    *(long *)(lVar3 + 0x38) = lVar6;
    uVar8 = 0;
    FUN_10293998c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar4 = lVar3;
    func_0x000107c5fc48(lVar3,uVar8);
    func_0x000107c61574(lVar3);
    func_0x000107c3d048(puVar7);
    func_0x000107c61170(lVar4);
    func_0x000107c41c30(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1029397f0; end: 102939817; -[_TtC38FanPassSubscriptionScopeImplementation52CreatorSubscriptionsPaywallDevelopmentViewController viewDidLoad] */

void FUN_1029397f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029393f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102939818; end: 102939877; -[_TtC38FanPassSubscriptionScopeImplementation52CreatorSubscriptionsPaywallDevelopmentViewController initWithNibName:bundle:] */

void FUN_102939818(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FanPassSubscriptionScopeImplementation.CreatorSubscriptionsPaywallDevelopmentViewController"
                      ,0x5b,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102939844);
  (*pcVar1)();
}



/* Entry: 102939878; end: 1029398b3; -[_TtC38FanPassSubscriptionScopeImplementation52CreatorSubscriptionsPaywallDevelopmentViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102939878(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ece1c0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ece1c8));
  return;
}



/* Entry: 1029398b4; end: 1029398d3;  */

void FUN_1029398b4(void)

{
  func_0x000107c61168(&PTR_PTR_112871b18);
  return;
}



/* Entry: 1029398d4; end: 10293998b; -[_TtC38FanPassSubscriptionScopeImplementation52CreatorSubscriptionsPaywallDevelopmentViewController didDismissFanPassSubscriptionScopeWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029398d4(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112ece1c0);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10293998c; end: 1029399cb;  */

void FUN_10293998c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1029399cc; end: 1029399cf; -[_TtC38FanPassSubscriptionScopeImplementation52CreatorSubscriptionsPaywallDevelopmentViewController childViewControllerForStatusBarHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029399cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ece1c8));
  return;
}



/* Entry: 1029399d0; end: 1029399d3; -[_TtC38FanPassSubscriptionScopeImplementation52CreatorSubscriptionsPaywallDevelopmentViewController childViewControllerForStatusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029399d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ece1c8));
  return;
}



/* Entry: 1029399d4; end: 102939d87;  */

void FUN_1029399d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar2 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174();
  func_0x000107c5e2ac(puVar3);
  func_0x000107c61180();
  func_0x000107c59c78(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c59c74(puVar2);
  func_0x000107c56ba8(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c5a100(puVar2);
  func_0x000107c61174();
  func_0x000107c5a050();
  puVar3 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c5ba54(puVar3);
  func_0x000107c3d89c(puVar1);
  func_0x000107c3d89c(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 0xb;
  *(undefined8 *)(puVar5 + 0x10) = 5;
  puVar6 = puVar3;
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar7 = puVar1;
  func_0x000107c3f75c(puVar1);
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  *(undefined **)(puVar5 + 0x20) = puVar8;
  puVar6 = puVar3;
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar7 = puVar1;
  func_0x000107c3f764(puVar1);
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c40284(0xc034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  *(undefined **)(puVar5 + 0x28) = puVar8;
  puVar6 = puVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar7 = puVar3;
  func_0x000107c3ec1c(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar8 = puVar6;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  *(undefined **)(puVar5 + 0x30) = puVar8;
  puVar6 = puVar2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar7 = puVar1;
  func_0x000107c4acb0(puVar1);
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c40284(0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  *(undefined **)(puVar5 + 0x38) = puVar8;
  puVar6 = puVar2;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar7 = puVar1;
  func_0x000107c5ce8c(puVar1);
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c40284(0xc040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  *(undefined **)(puVar5 + 0x40) = puVar8;
  uVar9 = 0;
  func_0x000100847984(0);
  puVar6 = puVar5;
  func_0x000107c5fc48(puVar5,uVar9);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  return;
}



/* Entry: 102939d88; end: 10293a2c7;  */

/* WARNING: Possible PIC construction at 0x000102939ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102939df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102939e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102939ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102939f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102939f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010293a290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010293a00c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010293a080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010293a0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010293a0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010293a110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010293a160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010293a180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010293a1e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010293a204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010293a244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010293a27c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010293a248) */
/* WARNING: Removing unreachable block (ram,0x00010293a208) */
/* WARNING: Removing unreachable block (ram,0x00010293a1e8) */
/* WARNING: Removing unreachable block (ram,0x00010293a184) */
/* WARNING: Removing unreachable block (ram,0x00010293a2c4) */
/* WARNING: Removing unreachable block (ram,0x00010293a1b8) */
/* WARNING: Removing unreachable block (ram,0x00010293a164) */
/* WARNING: Removing unreachable block (ram,0x00010293a114) */
/* WARNING: Removing unreachable block (ram,0x00010293a2c0) */
/* WARNING: Removing unreachable block (ram,0x00010293a148) */
/* WARNING: Removing unreachable block (ram,0x00010293a0f4) */
/* WARNING: Removing unreachable block (ram,0x00010293a0a4) */
/* WARNING: Removing unreachable block (ram,0x00010293a2bc) */
/* WARNING: Removing unreachable block (ram,0x00010293a0d8) */
/* WARNING: Removing unreachable block (ram,0x00010293a084) */
/* WARNING: Removing unreachable block (ram,0x00010293a010) */
/* WARNING: Removing unreachable block (ram,0x00010293a2b8) */
/* WARNING: Removing unreachable block (ram,0x00010293a068) */
/* WARNING: Removing unreachable block (ram,0x00010293a294) */
/* WARNING: Removing unreachable block (ram,0x000102939f9c) */
/* WARNING: Removing unreachable block (ram,0x000102939f48) */
/* WARNING: Removing unreachable block (ram,0x000102939ef4) */
/* WARNING: Removing unreachable block (ram,0x000102939ea0) */
/* WARNING: Removing unreachable block (ram,0x000102939df4) */
/* WARNING: Removing unreachable block (ram,0x000102939fd8) */
/* WARNING: Removing unreachable block (ram,0x00010293a2b4) */
/* WARNING: Removing unreachable block (ram,0x000102939ffc) */
/* WARNING: Removing unreachable block (ram,0x000102939dfc) */
/* WARNING: Removing unreachable block (ram,0x000102939de0) */
/* WARNING: Removing unreachable block (ram,0x00010293a280) */
/* WARNING: Removing unreachable block (ram,0x00010293a28c) */

void FUN_102939d88(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c3fdd0(0x3fe8000000000000);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10293a2c8; end: 10293a323;  */

void FUN_10293a2c8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10293a324; end: 10293a32b;  */

void FUN_10293a324(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 10293a32c; end: 10293a393;  */

undefined8 * FUN_10293a32c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10293a394; end: 10293a48b;  */

int FUN_10293a394(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 10293a48c; end: 10293a517;  */

void FUN_10293a48c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5f4c8;
  func_0x0001000285a8(0x112e5f4c8,&UNK_10da67398);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10293a518; end: 10293a51f;  */

void FUN_10293a518(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5f4c8;
  func_0x0001000285a8(0x112e5f4c8,&UNK_10da67398);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10293a520; end: 10293a94f;  */

void FUN_10293a520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_11056f560;
  func_0x000107c613fc(&UNK_11056f560,0x88,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x0001000823a8(FUN_10293a950,puVar1);
  return;
}



/* Entry: 10293a950; end: 10293a993;  */

void FUN_10293a950(void)

{
  long unaff_x20;
  
  func_0x00010293a684(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 10293a994; end: 10293abcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293a994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ece2b0) = 0;
  lVar1 = _DAT_112ece2b8;
  uVar2 = 0;
  func_0x00010044d36c();
  func_0x000107c613fc();
  func_0x00010044d38c();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece2f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece300) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ece308) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ece310) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ece318) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ece320) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ece328) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ece330) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ece338) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ece340) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ece348) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ece350) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ece358) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ece360) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ece368) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ece370) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112ece378) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112ece380) = param_15;
  func_0x000107c61154(auStack_70,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 10293abd0; end: 10293ac33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10293abd0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ece2b0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ece2b0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10293ac34();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10293ac34; end: 10293ad4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10293ac34(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  func_0x000100083b20(&lStack_48);
  lVar3 = lStack_48;
  uVar4 = *(undefined8 *)(lStack_48 + _DAT_113083868);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(lVar3);
  puVar5 = PTR_PTR_1126b36b8;
  func_0x000107c610f8(PTR_PTR_1126b36b8);
  func_0x000107c46750();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000100083b20(&lStack_48);
  uVar4 = *(undefined8 *)(lStack_48 + _DAT_112fef5b8);
  uVar1 = ((undefined8 *)(lStack_48 + _DAT_112fef5b8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c61170(lStack_48);
  func_0x000107c5fadc(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c53af8(puVar5);
  func_0x000107c61170(uVar4);
  return puVar5;
}



/* Entry: 10293ad50; end: 10293affb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10293ad50(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_38;
  
  lVar1 = _DAT_112ece2c0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ece2c0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000100083b20(&lStack_38);
    FUN_102943270(0);
    func_0x000107c613fc();
    lVar3 = lStack_38;
    FUN_102942cf0();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar3;
}



/* Entry: 10293affc; end: 10293b003; -[_TtC38FanPassSubscriptionScopeImplementation33FanPassSubscriptionViewController modalPresentationStyle] */

undefined8 FUN_10293affc(void)

{
  return 0;
}



/* Entry: 10293b004; end: 10293b007; -[_TtC38FanPassSubscriptionScopeImplementation33FanPassSubscriptionViewController setModalPresentationStyle:] */

void FUN_10293b004(void)

{
  return;
}



/* Entry: 10293b008; end: 10293b367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293b008(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  char *pcVar5;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c614f0();
  func_0x000107c53dec();
  uVar1 = unaff_x20;
  func_0x000107c54394();
  func_0x00010293af7c();
  func_0x000107c5a048();
  func_0x000107c615e8(uVar1);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  func_0x00010293b174();
  func_0x000100083b20(&puStack_70);
  puVar2 = puStack_70;
  func_0x000107c5dbd4(puStack_70);
  func_0x000107c61180();
  func_0x000107c61170(puStack_70);
  puVar3 = &UNK_11056f588;
  func_0x000107c613fc(&UNK_11056f588,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  pcStack_50 = FUN_102941654;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f0f800;
  puStack_58 = &UNK_11056f5a0;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  pcVar5 = "viewDidLoad()";
  func_0x0001000c10c0("viewDidLoad()");
  func_0x000107c61180();
  func_0x000107c44288(puVar2);
  func_0x000107c615e8(pcVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 10293b368; end: 10293b3fb;  */

void FUN_10293b368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293b3fc,uVar2,uVar3);
  return;
}



/* Entry: 10293b3fc; end: 10293b49b;  */

void FUN_10293b3fc(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x58) = lVar4;
  if (lVar4 != 0) {
    plVar2 = (long *)0x270;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10293b49c;
    lVar3 = *(long *)(unaff_x22 + 0x38);
    plVar2[0x44] = lVar4;
    plVar2[0x43] = lVar3;
    lVar3 = 0;
    func_0x000107c5fcec();
    puVar1 = PTR___sScMMa_11034fc70;
    lVar4 = lVar3;
    func_0x000107c5fce8();
    plVar2[0x45] = lVar4;
    lVar4 = 0x112d45220;
    FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8();
    plVar2[0x46] = lVar3;
    plVar2[0x47] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10293b5b8,lVar3,lVar4);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010293b498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293b49c; end: 10293b4e7;  */

void FUN_10293b49c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10293b4e8,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
  return;
}



/* Entry: 10293b4e8; end: 10293b51f;  */

void FUN_10293b4e8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  **(undefined1 **)(unaff_x22 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010293b51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293b520; end: 10293b5b7;  */

void FUN_10293b520(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x220) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x218) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x228) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x230) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x238) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293b5b8,uVar2,uVar3);
  return;
}



/* Entry: 10293b5b8; end: 10293c113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293b5b8(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  ulong *puVar13;
  undefined8 uVar14;
  
  lVar10 = *(long *)(unaff_x22 + 0x218);
  if (lVar10 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x228));
  }
  else {
    func_0x000107c615f0(lVar10);
    func_0x000100083b20(unaff_x22 + 0x1c0);
    lVar11 = *(long *)(unaff_x22 + 0x1c0);
    lVar7 = lVar11;
    func_0x000107c3dae4();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    lVar11 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar11 != 0) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x220);
      uVar14 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
      puVar3 = PTR_PTR_1126b1c10;
      func_0x000107c610f8(PTR_PTR_1126b1c10);
      func_0x000107c495dc(uVar14);
      lVar10 = lVar11;
      func_0x000107c4c1e0();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0x240) = lVar10;
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(lVar11);
      puVar4 = PTR_PTR_1126aba18;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(unaff_x22 + 0x248) = puVar4;
      puVar3 = &UNK_11056f5d8;
      puVar5 = puVar3;
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,uVar12);
      *(code **)(unaff_x22 + 0x30) = FUN_102941df8;
      *(undefined **)(unaff_x22 + 0x38) = puVar5;
      puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x20) = &UNK_100f11160;
      *(undefined **)(unaff_x22 + 0x28) = &UNK_11056f690;
      lVar10 = unaff_x22 + 0x10;
      func_0x000107c60bc4(lVar10);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
      func_0x000107c56d08(puVar4);
      func_0x000107c60bd0(lVar10);
      puVar6 = puVar3;
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,uVar12);
      *(undefined8 *)(unaff_x22 + 0x60) = 0x102941e00;
      *(undefined **)(unaff_x22 + 0x68) = puVar6;
      *(undefined **)(unaff_x22 + 0x40) = puVar5;
      *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x50) = &UNK_1022db4c4;
      *(undefined **)(unaff_x22 + 0x58) = &UNK_11056f6b8;
      lVar10 = unaff_x22 + 0x40;
      func_0x000107c60bc4(lVar10);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
      func_0x000107c56e80(puVar4);
      func_0x000107c60bd0(lVar10);
      puVar6 = puVar3;
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,uVar12);
      *(undefined8 *)(unaff_x22 + 0x90) = 0x102941e08;
      *(undefined **)(unaff_x22 + 0x98) = puVar6;
      *(undefined **)(unaff_x22 + 0x70) = puVar5;
      *(undefined8 *)(unaff_x22 + 0x78) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x80) = &UNK_100ec2630;
      *(undefined **)(unaff_x22 + 0x88) = &UNK_11056f6e0;
      lVar10 = unaff_x22 + 0x70;
      func_0x000107c60bc4(lVar10);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
      func_0x000107c56cfc(puVar4);
      func_0x000107c60bd0(lVar10);
      puVar6 = puVar3;
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,uVar12);
      *(undefined8 *)(unaff_x22 + 0xc0) = 0x102941e10;
      *(undefined **)(unaff_x22 + 200) = puVar6;
      *(undefined **)(unaff_x22 + 0xa0) = puVar5;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0x42000000;
      *(undefined **)(unaff_x22 + 0xb0) = &UNK_1000f6b44;
      *(undefined **)(unaff_x22 + 0xb8) = &UNK_11056f708;
      lVar10 = unaff_x22 + 0xa0;
      func_0x000107c60bc4(lVar10);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
      func_0x000107c56e88(puVar4);
      func_0x000107c60bd0(lVar10);
      puVar6 = puVar3;
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,uVar12);
      *(code **)(unaff_x22 + 0xf0) = FUN_102941e18;
      *(undefined **)(unaff_x22 + 0xf8) = puVar6;
      *(undefined **)(unaff_x22 + 0xd0) = puVar5;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
      *(undefined **)(unaff_x22 + 0xe0) = &UNK_1000f6b44;
      *(undefined **)(unaff_x22 + 0xe8) = &UNK_11056f730;
      lVar10 = unaff_x22 + 0xd0;
      func_0x000107c60bc4(lVar10);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf8));
      func_0x000107c56f40(puVar4);
      func_0x000107c60bd0(lVar10);
      puVar6 = puVar3;
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,uVar12);
      *(undefined8 *)(unaff_x22 + 0x120) = 0x102941e34;
      *(undefined **)(unaff_x22 + 0x128) = puVar6;
      *(undefined **)(unaff_x22 + 0x100) = puVar5;
      *(undefined8 *)(unaff_x22 + 0x108) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x110) = &UNK_1000f6b44;
      *(undefined **)(unaff_x22 + 0x118) = &UNK_11056f758;
      lVar10 = unaff_x22 + 0x100;
      func_0x000107c60bc4(lVar10);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x128));
      func_0x000107c56f3c(puVar4);
      func_0x000107c60bd0(lVar10);
      puVar6 = puVar3;
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,uVar12);
      *(undefined8 *)(unaff_x22 + 0x150) = 0x102941e50;
      *(undefined **)(unaff_x22 + 0x158) = puVar6;
      *(undefined **)(unaff_x22 + 0x130) = puVar5;
      *(undefined8 *)(unaff_x22 + 0x138) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x140) = &UNK_1000f6b44;
      *(undefined **)(unaff_x22 + 0x148) = &UNK_11056f780;
      lVar10 = unaff_x22 + 0x130;
      func_0x000107c60bc4(lVar10);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x158));
      func_0x000107c56dbc(puVar4);
      func_0x000107c60bd0(lVar10);
      puVar6 = puVar3;
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,uVar12);
      *(undefined8 *)(unaff_x22 + 0x180) = 0x102941e80;
      *(undefined **)(unaff_x22 + 0x188) = puVar6;
      *(undefined **)(unaff_x22 + 0x160) = puVar5;
      *(undefined8 *)(unaff_x22 + 0x168) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x170) = &UNK_1000f6b44;
      *(undefined **)(unaff_x22 + 0x178) = &UNK_11056f7a8;
      lVar10 = unaff_x22 + 0x160;
      func_0x000107c60bc4(lVar10);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x188));
      func_0x000107c56f04(puVar4);
      func_0x000107c60bd0(lVar10);
      func_0x000107c52604(puVar4);
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,uVar12);
      *(code **)(unaff_x22 + 0x1b0) = FUN_102941eb0;
      *(undefined **)(unaff_x22 + 0x1b8) = puVar3;
      *(undefined **)(unaff_x22 + 400) = puVar5;
      *(undefined8 *)(unaff_x22 + 0x198) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x1a0) = &UNK_1000f6b44;
      *(undefined **)(unaff_x22 + 0x1a8) = &UNK_11056f7d0;
      lVar10 = unaff_x22 + 400;
      func_0x000107c60bc4();
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1b8));
      func_0x000107c56f64(puVar4);
      func_0x000107c60bd0(lVar10);
      func_0x000100083b20(unaff_x22 + 0x1c8);
      lVar10 = *(long *)(unaff_x22 + 0x1c8);
      lVar7 = *(long *)(lVar10 + _DAT_11302cc78);
      func_0x000107c61174();
      func_0x000107c61170(lVar10);
      lVar10 = lVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      if (lVar10 != 0) {
        func_0x000100083b20(unaff_x22 + 0x210);
        lVar7 = *(long *)(unaff_x22 + 0x210);
        puVar1 = (undefined8 *)(lVar7 + _DAT_112fef5b8);
        uVar12 = *puVar1;
        uVar14 = puVar1[1];
        func_0x000107c61434(uVar14);
        func_0x000107c61170(lVar7);
        func_0x000107c5fadc(uVar12,uVar14);
        func_0x000107c6142c(uVar14);
        lVar7 = lVar10;
        func_0x000107c40cd8();
        func_0x000107c61180();
        func_0x000107c61170(uVar12);
        func_0x000107c615e8(lVar10);
        if (lVar7 != 0) {
          func_0x000107c61170(lVar7);
        }
      }
      lVar7 = *(long *)(unaff_x22 + 0x220);
      puVar3 = &DAT_112ece2d0;
      func_0x00010293adf4(&DAT_112ece2d0);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c45a48();
      *(undefined **)(unaff_x22 + 0x1d0) = puVar5;
      func_0x0001007d6d78(unaff_x22 + 0x1d0);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(puVar5);
      puVar5 = PTR_PTR_1126aba20;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(unaff_x22 + 0x250) = puVar5;
      func_0x000100083b20(unaff_x22 + 0x1d8);
      lVar10 = *(long *)(unaff_x22 + 0x1d8);
      uVar14 = *(undefined8 *)(lVar10 + _DAT_113041e48);
      func_0x000107c615f0(uVar14);
      func_0x000107c61170(lVar10);
      uVar12 = uVar14;
      func_0x000107c5df58(uVar14);
      func_0x000107c61180();
      func_0x000107c615e8(uVar14);
      uVar14 = uVar12;
      func_0x000107c5cb24(uVar12);
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c5a5a0(puVar5);
      func_0x000107c61170(uVar14);
      *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(lVar7 + _DAT_112ece350);
      func_0x000100083b20(unaff_x22 + 0x1e0);
      lVar10 = *(long *)(unaff_x22 + 0x1e0);
      puVar1 = (undefined8 *)(lVar10 + _DAT_112fef5b8);
      uVar12 = *puVar1;
      uVar14 = puVar1[1];
      func_0x000107c61434(uVar14);
      func_0x000107c61170(lVar10);
      func_0x000107c5fadc(uVar12,uVar14);
      func_0x000107c6142c(uVar14);
      func_0x000107c551bc(puVar5);
      func_0x000107c61170(uVar12);
      func_0x000100083b20(unaff_x22 + 0x1e8);
      lVar10 = *(long *)(unaff_x22 + 0x1e8);
      puVar1 = (undefined8 *)(lVar10 + _DAT_112fef5c0);
      uVar12 = *puVar1;
      uVar14 = puVar1[1];
      func_0x000107c61434(uVar14);
      func_0x000107c61170(lVar10);
      func_0x000107c5fadc(uVar12,uVar14);
      func_0x000107c6142c(uVar14);
      func_0x000107c54234(puVar5);
      func_0x000107c61170(uVar12);
      puVar3 = &DAT_112ece2c8;
      func_0x00010293adf4(&DAT_112ece2c8);
      puVar6 = puVar3;
      func_0x0001004575f0();
      func_0x000107c61574(puVar3);
      puVar3 = puVar6;
      func_0x000107c5cb24(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c55530(puVar5);
      func_0x000107c61170(puVar3);
      puVar3 = &DAT_112ece2e0;
      func_0x00010293adf4(&DAT_112ece2e0);
      puVar6 = puVar3;
      func_0x0001004575f0();
      func_0x000107c61574(puVar3);
      puVar3 = puVar6;
      func_0x000107c5cb24(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c5a640(puVar5);
      func_0x000107c61170(puVar3);
      uVar14 = *(undefined8 *)(lVar7 + _DAT_112ece2d0);
      uVar12 = uVar14;
      func_0x000107c6157c(uVar14);
      func_0x0001004575f0();
      func_0x000107c61574(uVar14);
      uVar14 = uVar12;
      func_0x000107c5cb24(uVar12);
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c5704c(puVar5);
      func_0x000107c61170(uVar14);
      puVar3 = &DAT_112ece2d8;
      func_0x00010293adf4();
      puVar6 = puVar3;
      func_0x0001004575f0();
      func_0x000107c61574(puVar3);
      puVar3 = puVar6;
      func_0x000107c5cb24();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c55034(puVar5);
      func_0x000107c61170();
      func_0x000100083b20(unaff_x22 + 0x1f0);
      puVar13 = *(ulong **)(unaff_x22 + 0x1f0);
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar13) + 0xa8))();
      func_0x000107c61170(puVar13);
      if (puVar3 != (undefined *)0x0) {
        func_0x0001004575f0();
        puVar8 = puVar13;
        func_0x000107c5cb24();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        func_0x000107c55790(puVar5);
        func_0x000107c61170(puVar8);
        func_0x000107c61574(puVar3);
      }
      func_0x000100083b20(unaff_x22 + 0x1f8);
      lVar7 = *(long *)(unaff_x22 + 0x1f8);
      lVar11 = *(long *)(lVar7 + _DAT_112fef5d8);
      lVar10 = lVar11;
      func_0x000107c61174();
      func_0x000107c61170(lVar7);
      if (lVar11 != 0) {
        puVar3 = PTR_PTR_1126cc078;
        func_0x000107c610f8(PTR_PTR_1126cc078);
        func_0x000107c453e4();
        lVar7 = *(long *)(lVar10 + _DAT_113073d70);
        func_0x000107c3125c();
        func_0x000107c61180();
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10293c110);
          (*pcVar2)();
        }
        func_0x000107c59578(puVar3);
        func_0x000107c61170(lVar7);
        lVar7 = *(long *)(lVar10 + _DAT_113073d78);
        func_0x000100c6f294();
        func_0x000107c61180();
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10293c114);
          (*pcVar2)();
        }
        func_0x000107c5958c(puVar3);
        func_0x000107c61170(lVar7);
        func_0x000107c560e4(puVar5);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(lVar10);
      }
      uVar12 = *(undefined8 *)(unaff_x22 + 0x220);
      puVar3 = PTR_PTR_1126b0ff0;
      func_0x000107c610f8(PTR_PTR_1126b0ff0);
      func_0x000107c453e4();
      func_0x000107c598ec(puVar4);
      func_0x000107c61170(puVar3);
      puVar3 = &UNK_11056f5d8;
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,uVar12);
      func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10daf3e20,puVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574();
      func_0x000107c61574(puVar3);
      plVar9 = (long *)0x60;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x260) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_10293c114;
      plVar9[4] = *(long *)(unaff_x22 + 0x220);
      lVar7 = 0;
      func_0x000107c5fcec();
      puVar3 = PTR___sScMMa_11034fc70;
      lVar10 = lVar7;
      func_0x000107c5fce8();
      plVar9[5] = lVar10;
      lVar10 = 0x112d45220;
      FUN_1029420b8(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
      func_0x000107c5fca8();
      plVar9[6] = lVar7;
      plVar9[7] = lVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10293dafc,lVar7,lVar10);
      return;
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x228));
    func_0x000107c615e8(lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010293bbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10293c114; end: 10293c163;  */

void FUN_10293c114(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x268) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x260));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10293c164,*(undefined8 *)(lVar1 + 0x230),*(undefined8 *)(lVar1 + 0x238));
  return;
}



/* Entry: 10293c164; end: 10293c637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293c164(void)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x250);
  lVar9 = *(long *)(unaff_x22 + 0x220);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x228));
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55850(uVar8);
  func_0x000107c61170(puVar3);
  func_0x000100083b20(unaff_x22 + 0x200);
  func_0x000107c61170();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5576c(uVar8);
  func_0x000107c61170(puVar3);
  puVar3 = PTR_PTR_1126aba28;
  func_0x000107c610f8();
  func_0x000107c49520();
  uVar8 = *(undefined8 *)(lVar9 + _DAT_112ece2f8);
  *(undefined **)(lVar9 + _DAT_112ece2f8) = puVar3;
  func_0x000107c61174();
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10293c628);
    (*pcVar2)();
  }
  lVar10 = *(long *)(unaff_x22 + 0x220);
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x18) = 9;
  *(undefined8 *)(lVar9 + 0x10) = 4;
  puVar4 = puVar3;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10293c62c);
    (*pcVar2)();
  }
  lVar11 = *(long *)(unaff_x22 + 0x220);
  lVar12 = lVar10;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  puVar5 = puVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  func_0x000107c61170(puVar4);
  *(undefined **)(lVar9 + 0x20) = puVar5;
  puVar4 = puVar3;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10293c630);
    (*pcVar2)();
  }
  lVar12 = *(long *)(unaff_x22 + 0x220);
  lVar10 = lVar11;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  puVar5 = puVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(puVar4);
  *(undefined **)(lVar9 + 0x28) = puVar5;
  puVar4 = puVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 != 0) {
    lVar11 = *(long *)(unaff_x22 + 0x220);
    lVar10 = lVar12;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    puVar5 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    func_0x000107c61170(puVar4);
    *(undefined **)(lVar9 + 0x30) = puVar5;
    puVar4 = puVar3;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar11 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar10 = lVar11;
      func_0x000107c3ec1c(lVar11);
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      puVar6 = puVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      func_0x000107c61170(puVar4);
      *(undefined **)(lVar9 + 0x38) = puVar6;
      uVar8 = 0;
      FUN_1029421e4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar10 = lVar9;
      func_0x000107c5fc48(lVar9,uVar8);
      func_0x000107c61574(lVar9);
      func_0x000107c3d048(puVar5);
      func_0x000107c61170(lVar10);
      func_0x000100083b20(unaff_x22 + 0x208);
      lVar9 = *(long *)(unaff_x22 + 0x208);
      bVar1 = *(byte *)(lVar9 + _DAT_112fef5d0);
      func_0x000107c61170();
      uVar14 = *(undefined8 *)(unaff_x22 + 0x250);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x248);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x240);
      if ((bVar1 & 1) == 0) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x218);
        func_0x00010293af7c();
        lVar10 = lVar9;
        func_0x0001008479c8();
        func_0x000107c613fc();
        *(undefined8 *)(lVar10 + 0x18) = 3;
        *(undefined8 *)(lVar10 + 0x10) = 1;
        *(undefined **)(lVar10 + 0x20) = puVar3;
        uVar7 = 0;
        FUN_1029421e4(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
        lVar12 = lVar10;
        func_0x000107c5fc48(lVar10,uVar7);
        func_0x000107c61574(lVar10);
        func_0x000107c497d0(lVar9);
        func_0x000107c615e8(uVar15);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(uVar13);
        func_0x000107c615e8(uVar8);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(lVar12);
      }
      else {
        lVar9 = *(long *)(unaff_x22 + 0x218);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(uVar13);
        func_0x000107c615e8(uVar8);
      }
      func_0x000107c615e8(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010293c620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10293c638);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10293c634);
  (*pcVar2)();
}



/* Entry: 10293c638; end: 10293c65f; -[_TtC38FanPassSubscriptionScopeImplementation33FanPassSubscriptionViewController viewDidLoad] */

void FUN_10293c638(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10293b008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10293c660; end: 10293c853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293c660(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long alStack_78 [3];
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    alStack_78[0] = 0;
    uVar4 = 0;
    func_0x000103fd7dd8(0);
    func_0x000107c5f9e4(param_1,alStack_78,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
    lVar2 = alStack_78[0];
    if (alStack_78[0] == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      func_0x000100083b20(alStack_78);
      lVar3 = alStack_78[0];
      lVar5 = *(long *)(alStack_78[0] + _DAT_112fef5b8);
      uVar1 = ((long *)(alStack_78[0] + _DAT_112fef5b8))[1];
      func_0x000107c61434(uVar1);
      func_0x000107c61170(lVar3);
      if (*(long *)(lVar2 + 0x10) == 0) {
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(lVar2);
      }
      else {
        func_0x000107c61434(lVar2);
        uVar8 = uVar1;
        func_0x000100029284();
        if ((uVar8 & 1) == 0) {
          func_0x000107c6142c(uVar1);
          func_0x000107c61430(lVar2,2);
        }
        else {
          lVar5 = *(long *)(*(long *)(lVar2 + 0x38) + lVar5 * 8);
          func_0x000107c61174();
          func_0x000107c6142c(uVar1);
          func_0x000107c61430(lVar2,2);
          if ((*(byte *)(lVar5 + _DAT_113041e98) & 1) == 0) {
            func_0x000107c61170(lVar5);
          }
          else {
            func_0x000107c61428(lVar5 + _DAT_113041eb8,alStack_78,0,0);
            func_0x000107c61170(lVar5);
          }
        }
      }
      puVar6 = &DAT_112ece2c8;
      func_0x00010293adf4(&DAT_112ece2c8);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c45a48();
      puStack_60 = puVar7;
      func_0x0001007d6d78(&puStack_60);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(param_2);
      func_0x000107c61574(puVar6);
    }
  }
  return;
}



/* Entry: 10293c854; end: 10293c8c3;  */

void FUN_10293c854(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_10293c8c4(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10293c8c4; end: 10293ca37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293c8c4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar1 = unaff_x20;
  func_0x000107c49aa0();
  if ((uVar1 & 1) == 0) {
    func_0x000107c4f090();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
      func_0x000100083b20(&puStack_70);
      lVar6 = *(long *)(puStack_70 + _DAT_112fef5b0);
      func_0x000107c615f0(lVar6);
      func_0x000107c61170(puStack_70);
      if (lVar6 == 0) {
        return;
      }
      func_0x000107c615e8(lVar6);
    }
    else {
      func_0x000107c61170();
    }
    pcVar2 = "dismiss(error:)";
    func_0x0001000c10c0("dismiss(error:)");
    func_0x000107c61180();
    puVar3 = &UNK_11056f5d8;
    func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_11056f8f8;
    func_0x000107c613fc(&UNK_11056f8f8,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    pcStack_50 = FUN_1029421b0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11056f910;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 10293ca38; end: 10293cad7;  */

void FUN_10293ca38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_7 + 0x10,auStack_68,0,0);
  param_7 = param_7 + 0x10;
  func_0x000107c61618();
  if (param_7 != 0) {
    FUN_10293cad8(param_1,param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61170(param_7);
  }
  return;
}



/* Entry: 10293cad8; end: 10293cdab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293cad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uStack_68;
  
  lVar3 = _DAT_112ece308;
  if ((*(byte *)(unaff_x20 + _DAT_112ece308) & 1) == 0) {
    func_0x000100083b20(&uStack_68);
    uVar5 = uStack_68;
    uVar1 = *(ulong *)(uStack_68 + _DAT_112fef5b8);
    uVar2 = ((ulong *)(uStack_68 + _DAT_112fef5b8))[1];
    func_0x000107c61434(uVar2);
    func_0x000107c61170(uVar5);
    uVar5 = uVar1 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar5 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar5 == 0) {
      func_0x000107c6142c(uVar2);
      FUN_10293ee6c();
    }
    else {
      *(undefined1 *)(unaff_x20 + lVar3) = 1;
      func_0x000100083b20(&uStack_68);
      uVar5 = uStack_68;
      uVar4 = uStack_68;
      func_0x000107c42e5c();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      uVar5 = uVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar5 != 0) {
        uVar4 = uVar5;
        func_0x000107c4ea88();
        func_0x000107c615e8();
        if (((int)uVar4 != 0) && (FUN_10293f0ec(), (uVar5 & 1) != 0)) {
          uVar9 = 0x65725f6c69616d65;
          func_0x000103b68350(0x65725f6c69616d65,0xee00646572697571);
          FUN_10293ad50();
          func_0x000100083b20(&uStack_68);
          uVar10 = *(undefined8 *)(uStack_68 + _DAT_112fef5d8);
          uVar8 = uVar10;
          func_0x000107c61174(uVar10);
          func_0x000107c61170(uStack_68);
          FUN_102942cfc(4,uVar1,uVar2,0xef,uVar10,0x65725f6c69616d65,0xee00646572697571);
          func_0x000107c6142c(uVar2);
          func_0x000107c61574(uVar9);
          func_0x000107c61170(uVar8);
          *(undefined1 *)(unaff_x20 + lVar3) = 0;
          return;
        }
      }
      func_0x000107c6142c(uVar2);
      puVar6 = &UNK_11056f5d8;
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar7 = &UNK_11056fc18;
      func_0x000107c613fc(&UNK_11056fc18,0x48,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined8 *)(puVar7 + 0x18) = param_3;
      *(undefined8 *)(puVar7 + 0x20) = param_4;
      *(undefined8 *)(puVar7 + 0x28) = param_1;
      *(undefined8 *)(puVar7 + 0x30) = param_2;
      *(undefined8 *)(puVar7 + 0x38) = param_5;
      *(undefined8 *)(puVar7 + 0x40) = param_6;
      func_0x000107c61434(param_4);
      func_0x000107c61434(param_2);
      func_0x000107c61434(param_6);
      uVar8 = 0xcb;
      func_0x0001001ca524(0xcb,0,0x60,4,0,0,&UNK_10daf3ee0,puVar7,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(uVar8);
    }
  }
  return;
}



/* Entry: 10293cdac; end: 10293ce83;  */

void FUN_10293cdac(undefined8 param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    if ((param_3 & 1) != 0) {
      puVar1 = &UNK_11056f5d8;
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_4);
      uVar2 = 0xcb;
      func_0x0001001ca524(0xcb,0,0x60,4,0,0,&UNK_10daf3ea8,puVar1,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(uVar2);
    }
    FUN_10293ff6c(param_3 & 1);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 10293ce84; end: 10293d06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293ce84(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_b8;
  long alStack_b0 [3];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10293ee6c();
    func_0x000103b68350(0xd000000000000013,0x800000010f0cd880);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_10293ad50();
    func_0x000107c61170(lVar1);
    func_0x000107c61428(param_1 + 0x10,auStack_98,0,0);
    lVar1 = param_1 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      uVar5 = 0;
      uVar4 = 0xe000000000000000;
    }
    else {
      func_0x000100083b20(alStack_b0);
      func_0x000107c61170(lVar1);
      uVar5 = *(undefined8 *)(alStack_b0[0] + _DAT_112fef5b8);
      uVar4 = ((undefined8 *)(alStack_b0[0] + _DAT_112fef5b8))[1];
      func_0x000107c61434(uVar4);
      func_0x000107c61170(alStack_b0[0]);
    }
    func_0x000107c61428(param_1 + 0x10,alStack_b0,0,0);
    param_1 = param_1 + 0x10;
    func_0x000107c61618();
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x000100083b20(&lStack_b8);
      func_0x000107c61170(param_1);
      uVar3 = *(undefined8 *)(lStack_b8 + _DAT_112fef5d8);
      func_0x000107c61174(uVar3);
      func_0x000107c61170(lStack_b8);
    }
    FUN_102942cfc(5,uVar5,uVar4,0xef,uVar3,0xd000000000000013,0x800000010f0cd880);
    func_0x000107c61574(lVar2);
    func_0x000107c6142c(uVar4);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 10293d070; end: 10293d393;  */

/* WARNING: Removing unreachable block (ram,0x00010293d0bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10293d070(uint param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  puVar2 = &DAT_112ece2d0;
  func_0x00010293adf4(&DAT_112ece2d0);
  func_0x000104886d18(&puStack_a8);
  func_0x000107c61574(puVar2);
  puVar2 = puStack_a8;
  puVar3 = puStack_a8;
  func_0x000107c3ebcc();
  func_0x000107c61170(puVar2);
  if ((param_1 & 1) != (uint)puVar3) {
    func_0x000100083b20(&puStack_a8);
    puVar2 = puStack_a8;
    lVar4 = *(long *)(puStack_a8 + _DAT_11302cc80);
    func_0x000107c61174();
    func_0x000107c61170(puVar2);
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      bVar1 = (byte)param_1 & 1;
      func_0x000100083b20(&puStack_a8);
      uVar6 = *(undefined8 *)(puStack_a8 + _DAT_112fef5b8);
      puVar7 = *(undefined8 **)((long)(puStack_a8 + _DAT_112fef5b8) + 8);
      func_0x000107c61434(puVar7);
      func_0x000107c61170(puStack_a8);
      func_0x000107c5fadc(uVar6,puVar7);
      func_0x000107c6142c();
      func_0x000103ee6b6c();
      uVar8 = *puVar7;
      uVar11 = puVar7[1];
      func_0x000107c61434(uVar11);
      func_0x000107c5fadc(uVar8,uVar11);
      func_0x000107c6142c(uVar11);
      puVar2 = &UNK_11056f5d8;
      puVar9 = puVar2;
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61614(puVar9 + 0x10);
      puVar3 = &UNK_11056fa60;
      func_0x000107c613fc(&UNK_11056fa60,0x19,7);
      *(undefined **)(puVar3 + 0x10) = puVar9;
      puVar3[0x18] = bVar1;
      puVar9 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = FUN_1029421d8;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11056fa78;
      ppuVar10 = &puStack_a8;
      puStack_80 = puVar3;
      func_0x000107c60bc4(ppuVar10);
      func_0x000107c61574(puStack_80);
      uVar11 = 0;
      FUN_1029421e4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      puVar3 = &UNK_11056fab0;
      func_0x000107c613fc(&UNK_11056fab0,0x19,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      puVar3[0x18] = bVar1;
      pcStack_88 = FUN_102942224;
      puStack_a8 = puVar9;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1012519d0;
      puStack_90 = &UNK_11056fac8;
      ppuVar12 = &puStack_a8;
      puStack_80 = puVar3;
      func_0x000107c60bc4();
      puVar2 = puStack_80;
      func_0x000107c61574();
      func_0x000107c5ffdc();
      func_0x000107c4e5c4(lVar5);
      func_0x000107c61170(puVar2);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61170(uVar11);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar8);
    }
  }
  return;
}



/* Entry: 10293d394; end: 10293d3ef;  */

void FUN_10293d394(long param_1,uint param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10293d070(param_2 & 1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10293d3f0; end: 10293d4df;  */

void FUN_10293d3f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = &UNK_11056f5d8;
    func_0x000107c613fc(&UNK_11056f5d8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_1);
    func_0x000107c613fc(param_2,0x20,7);
    *(undefined8 *)(param_2 + 0x10) = param_3;
    *(undefined **)(param_2 + 0x18) = puVar1;
    uVar2 = 1;
    func_0x0001001ca524(1,0x100,0x60,4,0,0,param_4,param_2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 10293d4e0; end: 10293d533;  */

void FUN_10293d4e0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10293d534();
    func_0x000107c61170(param_1);
  }
  return;
}



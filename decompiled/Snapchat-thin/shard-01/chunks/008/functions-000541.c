/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101515a04; end: 101515a23;  */

void FUN_101515a04(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 101515a24; end: 101515c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101515a24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  puVar2 = auStack_30;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dae878) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dae880);
  *puVar1 = 0x7079745f675f7464;
  puVar1[1] = 0xe900000000000065;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dae888);
  *puVar1 = 0x376c755f675f7464;
  puVar1[1] = 0xe800000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dae890);
  *puVar1 = 0x72755f675f7464;
  puVar1[1] = 0xe700000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dae898);
  *puVar1 = 0x73745f675f7464;
  puVar1[1] = 0xe700000000000000;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  func_0x000107c61180();
  FUN_101515c2c(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101515c2c; end: 101515edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101515c2c(ulong param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long extraout_x8;
  undefined1 *unaff_x20;
  long lVar13;
  long alStack_b0 [4];
  undefined1 auStack_90 [8];
  undefined1 *apuStack_88 [2];
  ulong uStack_78;
  ulong uStack_70;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  func_0x000107c5fb10();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_90 + lVar1;
  if (param_1 != 0) {
    func_0x000107c41770();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar4 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      uVar11 = uVar4 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar11 = param_2 >> 0x38 & 0xf;
      }
      if (uVar11 != 0) {
        uStack_78 = uVar4;
        uStack_70 = param_2;
        func_0x000107c5fb04(puVar7);
        FUN_100e8b654();
        uVar11 = 0;
        puVar5 = puVar7;
        func_0x000107c60214(puVar7,0,PTR___sSSN_11034da80,param_1);
        (**(code **)(lVar13 + 8))(puVar7,lVar3);
        func_0x000107c6142c(param_2);
        if (uVar11 >> 0x3c < 0xf) {
          puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
          func_0x000107c61168();
          puVar7 = puVar5;
          func_0x000107c5ee20(puVar5,uVar11);
          uStack_78 = 0;
          func_0x000107c3ab8c();
          func_0x000107c61180();
          func_0x000107c61170(puVar7);
          uVar4 = uStack_78;
          if (puVar6 == (undefined *)0x0) {
            uVar10 = uStack_78;
            func_0x000107c61174();
            func_0x000107c5ed30(uVar4);
            func_0x000107c61170(uVar10);
            func_0x000107c61654();
            func_0x0001000b44c0(puVar5,uVar11);
            func_0x000107c614ac(uVar4);
          }
          else {
            func_0x000107c61174();
            func_0x000107c60234(&uStack_78,puVar6);
            func_0x0001000b44c0(puVar5,uVar11);
            func_0x000107c615e8(puVar6);
            uVar9 = 0x112d550a0;
            func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
            ppuVar8 = apuStack_88;
            func_0x000107c6147c(ppuVar8,&uStack_78,PTR___sypN_11034f1a8 + 8,uVar9,6);
            puVar2 = _DAT_112dae878;
            if (((ulong)ppuVar8 & 1) != 0) {
              uVar12 = 1;
              func_0x000107c61428(unaff_x20 + (long)_DAT_112dae878,&uStack_78,1,0);
              uVar9 = *(undefined8 *)(unaff_x20 + (long)puVar2);
              *(undefined1 **)(unaff_x20 + (long)puVar2) = apuStack_88[0];
              puVar7 = apuStack_88[0];
              unaff_x20 = puVar2;
              goto LAB_101515ea0;
            }
          }
        }
        puVar7 = _DAT_112dae878;
        uVar12 = 1;
        func_0x000107c61428(unaff_x20 + (long)_DAT_112dae878,&uStack_78,1,0);
        uVar9 = *(undefined8 *)(unaff_x20 + (long)puVar7);
        *(undefined8 *)(unaff_x20 + (long)puVar7) = 0;
        unaff_x20 = puVar5;
        goto LAB_101515ea0;
      }
      func_0x000107c6142c(param_2);
    }
  }
  puVar7 = _DAT_112dae878;
  uVar12 = 1;
  func_0x000107c61428(unaff_x20 + (long)_DAT_112dae878,&uStack_78,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + (long)puVar7);
  *(undefined8 *)(unaff_x20 + (long)puVar7) = 0;
LAB_101515ea0:
  func_0x000107c6142c(uVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  *(undefined1 **)((long)alStack_b0 + lVar1) = unaff_x20;
  *(undefined1 **)((long)alStack_b0 + lVar1 + 8) = puVar7;
  *(undefined1 **)((long)alStack_b0 + lVar1 + 0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_b0 + lVar1 + 0x18) = FUN_101515edc;
  func_0x000107c61174(uVar12);
  func_0x000101515b28(uVar12);
  return;
}



/* Entry: 101515edc; end: 101515f0b; -[SCNotificationTrackingDataParser initWithNotification:] */

void FUN_101515edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000101515b28(param_3);
  return;
}



/* Entry: 101515f0c; end: 101515f5f; -[SCNotificationTrackingDataParser parseTrackingData:] */

/* WARNING: Possible PIC construction at 0x000101515f48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101515f4c) */

void FUN_101515f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101515c2c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101515f60; end: 101515f6b; -[SCNotificationTrackingDataParser campaignType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101515f60(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = _DAT_112dae878;
  func_0x000107c61428(param_1 + _DAT_112dae878,auStack_48,0x20,0);
  lVar3 = *(long *)(param_1 + lVar3);
  if (lVar3 == 0) {
    func_0x000107c614a8(auStack_48);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112dae880);
    lVar2 = ((undefined8 *)(param_1 + _DAT_112dae880))[1];
    func_0x000107c61174();
    FUN_101515f6c(uVar1,lVar2,lVar3);
    func_0x000107c614a8(auStack_48);
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      func_0x000107c5fadc(uVar1,lVar2);
      func_0x000107c6142c(lVar2);
      goto LAB_1015160c8;
    }
  }
  uVar1 = 0;
LAB_1015160c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101515f6c; end: 101515ff3;  */

undefined1  [16] FUN_101515f6c(long param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6142c(param_3);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 101515ff4; end: 101515fff; -[SCNotificationTrackingDataParser userL7] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101515ff4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = _DAT_112dae878;
  func_0x000107c61428(param_1 + _DAT_112dae878,auStack_48,0x20,0);
  lVar3 = *(long *)(param_1 + lVar3);
  if (lVar3 == 0) {
    func_0x000107c614a8(auStack_48);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112dae888);
    lVar2 = ((undefined8 *)(param_1 + _DAT_112dae888))[1];
    func_0x000107c61174();
    FUN_101515f6c(uVar1,lVar2,lVar3);
    func_0x000107c614a8(auStack_48);
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      func_0x000107c5fadc(uVar1,lVar2);
      func_0x000107c6142c(lVar2);
      goto LAB_1015160c8;
    }
  }
  uVar1 = 0;
LAB_1015160c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101516000; end: 10151600b; -[SCNotificationTrackingDataParser userRegion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101516000(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = _DAT_112dae878;
  func_0x000107c61428(param_1 + _DAT_112dae878,auStack_48,0x20,0);
  lVar3 = *(long *)(param_1 + lVar3);
  if (lVar3 == 0) {
    func_0x000107c614a8(auStack_48);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112dae890);
    lVar2 = ((undefined8 *)(param_1 + _DAT_112dae890))[1];
    func_0x000107c61174();
    FUN_101515f6c(uVar1,lVar2,lVar3);
    func_0x000107c614a8(auStack_48);
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      func_0x000107c5fadc(uVar1,lVar2);
      func_0x000107c6142c(lVar2);
      goto LAB_1015160c8;
    }
  }
  uVar1 = 0;
LAB_1015160c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10151600c; end: 101516017; -[SCNotificationTrackingDataParser taskSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151600c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = _DAT_112dae878;
  func_0x000107c61428(param_1 + _DAT_112dae878,auStack_48,0x20,0);
  lVar3 = *(long *)(param_1 + lVar3);
  if (lVar3 == 0) {
    func_0x000107c614a8(auStack_48);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112dae898);
    lVar2 = ((undefined8 *)(param_1 + _DAT_112dae898))[1];
    func_0x000107c61174();
    FUN_101515f6c(uVar1,lVar2,lVar3);
    func_0x000107c614a8(auStack_48);
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      func_0x000107c5fadc(uVar1,lVar2);
      func_0x000107c6142c(lVar2);
      goto LAB_1015160c8;
    }
  }
  uVar1 = 0;
LAB_1015160c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101516018; end: 1015160db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101516018(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = _DAT_112dae878;
  func_0x000107c61428(param_1 + _DAT_112dae878,auStack_48,0x20,0);
  lVar3 = *(long *)(param_1 + lVar3);
  if (lVar3 == 0) {
    func_0x000107c614a8(auStack_48);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + *param_3);
    lVar2 = ((undefined8 *)(param_1 + *param_3))[1];
    func_0x000107c61174();
    FUN_101515f6c(uVar1,lVar2,lVar3);
    func_0x000107c614a8(auStack_48);
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      func_0x000107c5fadc(uVar1,lVar2);
      func_0x000107c6142c(lVar2);
      goto LAB_1015160c8;
    }
  }
  uVar1 = 0;
LAB_1015160c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1015160dc; end: 10151610f;  */

void FUN_1015160dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101516110; end: 101516187; -[SCNotificationTrackingDataParser .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010151612c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101516154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101516130) */
/* WARNING: Removing unreachable block (ram,0x000101516158) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101516110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dae878));
  return;
}



/* Entry: 101516188; end: 1015161a7;  */

void FUN_101516188(void)

{
  func_0x000107c61168(&PTR_PTR_1127de668);
  return;
}



/* Entry: 1015161a8; end: 101516213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015161a8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10151659c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112dae8d0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101516214; end: 10151627f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101516214(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dae8d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101516280; end: 1015162df; -[_TtC37PhoneCodeScopedFactoryServiceProvider25SCPhoneCodeScopedServices init] */

void FUN_101516280(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PhoneCodeScopedFactoryServiceProvider.SCPhoneCodeScopedServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015162ac);
  (*pcVar1)();
}



/* Entry: 1015162e0; end: 1015162ef; -[_TtC37PhoneCodeScopedFactoryServiceProvider25SCPhoneCodeScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015162e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dae8d0));
  return;
}



/* Entry: 1015162f0; end: 10151635b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015162f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103d5bc0;
  func_0x000107c613fc(&UNK_1103d5bc0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101516634,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10151635c; end: 1015163f7;  */

void FUN_10151635c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103d5ad0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103d5ad0;
  return;
}



/* Entry: 1015163f8; end: 10151642f;  */

void FUN_1015163f8(long *param_1)

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



/* Entry: 101516430; end: 101516437;  */

undefined8 FUN_101516430(void)

{
  return 0x1b;
}



/* Entry: 101516438; end: 10151656b;  */

void FUN_101516438(undefined8 *param_1)

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
  puVar1 = &UNK_1103d5be8;
  func_0x000107c613fc(&UNK_1103d5be8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10151660c;
  func_0x00010058fa64(FUN_10151660c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10151656c; end: 10151659b;  */

undefined ** FUN_10151656c(void)

{
  return &PTR_DAT_113066e20;
}



/* Entry: 10151659c; end: 1015165bb;  */

void FUN_10151659c(void)

{
  func_0x000107c61168(&PTR_PTR_1127de748);
  return;
}



/* Entry: 1015165bc; end: 10151660b;  */

undefined1  [16] FUN_1015165bc(void)

{
  return ZEXT816(0x1103d5b20);
}



/* Entry: 10151660c; end: 101516633;  */

void FUN_10151660c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101516634; end: 101516637;  */

void FUN_101516634(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101516638; end: 10151675f;  */

void FUN_101516638(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112dae938,&UNK_10d956f90);
  puVar1 = &UNK_1103d5c28;
  func_0x000107c613fc(&UNK_1103d5c28,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101516760,puVar1);
  return;
}



/* Entry: 101516760; end: 101516777;  */

/* WARNING: Possible PIC construction at 0x000101516748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010151674c) */

void FUN_101516760(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1103d5c70;
  func_0x000107c613fc(&UNK_1103d5c70,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112dae940;
  func_0x0001000285a8(0x112dae940,&UNK_10d956fc8);
  func_0x000107c613fc();
  pcVar4 = FUN_101516a84;
  func_0x0001000841fc(FUN_101516a84,puVar2,uVar3);
  func_0x000100084214(&UNK_10d956fa0,0x27,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101516778; end: 101516a83;  */

void FUN_101516778(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112dae948,&UNK_10d956fd0);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1015177e4();
  func_0x000100082720("PhoneCodeScopeGraphBridgeServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112dae950,&UNK_10d956fe0);
  puVar3 = &UNK_1103d5c98;
  func_0x000107c613fc(&UNK_1103d5c98,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar9 = 0x101516a8c;
  func_0x0001000823a8(0x101516a8c,puVar3);
  func_0x000100082720("SCPhoneCodeEntryPointWrapperServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1015163f8;
  func_0x0001000823a8(FUN_1015163f8,0);
  func_0x000100082720("SCPhoneCodeScopedServicesCleanupRelayServiceProvider",0x34,2);
  func_0x0001000285a8(0x112dae958,&UNK_10d956fd8);
  puVar3 = &UNK_1103d5cc0;
  func_0x000107c613fc(&UNK_1103d5cc0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x101516a98;
  func_0x0001000823a8(0x101516a98,puVar3);
  func_0x000100082720("SCPhoneCodeScopeInitializationPluginRegistryServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112dae8d8,&UNK_10d956da0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101516aa4;
  func_0x0001000823a8(0x101516aa4,uVar5);
  func_0x000100082720("SCPhoneCodeScopeInitializationServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112dae8c8,&UNK_10d956d90);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101516aac;
  func_0x0001000823a8(0x101516aac,uVar6);
  func_0x000100082720("SCPhoneCodeScopedServicesServiceProvider",0x28,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1103d5ce8;
  func_0x000107c613fc(&UNK_1103d5ce8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_101516ae0;
  func_0x0001000823a8(FUN_101516ae0,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCPhoneCodeScopeEntryPointProvider",0x22,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 101516a84; end: 101516ab3;  */

void FUN_101516a84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112dae948,&UNK_10d956fd0);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1015177e4();
  func_0x000100082720("PhoneCodeScopeGraphBridgeServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112dae950,&UNK_10d956fe0);
  puVar3 = &UNK_1103d5c98;
  func_0x000107c613fc(&UNK_1103d5c98,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar6);
  uVar4 = 0x101516a8c;
  func_0x0001000823a8(0x101516a8c,puVar3);
  func_0x000100082720("SCPhoneCodeEntryPointWrapperServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_1015163f8;
  func_0x0001000823a8(FUN_1015163f8,0);
  func_0x000100082720("SCPhoneCodeScopedServicesCleanupRelayServiceProvider",0x34,2);
  func_0x0001000285a8(0x112dae958,&UNK_10d956fd8);
  puVar3 = &UNK_1103d5cc0;
  func_0x000107c613fc(&UNK_1103d5cc0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(code **)(puVar3 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101516a98;
  func_0x0001000823a8(0x101516a98,puVar3);
  func_0x000100082720("SCPhoneCodeScopeInitializationPluginRegistryServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112dae8d8,&UNK_10d956da0);
  func_0x000107c6157c(uVar6);
  uVar9 = 0x101516aa4;
  func_0x0001000823a8(0x101516aa4,uVar6);
  func_0x000100082720("SCPhoneCodeScopeInitializationServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112dae8c8,&UNK_10d956d90);
  func_0x000107c6157c(uVar9);
  uVar7 = 0x101516aac;
  func_0x0001000823a8(0x101516aac,uVar9);
  func_0x000100082720("SCPhoneCodeScopedServicesServiceProvider",0x28,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1103d5ce8;
  func_0x000107c613fc(&UNK_1103d5ce8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  pcVar8 = FUN_101516ae0;
  func_0x0001000823a8(FUN_101516ae0,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCPhoneCodeScopeEntryPointProvider",0x22,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 101516ab4; end: 101516adf;  */

void FUN_101516ab4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101516ae0; end: 101516ae7;  */

void FUN_101516ae0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103d5ad0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103d5ad0;
  return;
}



/* Entry: 101516ae8; end: 101516b97;  */

void FUN_101516ae8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101516ef0();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101516d2c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101516b98; end: 101516c07;  */

undefined8 FUN_101516b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101516d2c(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101516c08; end: 101516c3b;  */

void FUN_101516c08(void)

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



/* Entry: 101516c3c; end: 101516c43;  */

undefined8 FUN_101516c3c(void)

{
  return 0x1b;
}



/* Entry: 101516c44; end: 101516cc7;  */

void FUN_101516c44(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101516f30,param_2,FUN_101516f34,param_2,FUN_101516f5c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101516cc8; end: 101516d17;  */

undefined8 FUN_101516cc8(void)

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



/* Entry: 101516d18; end: 101516d2b;  */

void FUN_101516d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1103d5d00;
  return;
}



/* Entry: 101516d2c; end: 101516ed3;  */

void FUN_101516d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a7630;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x646f43656e6f6870;
  func_0x000107c5fadc(0x646f43656e6f6870,0xee0065706f635365);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101516ed4; end: 101516eef;  */

undefined ** FUN_101516ed4(void)

{
  return &PTR_DAT_113066e20;
}



/* Entry: 101516ef0; end: 101516f0f;  */

void FUN_101516ef0(void)

{
  func_0x000107c61168(&PTR_PTR_112dae9c8);
  return;
}



/* Entry: 101516f10; end: 101516f33;  */

undefined1  [16] FUN_101516f10(void)

{
  return ZEXT816(0x1103d5d40);
}



/* Entry: 101516f34; end: 101516f5b;  */

void FUN_101516f34(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101516f5c; end: 101516f63;  */

undefined8 FUN_101516f5c(void)

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



/* Entry: 101516f64; end: 101516f9f;  */

void FUN_101516f64(undefined8 *param_1,undefined8 param_2)

{
  FUN_101516fa0();
  func_0x0001000a7f38("SCPhoneCodeScopeInitializationPluginRegistryServiceProvider",0x3b,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101516fa0; end: 10151718b;  */

void FUN_101516fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074da00;
  ppuVar4 = &PTR_DAT_113066e20;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1103d5d90;
  func_0x000107c613fc(&UNK_1103d5d90,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112daea38;
  func_0x0001000285a8(0x112daea38,&UNK_10d957100);
  func_0x0001000a6ee8(&UNK_1103d5fa0,"PhoneCodeScopeGraphBridgeScopeInitializationPluginKey",0x35,2,
                      FUN_10151718c,puVar2,uVar3,&UNK_1103d5fa0,&PTR_DAT_112daeac8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1103d5d40,"SCPhoneCodeEntryPointWrapperScopeInitializationPluginKey",0x38
                      ,2,FUN_101517240,param_3,uVar3,&UNK_1103d5d40,&PTR_DAT_112dae960);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1103d5db8;
  func_0x000107c613fc(&UNK_1103d5db8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1103d5b60,"SCPhoneCodeScopedServicesScopeInitializationPluginKey",0x35,2,
                      FUN_1015172f0,puVar2,uVar3,&UNK_1103d5b60,&PTR_DAT_112dae8e0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112daea40;
  func_0x0001000285a8(0x112daea40,&UNK_10d957108);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10151718c; end: 1015171cb;  */

void FUN_10151718c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1015178c8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("PhoneCodeScopeGraphBridgeScopeInitializationPluginProvider",0x3a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1015171cc; end: 10151723f;  */

void FUN_1015171cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10151732c;
  func_0x0001000823a8(0x10151732c,param_3);
  func_0x000100082720("SCPhoneCodeEntryPointWrapperScopeInitializationPluginProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101517240; end: 101517247;  */

void FUN_101517240(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10151732c;
  func_0x0001000823a8();
  func_0x000100082720("SCPhoneCodeEntryPointWrapperScopeInitializationPluginProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101517248; end: 1015172ef;  */

void FUN_101517248(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103d5de0;
  func_0x000107c613fc(&UNK_1103d5de0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101517324;
  func_0x0001000823a8(FUN_101517324,puVar1);
  func_0x000100082720("SCPhoneCodeScopedServicesScopeInitializationPluginProvider",0x3a,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1015172f0; end: 1015172f7;  */

void FUN_1015172f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1103d5de0;
  func_0x000107c613fc(&UNK_1103d5de0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101517324;
  func_0x0001000823a8(FUN_101517324,puVar3);
  func_0x000100082720("SCPhoneCodeScopedServicesScopeInitializationPluginProvider",0x3a,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1015172f8; end: 101517323;  */

void FUN_1015172f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101517324; end: 101517333;  */

void FUN_101517324(undefined8 *param_1)

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
  puVar1 = &UNK_1103d5be8;
  func_0x000107c613fc(&UNK_1103d5be8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10151660c;
  func_0x00010058fa64(FUN_10151660c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101517334; end: 1015173bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101517334(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1015176f4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112daea48) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112daea50) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015173bc);
  (*pcVar1)();
}



/* Entry: 1015173bc; end: 10151741b; -[_TtC25PhoneCodeScopeGraphBridge40PhoneCodeScopeGraphBridgeSaberEntryPoint init] */

void FUN_1015173bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PhoneCodeScopeGraphBridge.PhoneCodeScopeGraphBridgeSaberEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015173e8);
  (*pcVar1)();
}



/* Entry: 10151741c; end: 101517453; -[_TtC25PhoneCodeScopeGraphBridge40PhoneCodeScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101517438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010151743c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151741c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daea48));
  return;
}



/* Entry: 101517454; end: 10151747b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101517454(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112daea50),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112daea48));
  return;
}



/* Entry: 10151747c; end: 10151749b;  */

void FUN_10151747c(void)

{
  func_0x000107c61168(&PTR_PTR_1127de808);
  return;
}



/* Entry: 10151749c; end: 101517523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10151749c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daea80) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112daea88);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101517524);
  (*pcVar2)();
}



/* Entry: 101517524; end: 10151760b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101517524(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112daea80);
  *(undefined **)(unaff_x20 + _DAT_112daea80) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112daea88);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112daea88))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1103d5f00;
  func_0x000107c613fc(&UNK_1103d5f00,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101517610,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10151760c; end: 101517617;  */

void FUN_10151760c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101517618; end: 101517677; -[_TtC25PhoneCodeScopeGraphBridge40SCPhoneCodeScopedServicesSaberEntryPoint init] */

void FUN_101517618(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PhoneCodeScopeGraphBridge.SCPhoneCodeScopedServicesSaberEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101517644);
  (*pcVar1)();
}



/* Entry: 101517678; end: 1015176af; -[_TtC25PhoneCodeScopeGraphBridge40SCPhoneCodeScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101517678(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112daea88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daea80));
  return;
}



/* Entry: 1015176b0; end: 1015176b3;  */

void FUN_1015176b0(void)

{
  return;
}



/* Entry: 1015176b4; end: 1015176d3;  */

void FUN_1015176b4(void)

{
  FUN_101517524();
  return;
}



/* Entry: 1015176d4; end: 1015176f3;  */

void FUN_1015176d4(void)

{
  func_0x000107c61168(&PTR_PTR_1127de8d0);
  return;
}



/* Entry: 1015176f4; end: 1015177c3;  */

undefined8 FUN_1015176f4(void)

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
  
  func_0x000107c61428(0x112daeab8,&uStack_40,0x20,0);
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
    FUN_1015177c4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1015177c4; end: 1015177e3;  */

void FUN_1015177c4(void)

{
  func_0x000107c61168(&PTR_PTR_1127de998);
  return;
}



/* Entry: 1015177e4; end: 10151784f;  */

void FUN_1015177e4(void)

{
  func_0x0001000285a8(0x112daeac0,&UNK_10d9571b8);
  func_0x0001000823a8(0x101517824,0);
  return;
}



/* Entry: 101517850; end: 10151788b; -[_TtC25PhoneCodeScopeGraphBridge33PhoneCodeScopeGraphBridgeServices init] */

void FUN_101517850(undefined8 param_1)

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



/* Entry: 10151788c; end: 1015178bf;  */

void FUN_10151788c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1015178c0; end: 1015178c7;  */

undefined8 FUN_1015178c0(void)

{
  return 0x1b;
}



/* Entry: 1015178c8; end: 101517a3f;  */

void FUN_1015178c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103d5f48;
  func_0x000107c613fc(&UNK_1103d5f48,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101517a40,puVar1);
  return;
}



/* Entry: 101517a40; end: 101517a47;  */

void FUN_101517a40(undefined8 *param_1)

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
  func_0x000107c61428(0x112daeab8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112daeab8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1103d5fe0;
  func_0x000107c613fc(&UNK_1103d5fe0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101517af4;
  func_0x00010058fa64(0x101517af4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101517a48; end: 101517aa3;  */

void FUN_101517a48(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112daeab8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112daeab8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101517aa4; end: 101517afb;  */

undefined ** FUN_101517aa4(void)

{
  return &PTR_DAT_113066e20;
}



/* Entry: 101517afc; end: 101517b43; -[SCPhoneCodeScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101517afc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daeb18;
  func_0x000107c61428(param_1 + _DAT_112daeb18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101517b44; end: 101517b9b; -[SCPhoneCodeScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101517b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daeb18;
  func_0x000107c61428(param_1 + _DAT_112daeb18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101517b9c; end: 101517be3; -[SCPhoneCodeScopeGraphBridgeSaberEntryPoint phoneCodeScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101517b9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daeb20;
  func_0x000107c61428(param_1 + _DAT_112daeb20,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101517be4; end: 101517c47; -[SCPhoneCodeScopeGraphBridgeSaberEntryPoint setPhoneCodeScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101517be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daeb20;
  func_0x000107c61428(param_1 + _DAT_112daeb20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101517c48; end: 101517d7b;  */

/* WARNING: Possible PIC construction at 0x000101517d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101517d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101517d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101517d04) */
/* WARNING: Removing unreachable block (ram,0x000101517d20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101517c48(void)

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
  func_0x000107c4e6a4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_10151747c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1015176f4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101517d7c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112daea48) = lVar5;
    *(long *)(lVar4 + _DAT_112daea50) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101517d7c; end: 101517da3; -[SCPhoneCodeScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101517d7c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101517c48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101517da4; end: 101517de7; -[SCPhoneCodeScopeGraphBridgeSaberEntryPoint end] */

void FUN_101517da4(undefined8 param_1)

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



/* Entry: 101517de8; end: 101517f7f;  */

void FUN_101517de8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef1073720)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010ef8c8e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PhoneCodeScopeGraphBridge/SCPhoneCodeScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4a,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101517f80);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57350();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101517f80; end: 10151802b; -[SCPhoneCodeScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101517f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101517de8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10151802c; end: 101518097; -[SCPhoneCodeScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151802c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112daeb18,0);
  *(undefined8 *)(param_1 + _DAT_112daeb20) = 0;
  *(undefined8 *)(param_1 + _DAT_112daeb28) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101518098; end: 1015180cb;  */

void FUN_101518098(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1015180cc; end: 101518113; -[SCPhoneCodeScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001015180f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015180fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015180cc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112daeb18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daeb20));
  return;
}



/* Entry: 101518114; end: 101518133;  */

void FUN_101518114(void)

{
  func_0x000107c61168(&PTR_PTR_1127dea48);
  return;
}



/* Entry: 101518134; end: 10151817b; -[SCSCPhoneCodeScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101518134(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daeb58;
  func_0x000107c61428(param_1 + _DAT_112daeb58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10151817c; end: 1015181d3; -[SCSCPhoneCodeScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151817c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daeb58;
  func_0x000107c61428(param_1 + _DAT_112daeb58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1015181d4; end: 1015182ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015181d4(undefined8 param_1,long param_2)

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
    FUN_1015176d4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112daea80) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1015182ac);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112daea88);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112daeb60);
    *(long **)(unaff_x20 + _DAT_112daeb60) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1015182ac; end: 1015182d3; -[SCSCPhoneCodeScopedServicesSaberEntryPoint begin] */

void FUN_1015182ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1015181d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1015182d4; end: 10151844b;  */

/* WARNING: Possible PIC construction at 0x00010151833c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015183d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101518340) */
/* WARNING: Removing unreachable block (ram,0x0001015183d8) */
/* WARNING: Removing unreachable block (ram,0x0001015183f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015182d4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112daeb60);
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



/* Entry: 10151844c; end: 101518453;  */

void FUN_10151844c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101518454; end: 101518487; -[SCSCPhoneCodeScopedServicesSaberEntryPoint end] */

void FUN_101518454(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1015182d4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101518488; end: 1015185a7;  */

void FUN_101518488(long param_1,long param_2,long param_3)

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
                        "PhoneCodeScopeGraphBridge/SCSCPhoneCodeScopedServicesSaberEntryPoint.swift"
                        ,0x4a,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1015185a8);
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


